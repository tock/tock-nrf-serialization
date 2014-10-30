interface NrfBleService
{
  command error_t addCharacteristic(uuid_t serviceUUID, uuid_t charUUID, uint8_t handle);
  command error_t createService(uuid_t UUID);
}
