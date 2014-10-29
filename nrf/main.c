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

#define LED  13

#define MISO 15
#define MOSI 14
#define CSN  18
#define SCK  16
#define INT  19

/*
 * The SPI tx buffers are structured in a queue implemented as a a ring-array.
 * When `spi_txq_head == spi_txq_tail`, there is nothing to send. Otherwise,
 * `spi_txq_head` has the next command to send, and spi_txq_head is where to
 * enqueue the next command.
 */

#define SPI_PKT_LEN 10
#define SPI_TX_QUEUE_SIZE 10
#define spi_tx_buf spi_tx_queue[spi_txq_head]

uint8_t spi_rx_buf[SPI_PKT_LEN];

int spi_txq_head = 0;
int spi_txq_tail = 0;
uint8_t spi_tx_queue[SPI_TX_QUEUE_SIZE][SPI_PKT_LEN];
uint8_t spi_tx_empty[SPI_PKT_LEN];

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
  if ((spi_txq_tail - spi_txq_head) % SPI_TX_QUEUE_SIZE == 1) {
    APP_ERROR_CHECK(spi_slave_buffers_set(
          spi_tx_buf, spi_rx_buf,
          sizeof(spi_tx_buf), sizeof(spi_rx_buf)));
  }
  return 0;
}

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

inline bool spi_empty() {
  return spi_txq_tail == spi_txq_head;
}

enum SPI_CMDS {
  RESET_CMD = 1,
  CONNECTED_CMD = 3,
  DISCONNECTED_CMD = 5
};

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


  uint8_t reset_cmd[1] = {RESET_CMD};
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

}

void assert_nrf_callback(uint16_t line_num, const uint8_t *file_name) {
  app_error_handler(0xff, line_num, file_name);
}

void ble_handler(ble_evt_t *evt) {
  uint8_t spi_cmd[1];
  switch(evt->header.evt_id) {
    case BLE_GAP_EVT_CONNECTED:
      spi_cmd[0] = CONNECTED_CMD;
      spi_enqueue_cmd(spi_cmd, sizeof(spi_cmd));
      break;
    case BLE_GAP_EVT_DISCONNECTED:
      spi_cmd[0] = DISCONNECTED_CMD;
      spi_enqueue_cmd(spi_cmd, sizeof(spi_cmd));
      break;
  }
}

void spi_handler(spi_slave_evt_t evt) {
  switch (evt.evt_type) {
    case SPI_SLAVE_BUFFERS_SET_DONE:
      if (spi_tx_buf[0] & 0x1) {
        nrf_gpio_pin_set(INT);
      }
      break;
    case SPI_SLAVE_XFER_DONE:
      nrf_gpio_pin_clear(INT);
      switch (spi_rx_buf[0]) {
        case 1: // Started...
          break;
        case 2: // start advertising
          APP_ERROR_CHECK(sd_ble_gap_adv_start(&adv_params));
          break;
        default:
          break;
      }
      if (spi_txq_tail == spi_txq_head) {
        spi_tx_buf[0] = 0;
      } else {
        spi_txq_head = (spi_txq_head + 1) % SPI_TX_QUEUE_SIZE;
      }
      APP_ERROR_CHECK(spi_slave_buffers_set(
            spi_tx_buf, spi_rx_buf,
            sizeof(spi_tx_buf), sizeof(spi_rx_buf)));
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

