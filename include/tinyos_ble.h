#ifndef TINYOS_BLE_H
#define TINYOS_BLE_H 1
typedef uint16_t uuid_t;

enum SPI_OPCODES {
  SPI_NOOP = 0,
  SPI_RESET = 1,
  SPI_START_SCAN = 2,
  SPI_STOP_SCAN = 3,
  SPI_ADVERTISE = 4, // advertisement received
  SPI_START_ADVERTISING = 5,
  SPI_STOP_ADVERTISING = 6,
  SPI_CONNECT = 7, // CONNECT or CONNECTED
  SPI_DISCONNECT = 8, // DISCONNECT or DISCONNECTED
  SPI_ADD_SERVICE = 9,
  SPI_ADD_CHARACTERISTIC = 10,
  SPI_NOTIFY = 11,
  // addition opcodes go here
  SPI_DEBUG = 0xcc
};
#endif
