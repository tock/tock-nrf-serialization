/* Parse Firestorm Sensing advertisements */

var parse_advertisement = function (advertisement, cb) {

    if (advertisement.localName === 'FSTORM') {
        if (advertisement.hasOwnProperty('manufacturerData')) {
            // Need at least 3 bytes. Two for manufacturer identifier and
            // one for the service ID.
            if (advertisement.manufacturerData.length >= 3) {
                // Check that manufacturer ID and service byte are correct
                var manufacturer_id = advertisement.manufacturerData.readUIntLE(0, 2);
                var service_id = advertisement.manufacturerData.readUInt8(2);
                if (manufacturer_id == 0x02E0 && service_id == 0x15) {
                    // OK! This looks like the right packet
                    if (advertisement.manufacturerData.length > 4) {
                        var version = advertisement.manufacturerData.readUInt8(3);

                        if (version == 0) {
                            var sensor_data = advertisement.manufacturerData.slice(4);

                            // Initial packet
                            if (sensor_data.length == 2) {
                                var temp = sensor_data.readIntLE(0,2);

                                var out = {
                                    device: 'FirestormSensing',
                                    temperature_celcius: temp
                                };

                                cb(out);
                                return;
                            }
                        }
                    }
                }
            }
        }
    }

    cb(null);
}


module.exports = {
    parseAdvertisement: parse_advertisement
};
