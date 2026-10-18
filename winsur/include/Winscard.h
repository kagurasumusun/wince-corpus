/* Winscard.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 5 constants, 31 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _WINSCARD_
#define _WINSCARD_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define SCARD_PROVIDER_CARD_MODULE 0x80000001
#define SCARD_PROVIDER_CSP 2
#define SCARD_PROVIDER_KSP 3
#define SCARD_PROVIDER_PRIMARY 1
#define SCARD_W_RESET_CARD 0x80100068L

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* SCARD_ATRMASK  [struct; shared] */
#ifndef __WINCE_DEFINED__SCARD_ATRMASK
#define __WINCE_DEFINED__SCARD_ATRMASK
#ifndef __WINCE_DEFINED_SCARD_ATRMASK
#define __WINCE_DEFINED_SCARD_ATRMASK
typedef struct _SCARD_ATRMASK {
 DWORD cbAtr;
 BYTE rgbAtr[36];
 BYTE rgbMask[36];
} SCARD_ATRMASK, *PSCARD_ATRMASK, *LPSCARD_ATRMASK;
#endif /* __WINCE_DEFINED_SCARD_ATRMASK */
#endif /* __WINCE_DEFINED__SCARD_ATRMASK */

/* SCARD_IO_REQUEST  [struct; ce-only] */
#ifndef __WINCE_DEFINED_SCARD_IO_REQUEST
#define __WINCE_DEFINED_SCARD_IO_REQUEST
typedef struct {
 DWORD dwProtocol;
 DWORD cbPciLength;
} SCARD_IO_REQUEST;
#endif /* __WINCE_DEFINED_SCARD_IO_REQUEST */
#ifndef __WINCE_DEFINED_PSCARD_IO_REQUEST
#define __WINCE_DEFINED_PSCARD_IO_REQUEST
typedef SCARD_IO_REQUEST *PSCARD_IO_REQUEST, *LPSCARD_IO_REQUEST;
#endif /* __WINCE_DEFINED_PSCARD_IO_REQUEST */

/* SCARD_READERSTATE  [struct; shared; A/W SCARD_READERSTATEA,SCARD_READERSTATEW (CE is W-side)] */
#ifndef __WINCE_DEFINED_SCARD_READERSTATE
#define __WINCE_DEFINED_SCARD_READERSTATE
typedef struct {
 LPCTSTR szReader;
 LPVOID pvUserData;
 DWORD dwCurrentState;
 DWORD dwEventState;
 DWORD cbAtr;
 BYTE rgbAtr[36];
} SCARD_READERSTATE, *PSCARD_READERSTATE, *LPSCARD_READERSTATE;
#endif /* __WINCE_DEFINED_SCARD_READERSTATE */

#endif /* _WINSCARD_ */
