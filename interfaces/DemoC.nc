/**
 */

/**
 */

#include "printf.h"

module DemoC
{
  uses interface BlePeripheral;
  uses interface Boot;
  uses interface BleLocalService as Observer;
  uses interface GeneralIO as Led;
}

implementation
{
  event void Boot.booted()
  {
    call Led.makeOutput();
    call Led.clr();
    call BlePeripheral.initialize();
  }

  event void BlePeripheral.ready()
  {
    call Led.set();
    //call BlePeripheral.startAdvertising();
  }

  event void BlePeripheral.connected()
  {
    // call HRM.start(1000); // By default, start once a second
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
