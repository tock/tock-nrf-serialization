configuration ScrufflesC
{
    provides interface Scruffles;
    provides interface StdControl;
}
implementation
{
    components ScrufflesP, new UdpSocketC();
    ScrufflesP.UDP -> UdpSocketC;
    Scruffles = ScrufflesP;
    StdControl = ScrufflesP;
    components HplSam4lClockC;
    ScrufflesP.WDTClockCtl -> HplSam4lClockC.WDTCtl;
} 
