module DemoC
{
  uses interface BlePeripheral;
  uses interface Boot;
  uses interface BleLocalService as Observer;
  uses interface FastSpiByte as Spi;
}

implementation
{
  event void Boot.booted()
  {

    uint8_t* rxBuf;
    uint8_t data=0x05;
    uint8_t header_byte=0x01;

    rxBuf=data;
    uint8_t i=0;

    rxBuf[0]= call Spi.splitReadWrite(data[0]);

    //call Spi.splitWrite(header_byte);

    //for(i=0; i < len; i++)
    //{
    //  rxBuf[i]= call Spi.splitReadWrite(value[i]);
    //}
    //call Observer.configure();
    //call BlePeripheral.startAdvertising();
  }

  event void BlePeripheral.connected()
  {
    // call HRM.start(1000); // By default, start once a second
  }

  event void BlePeripheral.disconnected()
  {
    call BlePeripheral.startAdvertising();
  }

  event void BlePeripheral.advertisingTimeout()
  {
    call BlePeripheral.startAdvertising();
  }

}
