configuration DemoAppC
{

}
implementation
{
	components MainC, DemoC, SpiPacket;
	//components new BLELocalServiceC() as DemoServiceC;
	components new ObserverCharC(unique("UQ_LOCAL_CHARACTERISTIC")) as ObserverChar;
	DemoC.ObserverChar->ObserverChar;
	ObserverCharC.Spi->SpiPacket;
	//components new BLEPeripheral as MyPeripheral;
    //DemoC.BLEPeripheral->MyPeripheral;
}

