/* Wzcsapi.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 13 constants, 6 declarations, 1 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _WZCSAPI_
#define _WZCSAPI_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define INTFCAP_MAX_CIPHER_MASK 0x000000ff
#define INTFCAP_SSN 0x00000100
#define INTFCTL_8021XSUPP 0x1000
#define INTFCTL_CM_MASK 0x0007
#define INTFCTL_ENABLED 0x8000
#define INTFCTL_FALLBACK 0x4000
#define INTFCTL_OIDSSUPP 0x2000
#define INTFCTL_POLICY 0x0800
#define INTFCTL_VOLATILE 0x1000
#define TMMS_DEFAULT_TC 0x70000000
#define TMMS_DEFAULT_TF 0x0000ea60
#define TMMS_DEFAULT_TP 0x000007d0
#define TMMS_DEFAULT_TR 0x00000bb8

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* INTF_ENTRY_EX  [struct; ce-only] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* INTF_KEY_ENTRY  [struct; ce-only] */
#ifndef __WINCE_DEFINED_INTF_KEY_ENTRY
#define __WINCE_DEFINED_INTF_KEY_ENTRY
typedef struct
{
 LPWSTR wszGuid;
} INTF_KEY_ENTRY, *PINTF_KEY_ENTRY;
#endif /* __WINCE_DEFINED_INTF_KEY_ENTRY */

/* INTFS_KEY_TABLE  [struct; ce-only] */
#ifndef __WINCE_DEFINED_INTFS_KEY_TABLE
#define __WINCE_DEFINED_INTFS_KEY_TABLE
typedef struct
{
 DWORD dwNumIntfs;
 PINTF_KEY_ENTRY pIntfs;
} INTFS_KEY_TABLE, *PINTFS_KEY_TABLE;
#endif /* __WINCE_DEFINED_INTFS_KEY_TABLE */

/* WZC_CONTEXT  [struct; ce-only] */
#ifndef __WINCE_DEFINED__WZC_CONTEXT_T
#define __WINCE_DEFINED__WZC_CONTEXT_T
#ifndef __WINCE_DEFINED_WZC_CONTEXT
#define __WINCE_DEFINED_WZC_CONTEXT
typedef struct _wzc_context_t
{
 DWORD dwFlags;
 DWORD tmTr;
 DWORD tmTc;
 DWORD tmTp;
 DWORD tmTf;
 DWORD tmTd;
} WZC_CONTEXT, *PWZC_CONTEXT;
#endif /* __WINCE_DEFINED_WZC_CONTEXT */
#endif /* __WINCE_DEFINED__WZC_CONTEXT_T */

/* WZC_EAPOL_PARAMS  [struct; ce-only] */
#ifndef __WINCE_DEFINED__WZC_EAPOL_PARAMS
#define __WINCE_DEFINED__WZC_EAPOL_PARAMS
#ifndef __WINCE_DEFINED_WZC_EAPOL_PARAMS
#define __WINCE_DEFINED_WZC_EAPOL_PARAMS
typedef struct _WZC_EAPOL_PARAMS
{
 BOOL bEnable8021x;
 DWORD dwEapFlags;
 DWORD dwEapType;
 DWORD dwAuthDataLen;
 BYTE *pbAuthData;
}WZC_EAPOL_PARAMS, *PWZC_EAPOL_PARAMS;
#endif /* __WINCE_DEFINED_WZC_EAPOL_PARAMS */
#endif /* __WINCE_DEFINED__WZC_EAPOL_PARAMS */

#endif /* _WZCSAPI_ */
