configuration DemoAppC
{
}
implementation
{

  components MainC, DemoC, SPIBLEPeripheralC, ObserverC, HplNRF51822C;
  components new SPIBLELocalCharC() as ObserverChar;
  components new SPIBLELocalServiceC() as ObserverImpl;

  SPIBLEPeripheralC.Spi -> HplNRF51822C.FastSpiByte;
  
  ObserverC.ObserverChar -> ObserverChar;
  ObserverC.ObserverImpl -> ObserverImpl;

  DemoC.Boot -> MainC.Boot;
  DemoC.BLEPeripheral -> SPIBLEPeripheralC;
  DemoC.Observer -> ObserverC;
}

