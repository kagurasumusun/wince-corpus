/* CcSvcHost.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 4 declarations, 0 outlines, 0 base types, 0 extra macros, 3 extra decls
 */
#ifndef _CCSVCHOST_
#define _CCSVCHOST_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* ICcSvcHost::DisplayServices  [function; ce-only; CE 5.0..699] */
HRESULT DisplayServices(
 LPCOLESTR pwszDeviceId,
 LPCOLESTR pwszDefaultControl,
 LPCOLESTR pwszClientId
);

/* ICcSvcHost::GetDeviceState  [function; ce-only; CE 5.0..699] */
HRESULT GetDeviceState(
 LPCOLESTR pwszDeviceId,
 DWORD* pdwDeviceState
);

/* ICcSvcHost::GetService  [function; ce-only; CE 5.0..699] */
HRESULT GetService(
 LPCOLESTR pwszDeviceId,
 LPCOLESTR pwszServiceCategoryId,
 ICcService** piService
);

/* ICcSvcHost::Version  [function; ce-only; CE 5.0..699] */
HRESULT Version (
 BSTR* pbstrVersion
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT DisplayServices(LPCOLESTRpwszDeviceId,LPCOLESTRpwszDefaultControl,LPCOLESTRpwszClientId);
HRESULT GetDeviceState( LPCOLESTR pwszDeviceId, DWORD* pdwDeviceState);
HRESULT GetService( LPCOLESTR pwszDeviceId,LPCOLESTR pwszServiceCategoryId,ICcService** piService);

#endif /* _CCSVCHOST_ */
