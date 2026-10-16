/* Formatdisk.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 3 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _FORMATDISK_
#define _FORMATDISK_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* FormatVolume  [function; ce-only; CE 5.0..699; Fatutil.dll] */
DWORD FormatVolume(
 HANDLE hVolume,
 PDISK_INFO pdi,
 PFORMAT_OPTIONS pfo,
 PFN_PROGRESS pfnProgress,
 PFN_PROGRESS pfnMessage
);

/* FormatVolumeEx  [function; ce-only; CE 5.0..699; Fatutil.dll] */
DWORD FormatVolumeEx(
 HANDLE hVolume,
 PFORMAT_PARAMS pfp, 
);

/* FormatVolumeUI  [function; ce-only; CE 5.0..699; Fatutil.dll] */
VOID FormatVolumeUI(
 HANDLE hVolume,
 HWND hWnd
);
#endif /* _WIN32_WCE */

#endif /* _FORMATDISK_ */
