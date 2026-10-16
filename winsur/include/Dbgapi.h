/* Dbgapi.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 6 declarations, 2 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _DBGAPI_
#define _DBGAPI_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* ASSERT  [function, macro; shared] */

/* ASSERTMSG  [function, macro; ce-only] */
#define ASSERTMSG(
 message,
 Condition
)

/* DEBUGZONE  [macro, function; ce-only] */

/* ERRORMSG  [function, macro; ce-only] */
#define ERRORMSG(
 cond,
 printf_exp
)

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 3.0..399, 5.0..699 */

/* WriteDebugLED  [function; ce-only; CE 3.0..399, 5.0..699; Coredll.lib, OEMMain.lib, OEMMain_StaticKITL.lib] */
void WriteDebugLED(
 WORD wIndex,
 DWORD dwPattern 
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* NKDbgPrintfW  [function; ce-only; CE 5.0..699] */
void WINAPIV NKDbgPrintfW(
 LPCWSTR lpszFmt,...
);

/* RegisterDbgZones  [function; ce-only; CE 5.0..699] */
BOOL RegisterDbgZones(
 HMODULE hMod,
 LPDBGPARAM lpdbgparam
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct _DBGPARAM { WCHAR lpszName[32]; WCHAR rglpszZones[16][32]; ULONG ulZoneMask; } DBGPARAM, *LPDBGPARAM;

#endif /* _DBGAPI_ */
