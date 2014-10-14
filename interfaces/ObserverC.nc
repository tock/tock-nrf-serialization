module ObserverC
{
	provides interface BLELocalChar as Observer;
	uses interface SpiPacket;

}

implementation
{
  typedef struct
  {
    uuid_t UUID;
    uint8_t ObserverDevice[6];
    uint8_t SeenDevice[6];
    uint32_t time;
  } ObserverData;

  ObserverData od = {
    .UUID = {0, 4, 3, 2, 4, 5},
    .ObserverDevice = NULL,
    .SeenDevice = NULL,
    .time = 0
  };

  command uuid_t Observer.getUUID()
  {
  	return od.UUID;
  }
  
  //command error_t Observer.setValue(uint16_t len, uint8_t const *value);
  //command error_t Observer.getValue() { return 0; }

  command void Observer.notify(uint16_t len, uint8_t const *value)
  {
  	//set txBuf
  	//Set rxBuf
  	//append header 
  	//set length
  	
  	return call SpiPacket.send( uint8_t* txBuf, uint8_t* rxBuf, uint16_t len );
  }
  //command error_t indicate(uint16_t len, uint8_t const *value);
}