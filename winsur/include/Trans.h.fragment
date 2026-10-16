/* Trans.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 5 declarations, 0 outlines, 0 base types, 0 extra macros, 2 extra decls
 */
#ifndef _TRANS_
#define _TRANS_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 420 && _WIN32_WCE < 600)) /* CE 4.2..599 */

/* CConnection::Close  [function; ce-only; CE 4.2..599] */
BOOL CConnection::Close()

/* CConnection::ReadBytes  [function; ce-only; CE 4.2..599] */
LRESULT CConnection::ReadBytes( 
 LPBYTE pData, 
 DWORD dwSize, 
 DWORD* pdwSizeRet 
)

/* CConnection::WriteBytes  [function; ce-only; CE 4.2..599] */
LRESULT CConnection::WriteBytes( 
 LPBYTE pData, 
 DWORD dwSize 
)

/* CTransport::Init  [function; ce-only; CE 4.2..599] */
BOOL CTransport::Init(BYTE* pBuffer, DWORD dwSize)

/* CTransport::Uninit  [function; ce-only; CE 4.2..599] */
BOOL CTransport::Uninit();
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
CTransport *CreateTransport();
BOOL CTransport::Uninit();

#endif /* _TRANS_ */
