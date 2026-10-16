/* Pmimpl.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 7 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _PMIMPL_
#define _PMIMPL_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* PlatformDeviceListInit  [function; ce-only; CE 4.0..699; Coredll.lib] */
BOOL WINAPI PlatformDeviceListInit(
 PDEVICE_LIST pdl
);

/* PlatformManageSystemPower  [function; ce-only; CE 4.0..699; Coredll.lib] */
VOID WINAPI PlatformManageSystemPower(
 HANDLE hevReady
);

/* PlatformMapPowerStateHint  [function; ce-only; CE 4.0..699; Coredll.lib] */
DWORD WINAPI PlatformMapPowerStateHint(
 DWORD dwHint,
 LPSTR pszBuf,
 DWORD dwBufChars
);

/* PlatformResumeSystem  [function; ce-only; CE 4.0..699; Coredll.lib] */
VOID WINAPI PlatformResumeSystem(void);

/* PlatformSendInitialNotifications  [function; ce-only; CE 4.0..699; Coredll.lib] */
VOID PlatformSendInitialNotifications(
 PPOWER_NOTIFICATION ppn,
 DWORD dwFlags
);

/* PlatformSetSystemPowerState  [function; ce-only; CE 4.0..699; Coredll.lib] */
DWORD WINAPI PlatformSetSystemPowerState(
 LPCSTSTR pszName,
 BOOL fForce,
 BOOL fInternal
);

/* PlatformValidatePMRegistry  [function; ce-only; CE 4.0..699; Coredll.lib] */
DWORD WINAPI PlatformValidatePMRegistry(void);
#endif /* _WIN32_WCE */

#endif /* _PMIMPL_ */
