/* Ws2spi.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 2 constants, 1 declarations, 11 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _WS2SPI_
#define _WS2SPI_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define WSPAPI WSAAPI
#define WSPDESCRIPTION_LEN 255

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* WSPAccept  [struct; ce-only; Ws2.lib] */

/* WSPBind  [struct; ce-only; Ws2.lib] */

/* WSPConnect  [struct; ce-only; Ws2.lib] */

/* WSPGetPeerName  [struct; ce-only; Ws2.lib] */

/* WSPGetSockName  [struct; ce-only; Ws2.lib] */

/* WSPJoinLeaf  [struct; ce-only; Ws2.lib] */

/* WSPRecvFrom  [struct; ce-only; Ws2.lib] */

/* WSPSelect  [struct; ce-only; Ws2.lib] */

/* WSPSendTo  [struct; ce-only; Ws2.lib] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* WSATHREADID  [struct; shared] */
#ifndef __WINCE_DEFINED__WSATHREADID
#define __WINCE_DEFINED__WSATHREADID
#ifndef __WINCE_DEFINED_WSATHREADID
#define __WINCE_DEFINED_WSATHREADID
typedef struct _WSATHREADID {
 HANDLE ThreadHandle;
 DWORD Reserved;
} WSATHREADID, *LPWSATHREADID;
#endif /* __WINCE_DEFINED_WSATHREADID */
#endif /* __WINCE_DEFINED__WSATHREADID */

/* NSP_Routine  [struct; shared] */
/* DERIVED member outline -- documented order, types/offsets not stated */
/*   cbSize */
/*   dwMajorVersion */
/*   dwMinorVersion */
/*   NSPCleanup */
/*   NSPLookupServiceBegin */
/*   NSPLookupServiceNext */
/*   NSPLookupServiceEnd */
/*   NSPSetService */
/*   NSPInstallServiceClass */
/*   NSPRemoveServiceClass */
/*   NSPGetServiceClassInfo */
/*   NSPIoctl */

/* WSPDATA  [struct; shared] */
/* DERIVED member outline -- documented order, types/offsets not stated */
/*   wVersion */
/*   wHighVersion */
/*   szDescription */

#endif /* _WS2SPI_ */
