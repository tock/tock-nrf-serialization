/* Send an advertisement periodically
 */

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include "ble.h"
#include "ble_advdata.h"
#include "ble_stack_handler_types.h"
#include "boards.h"
#include "app_error.h"
#include "simple_uart.h"
#include "softdevice_handler.h"
#include "nordic_common.h"
#include "nrf_delay.h"
#include "spi_slave.h"
#include "nrf_gpio.h"

#define MISO 0
#define MOSI 1
#define CSN  2
#define SCK  3
#define INT  4

#define SPI_PKT_LEN 10
#define SPI_TX_QUEUE_SIZE 10
#define spi_tx_buf spi_tx_queue[spi_txq_head]

uint8_t spi_rx_buf[SPI_PKT_LEN];

int spi_txq_head = 0;
int spi_txq_tail = 0;
uint8_t spi_tx_queue[SPI_TX_QUEUE_SIZE][SPI_PKT_LEN];

ble_gap_adv_params_t adv_params = {
  .type = BLE_GAP_ADV_TYPE_ADV_IND,
  .fp = BLE_GAP_ADV_FP_ANY,
  .interval = BLE_GAP_ADV_INTERVAL_MIN,
  .timeout = BLE_GAP_ADV_TIMEOUT_GENERAL_UNLIMITED
};

void init_spi(spi_slave_event_handler_t handler) {
  spi_slave_config_t config = {
    .pin_miso  = MISO,
    .pin_mosi  = MOSI,
    .pin_sck   = SCK,
    .pin_csn   = CSN,
    .mode      = SPI_MODE_0,
    .bit_order = SPIM_MSB_FIRST,
    .def_tx_character = 0xff,
    .orc_tx_character = 0xff
  };
  APP_ERROR_CHECK(spi_slave_evt_handler_register(handler));
  APP_ERROR_CHECK(spi_slave_init(&config));

  spi_tx_buf[0] = 1;

  APP_ERROR_CHECK(spi_slave_buffers_set(spi_tx_buf, spi_rx_buf, sizeof(spi_tx_buf), sizeof(spi_rx_buf)));
}

void app_error_handler(uint32_t error_code,
                       uint32_t line_num, const uint8_t *file) {
  simple_uart_putstring((const uint8_t*)"error! ");
  simple_uart_put((line_num / 100) + 48);
  simple_uart_put((line_num % 100) / 10 + 48);
  simple_uart_put((line_num % 10) + 48);
  simple_uart_putstring((const uint8_t*)"  ");
  simple_uart_put(error_code + 48);
  simple_uart_putstring((const uint8_t*)"\r\n");

}

void assert_nrf_callback(uint16_t line_num, const uint8_t *file_name) {
  app_error_handler(0xff, line_num, file_name);
}

void ble_handler(ble_evt_t *evt) {
  switch(evt->header.evt_id) {
    case BLE_GAP_EVT_CONNECTED:
      simple_uart_putstring((uint8_t*)"Connected!!\r\n");
      break;
  }
}

void spi_handler(spi_slave_evt_t evt) {
  switch (evt.evt_type) {
    case SPI_SLAVE_BUFFERS_SET_DONE:
      simple_uart_putstring((const uint8_t*)"SPI ready\r\n");
      nrf_gpio_pin_set(INT);
      break;
    case SPI_SLAVE_XFER_DONE:
      nrf_gpio_pin_clear(INT);
      simple_uart_putstring((const uint8_t*)"SPI opcode: ");
      simple_uart_put(spi_rx_buf[0] + 48);
      simple_uart_put('\r');
      simple_uart_put('\n');
      switch (spi_rx_buf[0]) {
        case 1: // Started...
          simple_uart_putstring((const uint8_t*)"Started...\r\n");
          nrf_gpio_pin_toggle(LED_0);
          break;
        case 2: // start advertising
          APP_ERROR_CHECK(sd_ble_gap_adv_start(&adv_params));
          simple_uart_putstring((const uint8_t*)"Advertising...\r\n");
          break;
        default:
          simple_uart_putstring((const uint8_t*)"SPI xfer done\r\n");
          break;
      }
      if ((spi_txq_tail - spi_txq_head) % SPI_TX_QUEUE_SIZE == 1) {
        spi_tx_buf[0] = 0;
      } else {
        spi_txq_head = (spi_txq_head + 1) % SPI_TX_QUEUE_SIZE;
      }
      spi_slave_buffers_set(spi_tx_buf, spi_rx_buf, sizeof(spi_tx_buf), sizeof(spi_rx_buf));
      break;
    default:
      simple_uart_putstring((const uint8_t*)"SPI unknown evt\r\n");
      break;
  }
}

void csn_handler(uint32_t event_pins_low_to_high, uint32_t event_pins_high_to_low) {
  simple_uart_putstring((const uint8_t*)"Ping!\r\n");
}

/**
 * @brief Function for application main entry.
 */
int main(void)
{
  simple_uart_config(RTS_PIN_NUMBER, TX_PIN_NUMBER, CTS_PIN_NUMBER,
                     RX_PIN_NUMBER, HWFC);
  simple_uart_putstring((const uint8_t*)"Configuring NRF51822...\r\n");

  SOFTDEVICE_HANDLER_INIT(NRF_CLOCK_LFCLKSRC_XTAL_20_PPM, false);
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

  nrf_gpio_cfg_output(LED_0);
  nrf_gpio_cfg_output(LED_1);
  nrf_gpio_cfg_output(INT);


  init_spi(&spi_handler);
  while (1) {
    nrf_delay_ms(1000);
  }
}

