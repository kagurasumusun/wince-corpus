/* Ceutil.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 1 constants, 18 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _CEUTIL_
#define _CEUTIL_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
/* C-NAME COLLISION -- the page prints the constant CESVC_ROOT_COMMON = 0; CESVC_ROOT_COMMON is a type in this surface, so it is documented here, not #defined */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x300 && _WIN32_WCE < 0x400) || (_WIN32_WCE >= 0x500 && _WIN32_WCE < 0x700)) /* CE 3.0..399, 5.0..699 */

/* CeSvcAdd  [function; ce-only; CE 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
HRESULT CeSvcAdd(LPTSTR pszSvcName,
 LPTSTR pszSvcClass,
 LPVOID pSvcInfo);

/* CeSvcQueryInfo  [function; ce-only; CE 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
HRESULT CeSvcQueryInfo(LPTSTR pszSvcName,
 LPTSTR pszSvcClass,
 LPVOID pszSvcInfo,
 DWORD cbBuffer);

/* CeSvcRemove  [function; ce-only; CE 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
HRESULT CeSvcRemove(LPTSTR pszSvcName,
 LPTSTR pszSvcClass,
 DWORD dwSvcFlags);
#endif /* _WIN32_WCE */

#endif /* _CEUTIL_ */
