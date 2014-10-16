configuration DemoAppC
{
}
implementation
{

  components MainC, DemoC, SPIBLEPeripheralC, ObserverC;
  components new SPIBLELocalCharC() as ObserverChar;

  ObserverC.ObserverChar -> ObserverChar;

  DemoC.Boot -> MainC.Boot;
  DemoC.BLEPeripheral -> SPIBLEPeripheralC;
  DemoC.Observer -> ObserverC;
}

