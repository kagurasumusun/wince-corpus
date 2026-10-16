/* Voipconfigurationdatastore.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 14 constants, 7 declarations, 0 outlines, 0 base types, 0 extra macros, 5 extra decls
 */
#ifndef _VOIPCONFIGURATIONDATASTORE_
#define _VOIPCONFIGURATIONDATASTORE_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */
#define CONFIG_DATA_EXCHANGE_HTTPPROXY 0x0400
#define CONFIG_DATA_EXCHANGE_OWASERVER 0x0200
#define CONFIG_DATA_PHONE_INFO_AREACODES 0x0002
#define CONFIG_DATA_PHONE_INFO_DIALOUTPREFIX 0x0008
#define CONFIG_DATA_PHONE_INFO_USERNAME 0x0001
#define CONFIG_DATA_PHONE_INFO_VOICEMAIL 0x0004
#define CONFIG_DATA_PHONE_SIP_ACCOUNT 0x0100
#define CONFIG_DATA_PHONE_SIP_AUTHTYPE 0x0080
#define CONFIG_DATA_PHONE_SIP_SERVER 0x0020
#define CONFIG_DATA_PHONE_SIP_TRANSPORT 0x0040
#define CONFIG_DATA_PHONE_SIP_URI 0x0010
#define CONFIG_DATA_PRESENCE_SERVER 0x1000
#define CONFIG_DATA_PRESENCE_URI 0x0800
#define CONFIG_DATA_UPDATE_SMSSERVER 0x2000
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */

/* IVoIPConfigurationDataStore::Initialize  [function; ce-only; CE 5.0..599; Voipguid.lib] */
HRESULT Initialize();

/* IVoIPConfigurationDataStore::ReadValue  [function; ce-only; CE 5.0..599; Voipguid.lib] */
HRESULT ReadValue( 
 UINT fWhichItem, 
 WCHAR *wszDataBuffer, 
 UINT cchDataBuffer 
);

/* IVoIPConfigurationDataStore::Uninitialize  [function; ce-only; CE 5.0..599; Voipguid.lib] */
HRESULT Uninitialize();

/* IVoIPConfigurationDataStore::UpdateSettingsFromFile  [function; ce-only; CE 5.0..599; Voipguid.lib] */
HRESULT UpdateSettingsFromFile( 
 const WCHAR *c_wszFileName, 
 UINT fSettingsToUpdate, 
 UINT *pfUpdatedSettings 
);

/* IVoIPConfigurationDataStore::UpdateSettingsFromServer  [function; ce-only; CE 5.0..599; Voipguid.lib] */
HRESULT UpdateSettingsFromServer( 
 const WCHAR *c_wszServerName, 
 WCHAR* ldap_cred, 
 ULONG ldap_method, 
 UINT fSettingsToUpdate, 
 UINT *pfUpdatedSettings 
);

/* IVoIPConfigurationDataStore::UpdateSettingsFromXML  [function; ce-only; CE 5.0..599; Voipguid.lib] */
HRESULT UpdateSettingsFromXML( 
 const WCHAR *c_wszXML, 
 UINT fSettingsToUpdate, 
 UINT *pfUpdatedSettings 
);

/* IVoIPConfigurationDataStore::WriteValue  [function; ce-only; CE 5.0..599; Voipguid.lib] */
HRESULT WriteValue( 
 UINT fWhichItem, 
 const WCHAR *c_wszNewValue 
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT ReadValue( UINT fWhichItem, WCHAR *wszDataBuffer, UINT cchDataBuffer );
HRESULT UpdateSettingsFromFile( const WCHAR *c_wszFileName, UINT fSettingsToUpdate, UINT *pfUpdatedSettings );
HRESULT UpdateSettingsFromServer( const WCHAR *c_wszServerName, WCHAR* ldap_cred, ULONG ldap_method, UINT fSettingsToUpdate, UINT *pfUpdatedSettings );
HRESULT UpdateSettingsFromXML( const WCHAR *c_wszXML, UINT fSettingsToUpdate, UINT *pfUpdatedSettings );
HRESULT WriteValue( UINT fWhichItem, const WCHAR *c_wszNewValue );

#endif /* _VOIPCONFIGURATIONDATASTORE_ */
