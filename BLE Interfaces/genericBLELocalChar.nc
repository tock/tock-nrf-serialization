/*GenericBLELocalChar uses a single BLELocalchar to create (many) */

generic module GenericBLELocalChar(int max_chars)
{
	provides interface BLELocalChar as LocalChar[uint8_t num];
}

implemntation
{
	//implement event handling 
}