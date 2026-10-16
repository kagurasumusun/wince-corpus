/* Afxsock.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 0 declarations, 0 outlines, 0 base types, 0 extra macros, 18 extra decls
 */
#ifndef _AFXSOCK_
#define _AFXSOCK_


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
