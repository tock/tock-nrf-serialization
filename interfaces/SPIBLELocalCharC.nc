generic configuration SPIBLELocalCharC(){
  provides interface BLELocalChar;
}
implementation
{
  components NrfBleP;

  BLELocalChar = NrfBleP.BLELocalChar[unique("SPI_BLE_LOCAL_CHAR_HANDLE")];
}

