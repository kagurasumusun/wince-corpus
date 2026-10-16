/* rapitypes.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 7 declarations, 0 outlines, 0 base types, 0 extra macros, 8 extra decls
 */
#ifndef _RAPITYPES_
#define _RAPITYPES_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 2.11..2.12, 3.0..399, 5.0..699 */

/* CE_FIND_DATA  [struct; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699] */
typedef struct _CE_FIND_DATA {
 DWORD dwFileAttributes;
 FILETIME ftCreationTime;
 FILETIME ftLastAccessTime;
 FILETIME ftLastWriteTime;
 DWORD nFileSizeHigh;
 DWORD nFileSizeLow;
 DWORD dwOID;
 WCHAR cFileName[MAX_PATH];
} CE_FIND_DATA, *LPCE_FIND_DATA;

/* CEDB_FIND_DATA  [struct; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699] */
struct CEDB_FIND_DATA { 
 CEOID OidDb; 
 CEDBASEINFO DbInfo; 
};
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 2.11..2.12, 3.0..699 */

/* RAPIINIT  [struct; ce-only; CE 2.11..2.12, 3.0..699] */
typedef struct _RAPIINIT {
 DWORD cbSize;
 HANDLE heRapiInit;
 HRESULT hrRapiInit;
} RAPIINIT;
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 3.0..399, 5.0..699 */

/* CEOSVERSIONINFO  [struct; ce-only; CE 3.0..399, 5.0..699] */
typedef struct _CEOSVERSIONINFO {
 DWORD dwOSVersionInfoSize; 
 DWORD dwMajorVersion; 
 DWORD dwMinorVersion; 
 DWORD dwBuildNumber; 
 DWORD dwPlatformId; 
 WCHAR szCSDVersion[ 128 ]; 
} CEOSVERSIONINFO, * LPCEOSVERSIONINFO;
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */

/* RAPI_DEVICE_PLATFORM  [struct; ce-only; CE 5.0..599; rapi.lib] */
typedef struct {BSTR bstrName;DWORD dwMajor;DWORD dwMinor;} RAPI_DEVICE_PLATFORM;
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* RAPISTREAMFLAG  [enum; ce-only; CE 5.0..699; rapi.lib] */
typedef enum tagRAPISTREAMFLAG {
 STREAM_TIMEOUT_READ
} RAPISTREAMFLAG;
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* CEGUID  [struct; ce-only; CE 6.0..699] */
typedef struct _CEGUID {
 DWORD Data1;
 DWORD Data2;
 DWORD Data3;
 DWORD Data4;
} CEGUID;
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* typedef */
typedef CEPROPVAL *PCEPROPVAL;
typedef union _CEVALUNION { short iVal;

/* struct */
typedef struct _CENOTIFICATION { DWORD dwSize DWORD dwParam; UINT uType; CEGUID guid; CEOID oid; CEOID oidParent; } CENOTINOTIFICATION;
typedef struct _CENOTIFYREQUEST { DWORD dwSize; HWND hwnd; DWORD dwFlags; HANDLE hHeap; DWORD dwParam; } CENOTIREQUEST;
typedef struct STORE_INFORMATION {DWORD dwStoreSize;DWORD dwFreeSize;} STORE_INFORMATION, *LPSTORE_INFORMATION;
typedef struct _SYSTEM_POWER_STATUS_EX {BYTE ACLineStatus;BYTE BatteryFlag;BYTE BatteryLifePercent;BYTE Reserved1;DWORD BatteryLifeTime;DWORD BatteryFullLifeTime;BYTE Reserved2;BYTE BackupBatteryFlag;BYTE BackupBatteryLifePercent;BYTE Reserved3;DWORD BackupBatteryLifeTime;DWORD BackupBatteryFullLifeTime;} SYSTEM_POWER_STATUS_EX, *PSYSTEM_POWER_STATUS_EX,*LPSYSTEM_POWER_STATUS_EX;
typedef struct _SYSTEM_POWER_STATUS_EX {
  BYTE ACLineStatus;
  BYTE BatteryFlag;
  BYTE BatteryLifePercent;
  BYTE Reserved1;
  DWORD BatteryLifeTime;
  DWORD BatteryFullLifeTime;
  BYTE Reserved2;
  BYTE BackupBatteryFlag;
  BYTE BackupBatteryLifePercent;
  BYTE Reserved3; };
typedef struct _CEOIDINFO { WORD wObjType; WORD wPad; union { CEFILEINFO infFile; CEDIRINFO infDirectory; CEDBASEINFO infDatabase; CERECORDINFO infRecord;};

#endif /* _RAPITYPES_ */
