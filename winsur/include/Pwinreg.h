/* Pwinreg.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 15 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _PWINREG_
#define _PWINREG_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* HiveRAMRegion  [struct; ce-only] */
#ifndef __WINCE_DEFINED_HIVERAMREGION
#define __WINCE_DEFINED_HIVERAMREGION
typedef struct HiveRAMRegion {
 LPVOID lpStart;
 DWORD dwLength;
 DWORD dwVirtCopyFlags;
} HiveRAMRegion;
#endif /* __WINCE_DEFINED_HIVERAMREGION */
#ifndef __WINCE_DEFINED_PHIVERAMREGION
#define __WINCE_DEFINED_PHIVERAMREGION
typedef HiveRAMRegion *PHiveRAMRegion, *LPHiveRAMRegion;
#endif /* __WINCE_DEFINED_PHIVERAMREGION */

/* RegSecureKey  [struct; ce-only] */
#ifndef __WINCE_DEFINED_REGSECUREKEY
#define __WINCE_DEFINED_REGSECUREKEY
typedef struct RegSecureKey {
 WORD wRoots;
 WORD wLen;
 LPWSTR pName;
} RegSecureKey;
#endif /* __WINCE_DEFINED_REGSECUREKEY */
#ifndef __WINCE_DEFINED_PREGSECUREKEY
#define __WINCE_DEFINED_PREGSECUREKEY
typedef RegSecureKey *PRegSecureKey, *LPRegSecureKey;
#endif /* __WINCE_DEFINED_PREGSECUREKEY */

/* RegSecureKeyList  [struct; ce-only] */
#ifndef __WINCE_DEFINED_REGSECUREKEYLIST
#define __WINCE_DEFINED_REGSECUREKEYLIST
typedef struct RegSecureKeyList {
 DWORD dwNumKeys;
 RegSecureKey* pList;
} RegSecureKeyList;
#endif /* __WINCE_DEFINED_REGSECUREKEYLIST */
#ifndef __WINCE_DEFINED_PREGSECUREKEYLIST
#define __WINCE_DEFINED_PREGSECUREKEYLIST
typedef RegSecureKeyList *PRegSecureKeyList, *LPRegSecureKeyList;
#endif /* __WINCE_DEFINED_PREGSECUREKEYLIST */

/* HiveRAMInfo  [struct; ce-only] */
#ifndef __WINCE_DEFINED_HIVERAMINFO
#define __WINCE_DEFINED_HIVERAMINFO
typedef struct HiveRAMInfo {
 WORD wVersion;
 WORD wFlags;
 HiveRAMRegion SystemRegion;
} HiveRAMInfo;
#endif /* __WINCE_DEFINED_HIVERAMINFO */
#ifndef __WINCE_DEFINED_PHIVERAMINFO
#define __WINCE_DEFINED_PHIVERAMINFO
typedef HiveRAMInfo *PHiveRAMInfo, *LPHiveRAMInfo;
#endif /* __WINCE_DEFINED_PHIVERAMINFO */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x300 && _WIN32_WCE < 0x400) || (_WIN32_WCE >= 0x500 && _WIN32_WCE < 0x700)) /* CE 3.0..399, 5.0..699 */

/* RegCopyFile  [function; ce-only; CE 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
BOOL RegCopyFile(LPCWSTR lpszFile);

/* RegRestoreFile  [function; ce-only; CE 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
BOOL RegRestoreFile(LPCWSTR lpszFile);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x400 && _WIN32_WCE < 0x700)) /* CE 4.0..699 */

/* SetCurrentUser  [function; ce-only; CE 4.0..699; Coredll.lib, coredll.lib] */
BOOL SetCurrentUser(LPCWSTR lpszUserName,
 LPBYTE lpbUserSecret,
 DWORD dwDataSize,
 BOOL bCreateIfNew);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x500 && _WIN32_WCE < 0x700)) /* CE 5.0..699 */

/* GetUserDirectory  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
BOOL GetUserDirectory(LPWSTR lpszBuffer,
 LPDWORD lpdwSize);

/* ReadGenericData  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
BOOL ReadGenericData(WORD dwId,
 DWORD dwIndex,
 DWORD dwFlags,
 LPBYTE pBuf,
 DWORD dwLength,
 DWORD pdwBytesReturned);

/* ReadRegData  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
DWORD ReadRegData(DWORD dwFlags,
 LPBYTE pBuf,
 DWORD len);

/* RegistryOperation  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
BOOL RegistryOperation(DWORD dwOp);

/* RegReplaceKey  [function; shared; CE 5.0..699; Coredll.lib, coredll.lib; A/W RegReplaceKeyA,RegReplaceKeyW (CE is W-side)] */
LONG RegReplaceKey(HKEY hKey,
 LPCTSTR lpSubKey,
 LPCTSTR lpNewFile,
 LPCTSTR lpOldFile);

/* RegSaveKey  [function; shared; CE 5.0..699; Coredll.lib, coredll.lib; A/W RegSaveKeyA,RegSaveKeyW (CE is W-side)] */
LONG RegSaveKey(HKEY hKey,
 LPCTSTR lpFile,
 LPSECURITY_ATTRIBUTES lpSecurityAttributes);

/* WriteGenericData  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
BOOL WriteGenericData(WORD dwId,
 DWORD dwIndex,
 DWORD dwFlags,
 LPBYTE pBuf,
 DWORD dwLength);

/* WriteRegData  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
BOOL WriteRegData(DWORD dwFlags,
 LPBYTE lpBuf,
 DWORD len);
#endif /* _WIN32_WCE */

#endif /* _PWINREG_ */
