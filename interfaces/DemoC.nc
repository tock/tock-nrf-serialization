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
    call Observer.configure();
    call BlePeripheral.startAdvertising();
  }

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
