/* Tnefapi.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 4 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _TNEFAPI_
#define _TNEFAPI_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x211 && _WIN32_WCE < 0x213)) /* CE 2.11..2.12 */

/* TnefConvertToUnicode  [function; ce-only; CE 2.11..2.12] */
INT WINAPI TnefConvertToUnicode (UINT CodePage, DWORD dwFlags,
LPCSTR lpMultiByteStr, int cchMultiByte, LPWSTR lpWideCharStr,
int cchWideChar);
#endif /* _WIN32_WCE */

#endif /* _TNEFAPI_ */
