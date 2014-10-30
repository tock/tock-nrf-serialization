#include "tinyos_ble.h"

interface NrfBleService
{
  command error_t addCharacteristic(uuid_t UUID, uint8_t handle);
  command error_t createService(uuid_t UUID);
}
