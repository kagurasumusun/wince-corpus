/* Cred_prov.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 3 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _CRED_PROV_
#define _CRED_PROV_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* HandleBlob  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
DWORD HandleBlob(
 DWORD dwType,
 PWCHAR szTarget,
 PWCHAR szUser,
 PBYTE pInBlob,
 DWORD dwInSize,
 PBYTE pOutBlob,
 PDWORD pdwOutSize,
 DWORD dwFlag
);

/* MatchTarget  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
DWORD MatchTarget(
 DWORD dwType,
 PWSTR wszSrc,
 PWSTR wszDest,
 DWORD dwFlag,
 PBOOL pbMatch
);

/* MatchUser  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
DWORD MatchUser(
 DWORD dwType,
 PWSTR wszSrc,
 PWSTR wszDest,
 DWORD dwFlag,
 PBOOL pbMatch
);
#endif /* _WIN32_WCE */

#endif /* _CRED_PROV_ */
