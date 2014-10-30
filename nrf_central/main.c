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

/*
 * The SPI tx buffers are structured in a queue implemented as a a ring-array.
 * When `spi_txq_head == spi_txq_tail`, there is nothing to send. Otherwise,
 * `spi_txq_head` has the next command to send, and spi_txq_head is where to
 * enqueue the next command.
 */

#define SPI_PKT_LEN 50
#define SPI_TX_QUEUE_SIZE 3

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
  if ((spi_txq_tail - spi_txq_head) % SPI_TX_QUEUE_SIZE == 1) {
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

ble_gap_scan_params_t scan_params = {
  .active = 0,
  .selective = 0,
  .p_whitelist = NULL,
  .interval = 0x00A0,
  .window = 0x0050,
  .timeout = 0
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
  nrf_gpio_pin_set(LED);
  /*simple_uart_putstring((const uint8_t*)"error! ");
  simple_uart_put((line_num / 100) + 48);
  simple_uart_put((line_num % 100) / 10 + 48);
  simple_uart_put((line_num % 10) + 48);
  simple_uart_putstring((const uint8_t*)"  ");
  simple_uart_put(error_code + 48);
  simple_uart_putstring((const uint8_t*)"\r\n");*/
  uint8_t debug_cmd[10];
  debug_cmd[0] = SPI_DEBUG;
  sprintf(debug_cmd + 1, "%d: %d", error_code, line_num);
  memcpy(spi_tx_queue[spi_txq_tail], debug_cmd, strlen(debug_cmd));
  spi_txq_tail = (spi_txq_tail + 1) % SPI_TX_QUEUE_SIZE;
}

void assert_nrf_callback(uint16_t line_num, const uint8_t *file_name) {
  app_error_handler(0xff, line_num, file_name);
}

void spi_notify_advertisement(ble_gap_evt_adv_report_t adv_report) {
  uint8_t spi_cmd[41];
  spi_cmd[0] = SPI_ADVERTISE;
  memcpy(spi_cmd + 1, adv_report.peer_addr.addr,
      sizeof(adv_report.peer_addr.addr));
  spi_cmd[7] = adv_report.rssi;
  spi_cmd[8] = adv_report.dlen;
  memcpy(spi_cmd + 9, adv_report.data, adv_report.dlen);
  spi_enqueue_cmd(spi_cmd, sizeof(spi_cmd));
}

void ble_handler(ble_evt_t *evt) {
  uint8_t spi_cmd[32];
  switch(evt->header.evt_id) {
    case BLE_GAP_EVT_ADV_REPORT:
      spi_notify_advertisement(evt->evt.gap_evt.params.adv_report);
      break;
    default:
      spi_cmd[0] = SPI_DEBUG;
      sprintf(spi_cmd + 1, "BLE EVT: %d", evt->header.evt_id);
      spi_enqueue_cmd(spi_cmd, sizeof(spi_cmd));
      break;
  }
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
        case SPI_START_SCAN: // start advertising
          APP_ERROR_CHECK(sd_ble_gap_scan_start(&scan_params));
          break;
        case SPI_STOP_SCAN:
          APP_ERROR_CHECK(sd_ble_gap_scan_stop());
          break;
        default:
          break;
      }
      spi_tx_cur = spi_dequeue_cmd();
      APP_ERROR_CHECK(spi_slave_buffers_set(
            spi_tx_cur, spi_rx_buf,
            sizeof(SPI_PKT_LEN), sizeof(spi_rx_buf)));
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

  init_spi(&spi_handler);
  while (1) {
    APP_ERROR_CHECK(sd_app_evt_wait());
  }
}

