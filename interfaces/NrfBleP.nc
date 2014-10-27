/**
 */

/**
 * NRF Spi interface
 */

#include "ble.h"

module NrfBleP
{
  provides interface BlePeripheral;
  provides interface BleLocalChar as BleLocalChar[uint8_t];
  provides interface NrfBleService as NrfBleService[uint8_t];
  uses interface HplSam4lUSART as SpiHPL;
  uses interface SpiPacket;
  uses interface GeneralIO as CS;
  uses interface GeneralIO as IntPort;
  uses interface GpioInterrupt as Int;
}
implementation
{

  uint8_t txbuf[80];
  uint8_t rxbuf[80];
  bool spiready = 0;
  bool spiqueued = 0;

  enum
  {
    NUM_CHARS = uniqueCount("SPI_BLE_LOCAL_CHAR_HANDLE"),
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

  command error_t BlePeripheral.startAdvertising() {
    call CS.clr();
    txbuf[0] = 2;
    if (spiready) {
      call SpiPacket.send(txbuf, rxbuf, 1);
    } else {
      spiqueued = 1;
    }
    return SUCCESS;
  }

  command error_t BlePeripheral.stopAdvertising() {
    //TODO(alevy): implement nrf stop advertising over SPI
    return SUCCESS;
  }

  command void BlePeripheral.initialize()
  {
    call SpiHPL.enableUSARTPin(USART2_TX_PC12);
    call SpiHPL.enableUSARTPin(USART2_RX_PC11);
    call SpiHPL.enableUSARTPin(USART2_CLK_PA18);
    call SpiHPL.initSPIMaster();
    call SpiHPL.setSPIMode(0,0);
    call SpiHPL.setSPIBaudRate(20000);
    call SpiHPL.enableTX();
    call SpiHPL.enableRX();

    call CS.makeOutput();
    call CS.set();
    call IntPort.makeInput();
    call Int.enableRisingEdge();
    call Int.enableFallingEdge();
    txbuf[0] = 1;
    spiqueued = 1;
  }

  async event void Int.fired()
  {
    if (spiqueued) {
      call CS.clr();
      call SpiPacket.send(txbuf, rxbuf, 1);
      spiready = 0;
    } else {
      spiready = 1;
    }
  }

  task void ready() {
    signal BlePeripheral.ready();
  }

  task void connected() {
    signal BlePeripheral.connected();
  }

  async event void SpiPacket.sendDone(uint8_t* txBuf, uint8_t* rxBuf,
                                      uint16_t len, error_t error) {
    call CS.set();
    if (error == SUCCESS) {
      if (rxBuf[0] & 0x1) { // Odd opcode for notifications
        switch (rxBuf[0]) {
          case 1:
            post ready();
            break;
          case 3:
            post connected();
            break;
        }
      } else { // Even opcodes for responses

      }
    }
  }
}

