/**
 */

/**
 */

#include "printf.h"

module DemoCentralC
{
  uses interface BleCentral;
  uses interface Boot;
  uses interface GeneralIO as Led;
}

implementation
{
  event void Boot.booted()
  {
    call Led.makeOutput();
    call Led.clr();
    call BleCentral.initialize();
  }

  event void BleCentral.ready()
  {
    call BleCentral.scan();
  }

  async event void BleCentral.advReceived(uint8_t* addr,
    uint8_t *data, uint8_t dlen, uint8_t rssi) {
    int i;
    printf("ADV: %02x", addr[5]);
    for (i = 4; i >= 0; i--) {
      printf(":%02x", addr[i]);
    }
    printf(" ");
    for (i = 0; i < dlen; i++) {
      printf("%02x", data[i]);
    }
    printf(" rssi: %d\n", rssi);
  }

}
