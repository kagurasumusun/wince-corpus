/* rapitypes.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 13 constants, 6 declarations, 1 outlines, 0 base types, 0 extra macros, 2 extra decls
 */
#ifndef _RAPITYPES_
#define _RAPITYPES_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define CEDB_NOCOMPRESS 0x00010000
#define CEDB_VALIDCREATE 0x0017
#define CEDB_VALIDDBFLAGS 0x0010
#define CEDB_VALIDMODTIME 0x0008
#define CEDB_VALIDNAME 0x0001
#define CEDB_VALIDSORTSPEC 0x0004
#define CEDB_VALIDTYPE 0x0002
#define RAPI_CONNECTION_IR 1
#define RAPI_CONNECTION_NETWORK 3
#define RAPI_CONNECTION_SERIAL 2
#define RAPI_CONNECTION_USB 0
#define RAPI_DEVICE_CONNECTED 1
#define RAPI_DEVICE_DISCONNECTED 0

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* RAPI_DEVICE_PLATFORM  [struct; ce-only; rapi.lib] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* CEGUID  [struct; ce-only] */
#ifndef __WINCE_DEFINED__CEGUID
#define __WINCE_DEFINED__CEGUID
#ifndef __WINCE_DEFINED_CEGUID
#define __WINCE_DEFINED_CEGUID
typedef struct _CEGUID {
 DWORD Data1;
 DWORD Data2;
 DWORD Data3;
 DWORD Data4;
} CEGUID;
#endif /* __WINCE_DEFINED_CEGUID */
#endif /* __WINCE_DEFINED__CEGUID */
#ifndef __WINCE_DEFINED_PCEGUID
#define __WINCE_DEFINED_PCEGUID
typedef CEGUID *PCEGUID, *LPCEGUID;
#endif /* __WINCE_DEFINED_PCEGUID */

/* CEOSVERSIONINFO  [struct; ce-only] */
#ifndef __WINCE_DEFINED__CEOSVERSIONINFO
#define __WINCE_DEFINED__CEOSVERSIONINFO
#ifndef __WINCE_DEFINED_CEOSVERSIONINFO
#define __WINCE_DEFINED_CEOSVERSIONINFO
#ifndef __WINCE_DEFINED_LPCEOSVERSIONINFO
#define __WINCE_DEFINED_LPCEOSVERSIONINFO
typedef struct _CEOSVERSIONINFO {
 DWORD dwOSVersionInfoSize;
 DWORD dwMajorVersion;
 DWORD dwMinorVersion;
 DWORD dwBuildNumber;
 DWORD dwPlatformId;
 WCHAR szCSDVersion[ 128 ];
} CEOSVERSIONINFO, * LPCEOSVERSIONINFO;
#endif /* __WINCE_DEFINED_LPCEOSVERSIONINFO */
#endif /* __WINCE_DEFINED_CEOSVERSIONINFO */
#endif /* __WINCE_DEFINED__CEOSVERSIONINFO */

/* RAPIINIT  [struct; ce-only] */
#ifndef __WINCE_DEFINED__RAPIINIT
#define __WINCE_DEFINED__RAPIINIT
#ifndef __WINCE_DEFINED_RAPIINIT
#define __WINCE_DEFINED_RAPIINIT
typedef struct _RAPIINIT {
 DWORD cbSize;
 HANDLE heRapiInit;
 HRESULT hrRapiInit;
} RAPIINIT;
#endif /* __WINCE_DEFINED_RAPIINIT */
#endif /* __WINCE_DEFINED__RAPIINIT */
#ifndef __WINCE_DEFINED_PRAPIINIT
#define __WINCE_DEFINED_PRAPIINIT
typedef RAPIINIT *PRAPIINIT, *LPRAPIINIT;
#endif /* __WINCE_DEFINED_PRAPIINIT */

/* RAPISTREAMFLAG  [enum; ce-only; rapi.lib] */
#ifndef __WINCE_DEFINED_TAGRAPISTREAMFLAG
#define __WINCE_DEFINED_TAGRAPISTREAMFLAG
#ifndef __WINCE_DEFINED_RAPISTREAMFLAG
#define __WINCE_DEFINED_RAPISTREAMFLAG
typedef enum tagRAPISTREAMFLAG {
 STREAM_TIMEOUT_READ
} RAPISTREAMFLAG;
#endif /* __WINCE_DEFINED_RAPISTREAMFLAG */
#endif /* __WINCE_DEFINED_TAGRAPISTREAMFLAG */
#ifndef __WINCE_DEFINED_PRAPISTREAMFLAG
#define __WINCE_DEFINED_PRAPISTREAMFLAG
typedef RAPISTREAMFLAG *PRAPISTREAMFLAG, *LPRAPISTREAMFLAG;
#endif /* __WINCE_DEFINED_PRAPISTREAMFLAG */

/* CENOTIREQUEST  [extra struct] */
#ifndef __WINCE_DEFINED__CENOTIFYREQUEST
#define __WINCE_DEFINED__CENOTIFYREQUEST
#ifndef __WINCE_DEFINED_CENOTIREQUEST
#define __WINCE_DEFINED_CENOTIREQUEST
typedef struct _CENOTIFYREQUEST { DWORD dwSize; HWND hwnd; DWORD dwFlags; HANDLE hHeap; DWORD dwParam; } CENOTIREQUEST;
#endif /* __WINCE_DEFINED_CENOTIREQUEST */
#endif /* __WINCE_DEFINED__CENOTIFYREQUEST */

#endif /* _RAPITYPES_ */
