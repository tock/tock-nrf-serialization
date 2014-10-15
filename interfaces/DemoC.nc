module DemoC
{
  uses interface BLEPeripheral;
  //uses interface BLELocalService as DemoService;
  uses interface BLELocalChar as ObserverChar;
  uses interface Boot;
  //uses interface 
}

implementation
{
  event void Boot.booted()
  {
    call BLEPeripheral.startAdvertising();
  }

  event void BLEPeripheral.connected()
  {
    // call HRM.start(1000); // By default, start once a second
  }

  event void BLEPeripheral.disconnected()
  {
    call BLEPeripheral.startAdvertising();
  }

  event void BLEPeripheral.advertisingTimeout()
  {
    call BLEPeripheral.startAdvertising();
  }

  event void ObserverChar.onWrite(uint16_t len, uint8_t const *value)
  {
    return;
  }
  event void ObserverChar.indicateConfirmed()
  {
    return;
  }
  event void ObserverChar.timeout()
  {
    return;
  }

}
