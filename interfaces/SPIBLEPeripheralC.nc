module SPIBLEPeripheralC
{
  provides interface BLEPeripheral;
  uses interface FastSpiByte as Spi;
}
implementation
{
  command error_t BLEPeripheral.startAdvertising() {
    //TODO(alevy): implement nrf configuration over SPI
    return SUCCESS;
  }

  command error_t BLEPeripheral.stopAdvertising() {
    //TODO(alevy): implement nrf stop advertising over SPI
    return SUCCESS;
  }
}
