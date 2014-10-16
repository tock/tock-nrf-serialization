#include "ble.h"

module NrfBleP
{
  provides interface BLELocalChar as BLELocalChar[uint8_t num];
}
implementation
{

  enum
  {
    NUM_CHARS = uniqueCount("SPI_BLE_LOCAL_CHAR_HANDLE")
  };

  typedef struct
  {
    uuid_t UUID;
  } Char_t;

  Char_t chars[NUM_CHARS];

  void setUUID(uint8_t handle, uuid_t UUID) {
    chars[handle].UUID = UUID;
  }

  uuid_t getUUID(uint16_t handle) {
    return chars[handle].UUID;
  }

  command void BLELocalChar.setUUID[uint8_t handle](uuid_t UUID) {
    setUUID(handle, UUID);
  }

  command uuid_t BLELocalChar.getUUID[uint8_t handle]() {
    return getUUID(handle);
  }

  command error_t BLELocalChar.setValue[uint8_t handle](uint16_t len, uint8_t const *value){
    return SUCCESS;
  }

  command error_t BLELocalChar.getValue[uint8_t handle]() {
    return SUCCESS;
  }

  command error_t BLELocalChar.notify[uint8_t handle](uint16_t len, uint8_t const *value)
  {
    //set txBuf
    uint8_t* txBuf = NULL;
    //Set rxBuf
    uint8_t* rxBuf = NULL;
    //append header
    //set length
    uint16_t packet_length = 10;
    //return call Spi.send(txBuf, rxBuf, packet_length);
    return SUCCESS;
  }

  command error_t BLELocalChar.indicate[uint8_t handle](uint16_t len, uint8_t const *value) {
    return SUCCESS;
  }
}
