/* Afxctl.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 168 declarations, 0 outlines, 0 base types, 0 extra macros, 132 extra decls
 */
#ifndef _AFXCTL_
#define _AFXCTL_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 200 && _WIN32_WCE < 210)) /* CE 2.0..209 */

/* CFontHolder::GetDisplayString  [function; ce-only; CE 2.0..209] */
BOOL GetDisplayString( CString& strValue );

/* CFontHolder::GetFontDispatch  [function; ce-only; CE 2.0..209] */
LPFONTDISP GetFontDispatch( );

/* CFontHolder::GetFontHandle  [function; ce-only; CE 2.0..209] */
HFONT GetFontHandle( );

/* CFontHolder::InitializeFont  [function; ce-only; CE 2.0..209] */
void InitializeFont( const FONTDESC FAR* pFontDesc = NULL, LPDISPATCH pFontDispAmbient = NULL );

/* CFontHolder::ReleaseFont  [function; ce-only; CE 2.0..209] */
void ReleaseFont( );

/* CFontHolder::SetFont  [function; ce-only; CE 2.0..209] */
void SetFont( LPFONT pNewFont );

/* COleControl::AmbientBackColor  [function; ce-only; CE 2.0..209] */
OLE_COLOR AmbientBackColor( );

/* COleControl::AmbientDisplayName  [function; ce-only; CE 2.0..209] */
CString AmbientDisplayName( );

/* COleControl::AmbientFont  [function; ce-only; CE 2.0..209] */
LPFONTDISP AmbientFont( );

/* COleControl::AmbientForeColor  [function; ce-only; CE 2.0..209] */
OLE_COLOR AmbientForeColor( );

/* COleControl::AmbientScaleUnits  [function; ce-only; CE 2.0..209] */
CString AmbientScaleUnits( );

/* COleControl::AmbientShowGrabHandles  [function; ce-only; CE 2.0..209] */
BOOL AmbientShowGrabHandles( );

/* COleControl::AmbientShowHatching  [function; ce-only; CE 2.0..209] */
BOOL AmbientShowHatching( );

/* COleControl::AmbientTextAlign  [function; ce-only; CE 2.0..209] */
short AmbientTextAlign( );

/* COleControl::AmbientUIDead  [function; ce-only; CE 2.0..209] */
BOOL AmbientUIDead( );

/* COleControl::AmbientUserMode  [function; ce-only; CE 2.0..209] */
BOOL AmbientUserMode( );

/* COleControl::BoundPropertyChanged  [function; ce-only; CE 2.0..209] */
void BoundPropertyChanged( DISPID dispid );

/* COleControl::BoundPropertyRequestEdit  [function; ce-only; CE 2.0..209] */
BOOL BoundPropertyRequestEdit( DISPID dispid )

/* COleControl::ClientToParent  [function; ce-only; CE 2.0..209] */
virtual void ClientToParent( LPCRECT lprcBounds, LPPOINT pPoint ) const;

/* COleControl::ClipCaretRect  [function; ce-only; CE 2.0..209] */
BOOL ClipCaretRect( LPRECT lpRect );

/* COleControl::ControlInfoChanged  [function; ce-only; CE 2.0..209] */
void ControlInfoChanged( );

/* COleControl::DisplayError  [function; ce-only; CE 2.0..209] */
virtual void DisplayError( SCODE scode, LPCTSTR lpszDescription, LPCTSTR lpszSource, LPCTSTR lpszHelpFile, UINT nHelpID );

/* COleControl::DoClick  [function; ce-only; CE 2.0..209] */
void DoClick( );

/* COleControl::DoPropExchange  [function; ce-only; CE 2.0..209] */
virtual void DoPropExchange( CPropExchange* pPX );

/* COleControl::DoSuperClassPaint  [function; ce-only; CE 2.0..209] */
void DoSuperclassPaint( CDC* pDC, const CRect& rcBounds );

/* COleControl::DrawContent  [function; ce-only; CE 2.0..209] */
void DrawContent( CDC* pDC, CRect& rc );

/* COleControl::EnableSimpleFrame  [function; ce-only; CE 2.0..209] */
void EnableSimpleFrame( );

/* COleControl::ExchangeExtent  [function; ce-only; CE 2.0..209] */
BOOL ExchangeExtent( CPropExchange* pPX );

/* COleControl::ExchangeStockProps  [function; ce-only; CE 2.0..209] */
void ExchangeStockProps( CPropExchange* pPX );

/* COleControl::ExchangeVersion  [function; ce-only; CE 2.0..209] */
BOOL ExchangeVersion( CPropExchange* pPX, DWORD dwVersionDefault, BOOL bConvert = TRUE );

/* COleControl::FireClick  [function; ce-only; CE 2.0..209] */
void FireClick( );

/* COleControl::FireDblClick  [function; ce-only; CE 2.0..209] */
void FireDblClick( );

/* COleControl::FireError  [function; ce-only; CE 2.0..209] */
void FireError( SCODE scode, LPCTSTR lpszDescription, UINT nHelpID = 0 );

/* COleControl::FireEvent  [function; ce-only; CE 2.0..209] */
void FireEvent( DISPID dispid, BYTE FAR* pbParams, ... );

/* COleControl::FireKeyDown  [function; ce-only; CE 2.0..209] */
void FireKeyDown( USHORT* pnChar, short nShiftState );

/* COleControl::FireKeyPress  [function; ce-only; CE 2.0..209] */
void FireKeyPress( USHORT* pnChar );

/* COleControl::FireKeyUp  [function; ce-only; CE 2.0..209] */
void FireKeyUp( USHORT* pnChar, short nShiftState );

/* COleControl::FireMouseDown  [function; ce-only; CE 2.0..209] */
void FireMouseDown( short nButton, short nShiftState, OLE_XPOS_PIXELS x, OLE_YPOS_PIXEL y );

/* COleControl::FireMouseMove  [function; ce-only; CE 2.0..209] */
void FireMouseMove( short nButton, short nShiftState, OLE_XPOS_PIXELS x, OLE_YPOS_PIXELS y );

/* COleControl::FireMouseUp  [function; ce-only; CE 2.0..209] */
void FireMouseUp( short nButton, short nShiftState, OLE_XPOS_PIXELS x, OLE_YPOS_PIXELS y );

/* COleControl::FireReadyStateChange  [function; ce-only; CE 2.0..209] */
void FireReadyStateChange( );

/* COleControl::GetActivationPolicy  [function; ce-only; CE 2.0..209] */
virtual DWORD GetActivationPolicy( );

/* COleControl::GetAmbientProperty  [function; ce-only; CE 2.0..209] */
BOOL GetAmbientProperty( DISPID dwDispid, VARTYPE vtProp, void* pvProp );

/* COleControl::GetAppearance  [function; ce-only; CE 2.0..209] */
short GetAppearance ( );

/* COleControl::GetBackColor  [function; ce-only; CE 2.0..209] */
OLE_COLOR GetBackColor( );

/* COleControl::GetBorderStyle  [function; ce-only; CE 2.0..209] */
short GetBorderStyle( );

/* COleControl::GetClassID  [function; ce-only; CE 2.0..209] */
virtual HRESULT GetClassID( LPCLSID pclsid ) = 0;

/* COleControl::GetClientOffset  [function; ce-only; CE 2.0..209] */
virtual void GetClientOffset( long* pdxOffset, long* pdyOffset ) const;

/* COleControl::GetClientRect  [function; ce-only; CE 2.0..209] */
virtual void GetClientRect( LPRECT lpRect ) const;

/* COleControl::GetClientSite  [function; ce-only; CE 2.0..209] */
LPOLECLIENTSITE GetClientSite( );

/* COleControl::GetControlFlags  [function; ce-only; CE 2.0..209] */
virtual DWORD GetControlFlags( );

/* COleControl::GetControlSize  [function; ce-only; CE 2.0..209] */
void GetControlSize( int* pcx, int* pcy );

/* COleControl::GetDC  [function; ce-only; CE 2.0..209] */
CDC* GetDC( LPCRECT lprcRect = NULL, DWORD dwFlags = OLEDC_PAINTBKGND );

/* COleControl::GetEnabled  [function; ce-only; CE 2.0..209] */
BOOL GetEnabled( );

/* COleControl::GetExtendedControl  [function; ce-only; CE 2.0..209] */
LPDISPATCH GetExtendedControl( );

/* COleControl::GetFont  [function; ce-only; CE 2.0..209] */
LPFONTDISP GetFont( );

/* COleControl::GetFontTextMetrics  [function; ce-only; CE 2.0..209] */
void GetFontTextMetrics( LPTEXTMETRIC lptm, CFontHolder& fontHolder );

/* COleControl::GetForeColor  [function; ce-only; CE 2.0..209] */
OLE_COLOR GetForeColor( );

/* COleControl::GetHwnd  [function; ce-only; CE 2.0..209] */
OLE_HANDLE GetHwnd( );

/* COleControl::GetMessageString  [function; ce-only; CE 2.0..209] */
virtual void GetMessageString( UINT nID, CString& rMessage ) const;

/* COleControl::GetNotSupported  [function; ce-only; CE 2.0..209] */
void GetNotSupported( );

/* COleControl::GetReadyState  [function; ce-only; CE 2.0..209] */
long GetReadyState( );

/* COleControl::GetRectInContainer  [function; ce-only; CE 2.0..209] */
BOOL GetRectInContainer( LPRECT lpRect );

/* COleControl::GetStockTextMetrics  [function; ce-only; CE 2.0..209] */
void GetStockTextMetrics( LPTEXTMETRIC lptm );

/* COleControl::GetText  [function; ce-only; CE 2.0..209] */
BSTR GetText( );

/* COleControl::InitializeIIDs  [function; ce-only; CE 2.0..209] */
void InitializeIIDs( const IID* piidPrimary, const IID* piidEvents );

/* COleControl::InternalSetReadyState  [function; ce-only; CE 2.0..209] */
void InternalSetReadyState( long lNewReadyState );

/* COleControl::InvalidateControl  [function; ce-only; CE 2.0..209] */
void InvalidateControl( LPCRECT lpRect = NULL );

/* COleControl::InvalidateRgn  [function; ce-only; CE 2.0..209] */
void InvalidateRgn( CRgn* pRgn, BOOL bErase = TRUE );

/* COleControl::IsConvertingVBX  [function; ce-only; CE 2.0..209] */
BOOL IsConvertingVBX( );

/* COleControl::IsModified  [function; ce-only; CE 2.0..209] */
BOOL IsModified( );

/* COleControl::IsOptimizedDraw  [function; ce-only; CE 2.0..209] */
BOOL IsOptimizedDraw( );

/* COleControl::IsSubclassedControl  [function; ce-only; CE 2.0..209] */
virtual BOOL IsSubclassedControl( );

/* COleControl::LockInPlaceActive  [function; ce-only; CE 2.0..209] */
BOOL LockInPlaceActive( BOOL bLock );

/* COleControl::OnAmbientPropertyChange  [function; ce-only; CE 2.0..209] */
virtual void OnAmbientPropertyChange( DISPID dispID );

/* COleControl::OnAppearanceChanged  [function; ce-only; CE 2.0..209] */
virtual void OnAppearanceChanged ( );

/* COleControl::OnBackColorChanged  [function; ce-only; CE 2.0..209] */
virtual void OnBackColorChanged( );

/* COleControl::OnBorderStyleChanged  [function; ce-only; CE 2.0..209] */
virtual void OnBorderStyleChanged( );

/* COleControl::OnClick  [function; ce-only; CE 2.0..209] */
virtual void OnClick( USHORT iButton );

/* COleControl::OnClose  [function; ce-only; CE 2.0..209] */
virtual void OnClose( DWORD dwSaveOption );

/* COleControl::OnDoVerb  [function; ce-only; CE 2.0..209] */
virtual BOOL OnDoVerb( LONG iVerb, LPMSG lpMsg, HWND hWndParent, LPCRECT lpRect );

/* COleControl::OnDraw  [function; ce-only; CE 2.0..209] */
virtual void OnDraw( CDC* pDC, const CRect& rcBounds, const CRect& rcInvalid );

/* COleControl::OnEnabledChange  [function; ce-only; CE 2.0..209] */
virtual void OnEnabledChanged( );

/* COleControl::OnEnumVerbs  [function; ce-only; CE 2.0..209] */
virtual BOOL OnEnumVerbs( LPENUMOLEVERB FAR* ppenumOleVerb );

/* COleControl::OnEventAdvise  [function; ce-only; CE 2.0..209] */
virtual void OnEventAdvise( BOOL bAdvise );

/* COleControl::OnFontChanged  [function; ce-only; CE 2.0..209] */
virtual void OnFontChanged( );

/* COleControl::OnForeColorChanged  [function; ce-only; CE 2.0..209] */
virtual void OnForeColorChanged( );

/* COleControl::OnFreezeEvents  [function; ce-only; CE 2.0..209] */
virtual void OnFreezeEvents( BOOL bFreeze );

/* COleControl::OnGetColorSet  [function; ce-only; CE 2.0..209] */
virtual BOOL OnGetColorSet( DVTARGETDEVICE FAR* ptd, HDC hicTargetDev, LPLOGPALETTE FAR* ppColorSet );

/* COleControl::OnGetControlInfo  [function; ce-only; CE 2.0..209] */
virtual void OnGetControlInfo( LPCONTROLINFO pControlInfo );

/* COleControl::OnGetDisplayString  [function; ce-only; CE 2.0..209] */
virtual BOOL OnGetDisplayString( DISPID dispid, CString& strValue );

/* COleControl::OnGetNaturalExtent  [function; ce-only; CE 2.0..209] */
virtual BOOL OnGetNaturalExtent( DWORD dwAspect, LONG lindex, DVTARGETDEVICE* ptd, HDC hicTargetDev, DVEXTENTINFO* pExtentInfo, LPSIZEL psizel );

/* COleControl::OnGetPredefinedStrings  [function; ce-only; CE 2.0..209] */
virtual BOOL OnGetPredefinedStrings( DISPID dispid, CStringArray* pStringArray, CDWordArray* pCookieArray );

/* COleControl::OnGetPredefinedValue  [function; ce-only; CE 2.0..209] */
virtual BOOL OnGetPredefinedValue( DISPID dispid, DWORD dwCookie, VARIANT FAR* lpvarOut );

/* COleControl::OnGetViewExtent  [function; ce-only; CE 2.0..209] */
virtual BOOL OnGetViewExtent( DWORD dwDrawAspect, LONG lindex, DVTARGETDEVICE* ptd, LPSIZEL lpsizel );

/* COleControl::OnGetViewRect  [function; ce-only; CE 2.0..209] */
virtual BOOL OnGetViewRect( DWORD dwAspect, LPRECTL pRect );

/* COleControl::OnGetViewStatus  [function; ce-only; CE 2.0..209] */
virtual DWORD OnGetViewStatus( );

/* COleControl::OnInactiveMouseMove  [function; ce-only; CE 2.0..209] */
virtual void OnInactiveMouseMove( LPCRECT lprcBounds, long x, long y, DWORD dwKeyState );

/* COleControl::OnKeyDownEvent  [function; ce-only; CE 2.0..209] */
virtual void OnKeyDownEvent( USHORT nChar, USHORT nShiftState );

/* COleControl::OnKeyPressEvent  [function; ce-only; CE 2.0..209] */
virtual void OnKeyPressEvent( USHORT nChar );

/* COleControl::OnKeyUpEvent  [function; ce-only; CE 2.0..209] */
virtual void OnKeyUpEvent( USHORT nChar, USHORT nShiftState );

/* COleControl::OnMapPropertyToPage  [function; ce-only; CE 2.0..209] */
virtual BOOL OnMapPropertyToPage( DISPID dispid, LPCLSID lpclsid, BOOL* pbPageOptional );

/* COleControl::OnMnemonic  [function; ce-only; CE 2.0..209] */
virtual void OnMnemonic( LPMSG pMsg );

/* COleControl::OnProperties  [function; ce-only; CE 2.0..209] */
virtual BOOL OnProperties( LPMSG lpMsg, HWND hWndParent, LPCRECT lpRect );

/* COleControl::OnQueryHitPoint  [function; ce-only; CE 2.0..209] */
virtual BOOL OnQueryHitPoint( DWORD dwAspect, LPCRECT pRectBounds, POINT ptlLoc, LONG lCloseHint, DWORD* pHitResult );

/* COleControl::OnQueryHitRect  [function; ce-only; CE 2.0..209] */
virtual BOOL OnQueryHitRect( DWORD dwAspect, LPCRECT pRectBounds, LPCRECT prcLoc, LONG lCloseHint, DWORD* pHitResult );

/* COleControl::OnRenderData  [function; ce-only; CE 2.0..209] */
virtual BOOL OnRenderData( LPFORMATETC lpFormatEtc, LPSTGMEDIUM lpStgMedium );

/* COleControl::OnRenderFileData  [function; ce-only; CE 2.0..209] */
virtual BOOL OnRenderFileData( LPFORMATETC lpFormatEtc, CFile* pFile );

/* COleControl::OnRenderGlobalData  [function; ce-only; CE 2.0..209] */
virtual BOOL OnRenderGlobalData( LPFORMATETC lpFormatEtc, HGLOBAL* phGlobal );

/* COleControl::OnResetState  [function; ce-only; CE 2.0..209] */
virtual void OnResetState( );

/* COleControl::OnSetClientSite  [function; ce-only; CE 2.0..209] */
virtual void OnSetClientSite( );

/* COleControl::OnSetData  [function; ce-only; CE 2.0..209] */
virtual BOOL OnSetData( LPFORMATETC lpFormatEtc, LPSTGMEDIUM lpStgMedium, BOOL bRelease );

/* COleControl::OnSetExtent  [function; ce-only; CE 2.0..209] */
virtual BOOL OnSetExtent( LPSIZEL lpSizeL );

/* COleControl::OnSetObjectRects  [function; ce-only; CE 2.0..209] */
virtual BOOL OnSetObjectRects( LPCRECT lpRectPos, LPCRECT lpRectClip );

/* COleControl::OnTextChanged  [function; ce-only; CE 2.0..209] */
virtual void OnTextChanged( );

/* COleControl::OnWindowlessMessage  [function; ce-only; CE 2.0..209] */
virtual BOOL OnWindowlessMessage( UINT msg, WPARAM wParam, LPARAM lParam, LRESULT* plResult );

/* COleControl::ParentToClient  [function; ce-only; CE 2.0..209] */
virtual UINT ParentToClient( LPCRECT lprcBounds, LPPOINT pPoint, BOOL bHitTest = FALSE ) const;

/* COleControl::PostModalDialog  [function; ce-only; CE 2.0..209] */
void PostModalDialog( );

/* COleControl::PreModalDialog  [function; ce-only; CE 2.0..209] */
void PreModalDialog( );

/* COleControl::RecreateControlWindow  [function; ce-only; CE 2.0..209] */
void RecreateControlWindow( );

/* COleControl::Refresh  [function; ce-only; CE 2.0..209] */
void Refresh( );

/* COleControl::ReleaseCapture  [function; ce-only; CE 2.0..209] */
BOOL ReleaseCapture( );

/* COleControl::ReleaseDC  [function; ce-only; CE 2.0..209] */
int ReleaseDC( CDC* pDC );

/* COleControl::ResetStockProps  [function; ce-only; CE 2.0..209] */
void ResetStockProps( );

/* COleControl::ResetVersion  [function; ce-only; CE 2.0..209] */
void ResetVersion( DWORD dwVersionDefault );

/* COleControl::ScrollWindow  [function; ce-only; CE 2.0..209] */
void ScrollWindow( int xAmount, int yAmount, LPCRECT lpRect = NULL, LPCRECT lpClipRect = NULL );

/* COleControl::SerializeExtent  [function; ce-only; CE 2.0..209] */
void SerializeExtent( CArchive& ar );

/* COleControl::SerializeStockProps  [function; ce-only; CE 2.0..209] */
void SerializeStockProps( CArchive& ar );

/* COleControl::SerializeVersion  [function; ce-only; CE 2.0..209] */
DWORD SerializeVersion( CArchive& ar, DWORD dwVersionDefault, BOOL bConvert = TRUE );

/* COleControl::SetAppearance  [function; ce-only; CE 2.0..209] */
void SetAppearance ( short sAppearance );

/* COleControl::SetBackColor  [function; ce-only; CE 2.0..209] */
void SetBackColor( OLE_COLOR dwBackColor );

/* COleControl::SetBorderStyle  [function; ce-only; CE 2.0..209] */
void SetBorderStyle( short sBorderStyle );

/* COleControl::SetControlSize  [function; ce-only; CE 2.0..209] */
BOOL SetControlSize( int cx, int cy );

/* COleControl::SetEnabled  [function; ce-only; CE 2.0..209] */
void SetEnabled( BOOL bEnabled );

/* COleControl::SetFont  [function; ce-only; CE 2.0..209] */
void SetFont( LPFONTDISP pFontDisp );

/* COleControl::SetForeColor  [function; ce-only; CE 2.0..209] */
void SetForeColor( OLE_COLOR dwForeColor );

/* COleControl::SetInitialSize  [function; ce-only; CE 2.0..209] */
void SetInitialSize( int cx, int cy );

/* COleControl::SetModifiedFlag  [function; ce-only; CE 2.0..209] */
void SetModifiedFlag( BOOL bModified = TRUE );

/* COleControl::SetNotPermitted  [function; ce-only; CE 2.0..209] */
void SetNotPermitted( );

/* COleControl::SetNotSupported  [function; ce-only; CE 2.0..209] */
void SetNotSupported( );

/* COleControl::SetRectInContainer  [function; ce-only; CE 2.0..209] */
BOOL SetRectInContainer( LPRECT lpRect );

/* COleControl::SetText  [function; ce-only; CE 2.0..209] */
void SetText( LPCTSTR pszText );

/* COleControl::ThrowError  [function; ce-only; CE 2.0..209] */
void ThrowError( SCODE sc, UINT nDescriptionID, UINT nHelpID = -1 );

/* COleControl::TransformCoords  [function; ce-only; CE 2.0..209] */
void TransformCoords( POINTL FAR* lpptlHimetric, POINTF FAR* lpptfContainer, DWORD flags );

/* COleControl::TranslateColor  [function; ce-only; CE 2.0..209] */
COLORREF TranslateColor( OLE_COLOR clrColor, HPALETTE hpal = NULL );

/* COleControl::WillAmbientsBeValidDuringLoad  [function; ce-only; CE 2.0..209] */
BOOL WillAmbientsBeValidDuringLoad( );

/* COlePropertyPage::COlePropertyPage  [function; ce-only; CE 2.0..209] */
COlePropertyPage( UINT idDlg, UINT idCaption );

/* COlePropertyPage::GetControlStatus  [function; ce-only; CE 2.0..209] */
BOOL GetControlStatus( UINT nID );

/* COlePropertyPage::GetPageSite  [function; ce-only; CE 2.0..209] */
LPPROPERTYPAGESITE GetPageSite( );

/* COlePropertyPage::IgnoreApply  [function; ce-only; CE 2.0..209] */
void IgnoreApply( UINT nID );

/* COlePropertyPage::IsModified  [function; ce-only; CE 2.0..209] */
BOOL IsModified( );

/* COlePropertyPage::OnEditProperty  [function; ce-only; CE 2.0..209] */
virtual BOOL OnEditProperty( DISPID dispid );

/* COlePropertyPage::OnHelp  [function; ce-only; CE 2.0..209] */
virtual BOOL OnHelp( LPCTSTR lpszHelpDir );

/* COlePropertyPage::OnInitDialog  [function; ce-only; CE 2.0..209] */
virtual BOOL OnInitDialog( );

/* COlePropertyPage::OnObjectsChanged  [function; ce-only; CE 2.0..209] */
virtual void OnObjectsChanged( );

/* COlePropertyPage::OnSetPageSite  [function; ce-only; CE 2.0..209] */
virtual void OnSetPageSite( );

/* COlePropertyPage::SetControlStatus  [function; ce-only; CE 2.0..209] */
BOOL SetControlStatus( UINT nID, BOOL IsDirty );

/* COlePropertyPage::SetDialogResource  [function; ce-only; CE 2.0..209] */
void SetDialogResource( HGLOBAL hDialog );

/* COlePropertyPage::SetHelpInfo  [function; ce-only; CE 2.0..209] */
void SetHelpInfo( LPCTSTR lpszDocString, LPCTSTR lpszHelpFile = NULL, DWORD dwHelpContext = 0 );

/* COlePropertyPage::SetModifiedFlag  [function; ce-only; CE 2.0..209] */
void SetModifiedFlag( BOOL bModified = TRUE );

/* COlePropertyPage::SetPageName  [function; ce-only; CE 2.0..209] */
void SetPageName( LPCTSTR lpszPageName );

/* CPropExchange::ExchangeBlobProp  [function; ce-only; CE 2.0..209] */
virtual BOOL ExchangeBlobProp( LPCTSTR pszPropName, void** ppvBlob, const void* pvBlobDefault = NULL ) = 0;

/* CPropExchange::ExchangeFontProp  [function; ce-only; CE 2.0..209] */
virtual BOOL ExchangeFontProp( LPCTSTR pszPropName, CFontHolder& font, const FONTDESC FAR* pFontDesc, LPFONTDISP pFontDispAmbient ) = 0;

/* CPropExchange::ExchangePersistentProp  [function; ce-only; CE 2.0..209] */
virtual BOOL ExchangePersistentProp( LPCTSTR pszPropName, LPUNKNOWN FAR* ppUnk, REFIID iid, LPUNKNOWN pUnkDefault ) = 0;

/* CPropExchange::ExchangeProp  [function; ce-only; CE 2.0..209] */
virtual BOOL ExchangeProp( LPCTSTR pszPropName, VARTYPE vtProp, void* pvProp, const void* pvDefault = NULL ) = 0;

/* CPropExchange::ExchangeVersion  [function; ce-only; CE 2.0..209] */
BOOL ExchangeVersion( DWORD& dwVersionLoaded, DWORD dwVersionDefault, BOOL bConvert );

/* CPropExchange::GetVersion  [function; ce-only; CE 2.0..209] */
DWORD GetVersion( );

/* CPropExchange::IsLoading  [function; ce-only; CE 2.0..209] */
BOOL IsLoading( );
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
OLE_COLOR AmbientBackColor( );
LPFONTDISP AmbientFont( );
OLE_COLOR AmbientForeColor( );
BOOL AmbientShowGrabHandles( );
BOOL AmbientShowHatching( );
short AmbientTextAlign( );
BOOL AmbientUIDead( );
BOOL AmbientUserMode( );
void BoundPropertyChanged( DISPID dispid );
BOOL BoundPropertyRequestEdit( DISPID dispid )
COlePropertyPage( UINT idDlg, UINT idCaption );
BOOL ClipCaretRect( LPRECT lpRect );
void ControlInfoChanged( );
void DoClick( );
void DoSuperclassPaint( CDC* pDC, const CRect& rcBounds );
void DrawContent( CDC* pDC, CRect& rc );
void EnableSimpleFrame( );
BOOL ExchangeExtent( CPropExchange* pPX );
void ExchangeStockProps( CPropExchange* pPX );
void FireClick( );
void FireDblClick( );
void FireError( SCODE scode, LPCTSTR lpszDescription, UINT nHelpID = 0 );
void FireKeyDown( USHORT* pnChar, short nShiftState );
void FireKeyPress( USHORT* pnChar );
void FireKeyUp( USHORT* pnChar, short nShiftState );
void FireMouseDown( short nButton, short nShiftState, OLE_XPOS_PIXELS x, OLE_YPOS_PIXEL y );
void FireMouseMove( short nButton, short nShiftState, OLE_XPOS_PIXELS x, OLE_YPOS_PIXELS y );
void FireMouseUp( short nButton, short nShiftState, OLE_XPOS_PIXELS x, OLE_YPOS_PIXELS y );
void FireReadyStateChange( );
short GetAppearance ( );
OLE_COLOR GetBackColor( );
short GetBorderStyle( );
void GetControlSize( int* pcx, int* pcy );
BOOL GetControlStatus( UINT nID );
BOOL GetEnabled( );
LPFONTDISP GetFont( );
LPFONTDISP GetFontDispatch( );
HFONT GetFontHandle( );
void GetFontTextMetrics( LPTEXTMETRIC lptm, CFontHolder& fontHolder );
OLE_COLOR GetForeColor( );
OLE_HANDLE GetHwnd( );
void GetNotSupported( );
LPPROPERTYPAGESITE GetPageSite( );
long GetReadyState( );
BOOL GetRectInContainer( LPRECT lpRect );
void GetStockTextMetrics( LPTEXTMETRIC lptm );
void IgnoreApply( UINT nID );
void InitializeIIDs( const IID* piidPrimary, const IID* piidEvents );
void InternalSetReadyState( long lNewReadyState );
BOOL IsConvertingVBX( );
BOOL IsOptimizedDraw( );
void PostModalDialog( );
void PreModalDialog( );
void RecreateControlWindow( );
void ResetStockProps( );
void ResetVersion( DWORD dwVersionDefault );
void SerializeExtent( CArchive& ar );
void SerializeStockProps( CArchive& ar );
void SetAppearance ( short sAppearance );
void SetBackColor( OLE_COLOR dwBackColor );
void SetBorderStyle( short sBorderStyle );
BOOL SetControlSize( int cx, int cy );
BOOL SetControlStatus( UINT nID, BOOL IsDirty );
void SetDialogResource( HGLOBAL hDialog );
void SetEnabled( BOOL bEnabled );
void SetForeColor( OLE_COLOR dwForeColor );
void SetInitialSize( int cx, int cy );
void SetNotPermitted( );
void SetNotSupported( );
void SetPageName( LPCTSTR lpszPageName );
void ThrowError( SCODE sc, UINT nDescriptionID, UINT nHelpID = -1 );
BOOL WillAmbientsBeValidDuringLoad( );

#endif /* _AFXCTL_ */
