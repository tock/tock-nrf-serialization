#include "tinyos_ble.h"

interface BleLocalChar
{

  command void setUUID(uuid_t UUID);
  command uuid_t getUUID();
  command uint8_t getHandle();

  command error_t setValue(uint16_t len, uint8_t const *value);
  command error_t getValue();

  command error_t notify(uint16_t len, uint8_t const *value);
  command error_t indicate(uint16_t len, uint8_t const *value);

  event void onWrite(uint16_t len, uint8_t const *value);

  event void indicateConfirmed();

  event void timeout();
}
