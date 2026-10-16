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

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 200 && _WIN32_WCE < 210) || (_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699 */

/* ACMDRVFORMATSUGGEST  [struct; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699] */
typedef struct { 
 DWORD cbStruct; 
 DWORD fdwSuggest; 
 LPWAVEFORMATEX pwfxSrc; 
 DWORD cbwfxSrc; 
 LPWAVEFORMATEX pwfxDst; 
 DWORD cbwfxDst;
} ACMDRVFORMATSUGGEST;

/* ACMDRVOPENDESC  [struct; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699] */
typedef struct { 
 DWORD cbStruct; 
 FOURCC fccType; 
 FOURCC fccComp; 
 DWORD dwVersion; 
 DWORD dwFlags; 
 DWORD dwError; 
 LPCSTR pszSectionName; 
 LPCSTR pszAliasName; 
 DWORD dnDevNode;
} ACMDRVOPENDESC;

/* ACMDRVSTREAMHEADER  [struct; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699] */
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

/* ACMDRVSTREAMINSTANCE  [struct; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699] */
typedef struct {
 DWORD cbStruct;
 LPWAVEFORMATEX pwfxSrc;
 LPWAVEFORMATEX pwfxDst;
 LPWAVEFILTER pwfltr;
 DWORD dwCallback;
 DWORD dwInstance;
 DWORD fdwOpen;
 DWORD fdwDriver;
 DWORD dwDriver;
 HACMSTREAM has;
} ACMDRVSTREAMINSTANCE;

/* ACMDRVSTREAMSIZE  [struct; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699] */
typedef struct {
 DWORD cbStruct;
 DWORD fdwSize;
 DWORD cbSrcLength;
 DWORD cbDstLength;
} ACMDRVSTREAMSIZE;
#endif /* _WIN32_WCE */

#endif /* _MSACMDRV_ */
