/* Sip.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 2 declarations, 0 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _SIP_
#define _SIP_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* LMDATA  [struct; ce-only] */
#ifndef __WINCE_DEFINED__TAGLMDATA
#define __WINCE_DEFINED__TAGLMDATA
#ifndef __WINCE_DEFINED_LMDATA
#define __WINCE_DEFINED_LMDATA
typedef struct _tagLMDATA{
 DWORD dwVersion;
 DWORD flags;
 DWORD cnt;
 DWORD dwOffsetSymbols;
 DWORD dwOffsetSkip;
 DWORD dwOffsetScore;
}LMDATA;
#endif /* __WINCE_DEFINED_LMDATA */
#endif /* __WINCE_DEFINED__TAGLMDATA */
#ifndef __WINCE_DEFINED_PLMDATA
#define __WINCE_DEFINED_PLMDATA
typedef LMDATA *PLMDATA, *LPLMDATA;
#endif /* __WINCE_DEFINED_PLMDATA */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT SendAlternatives (LMDATA* plmd);

#endif /* _SIP_ */
