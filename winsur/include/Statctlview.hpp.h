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
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* enum */
static void DrawStaticImage(  HWND hwnd,  enum StaticControlType sct,  HDC hdc,  HBRUSH hbrBk,  HANDLE hImage  );
static void DrawStaticText(  HWND hwnd,  unsigned int Style,  enum StaticControlType sct,  HDC hdc,  HBRUSH hbrBk  );
static bool ResizeRectToImage(  HWND hwnd,  unsigned int Style,  enum StaticControlType sct,  HANDLE hImage,  RECT* prc  );

/* function */
void DrawStaticImage( HWND hwnd, enum StaticControlType sct, HDC hdc, HBRUSH hbrBk, HANDLE hImage );
void DrawStaticText( HWND hwnd, unsigned int Style, enum StaticControlType sct, HDC hdc, HBRUSH hbrBk );

#endif /* _STATCTLVIEW_HPP_ */
