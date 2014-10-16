//Header Files
//

interface BlePeripheral
{
  command error_t startAdvertising();

  command error_t stopAdvertising(void);

  /*Connection established. */
  event void connected();

  /*Disconnected from peer. */
  event void disconnected();

  /*Timeout expired.*/
  event void advertisingTimeout(); 
}
