/* Smclib.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 19 declarations, 1 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _SMCLIB_
#define _SMCLIB_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* SCARD_READER_CAPABILITIES  [struct; ce-only] */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x300 && _WIN32_WCE < 0x400) || (_WIN32_WCE >= 0x500 && _WIN32_WCE < 0x700)) /* CE 3.0..399, 5.0..699 */

/* SmartcardCreateLink  [function; ce-only; CE 3.0..399, 5.0..699] */
NTSTATUS SmartcardCreateLink(LPCWSTR pszFriendlyName,
 LPCWSTR pszDeviceName);

/* SmartcardDeleteLink  [function; ce-only; CE 3.0..399, 5.0..699] */
NTSTATUS SmartcardDeleteLink(LPCWSTR pszFriendlyName);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x300 && _WIN32_WCE < 0x700)) /* CE 3.0..699 */

/* MapNtStatusToWinError  [function; ce-only; CE 3.0..699] */
ULONG MapNtStatusToWinError(NTSTATUS Status);
#endif /* _WIN32_WCE */

#endif /* _SMCLIB_ */
