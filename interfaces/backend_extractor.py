__author__ = 'immesys'

import sys
import simplejson

buffer = ""

import requests
#example data, see model for what can be added

#sensor_readings={'firestorm': '0xfffffff4', 'acc_X':'120','acc_Y':'130','acc_Z':'140','mag_X':'50','mag_Y':'60','mag_Z':'60','light':'9000'}
#observation = {'observer': '0xfffffff5', 'observedMAC': '0xeeeeeeeee' , 'manufactorer':'234'}
base_url = "http://127.0.0.1:8000/firestorm/add/"


def addObservation(payload  ):
    r = requests.post(base_url+"observation/", data=payload)
    text_file = open("out.html", "w")
    text_file.write(r.text)

def addFirestormReading(payload):
    r = requests.post(base_url+"sensordata/", data=sensor_readings)
    text_file = open("out-observation.html", "w")
    text_file.write(r.text)
    print r.text

def parse_data_struct(s):
    try:
        ds = simplejson.loads(s)
        sensor_readings={'firestorm': ds["from"], 'acc_X':ds["acc_x"],'acc_Y':ds["acc_y"],'acc_Z':ds["acc_z"],'mag_X':ds["mag_x"],'mag_Y':ds["mag_y"],'mag_Z':ds["mag_z"],'light':ds["lux"]}
        addFirestormReading(sensor_readings)
        #insert into the db
    except:
        print "badness"
        pass

def parse_ble_struct(s):
    try:
        bs = simplejson.loads(s)
        for d in bs["ids"]:
            observation = {'observer': "0xFFEE", 'observedMAC': hex(d), 'manufactorer':'1'}
            addObservation(observation)

    except:
        print "badness"
        pass

def scan_buffer():
    global buffer
    dsidx = buffer.find("DSTRUCT<<")
    bsidx = buffer.find("BSTRUCT<<")
    if dsidx == -1 and bsidx == -1:
        #print "not found\n"
        return
    if dsidx != -1:
        if dsidx < bsidx or bsidx == -1:
            buffer = buffer[dsidx:]
            eidx = buffer.find(">>")
            if  eidx != -1:
                s = buffer[9:eidx]
                #print "data struct is", s
                sys.stdout.flush()
                buffer = buffer[eidx+2:]
                parse_data_struct(s)
            else:
                pass
                #print "end not found"
    bsidx = buffer.find("BSTRUCT<<")
    if bsidx != -1:
        buffer = buffer[bsidx:]
        eidx = buffer.find(">>")
        if  eidx != -1:
            s = buffer[9:eidx]
            #print "ble struct is", s
            buffer = buffer[eidx+2:]
            parse_ble_struct(s)

while True:
        buffer += sys.stdin.read(1)
        scan_buffer()
        #print "buffer len is", len(buffer)
