configuration DemoServiceP{
	provides interface BLELocalSerivice as DemoService;
	provides interface BLELocalChar as Observer;
}
implementation{
	components DemoServiceC, SpiPacket;
	DemoServiceC.Spi -> SpiPacket;
	Observer = DemoServiceC.Observer[uint8_t handle];
}