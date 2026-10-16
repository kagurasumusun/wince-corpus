/* Tl.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 10 declarations, 0 outlines, 0 base types, 0 extra macros, 8 extra decls
 */
#ifndef _TL_
#define _TL_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 420 && _WIN32_WCE < 600)) /* CE 4.2..599 */

/* ITransport::Accept  [function; ce-only; CE 4.2..599; Tlcesrv.dll] */
HRESULT Accept( 
 ITransportConnection** ppiTransportConnection 
);

/* ITransport::Configure  [function; ce-only; CE 4.2..599; Tlcesrv.dll] */
HRESULT Configure( 
 HWND hWnd, 
 IRemoteDevice* piDevice 
);

/* ITransport::GetClientName  [function; ce-only; CE 4.2..599; Tlcesrv.dll] */
HRESULT GetClientName( 
 LPOLESTR* ppszName 
);

/* ITransport::GetConnectionInfo  [function; ce-only; CE 4.2..599; Tlcesrv.dll] */
HRESULT GetConnectionInfo( 
 DWORD dwMaxSize, 
 BYTE* pData, 
 LPDWORD pdwActualSize 
);

/* ITransport::GetName  [function; ce-only; CE 4.2..599; Tlcesrv.dll] */
HRESULT GetName( 
 LPOLESTR* ppszName 
);

/* ITransport::GetType  [function; ce-only; CE 4.2..599; Tlcesrv.dll] */
HRESULT GetType(DEVICE_TYPE*pdt);

/* ITransport::InitConnection  [function; ce-only; CE 4.2..599; Tlcesrv.dll] */
HRESULT InitConnection( 
 IRemoteDevice* piDevice 
);

/* ITransportConnection::Close  [function; ce-only; CE 4.2..599; Tlcesrv.dll] */
HRESULT Close();

/* ITransportConnection::ReadBytes  [function; ce-only; CE 4.2..599; Tlcesrv.dll] */
HRESULT ReadBytes( 
 DWORD dwSize, 
 BYTE* pData, 
 LPDWORD pdwBytesAvailable, 
 LPDWORD pdwBytesRead 
);

/* ITransportConnection::WriteBytes  [function; ce-only; CE 4.2..599; Tlcesrv.dll] */
HRESULT WriteBytes( 
 DWORD dwSize, 
 BYTE* pData, 
 LPDWORD pdwBytesWritten 
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT Accept( ITransportConnection** ppiTransportConnection );
HRESULT Configure( HWND hWnd, IRemoteDevice* piDevice );
HRESULT GetClientName( LPOLESTR* ppszName );
HRESULT GetConnectionInfo( DWORD dwMaxSize, BYTE* pData, LPDWORD pdwActualSize );
HRESULT GetName( LPOLESTR* ppszName );
HRESULT GetType( DEVICE_TYPE* pdt );
HRESULT InitConnection( IRemoteDevice* piDevice );
HRESULT WriteBytes( DWORD dwSize, BYTE* pData, LPDWORD pdwBytesWritten );

#endif /* _TL_ */
