#include "BLE.h"

module DemoC
{
  uses interface BLEPeripheral;
  uses interface GATTServer;
  uses interface BLELocalChar as StartStopChar;
  uses interface BLELocalChar as HeartbeatChar;
  // Assume a heart rate monitor interface that:
  //   * Periodically fires an event `beat(uint8_t)`
  //   * Has `start(uint16_t interval)` and `stop()` tasks
  uses interface Hrm;

  uses interface Boot;
}

implementation
{
  event void Boot.booted()
  {
    // How do we wire characteristics to StartStopChar or HeartbeatChar?
    GATTServer.addService(..);

    ble_gap_addr_t myaddr;
    myaddr.addr_type = BLE_RANDOM;
    myaddr.addr = { ... };

    ble_adv_params_t advparams = {...};
    
    call BLEPeripheral.startAdvertise(myaddr, advparams, GATTServer);

    // Are we guaranteed ordering when we post a task? If so we may be able to
    // get away with having a separate task for setting the address.
  }

  event void BLEPeripheral.connected(...)
  {
    call HRM.start(1000); // By default, start once a second
  }

  event void StartStopChar.onWrite(char* val, int vallen) {
    if (vallen > 1) {
      uint16_t interval = val[0] + (uint16_t)val[1] << 8;
      if (interval) { 
        call HRM.start(interval);
      } else {
        call HRM.stop();  
      }
    }  
  }

  event void HRM.beat(uint8_t hr) {
    char val[1] = { hr }
    call HeartbeatChar.setValue(val, 1);
    call HeartbeatChar.notify(val, 1);
  }
}
