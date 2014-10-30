#include "tinyos_ble.h"

module ObserverC
{
  provides interface BleLocalService;
  uses interface BleLocalChar as ObserverChar;
  uses interface NrfBleService as ObserverImpl;
}

implementation
{

  uuid_t myuuid = 0x2108;

  command error_t BleLocalService.configure() {
    call ObserverImpl.createService(myuuid);
    call ObserverImpl.addCharacteristic(call ObserverChar.getUUID(),
      call ObserverChar.getHandle());
    return SUCCESS;
  }

  event void ObserverChar.onWrite(uint16_t len, uint8_t const *value) {
  }

  event void ObserverChar.indicateConfirmed() {
  }

  event void ObserverChar.timeout() {
  }
}
