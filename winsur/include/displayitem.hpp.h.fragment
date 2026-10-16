/* displayitem.hpp -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 7 declarations, 0 outlines, 0 base types, 0 extra macros, 5 extra decls
 */
#ifndef _DISPLAYITEM_HPP_
#define _DISPLAYITEM_HPP_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* IVoIPDisplayItem::Draw  [function; ce-only; CE 6.0..699; PhCommon.dll] */
HRESULT Draw(
 HDC hdc, 
 RECT* pRectangle, 
 BOOL IsSelected, 
 BOOL IsTopItem = FALSE 
);

/* IVoIPDisplayItem::GetHeight  [function; ce-only; CE 6.0..699; PhCommon.dll] */
BOOL GetHeight(
 UINT* pHeight
);

/* IVoIPDisplayItem::GetSubItemText  [function; ce-only; CE 6.0..699; PhCommon.dll] */
HRESULT GetSubItemText(
 int Index, 
 WCHAR* pBuffer, 
 UINT cchBuffer 
);

/* IVoIPDisplayItem::GetText  [function; ce-only; CE 6.0..699; PhCommon.dll] */
HRESULT GetText(
 WCHAR* pBuffer, 
 int cchBuffer 
);

/* IVoIPDisplayItem::IsSelectable  [function; ce-only; CE 6.0..699; PhCommon.dll] */
BOOL IsSelectable( void );

/* IVoIPDisplayItem::NeedsToolTip  [function; ce-only; CE 6.0..699; PhCommon.dll] */
BOOL NeedsToolTip(
 RECT* pRectangle
);

/* IVoIPDisplayItem::SetText  [function; ce-only; CE 6.0..699; PhCommon.dll] */
HRESULT SetText(
 WCHAR* pText
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
BOOL GetHeight( UINT* pHeight );
HRESULT GetSubItemText( int Index, WCHAR* pBuffer, UINT cchBuffer );
BOOL IsSelectable( void );
BOOL NeedsToolTip( RECT* pRectangle );
HRESULT SetText( WCHAR* pText );

#endif /* _DISPLAYITEM_HPP_ */
