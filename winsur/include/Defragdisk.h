/* Defragdisk.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 4 declarations, 0 outlines, 0 base types, 0 extra macros, 2 extra decls
 */
#ifndef _DEFRAGDISK_
#define _DEFRAGDISK_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x500 && _WIN32_WCE < 0x700)) /* CE 5.0..699 */

/* DefragVolumeUI  [function; ce-only; CE 5.0..699; Fatutil.dll] */
VOID DefragVolumeUI(
 HANDLE hVolume,
 HWND hWnd
);
#endif /* _WIN32_WCE */

#endif /* _DEFRAGDISK_ */
