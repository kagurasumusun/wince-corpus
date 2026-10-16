/* CcServiceCB.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 2 declarations, 0 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _CCSERVICECB_
#define _CCSERVICECB_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* ICcServiceCB::OnProgressNotify  [function; ce-only; CE 5.0..699] */
HRESULT OnProgressNotify(
 DWORD dwPreviousState,
 DWORD dwCurrentState,
 DWORD dwCurrentValue,
 DWORD dwMaxValue
);

/* ICcServiceCB::OnStatusChangeNotify  [function; ce-only; CE 5.0..699] */
HRESULT OnStatusChangeNotify(
 DWORD dwPreviousState,
 DWORD dwCurrentState,
 LPCOLESTR pwszStringData,
 IUnknown* pUnk
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT OnStatusChangeNotify( DWORDdwPreviousState,DWORDdwCurrentState,LPCOLESTRpwszStringData, IUnknown*pUnk);

#endif /* _CCSERVICECB_ */
