//Modeled off Gatt Client
interface BLERemoteChar{
	/*
	Initiate or continue a GATT Read (Long) Characteristic or Descriptor procedure.

	This function initiates a GATT Read (Long) Characteristic or Descriptor 
	procedure. If the Characteristic or Descriptor to be read is longer than 
	GATT_MTU - 1, this function must be called multiple times with appropriate 
	offset to read the complete value.
	*/
	command uint32_t read (uint16_t conn_handle, uint16_t handle, uint16_t offset);

	/*Initiate a GATT Read Multiple Characteristic Values procedure.*/
	command uint32_t char_values_read (uint16_t conn_handle, uint16_t const *const p_handles, uint16_t handle_count);
	
	/*Perform a Write (Characteristic Value or Descriptor, with or without response, signed or not, long or reliable) procedure.*/
	command uint32_t write (uint16_t conn_handle, ble_gattc_write_params_t const *const p_write_params);

	/*Send a Handle Value Confirmation to the GATT Server.*/
	command uint32_t handle_value_confirm (uint16_t conn_handle, uint16_t handle);

	/*Initiate or continue a GATT Primary Service Discovery procedure.*/
	command uint32_t primary_services_discover (uint16_t conn_handle, uint16_t start_handle, ble_uuid_t const *const p_srvc_uuid);
	
	/*Initiate or continue a GATT Relationship Discovery procedure.*/
	command uint32_t relationships_discover (uint16_t conn_handle, ble_gattc_handle_range_t const *const p_handle_range);
	
	/*Initiate or continue a GATT Characteristic Discovery procedure.*/
	command uint32_t characteristics_discover (uint16_t conn_handle, ble_gattc_handle_range_t const *const p_handle_range);
	
	/*Initiate or continue a GATT Characteristic Descriptor Discovery procedure.*/
	command uint32_t descriptors_discover (uint16_t conn_handle, ble_gattc_handle_range_t const *const p_handle_range);
	
	/*Initiate or continue a GATT Read using Characteristic UUID procedure*/
	command uint32_t char_value_by_uuid_read (uint16_t conn_handle, ble_uuid_t const *const p_uuid, ble_gattc_handle_range_t const *const p_handle_range);

	/*Primary Service Discovery Response event. */
	event void PRIM_SRVC_DISC_RSP();

	/*Relationship Discovery Response event*/
	event void REL_DISC_RSP();

	/*Characteristic Discovery Response event. */
	event void CHAR_DISC_RSP();

	/*Descriptor Discovery Response event.*/
	event void DESC_DISC_RSP();

	/*Read By UUID Response event.*/
	event void CHAR_VAL_BY_UUID_READ_RSP();

	/*Read Multiple Response event.*/
	event void READ_RSP();

	/*Write Response event*/
	event void WRITE_RSP();

	/*Handle Value Notification or Indication event.*/
	event void EVT_HVX();

	/*Timeout Event*/
	event void TIMEOUT();	


}