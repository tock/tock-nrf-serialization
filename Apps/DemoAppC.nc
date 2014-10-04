configuration BlinkAppC
{

}
implementation
{
	components MainC, DemoC, HrmC, NRF51822C;
	components new BLELocalCharC() as StartStopChar;
	components new BLELocalCharC() as HeartbeatChar;

	DemoC.StartStopChar->StartStopChar;
	DemoC.HeartbeatChar->HeartbeatChar;

	/*Remaining Wirings*/

}