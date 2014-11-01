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

  #define SPI_PKT_LEN 50

  task void initSpi();

  uint8_t txbufs[10][SPI_PKT_LEN];
  int txbuf_hd = 0;
  int txbuf_tl = 0;

  error_t enqueue_tx(uint8_t *req, uint8_t len) {
    bool doSpi = 0;
    atomic {
      if (len > SPI_PKT_LEN) {
        return FAIL;  
      }

      if (txbuf_hd - txbuf_tl == 1 || txbuf_hd == 0 && txbuf_tl == 9) {
        return FAIL;
      }

      memcpy(txbufs[txbuf_tl], req, len);
      txbuf_tl = (txbuf_tl + 1) % 10;
      doSpi = txbuf_tl - txbuf_hd == 1 || txbuf_tl == 0 && txbuf_hd == 9;
    }
    //printf("Queue...\n");


    if (doSpi) {
      //printf("Posting...\n");
      post initSpi();
    }

    return SUCCESS;
  }

  uint8_t rxbuf[SPI_PKT_LEN];

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

  command error_t BleLocalChar.notify[uint8_t handle](uint16_t len,
    uint8_t const *value)
  {
    uint8_t txbuf[SPI_PKT_LEN];
    if (len > SPI_PKT_LEN - 2) {
      return FAIL;  
    }
    txbuf[0] = SPI_NOTIFY;
    txbuf[1] = handle;
    txbuf[2] = len;
    memcpy(txbuf + 3, value, len);
    return enqueue_tx(txbuf, len + 3);
  }

  command error_t BleLocalChar.indicate[uint8_t handle](uint16_t len, uint8_t const *value) {
    return SUCCESS;
  }

  command error_t NrfBleService.createService[uint8_t handle](uuid_t UUID) {
    uint8_t txbuf[4];
    txbuf[0] = SPI_ADD_SERVICE;
    txbuf[1] = handle;
    txbuf[2] = (uint8_t)UUID;
    txbuf[3] = (uint8_t)(UUID >> 8);
    return enqueue_tx(txbuf, sizeof(txbuf));
  }


  command error_t NrfBleService.addCharacteristic[uint8_t service_handle](uuid_t UUID, uint8_t char_handle)
  {
    uint8_t txbuf[5];
    txbuf[0] = SPI_ADD_CHARACTERISTIC;
    txbuf[1] = service_handle;
    txbuf[2] = char_handle;
    txbuf[3] = (uint8_t)UUID;
    txbuf[4] = (uint8_t)(UUID >> 8);
    return enqueue_tx(txbuf, sizeof(txbuf));
  }

  command error_t BleCentral.scan() {
    uint8_t txbuf[1];
    txbuf[0] = SPI_START_SCAN;
    return enqueue_tx(txbuf, sizeof(txbuf));
  }

  command error_t BlePeripheral.startAdvertising() {
    uint8_t txbuf[1];
    txbuf[0] = SPI_START_ADVERTISING;
    return enqueue_tx(txbuf, sizeof(txbuf));
  }

  command error_t BlePeripheral.stopAdvertising() {
    //TODO(alevy): implement nrf stop advertising over SPI
    return SUCCESS;
  }

  task void initialize()
  {
    uint8_t txbuf[1];
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

    enqueue_tx(txbuf, sizeof(txbuf));
  }

  async event void Int.fired()
  {
    uint8_t txbuf[1];
    printf("Interrupt fired\n");
    txbuf[0] = SPI_NOOP;
    enqueue_tx(txbuf, sizeof(txbuf));
  }

  command void BlePeripheral.initialize() {
    post initialize();
  }

  command void BleCentral.initialize() {
    post initialize();
  }

  task void initSpi() {
    uint8_t *buf;
    atomic {
      buf = txbufs[txbuf_hd];
      if (txbuf_hd == txbuf_tl) {
        return;
      }
      txbuf_hd = (txbuf_hd + 1) % 10;
    }
    call CS.clr();
    if (call SpiPacket.send(buf, rxbuf, SPI_PKT_LEN) == SUCCESS) {
      printf("SpiPacket send SUCCESS\n");  
    } else {
      printf("SpiPacket send SUCCESS\n");  
    }
  }


  task void ready() {
    signal BlePeripheral.ready();
    signal BleCentral.ready();
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
  default async event void BleCentral.advReceived(uint8_t* addr,
    uint8_t *data, uint8_t dlen, uint8_t rssi) {}

  async event void SpiPacket.sendDone(uint8_t* txBuf, uint8_t* rxBuf,
                                      uint16_t len, error_t error) {
    printf("SpiPacket done 0x%x 0x%x\n", txBuf[0], rxBuf[0]);
    call CS.set();
    if (error == SUCCESS) {
      if (rxBuf[0] == 0xee) {
        printf("Retrying spi...\n");
        call CS.clr();
        call SpiPacket.send(txBuf, rxbuf, SPI_PKT_LEN);
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
          signal BleCentral.advReceived(rxBuf + 1, rxBuf + 9, rxBuf[8], rxBuf[7]);
          break;
        case SPI_DEBUG:
          printf("[NRF] %s\n", rxBuf + 1);
          break;
      }
    }
    post initSpi();
  }
}

