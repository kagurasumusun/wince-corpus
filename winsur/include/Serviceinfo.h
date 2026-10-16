/* Serviceinfo.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 6 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _SERVICEINFO_
#define _SERVICEINFO_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 420 && _WIN32_WCE < 600)) /* CE 4.2..599 */

/* IPMServiceInfo::AddProperty  [function; ce-only; CE 4.2..599] */
HRESULT AddProperty( 
 BSTR bstrLinkName, 
 BSTR bstrPropId, 
 IPMProperty** ppiProperty 
);

/* IPMServiceInfo::DeleteProperty  [function; ce-only; CE 4.2..599] */
HRESULT DeleteProperty( 
 BSTR bstrPropId 
);

/* IPMServiceInfo::EnumProperties  [function; ce-only; CE 4.2..599] */
HRESULT EnumProperties(IEnumVariant** ppiEnumProperty);

/* IPMServiceInfo::GetProperty  [function; ce-only; CE 4.2..599] */
HRESULT GetProperty(BSTR bstrPropId,IPMProperty** ppiProperty);

/* IPMServiceInfo::Id  [function; ce-only; CE 4.2..599] */
HRESULT Id(BSTR* pbstrServiceCLSID);

/* IPMServiceInfo::Name  [function; ce-only; CE 4.2..599] */
HRESULT Name(BSTR bstrServiceInfoName);
#endif /* _WIN32_WCE */

#endif /* _SERVICEINFO_ */
