/* Pwinreg.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 16 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _PWINREG_
#define _PWINREG_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* HiveRAMInfo  [struct; ce-only; CE 4.0..699] */
typedef struct HiveRAMInfo {
 WORD wVersion;
 WORD wFlags;
 HiveRAMRegion SystemRegion;
} HiveRAMInfo;

/* HiveRAMRegion  [struct; ce-only; CE 4.0..699] */
typedef struct HiveRAMRegion {
 LPVOID lpStart;
 DWORD dwLength;
 DWORD dwVirtCopyFlags;
} HiveRAMRegion;

/* RegSecureKey  [struct; ce-only; CE 4.0..699] */
typedef struct RegSecureKey {
 WORD wRoots;
 WORD wLen;
 LPWSTR pName;
} RegSecureKey;

/* RegSecureKeyList  [struct; ce-only; CE 4.0..699] */
typedef struct RegSecureKeyList {
 DWORD dwNumKeys;
 RegSecureKey* pList;
} RegSecureKeyList;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 3.0..399, 5.0..699 */

/* RegCopyFile  [function; ce-only; CE 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
BOOL RegCopyFile(
 LPCWSTR lpszFile
);

/* RegRestoreFile  [function; ce-only; CE 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
BOOL RegRestoreFile(
 LPCWSTR lpszFile
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* SetCurrentUser  [function; ce-only; CE 4.0..699; Coredll.lib, coredll.lib] */
BOOL SetCurrentUser( 
 LPCWSTR lpszUserName, 
 LPBYTE lpbUserSecret, 
 DWORD dwDataSize, 
 BOOL bCreateIfNew 
);

/* SetUserData  [function; ce-only; CE 4.0..699; Coredll.lib, coredll.lib] */
BOOL SetUserData( 
 LPBYTE lpbUserData, 
 DWORD dwDataSize 
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* GetUserDirectory  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
BOOL GetUserDirectory( 
 LPWSTR lpszBuffer, 
 LPDWORD lpdwSize 
);

/* ReadGenericData  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
BOOL ReadGenericData(
 WORD dwId, 
 DWORD dwIndex, 
 DWORD dwFlags, 
 LPBYTE pBuf,
 DWORD dwLength,
 DWORD pdwBytesReturned
);

/* ReadRegData  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
DWORD ReadRegData(
 DWORD dwFlags, 
 LPBYTE pBuf, 
 DWORD len 
);

/* RegistryOperation  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
BOOL RegistryOperation(
 DWORD dwOp
);

/* RegReplaceKey  [function; shared; CE 5.0..699; Coredll.lib, coredll.lib; A/W RegReplaceKeyA,RegReplaceKeyW (CE is W-side)] */
LONG RegReplaceKey( 
 HKEY hKey,
 LPCTSTR lpSubKey,
 LPCTSTR lpNewFile,
 LPCTSTR lpOldFile
);

/* RegSaveKey  [function; shared; CE 5.0..699; Coredll.lib, coredll.lib; A/W RegSaveKeyA,RegSaveKeyW (CE is W-side)] */
LONG RegSaveKey( 
 HKEY hKey,
 LPCTSTR lpFile,
 LPSECURITY_ATTRIBUTES lpSecurityAttributes
);

/* WriteGenericData  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
BOOL WriteGenericData(
 WORD dwId, 
 DWORD dwIndex, 
 DWORD dwFlags, 
 LPBYTE pBuf,
 DWORD dwLength,
);

/* WriteRegData  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
BOOL WriteRegData( 
 DWORD dwFlags, 
 LPBYTE lpBuf, 
 DWORD len 
);
#endif /* _WIN32_WCE */

#endif /* _PWINREG_ */
