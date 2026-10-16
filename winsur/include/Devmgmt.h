/* Devmgmt.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 4 declarations, 3 outlines, 0 base types, 0 extra macros, 4 extra decls
 */
#ifndef _DEVMGMT_
#define _DEVMGMT_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* DMSDLINFO  [struct, typedef; ce-only] */

/* DMSINVPKGID  [struct, typedef; ce-only] */

/* DMSINVRECORD  [struct, typedef; ce-only] */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* CeGetDevMgmtPackageList  [function; ce-only; CE 4.0..699] */
HRESULT CeGetDevMgmtPackageList(
 PDMSINVRECORD pRecord,
 LPDWORD pdwEntryNumber,
 DWORD dwFilter
);

/* CeSetDevMgmtTask  [function; ce-only; CE 4.0..699] */
HRESULT CeSetDevMgmtTask(
 DMTASKINFO* pdi
);

/* CeStartDevMgmtService  [function; ce-only; CE 4.0..699] */
HANDLE CeStartDevMgmtService(
 int nAction,
 HWND hCallbackWnd
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct {TCHAR wzPackageID [DEVICE_ID_LEN];TCHAR wzShortText [PACKAGE_SHORT_TEXT_LEN];TCHAR wzLongText [PACKAGE_LONG_TEXT_LEN];TCHAR wzAppName [PACKAGE_APPNAME_TEXT_LEN];DWORDdwPackageSize;DWORD dwState;DMSDLINFO dlInfo;DWORD dwAux;} DMSINVRECORD, *PDMSINVRECORD;
typedef struct {DWORD dwSize;SYSTEMTIME stStartTime;SYSTEMTIME stDeltaTime;SYSTEMTIME stRetryTime;DWORD dwType;DWORD dwMaxRetryTime;DWORD dwFlags;LPTSTR pwzRDN;LPTSTR pwzURL;LPTSTR pwzURLSig;LPTSTR pwzMisc;LPTSTR pwzData;LPTSTR pwzXml;} DMTASKINFO, *PDMTASKINFO;

/* function */
typedefstruct {SYSTEMTIMEstStartTime;SYSTEMTIMEstDeltaTime;DWORDdwFlags;TCHARwzDest [MAX_PATH];TCHARwzCmdLine [MAX_PATH];}DMSDLINFO, *PDMSDLINFO;
typedefstruct {TCHARwzPackageID [DEVICE_ID_LEN];DWORDdwState;}DMSINVPKGID, *PDMSINVPKGID;

#endif /* _DEVMGMT_ */
