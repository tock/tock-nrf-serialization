configuration DemoAppC
{
}
implementation
{

  components MainC, DemoC, SPIBLEPeripheralC, ObserverC;
  components new SPIBLELocalCharC() as ObserverChar;
  components new SPIBLELocalServiceC() as ObserverImpl;

  ObserverC.ObserverChar -> ObserverChar;
  ObserverC.ObserverImpl -> ObserverImpl;

  DemoC.Boot -> MainC.Boot;
  DemoC.BLEPeripheral -> SPIBLEPeripheralC;
  DemoC.Observer -> ObserverC;
}

