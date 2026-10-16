/* dwdmptxt.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 4 declarations, 0 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _DWDMPTXT_
#define _DWDMPTXT_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* DMPFILEINFO  [struct; ce-only; CE 6.0..699; dwdmptxt.lib] */
typedef struct tagDMPFILEINFO {
 WORD wBucketParams;
 LPWSTR rgwzBucketParams[MAX_BUCKETPARAMS];
 LPWSTR pwzQueryString;
 LPWSTR pwzAppName;
 LPWSTR pwzFilesToKeep;
 LPWSTR pwzFilesToDelete;
 BOOL fGenericParams;
} DMPFILEINFO, *PDMPFILEINFO;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* GetDmpInfo  [function; ce-only; CE 6.0..699; dwdmptxt.lib] */
HRESULT GetDmpInfo(
 HANDLE hDmpFile,
 PDMPFILEINFO pDmpFileInfo
);

/* GetDmpLines  [function; ce-only; CE 6.0..699; dwdmptxt.lib] */
HRESULT GetDmpLines(
 HANDLE hDmpFile,
 LPWSTR pwzBuf,
 DWORD dwBufSize,
 DWORD dwBegLine,
 DWORD dwEndLine
);

/* InitDmpTxt  [function; ce-only; CE 6.0..699; dwdmptxt.lib] */
HRESULT InitDmpTxt(
 LPCWSTR pwzFilePath,
 DWORD dwMaxCharsPerLine,
 DWORD* pdwTotalLines,
 HANDLE* phDmpFile
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct tagDMPFILEINFO {
  WORD wBucketParams;
  LPWSTR rgwzBucketParams[MAX_BUCKETPARAMS];
  LPWSTR pwzQueryString;
  LPWSTR pwzAppName;
  LPWSTR pwzFilesToKeep;
  LPWSTR pwzFilesToDelete;
  BOOL fGenericParams;
} DMPFILEINFO, *PDMPFILEINFO;

#endif /* _DWDMPTXT_ */
