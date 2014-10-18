configuration HplnRF51822C
{
  provides interface Resource as SpiResource;
  provides interface FastSpiByte;
  //provides interface HplSam4lSPIChannel;
}
implementation
{
  components new Sam4lSPI3C();
  SpiResource = Sam4lSPI3C;
  FastSpiByte = Sam4lSPI3C;
  //HplSam4lSPIChannel = Sam4lSPI3C.HplSam4lSPIChannel;
}
