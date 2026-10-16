/* Headerview.hpp -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 3 declarations, 0 outlines, 0 base types, 0 extra macros, 3 extra decls
 */
#ifndef _HEADERVIEW_HPP_
#define _HEADERVIEW_HPP_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* HeaderView_t::CalcOffset  [function; ce-only; CE 4.0..699] */
static void CalcOffset(
 int cxBorder,
 int cyBorder,
 int* pxOffset,
 int* pyOffset
);

/* HeaderView_t::DrawButtonBorder  [function; ce-only; CE 4.0..699] */
static void DrawButtonBorder(
 HDC hdc,
 DWORD style,
 LPRECT prc,
 BOOL fItemSunken
);

/* HeaderView_t::Height  [function; ce-only; CE 4.0..699] */
static int Height(
 int cyChar,
 int cyEdge
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
void CalcOffset( int cxBorder, int cyBorder, int* pxOffset, int* pyOffset );
void DrawButtonBorder( HDC hdc, DWORD style, LPRECT prc, BOOL fItemSunken );
int Height( int cyChar, int cyEdge );

#endif /* _HEADERVIEW_HPP_ */
