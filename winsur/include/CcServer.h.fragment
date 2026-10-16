/* CcServer.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 5 declarations, 0 outlines, 0 base types, 0 extra macros, 5 extra decls
 */
#ifndef _CCSERVER_
#define _CCSERVER_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* ICcServer::EnumerateConnections  [function; ce-only; CE 5.0..699] */
HRESULT EnumerateConnections(
 [in] DWORD dwSizeActual,
 [out] DWORD* pdwSizeReturned,
 [out,size_is(dwSizeActual), length_is(d*pdwSizeReturned)] BSTR[] Connections,
 [out] VARIANT_BOOL* pfMoreEntries
);

/* ICcServer::GetConnection  [function; ce-only; CE 5.0..699] */
HRESULT GetConnection(
 ICcDevice* piDevice,
 DWORD dwTimeout,
 ICcServiceCB* piCallback,
 BSTR* pbstrConnectionId,
 ICcConnection** piTargetDevice
);

/* ICcServer::GetConnectionFromId  [function; ce-only; CE 5.0..699] */
HRESULT GetConnectionFromId(
 BSTR bstrConnectionId,
 ICcConnection** ppiConnection
);

/* ICcServer::GetDatastore  [function; ce-only; CE 5.0..699] */
HRESULT GetDatastore(
 DWORD dwLocale,
 ICcDatastore** ppiDatastore
);

/* ICcServer::Locale  [function; ce-only; CE 5.0..699] */
HRESULT get_Locale (
 DWORD* pdwLocale
);
 HRESULT put_Locale (
 DWORD dwLocale
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT EnumerateConnections( [in] DWORD dwSizeActual, [out] DWORD* pdwSizeReturned, [out,size_is(dwSizeActual), length_is(d*pdwSizeReturned)] BSTR[] Connections, [out] VARIANT_BOOL* pfMoreEntries);
HRESULT GetConnectionFromId( BSTR bstrConnectionId, ICcConnection** ppiConnection);
HRESULT GetDatastore( DWORD dwLocale, ICcDatastore** ppiDatastore);
HRESULT get_Locale ( DWORD* pdwLocale);
HRESULT put_Locale ( DWORDdwLocale);

#endif /* _CCSERVER_ */
