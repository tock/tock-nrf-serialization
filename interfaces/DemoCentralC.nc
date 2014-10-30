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

  async event void BleCentral.advReceived(uint8_t* addr, uint8_t *data, uint8_t len) {
    printf("ADV: %s\n", data);
  }

}
