/**
 */

/**
 * NRF Spi interface
 */

#include "tinyos_ble.h"
#include "printf.h"

module NrfBleP
{
  provides interface BlePeripheral;
  provides interface BleCentral;
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

  task void initSpi();

  uint8_t txbufs[10][10];
  int txbuf_hd = 0;
  int txbuf_tl = 0;

  error_t enqueue_tx(uint8_t req[10]) {
    if ((txbuf_hd - txbuf_hd) % 10 == 1) {
      return FAIL;
    }

    memcpy(txbufs[txbuf_tl], req, 10);
    txbuf_tl = (txbuf_tl + 1) % 10;

    if ((txbuf_tl - txbuf_hd) % 10 == 1) {
      post initSpi();
    }

    return SUCCESS;
  }

  uint8_t rxbuf[10];

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
    uint8_t txbuf[10];
    txbuf[0] = SPI_ADD_SERVICE;
    txbuf[1] = handle;
    txbuf[2] = (uint8_t)UUID;
    txbuf[3] = (uint8_t)(UUID >> 8);
    return enqueue_tx(txbuf);
  }


  command error_t NrfBleService.addCharacteristic[uint8_t service_handle](uuid_t UUID, uint8_t char_handle)
  {
    uint8_t txbuf[10];
    txbuf[0] = SPI_ADD_CHARACTERISTIC;
    txbuf[1] = service_handle;
    txbuf[2] = char_handle;
    txbuf[3] = (uint8_t)UUID;
    txbuf[4] = (uint8_t)(UUID >> 8);
    return enqueue_tx(txbuf);
  }

  command error_t BleCentral.scan() {
    uint8_t txbuf[10];
    txbuf[0] = SPI_START_SCAN;
    return enqueue_tx(txbuf);
  }

  command error_t BlePeripheral.startAdvertising() {
    uint8_t txbuf[10];
    txbuf[0] = SPI_START_ADVERTISING;
    return enqueue_tx(txbuf);
  }

  command error_t BlePeripheral.stopAdvertising() {
    //TODO(alevy): implement nrf stop advertising over SPI
    return SUCCESS;
  }

  void initialize()
  {
    uint8_t txbuf[10];
    txbuf[0] = SPI_RESET;
    call SpiHPL.enableUSARTPin(USART2_TX_PC12);
    call SpiHPL.enableUSARTPin(USART2_RX_PC11);
    call SpiHPL.enableUSARTPin(USART2_CLK_PA18);
    call SpiHPL.initSPIMaster();
    call SpiHPL.setSPIMode(0,0);
    call SpiHPL.setSPIBaudRate(4000000);
    call SpiHPL.enableTX();
    call SpiHPL.enableRX();

    call CS.makeOutput();
    call CS.set();
    call IntPort.makeInput();
    call Int.enableRisingEdge();

    enqueue_tx(txbuf);
    post initSpi();
  }

  async event void Int.fired()
  {
    uint8_t txbuf[10];
    txbuf[0] = SPI_NOOP;
    enqueue_tx(txbuf);
    post initSpi();
  }

  command void BlePeripheral.initialize() {
    initialize();
  }

  command void BleCentral.initialize() {
    initialize();
  }

  task void initSpi() {
    uint8_t *buf = txbufs[txbuf_hd];
    if (txbuf_hd == txbuf_tl) {
      return;
    }
    txbuf_hd = (txbuf_hd + 1) % 10;
    call CS.clr();
    call SpiPacket.send(buf, rxbuf, 10);

  }


  task void ready() {
    signal BlePeripheral.ready();
  }

  task void connected() {
    signal BlePeripheral.connected();
  }

  task void disconnected() {
    signal BlePeripheral.disconnected();
  }

  default event void BlePeripheral.ready() {}
  default event void BlePeripheral.connected() {}
  default event void BlePeripheral.disconnected() {}

  default event void BleCentral.ready() {}
  default async event void BleCentral.advReceived(uint8_t* addr, uint8_t *data, uint8_t len) {}

  async event void SpiPacket.sendDone(uint8_t* txBuf, uint8_t* rxBuf,
                                      uint16_t len, error_t error) {
    call CS.set();
    if (error == SUCCESS) {
      printf("Opcode: 0x%x 0x%x\n", txBuf[0], rxBuf[0]);
      if (rxBuf[0] == 0xee) {
        printf("Retrying spi...\n");
        call CS.clr();
        call SpiPacket.send(txBuf, rxBuf, 10);
        return;
      }

      switch (rxBuf[0]) {
        case SPI_RESET:
          post ready();
          break;
        case SPI_CONNECT:
          post connected();
          break;
        case SPI_DISCONNECT:
          post disconnected();
          break;
        case SPI_ADVERTISE:
          signal BleCentral.advReceived(NULL, rxBuf, len);
          break;
        case SPI_DEBUG:
          printf("[NRF] %s\n", rxBuf + 1);
      }
    }
    post initSpi();
  }
}

