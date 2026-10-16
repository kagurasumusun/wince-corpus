/* CcServiceConfigure.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 4 declarations, 0 outlines, 0 base types, 0 extra macros, 2 extra decls
 */
#ifndef _CCSERVICECONFIGURE_
#define _CCSERVICECONFIGURE_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* ICcServiceConfigure::Configure  [function; ce-only; CE 5.0..699] */
HRESULT Configure (
 LONG* phWndParent
);

/* ICcServiceConfigure::GetProperty  [function; ce-only; CE 5.0..699] */
HRESULT GetProperty(
 BSTR bstrPropertyName,
 BSTR* pbstrPropertyValue
);

/* ICcServiceConfigure::GetServiceParamsShort  [function; ce-only; CE 5.0..699] */
HRESULT GetServiceParamsShort(
 BSTR* pbstrShortParams
);

/* ICcServiceConfigure::SetProperty  [function; ce-only; CE 5.0..699] */
HRESULT SetProperty(
 BSTR bstrPropertyName,
 BSTR bstrPropertyValue
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT GetServiceParamsShort( BSTR*pbstrShortParams);
HRESULT SetProperty( BSTRbstrPropertyName, BSTRbstrPropertyValue);

#endif /* _CCSERVICECONFIGURE_ */
