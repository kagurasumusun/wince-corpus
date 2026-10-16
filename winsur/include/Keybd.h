/* Keybd.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 3 declarations, 0 outlines, 0 base types, 0 extra macros, 2 extra decls
 */
#ifndef _KEYBD_
#define _KEYBD_


/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
struct KBDI_VKEY_TO_UNICODE_INFO { UINT32 cbToUnicodeState; UINT32 cMaxToUnicodeCharacters;};
struct KBDI_AUTOREPEAT_INFO {INT32 CurrentInitialDelay; INT32 CurrentRepeatRate; INT32 cInitialDelaysSelectable; INT32 cRepeatRatesSelectable; };

#endif /* _KEYBD_ */
