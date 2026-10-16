/* Bootabledevice.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 8 declarations, 0 outlines, 0 base types, 0 extra macros, 7 extra decls
 */
#ifndef _BOOTABLEDEVICE_
#define _BOOTABLEDEVICE_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 420 && _WIN32_WCE < 600)) /* CE 4.2..599 */

/* IPMBootableDevice::AddProperty  [function; ce-only; CE 4.2..599] */
HRESULT AddProperty( 
 BSTR bstrLinkName, 
 BSTR bstrPropId, 
 IPMProperty** ppiProperty 
);

/* IPMBootableDevice::AddServiceInfo  [function; ce-only; CE 4.2..599] */
HRESULT AddServiceInfo(BSTR bstrServiceCategoryIdOrName,BSTR bstrServiceCLSID);

/* IPMBootableDevice::DeleteProperty  [function; ce-only; CE 4.2..599] */
HRESULT DeleteProperty( 
 BSTR bstrPropId 
);

/* IPMBootableDevice::DeleteService  [function; ce-only; CE 4.2..599] */
HRESULT DeleteService( 
 BSTR bstrServiceCategoryIdOrName 
);

/* IPMBootableDevice::EnumProperties  [function; ce-only; CE 4.2..599] */
HRESULT EnumProperties(IEnumVariant** ppiEnumProperty);

/* IPMBootableDevice::GetProperty  [function; ce-only; CE 4.2..599] */
HRESULT GetProperty(BSTR bstrPropId,IPMProperty** ppiProperty);

/* IPMBootableDevice::Id  [function; ce-only; CE 4.2..599] */
HRESULT Id(BSTR* pbstrBootableDeviceId);

/* IPMBootableDevice::Name  [function; ce-only; CE 4.2..599] */
HRESULT Name(BSTR* pbstrBootableDeviceName);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT AddProperty( BSTR bstrLinkName, BSTR bstrPropId, IPMProperty** ppiProperty );
HRESULT AddServiceInfo( BSTR bstrServiceCategoryIdOrName, BSTR bstrServiceCLSID );
HRESULT DeleteProperty( BSTR bstrPropId );
HRESULT DeleteService( BSTR bstrServiceCategoryIdOrName );
HRESULT EnumProperties( IEnumVariant** ppiEnumProperty );
HRESULT GetProperty( BSTR bstrPropId, IPMProperty** ppiProperty );
HRESULT Id( BSTR* pbstrBootableDeviceId );

#endif /* _BOOTABLEDEVICE_ */
