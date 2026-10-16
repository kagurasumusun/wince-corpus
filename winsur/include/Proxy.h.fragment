/* Proxy.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 2 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _PROXY_
#define _PROXY_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* STORE_ExecuteCommand  [function; ce-only; CE 5.0..699] */
DWORD STORE_ExecuteCommand(
 PTRANSPORT_COMMAND ptcCommand,
 PTRANSPORT_DATA ptdData
);

/* STORE_IsCommandSupported  [function; ce-only; CE 5.0..699] */
BOOL STORE_IsCommandSupported(
 PTRANSPORT_COMMAND ptcCommand,
 PBOOL pfDataStageRequired,
 PDWORD pdwDirection,
 PDWORD pdwDataSize
);
#endif /* _WIN32_WCE */

#endif /* _PROXY_ */
