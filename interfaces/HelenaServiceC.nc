#include "tinyos_ble.h"

module HelenaServiceC
{
  provides interface HelenaService;
  provides interface BleLocalService;
  uses interface BleLocalChar as UUIDListedDevice;
  uses interface NrfBleService as BLE;
}

implementation
{
  uuid_t myuuid = 0x1978;

  command error_t BleLocalService.configure() {
    call BLE.createService(myuuid);
    call BLE.addCharacteristic(0x2003,
      call UUIDListedDevice.getHandle());
    return SUCCESS;
  }

  command void HelenaService.notify(uint8_t squallId, uint16_t stormId) {
    uint8_t payload[3];

    payload[0] = (uint8_t)(stormId >> 8);
    payload[1] = (uint8_t)(stormId & 0xff);
    payload[2] = squallId;

    call UUIDListedDevice.notify(sizeof(payload), payload);
  }

  event void UUIDListedDevice.onWrite(uint16_t len, uint8_t const *value) {
  }

  event void UUIDListedDevice.indicateConfirmed() {
  }

  event void UUIDListedDevice.timeout() {
  }
}
