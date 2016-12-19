Nordic Serialization Application for S130
=========================================

This application runs on an nRF51822 and allows it to receive softdevice
commands over a UART connection from another microcontroller. For Tock platforms, this
app allows the SAM4L to run an application which calls Nordic SDKs in order to
use the BLE protocol through the nRF51822.


Compile and Run
---------------

    make <platform>

where `platform` is one of: `imix, hail, storm, signpost_radio`.

Then flash it to the nrf with:

    make <platform> flash
