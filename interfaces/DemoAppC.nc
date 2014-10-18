configuration DemoAppC
{
}
implementation
{

  components MainC, DemoC, SpiBlePeripheralC, ObserverC, HplSam4lIOC;
  components new Sam4lUSART2C();
  components new SpiBleLocalCharC() as ObserverChar;
  components new SpiBleLocalServiceC() as ObserverImpl;
  components new Sam4lSPI3C();
  components new TimerMilliC() as Timer;

  components SerialPrintfC;

  //SpiBlePeripheralC.Spi -> HplnRF51822C.FastSpiByte;

  ObserverC.ObserverChar -> ObserverChar;
  ObserverC.ObserverImpl -> ObserverImpl;

  DemoC.Boot -> MainC.Boot;
  DemoC.BlePeripheral -> SpiBlePeripheralC;
  DemoC.Observer -> ObserverC;
  DemoC.SpiPacket -> Sam4lUSART2C.SpiPacket;
  DemoC.SpiHPL -> Sam4lUSART2C;
  DemoC.CS -> HplSam4lIOC.PC07;
  DemoC.Timer -> Timer;
  DemoC.Led -> HplSam4lIOC.PC10;
}

