generic module BLELocalCharC()
{
  provides interface BLELocalChar;  
}

implementation {

  command uuid_t BLELocalChar.getUUID() {}
  
  command error_t BLELocalChar.setValue(uint16_t len, uint8_t const *value) {}
  command error_t BLELocalChar.getValue() {}

  command error_t BLELocalChar.notify(uint16_t len, uint8_t const *value) {}
  command error_t BLELocalChar.indicate(uint16_t len, uint8_t const *value) {}

}
