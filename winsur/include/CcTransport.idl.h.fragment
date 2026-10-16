/* CcTransport.idl -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 12 declarations, 0 outlines, 0 base types, 0 extra macros, 7 extra decls
 */
#ifndef _CCTRANSPORT_IDL_
#define _CCTRANSPORT_IDL_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* ICcTransport::Bandwidth  [function; ce-only; CE 5.0..699] */
HRESULT Bandwidth(
 DWORD* pdwRate
);

/* ICcTransport::CreateStream  [function; ce-only; CE 5.0..699] */
HRESULT CreateStream(
 LPCOLESTR wszStreamId,
 DWORD dwTimeout,
 VARIANT_BOOL bAsync,
 ICcTransportStream** piStream
);

/* ICcTransport::MTU  [function; ce-only; CE 5.0..699] */
HRESULT MTU(
 DWORD* pdwMTU
);

/* ICcTransport::SupportsNonUniqueStreamId  [function; ce-only; CE 5.0..699] */
HRESULT SupportsNonUniqueStreamId (
 VARIANT_BOOL* pbSupported 
);

/* ICcTransportInit::Initialize  [function; ce-only; CE 5.0..699] */
HRESULT Initialize()

/* ICcTransportStream::Buffering  [function; ce-only; CE 5.0..699] */
HRESULT Buffering(
 [in] VARIANT_BOOL bBuffering
);
HRESULT Buffering(
 [out, retval] VARIANT_BOOL* pbBuffering
);

/* ICcTransportStream::Disconnect  [function; ce-only; CE 5.0..699] */
HRESULT Disconnect()

/* ICcTransportStream::ID  [function; ce-only; CE 5.0..699] */
HRESULT ID (
 BSTR* pbstrStreamId 
);

/* ICcTransportStream::IsConnected  [function; ce-only; CE 5.0..699] */
HRESULT IsConnected(
 VARIANT_BOOL* pbConnected
);

/* ICcTransportStream::IsDataAvailable  [function; ce-only; CE 5.0..699] */
HRESULT IsDataAvailable(
 VARIANT_BOOL* pbDataAvailable
);

/* ICcTransportStream::Recv  [function; ce-only; CE 5.0..699] */
HRESULT Recv( 
 DWORD dwTimeout, 
 BYTE* pBuffer,
 DWORD* pcbBuffer
);

/* ICcTransportStream::Send  [function; ce-only; CE 5.0..699] */
HRESULT Send(
 DWORD dwTimeout,
 LPBYTE pData,
 DWORD cbData
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT Bandwidth( DWORD* pdwRate);
HRESULT Buffering( [in] VARIANT_BOOL bBuffering);
HRESULT ID ( BSTR* pbstrStreamId );
HRESULT IsDataAvailable( VARIANT_BOOL* pbDataAvailable);
HRESULT MTU( DWORD* pdwMTU);
HRESULT Recv( DWORD dwTimeout, BYTE*pBuffer, DWORD*pcbBuffer );
HRESULT SupportsNonUniqueStreamId ( VARIANT_BOOL*pbSupported );

#endif /* _CCTRANSPORT_IDL_ */
