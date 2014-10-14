configuration DemoAppC
{

}
implementation
{
	components MainC, DemoC, DemoServiceC;
	//components new BLELocalCharC() as StartStopChar;

    DemoC.DemoService->DemoServiceC;
}

