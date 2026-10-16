/* Comboboxview.hpp -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 7 declarations, 0 outlines, 0 base types, 0 extra macros, 3 extra decls
 */
#ifndef _COMBOBOXVIEW_HPP_
#define _COMBOBOXVIEW_HPP_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* ComboBoxView_t::DrawFocus  [function; ce-only; CE 4.0..699] */
static void DrawFocus(
 HDC hdc,
 RECT* prc
);

/* ComboBoxView_t::TopCoordinate  [function; ce-only; CE 4.0..699] */
static int TopCoordinate(
 HDC hdc,
 RECT* lprc
);

/* ComboBoxView_t::WindowStyleCustomization  [function; ce-only; CE 4.0..699] */
static void WindowStyleCustomization(
 HWND hwnd,
 DWORD Style,
 DWORD ExStyle,
 DWORD* pStyle,
 DWORD* pExStyle
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* ComboBoxView_t::BackgroundBrush  [function; ce-only; CE 6.0..699] */
static HBRUSH BackgroundBrush(
 HWND hwnd,
 HWND hwndEdit,
 HDC hdc
);

/* ComboBoxView_t::DrawBackground  [function; ce-only; CE 6.0..699] */
static void DrawBackground(
 HWND hwnd,
 HWND hwndEdit,
 HDC hdc,
 RECT* prc
);

/* ComboBoxView_t::DrawSelection  [function; ce-only; CE 6.0..699] */
static void DrawSelection(
 HDC hdc,
 RECT* prc
);

/* ComboBoxView_t::TextColor  [function; ce-only; CE 6.0..699] */
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
void DrawFocus( HDC hdc, RECT* prc );
int TopCoordinate( HDC hdc, RECT* lprc );
void WindowStyleCustomization( HWND hwnd, DWORD Style, DWORD ExStyle, DWORD* pStyle, DWORD* pExStyle );

#endif /* _COMBOBOXVIEW_HPP_ */
