/* Trackbarview.hpp -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 4 declarations, 0 outlines, 0 base types, 0 extra macros, 3 extra decls
 */
#ifndef _TRACKBARVIEW_HPP_
#define _TRACKBARVIEW_HPP_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* TrackBarView_t::DrawChannel  [function; ce-only; CE 4.0..699] */
static void DrawChannel(
 HDC hdc,
 DWORD style,
 BOOL bSelection,
 LONG lSelStart,
 LONG lSelEnd,
 LONG lLogMin,
 LONG lLogMax,
 LONG iSizePhys,
 int left,
 LPRECT lprc
);

/* TrackBarView_t::DrawFocus  [function; ce-only; CE 4.0..699] */
static void DrawFocus(
 HWND hwnd,
 HDC hdc
);

/* TrackBarView_t::DrawThumb  [function; ce-only; CE 4.0..699] */
static void DrawThumb(
 HWND hwnd,
 HDC hdc,
 DWORD style,
 int iThumbHeight,
 int iThumbWidth,
 LPRECT lprc,
 BOOL fSelected
);

/* TrackBarView_t::DrawTics  [function; ce-only; CE 4.0..699] */
static void DrawTics(
 HDC hdc,
 DWORD style,
 RECT* prc,
 PDWORD pTics,
 int nTics,
 int ticFreq,
 LONG lSelStart,
 LONG lSelEnd,
 LONG lLogMin,
 LONG lLogMax,
 LONG iSizePhys,
 bool bDrawSelectionTriangles
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
void DrawChannel( HDC hdc, DWORD style, BOOL bSelection, LONG lSelStart, LONG lSelEnd, LONG lLogMin, LONG lLogMax, LONG iSizePhys, int left, LPRECT lprc );
void DrawThumb( HWND hwnd, HDC hdc, DWORD style, int iThumbHeight, int iThumbWidth, LPRECT lprc, BOOL fSelected );
void DrawTics( HDC hdc, DWORD style, RECT* prc, PDWORD pTics, int nTics, int ticFreq, LONG lSelStart, LONG lSelEnd, LONG lLogMin, LONG lLogMax, LONG iSizePhys, bool bDrawSelectionTriangles );

#endif /* _TRACKBARVIEW_HPP_ */
