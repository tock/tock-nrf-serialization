generic configuration BLELocalServiceC(){
  provides interface BLELocalChar as DemoChar;
}
implementation{
  components new ObserverCharC(unique("UQ_LOCAL_CHARACTERISTIC")) as ObserverChar;
  components SpiPacket;

  ObserverChar.Spi->SpiPacket;
  DemoChar = ObserverChar.Observer;
	
}