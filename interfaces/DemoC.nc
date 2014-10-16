module DemoC
{
  uses interface BLEPeripheral;
  uses interface Boot;
  uses interface BLELocalService as Observer;
}

implementation
{
  event void Boot.booted()
  {
    call Observer.configure();
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

}
