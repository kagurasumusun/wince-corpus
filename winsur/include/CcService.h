/* CcService.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 6 constants, 0 declarations, 0 outlines, 0 base types, 0 extra macros, 3 extra decls
 */
#ifndef _CCSERVICE_
#define _CCSERVICE_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define SERVICE_INIT_CONFIGURE_CONNECT 0x4
#define SERVICE_INIT_CONFIGURE_NO_CONNECT 0x2
#define SERVICE_INIT_CONFIGURE_PENDING_CONNECT 0x3
#define SERVICE_INIT_NO_CONFIGURE 0x1
#define SERVICE_LOCKED 0x8
#define SERVICE_NO_INIT 0x0

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT GetCurrentState ( DWORD*pdwCurrentState);
HRESULT LockService()
HRESULT UnlockService()

#endif /* _CCSERVICE_ */
