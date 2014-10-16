module DemoC
{
  uses interface BlePeripheral;
  uses interface Boot;
  uses interface BleLocalService as Observer;
}

implementation
{
  event void Boot.booted()
  {
    call Observer.configure();
    call BlePeripheral.startAdvertising();
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
