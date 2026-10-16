/* Atlctl.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 163 declarations, 0 outlines, 0 base types, 0 extra macros, 68 extra decls
 */
#ifndef _ATLCTL_
#define _ATLCTL_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 200 && _WIN32_WCE < 210)) /* CE 2.0..209 */

/* CComControl::CComControlBase  [function; ce-only; CE 2.0..209] */
CComControlBase( HWND h );

/* CComControl::ControlQueryInterface  [function; ce-only; CE 2.0..209] */
virtual HRESULT ControlQueryInterface( const IID& iid, void** ppv );

/* CComControl::CreateControlWindow  [function; ce-only; CE 2.0..209] */
virtual HWND CreateControlWindow( HWND hWndParent, RECT& rcPos );

/* CComControl::DoesVerbActivate  [function; ce-only; CE 2.0..209] */
BOOL DoesVerbActivate( LONG iVerb );

/* CComControl::DoesVerbUIActivate  [function; ce-only; CE 2.0..209] */
BOOL DoesVerbUIActivate( LONG iVerb );

/* CComControl::DoVerbProperties  [function; ce-only; CE 2.0..209] */
HRESULT DoVerbProperties( LPCRECT prcPosRect, HWND hwndParent );

/* CComControl::FireOnChanged  [function; ce-only; CE 2.0..209] */
HRESULT FireOnChanged( DISPID dispID );

/* CComControl::GetAmbientBackColor  [function; ce-only; CE 2.0..209] */
HRESULT GetAmbientBackColor( OLE_COLOR& BackColor );

/* CComControl::GetAmbientDisplayAsDefault  [function; ce-only; CE 2.0..209] */
HRESULT GetAmbientDisplayAsDefault( BOOL& bDisplayAsDefault );

/* CComControl::GetAmbientDisplayName  [function; ce-only; CE 2.0..209] */
HRESULT GetAmbientDisplayName( BSTR& bstrDisplayName );

/* CComControl::GetAmbientFont  [function; ce-only; CE 2.0..209] */
HRESULT GetAmbientFont( IFont** ppFont );

/* CComControl::GetAmbientForeColor  [function; ce-only; CE 2.0..209] */
HRESULT GetAmbientForeColor( OLE_COLOR& ForeColor );

/* CComControl::GetAmbientLocaleID  [function; ce-only; CE 2.0..209] */
HRESULT GetAmbientLocaleID( LCID& lcid );

/* CComControl::GetAmbientMessageReflect  [function; ce-only; CE 2.0..209] */
HRESULT GetAmbientMessageReflect( BOOL& bMessageReflect );

/* CComControl::GetAmbientPalette  [function; ce-only; CE 2.0..209] */
HRESULT GetAmbientPalette( HPALETTE& hPalette );

/* CComControl::GetAmbientProperty  [function; ce-only; CE 2.0..209] */
HRESULT GetAmbientProperty( DISPID dispid, VARIANT& var );

/* CComControl::GetAmbientScaleUnits  [function; ce-only; CE 2.0..209] */
HRESULT GetAmbientScaleUnits( BSTR& bstrScaleUnits );

/* CComControl::GetAmbientShowGrabHandles  [function; ce-only; CE 2.0..209] */
HRESULT GetAmbientShowGrabHandles( BOOL& bShowGrabHandles );

/* CComControl::GetAmbientShowHatching  [function; ce-only; CE 2.0..209] */
HRESULT GetAmbientShowHatching( BOOL& bShowHatching );

/* CComControl::GetAmbientSupportsMnemonics  [function; ce-only; CE 2.0..209] */
HRESULT GetAmbientSupportsMnemonics( BOOL& bSupportsMnemonics );

/* CComControl::GetAmbientTextAlign  [function; ce-only; CE 2.0..209] */
HRESULT GetAmbientTextAlign( short& nTextAlign );

/* CComControl::GetAmbientUIDead  [function; ce-only; CE 2.0..209] */
HRESULT GetAmbientUIDead( BOOL& bUIDead );

/* CComControl::GetAmbientUserMode  [function; ce-only; CE 2.0..209] */
HRESULT GetAmbientUserMode( BOOL& bUserMode );

/* CComControl::GetDirty  [function; ce-only; CE 2.0..209] */
BOOL GetDirty( );

/* CComControl::GetZoomInfo  [function; ce-only; CE 2.0..209] */
void GetZoomInfo( ATL_DRAWINFO& di );

/* CComControl::InPlaceActivate  [function; ce-only; CE 2.0..209] */
HRESULT InPlaceActivate( LONG iVerb, const RECT* prcPosRect = NULL );

/* CComControl::OnDraw  [function; ce-only; CE 2.0..209] */
virtual HRESULT OnDraw( ATL_DRAWINFO& di );

/* CComControl::OnDrawAdvanced  [function; ce-only; CE 2.0..209] */
virtual HRESULT OnDrawAdvanced( ATL_DRAWINFO& di );

/* CComControl::OnGetDlgCode  [function; ce-only; CE 2.0..209] */
LRESULT OnGetDlgCode( UINT nMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled );

/* CComControl::OnKillFocus  [function; ce-only; CE 2.0..209] */
LRESULT OnKillFocus( UINT nMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled );

/* CComControl::OnPaint  [function; ce-only; CE 2.0..209] */
LRESULT OnPaint( UINT nMsg, WPARAM wParam, LPARAM lParam, BOOL& lResult );

/* CComControl::OnSetFocus  [function; ce-only; CE 2.0..209] */
LRESULT OnSetFocus( UINT nMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled );

/* CComControl::SendOnClose  [function; ce-only; CE 2.0..209] */
HRESULT SendOnClose( );

/* CComControl::SendOnDataChange  [function; ce-only; CE 2.0..209] */
HRESULT SendOnDataChange( DWORD advf = 0);

/* CComControl::SendOnRename  [function; ce-only; CE 2.0..209] */
HRESULT SendOnRename( IMoniker* pmk );

/* CComControl::SendOnSave  [function; ce-only; CE 2.0..209] */
HRESULT SendOnSave( );

/* CComControl::SendOnViewChange  [function; ce-only; CE 2.0..209] */
HRESULT SendOnViewChange( DWORD dwAspect, LONG lindex = -1 );

/* CComControl::SetControlFocus  [function; ce-only; CE 2.0..209] */
BOOL SetControlFocus( BOOL bGrab );

/* CComControl::SetDirty  [function; ce-only; CE 2.0..209] */
void SetDirty( BOOL bDirty );

/* CComDispatchDriver::GetProperty  [function; ce-only; CE 2.0..209] */
HRESULT GetProperty( DISPID dwDispID, VARIANT* var );

/* CComDispatchDriver::operator !  [function; ce-only; CE 2.0..209] */
BOOL operator !( );

/* CComDispatchDriver::PutProperty  [function; ce-only; CE 2.0..209] */
HRESULT PutProperty( DISPID dwDispID, VARIANT* var );

/* CComDispatchDriver::Release  [function; ce-only; CE 2.0..209] */
void Release( );

/* CFirePropNotifyEvent::FireOnChanged  [function; ce-only; CE 2.0..209] */
HRESULT FireOnChanged( IUnknown* pUnk, DISPID dispID );

/* CFirePropNotifyEvent::FireOnRequestEdit  [function; ce-only; CE 2.0..209] */
HRESULT FireOnRequestEdit( IUnknown* pUnk, DISPID dispID );

/* IDataObjectImpl::EnumFormatEtc  [function; ce-only; CE 2.0..209] */
HRESULT EnumFormatEtc( DWORD dwDirection, IEnumFORMATETC** ppenumFormatEtc );

/* IDataObjectImpl::FireDataChange  [function; ce-only; CE 2.0..209] */
HRESULT FireDataChange( );

/* IDataObjectImpl::GetCanonicalFormatEtc  [function; ce-only; CE 2.0..209] */
HRESULT GetCanonicalFormatEtc( FORMATETC* pformatetcIn, FORMATETC* pformatetcOut );

/* IDataObjectImpl::GetData  [function; ce-only; CE 2.0..209] */
HRESULT GetData( FORMATETC* pformatetcIn, STGMEDIUM* pmedium );

/* IDataObjectImpl::GetDataHere  [function; ce-only; CE 2.0..209] */
HRESULT GetDataHere( FORMATETC* pformatetc, STGMEDIUM* pmedium );

/* IDataObjectImpl::QueryGetData  [function; ce-only; CE 2.0..209] */
HRESULT QueryGetData( FORMATETC* pformatetc );

/* IDataObjectImpl::SetData  [function; ce-only; CE 2.0..209] */
HRESULT SetData( FORMATETC* pformatetc, STGMEDIUM* pmedium, BOOL fRelease );

/* IDispatchImpl::GetIDsOfNames  [function; ce-only; CE 2.0..209] */
HRESULT GetIDsOfNames( REFIID riid, LPOLESTR* rgszNames, UINT cNames, LCID lcid, DISPID* rgdispid );

/* IDispatchImpl::GetTypeInfo  [function; ce-only; CE 2.0..209] */
HRESULT GetTypeInfo( UINT itinfo, LCID lcid, ITypeInfo** pptinfo );

/* IDispatchImpl::GetTypeInfoCount  [function; ce-only; CE 2.0..209] */
HRESULT GetTypeInfoCount( UINT* pctinfo );

/* IDispatchImpl::Invoke  [function; ce-only; CE 2.0..209] */
HRESULT Invoke( DISPID dispidMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARMS* pdispparams, VARIANT* pvarResult, EXCEPINFO* pexcepinfo, UINT* puArgErr );

/* IObjectSafetyImpl::GetInterfaceSafetyOptions  [function; ce-only; CE 2.0..209] */
HRESULT GetInterfaceSafetyOptions( REFIID riid, DWORD* pdwSupportedOptions, DWORD* pdwEnabledOptions );

/* IObjectSafetyImpl::SetInterfaceSafetyOptions  [function; ce-only; CE 2.0..209] */
HRESULT SetInterfaceSafetyOptions( REFIID riid, DWORD dwOptionsSetMask, DWORD dwEnabledOptions );

/* IObjectWithSiteImpl::GetSite  [function; ce-only; CE 2.0..209] */
HRESULT GetSite( REFIID riid, void **ppvSite );

/* IObjectWithSiteImpl::SetSite  [function; ce-only; CE 2.0..209] */
HRESULT SetSite( IUnknown* pUnkSite );

/* IOleControlImpl::FreezeEvents  [function; ce-only; CE 2.0..209] */
HRESULT FreezeEvents( BOOL bFreeze );

/* IOleControlImpl::GetControlInfo  [function; ce-only; CE 2.0..209] */
HRESULT GetControlInfo( LPCONTROLINFO pCI );

/* IOleControlImpl::OnAmbientPropertyChange  [function; ce-only; CE 2.0..209] */
HRESULT OnAmbientPropertyChange( DISPID dispid );

/* IOleControlImpl::OnMnemonic  [function; ce-only; CE 2.0..209] */
HRESULT OnMnemonic( LPMSG pMsg );

/* IOleInPlaceActiveObjectImpl::ContextSensitiveHelp  [function; ce-only; CE 2.0..209] */
HRESULT ContextSensitiveHelp( BOOL fEnterMode );

/* IOleInPlaceActiveObjectImpl::EnableModeless  [function; ce-only; CE 2.0..209] */
HRESULT EnableModeless( BOOL fEnable );

/* IOleInPlaceActiveObjectImpl::GetWindow  [function; ce-only; CE 2.0..209] */
HRESULT GetWindow( HWND* phwnd );

/* IOleInPlaceActiveObjectImpl::OnDocWindowActivate  [function; ce-only; CE 2.0..209] */
HRESULT OnDocWindowActivate( BOOL fActivate );

/* IOleInPlaceActiveObjectImpl::OnFrameWindowActivate  [function; ce-only; CE 2.0..209] */
HRESULT OnFrameWindowActivate( BOOL fActivate );

/* IOleInPlaceActiveObjectImpl::ResizeBorder  [function; ce-only; CE 2.0..209] */
HRESULT ResizeBorder( LPRECT prcBorder, IOleInPlaceUIWindow* pUIWindow, BOOL fFrameWindow );

/* IOleInPlaceActiveObjectImpl::TranslateAccelerator  [function; ce-only; CE 2.0..209] */
HRESULT TranslateAccelerator( LPMSG lpmsg );

/* IOleInPlaceObjectWindowlessImpl::ContextSensitiveHelp  [function; ce-only; CE 2.0..209] */
HRESULT ContextSensitiveHelp( BOOL fEnterMode );

/* IOleInPlaceObjectWindowlessImpl::GetDropTarget  [function; ce-only; CE 2.0..209] */
HRESULT GetDropTarget( IDropTarget** ppDropTarget );

/* IOleInPlaceObjectWindowlessImpl::GetWindow  [function; ce-only; CE 2.0..209] */
HRESULT GetWindow( HWND* phwnd );

/* IOleInPlaceObjectWindowlessImpl::InPlaceDeactivate  [function; ce-only; CE 2.0..209] */
HRESULT InPlaceDeactivate( HWND* phwnd );

/* IOleInPlaceObjectWindowlessImpl::OnWindowMessage  [function; ce-only; CE 2.0..209] */
HRESULT OnWindowMessage( UINT msg, WPARAM WParam, LPARAM LParam, LRESULT plResultParam );

/* IOleInPlaceObjectWindowlessImpl::ReactivateAndUndo  [function; ce-only; CE 2.0..209] */
HRESULT ReactivateAndUndo( );

/* IOleInPlaceObjectWindowlessImpl::SetObjectRects  [function; ce-only; CE 2.0..209] */
HRESULT SetObjectRects( LPCRECT prcPos, LPCRECT prcClip );

/* IOleInPlaceObjectWindowlessImpl::UIDeactivate  [function; ce-only; CE 2.0..209] */
HRESULT UIDeactivate( );

/* IOleObjectImpl::Advise  [function; ce-only; CE 2.0..209] */
HRESULT Advise( IAdviseSink* pAdvSink, DWORD* pdwConnection );

/* IOleObjectImpl::Close  [function; ce-only; CE 2.0..209] */
HRESULT Close( DWORD dwSaveOption );

/* IOleObjectImpl::DoVerb  [function; ce-only; CE 2.0..209] */
HRESULT DoVerb( LONG iVerb, LPMSG lpmsg, IOleClientSite* pActiveSite, LONG lindex, HWND hwndParent, LPCRECT lprcPosRect );

/* IOleObjectImpl::DoVerbDiscardUndo  [function; ce-only; CE 2.0..209] */
HRESULT DoVerbDiscardUndo( LPCRECT prcPosRect, HWND hwndParent );

/* IOleObjectImpl::DoVerbHide  [function; ce-only; CE 2.0..209] */
HRESULT DoVerbHide( LPCRECT prcPosRect, HWND hwndParent );

/* IOleObjectImpl::DoVerbinPlaceActivate  [function; ce-only; CE 2.0..209] */
HRESULT DoVerbInPlaceActivate( LPCRECT prcPosRect, HWND hwndParent );

/* IOleObjectImpl::DoVerbOpen  [function; ce-only; CE 2.0..209] */
HRESULT DoVerbOpen( LPCRECT prcPosRect, HWND hwndParent );

/* IOleObjectImpl::DoVerbPrimary  [function; ce-only; CE 2.0..209] */
HRESULT DoVerbPrimary( LPCRECT prcPosRect, HWND hwndParent );

/* IOleObjectImpl::DoVerbShow  [function; ce-only; CE 2.0..209] */
HRESULT DoVerbShow( LPCRECT prcPosRect, HWND hwndParent );

/* IOleObjectImpl::DoVerbUIActivate  [function; ce-only; CE 2.0..209] */
HRESULT DoVerbUIActivate( LPCRECT prcPosRect, HWND hwndParent );

/* IOleObjectImpl::EnumAdvise  [function; ce-only; CE 2.0..209] */
HRESULT EnumAdvise( IEnumSTATDATA** ppenumAdvise );

/* IOleObjectImpl::GetClientSite  [function; ce-only; CE 2.0..209] */
HRESULT GetClientSite( IOleClientSite** ppClientSite );

/* IOleObjectImpl::GetClipboardData  [function; ce-only; CE 2.0..209] */
HRESULT GetClipboardData( DWORD dwReserved, IDataObject** ppDataObject );

/* IOleObjectImpl::GetExtent  [function; ce-only; CE 2.0..209] */
HRESULT GetExtent( DWORD dwDrawAspect, SIZEL* psizel );

/* IOleObjectImpl::GetMoniker  [function; ce-only; CE 2.0..209] */
HRESULT GetMoniker( DWORD dwAssign, DWORD dwWhichMoniker, IMoniker** ppmk );

/* IOleObjectImpl::GetUserClassID  [function; ce-only; CE 2.0..209] */
HRESULT GetUserClassID( CLSID* pClsid );

/* IOleObjectImpl::InitFromData  [function; ce-only; CE 2.0..209] */
HRESULT InitFromData( IDataObject* pDataObject, BOOL fCreation, DWORD dwReserved );

/* IOleObjectImpl::IsUpToDate  [function; ce-only; CE 2.0..209] */
HRESULT IsUpToDate( );

/* IOleObjectImpl::SetClientSite  [function; ce-only; CE 2.0..209] */
HRESULT SetClientSite( IOleClientSite* pClientSite );

/* IOleObjectImpl::SetColorScheme  [function; ce-only; CE 2.0..209] */
HRESULT SetColorScheme( LOGPALETTE* pLogPal );

/* IOleObjectImpl::SetExtent  [function; ce-only; CE 2.0..209] */
HRESULT SetExtent( DWORD dwDrawAspect, SIZEL* psizel );

/* IOleObjectImpl::SetHostNames  [function; ce-only; CE 2.0..209] */
HRESULT SetHostNames( LPCOLESTR szContainerApp, LPCOLESTR szContainerObj );

/* IOleObjectImpl::SetMoniker  [function; ce-only; CE 2.0..209] */
HRESULT SetMoniker( DWORD dwAssign, DWORD dwWhichMoniker, IMoniker** ppmk );

/* IOleObjectImpl::Unadvise  [function; ce-only; CE 2.0..209] */
HRESULT Unadvise( DWORD dwConnection );

/* IOleObjectImpl::Update  [function; ce-only; CE 2.0..209] */
HRESULT Update( );

/* IPerPropertyBrowsingImpl::GetDisplayString  [function; ce-only; CE 2.0..209] */
HRESULT GetDisplayString( DISPID dispID, BSTR* pBstr );

/* IPerPropertyBrowsingImpl::GetPredefinedStrings  [function; ce-only; CE 2.0..209] */
HRESULT GetPredefinedStrings( DISPID dispID, CALPOLESTR* pCaStringsOut, CADWORD* pCaCookiesOut );

/* IPerPropertyBrowsingImpl::GetPredefinedValue  [function; ce-only; CE 2.0..209] */
HRESULT GetPredefinedValue( DISPID dispID, DWORD dwCookie, VARIANT* pVarOut );

/* IPerPropertyBrowsingImpl::MapPropertyToPage  [function; ce-only; CE 2.0..209] */
HRESULT MapPropertyToPage( DISPID dispID, CLSID* pClsid );

/* IPersistPropertyBagImpl::GetClassID  [function; ce-only; CE 2.0..209] */
HRESULT GetClassID( CLSID *pClassID );

/* IPersistPropertyBagImpl::InitNew  [function; ce-only; CE 2.0..209] */
HRESULT InitNew( );

/* IPersistPropertyBagImpl::Load  [function; ce-only; CE 2.0..209] */
HRESULT Load( LPPROPERTYBAG pPropBag, LPERRORLOG pErrorLog );

/* IPersistPropertyBagImpl::Save  [function; ce-only; CE 2.0..209] */
HRESULT Save( LPPROPERTYBAG pPropBag, BOOL fClearDirty, BOOL fSaveAllProperties );

/* IPersistStorageImpl::GetClassID  [function; ce-only; CE 2.0..209] */
HRESULT GetClassID( CLSID *pClassID );

/* IPersistStorageImpl::HandsOffStorage  [function; ce-only; CE 2.0..209] */
HRESULT HandsOffStorage( );

/* IPersistStorageImpl::InitNew  [function; ce-only; CE 2.0..209] */
HRESULT InitNew( IStorage* pStorage );

/* IPersistStorageImpl::IsDirty  [function; ce-only; CE 2.0..209] */
HRESULT IsDirty( );

/* IPersistStorageImpl::Load  [function; ce-only; CE 2.0..209] */
HRESULT Load( IStorage* pStorage );

/* IPersistStorageImpl::Save  [function; ce-only; CE 2.0..209] */
HRESULT Save( IStorage* pStorage, BOOL fSameAsLoad );

/* IPersistStorageImpl::SaveCompleted  [function; ce-only; CE 2.0..209] */
HRESULT SaveCompleted( IStorage* pStorage );

/* IPersistStreamInitImpl::GetClassID  [function; ce-only; CE 2.0..209] */
HRESULT GetClassID( CLSID *pClassID );

/* IPersistStreamInitImpl::GetSizeMax  [function; ce-only; CE 2.0..209] */
HRESULT GetSizeMax( ULARGE_INTEGER FAR* pcbSize );

/* IPersistStreamInitImpl::InitNew  [function; ce-only; CE 2.0..209] */
HRESULT InitNew( );

/* IPersistStreamInitImpl::IsDirty  [function; ce-only; CE 2.0..209] */
HRESULT IsDirty( );

/* IPointerInactiveImpl::GetActivationPolicy  [function; ce-only; CE 2.0..209] */
HRESULT GetActivationPolicy( DWORD* pdwPolicy );

/* IPointerInactiveImpl::OnInactiveMouseMove  [function; ce-only; CE 2.0..209] */
HRESULT OnInactiveMouseMove( LPCRECT pRectBounds, long x, long y, DWORD dwMouseMsg );

/* IPointerInactiveImpl::OnInactiveSetCursor  [function; ce-only; CE 2.0..209] */
HRESULT OnInactiveSetCursor( LPCRECT pRectBounds, long x, long y, DWORD dwMouseMsg, BOOL fSetAlways);

/* IPropertyPage2Impl::EditProperty  [function; ce-only; CE 2.0..209] */
HRESULT EditProperty( DISPID dispID );

/* IPropertyPageImpl::Activate  [function; ce-only; CE 2.0..209] */
HRESULT Activate( HWND hWndParent, LPCRECT pRect, BOOL bModal );

/* IPropertyPageImpl::Apply  [function; ce-only; CE 2.0..209] */
HRESULT Apply( );

/* IPropertyPageImpl::Deactivate  [function; ce-only; CE 2.0..209] */
HRESULT Deactivate( );

/* IPropertyPageImpl::GetPageInfo  [function; ce-only; CE 2.0..209] */
HRESULT GetPageInfo( PROPPAGEINFO* pPageInfo );

/* IPropertyPageImpl::IsPageDirty  [function; ce-only; CE 2.0..209] */
HRESULT IsPageDirty( );

/* IPropertyPageImpl::Move  [function; ce-only; CE 2.0..209] */
HRESULT Move( LPCRECT pRect );

/* IPropertyPageImpl::SetDirty  [function; ce-only; CE 2.0..209] */
void SetDirty( BOOL bDirty );

/* IPropertyPageImpl::SetObjects  [function; ce-only; CE 2.0..209] */
HRESULT SetObjects( ULONG nObjects, IUnknown** ppUnk );

/* IPropertyPageImpl::SetPageSite  [function; ce-only; CE 2.0..209] */
HRESULT SetPageSite( IPropertyPageSite* pPageSite );

/* IPropertyPageImpl::Show  [function; ce-only; CE 2.0..209] */
HRESULT Show( UINT nCmdShow );

/* IPropertyPageImpl::TranslateAccelerator  [function; ce-only; CE 2.0..209] */
HRESULT TranslateAccelerator( MSG* pMsg );

/* IQuickActivateImpl::GetContentExtent  [function; ce-only; CE 2.0..209] */
HRESULT GetContentExtent( LPSIZEL pSize );

/* IQuickActivateImpl::QuickActivate  [function; ce-only; CE 2.0..209] */
HRESULT QuickActivate( QACONTAINER *pQACont, QACONTROL *QACtrl );

/* IQuickActivateImpl::SetContentExtent  [function; ce-only; CE 2.0..209] */
HRESULT SetContentExtent( LPSIZEL pSize );

/* IRunnableObjectImpl::GetRunningClass  [function; ce-only; CE 2.0..209] */
HRESULT GetRunningClass(LPCLSID lpClsid );

/* IRunnableObjectImpl::IsRunning  [function; ce-only; CE 2.0..209] */
virtual BOOL IsRunning( );

/* IRunnableObjectImpl::LockRunning  [function; ce-only; CE 2.0..209] */
HRESULT LockRunning( BOOL fLock, BOOL fLastUnlockCloses );

/* IRunnableObjectImpl::Run  [function; ce-only; CE 2.0..209] */
HRESULT Run( LPBINDCTX );

/* IRunnableObjectImpl::SetContainedObject  [function; ce-only; CE 2.0..209] */
HRESULT SetContainedObject( BOOL fContained );

/* ISpecifyPropertyPagesImpl::GetPages  [function; ce-only; CE 2.0..209] */
HRESULT GetPages(CAUUID* pPages );

/* IViewObjectExImpl::Draw  [function; ce-only; CE 2.0..209] */
HRESULT Draw( DWORD dwDrawAspect, LONG lindex, void* pvAspect, DVTARGETDEVICE* ptd, HDC hicTargetDev, LPCRECTL prcBounds, LPCRECTL prcWBounds, BOOL(_stdcall * pfnContinue) (DWORD dwContinue), DWORD dwContinue );

/* IViewObjectExImpl::Freeze  [function; ce-only; CE 2.0..209] */
HRESULT Freeze( DWORD dwAspect, LONG lindex, void* pvAspect, DWORD* pdwFreeze );

/* IViewObjectExImpl::GetAdvise  [function; ce-only; CE 2.0..209] */
HRESULT GetAdvise( DWORD* pAspects, DWORD* pAdvf, IAdviseSink** ppAdvSink );

/* IViewObjectExImpl::GetColorSet  [function; ce-only; CE 2.0..209] */
HRESULT GetColorSet( DWORD dwAspect, LONG lindex, void* pvAspect, DVTARGETDEVICE* ptd, HDC hicTargetDevice, LOGPALETTE** ppColorSet );

/* IViewObjectExImpl::GetExtent  [function; ce-only; CE 2.0..209] */
HRESULT GetExtent( DWORD dwDrawAspect, LONG lindex, DVTARGETDEVICE* ptd, LPSIZEL* lpsizel );

/* IViewObjectExImpl::GetNaturalExtent  [function; ce-only; CE 2.0..209] */
HRESULT GetNaturalExtent( DWORD dwAspect, LONG lindex, DVTARGETDEVICE* ptd, HDC hicTargetDevice, DVEXTENTINFO* pExtentInfo, LPSIZEL psizel );

/* IViewObjectExImpl::GetRect  [function; ce-only; CE 2.0..209] */
HRESULT GetRect( DWORD dwAspect, LPRECTL pRect )

/* IViewObjectExImpl::GetViewStatus  [function; ce-only; CE 2.0..209] */
HRESULT GetViewStatus( DWORD* pdwStatus );

/* IViewObjectExImpl::QueryHitPoint  [function; ce-only; CE 2.0..209] */
HRESULT QueryHitPoint( DWORD dwAspect, LPCRECT pRectBounds, POINT ptlLoc, LONG lCloseHit, DWORD* pHitResult );

/* IViewObjectExImpl::QueryHitRect  [function; ce-only; CE 2.0..209] */
HRESULT QueryHitRect( DWORD dwAspect, LPCRECT pRectBounds, LPRECT prcLoc, LONG lCloseHit, DWORD* pHitResult );

/* IViewObjectExImpl::SetAdvise  [function; ce-only; CE 2.0..209] */
HRESULT SetAdvise( DWORD aspects, DWORD advf, IAdviseSink* pAdvSink );

/* IViewObjectExImpl::UnFreeze  [function; ce-only; CE 2.0..209] */
HRESULT Unfreeze( DWORD dwFreeze );
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 200 && _WIN32_WCE < 210) || (_WIN32_WCE >= 212 && _WIN32_WCE < 400)) /* CE 2.0..209, 2.12..399 */

/* CComControl::FireOnRequestEdit  [function; ce-only; CE 2.0..209, 2.12..399] */
HRESULT FireOnRequestEdit( DISPID dispID );

/* CComControl::FireViewChange  [function; ce-only; CE 2.0..209, 2.12..399] */
HRESULT FireViewChange( );

/* CComControl::GetAmbientAppearance  [function; ce-only; CE 2.0..209, 2.12..399] */
HRESULT GetAmbientAppearance( short& nAppearance);

/* CComControl::GetAmbientAutoClip  [function; ce-only; CE 2.0..209, 2.12..399] */
HRESULT GetAmbientAutoClip( BOOL& bAutoClip );
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
CComControlBase( HWND h );
virtual HRESULT ControlQueryInterface( const IID& iid, void** ppv );
virtual HWND CreateControlWindow( HWND hWndParent, RECT& rcPos );
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
HRESULT InPlaceActivate( LONG iVerb, const RECT* prcPosRect = NULL );
HRESULT InPlaceDeactivate( HWND* phwnd );
HRESULT MapPropertyToPage( DISPID dispID, CLSID* pClsid );
HRESULT OnAmbientPropertyChange( DISPID dispid );
virtual HRESULT OnDraw( ATL_DRAWINFO& di );
virtual HRESULT OnDrawAdvanced( ATL_DRAWINFO& di );
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
