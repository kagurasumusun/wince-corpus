/* Scrollview.hpp -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 7 declarations, 0 outlines, 0 base types, 0 extra macros, 7 extra decls
 */
#ifndef _SCROLLVIEW_HPP_
#define _SCROLLVIEW_HPP_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* SCROLL_STATE  [enum; ce-only; CE 4.0..699] */
enum SCROLL_STATE {
 SCROLL_NO_PRESS,
 SCROLL_UP_PRESS,
 SCROLL_DN_PRESS,
 SCROLL_PGUP_PRESS,
 SCROLL_PGDN_PRESS,
 SCROLL_SLIDE_PRESS,
 SCROLL_UNAVAIL,
 SCROLL_NEXT_FREE
};

/* ScrollBarInfoInternal  [struct; ce-only; CE 4.0..699] */
struct ScrollBarInfoInternal {
 SCROLLINFO si;
 BOOL bInSetSBInfo;
 int nThumbPos;
 SCROLL_STATE dwState;
 UINT nTrackStart;
 UINT fnBar;
 UINT idTimer;
};
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* ScrollBarView_t::DrawScrollBar  [function; ce-only; CE 4.0..699] */
static void DrawScrollBar(
 HDC hdc,
 HWND hwnd,
 BOOL fVert,
 SCROLL_STATE State,
 UINT32 WindowState,
 UINT32 WindowStyle,
 ScrollBarInfoInternal* psbii
);

/* ScrollBarView_t::GetScrollRects  [function; ce-only; CE 4.0..699] */
static int GetScrollRects(
 HWND hwnd,
 RECT* prcBounds,
 RECT* prcUp,
 RECT* prcDn,
 RECT* prcThumb,
 BOOL fVert,
 ScrollBarInfoInternal* psbii
);

/* ScrollBarView_t::GetThumbPixel  [function; ce-only; CE 4.0..699] */
static LONG GetThumbPixel(
 HWND hwnd,
 BOOL fVert,
 ScrollBarInfoInternal* psbii
);

/* ScrollBarView_t::ScrollHitTest  [function; ce-only; CE 4.0..699] */
static SCROLL_STATE ScrollHitTest(
 HWND hwnd,
 POINT pt,
 BOOL fVert,
 ScrollBarInfoInternal* psbii
);

/* ScrollBarView_t::TrackThumb  [function; ce-only; CE 4.0..699] */
static void TrackThumb(
 HWND hwnd,
 HDC hdc,
 POINT pt,
 BOOL fVert,
 ScrollBarInfoInternal* psbii
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* enum */
enum SCROLL_STATE {SCROLL_NO_PRESS, SCROLL_UP_PRESS, SCROLL_DN_PRESS, SCROLL_PGUP_PRESS, SCROLL_PGDN_PRESS, SCROLL_SLIDE_PRESS, SCROLL_UNAVAIL, SCROLL_NEXT_FREE};

/* struct */
struct ScrollBarInfoInternal {SCROLLINFO si;BOOL bInSetSBInfo;int nThumbPos;SCROLL_STATEdwState;UINT nTrackStart;UINT fnBar;UINT idTimer;};

/* function */
void DrawScrollBar( HDC hdc, HWND hwnd, BOOL fVert, SCROLL_STATE State, UINT32 WindowState, UINT32 WindowStyle, ScrollBarInfoInternal* psbii );
int GetScrollRects( HWND hwnd, RECT* prcBounds, RECT* prcUp, RECT* prcDn, RECT* prcThumb, BOOL fVert, ScrollBarInfoInternal* psbii );
LONG GetThumbPixel( HWND hwnd, BOOL fVert, ScrollBarInfoInternal* psbii );
static SCROLL_STATE ScrollHitTest(  HWND hwnd,  POINT pt,  BOOL fVert,  ScrollBarInfoInternal* psbii  );
void TrackThumb( HWND hwnd, HDC hdc, POINT pt, BOOL fVert, ScrollBarInfoInternal* psbii );

#endif /* _SCROLLVIEW_HPP_ */
