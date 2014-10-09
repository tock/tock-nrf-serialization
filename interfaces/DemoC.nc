module DemoC
{
  uses interface BLEPeripheral;
  uses interface BLELocalChar as StartStopChar;
  //uses interface BLELocalChar as HeartbeatChar;
  uses interface Boot;
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

  event void StartStopChar.indicateConfirmed() {}
  event void StartStopChar.timeout() {}

  event void StartStopChar.onWrite(uint16_t len, uint8_t const *val) {
    if (len > 1) {
      uint16_t interval = val[0] + (uint16_t)val[1] << 8;
      if (interval) {
        //call HRM.start(interval);
      } else {
        //call HRM.stop();
      }
    }
  }

}
