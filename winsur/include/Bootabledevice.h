/* Bootabledevice.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 0 declarations, 0 outlines, 0 base types, 0 extra macros, 7 extra decls
 */
#ifndef _BOOTABLEDEVICE_
#define _BOOTABLEDEVICE_


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
