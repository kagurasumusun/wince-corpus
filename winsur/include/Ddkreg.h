/* Ddkreg.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 4 declarations, 3 outlines, 0 base types, 0 extra macros, 4 extra decls
 */
#ifndef _DDKREG_
#define _DDKREG_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* DDKISRINFO  [struct; ce-only] */

/* DDKPCIINFO  [struct; ce-only] */

/* DDKWINDOWINFO  [struct; ce-only] */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* DDKReg_GetIsrInfo  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
DWORD WINAPI DDKReg_GetIsrInfo(
 HKEY hk, 
 PDDKISRINFO pii
);

/* DDKReg_GetPciInfo  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
DWORD WINAPI DDKReg_GetPciInfo(
 HKEY hk, 
 PDDKPCIINFO ppi
);

/* DDKReg_GetWindowInfo  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
DWORD WINAPI DDKReg_GetWindowInfo(
 HKEY hk, 
 PDDKWINDOWINFO pwi
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct _DDKISRINFO_tag {DWORD cbSize;DWORD dwIrq;DWORD dwSysintr;WCHAR szIsrDll[DEVDLL_LEN];WCHAR szIsrHandler[DEVENTRY_LEN];} DDKISRINFO, *PDDKISRINFO;
typedef struct _DDKPCIINFO_tag {DWORD cbSize;DWORD dwDeviceNumber;DWORD dwFunctionNumber;DWORD dwInstanceIndex;DWORD dwWhichIds;DWORD idVals[PCIID_MAXNUMIDS];} DDKPCIINFO, *PDDKPCIINFO;
typedef struct _DDKWINDOWINFO_tag {DWORD cbSize; DWORD dwBusNumber;DWORD dwInterfaceType;DWORD dwNumIoWindows;DEVICEWINDOW ioWindows[MAX_DEVICE_WINDOWS];DWORD dwNumMemWindows;DEVICEWINDOW memWindows[MAX_DEVICE_WINDOWS];} DDKWINDOWINFO, *PDDKWINDOWINFO;
typedef struct _DEVICEWINDOW_tag {DWORD dwBase; DWORD dwLen;} DEVICEWINDOW, *PDEVICEWINDOW;

#endif /* _DDKREG_ */
