/* Updownview.hpp -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 3 declarations, 0 outlines, 0 base types, 0 extra macros, 3 extra decls
 */
#ifndef _UPDOWNVIEW_HPP_
#define _UPDOWNVIEW_HPP_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* UpdownView_t::HorzDrawSettings  [function; ce-only; CE 5.0..699] */
static void HorzDrawSettings(
 DWORD dwStyle,
 int iVersion,
 LPRECT prcBtn,
 BOOL bEnabled,
 BOOL fHasBorder,
 unsigned fUp,
 unsigned fDown,
 int nPos,
 int nUpper,
 int nLower,
 UINT uHot,
 UINT* puLeftFlags, 
 LPRECT prcLeft,
 UINT* puRightFlags,
 LPRECT prcRight
);

/* UpdownView_t::SetSunkenBorder  [function; ce-only; CE 5.0..699] */
static void SetSunkenBorder(
 DWORD dwStyle,
 UINT* puBorderType
);

/* UpdownView_t::VertDrawSettings  [function; ce-only; CE 5.0..699] */
static void VertDrawSettings(
 DWORD dwStyle,
 int iVersion,
 LPRECT prcBtn,
 BOOL bEnabled,
 BOOL fHasBorder,
 unsigned fUp,
 unsigned fDown,
 int nPos,
 int nUpper,
 int nLower,
 UINT uHot,
 UINT* puUpFlags, 
 LPRECT prcUp,
 UINT* puDownFlags,
 LPRECT prcDown
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
void HorzDrawSettings( DWORD dwStyle, int iVersion, LPRECT prcBtn, BOOL bEnabled, BOOL fHasBorder, unsigned fUp, unsigned fDown, int nPos, int nUpper, int nLower, UINT uHot, UINT* puLeftFlags, LPRECT prcLeft, UINT* puRightFlags, LPRECT prcRight );
void SetSunkenBorder( DWORD dwStyle, UINT* puBorderType );
void VertDrawSettings( DWORD dwStyle, int iVersion, LPRECT prcBtn, BOOL bEnabled, BOOL fHasBorder, unsigned fUp, unsigned fDown, int nPos, int nUpper, int nLower, UINT uHot, UINT* puUpFlags, LPRECT prcUp, UINT* puDownFlags, LPRECT prcDown );

#endif /* _UPDOWNVIEW_HPP_ */
