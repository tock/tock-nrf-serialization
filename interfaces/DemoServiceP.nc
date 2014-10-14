configuration DemoServiceP{
	provides interface BLELocalChar as Observer;
}
implementation{
	components DemoServiceC, SpiPacket;
	DemoServiceC.Spi -> SpiPacket;
	Observer = DemoServiceC.Observer;
}