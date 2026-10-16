/* Scandisk.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 4 declarations, 0 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _SCANDISK_
#define _SCANDISK_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* ScanVolume  [function; ce-only; CE 5.0..699; Fatutil.dll] */
BOOL ScanVolume(
 HANDLE hVolume,
 PDISK_INFO pdi,
 PSCAN_OPTIONS pso,
 PFN_PROGRESS pfnProgress,
 PFN_MESSAGE pfnMessage
);

/* ScanVolumeEx  [function; ce-only; CE 5.0..699; Fatutil.dll] */
DWORD ScanVolumeEx(
 HANDLE hVolume,
 PSCAN_PARAMS psp,
);

/* ScanVolumeUI  [function; ce-only; CE 5.0..699; Fatutil.dll] */
VOID ScanVolumeUI(
 HANDLE hVolume,
 HWND hWnd
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct _SCAN_OPTIONS { DWORD dwFlags;DWORD dwFatToUse;} SCAN_OPTIONS, *PSCAN_OPTIONS;

#endif /* _SCANDISK_ */
