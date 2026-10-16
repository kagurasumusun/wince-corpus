/* lfplugin.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 16 declarations, 1 outlines, 0 base types, 0 extra macros, 2 extra decls
 */
#ifndef _LFPLUGIN_
#define _LFPLUGIN_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* RESOLVER_CONTROL_BLOCK  [struct; ce-only] */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x600 && _WIN32_WCE < 0x700)) /* CE 6.0..699 */

/* ProviderIoctlCall  [function; ce-only; CE 6.0..699] */
DWORD ProviderIoctlCall(
 HANDLE hProv, 
 DWORD dwCode, 
 BYTE* pBufIn, 
 DWORD cbIn, 
 BYTE* pBufOut, 
 DWORD* pcbOut
);

/* ProviderIoctlClose  [function; ce-only; CE 6.0..699] */
DWORD ProviderIoctlClose(
 HANDLE hProv
);

/* ProviderUnInitialize  [function; ce-only; CE 6.0..699] */
DWORD ProviderStop(void);

/* ResolverIoctlCall  [function; ce-only; CE 6.0..699] */
DWORD ResolverIoctlCall(
 HANDLE hProv,
 DWORD dwCode,
 BYTE* pBufIn,
 DWORD cbIn,
 BYTE* pBufOut,
 DWORD* pcbOut
);

/* ResolverIoctlClose  [function; ce-only; CE 6.0..699] */
DWORD ResolverIoctlClose(
 HANDLE hProv
);

/* ResolverStop  [function; ce-only; CE 6.0..699] */
DWORD ResolverStop(void);

/* ResolverUnInitialize  [function; ce-only; CE 6.0..699] */
DWORD ResolverUnInitialize(void);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
DWORD ProviderStop(void);

#endif /* _LFPLUGIN_ */
