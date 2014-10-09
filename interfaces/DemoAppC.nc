configuration DemoAppC
{

}
implementation
{
	components MainC, DemoC, HeartrateServiceC;
	components new BLELocalCharC() as StartStopChar;

	DemoC.StartStopChar->StartStopChar;

	/*Remaining Wirings*/

}
