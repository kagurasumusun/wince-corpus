/* Msacmdrv.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 5 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _MSACMDRV_
#define _MSACMDRV_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* ACMDRVFORMATSUGGEST  [struct; ce-only] */
#ifndef __WINCE_DEFINED_ACMDRVFORMATSUGGEST
#define __WINCE_DEFINED_ACMDRVFORMATSUGGEST
typedef struct {
 DWORD cbStruct;
 DWORD fdwSuggest;
 LPWAVEFORMATEX pwfxSrc;
 DWORD cbwfxSrc;
 LPWAVEFORMATEX pwfxDst;
 DWORD cbwfxDst;
} ACMDRVFORMATSUGGEST;
#endif /* __WINCE_DEFINED_ACMDRVFORMATSUGGEST */
#ifndef __WINCE_DEFINED_PACMDRVFORMATSUGGEST
#define __WINCE_DEFINED_PACMDRVFORMATSUGGEST
typedef ACMDRVFORMATSUGGEST *PACMDRVFORMATSUGGEST, *LPACMDRVFORMATSUGGEST;
#endif /* __WINCE_DEFINED_PACMDRVFORMATSUGGEST */

/* ACMDRVSTREAMHEADER  [struct; ce-only] */
#ifndef __WINCE_DEFINED_ACMDRVSTREAMHEADER
#define __WINCE_DEFINED_ACMDRVSTREAMHEADER
typedef struct {
 DWORD cbStruct;
 DWORD fdwStatus;
 DWORD dwUser;
 LPBYTE pbSrc;
 DWORD cbSrcLength;
 DWORD cbSrcLengthUsed;
 DWORD dwSrcUser;
 LPBYTE pbDst;
 DWORD cbDstLength;
 DWORD cbDstLengthUsed;
 DWORD dwDstUser;
 DWORD fdwConvert;
 LPACMDRVSTREAMHEADER padshNext;
 DWORD fdwDriver;
 DWORD dwDriver;
 DWORD fdwPrepared;
 DWORD dwPrepared;
 LPBYTE pbPreparedSrc;
 DWORD cbPreparedSrcLength;
 LPBYTE pbPreparedDst;
 DWORD cbPreparedDstLength;
} ACMDRVSTREAMHEADER;
#endif /* __WINCE_DEFINED_ACMDRVSTREAMHEADER */

/* ACMDRVSTREAMSIZE  [struct; ce-only] */
#ifndef __WINCE_DEFINED_ACMDRVSTREAMSIZE
#define __WINCE_DEFINED_ACMDRVSTREAMSIZE
typedef struct {
 DWORD cbStruct;
 DWORD fdwSize;
 DWORD cbSrcLength;
 DWORD cbDstLength;
} ACMDRVSTREAMSIZE;
#endif /* __WINCE_DEFINED_ACMDRVSTREAMSIZE */
#ifndef __WINCE_DEFINED_PACMDRVSTREAMSIZE
#define __WINCE_DEFINED_PACMDRVSTREAMSIZE
typedef ACMDRVSTREAMSIZE *PACMDRVSTREAMSIZE, *LPACMDRVSTREAMSIZE;
#endif /* __WINCE_DEFINED_PACMDRVSTREAMSIZE */

#endif /* _MSACMDRV_ */
