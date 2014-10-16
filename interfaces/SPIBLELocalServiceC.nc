generic configuration SPIBLEServiceCharC(){
  provides interface NrfBleService;
}
implementation
{
  components NrfBleP;

  NrfBleService = NrfBleP.NrfBleService[unique("SPI_BLE_LOCAL_CHAR_HANDLE")];
}

