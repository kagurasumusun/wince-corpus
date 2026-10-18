/* Battery.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 2 constants, 4 declarations, 1 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _BATTERY_
#define _BATTERY_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define FALSE 0
#define TRUE 1

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* BATTERY_STATUS  [struct; ce-only] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* BATTERYLIFETIMEINFO  [struct; ce-only] */
#ifndef __WINCE_DEFINED__BATTERYLIFETIMEINFO_TAG
#define __WINCE_DEFINED__BATTERYLIFETIMEINFO_TAG
#ifndef __WINCE_DEFINED_BATTERYLIFETIMEINFO
#define __WINCE_DEFINED_BATTERYLIFETIMEINFO
typedef struct _BatteryLifetimeInfo_tag {
 SYSTEMTIME stLastChange;
 DWORD cmsCpuUsage;
 DWORD cmsPreviousCpuUsage;
} BATTERYLIFETIMEINFO, *PBATTERYLIFETIMEINFO;
#endif /* __WINCE_DEFINED_BATTERYLIFETIMEINFO */
#endif /* __WINCE_DEFINED__BATTERYLIFETIMEINFO_TAG */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x211 && _WIN32_WCE < 0x700)) /* CE 2.11..699 */

/* BatteryDrvrGetLevels  [function; ce-only; CE 2.11..699; Coredll.lib, coredll.lib] */
LONG BatteryDrvrGetLevels(void);

/* BatteryDrvrSupportsChangeNotification  [function; ce-only; CE 2.11..699; Acmdwrap.lib, Coredll.lib, coredll.lib] */
BOOL BatteryDrvrSupportsChangeNotification(void);
#endif /* _WIN32_WCE */

#endif /* _BATTERY_ */
