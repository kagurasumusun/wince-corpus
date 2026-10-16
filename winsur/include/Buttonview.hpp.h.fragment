/* Buttonview.hpp -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 10 declarations, 0 outlines, 0 base types, 0 extra macros, 9 extra decls
 */
#ifndef _BUTTONVIEW_HPP_
#define _BUTTONVIEW_HPP_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* ButtonControlRectangleStyle_t  [enum; ce-only; CE 4.0..699] */
enum ButtonControlRectangleStyle_t {
 CBR_CLIENTRECT,
 CBR_CHECKBOX,
 CBR_CHECKTEXT,
 CBR_GROUPTEXT,
 CBR_GROUPFRAME,
 CBR_PUSHBUTTON
};

/* ButtonView_t::DrawText  [enum; ce-only; CE 4.0..699] */
static void DrawText(
 HWND hwnd,
 HDC hdc,
 BOOL dbt,
 BOOL fDepress,
 UINT pbfPush,
 enum ButtonControlRectangleStyle_t bcrs,
 WORD alignment
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* ButtonView_t::DrawCheckBoxandRadioStyle  [function; ce-only; CE 4.0..699] */
static void DrawCheckBoxandRadioStyle(
 HWND hwnd,
 HDC hdc,
 HBRUSH hbr,
 WORD alignment
);

/* ButtonView_t::DrawGroupBoxText  [function; ce-only; CE 4.0..699] */
static void DrawGroupBoxText(
 HWND hwnd,
 HBRUSH hbr,
 HDC hdc,
 WORD alignment
);

/* ButtonView_t::DrawPushable  [function; ce-only; CE 4.0..699] */
static void DrawPushable(
 HDC hdc,
 HBRUSH hbr,
 RECT* lprc,
 UINT state,
 UINT flags
);

/* ButtonView_t::DrawPushStyle  [function; ce-only; CE 4.0..699] */
static void DrawPushStyle(
 HWND hwnd,
 HDC hdc,
 HBRUSH hbr,
 UINT pbfPush,
 UINT state
);

/* ButtonView_t::HitDetect  [function; ce-only; CE 4.0..699] */
static bool HitDetect(
 HWND hwnd,
 POINT pt
);

/* ButtonView_t::InitDC  [function; ce-only; CE 4.0..699] */
static HBRUSH InitDC(
 HWND hwnd,
 HDC hdc
);

/* ButtonView_t::PaintGroupBox  [function; ce-only; CE 4.0..699] */
static void PaintGroupBox(
 HWND hwnd,
 HDC hdc,
 HBRUSH hbr,
 WORD alignment
);

/* ButtonView_t::PaintNonPushStyle  [function; ce-only; CE 4.0..699] */
static void PaintNonPushStyle(
 HWND hwnd,
 HDC hdc,
 HBRUSH hbr
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* enum */
static void DrawText(  HWND hwnd,  HDC hdc,  BOOL dbt,  BOOL fDepress,  UINT pbfPush,  enum ButtonControlRectangleStyle_t bcrs,  WORD alignment  );

/* function */
void DrawCheckBoxandRadioStyle( HWND hwnd, HDC hdc, HBRUSH hbr, WORD alignment );
void DrawGroupBoxText( HWND hwnd, HBRUSH hbr, HDC hdc, WORD alignment );
void DrawPushStyle( HWND hwnd, HDC hdc, HBRUSH hbr, UINT pbfPush, UINT state );
void DrawPushable( HDC hdc, HBRUSH hbr, RECT* lprc, UINT state, UINT flags );
static bool HitDetect(  HWND hwnd,  POINT pt  );
static HBRUSH InitDC(  HWND hwnd,  HDC hdc  );
void PaintGroupBox( HWND hwnd, HDC hdc, HBRUSH hbr, WORD alignment );
void PaintNonPushStyle( HWND hwnd, HDC hdc, HBRUSH hbr );

#endif /* _BUTTONVIEW_HPP_ */
