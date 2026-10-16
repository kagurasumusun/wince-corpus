/* Servicecategory.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 9 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _SERVICECATEGORY_
#define _SERVICECATEGORY_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 420 && _WIN32_WCE < 600)) /* CE 4.2..599 */

/* IPMServiceCategory::AddProperty  [function; ce-only; CE 4.2..599] */
HRESULT AddProperty( 
 BSTR bstrLinkName, 
 BSTR bstrPropId, 
 IPMProperty** ppiProperty 
);

/* IPMServiceCategory::AddServiceInfo  [function; ce-only; CE 4.2..599] */
HRESULT AddServiceInfo( 
 BSTR bstrServiceCLSID, 
 BSTR bstrServiceName, 
 IPMServiceInfo** ppiServiceInfo 
);

/* IPMServiceCategory::DeleteProperty  [function; ce-only; CE 4.2..599] */
HRESULT DeleteProperty( 
 BSTR bstrPropId 
);

/* IPMServiceCategory::DeleteServiceInfo  [function; ce-only; CE 4.2..599] */
HRESULT DeleteServiceInfo( 
 BSTR bstrServiceIdOrName 
);

/* IPMServiceCategory::EnumProperties  [function; ce-only; CE 4.2..599] */
HRESULT EnumProperties(IEnumVariant** ppiEnumProperty);

/* IPMServiceCategory::EnumServiceInfos  [function; ce-only; CE 4.2..599] */
HRESULT EnumServiceInfos(IEnumVariant** ppiEnumServiceInfo);

/* IPMServiceCategory::GetProperty  [function; ce-only; CE 4.2..599] */
HRESULT GetProperty(BSTR bstrPropId,IPMProperty** ppiProperty);

/* IPMServiceCategory::GetServiceInfo  [function; ce-only; CE 4.2..599] */
HRESULT GetServiceInfo(BSTR bstrServiceIdOrName,IPMServiceInfo** ppiServiceInfo);

/* IPMServiceCategory::Name  [function; ce-only; CE 4.2..599] */
HRESULT Name(BSTR* pbstrServiceCategoryName);
#endif /* _WIN32_WCE */

#endif /* _SERVICECATEGORY_ */
