generic configuartion BLELocalCharC() {
	provides interface BLELocalChar;
}

implementation {
	components GenericBLELocalChar;

	BLELocalChar=GenericBLELocalChar.LocalChar[unique(UQ_BLE_CHAR)];

}