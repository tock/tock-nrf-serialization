configuration DemoAppC
{
}
implementation
{

  components MainC, DemoC, NrfBleP, ObserverC, HplSam4lIOC;
  components new Sam4lUSART2C();
  components new SpiBleLocalCharC() as ObserverChar;
  components new SpiBleLocalServiceC() as ObserverImpl;
  components new Sam4lSPI3C();

  components SerialPrintfC;

  ObserverC.ObserverChar -> ObserverChar;
  ObserverC.ObserverImpl -> ObserverImpl;

  NrfBleP.SpiPacket -> Sam4lUSART2C.SpiPacket;
  NrfBleP.SpiHPL -> Sam4lUSART2C;
  NrfBleP.CS -> HplSam4lIOC.PC07;
  NrfBleP.IntPort -> HplSam4lIOC.PA17;
  NrfBleP.Int -> HplSam4lIOC.PA17IRQ;

  DemoC.Boot -> MainC.Boot;
  DemoC.BlePeripheral -> NrfBleP;
  DemoC.Observer -> ObserverC;
  DemoC.Led -> HplSam4lIOC.PC10;
}

