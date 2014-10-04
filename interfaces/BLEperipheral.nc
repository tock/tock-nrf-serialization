//Header Files
//

interface BLEperipheral
{
	/*These 4 will be condensed into a single command that will set the 
	address, advertising data, and the device name.  Then 
	advertising will start*/

	command uint32_t address_set (uint8_t addr_cycle_mode, ble_gap_addr_t const *const p_addr);
	command uint32_t adv_data_set (uint8_t const *const p_data, uint8_t dlen, uint8_t const *const p_sr_data, uint8_t srdlen);
	command uint32_t adv_start (ble_gap_adv_params_t const *const p_adv_params);
	command uint32_t device_name_set (ble_gap_conn_sec_mode_t const *const p_write_perm, uint8_t const *const p_dev_name, uint16_t len);

	/*Stop advertising*/
	command uint32_t adv_stop (void);

	/*Get current connection security*/
	command uint32_t connection_security_get (uint16_t conn_handle, ble_gap_conn_sec_t *const p_conn_sec);

	/*Get local Bluetooth address*/
	command uint32_t address_get (ble_gap_addr_t *const p_addr);

	/*Get/set GAP Peripheral Preferred Connection Parameters.*/ 
	command uint32_t gap_ppcp_get (ble_gap_conn_params_t *const p_conn_params);
	command uint32_t gap_ppcp_set (ble_gap_conn_params_t const *const p_conn_params);

	/*Get GAP device Name*/
	command uint32_t gap_device_name_get (uint8_t *const p_dev_name, uint16_t *const p_len);

	/*Update connection parameters*/
	command uint32_t connection_param_update (uint16_t conn_handle, ble_gap_conn_params_t const *const p_conn_params);

	/*Disconnect(GAP Lint Termination)*/
	command uint32_t sd_ble_gap_disconnect (uint16_t conn_handle, uint8_t hci_status_code);

	/*Set radio transmit power*/
	command uint32_t radio_power_set (int8_t tx_power);

	/*Initiate GAP Authentication procedure.*/
	command uint32_t gap_authenticate (uint16_t conn_handle, ble_gap_sec_params_t const *const p_sec_params);

	/*Reply with GAP security parameters*/
	command uint32_t gap_security_params_reply (uint16_t conn_handle, uint8_t sec_status, ble_gap_sec_params_t const *const p_sec_params);
	
	/*Reply with an authentication key*/
	command uint32_t gap_auth_key_reply (uint16_t conn_handle, uint8_t key_type, uint8_t const *const key);
	
	/*Reply with GAP security information*/
	command uint32_t gap_sec_info_reply (uint16_t conn_handle, ble_gap_enc_info_t const *const p_enc_info, ble_gap_sign_info_t const *const p_sign_info);
	
	/*Start/Stop reporting the received signal strength*/
	command uint32_t rssi_start (uint16_t conn_handle);
	command uint32_t rssi_stop (uint16_t conn_handle);

	/*Get/Set GAP Appearance value.*/
	command uint32_t gap_appearance_set (uint16_t appearance);
	command uint32_t gap_appearance_get (uint16_t *const p_appearance);

	
	/*Connection established. */
	event void EVT_CONNECTED();

	/*Disconnected from peer. */
	event void DISCONNECTED();

	/*Connection Parameters updated. */
	event void CONN_PARAM_UPDATE();

	/*Request to provide security parameters. */
	event void SEC_PARAMS_REQUEST();

	/*Request to provide security information.*/
	event void SEC_INFO_REQUEST();

	/*Request to display a passkey to the user. */
	event void PASSKEY_DISPLAY();

	/*Request to provide an authentication key. */
	event void AUTH_STATUS();

	/*Connection security updated.*/ 
	event void CONN_SEC_UPDATE();

	/*Timeout expired.*/
	event void TIMEOUT(); 

	/*Signal strength measurement report. */
	event void RSSI_CHANGED();
}