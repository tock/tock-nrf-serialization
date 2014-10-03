configuration BlinkAppC
{
}

implementation
{
  components MainC, DemoC, HrmC, NRF51822C;

  DemoC.Boot -> MainC.Boot
  DemoC.Hrm -> HrmC
  DemoC.BLEPeripheral -> NRF51822C
}
