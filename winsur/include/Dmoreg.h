/* Dmoreg.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 2 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _DMOREG_
#define _DMOREG_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* DMORegister  [function; shared; CE 4.0..699; Msdmo.lib] */
HRESULT DMORegister(
 LPCWSTR szName,
 REFCLSID clsidDMO,
 REFGUID guidCategory,
 REFCLSID clsidAutoWrap,
 DWORD dwFlags,
 DWORD cInTypes,
 const DMO_PARTIAL_MEDIATYPE* pInTypes,
 DWORD cOutTypes,
 const DMO_PARTIAL_MEDIATYPE* pOutTypes
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* DMORegisterFilter  [function; ce-only; CE 5.0..699; Msdmo.lib, msdmo.lib] */
STDAPI DMORegisterFilter(
 LPCWSTR szName,
 REFCLSID clsidDMO,
 REFGUID guidCategory,
 REFCLSID clsidAutoWrap,
 DWORD dwFlags,
 unsigned long ulInTypes,
 const DMO_PARTIAL_MEDIATYPE* pInTypes,
 unsigned long ulOutTypes,
 const DMO_PARTIAL_MEDIATYPE* pOutTypes
);
#endif /* _WIN32_WCE */

#endif /* _DMOREG_ */
