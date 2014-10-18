#include "printf.h"

module DemoC
{
  uses interface BlePeripheral;
  uses interface Boot;
  uses interface BleLocalService as Observer;
  uses interface HplSam4lUSART as SpiHPL;
  uses interface SpiPacket;
  uses interface Timer<TMilli> as Timer;
  uses interface GeneralIO as Led;
  uses interface GeneralIO as CS;
}

implementation
{
  uint8_t txbuf[80];
  uint8_t rxbuf[80];

  event void Boot.booted()
  {
    call SpiHPL.enableUSARTPin(USART2_TX_PC12);
    call SpiHPL.enableUSARTPin(USART2_RX_PC11);
    call SpiHPL.enableUSARTPin(USART2_CLK_PA18);
    //call SpiHPL.enableUSARTPin(USART2_RTS_PC07);
    call SpiHPL.initSPIMaster();
    call SpiHPL.setSPIMode(0,0);
    call SpiHPL.setSPIBaudRate(20000);
    call SpiHPL.enableTX();
    call SpiHPL.enableRX();

    call Timer.startPeriodic(500);
    call Led.makeOutput();
    call CS.makeOutput();
    call CS.set();
  }

  event void Timer.fired() {

    uint8_t txlen;
    txlen = snprintf(txbuf, 80, "Welcome!") + 1;
    call CS.clr();
    call SpiPacket.send(txbuf, rxbuf, txlen);
    call Led.toggle();

    //for(i=0; i < len; i++)
    //{
    //  rxBuf[i]= call Spi.splitReadWrite(value[i]);
    //}
    //call Observer.configure();
    //call BlePeripheral.startAdvertising();
  }

  async event void SpiPacket.sendDone(uint8_t* txBuf, uint8_t* rxBuf,
                                      uint16_t len, error_t error) {
    call CS.set();
  }

  event void BlePeripheral.connected()
  {
    // call HRM.start(1000); // By default, start once a second
  }

  event void BlePeripheral.disconnected()
  {
    call BlePeripheral.startAdvertising();
  }

  event void BlePeripheral.advertisingTimeout()
  {
    call BlePeripheral.startAdvertising();
  }

}
