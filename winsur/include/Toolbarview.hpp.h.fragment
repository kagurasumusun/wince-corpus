/* Toolbarview.hpp -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 7 declarations, 0 outlines, 0 base types, 0 extra macros, 6 extra decls
 */
#ifndef _TOOLBARVIEW_HPP_
#define _TOOLBARVIEW_HPP_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* BitmapType  [enum; ce-only; CE 4.0..699] */
enum BitmapType {
 btStdSmallColor,
 btStdSmallMono,
 btViewSmallColor,
 btViewSmallMono,
 btClose,
 btOk
};

/* ToolBarView_t::LoadSystemBitmap  [enum; ce-only; CE 4.0..699] */
static HBITMAP LoadSystemBitmap(
 enum BitmapType bt
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* ToolBarView_t::CalcOffset  [function; ce-only; CE 4.0..699] */
static void CalcOffset(
 int* pxOffset,
 int* pyOffset
);

/* ToolBarView_t::DrawButtonBorder  [function; ce-only; CE 4.0..699] */
static void DrawButtonBorder(
 HDC hdc,
 RECT* prc,
 bool bPushed,
 DWORD style
);

/* ToolBarView_t::DrawDropdownArrow  [function; ce-only; CE 4.0..699] */
static void DrawDropdownArrow(
 HDC hdc,
 int x,
 int y,
 int dx,
 int dy,
 int cxEdge,
 int cyEdge,
 int cyBorder,
 COLORREF clrBtnFace,
 int cxDropdownArrow,
 int yOffset
);

/* ToolBarView_t::FaceRect  [function; ce-only; CE 4.0..699] */
static void FaceRect(
 RECT* prcButton,
 int cxEdge,
 int cyEdge
);

/* ToolBarView_t::InitializeButtonSlopValue  [function; ce-only; CE 4.0..699] */
static void InitializeButtonSlopValue(
 int* pxSlop,
 int* pySlop
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* enum */
static HBITMAP LoadSystemBitmap(enum BitmapTypebt);
static HBITMAP LoadSystemBitmap(  enum BitmapType bt  );
enum BitmapType {btStdSmallColor,btStdSmallMono,btViewSmallColor,btViewSmallMono,btClose,btOk};

/* function */
void DrawDropdownArrow( HDC hdc, int x, int y, int dx, int dy, int cxEdge, int cyEdge, int cyBorder, COLORREF clrBtnFace, int cxDropdownArrow, int yOffset );
void FaceRect( RECT* prcButton, int cxEdge, int cyEdge );
void InitializeButtonSlopValue( int* pxSlop, int* pySlop );

#endif /* _TOOLBARVIEW_HPP_ */
