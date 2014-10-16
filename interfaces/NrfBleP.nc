#include "ble.h"

module NrfBleP
{
  provides interface BleLocalChar as BleLocalChar[uint8_t];
  provides interface NrfBleService as NrfBleService[uint8_t];
  uses interface FastSpiByte as Spi;
}
implementation
{

  enum
  {
    NUM_CHARS = uniqueCount("SPI_BLE_LOCAL_CHAR_HANDLE")
    NUM_SERVICES = uniqueCount("SPI_BLE_LOCAL_SERVICE_HANDLE")
  };

  typedef struct
  {
    uuid_t UUID;
  } Char_t;

  Char_t chars[NUM_CHARS];

  void setCharUUID(uint8_t handle, uuid_t UUID) {
    chars[handle].UUID = UUID;
  }

  uuid_t getCharUUID(uint16_t handle) {
    return chars[handle].UUID;
  }

  command uint8_t BleLocalChar.getHandle[uint8_t handle]() {
    return handle;
  }

  command void BleLocalChar.setUUID[uint8_t handle](uuid_t UUID) {
    setCharUUID(handle, UUID);
  }

  command uuid_t BleLocalChar.getUUID[uint8_t handle]() {
    return getCharUUID(handle);
  }

  command error_t BleLocalChar.setValue[uint8_t handle](uint16_t len, uint8_t const *value){
    return SUCCESS;
  }

  command error_t BleLocalChar.getValue[uint8_t handle]() {
    return SUCCESS;
  }

  command error_t BleLocalChar.notify[uint8_t handle](uint16_t len, uint8_t const *value)
  {
    uint8_t* rxBuf;
    uint8_t header_byte=0x00;
    uint8_t i=0;

    call Spi.splitWrite(header_byte);

    for(i=0; i < len; i++)
    {
      rxBuf[i]= call Spi.splitReadWrite(value[i]);
    }

    return SUCCESS;
  }

  command error_t BleLocalChar.indicate[uint8_t handle](uint16_t len, uint8_t const *value) {
    return SUCCESS;
  }

  command error_t NrfBleService.createService[uint8_t handle](uuid_t UUID) {
    //TODO(alevy): add service over spi
    return SUCCESS;
  }


  command error_t NrfBleService.addCharacteristic[uint8_t service_handle](uuid_t UUID, uint8_t char_handle)
  {
    return SUCCESS;
  }
}
