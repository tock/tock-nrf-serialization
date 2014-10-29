module SpiBlePeripheralC
{
  provides interface BlePeripheral;
  uses interface SpiPacket as Spi;
}
implementation
{
  command error_t BlePeripheral.startAdvertising() {
    //TODO(alevy): implement nrf configuration over SPI
    return SUCCESS;
  }

  command error_t BlePeripheral.stopAdvertising() {
    //TODO(alevy): implement nrf stop advertising over SPI
    return SUCCESS;
  }
}
