configuration DemoAppC
{
}
implementation
{

  components MainC, DemoC, SpiBlePeripheralC, ObserverC, HplnRF51822C;
  components new SpiBleLocalCharC() as ObserverChar;
  components new SpiBleLocalServiceC() as ObserverImpl;
  components new Sam4lSPI3C();

  SpiBlePeripheralC.Spi -> HplnRF51822C.FastSpiByte;
  
  ObserverC.ObserverChar -> ObserverChar;
  ObserverC.ObserverImpl -> ObserverImpl;

  DemoC.Boot -> MainC.Boot;
  DemoC.BlePeripheral -> SpiBlePeripheralC;
  DemoC.Observer -> ObserverC;
  DemoC.Spi -> Sam4lSPI3C.FastSpiByte;
}

