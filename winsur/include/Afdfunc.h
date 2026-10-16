/* Afdfunc.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 2 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _AFDFUNC_
#define _AFDFUNC_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE < 200)) /* CE 1.0..199 */

/* RasGetEntryDevConfig  [function; ce-only; CE 1.0..199] */
DWORD RasGetEntryDevConfig(LPCTSTR lpszPhoneBook, LPCTSTR szEntry, LPDWORD pdwDeviceID, LPDWORD pdwSize, LPVARSTRING pDeviceConfig);

/* RasSetEntryDevConfig  [function; ce-only; CE 1.0..199] */
DWORD RasSetEntryDevConfig(LPCTSTR lpszPhoneBook, LPCTSTR szEntry, DWORD dwDeviceID, LPVARSTRING lpDeviceConfig);
#endif /* _WIN32_WCE */

#endif /* _AFDFUNC_ */
