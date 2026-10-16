/* Nclientview.hpp -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 1 constants, 16 declarations, 0 outlines, 0 base types, 0 extra macros, 14 extra decls
 */
#ifndef _NCLIENTVIEW_HPP_
#define _NCLIENTVIEW_HPP_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define widInvalid -1

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* WidgetId  [enum; ce-only; CE 4.0..699] */
enum WidgetId{
 widInvalid = -1,
 widClose,
 widMaxRestore,
 widMin,
 widOk,
 widHelp
};
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* NcHitTestCode  [typedef; ce-only; CE 5.0..699] */
typedef int NcHitTestCode;

/* NonClientView_t::WidgetRect  [enum; ce-only; CE 5.0..699] */
static RECT WidgetRect(
 HWND hwnd,
 enum WidgetId wid,
 bool bTopLevelWindow
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* NonClientView_t::BoundingRect  [function; ce-only; CE 5.0..699] */
static RECT BoundingRect(
 HWND hwnd
);

/* NonClientView_t::BoundPoint  [function; ce-only; CE 5.0..699] */
static void BoundPoint(
 RECT* prcBound,
 POINT* ppt
);

/* NonClientView_t::CalcCaptionRect  [function; ce-only; CE 5.0..699] */
static BOOL CalcCaptionRect(
 HWND hwnd,
 RECT* lprc
);

/* NonClientView_t::CalcClientRectWithHorzScrollBars  [function; ce-only; CE 5.0..699] */
static void CalcClientRectWithHorzScrollBars(
 RECT* lprc
);

/* NonClientView_t::CalcClientRectWithNoScrollBars  [function; ce-only; CE 5.0..699] */
static void CalcClientRectWithNoScrollBars(
 HWND hwnd,
 RECT* lprc,
 DWORD dwStyle,
 DWORD dwExStyle
);

/* NonClientView_t::CalcClientRectWithVertScrollBars  [function; ce-only; CE 5.0..699] */
static void CalcClientRectWithVertScrollBars(
 RECT* lprc,
 DWORD dwExStyle
);

/* NonClientView_t::DoesHorzScrollBarFit  [function; ce-only; CE 5.0..699] */
static bool DoesHorzScrollBarFit(
 RECT* lprc
);

/* NonClientView_t::DoesVertScrollBarFit  [function; ce-only; CE 5.0..699] */
static bool DoesVertScrollBarFit(
 RECT* lprc
);

/* NonClientView_t::DoHitTest  [function; ce-only; CE 5.0..699] */
static NcHitTestCode DoHitTest(
 HWND hwnd,
 POINT pt,
 UINT32 WindowState,
 bool bTopLevelWindow
);

/* NonClientView_t::DoPaint  [function; ce-only; CE 5.0..699] */
static BOOL DoPaint(
 HWND hwnd,
 HRGN hrgn,
 UINT32 WindowState,
 bool bTopLevelWindow,
 bool bIsRestorable
);

/* NonClientView_t::DrawBorder  [function; ce-only; CE 5.0..699] */
static BOOL DrawBorder(
 HWND hwnd,
 HDC hdc,
 LPCRECT lprc
);

/* NonClientView_t::DrawFrameControl  [function; ce-only; CE 5.0..699] */
static BOOL DrawFrameControl(
 HDC hdc,
 RECT* lprc,
 UINT wType,
 UINT wState
);

/* NonClientView_t::ExposedDrawFrameControl  [function; ce-only; CE 5.0..699] */
static BOOL ExposedDrawFrameControl(
 HDC hdc,
 RECT* prc,
 UINT wType,
 UINT wState
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* enum */
static RECT WidgetRect(  HWND hwnd,  enum WidgetId wid,  bool bTopLevelWindow  );
enum WidgetId{widInvalid = -1,widClose,widMaxRestore,widMin,widOk,widHelp};

/* function */
void BoundPoint( RECT* prcBound, POINT* ppt );
static RECT BoundingRect(  HWND hwnd  );
BOOL CalcCaptionRect( HWND hwnd, RECT* lprc );
void CalcClientRectWithHorzScrollBars( RECT* lprc );
void CalcClientRectWithNoScrollBars( HWND hwnd, RECT* lprc, DWORD dwStyle, DWORD dwExStyle );
void CalcClientRectWithVertScrollBars( RECT* lprc, DWORD dwExStyle );
static NcHitTestCode DoHitTest(  HWND hwnd,  POINT pt,  UINT32 WindowState,  bool bTopLevelWindow  );
BOOL DoPaint( HWND hwnd, HRGN hrgn, UINT32 WindowState, bool bTopLevelWindow, bool bIsRestorable );
static bool DoesHorzScrollBarFit(  RECT* lprc  );
static bool DoesVertScrollBarFit(  RECT* lprc  );
BOOL DrawBorder( HWND hwnd, HDC hdc, LPCRECT lprc );
BOOL ExposedDrawFrameControl( HDC hdc, RECT* prc, UINT wType, UINT wState );

#endif /* _NCLIENTVIEW_HPP_ */
