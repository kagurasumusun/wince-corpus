/* CcKitl.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 4 constants, 4 declarations, 0 outlines, 0 base types, 0 extra macros, 2 extra decls
 */
#ifndef _CCKITL_
#define _CCKITL_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define KITL_FL_CLEANBOOT 0x08
#define KITL_FL_DBGMSG 0x01
#define KITL_FL_KDBG 0x04
#define KITL_FL_PPSH 0x02

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* ICcKitl::BootFlags  [function; ce-only; CE 5.0..699] */
HRESULT BootFlags (
 DWORD dwBootFlags
);
HRESULT BootFlags (
 DWORD* pdwBootFlags
);

/* ICcKitl::DebugBreak  [function; ce-only; CE 5.0..699] */
HRESULT DebugBreak()

/* ICcKitl::Reset  [function; ce-only; CE 5.0..699] */
HRESULT Reset()

/* ICcKitl::TransportId  [function; ce-only; CE 5.0..699] */
HRESULT TransportId (
 DWORD* pdwTransportId
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT BootFlags ( DWORD dwBootFlags);
HRESULT TransportId ( DWORD*pdwTransportId);

#endif /* _CCKITL_ */
