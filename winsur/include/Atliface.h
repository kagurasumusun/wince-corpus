/* Atliface.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 5 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _ATLIFACE_
#define _ATLIFACE_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 212 && _WIN32_WCE < 400)) /* CE 2.12..399 */

/* AtlAxAttachControl  [function; ce-only; CE 2.12..399] */
ATLAPI AtlAxAttachControl( IUnknown* pControl, HWND hWnd );

/* AtlAxCreateControl  [function; ce-only; CE 2.12..399] */
ATLAPI AtlAxCreateControl( LPCOLESTR lpszName, HWND hWnd, 
IStream* pStream, IUnknown** ppUnkContainer );

/* AtlAxCreateControlEx  [function; ce-only; CE 2.12..399] */
ATLAPI AtlAxCreateControlEx(LPCOLESTR lpszName, HWND hWnd, 
IStream* pStream, IUnknown** ppUnkContainer, IUnknown** ppUnkControl, 
REFIID iidSink=IID_NULL, IUnknown* punkSink=NULL);

/* AtlAxGetControl  [function; ce-only; CE 2.12..399] */
ATLAPI AtlAxGetControl( HWND h, IUnknown** pp );

/* AtlAxGetHost  [function; ce-only; CE 2.12..399] */
ATLAPI AtlAxGetHost( HWND h, IUnknown** pp );
#endif /* _WIN32_WCE */

#endif /* _ATLIFACE_ */
