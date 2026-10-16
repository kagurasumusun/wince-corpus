/* KitlTran.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 13 declarations, 0 outlines, 0 base types, 0 extra macros, 2 extra decls
 */
#ifndef _KITLTRAN_
#define _KITLTRAN_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x400 && _WIN32_WCE < 0x700)) /* CE 4.0..699 */

/* TranDeInitLibrary  [function; ce-only; CE 4.0..699] */
BOOL TranDeInit Library (void);

/* TranInitLibrary  [function; ce-only; CE 4.0..699] */
BOOL TranInit Library(
 LPCWSTR pszRegKeyRoot
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x420 && _WIN32_WCE < 0x700)) /* CE 4.2..699 */

/* TranGetXMLParams  [function; ce-only; CE 4.2..699] */
BOOL TranGetXMLParams(
 LPCWSTR* ppstrXML
);

/* TranSetParam  [function; ce-only; CE 4.2..699] */
BOOL TranSetParam(
 LPCWSTR strName,
 LPCWSTR strValue,
 LPWSTR pstrError,
 long lErrorStringSize
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
BOOL TranDeInit Library (void);

#endif /* _KITLTRAN_ */
