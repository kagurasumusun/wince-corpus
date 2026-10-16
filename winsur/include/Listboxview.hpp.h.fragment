/* Listboxview.hpp -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 6 declarations, 0 outlines, 0 base types, 0 extra macros, 2 extra decls
 */
#ifndef _LISTBOXVIEW_HPP_
#define _LISTBOXVIEW_HPP_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* ListBoxView_t::DrawFocus  [function; ce-only; CE 5.0..699] */
static void DrawFocus(
 HDC hdc,
 RECT* prc,
 bool bOn
);

/* ListBoxView_t::ItemHeight  [function; ce-only; CE 5.0..699] */
static int ItemHeight(
 HWND hwnd,
 HDC hdc
);

/* ListBoxView_t::TopCoordinate  [function; ce-only; CE 5.0..699] */
static int TopCoordinate(
 HDC hdc,
 RECT* lprc,
 int ascent
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* ListBoxView_t::DrawBackground  [function; ce-only; CE 6.0..699] */
static void DrawBackground(
 HWND hwnd,
 HWND hwndOwner,
 HDC hdc,
 RECT* prc
);

/* ListBoxView_t::DrawSelection  [function; ce-only; CE 6.0..699] */
static void DrawSelection(
 HDC hdc,
 RECT* prc,
 COLORREF* prcOldBackgroundColor,
 COLORREF* prcOldTextColor
);

/* ListBoxView_t::TextColor  [function; ce-only; CE 6.0..699] */
static COLORREF TextColor(
 HWND hwnd,
 HDC hdc
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
void DrawBackground( HWND hwnd, HWND hwndOwner, HDC hdc, RECT* prc );
int ItemHeight( HWND hwnd, HDC hdc );

#endif /* _LISTBOXVIEW_HPP_ */
