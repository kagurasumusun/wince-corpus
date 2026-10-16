/* Afxsock.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 32 declarations, 0 outlines, 0 base types, 0 extra macros, 18 extra decls
 */
#ifndef _AFXSOCK_
#define _AFXSOCK_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 200 && _WIN32_WCE < 210)) /* CE 2.0..209 */

/* CAsyncSocket::Accept  [function; ce-only; CE 2.0..209] */
virtual BOOL Accept( CAsyncSocket& rConnectedSocket, SOCKADDR* lpSockAddr = NULL, int* lpSockAddrLen = NULL );

/* CAsyncSocket::Attach  [function; ce-only; CE 2.0..209] */
BOOL Attach( SOCKET hSocket );

/* CAsyncSocket::Bind  [function; ce-only; CE 2.0..209] */
BOOL Bind( UINT nSocketPort, LPCTSTR lpszSocketAddress = NULL );

/* CAsyncSocket::Close  [function; ce-only; CE 2.0..209] */
virtual void Close( );

/* CAsyncSocket::Connect  [function; ce-only; CE 2.0..209] */
BOOL Connect( LPCTSTR lpszHostAddress, UINT nHostPort );

/* CAsyncSocket::Create  [function; ce-only; CE 2.0..209] */
BOOL Create( UINT nSocketPort = 0, int nSocketType = SOCK_STREAM, long lEvent = FD_READ | FD_WRITE | FD_OOB | FD_ACCEPT | FD_CONNECT | FD_CLOSE, LPCTSTR lpszSocketAddress = NULL );

/* CAsyncSocket::Detach  [function; ce-only; CE 2.0..209] */
SOCKET Detach( );

/* CAsyncSocket::FromHandle  [function; ce-only; CE 2.0..209] */
static CAsyncSocket* PASCAL FromHandle( SOCKET hSocket );

/* CAsyncSocket::GetPeerName  [function; ce-only; CE 2.0..209] */
BOOL GetPeerName( CString& rPeerAddress, UINT& rPeerPort );

/* CAsyncSocket::GetSockName  [function; ce-only; CE 2.0..209] */
BOOL GetSockName( CString& rSocketAddress, UINT& rSocketPort );

/* CAsyncSocket::GetSockOpt  [function; ce-only; CE 2.0..209] */
BOOL GetSockOpt( int nOptionName, void* lpOptionValue, int* lpOptionLen, int nLevel = SOL_SOCKET );

/* CAsyncSocket::IOCtl  [function; ce-only; CE 2.0..209] */
BOOL IOCtl( long lCommand, DWORD* lpArgument );

/* CAsyncSocket::Listen  [function; ce-only; CE 2.0..209] */
BOOL Listen( int nConnectionBacklog = 5 );

/* CAsyncSocket::OnAccept  [function; ce-only; CE 2.0..209] */
virtual void OnAccept ( int nErrorCode );

/* CAsyncSocket::OnClose  [function; ce-only; CE 2.0..209] */
virtual void OnClose( int nErrorCode );

/* CAsyncSocket::OnConnect  [function; ce-only; CE 2.0..209] */
virtual void OnConnect( int nErrorCode );

/* CAsyncSocket::OnOutOfBandData  [function; ce-only; CE 2.0..209] */
virtual void OnOutOfBandData( int nErrorCode );

/* CAsyncSocket::OnReceive  [function; ce-only; CE 2.0..209] */
virtual void OnReceive( int nErrorCode );

/* CAsyncSocket::OnSend  [function; ce-only; CE 2.0..209] */
virtual void OnSend( int nErrorCode );

/* CAsyncSocket::Receive  [function; ce-only; CE 2.0..209] */
virtual int Receive( void* lpBuf, int nBufLen, int nFlags = 0 );

/* CAsyncSocket::ReceiveFrom  [function; ce-only; CE 2.0..209] */
int ReceiveFrom( void* lpBuf, int nBufLen, CString& rSocketAddress, UINT& rSocketPort, int nFlags = 0 );

/* CAsyncSocket::Send  [function; ce-only; CE 2.0..209] */
virtual int Send( const void* lpBuf, int nBufLen, int nFlags = 0 );

/* CAsyncSocket::SendTo  [function; ce-only; CE 2.0..209] */
int SendTo( const void* lpBuf, int nBufLen, UINT nHostPort, LPCTSTR lpszHostAddress = NULL, int nFlags = 0 );

/* CAsyncSocket::SetSockOpt  [function; ce-only; CE 2.0..209] */
BOOL SetSockOpt( int nOptionName, const void* lpOptionValue, int nOptionLen, int nLevel = SOL_SOCKET );

/* CAsyncSocket::ShutDown  [function; ce-only; CE 2.0..209] */
BOOL ShutDown( int nHow = sends );

/* CSocket::Attach  [function; ce-only; CE 2.0..209] */
BOOL Attach( SOCKET hSocket );

/* CSocket::CancelBlockingCall  [function; ce-only; CE 2.0..209] */
void CancelBlockingCall( );

/* CSocket::Create  [function; ce-only; CE 2.0..209] */
BOOL Create( UINT nSocketPort = 0, int nSocketType = SOCK_STREAM, LPCTSTR lpszSocketAddress = NULL );

/* CSocket::FromHandle  [function; ce-only; CE 2.0..209] */
static CSocket* PASCAL FromHandle( SOCKET hSocket );

/* CSocket::IsBlocking  [function; ce-only; CE 2.0..209] */
BOOL IsBlocking( );

/* CSocket::OnMessagePending  [function; ce-only; CE 2.0..209] */
virtual BOOL OnMessagePending( );

/* CSocketFile::CSocketFile  [function; ce-only; CE 2.0..209] */
CSocketFile( CSocket* pSocket, BOOL bArchiveCompatible = TRUE );
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
void CancelBlockingCall( );
static CAsyncSocket* PASCAL FromHandle( SOCKET hSocket );
BOOL GetSockOpt( int nOptionName, void* lpOptionValue, int* lpOptionLen, int nLevel = SOL_SOCKET );
BOOL IOCtl( long lCommand, DWORD* lpArgument );
BOOL IsBlocking( );
BOOL Listen( int nConnectionBacklog = 5 );
BOOL SetSockOpt( int nOptionName, const void* lpOptionValue, int nOptionLen, int nLevel = SOL_SOCKET );
BOOL ShutDown( int nHow = sends );

#endif /* _AFXSOCK_ */
