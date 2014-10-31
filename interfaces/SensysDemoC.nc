/*
 * Copyright (c) 2008 The Regents of the University  of California.
 * All rights reserved."
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the
 *   distribution.
 * - Neither the name of the copyright holders nor the names of
 *   its contributors may be used to endorse or promote products derived
 *   from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL
 * THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#include <lib6lowpan/6lowpan.h>

configuration SensysDemoC
{

}
implementation
{
    components MainC, HplSam4lIOC;
    components SensysDemoP;

    SensysDemoP.Boot -> MainC;
    SensysDemoP.Led -> HplSam4lIOC.PC10;

    components new TimerMilliC();
    components IPStackC;

    SensysDemoP.RadioControl ->  IPStackC;

    components new UdpSocketC() as DataSock;
    components new UdpSocketC() as BLESock;
    SensysDemoP.DataSock -> DataSock;
    SensysDemoP.BLESock -> BLESock;
    SensysDemoP.Timer -> TimerMilliC;
    SensysDemoP.HelenaService -> HelenaServiceC;

    components HplSam4lClockC;
    components UdpC, IPDispatchC;
    components FireStormSensorsC;
    SensysDemoP.SensorControl -> FireStormSensorsC;
    components RPLRoutingC;
    SensysDemoP.RootControl -> RPLRoutingC;
    SensysDemoP.RplControl -> RPLRoutingC.StdControl;
    components UDPShellC;
    components RouteCmdC;
    components StaticIPAddressC;
    components SerialPrintfC;
    components FlashAttrC;
    SensysDemoP.FlashAttr -> FlashAttrC;
    SensysDemoP.ForwardingTable -> IPStackC;
    SensysDemoP.FSIlluminance -> FireStormSensorsC;
    SensysDemoP.FSAccelerometer -> FireStormSensorsC;

    //BLE STUFF
    components NrfBleP, HelenaServiceC;
    components new Sam4lUSART2C() as NrfSPI;
    components new SpiBleLocalCharC() as UUIDListedDevice;
    components new SpiBleLocalServiceC() as HelenaBleService;

    HelenaServiceC.UUIDListedDevice -> UUIDListedDevice;
    HelenaServiceC.BLE -> HelenaBleService;

    NrfBleP.SpiPacket -> NrfSPI.SpiPacket;
    NrfBleP.SpiHPL -> NrfSPI;
    NrfBleP.CS -> HplSam4lIOC.PC07;
    NrfBleP.IntPort -> HplSam4lIOC.PA17;
    NrfBleP.Int -> HplSam4lIOC.PA17IRQ;

    SensysDemoP.BlePeripheral -> NrfBleP;
    SensysDemoP.BleCentral -> NrfBleP;
    SensysDemoP.HelenaBleService -> HelenaServiceC;


    //Screw this. Just reset if things don't go as planned
    components ScrufflesC;
    SensysDemoP.ScrufflesCtl -> ScrufflesC;
}
