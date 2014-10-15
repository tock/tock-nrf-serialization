configuration DemoAppC
{

}
implementation
{
	components MainC, DemoC;
	components new BLELocalServiceC() as DemoServiceC;
	//components new BLEPeripheral as MyPeripheral;
	DemoC.ObserverChar->DemoServiceC.DemoChar;

    //DemoC.DemoService->DemoServiceC;
    //DemoC.BLEPeripheral->MyPeripheral;
}

