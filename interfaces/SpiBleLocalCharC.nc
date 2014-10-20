generic configuration SpiBleLocalCharC(){
  provides interface BleLocalChar;
}
implementation
{
  components NrfBleP;

  BleLocalChar = NrfBleP.BleLocalChar[unique("SPI_BLE_LOCAL_CHAR_HANDLE")];
}

