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
  typedef struct observation_packet {
    uint8_t observer[6];
    uint8_t observedMAC[6];
    uint16_t observedManufactor;
  } observation_packet_t; 

  uuid_t myuuid = 0x1978;

  command error_t BleLocalService.configure() {
    call BLE.createService(myuuid);
    call BLE.addCharacteristic(0x2003,
      call UUIDListedDevice.getHandle());
    return SUCCESS;
  }

  command void HelenaService.notify(uint8_t squallId, uint16_t stormId) {
    observation_packet_t pkt;
    uint8_t mac[6];
    uint8_t stormbuf[6];

    pkt.observedMAC[5] = squallId;

    pkt.observer[4] = (uint8_t)(stormId >> 8);
    pkt.observer[5] = (uint8_t)stormId;

    call UUIDListedDevice.notify(sizeof(pkt), (uint8_t*)(&pkt));
  }

  event void UUIDListedDevice.onWrite(uint16_t len, uint8_t const *value) {
  }

  event void UUIDListedDevice.indicateConfirmed() {
  }

  event void UUIDListedDevice.timeout() {
  }
}
