/* Afxmt.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 14 declarations, 0 outlines, 0 base types, 0 extra macros, 4 extra decls
 */
#ifndef _AFXMT_
#define _AFXMT_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 200 && _WIN32_WCE < 210)) /* CE 2.0..209 */

/* CCriticalSection::Lock  [function; ce-only; CE 2.0..209] */
BOOL Lock( );

/* CCriticalSection::Unlock  [function; ce-only; CE 2.0..209] */
virtual BOOL Unlock( );

/* CEvent::CEvent  [function; ce-only; CE 2.0..209] */
CEvent( BOOL bInitiallyOwn = FALSE, BOOL bManualReset = FALSE, LPCTSTR lpszName = NULL, LPSECURITY_ATTRIBUTES lpsaAttribute = NULL );

/* CEvent::PulseEvent  [function; ce-only; CE 2.0..209] */
BOOL PulseEvent( );

/* CEvent::ResetEvent  [function; ce-only; CE 2.0..209] */
BOOL ResetEvent( );

/* CEvent::SetEvent  [function; ce-only; CE 2.0..209] */
BOOL SetEvent( );

/* CEvent::Unlock  [function; ce-only; CE 2.0..209] */
virtual BOOL Unlock( );

/* CSingleLock::CSingleLock  [function; ce-only; CE 2.0..209] */
CSingleLock( CSyncObject* pObject, BOOL bInitialLock = FALSE );

/* CSingleLock::IsLocked  [function; ce-only; CE 2.0..209] */
BOOL IsLocked( );

/* CSingleLock::Lock  [function; ce-only; CE 2.0..209] */
BOOL Lock( DWORD dwTimeOut = INFINITE );

/* CSingleLock::Unlock  [function; ce-only; CE 2.0..209] */
BOOL Unlock( );

/* CSyncObject::CSyncObject  [function; ce-only; CE 2.0..209] */
CSyncObject( LPCTSTR pstrName );

/* CSyncObject::Lock  [function; ce-only; CE 2.0..209] */
virtual BOOL Lock( DWORD dwTimeout = INFINITE );

/* CSyncObject::Unlock  [function; ce-only; CE 2.0..209] */
virtual BOOL Unlock( ) = 0;
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
CEvent( BOOL bInitiallyOwn = FALSE, BOOL bManualReset = FALSE, LPCTSTR lpszName = NULL, LPSECURITY_ATTRIBUTES lpsaAttribute = NULL );
CSingleLock( CSyncObject* pObject, BOOL bInitialLock = FALSE );
CSyncObject( LPCTSTR pstrName );
BOOL IsLocked( );

#endif /* _AFXMT_ */
