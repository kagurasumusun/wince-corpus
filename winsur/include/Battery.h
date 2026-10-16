/* Battery.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 5 declarations, 0 outlines, 0 base types, 0 extra macros, 2 extra decls
 */
#ifndef _BATTERY_
#define _BATTERY_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* BATTERY_STATUS  [struct; ce-only] */
typedef struct { 
BYTE ACLineStatus; 
BYTE BatteryFlag; 
BYTE BatteryLifePercent; 
BYTE Reserved1; 
DWORD BatteryLifeTime; 
DWORD BatteryFullLifeTime; 
BYTE Reserved2; 
BYTE BackupBatteryFlag; 
BYTE BackupBatteryLifePercent; 
BYTE fBatteriesChangedSinceLastCall; 
DWORD BackupBatteryLifeTime; 
DWORD BackupBatteryFullLifeTime; 
} BATTERY_STATUS;

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 400)) /* CE 2.11..2.12, 3.0..399 */

/* BatteryDrvrGetStatus  [function; ce-only; CE 2.11..2.12, 3.0..399; Acmdwrap.lib] */
BOOL BatteryDrvrGetStatus ( 
PSYSTEM_POWER_STATUS_EX2 pstatus, 
PBOOL pfBatteriesChangedSinceLastCall );
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 700)) /* CE 2.11..699 */

/* BatteryDrvrGetLevels  [function; ce-only; CE 2.11..699; Coredll.lib, coredll.lib] */
LONG BatteryDrvrGetLevels(void);

/* BatteryDrvrSupportsChangeNotification  [function; ce-only; CE 2.11..699; Acmdwrap.lib, Coredll.lib, coredll.lib] */
BOOL BatteryDrvrSupportsChangeNotification(void);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct _BatteryLifetimeInfo_tag { SYSTEMTIME stLastChange; DWORD cmsCpuUsage; DWORD cmsPreviousCpuUsage;} BATTERYLIFETIMEINFO, *PBATTERYLIFETIMEINFO;
typedef struct tagBATTERY_STATUS{ DWORD ACLineStatus; DWORD BatteryFlag; DWORD BatteryLifePercent; DWORD_t BatteryLifeTime; DWORD BatteryFullLifeTime; } PBATTERY_STATUS;

#endif /* _BATTERY_ */
