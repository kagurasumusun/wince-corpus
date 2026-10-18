/* Nclientview.hpp -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 2 declarations, 1 outlines, 0 base types, 0 extra macros, 14 extra decls
 */
#ifndef _NCLIENTVIEW_HPP_
#define _NCLIENTVIEW_HPP_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* NonClientView_t::WidgetRect  [enum; ce-only] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* NcHitTestCode  [typedef; ce-only] */
#ifndef __WINCE_DEFINED_NCHITTESTCODE
#define __WINCE_DEFINED_NCHITTESTCODE
typedef int NcHitTestCode;
#endif /* __WINCE_DEFINED_NCHITTESTCODE */

/* WidgetId  [enum; ce-only] */
#ifndef __WINCE_DEFINED_WIDGETID
#define __WINCE_DEFINED_WIDGETID
enum WidgetId{
 widInvalid = -1,
 widClose,
 widMaxRestore,
 widMin,
 widOk,
 widHelp
};
#endif /* __WINCE_DEFINED_WIDGETID */

/* bTopLevelWindow  [extra enum] */
#ifndef __WINCE_DEFINED_BTOPLEVELWINDOW
#define __WINCE_DEFINED_BTOPLEVELWINDOW
static RECT WidgetRect(HWND hwnd, enum WidgetId wid, bool bTopLevelWindow);
#endif /* __WINCE_DEFINED_BTOPLEVELWINDOW */

/* widHelp  [extra enum] */
#ifndef __WINCE_DEFINED_WIDGETID
#define __WINCE_DEFINED_WIDGETID
#ifndef __WINCE_DEFINED_WIDHELP
#define __WINCE_DEFINED_WIDHELP
enum WidgetId{
 widInvalid = -1,
 widClose,
 widMaxRestore,
 widMin,
 widOk,
 widHelp
};
#endif /* __WINCE_DEFINED_WIDHELP */
#endif /* __WINCE_DEFINED_WIDGETID */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
void BoundPoint(RECT* prcBound, POINT* ppt);
static RECT BoundingRect(HWND hwnd);
BOOL CalcCaptionRect(HWND hwnd, RECT* lprc);
void CalcClientRectWithHorzScrollBars(RECT* lprc);
void CalcClientRectWithNoScrollBars(HWND hwnd, RECT* lprc, DWORD dwStyle, DWORD dwExStyle);
void CalcClientRectWithVertScrollBars(RECT* lprc, DWORD dwExStyle);
static bool DoesHorzScrollBarFit(RECT* lprc);
static bool DoesVertScrollBarFit(RECT* lprc);
BOOL DrawBorder(HWND hwnd, HDC hdc, LPCRECT lprc);
BOOL ExposedDrawFrameControl(HDC hdc, RECT* prc, UINT wType, UINT wState);

#endif /* _NCLIENTVIEW_HPP_ */
