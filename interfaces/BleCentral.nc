
interface BleCentral
{
  command void initialize();

  command error_t scan();

  event void ready();

  async event void advReceived(uint8_t* addr,
    uint8_t *data, uint8_t dlen, uint8_t rssi);
}
