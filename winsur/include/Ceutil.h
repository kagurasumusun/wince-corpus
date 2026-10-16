/* Ceutil.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 1 constants, 18 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _CEUTIL_
#define _CEUTIL_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */
#define CESVC_ROOT_COMMON 0
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE < 200) || (_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 1.0..199, 2.11..2.12, 3.0..399, 5.0..699 */

/* CeSvcClose  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
HRESULT CeSvcClose( 
 HCESVC hSvc
);

/* CeSvcDeleteVal  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
HRESULT CeSvcDeleteVal( 
 HCESVC hSvc, 
 LPCTSTR pszValName
);

/* CeSvcEnumProfiles  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
HRESULT CeSvcEnumProfiles( 
 PHCESVC phSvc, 
 DWORD lProfileIndex,
 PDWORD plProfile
);

/* CeSvcGetBinary  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
HRESULT CeSvcGetBinary( 
 HCESVC hSvc, 
 LPCTSTR pszValName,
 LPBYTE pszVal, 
 LPDWORD pcbVal
);

/* CeSvcGetDword  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
HRESULT CeSvcGetDword( 
 HCESVC hSvc, 
 LPCTSTR pszValName,
 LPDWORD pdwVal
);

/* CeSvcGetString  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
HRESULT CeSvcGetString( 
 HCESVC hSvc, 
 LPCTSTR pszValName, 
 LPTSTR pszVal, 
 DWORD cbVal
);

/* CeSvcOpen  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
HRESULT CeSvcOpen( 
 UINT uSvc, 
 LPTSTR pszPath, 
 BOOL fCreate,
 PHCESVC phSvc
);

/* CeSvcOpenEx  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
HRESULT CeSvcOpenEx( 
 HCESVC hSvcRoot, 
 LPTSTR pszPath, 
 BOOL fCreate, 
 PHCESVC phSvc
);

/* CeSvcSetBinary  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
HRESULT CeSvcSetBinary( 
 HCESVC hSvc, 
 LPCTSTR pszValName,
 LPBYTE pszVal, 
 DWORD cbVal
);

/* CeSvcSetDword  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
HRESULT CeSvcSetDword( 
 HCESVC hSvc, 
 LPCTSTR pszValName,
 DWORD dwVal
);

/* CeSvcSetString  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
HRESULT CeSvcSetString( 
 HCESVC hSvc, 
 LPCTSTR pszValName,
 LPCTSTR pszVal
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE < 200) || (_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 1.0..199, 2.11..2.12, 3.0..699 */

/* ObjectNotify  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib] */
BOOL (*POBJNOTIFYPROC)(
 POBJNOTIFY pNotify
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE < 200) || (_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 1.0..199, 2.11..2.12, 5.0..699 */

/* CeGetDeviceId  [function; ce-only; CE 1.0..199, 2.11..2.12, 5.0..699; Ceutil.lib, ceutil.lib] */
DEVICEID CeGetDeviceId();

/* CeGetSelectedDeviceId  [function; ce-only; CE 1.0..199, 2.11..2.12, 5.0..699; Ceutil.lib, ceutil.lib] */
DEVICEID CeGetSelectedDeviceId();
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 3.0..399, 5.0..699 */

/* CeSvcAdd  [function; ce-only; CE 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
HRESULT CeSvcAdd( 
 LPTSTR pszSvcName,
 LPTSTR pszSvcClass,
 LPVOID pSvcInfo
);

/* CeSvcDelete  [function; ce-only; CE 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
HRESULT CeSvcDelete( 
 HCESVC hSvc
);

/* CeSvcQueryInfo  [function; ce-only; CE 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
HRESULT CeSvcQueryInfo( 
 LPTSTR pszSvcName,
 LPTSTR pszSvcClass,
 LPVOID pszSvcInfo,
 DWORD cbBuffer
);

/* CeSvcRemove  [function; ce-only; CE 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
HRESULT CeSvcRemove( 
 LPTSTR pszSvcName,
 LPTSTR pszSvcClass,
 DWORD dwSvcFlags
);
#endif /* _WIN32_WCE */

#endif /* _CEUTIL_ */
