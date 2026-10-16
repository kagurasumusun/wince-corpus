/* webvw.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 0 declarations, 0 outlines, 0 base types, 0 extra macros, 60 extra decls
 */
#ifndef _WEBVW_
#define _WEBVW_


/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
void BeforeNavigate2( IDispatch* pdisp, VARIANT* pvtURL, VARIANT* pvtFlags, VARIANT* pvtTargetFrameName, VARIANT* pvtPostData, VARIANT* pvtHeaders, VARIANT_BOOL* pvbCancel);
void CommandStateChange( long lCommand, VARIANT_BOOL vbEnable);
void DocumentComplete ( IDispatch* pdisp, VARIANT* pvtURL);
void DownloadBegin(void);
void DownloadComplete(void);
void NavigateComplete2( IDispatch* pdisp, VARIANT vtURL);
void NewWindow2( IDispatch** ppdisp, VARIANT_BOOL* pvbCancel);
void OnFullScreen( VARIANT_BOOL vbFullScreen);
void OnMenuBar( VARIANT_BOOL vbMenuBar);
void OnProgressChange( long lProgress, long lProgressMax);
void OnQuit(void);
void OnTheaterMode( VARIANT_BOOL vbOnTheaterMode);
void OnToolBar( VARIANT_BOOL vbOnToolBar);
void OnVisible(void);
void PropertyChange( BSTR bstrProperty);
void StatusTextChange( BSTR bstrText);
void TitleChange( BSTR bstrTitle);
HRESULT get_ActiveXEnabled( VARIANT_BOOL* pvbActiveXEnabled);
HRESULT get_Busy(BOOL* pVal);
HRESULT get_CBrowserPointer( long* pVal);
HRESULT get_CanCopy( VARIANT_BOOL* pvbCanCopy);
HRESULT get_ClearTypeEnabled( VARIANT_BOOL* pbClearTypeEnabled);
HRESULT get_ContextMenuEnabled( VARIANT_BOOL* pvbContextMenu);
HRESULT get_FitToWindow( VARIANT_BOOL* pbFitToWindow);
HRESULT get_FocusRectEnabled( VARIANT_BOOL* pvbFocusRectEnabled);
HRESULT get_IntegralPaging( VARIANT_BOOL* pvbIntegralPaging);
HRESULT get_IsFrame( VARIANT_BOOL* pvbIsFrame);
HRESULT get_LayoutHeight( int* piLayoutHeight);
HRESULT get_LayoutWidth( int* piLayoutWidth);
HRESULT get_LocationBaseURL( BSTR* bstrBaseLocationURL);
HRESULT get_MarginHeight( long* pVal);
HRESULT get_MarginWidth( long* pVal);
HRESULT get_PlaySounds( VARIANT_BOOL* pbPlaySounds);
HRESULT get_ScriptingEnabled( VARIANT_BOOL* pbScriptingEnabled);
HRESULT get_ScrollStyle ( long* pVal);
HRESULT get_SelectedCodepage( long* pVal);
HRESULT get_SelectionEnabled( VARIANT_BOOL* pvbSelectionEnabled);
HRESULT get_ShowImages( VARIANT_BOOL* pbShowImages);
HRESULT get_SuperFitToWindow( VARIANT_BOOL* pbSuperFitToWindow);
HRESULT get_ZoomLevel( DWORD* pdwZoomLevel);
HRESULT get_document( IDispatch** ppDisp);
HRESULT get_script( IDispatch** ppDisp);
HRESULT put_ActiveXEnabled( VARIANT_BOOL vbActiveXEnabled);
HRESULT put_ClearTypeEnabled( VARIANT_BOOL bClearTypeEnabled);
HRESULT put_ContextMenuEnabled( VARIANT_BOOL vbContextMenu);
HRESULT put_FitToWindow( VARIANT_BOOL bFitToWindow);
HRESULT put_FocusRectEnabled( VARIANT_BOOL bFocusRectEnabled);
HRESULT put_IntegralPaging( VARIANT_BOOL vbIntegralPaging);
HRESULT put_IsFrame( VARIANT_BOOL vbIsFrame);
HRESULT put_LocationBaseURL( BSTR bstrBaseLocationURL);
HRESULT put_MarginHeight( long newVal);
HRESULT put_MarginWidth( long newVal);
HRESULT put_PlaySounds( VARIANT_BOOL bPlaySounds);
HRESULT put_ScriptingEnabled( VARIANT_BOOL bScriptingEnabled);
HRESULT put_ScrollStyle ( long newVal);
HRESULT put_SelectedCodepage( long newVal);
HRESULT put_SelectionEnabled( VARIANT_BOOL vbSelectionEnabled);
HRESULT put_ShowImages( VARIANT_BOOL bShowImages);
HRESULT put_SuperFitToWindow( VARIANT_BOOL bSuperFitToWindow);
HRESULT put_ZoomLevel( DWORD dwZoomLevel);

#endif /* _WEBVW_ */
