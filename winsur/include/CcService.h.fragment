/* CcService.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 10 declarations, 0 outlines, 0 base types, 0 extra macros, 5 extra decls
 */
#ifndef _CCSERVICE_
#define _CCSERVICE_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* ICcService::Abort  [function; ce-only; CE 5.0..699] */
HRESULT Abort(
 DWORD dwCookieId
);

/* ICcService::CategoryId  [function; ce-only; CE 5.0..699] */
HRESULT CategoryId(
 BSTR* pbstrServiceCategoryId
);

/* ICcService::CLSID  [function; ce-only; CE 5.0..699] */
HRESULT CLSID (
 BSTR* pbstrServiceCLSID
);

/* ICcService::Connect  [function; ce-only; CE 5.0..699] */
HRESULT Connect(
 DWORD dwTimeout,
 VARIANT_BOOLbAsync,
 DWORD* pdwCookieId
);

/* ICcService::Device  [function; ce-only; CE 5.0..699] */
HRESULT Device (
 BSTR* pbstrDeviceId
);

/* ICcService::Disconnect  [function; ce-only; CE 5.0..699] */
HRESULT Disconnect()

/* ICcService::GetCurrentState  [function; ce-only; CE 5.0..699] */
HRESULT GetCurrentState (
 DWORD* pdwCurrentState
);

/* ICcService::Initialize  [function; ce-only; CE 5.0..699] */
HRESULT Initialize (
 LPCOLESTR pwszDeviceId
);

/* ICcService::LockService  [function; ce-only; CE 5.0..699] */
HRESULT LockService()

/* ICcService::UnlockService  [function; ce-only; CE 5.0..699] */
HRESULT UnlockService()
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT CLSID ( BSTR* pbstrServiceCLSID );
HRESULT Device ( BSTR* pbstrDeviceId);
HRESULT GetCurrentState ( DWORD*pdwCurrentState);
HRESULT LockService()
HRESULT UnlockService()

#endif /* _CCSERVICE_ */
