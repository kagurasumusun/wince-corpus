/* wzcsapi.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 4 constants, 16 declarations, 4 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _WZCSAPI_
#define _WZCSAPI_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define TMMS_DEFAULT_TC 0x70000000
#define TMMS_DEFAULT_TF 0x0000ea60
#define TMMS_DEFAULT_TP 0x000007d0
#define TMMS_DEFAULT_TR 0x00000bb8

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* INTF_80211_CAPABILITY  [struct; ce-only] */

/* INTF_ENTRY_EX  [struct; ce-only] */

/* INTF_KEY_ENTRY  [struct; ce-only] */

/* INTFS_KEY_TABLE  [struct; ce-only] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* WZC_CONTEXT  [struct; ce-only] */
typedef struct _wzc_context_t
{
 DWORD dwFlags; 
 DWORD tmTr; 
 DWORD tmTc; 
 DWORD tmTp; 
 DWORD tmTf; 
 DWORD tmTd; 
} WZC_CONTEXT, *PWZC_CONTEXT;

/* WZC_EAPOL_PARAMS  [struct; ce-only] */
typedef struct _WZC_EAPOL_PARAMS
{
 BOOL bEnable8021x;
 DWORD dwEapFlags;
 DWORD dwEapType;
 DWORD dwAuthDataLen;
 BYTE *pbAuthData;
}WZC_EAPOL_PARAMS, *PWZC_EAPOL_PARAMS;

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x500 && _WIN32_WCE < 0x700)) /* CE 5.0..699 */

/* WZCQueryContext  [function; ce-only; CE 5.0..699; Wzcsapi.lib] */
DWORD WZCQueryContext(
 LPWSTR pSrvAddr,
 DWORD dwInFlags,
 PWZC_CONTEXT pContext,
 LPDWORD pdwOutFlags
);

/* WZCSetContext  [function; ce-only; CE 5.0..699; Wzcsapi.lib] */
DWORD WZCSetContext(
 LPWSTR pSrvAddr,
 DWORD dwInFlags,
 PWZC_CONTEXT pContext,
 LPDWORD pdwOutFlags
);
#endif /* _WIN32_WCE */

#endif /* _WZCSAPI_ */
