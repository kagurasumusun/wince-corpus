/* Oleidl.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 8 constants, 77 declarations, 9 outlines, 0 base types, 0 extra macros, 56 extra decls
 */
#ifndef _OLEIDL_
#define _OLEIDL_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define MK_ALT 32
#define OLEUPDATE_ALWAYS 1
#define OLEUPDATE_ONCALL 3
#define OLEVERBATTRIB_NEVERDIRTIES 1
#define OLEVERBATTRIB_ONCONTAINERMENU 2
#define OLEWHICHMK_CONTAINER 1
#define OLEWHICHMK_OBJFULL 3
#define OLEWHICHMK_OBJREL 2

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 3.0..399, 5.0..599 */

/* IOleAdviseHolder  [interface; shared; CE 3.0..399, 5.0..599; Oleaut32.lib, Uuid.lib] */

/* IOleClientSite  [interface; shared; CE 3.0..399, 5.0..599; Oleaut32.lib, Uuid.lib] */

/* IOleObject  [interface; shared; CE 3.0..399, 5.0..599; Oleaut32.lib, Uuid.lib] */

/* IParseDisplayName  [interface; shared; CE 3.0..399, 5.0..599; Ole32.lib, Uuid.lib] */

/* IViewObject  [interface; shared; CE 3.0..399, 5.0..599; Oleaut32.lib, Uuid.lib] */
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */

/* IEnumOLEVERB  [interface; shared; CE 5.0..599; Ole32.lib, Uuid.lib] */

/* IOleItemContainer  [interface; shared; CE 5.0..599; Ole32.lib, Uuid.lib] */

/* IOleLink  [interface; shared; CE 5.0..599; Ole32.lib, Uuid.lib] */

/* IViewObject2  [interface; shared; CE 5.0..599; Ole32.lib, Uuid.lib] */
#endif /* _WIN32_WCE */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* OLEGETMONIKER  [enum; shared; CE 4.0..699] */
typedef enum tagOLEGETMONIKER { 
 OLEGETMONIKER_ONLYIFTHERE = 1,
 OLEGETMONIKER_FORCEASSIGN = 2,
 OLEGETMONIKER_UNASSIGN = 3,
 OLEGETMONIKER_TEMPFORUSER = 4
} OLEGETMONIKER;

/* OLELINKBIND  [enum; shared; CE 4.0..699] */
typedef enum tagOLELINKBIND { 
 OLELINKBIND_EVENIFCLASSDIFF = 1, 
} OLELINKBIND;

/* OLEUPDATE  [enum; shared; CE 4.0..699] */
typedef enum tagOLEUPDATE { 
 OLEUPDATE_ALWAYS = 1, 
 OLEUPDATE_ONCALL = 3 
} OLEUPDATE; 
typedef OLEUPDATE *LPOLEUPDATE;

/* OLEVERB  [struct; shared; CE 4.0..699] */
typedef struct tagOLEVERB { 
 LONG lVerb; 
 LPWSTR lpszVerbName; 
 DWORD fuFlags; 
 DWORD grfAttribs; 
} OLEVERB, *LPOLEVERB;

/* OLEVERBATTRIB  [enum; shared; CE 4.0..699] */
typedef enum tagOLEVERBATTRIB { 
 OLEVERBATTRIB_NEVERDIRTIES = 1, 
 OLEVERBATTRIB_ONCONTAINERMENU = 2 
} OLEVERBATTRIB;

/* OLEWHICHMK  [enum; shared; CE 4.0..699] */
typedef enum tagOLEWHICHMK { 
 OLEWHICHMK_CONTAINER = 1, 
 OLEWHICHMK_OBJREL = 2, 
 OLEWHICHMK_OBJFULL = 3 
} OLEWHICHMK;

/* STATDATA  [struct; shared; CE 4.0..699] */
typedef struct tagSTATDATA { 
 FORMATETC formatetc; 
 DWORD grfAdvf; 
 IadviseSink* pAdvSink; 
 DWORD dwConnection; 
} STATDATA;
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* IOleContainer::EnumObjects  [interface, function; shared; CE 5.0..699] */
HRESULT EnumObjects(
 DWORD grfFlags, //Value specifying what is to be enumerated
 IEnumUnknown **ppenum //Address of output variable that receives the 
); // IEnumUnknown interface pointer
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 2.11..2.12, 3.0..699 */

/* IOleAdviseHolder::Advise  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT Advise( 
 IAdviseSink* pAdvise, 
 DWORD* pdwConnection
);

/* IOleAdviseHolder::EnumAdvise  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT EnumAdvise( 
 IENumSTATDATA* ppEnumAdvise
);

/* IOleAdviseHolder::SendOnClose  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT SendOnClose()

/* IOleAdviseHolder::SendOnRename  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT SendOnRename( 
 IMoniker* pmk
);

/* IOleAdviseHolder::SendOnSave  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT SendOnSave()

/* IOleAdviseHolder::Unadvise  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT Unadvise( 
 DWORD dwConnection
);

/* IOleClientSite::GetContainer  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESEUT GetContainer( 
 LPOLECONTAINTER FAR* ppContainer
);

/* IOleClientSite::GetMoniker  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT GetMoniker( 
 DWORD dwAssign, 
 DWORD dwWhichMoniker, 
 IMoniker** ppmk
);

/* IOleClientSite::OnShowWindow  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT OnShowWindow( 
 BOOL fShow
);

/* IOleClientSite::RequestNewObjectLayout  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT RequestNewObjectLayout();

/* IOleClientSite::SaveObject  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT SaveObject(void);

/* IOleClientSite::ShowObject  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT ShowObject();

/* IOleObject::Advise  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT Advise( 
 IAdviseSink* pAdvSink, 
 DWORD* pdwConnection
);

/* IOleObject::Close  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT Close( 
 DWORD dwSaveOption
);

/* IOleObject::DoVerb  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT DoVerb( 
 LONG iVerb, 
 LPMSG lpmsg, 
 IOleClientSite* pActiveSite, 
 LONG lindex, 
 HWND hwndParent, 
 LPCRECT lprcPosRect 
);

/* IOleObject::EnumAdvise  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT IEnumSTATDATA( 
 IEnumSTATDATA** ppenumAdvise
);

/* IOleObject::EnumVerbs  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT EnumVerbs( 
 IEnumOleVerb** ppEnumOleVerb
);

/* IOleObject::GetClientSite  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT GetClientSite( 
 IOleClientSite** ppClientSite
);

/* IOleObject::GetClipboardData  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT GetClipboardData( 
 DWORD dwReserved, 
 IDataObject** ppDataObject
);

/* IOleObject::GetExtent  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT GetExtent( 
 DWORD dwDrawAspect, 
 SIZEL* psizel
);

/* IOleObject::GetMiscStatus  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT GetMiscStatus( 
 DWORD dwAspect, 
 DWORD* pdwStatus
);

/* IOleObject::GetMoniker  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT GetMoinker( 
 DWORD dwAssign, 
 DWORD dwWhichMoniker, 
 IMoniker** ppmk 
);

/* IOleObject::GetUserClassID  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT GetUserClassID( 
 CLSID* pClsid
);

/* IOleObject::GetUserType  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT GetUserType( 
 DWORD dwFormOfType, 
 LPOLESTR* pszUserType
);

/* IOleObject::InitFromData  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT InitFromData( 
 IDataObject* pDataObject, 
 BOOL fCreation, 
 DWORD dwReserved
);

/* IOleObject::IsUpToDate  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT IsUpToDate();

/* IOleObject::SetClientSite  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT SetClientSite( 
 IOleClientSite* pClientSite
);

/* IOleObject::SetColorScheme  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT SetColorScheme( 
 LOGPALETTE* pLogpal
);

/* IOleObject::SetExtent  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT SetExtent( 
 DWORD dwDrawAspect, 
 SIZEL* psizel
);

/* IOleObject::SetHostNames  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT SetHostNames( 
 LPCOLESTR szContainerApp, 
 LPCOLESTR szContainerObj
);

/* IOleObject::SetMoniker  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESUTL SetMoniker( 
 DWORD dwWhichMoniker, 
 IMoniker* pmk
);

/* IOleObject::Unadvise  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT Unadvise( 
 DWORD dwConnection
);

/* IOleObject::Update  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT Update();

/* IViewObject::Draw  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT Draw( 
 DWORD dwAspect, 
 LONG lindex, 
 void* pvAspect, 
 DVTARGETDEVICE* ptd, 
 HDC hicTargetDev, 
 HDC hdcDraw, 
 const LPRECTL lprcBounds, 
 const LPRECTL lprcWBounds, 
 BOOL (*) (DWORD) pfnContinue, 
 DWORD dwContinue
);

/* IViewObject::Freeze  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT Freeze( 
 DWORD dwAspect, 
 LONG lindex, 
 void* pvAspect, 
 DWORD* pdwFreeze
);

/* IViewObject::GetAdvise  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT GetAdvise( 
 DWORD* pdwAspect, 
 DWORD* padvf, 
 IAdviseSink** ppAdvSink
);

/* IViewObject::GetColorSet  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT GetColorSet( 
 DWORD dwAspect, 
 LONG lindex, 
 void* pvAspect, 
 DVTARGETDEVICE* ptd, 
 HDC hicTargetDev, 
 LOGPALETTE** ppColorSet 
);

/* IViewObject::SetAdvise  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT SetAdvise( 
 DWORD dwAspect, 
 DWORD advf, 
 IAdviseSink* pAdvSink
);

/* IViewObject::Unfreeze  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
HRESULT Unfreeze( 
 DWORD dwFreeze
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 3.0..699 */

/* IParseDisplayName::ParseDisplayName  [function; shared; CE 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT ParseDisplayName(
 IBindCtx* pbc,
 LPOLESTR pszDisplayName, 
 ULONG* pchEaten,
 IMoniker** ppmkOut 
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* IOleLink::BindIfRunning  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT BindIfRunning(void);

/* IOleLink::BindToSource  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT BindToSource(
 DWORD bindflags, 
 IBindCtx* pbc 
);

/* IOleLink::GetBoundSource  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT GetBoundSource(
 IUnknown** ppunk 
);

/* IOleLink::GetSourceDisplayName  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT GetSourceDisplayName(
 LPOLESTR* ppszDisplayName 
);

/* IOleLink::GetSourceMoniker  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT GetSourceMoniker(
 IMoniker** ppmk 
);

/* IOleLink::GetUpdateOptions  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT GetUpdateOptions(
 DWORD* pdwUpdateOpt 
);

/* IOleLink::SetSourceDisplayName  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT SetSourceDisplayName(
 LPCOLESTR pszStatusText
);

/* IOleLink::SetSourceMoniker  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT SetSourceMoniker(
 IMoniker* pmk,
 REFCLSID rclsid 
);

/* IOleLink::SetUpdateOptions  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT SetUpdateOptions(
 DWORD dwUpdateOpt
);

/* IOleLink::UnbindSource  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT UnbindSource(void);

/* IOleLink::Update  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Update(
 IBindCtx* pbc
);

/* IViewObject2::GetExtent  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT GetExtent(
 DWORD dwAspect,
 LONG lindex,
 DVTARGETDEVICE ptd,
 LPSIZEL lpsizel
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* IEnumOLEVERB::Clone  [function; shared; CE 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Clone(
 IEnumOLEVERB ** ppenum 
);

/* IEnumOLEVERB::Next  [function; shared; CE 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Next(
 ULONG celt, 
 LPOLEVERB rgelt, 
 ULONG * pceltFetched 
);

/* IEnumOLEVERB::Reset  [function; shared; CE 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Reset(void);

/* IEnumOLEVERB::Skip  [function; shared; CE 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Skip(
 ULONG celt 
);

/* IOleContainer::LockContainer  [function; shared; CE 5.0..699] */
HRESULT LockContainer( 
 BOOL fLock //Value indicating lock or unlock
);

/* IOleInPlaceSite::CanInPlaceActivate  [function; shared; CE 5.0..699] */
HRESULT CanInPlaceActivate();

/* IOleInPlaceSite::DeactivateAndUndo  [function; shared; CE 5.0..699] */
HRESULT IOleInPlaceSite::DeactivateAndUndo();

/* IOleInPlaceSite::DiscardUndoState  [function; shared; CE 5.0..699] */
HRESULT IOleInPlaceSite::DiscardUndoState();

/* IOleInPlaceSite::GetWindowContext  [function; shared; CE 5.0..699] */
HRESULT GetWindowContext( 
 IOleInPlaceFrame **ppFrame,
 IOleInPlaceUIWindow **ppDoc,
 LPRECT lprcPosRect,
 LPRECT lprcClipRect,
 LPOLEINPLACEFRAMEINFO lpFrameInfo
);

/* IOleInPlaceSite::OnInPlaceActivate  [function; shared; CE 5.0..699] */
HRESULT OnInPlaceActivate();

/* IOleInPlaceSite::OnInPlaceDeactivate  [function; shared; CE 5.0..699] */
HRESULT OnInPlaceDeactivate();

/* IOleInPlaceSite::OnPosRectChange  [function; shared; CE 5.0..699] */
HRESULT OnPosRectChange( 
 LPCRECT lprcPosRect 
);

/* IOleInPlaceSite::OnUIActivate  [function; shared; CE 5.0..699] */
HRESULT IOleInPlaceSite::OnUIActivate();

/* IOleInPlaceSite::OnUIDeactivate  [function; shared; CE 5.0..699] */
HRESULT OnUIDeactivate( 
 BOOL fUndoable 
);

/* IOleInPlaceSite::Scroll  [function; shared; CE 5.0..699] */
HRESULT Scroll( 
 SIZE scrollExtent 
);

/* IOleWindow::ContextSensitiveHelp  [function; shared; CE 5.0..699] */
HRESULT ContextSensitiveHelp( 
 BOOL fEnterMode 
);

/* IOleWindow::GetWindow  [function; shared; CE 5.0..699] */
HRESULT GetWindow( 
 HWND * phwnd 
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* typedef */
typedef OLEUPDATE *LPOLEUPDATE;

/* struct */
typedef struct tagOLEVERB { LONGlVerb;LPWSTRlpszVerbName;DWORDfuFlags;DWORDgrfAttribs;} OLEVERB, *LPOLEVERB;

/* function */
HRESULT BindIfRunning(void);
HRESULT BindToSource( DWORD bindflags, IBindCtx* pbc );
HRESULT CanInPlaceActivate();
HRESULT ContextSensitiveHelp( BOOL fEnterMode);
HRESULT DoVerb( LONG iVerb, LPMSG lpmsg, IOleClientSite * pActiveSite, LONG lindex, HWND hwndParent, LPCRECT lprcPosRect );
HRESULT DragEnter( IDataObject* pDataObject, DWORD grfKeyState, POINTL pt, DWORD* pdwEffect );
HRESULT DragLeave(void);
HRESULT DragOver( DWORD grfKeyState, POINTL pt, DWORD* pdwEffect );
HRESULT Drop( IDataObject* pDataObject, DWORD grfKeyState, POINTL pt, DWORD* pdwEffect );
HRESULT EnumAdvise( IENumSTATDATA *ppEnumAdvise,);
HRESULT EnumVerbs( IEnumOleVerb **ppEnumOleVerb);
HRESULT Freeze( DWORD dwAspect, LONG lindex, void *pvAspect, DWORD *pdwFreeze);
HRESULT GetAdvise( DWORD * pdwAspect, DWORD * padvf, IAdviseSink **ppAdvSink);
HRESULT GetBoundSource( IUnknown** ppunk );
HRESULT GetClientSite( IOleClientSite **ppClientSite);
HRESULT GetColorSet( DWORD dwAspect, LONG lindex, void * pvAspect, DVTARGETDEVICE * ptd, HDC hicTargetDev , LOGPALETTE ** ppColorSet );
HRESULT GetExtent( DWORD dwDrawAspect, SIZEL *psizel);
HRESULT GetMiscStatus( DWORD dwAspect, DWORD *pdwStatus);
HRESULT GetMoinker( DWORD dwAssign, DWORD dwWhichMoniker , IMoniker ** ppmk );
HRESULT GetMoniker( DWORD dwAssign, DWORD dwWhichMoniker, IMoniker **ppmk);
HRESULT GetSourceDisplayName( LPOLESTR* ppszDisplayName );
HRESULT GetSourceMoniker( IMoniker** ppmk );
HRESULT GetUpdateOptions( DWORD* pdwUpdateOpt );
HRESULT GetUserClassID( CLSID *pClsid);
HRESULT GetUserType( DWORD dwFormOfType, LPOLESTR *pszUserType);
HRESULT InitFromData( IDataObject *pDataObject, BOOL fCreation, DWORD dwReserved);
HRESULT IsUpToDate();
HRESULT OnInPlaceActivate();
HRESULT OnInPlaceDeactivate();
HRESULT OnPosRectChange( LPCRECT lprcPosRect);
HRESULT OnShowWindow( BOOL fShow);
HRESULT OnUIDeactivate( BOOL fUndoable);
HRESULT RequestNewObjectLayout();
HRESULT RequestNewObjectlayout();
HRESULT SaveObject( void );
HRESULT SendOnClose()
HRESULT SendOnRename( IMoniker *pmk,);
HRESULT SendOnSave()
HRESULT SetAdvise( DWORD dwAspect, DWORD advf, IAdviseSink *pAdvSink);
HRESULT SetClientSite( IOleClientSite *pClientSite);
HRESULT SetColorScheme( LOGPALETTE *pLogpal);
HRESULT SetExtent( DWORD dwDrawAspect, SIZEL *psizel);
HRESULT SetHostNames( LPCOLESTR szContainerApp, LPCOLESTR szContainerObj);
HRESUTL SetMoniker(  DWORD dwWhichMoinker,  IMoniker *pmk);
HRESULT SetSourceDisplayName( LPCOLESTR pszStatusText );
HRESULT SetSourceMoniker( IMoniker* pmk, REFCLSID rclsid );
HRESULT SetUpdateOptions( DWORD dwUpdateOpt );
HRESULT ShowObject();
HRESULT UnbindSource(void);
HRESULT Unfreeze( DWORD dwFreeze);
HRESULT Update();

#endif /* _OLEIDL_ */
