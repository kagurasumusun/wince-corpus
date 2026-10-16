/* Atlctl.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 0 declarations, 0 outlines, 0 base types, 0 extra macros, 68 extra decls
 */
#ifndef _ATLCTL_
#define _ATLCTL_


/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
CComControlBase( HWND h );
HRESULT DoVerbDiscardUndo( LPCRECT prcPosRect, HWND hwndParent );
HRESULT DoVerbHide( LPCRECT prcPosRect, HWND hwndParent );
HRESULT DoVerbInPlaceActivate( LPCRECT prcPosRect, HWND hwndParent );
HRESULT DoVerbOpen( LPCRECT prcPosRect, HWND hwndParent );
HRESULT DoVerbPrimary( LPCRECT prcPosRect, HWND hwndParent );
HRESULT DoVerbProperties( LPCRECT prcPosRect, HWND hwndParent );
HRESULT DoVerbShow( LPCRECT prcPosRect, HWND hwndParent );
HRESULT DoVerbUIActivate( LPCRECT prcPosRect, HWND hwndParent );
BOOL DoesVerbActivate( LONG iVerb );
BOOL DoesVerbUIActivate( LONG iVerb );
HRESULT EditProperty( DISPID dispID );
HRESULT FireDataChange( );
HRESULT FireOnChanged( DISPID dispID );
HRESULT FireOnRequestEdit( DISPID dispID );
HRESULT FireViewChange( );
HRESULT FreezeEvents( BOOL bFreeze );
HRESULT GetActivationPolicy( DWORD* pdwPolicy );
HRESULT GetAmbientAppearance( short& nAppearance);
HRESULT GetAmbientAutoClip( BOOL& bAutoClip );
HRESULT GetAmbientBackColor( OLE_COLOR& BackColor );
HRESULT GetAmbientDisplayAsDefault( BOOL& bDisplayAsDefault );
HRESULT GetAmbientDisplayName( BSTR& bstrDisplayName );
HRESULT GetAmbientFont( IFont** ppFont );
HRESULT GetAmbientForeColor( OLE_COLOR& ForeColor );
HRESULT GetAmbientLocaleID( LCID& lcid );
HRESULT GetAmbientMessageReflect( BOOL& bMessageReflect );
HRESULT GetAmbientPalette( HPALETTE& hPalette );
HRESULT GetAmbientProperty( DISPID dispid, VARIANT& var );
HRESULT GetAmbientScaleUnits( BSTR& bstrScaleUnits );
HRESULT GetAmbientShowGrabHandles( BOOL& bShowGrabHandles );
HRESULT GetAmbientShowHatching( BOOL& bShowHatching );
HRESULT GetAmbientSupportsMnemonics( BOOL& bSupportsMnemonics );
HRESULT GetAmbientTextAlign( short& nTextAlign );
HRESULT GetAmbientUIDead( BOOL& bUIDead );
HRESULT GetAmbientUserMode( BOOL& bUserMode );
HRESULT GetContentExtent( LPSIZEL pSize );
BOOL GetDirty( );
HRESULT GetDisplayString( DISPID dispID, BSTR* pBstr );
HRESULT GetPredefinedStrings( DISPID dispID, CALPOLESTR* pCaStringsOut, CADWORD* pCaCookiesOut );
HRESULT GetPredefinedValue( DISPID dispID, DWORD dwCookie, VARIANT* pVarOut );
HRESULT GetSite( REFIID riid, void **ppvSite );
void GetZoomInfo( ATL_DRAWINFO& di );
HRESULT HandsOffStorage( );
HRESULT InPlaceDeactivate( HWND* phwnd );
HRESULT MapPropertyToPage( DISPID dispID, CLSID* pClsid );
HRESULT OnAmbientPropertyChange( DISPID dispid );
LRESULT OnGetDlgCode( UINT nMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled );
HRESULT OnInactiveMouseMove( LPCRECT pRectBounds, long x, long y, DWORD dwMouseMsg );
HRESULT OnInactiveSetCursor( LPCRECT pRectBounds, long x, long y, DWORD dwMouseMsg, BOOL fSetAlways);
LRESULT OnKillFocus( UINT nMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled );
HRESULT OnMnemonic( LPMSG pMsg );
LRESULT OnPaint( UINT nMsg, WPARAM wParam, LPARAM lParam, BOOL& lResult );
LRESULT OnSetFocus( UINT nMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled );
HRESULT OnWindowMessage( UINT msg, WPARAM WParam, LPARAM LParam, LRESULT plResultParam );
HRESULT QuickActivate( QACONTAINER *pQACont, QACONTROL *QACtrl );
HRESULT ReactivateAndUndo( );
HRESULT SendOnDataChange( DWORD advf = 0);
HRESULT SendOnViewChange( DWORD dwAspect, LONG lindex = -1 );
HRESULT SetContentExtent( LPSIZEL pSize );
BOOL SetControlFocus( BOOL bGrab );
HRESULT SetObjectRects( LPCRECT prcPos, LPCRECT prcClip );
HRESULT UIDeactivate( );

#endif /* _ATLCTL_ */
