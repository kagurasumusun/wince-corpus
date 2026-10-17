/* cecertmod.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 4 constants, 2 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _CECERTMOD_
#define _CECERTMOD_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define CERT_REVOKED 0x00000001
#define CERT_STORE_UNKNOWN 0x00000002
#define CERT_STORE_VALID 0x00000004
#define CERT_UNKNOWN 0x00000000

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x600 && _WIN32_WCE < 0x700)) /* CE 6.0..699 */

/* CertInit  [function; ce-only; CE 6.0..699; Certmod.dll] */
DWORD CertInit();

/* CertVerify  [function; ce-only; CE 6.0..699; Certmod.dll] */
DWORD CertVerify (
 HANDLE hFile,
 LPCWSTR pszFileName,
 LPWSTR pUserName,
 DWORD cchUserName,
 LPDWORD pdwCertFlags
);
#endif /* _WIN32_WCE */

#endif /* _CECERTMOD_ */
