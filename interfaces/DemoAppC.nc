configuration DemoAppC
{

}
implementation
{
	components MainC, DemoC, HeartrateServiceC;
	components new BLELocalCharC() as StartStopChar;

        DemoC.HeartrateService->HeartrateServiceC;
	HeartrateServiceC.StartStopChar->StartStopChar;
}
