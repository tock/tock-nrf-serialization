// Disable everything and go into low power mode

#include <stdbool.h>
#include <stdint.h>
#include "nrf_gpio.h"
#include "ble_advdata.h"
#include "nordic_common.h"
#include "softdevice_handler.h"
#include "ble_debug_assert_handler.h"
#include "led.h"

#include "simple_ble.h"

// Intervals for advertising and connections
static simple_ble_config_t ble_config = {
    .platform_id       = 0x00,              // used as 4th octect in device BLE address
    .device_id         = DEVICE_ID_DEFAULT,
    .adv_name          = "Tock-Firestorm",
    .adv_interval      = MSEC_TO_UNITS(500, UNIT_0_625_MS),
    .min_conn_interval = MSEC_TO_UNITS(100, UNIT_1_25_MS),
    .max_conn_interval = MSEC_TO_UNITS(500, UNIT_1_25_MS)
};


int main(void) {
    // Setup BLE
    simple_ble_init(&ble_config);

    // sleep
    while (1) {
        power_manage();
    }

    return 0;
}

