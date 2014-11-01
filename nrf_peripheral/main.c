/* Send an advertisement periodically
 */

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include "ble.h"
#include "ble_advdata.h"
#include "ble_stack_handler_types.h"
#include "app_error.h"
#include "softdevice_handler.h"
#include "nordic_common.h"
#include "nrf_delay.h"
#include "spi_slave.h"
#include "nrf_gpio.h"

#include "firestorm.h"
#include "tinyos_ble.h"

uint16_t conn_handle = BLE_CONN_HANDLE_INVALID; // empty value

/*
 * The SPI tx buffers are structured in a queue implemented as a a ring-array.
 * When `spi_txq_head == spi_txq_tail`, there is nothing to send. Otherwise,
 * `spi_txq_head` has the next command to send, and spi_txq_head is where to
 * enqueue the next command.
 */

#define SPI_PKT_LEN 50
#define SPI_TX_QUEUE_SIZE 10

uint8_t spi_rx_buf[SPI_PKT_LEN];

int spi_txq_head = 0;
int spi_txq_tail = 0;
uint8_t spi_tx_queue[SPI_TX_QUEUE_SIZE][SPI_PKT_LEN];
uint8_t spi_tx_empty[SPI_PKT_LEN];
uint8_t *spi_tx_cur;

uint8_t* spi_dequeue_cmd() {
  uint8_t* result;
  if (spi_txq_tail == spi_txq_head) {
    result = spi_tx_empty;
  } else {
    result = spi_tx_queue[spi_txq_head];
    spi_txq_head = (spi_txq_head + 1) % SPI_TX_QUEUE_SIZE;
  }
  return result;
}

/*
 * spi_enqueue_cmd
 *
 * Enqueue a command for transmission by setting it in the tail of the queue
 * and incrementing the tail. If the tail wraps around and reaches the head,
 * return an error.
 */
int spi_enqueue_cmd(uint8_t* cmd, size_t len) {
  if ((spi_txq_tail + 1) % SPI_TX_QUEUE_SIZE == spi_txq_head) {
    return -1;
  }
  memcpy(spi_tx_queue[spi_txq_tail], cmd, len);
  spi_txq_tail = (spi_txq_tail + 1) % SPI_TX_QUEUE_SIZE;
  if ((spi_txq_head + 1) % SPI_TX_QUEUE_SIZE == spi_txq_tail) {
    spi_tx_cur = spi_dequeue_cmd();
    APP_ERROR_CHECK(spi_slave_buffers_set(
          spi_tx_cur, spi_rx_buf,
          SPI_PKT_LEN, sizeof(spi_rx_buf)));
  }
  return 0;
}

inline bool spi_empty() {
  return spi_txq_tail == spi_txq_head;
}

uint16_t service_handles[10];
ble_gatts_char_handles_t char_handles[20];

ble_gap_adv_params_t adv_params = {
  .type = BLE_GAP_ADV_TYPE_ADV_IND,
  .fp = BLE_GAP_ADV_FP_ANY,
  .interval = BLE_GAP_ADV_INTERVAL_MIN,
  .timeout = BLE_GAP_ADV_TIMEOUT_GENERAL_UNLIMITED
};

void init_spi(spi_slave_event_handler_t handler) {
  memset(spi_tx_queue, 0, SPI_PKT_LEN * SPI_TX_QUEUE_SIZE);
  memset(spi_tx_empty, 0, SPI_PKT_LEN);

  spi_slave_config_t config = {
    .pin_miso  = MISO,
    .pin_mosi  = MOSI,
    .pin_sck   = SCK,
    .pin_csn   = CSN,
    .mode      = SPI_MODE_0,
    .bit_order = SPIM_MSB_FIRST,
    .def_tx_character = 0xee,
    .orc_tx_character = 0xee
  };
  APP_ERROR_CHECK(spi_slave_evt_handler_register(handler));
  APP_ERROR_CHECK(spi_slave_init(&config));


  uint8_t reset_cmd[1] = {SPI_RESET};
  spi_enqueue_cmd(reset_cmd, sizeof(reset_cmd));
}

void app_error_handler(uint32_t error_code,
                       uint32_t line_num, const uint8_t *file) {
  /*simple_uart_putstring((const uint8_t*)"error! ");
  simple_uart_put((line_num / 100) + 48);
  simple_uart_put((line_num % 100) / 10 + 48);
  simple_uart_put((line_num % 10) + 48);
  simple_uart_putstring((const uint8_t*)"  ");
  simple_uart_put(error_code + 48);
  simple_uart_putstring((const uint8_t*)"\r\n");*/
  uint8_t debug_cmd[40];
  debug_cmd[0] = SPI_DEBUG;
  sprintf(debug_cmd + 1, "%d: %d", error_code, line_num);
  memcpy(spi_tx_queue[spi_txq_tail], debug_cmd, strlen(debug_cmd));
  spi_txq_tail = (spi_txq_tail + 1) % SPI_TX_QUEUE_SIZE;
}

void assert_nrf_callback(uint16_t line_num, const uint8_t *file_name) {
  app_error_handler(0xff, line_num, file_name);
}

void ble_handler(ble_evt_t *evt) {
  uint8_t spi_cmd[1];
  switch(evt->header.evt_id) {
    case BLE_GAP_EVT_CONNECTED:
      nrf_gpio_pin_set(LED);
      conn_handle = evt->evt.gap_evt.conn_handle;
      spi_cmd[0] = SPI_CONNECT;
      spi_enqueue_cmd(spi_cmd, sizeof(spi_cmd));
      break;
    case BLE_GAP_EVT_DISCONNECTED:
      nrf_gpio_pin_clear(LED);
      conn_handle = BLE_CONN_HANDLE_INVALID;
      spi_cmd[0] = SPI_DISCONNECT;
      spi_enqueue_cmd(spi_cmd, sizeof(spi_cmd));
      break;
  }
}

/**
 * Add primary service to BLE stack and record mapping from SPI handle to BLE
 * handle.
 *
 * Packet structure:
 *
 * +---0---+---1----+---2---+--3--+
 * |Opcode | Handle | 2-byte UUID |
 * +-------+--------+-------+-----+
 *
 * 2-byte UUID is is network order (lower byte first)
 */
void add_primary_service_cmd(uint8_t *req) {
  uint8_t spi_handle = req[1];

  ble_uuid_t uuid;
  uuid.type = BLE_UUID_TYPE_BLE;
  uuid.uuid = (uint16_t)req[2] | (((uint16_t)req[3]) << 8);
  APP_ERROR_CHECK(
      sd_ble_gatts_service_add(BLE_GATTS_SRVC_TYPE_PRIMARY,
                               &uuid, service_handles + spi_handle));
}

/**
 * Add characteristic to service and record mapping from SPI handle to BLE
 * handle.
 *
 * Packet structure:
 *
 * +------0------+------1------+------2------+------3------+------4------+
 * |   Opcode    | Svc. Handle | Char Handle |         2-byte UUID       |
 * +-------------+-------------+-------------+-------------+-------------+
 *
 * 2-byte UUID is is network order (lower byte first)
 */
void add_characteristic_cmd(uint8_t* req) {
  uint8_t spi_svc_handle = req[1];
  uint16_t service_handle = service_handles[spi_svc_handle];

  uint8_t spi_char_handle = req[2];

  ble_uuid_t uuid;
  uuid.type = BLE_UUID_TYPE_BLE;
  uuid.uuid = (uint16_t)req[3] | (((uint16_t)req[4]) << 8);

  ble_gatts_attr_md_t attr_md;
  BLE_GAP_CONN_SEC_MODE_SET_OPEN(&attr_md.read_perm);
  BLE_GAP_CONN_SEC_MODE_SET_OPEN(&attr_md.write_perm);
  attr_md.vlen = true;
  attr_md.vloc = BLE_GATTS_VLOC_STACK;
  attr_md.rd_auth = false;
  attr_md.wr_auth = false;

  ble_gatts_attr_t char_attr = {
    .p_uuid = &uuid,
    .p_attr_md = &attr_md,
    .init_len = 0,
    .init_offs = 0,
    .max_len = 24,
    .p_value = ""
  };

  ble_gatts_char_md_t char_md;
  ble_gatts_char_md_t meta;
  memset(&meta, 0, sizeof(ble_gatts_char_md_t));
  meta.char_props.read          = 1;
  meta.char_props.notify          = 1;
  meta.p_char_user_desc         = "Random";
  meta.char_user_desc_max_size  = strlen((char*) "Random");
  meta.char_user_desc_size      = strlen((char*) "Random");

  APP_ERROR_CHECK(sd_ble_gatts_characteristic_add(service_handle, &meta, &char_attr,
         char_handles + spi_char_handle));
  
}

void notify_cmd(uint8_t *rx_buf) {
  if (conn_handle == BLE_CONN_HANDLE_INVALID) {
    return;
  }
  uint8_t spi_handle = rx_buf[1];
  uint16_t handle = char_handles[spi_handle].value_handle;
  uint16_t len = (uint16_t)rx_buf[2];
  ble_gatts_hvx_params_t hvx = {
    .handle = handle,
    .type = BLE_GATT_HVX_NOTIFICATION,
    .offset = 0,
    .p_len = &len,
    .p_data = rx_buf + 3
  };
  APP_ERROR_CHECK(sd_ble_gatts_hvx(conn_handle, &hvx));
}

void spi_handler(spi_slave_evt_t evt) {
  switch (evt.evt_type) {
    case SPI_SLAVE_BUFFERS_SET_DONE:
      if (spi_tx_cur[0] != 0) {
        nrf_gpio_pin_set(INT);
      }
      break;
    case SPI_SLAVE_XFER_DONE:
      nrf_gpio_pin_clear(INT);
      switch (spi_rx_buf[0]) {
        case SPI_RESET: // Reset system
          NVIC_SystemReset();
          break;
        case SPI_START_ADVERTISING: // start advertising
          APP_ERROR_CHECK(sd_ble_gap_adv_start(&adv_params));
          break;
        case SPI_STOP_ADVERTISING:
          APP_ERROR_CHECK(sd_ble_gap_adv_stop());
        case SPI_ADD_SERVICE:
          nrf_gpio_pin_set(LED);
          add_primary_service_cmd(spi_rx_buf);
          break;
        case SPI_ADD_CHARACTERISTIC:
          add_characteristic_cmd(spi_rx_buf);
          break;
        case SPI_NOTIFY:
          notify_cmd(spi_rx_buf);
          break;
        default:
          break;
      }
      spi_tx_cur = spi_dequeue_cmd();
      APP_ERROR_CHECK(spi_slave_buffers_set(
            spi_tx_cur, spi_rx_buf,
            SPI_PKT_LEN, sizeof(spi_rx_buf)));
      break;
    default:
      break;
  }
}

/**
 * @brief Function for application main entry.
 */
int main(void)
{
  nrf_gpio_cfg_output(LED);
  nrf_gpio_cfg_output(INT);

  SOFTDEVICE_HANDLER_INIT(NRF_CLOCK_LFCLKSRC_RC_250_PPM_250MS_CALIBRATION, false);
  APP_ERROR_CHECK(softdevice_ble_evt_handler_set(&ble_handler));

  ble_enable_params_t ble_enable = {
    .gatts_enable_params = { .service_changed = 0 }
  };
  APP_ERROR_CHECK(sd_ble_enable(&ble_enable));

  ble_gap_conn_sec_mode_t sec_mode;
  BLE_GAP_CONN_SEC_MODE_SET_OPEN(&sec_mode);
  APP_ERROR_CHECK(sd_ble_gap_device_name_set(&sec_mode, (uint8_t*)"Firestorm", 9));

  uint8_t adv_flags = BLE_GAP_ADV_FLAGS_LE_ONLY_GENERAL_DISC_MODE;
  int8_t tx_power_level = 0;
  sd_ble_gap_tx_power_set(tx_power_level);
  ble_advdata_t advdata = {
    .name_type               = BLE_ADVDATA_FULL_NAME,
    .include_appearance      = true,
    .p_tx_power_level        = &tx_power_level,
    .flags.size              = 1,
    .flags.p_data            = &adv_flags
  };

  APP_ERROR_CHECK(ble_advdata_set(&advdata, NULL));

  init_spi(&spi_handler);
  while (1) {
    APP_ERROR_CHECK(sd_app_evt_wait());
  }
}

