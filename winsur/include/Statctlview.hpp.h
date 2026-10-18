/* Statctlview.hpp -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 1 declarations, 3 outlines, 0 base types, 0 extra macros, 5 extra decls
 */
#ifndef _STATCTLVIEW_HPP_
#define _STATCTLVIEW_HPP_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* StaticControlView_t::DrawStaticImage  [enum; ce-only] */

/* StaticControlView_t::DrawStaticText  [enum; ce-only] */

/* StaticControlView_t::ResizeRectToImage  [enum; ce-only] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* StaticControlType  [enum; ce-only] */
#ifndef __WINCE_DEFINED_STATICCONTROLTYPE
#define __WINCE_DEFINED_STATICCONTROLTYPE
enum StaticControlType {
 sctLeft = SS_LEFT,
 sctCenter = SS_CENTER,
 sctRight = SS_RIGHT,
 sctIcon = SS_ICON,
 sctLeftNoWordWrap = SS_LEFTNOWORDWRAP,
 sctBitmap = SS_BITMAP,
 sctIconCenter = SS_ICON,
 sctBitmapCenter = SS_BITMAP
};
#endif /* __WINCE_DEFINED_STATICCONTROLTYPE */

/* hImage  [extra enum] */
#ifndef __WINCE_DEFINED_HIMAGE
#define __WINCE_DEFINED_HIMAGE
static void DrawStaticImage(HWND hwnd, enum StaticControlType sct, HDC hdc, HBRUSH hbrBk, HANDLE hImage);
#endif /* __WINCE_DEFINED_HIMAGE */

/* hbrBk  [extra enum] */
#ifndef __WINCE_DEFINED_HBRBK
#define __WINCE_DEFINED_HBRBK
static void DrawStaticText(HWND hwnd, unsigned int Style, enum StaticControlType sct, HDC hdc, HBRUSH hbrBk);
#endif /* __WINCE_DEFINED_HBRBK */

/* prc  [extra enum] */
#ifndef __WINCE_DEFINED_PRC
#define __WINCE_DEFINED_PRC
static bool ResizeRectToImage(HWND hwnd, unsigned int Style, enum StaticControlType sct, HANDLE hImage, RECT* prc);
#endif /* __WINCE_DEFINED_PRC */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
/* CONFLICTING PROTOTYPE -- kept the first DrawStaticImage() form; another page prints: void DrawStaticImage(HWND hwnd, enum StaticControlType sct, HDC hdc, HBRUSH hbrBk, HANDLE hImage); */
/* CONFLICTING PROTOTYPE -- kept the first DrawStaticText() form; another page prints: void DrawStaticText(HWND hwnd, unsigned int Style, enum StaticControlType sct, HDC hdc, HBRUSH hbrBk); */

#endif /* _STATCTLVIEW_HPP_ */
