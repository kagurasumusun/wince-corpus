/* Property.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 9 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _PROPERTY_
#define _PROPERTY_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 420 && _WIN32_WCE < 600)) /* CE 4.2..599 */

/* IPMProperty::AddProperty  [function; ce-only; CE 4.2..599] */
HRESULT AddProperty( 
 BSTR bstrLinkName, 
 BSTR bstrPropId, 
 IPMProperty** ppiProperty 
);

/* IPMProperty::AddPropInfo  [function; ce-only; CE 4.2..599] */
HRESULT AddPropInfo( 
 BSTR bstrPropInfoName, 
 long dwPropInfoType, 
 BSTR bstrPropInfoValue, 
 IPMPropInfo** ppiPropInfo 
);

/* IPMProperty::DeleteProperty  [function; ce-only; CE 4.2..599] */
HRESULT DeleteProperty( 
 BSTR bstrPropId 
);

/* IPMProperty::DeletePropInfo  [function; ce-only; CE 4.2..599] */
HRESULT DeletePropInfo( 
 BSTR bstrPropInfoName 
);

/* IPMProperty::EnumProperties  [function; ce-only; CE 4.2..599] */
HRESULT EnumProperties(IEnumVariant** ppiEnumProperty);

/* IPMProperty::EnumPropInfos  [function; ce-only; CE 4.2..599] */
HRESULT EnumPropInfos(IEnumVariant** ppiEnumPropInfo);

/* IPMProperty::GetProperty  [function; ce-only; CE 4.2..599] */
HRESULT GetProperty(BSTR bstrPropId,IPMProperty** ppiProperty);

/* IPMProperty::GetPropInfo  [function; ce-only; CE 4.2..599] */
HRESULT GetPropInfo(BSTR bstrPropName,IPMPropInfo** ppiPropInfo);

/* IPMProperty::Id  [function; ce-only; CE 4.2..599] */
HRESULT Id(BSTR* pbstrPropId);
#endif /* _WIN32_WCE */

#endif /* _PROPERTY_ */
