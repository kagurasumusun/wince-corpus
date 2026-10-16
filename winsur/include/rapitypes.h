/* rapitypes.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 5 declarations, 2 outlines, 0 base types, 0 extra macros, 8 extra decls
 */
#ifndef _RAPITYPES_
#define _RAPITYPES_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* CE_FIND_DATA  [struct; ce-only] */

/* RAPI_DEVICE_PLATFORM  [struct; ce-only; rapi.lib] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* CEGUID  [struct; ce-only] */
typedef struct _CEGUID {
 DWORD Data1;
 DWORD Data2;
 DWORD Data3;
 DWORD Data4;
} CEGUID;

/* RAPIINIT  [struct; ce-only] */
typedef struct _RAPIINIT {
 DWORD cbSize;
 HANDLE heRapiInit;
 HRESULT hrRapiInit;
} RAPIINIT;

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* typedef */
typedef CEPROPVAL *PCEPROPVAL;

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

#endif /* _RAPITYPES_ */
