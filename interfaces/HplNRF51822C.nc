configuration HplNRF51822C
{
  provides interface Resource as SpiResource;
  provides interface FastSpiByte;
}
implementation
{
  components new Sam4lSPI3C();
  SpiResource = Sam4lSPI3C;
  FastSpiByte = Sam4lSPI3C;
}