configuration DemoAppC
{
}
implementation
{

  components MainC, DemoC, SpiBlePeripheralC, ObserverC, HplnRF51822C;
  components new SpiBleLocalCharC() as ObserverChar;
  components new SpiBleLocalServiceC() as ObserverImpl;

  SpiBlePeripheralC.Spi -> HplnRF51822C.FastSpiByte;
  
  ObserverC.ObserverChar -> ObserverChar;
  ObserverC.ObserverImpl -> ObserverImpl;

  DemoC.Boot -> MainC.Boot;
  DemoC.BlePeripheral -> SpiBlePeripheralC;
  DemoC.Observer -> ObserverC;
}

