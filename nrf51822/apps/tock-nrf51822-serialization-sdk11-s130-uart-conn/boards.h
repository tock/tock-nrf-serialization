#pragma once

#if defined(TOCK_BOARD)
/*******************************************************************************
 * HAIL
 ******************************************************************************/
#if TOCK_BOARD == hail

#define LEDS_NUMBER 1
#define LED_0       0

#define SER_CON_RX_PIN   14   // UART RX pin number.
#define SER_CON_TX_PIN   15   // UART TX pin number.
#define SER_CON_CTS_PIN  11   // UART Clear To Send pin number.
#define SER_CON_RTS_PIN  12   // UART Request To Send pin number.

#define NRF_CLOCK_LFCLKSRC { \
    .source        = NRF_CLOCK_LF_SRC_RC, \
    .rc_ctiv       = 16, \
    .rc_temp_ctiv  = 2, \
    .xtal_accuracy = NRF_CLOCK_LF_XTAL_ACCURACY_250_PPM}


/*******************************************************************************
 * IMIX
 ******************************************************************************/
#elif TOCK_BOARD == imix

#define LEDS_NUMBER  1
#define LED_0        13

#define SER_CON_RX_PIN   3    // UART RX pin number.
#define SER_CON_TX_PIN   4    // UART TX pin number.
#define SER_CON_CTS_PIN  7    // UART Clear To Send pin number.
#define SER_CON_RTS_PIN  6    // UART Request To Send pin number.

#define NRF_CLOCK_LFCLKSRC { \
    .source        = NRF_CLOCK_LF_SRC_RC, \
    .rc_ctiv       = 16, \
    .rc_temp_ctiv  = 2, \
    .xtal_accuracy = NRF_CLOCK_LF_XTAL_ACCURACY_250_PPM}


/*******************************************************************************
 * FIRESTORM
 ******************************************************************************/
#elif TOCK_BOARD == storm

#define LEDS_NUMBER  1
#define LED_0        13

#define SER_CON_RX_PIN   14    // UART RX pin number.
#define SER_CON_TX_PIN   15    // UART TX pin number.
#define SER_CON_CTS_PIN  18    // UART Clear To Send pin number.
#define SER_CON_RTS_PIN  17    // UART Request To Send pin number.

#define SW_RESET_PIN 19 // GPIO substitute for reset pin

#define NRF_CLOCK_LFCLKSRC { \
    .source        = NRF_CLOCK_LF_SRC_RC, \
    .rc_ctiv       = 16, \
    .rc_temp_ctiv  = 2, \
    .xtal_accuracy = NRF_CLOCK_LF_XTAL_ACCURACY_250_PPM}


/*******************************************************************************
 * SIGNPOST RADIO MODULE
 ******************************************************************************/
#elif TOCK_BOARD == signpost_radio

#define LEDS_NUMBER  1
#define LED_0        18

#define SER_CON_RX_PIN   11    // UART RX pin number.
#define SER_CON_TX_PIN   12    // UART TX pin number.
#define SER_CON_CTS_PIN   9    // UART Clear To Send pin number.
#define SER_CON_RTS_PIN  10    // UART Request To Send pin number.

#define NRF_CLOCK_LFCLKSRC { \
    .source        = NRF_CLOCK_LF_SRC_RC, \
    .rc_ctiv       = 16, \
    .rc_temp_ctiv  = 2, \
    .xtal_accuracy = NRF_CLOCK_LF_XTAL_ACCURACY_250_PPM}


#endif
#else
#error Must define TOCK_BOARD.
#endif
