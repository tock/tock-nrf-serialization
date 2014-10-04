//Modeled from Gatt Server 
interface BLELocalChar
{

	/*These 3 will be condensed into a single command*/
	/*Add a service declaration to the local server ATT table.*/
	/*Add a characteristic declaration, a characteristic value 
		declaration and optional characteristic descriptor 
		declarations to the local server ATT table.*/
	/*Add a descriptor to the local server ATT table.*/
	command uint32_t service_add (uint8_t type, ble_uuid_t const *const p_uuid, uint16_t *const p_handle);
	command uint32_t characteristic_add (uint16_t service_handle, ble_gatts_char_md_t const *const p_char_md, ble_gatts_attr_t const *const p_attr_char_value, ble_gatts_char_handles_t *const p_handles);
	command uint32_t descriptor_add (uint16_t char_handle, ble_gatts_attr_t const *const p_attr, uint16_t *const p_handle);
	
	/*Add an include declaration to the local server ATT table.*/
	command uint32_t include_add (uint16_t service_handle, uint16_t inc_srvc_handle, uint16_t *const p_include_handle);
	
	/*Set/Get the value of a given attribute.*/
	command uint32_t value_set (uint16_t handle, uint16_t offset, uint16_t *const p_len, uint8_t const *const p_value);
	command uint32_t value_get (uint16_t handle, uint16_t offset, uint16_t *const p_len, uint8_t *const p_data);

	/*Notify or Indicate an attribute value.*/
	command uint32_t sd_ble_gatts_hvx (uint16_t conn_handle, ble_gatts_hvx_params_t const *const p_hvx_params);

	/*Indicate the Service Changed attribute value.*/
	command uint32_t service_changed (uint16_t conn_handle, uint16_t start_handle, uint16_t end_handle);

	/*Respond to a Read/Write authorization request. */
	command uint32_t readwrite_authorize_reply (uint16_t conn_handle, ble_gatts_rw_authorize_reply_params_t const *const p_rw_authorize_reply_params);
	
	/*Set/Get persistent system attribute information*/
	command uint32_t sys_attr_set (uint16_t conn_handle, uint8_t const *const p_sys_attr_data, uint16_t len);
	command uint32_t sys_attr_get (uint16_t conn_handle, uint8_t *const p_sys_attr_data, uint16_t *const p_len);

	/*Write Operation Performed*/
	event void EVT_WRITE();

	/*Read/Write Authorization request.*/
	event void AUTHORIZE_REQUEST();

	/*A persistent system attribute access pending, awaiting a system attribute set*/
	event void SYS_ATTR_MISSING(); 

	/*Handle Value Confirmation*/
	event void HVC();

	/*Service Changed Confirmation*/
	event void SC_CONFIRM();

	/*Timeout*/
	event void TIMEOUT();
}