/* Devmgmt.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 7 declarations, 0 outlines, 0 base types, 0 extra macros, 4 extra decls
 */
#ifndef _DEVMGMT_
#define _DEVMGMT_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* DMSDLINFO  [struct, typedef; ce-only; CE 4.0..699] */
typedef struct {
 SYSTEMTIME stStartTime;
 SYSTEMTIME stDeltaTime;
 DWORD dwFlags;
 TCHAR wzDest [MAX_PATH];
 TCHAR wzCmdLine [MAX_PATH];
} DMSDLINFO, *PDMSDLINFO;

/* DMSINVPKGID  [struct, typedef; ce-only; CE 4.0..699] */
typedef struct {
 TCHAR wzPackageID [DEVICE_ID_LEN];
 DWORD dwState;
} DMSINVPKGID, *PDMSINVPKGID;

/* DMSINVRECORD  [struct, typedef; ce-only; CE 4.0..699] */
typedef struct {
 TCHAR wzPackageID [DEVICE_ID_LEN];
 TCHAR wzShortText [PACKAGE_SHORT_TEXT_LEN];
 TCHAR wzLongText [PACKAGE_LONG_TEXT_LEN];
 TCHAR wzAppName [PACKAGE_APPNAME_TEXT_LEN];
 DWORD dwPackageSize;
 DWORD dwState;
 DMSDLINFO dlInfo;
 DWORD dwAux;
} DMSINVRECORD, *PDMSINVRECORD;

/* DMTASKINFO  [struct, typedef; ce-only; CE 4.0..699] */
typedef struct {
 DWORD dwSize;
 SYSTEMTIME stStartTime;
 SYSTEMTIME stDeltaTime;
 SYSTEMTIME stRetryTime;
 DWORD dwType;
 DWORD dwMaxRetryTime;
 DWORD dwFlags;
 LPTSTR pwzRDN;
 LPTSTR pwzURL;
 LPTSTR pwzURLSig;
 LPTSTR pwzMisc;
 LPTSTR pwzData;
 LPTSTR pwzXml;
} DMTASKINFO, *PDMTASKINFO;
#endif /* _WIN32_WCE */

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
