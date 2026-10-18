/* oem_settings.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 4 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _OEM_SETTINGS_
#define _OEM_SETTINGS_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x600 && _WIN32_WCE < 0x700)) /* CE 6.0..699 */

/* OemProcXXX  [function; ce-only; CE 6.0..699] */
BOOL CALLBACK OemProcXXX(HWND hwnd,
 UINT msg,
 WPARAM wParam,
 LPARAM lParam);

/* TscSettingsRead  [function; ce-only; CE 6.0..699] */
HRESULT TscSettingsRead (UINT uID,
 LPVOID val);

/* TscSettingsWrite  [function; ce-only; CE 6.0..699] */
HRESULT TscSettingsWrite (UINT uID,
 LPVOID val);
#endif /* _WIN32_WCE */

#endif /* _OEM_SETTINGS_ */
