/* Send an advertisement periodically
 */

#include <stdbool.h>
#include <stdint.h>
#include "boards.h"
#include "simple_uart.h"
#include "nrf_delay.h"
#include "spi_slave.h"
#include "nrf_gpio.h"

#define MISO 0
#define MOSI 1
#define CSN  2
#define SCK  3
#define INT  4

uint8_t spi_tx_buf[80];
uint8_t spi_rx_buf[80];


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
  spi_slave_evt_handler_register(handler);
  spi_slave_init(&config);

  int i;
  for (i = 0; i < sizeof(spi_tx_buf); i++) {
    spi_tx_buf[i] = 0x1; // Reset opcode;
  }

  spi_slave_buffers_set(spi_tx_buf, spi_rx_buf, sizeof(spi_tx_buf), sizeof(spi_rx_buf));
}

void app_error_handler(uint32_t error_code,
                       uint32_t line_num, const uint8_t *file) {
  simple_uart_putstring("error!\r\n");
}

void spi_handler(spi_slave_evt_t evt) {
  switch (evt.evt_type) {
    case SPI_SLAVE_BUFFERS_SET_DONE:
      if (spi_tx_buf[0] > 0) {
        nrf_gpio_pin_set(INT);
      }
      break;
    case SPI_SLAVE_XFER_DONE:
      nrf_gpio_pin_clear(INT);
      simple_uart_put(evt.rx_amount + 48);
      simple_uart_put(' ');
      simple_uart_putstring(spi_rx_buf);
      simple_uart_put('\r');
      simple_uart_put('\n');
      switch (spi_rx_buf[0]) {
        case 9:
          simple_uart_putstring("SPI: 0x1 opcode\r\n");
          break;
        default:
          simple_uart_putstring("SPI xfer done\r\n");
          break;
      }
      spi_tx_buf[0] = 0;
      spi_slave_buffers_set(spi_tx_buf, spi_rx_buf, sizeof(spi_tx_buf), sizeof(spi_rx_buf));
      break;
    default:
      simple_uart_putstring("SPI unknown evt\r\n");
      break;
  }
}

/**
 * @brief Function for application main entry.
 */
int main(void)
{
  simple_uart_config(RTS_PIN_NUMBER, TX_PIN_NUMBER, CTS_PIN_NUMBER, RX_PIN_NUMBER, HWFC);
  simple_uart_putstring("Hello World\r\n");
  nrf_delay_ms(5000);

  nrf_gpio_cfg_output(LED_0);
  nrf_gpio_cfg_output(INT);

  init_spi(&spi_handler);
  while (1) {
    nrf_delay_ms(1000);
    nrf_gpio_pin_toggle(LED_0);
  }
}

