/* Oleidl.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 8 constants, 7 declarations, 10 outlines, 0 base types, 0 extra macros, 56 extra decls
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

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* IOleContainer::EnumObjects  [interface, function; shared; CE 5.0..699] */
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
