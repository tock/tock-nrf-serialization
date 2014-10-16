#include "ble.h"

module ObserverC
{
  provides interface BLELocalService;
  uses interface BLELocalChar as ObserverChar;
}

implementation
{

  uuid_t myuuid = 0x2108;

  command error_t BLELocalService.configure() {
    return SUCCESS;
  }

  event void ObserverChar.onWrite(uint16_t len, uint8_t const *value) {
  }

  event void ObserverChar.indicateConfirmed() {
  }

  event void ObserverChar.timeout() {
  }
}
