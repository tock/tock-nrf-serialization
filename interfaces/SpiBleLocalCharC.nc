generic configuration SpiBleLocalCharC(){
  provides interface BleLocalChar;
}
implementation
{
  components NrfBleP;
  components HplnRF51822C;

  BleLocalChar = NrfBleP.BleLocalChar[unique("SPI_BLE_LOCAL_CHAR_HANDLE")];

  NrfBleP.Spi -> HplnRF51822C.FastSpiByte;
}

