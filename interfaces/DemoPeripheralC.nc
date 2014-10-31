/**
 */

/**
 */

#include "printf.h"

module DemoPeripheralC
{
  uses interface BlePeripheral;
  uses interface Boot;
  uses interface BleLocalService as Observer;
  uses interface BleLocalChar as ObserverC;
  uses interface GeneralIO as Led;
  uses interface Timer<TMilli> as Timer0;
}

implementation
{ 
  uint8_t counter[1] = {0};

  event void Boot.booted()
  {
    call Led.makeOutput();
    call Led.clr();
    call Timer0.startPeriodic(3000);
    call BlePeripheral.initialize();
  }

  event void BlePeripheral.ready()
  {
    call Observer.configure();
    call BlePeripheral.startAdvertising();
  }

  event void Timer0.fired()
  {
    call Led.toggle();  
    printf("Notifying...\n");
    call ObserverC.notify(1, counter);
    counter[0]++;
  }

  event void ObserverC.onWrite(uint16_t len,
    uint8_t const *value) {}

  event void ObserverC.indicateConfirmed() {}
  event void ObserverC.timeout() {}

  event void BlePeripheral.connected()
  {
    call Led.set();
  }

  event void BlePeripheral.disconnected()
  {
    call BlePeripheral.startAdvertising();
  }

  event void BlePeripheral.advertisingTimeout()
  {
    call BlePeripheral.startAdvertising();
  }

}
