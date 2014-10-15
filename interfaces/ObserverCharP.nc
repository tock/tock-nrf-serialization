configuration ObserverCharP{

}
implementation
{
  components SpiPacket, ObserverCharC;
  ObserverCharC.Spi->SpiPacket;
}