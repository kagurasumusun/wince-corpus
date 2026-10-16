/* Cred.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 6 declarations, 0 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _CRED_
#define _CRED_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* CredDelete  [function; shared; CE 5.0..699; Coredll.lib, coredll.lib; A/W CredDeleteA,CredDeleteW (CE is W-side)] */
DWORD CredDelete(
 WSTR wszTarget,
 DWORD dwTargetLen,
 DWORD dwType,
 DWORD dwFlags
);

/* CredFree  [function; shared; CE 5.0..699; Coredll.lib, coredll.lib] */
DWORD CredFree(
 PBYTE pbBuffer
);

/* CredRead  [function; shared; CE 5.0..699; Coredll.lib, coredll.lib; A/W CredReadA,CredReadW (CE is W-side)] */
DWORD CredRead(
 WSTR wszTarget,
 DWORD dwTargetLen,
 DWORD dwType,
 DWORD dwFlags,
 PPCRED ppCred
);

/* CredUpdate  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
DWORD CredUpdate(
 WSTR wszTarget,
 DWORD dwTargetLen,
 DWORD dwType,
 PCRED pCred,
 DWORD dwFlags
);

/* CredWrite  [function; shared; CE 5.0..699; Coredll.lib, coredll.lib; A/W CredWriteA,CredWriteW (CE is W-side)] */
DWORD CredWrite(
 PCRED pCred,
 DWORD dwFlags
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
typedefstruct_CRED{DWORD dwVersion; DWORD dwType; WSTR wszUser; DWORD dwUserLen; WSTR wszTarget; DWORD dwTargetLen; PBYTE pBlob; DWORD dwBlobSize; DWORD dwFlags;} CRED, *PCRED,**PPCRED;

#endif /* _CRED_ */
