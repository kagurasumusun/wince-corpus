/* vpnotify.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 3 declarations, 0 outlines, 0 base types, 0 extra macros, 3 extra decls
 */
#ifndef _VPNOTIFY_
#define _VPNOTIFY_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 3.0..399, 5.0..699 */

/* IVPBaseNotify::RenegotiateVPParameters  [function; shared; CE 3.0..399, 5.0..699; entity-headers] */
HRESULT RenegotiateVPParameters(void) PURE;

/* IVPNotify::GetDeinterlaceMode  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetDeinterlaceMode(
 AMVP_MODE* pmode
) PURE;

/* IVPNotify::SetDeinterlaceMode  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT SetDeinterlaceMode(
 AMVP_MODE mode
) PURE;
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT GetDeinterlaceMode(  AMVP_MODE *pmode) PURE;
HRESULT RenegotiateVPParameters(void) PURE;
HRESULT SetDeinterlaceMode(  AMVP_MODE mode) PURE;

#endif /* _VPNOTIFY_ */
