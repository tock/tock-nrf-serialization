generic configuration SpiBleLocalServiceC(){
  provides interface NrfBleService;
}
implementation
{
  components NrfBleP;

  NrfBleService = NrfBleP.NrfBleService[unique("SPI_BLE_LOCAL_SERVICE_HANDLE")];
}

