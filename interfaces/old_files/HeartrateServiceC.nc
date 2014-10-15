module HeartrateServiceC
{
  uses interface BLELocalChar as StartStopChar;
  provides interface BLELocalService;
}
implementation
{
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
