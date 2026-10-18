/* Wtypes.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 11 constants, 6 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _WTYPES_
#define _WTYPES_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define CLSID_NULL GUID_NULL
#define DECIMAL_NEG ((BYTE)0x80)
#define EOAC_NONE 0x0
#define IID_NULL GUID_NULL
#define ROTFLAGS_ALLOWANYCLIENT 0x02
#define ROTFLAGS_REGISTRATIONKEEPSALIVE 0x01
#define RPC_C_QOS_CAPABILITIES_MUTUAL_AUTH 0x1
#define SEC_WINNT_AUTH_IDENTITY_ANSI 0x1
#define SEC_WINNT_AUTH_IDENTITY_UNICODE 0x2
#define VARIANT_FALSE ((VARIANT_BOOL)0)
#define VARIANT_TRUE ((VARIANT_BOOL)0xffff)

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* CLSCTX  [enum; shared] */
#ifndef __WINCE_DEFINED_TAGCLSCTX
#define __WINCE_DEFINED_TAGCLSCTX
typedef enum tagCLSCTX {
 CLSCTX_INPROC_SERVER = 0x1,
 CLSCTX_INPROC_HANDLER = 0x2,
 CLSCTX_LOCAL_SERVER = 0x4,
 CLSCTX_REMOTE_SERVER = 0x10
} CLSCTX;
#endif /* __WINCE_DEFINED_TAGCLSCTX */
#ifndef __WINCE_DEFINED_PCLSCTX
#define __WINCE_DEFINED_PCLSCTX
typedef CLSCTX *PCLSCTX, *LPCLSCTX;
#endif /* __WINCE_DEFINED_PCLSCTX */

/* COAUTHIDENTITY  [struct; shared] */
#ifndef __WINCE_DEFINED__COAUTHIDENTITY
#define __WINCE_DEFINED__COAUTHIDENTITY
typedef struct _COAUTHIDENTITY {
 USHORT* User;
 ULONG UserLength;
 USHORT* Domain;
 ULONG DomainLength;
 USHORT* Password;
 ULONG PasswordLength;
 ULONG Flags;
} COAUTHIDENTITY;
#endif /* __WINCE_DEFINED__COAUTHIDENTITY */
#ifndef __WINCE_DEFINED_PCOAUTHIDENTITY
#define __WINCE_DEFINED_PCOAUTHIDENTITY
typedef COAUTHIDENTITY *PCOAUTHIDENTITY, *LPCOAUTHIDENTITY;
#endif /* __WINCE_DEFINED_PCOAUTHIDENTITY */

/* COAUTHINFO  [struct; shared] */
#ifndef __WINCE_DEFINED__COAUTHINFO
#define __WINCE_DEFINED__COAUTHINFO
typedef struct _COAUTHINFO {
 DWORD dwAuthnSvc;
 DWORD dwAuthzSvc;
 LPWSTR pwszServerPrincName;
 DWORD dwAuthnLevel;
 DWORD dwImpersonationLevel;
 COAUTHIDENTITY __RPC_FAR* pAuthIdentityData;
 DWORD dwCapabilities;
} COAUTHINFO;
#endif /* __WINCE_DEFINED__COAUTHINFO */
#ifndef __WINCE_DEFINED_PCOAUTHINFO
#define __WINCE_DEFINED_PCOAUTHINFO
typedef COAUTHINFO *PCOAUTHINFO, *LPCOAUTHINFO;
#endif /* __WINCE_DEFINED_PCOAUTHINFO */

/* COSERVERINFO  [struct; shared] */
#ifndef __WINCE_DEFINED__COSERVERINFO
#define __WINCE_DEFINED__COSERVERINFO
typedef struct _COSERVERINFO {
 DWORD dwReserved1;
 LPWSTR pwszName;
 COAUTHINFO* pAuthInfo;
 DWORD dwReserved2;
} COSERVERINFO;
#endif /* __WINCE_DEFINED__COSERVERINFO */
#ifndef __WINCE_DEFINED_PCOSERVERINFO
#define __WINCE_DEFINED_PCOSERVERINFO
typedef COSERVERINFO *PCOSERVERINFO, *LPCOSERVERINFO;
#endif /* __WINCE_DEFINED_PCOSERVERINFO */

/* DVASPECT  [enum; shared] */
#ifndef __WINCE_DEFINED_TAGDVASPECT
#define __WINCE_DEFINED_TAGDVASPECT
typedef enum tagDVASPECT {
 DVASPECT_CONTENT = 1,
 DVASPECT_THUMBNAIL = 2,
 DVASPECT_ICON = 4,
 DVASPECT_DOCPRINT = 8
} DVASPECT;
#endif /* __WINCE_DEFINED_TAGDVASPECT */
#ifndef __WINCE_DEFINED_PDVASPECT
#define __WINCE_DEFINED_PDVASPECT
typedef DVASPECT *PDVASPECT, *LPDVASPECT;
#endif /* __WINCE_DEFINED_PDVASPECT */

/* STGC  [enum; shared] */
#ifndef __WINCE_DEFINED_TAGSTGC
#define __WINCE_DEFINED_TAGSTGC
typedef enum tagSTGC {
 STGC_DEFAULT = 0,
 STGC_OVERWRITE = 1,
 STGC_ONLYIFCURRENT = 2,
 STGC_DANGEROUSLYCOMMITMERELYTODISKCACHE = 4,
} STGC;
#endif /* __WINCE_DEFINED_TAGSTGC */
#ifndef __WINCE_DEFINED_PSTGC
#define __WINCE_DEFINED_PSTGC
typedef STGC *PSTGC, *LPSTGC;
#endif /* __WINCE_DEFINED_PSTGC */

#endif /* _WTYPES_ */
