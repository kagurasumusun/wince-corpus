/* Pm.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 14 constants, 16 declarations, 0 outlines, 0 base types, 0 extra macros, 12 extra decls
 */
#ifndef _PM_
#define _PM_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define DX 176
#define PBT_RESUME 2
#define POWER_FORCE (DWORD)(0x00001000)
#define POWER_NAME (DWORD)(0x00000001)
#define POWER_STATE_BOOT (DWORD)(0x00080000)
#define POWER_STATE_CRITICAL (DWORD)(0x00040000)
#define POWER_STATE_IDLE (DWORD)(0x00100000)
#define POWER_STATE_OFF (DWORD)(0x00020000)
#define POWER_STATE_ON (DWORD)(0x00010000)
#define POWER_STATE_PASSWORD (DWORD)(0x10000000)
#define POWER_STATE_RESET (DWORD)(0x00800000)
#define POWER_STATE_SUSPEND (DWORD)(0x00200000)
#define POWER_STATE_UNATTENDED (DWORD)(0x00400000)
#define POWER_STATE_USERIDLE (DWORD)(0x01000000)

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x400 && _WIN32_WCE < 0x700)) /* CE 4.0..699 */

/* ReleasePowerRelationship  [function; ce-only; CE 4.0..699; Coredll.lib] */
DWORD ReleasePowerRelationship(
 HANDLE h
);

/* ReleasePowerRequirement  [function; ce-only; CE 4.0..699; Coredll.lib] */
DWORD ReleasePowerRequirement(
 HANDLE hPowerReq
);

/* RequestPowerNotifications  [function; ce-only; CE 4.0..699; Coredll.lib] */
HANDLE RequestPowerNotifications(
 HANDLE hMsgQ,
 DWORD Flags
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x500 && _WIN32_WCE < 0x700)) /* CE 5.0..699 */

/* SetSystemPowerState  [function; shared; CE 5.0..699; Coredll.lib] */
DWORD SetSystemPowerState(
 LPCWSTR psState,
 DWORD StateFlags,
 DWORD Options
);

/* StopPowerNotifications  [function; ce-only; CE 5.0..699; Coredll.lib] */
DWORD StopPowerNotifications(
 HANDLE h
);
#endif /* _WIN32_WCE */

#endif /* _PM_ */
