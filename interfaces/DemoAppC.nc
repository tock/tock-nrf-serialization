configuration DemoAppC
{
}
implementation
{

  components MainC, NrfBleP, ObserverC, HplSam4lIOC;
  components DemoPeripheralC;
  components new Sam4lUSART2C();
  components new SpiBleLocalCharC() as ObserverChar;
  components new SpiBleLocalServiceC() as ObserverImpl;
  components new TimerMilliC() as Timer0;

  components SerialPrintfC;

  ObserverC.ObserverChar -> ObserverChar;
  ObserverC.ObserverImpl -> ObserverImpl;

  NrfBleP.SpiPacket -> Sam4lUSART2C.SpiPacket;
  NrfBleP.SpiHPL -> Sam4lUSART2C;
  NrfBleP.CS -> HplSam4lIOC.PC07;
  NrfBleP.IntPort -> HplSam4lIOC.PA17;
  NrfBleP.Int -> HplSam4lIOC.PA17IRQ;

  /*DemoCentralC.Boot -> MainC;
  DemoCentralC.BleCentral -> NrfBleP;
  DemoCentralC.Led -> HplSam4lIOC.PC10;*/

  DemoPeripheralC.Boot -> MainC.Boot;
  DemoPeripheralC.BlePeripheral -> NrfBleP;
  DemoPeripheralC.Observer -> ObserverC;
  DemoPeripheralC.ObserverC -> ObserverChar;
  DemoPeripheralC.Led -> HplSam4lIOC.PC10;
  DemoPeripheralC.Timer0 -> Timer0;
}

