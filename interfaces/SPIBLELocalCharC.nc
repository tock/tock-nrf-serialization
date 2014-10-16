generic configuration SPIBLELocalCharC(){
  provides interface BLELocalChar;
}
implementation
{
  components NrfBleP;
  components HplNRF51822C;

  BLELocalChar = NrfBleP.BLELocalChar[unique("SPI_BLE_LOCAL_CHAR_HANDLE")];

  NrfBleP.Spi -> HplNRF51822C.FastSpiByte;
}

