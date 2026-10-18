/* astdtapi.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 6 constants, 1 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _ASTDTAPI_
#define _ASTDTAPI_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define TAPIERR_INVALDESTADDRESS -4L
#define TAPIERR_INVALPOINTER -18L
#define TAPIERR_NOREQUESTRECIPIENT -2L
#define TAPIERR_REQUESTCANCELLED -17L
#define TAPIERR_REQUESTFAILED -16L
#define TAPIERR_REQUESTQUEUEFULL -3L

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x600 && _WIN32_WCE < 0x700)) /* CE 6.0..699 */

/* tapiRequestMakeCall  [function; shared; CE 6.0..699; cellcore.lib; A/W tapiRequestMakeCallA,tapiRequestMakeCallW (CE is W-side)] */
LONG tapiRequestMakeCall (LPCTSTR lpszDestAddress,
 LPCTSTR lpszAppName,
 LPCTSTR lpszCalledParty,
 LPCTSTR lpszComment);
#endif /* _WIN32_WCE */

#endif /* _ASTDTAPI_ */
