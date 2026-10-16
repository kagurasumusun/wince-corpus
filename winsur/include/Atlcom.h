/* Atlcom.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 72 declarations, 0 outlines, 0 base types, 0 extra macros, 15 extra decls
 */
#ifndef _ATLCOM_
#define _ATLCOM_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 200 && _WIN32_WCE < 210) || (_WIN32_WCE >= 212 && _WIN32_WCE < 400)) /* CE 2.0..209, 2.12..399 */

/* CComObjectRoot  [typedef; ce-only; CE 2.0..209, 2.12..399] */
typedef CComObjectRootEx <CComObjectThreadModel> CComObjectRoot;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 200 && _WIN32_WCE < 210)) /* CE 2.0..209 */

/* CComCachedTearOffObject::AddRef  [function; ce-only; CE 2.0..209] */
ULONG AddRef( );

/* CComCachedTearOffObject::CComCachedTearOffObject  [function; ce-only; CE 2.0..209] */
CComCachedTearOffObject( void* pv );

/* CComCachedTearOffObject::FinalConstruct  [function; ce-only; CE 2.0..209] */
HRESULT FinalConstruct( );

/* CComCachedTearOffObject::FinalRelease  [function; ce-only; CE 2.0..209] */
void FinalRelease( );

/* CComCachedTearOffObject::QueryInterface  [function; ce-only; CE 2.0..209] */
HRESULT QueryInterface( REFIID iid , void** ppvObject );

/* CComCachedTearOffObject::Release  [function; ce-only; CE 2.0..209] */
ULONG Release( );

/* CComObject::AddRef  [function; ce-only; CE 2.0..209] */
ULONG AddRef( );

/* CComObject::CComObject  [function; ce-only; CE 2.0..209] */
CComObject( void* = NULL );

/* CComObject::CreateInstance  [function; ce-only; CE 2.0..209] */
static HRESULT CreateInstance( CComObject <Base>** pp);

/* CComObject::QueryInterface  [function; ce-only; CE 2.0..209] */
HRESULT QueryInterface( REFIID iid, void** ppvObject);

/* CComObject::Release  [function; ce-only; CE 2.0..209] */
ULONG Release( );

/* CComObjectGlobal::AddRef  [function; ce-only; CE 2.0..209] */
ULONG AddRef( );

/* CComObjectGlobal::QueryInterface  [function; ce-only; CE 2.0..209] */
HRESULT QueryInterface( REFIID iid, void** ppvObject);

/* CComObjectGlobal::Release  [function; ce-only; CE 2.0..209] */
ULONG Release( );

/* CComObjectNoLock::AddRef  [function; ce-only; CE 2.0..209] */
ULONG AddRef( );

/* CComObjectNoLock::CComObjectNoLock  [function; ce-only; CE 2.0..209] */
CComObjectNoLock( void* = NULL );

/* CComObjectNoLock::QueryInterface  [function; ce-only; CE 2.0..209] */
HRESULT QueryInterface( REFIID iid, void** ppvObject);

/* CComObjectNoLock::Release  [function; ce-only; CE 2.0..209] */
ULONG Release( );

/* CComObjectRootEx::FinalConstruct  [function; ce-only; CE 2.0..209] */
HRESULT FinalConstruct( );

/* CComObjectRootEx::FinalRelease  [function; ce-only; CE 2.0..209] */
void FinalRelease( );

/* CComObjectRootEx::InternalAddRef  [function; ce-only; CE 2.0..209] */
ULONG InternalAddRef( );

/* CComObjectRootEx::InternalQueryInterface  [function; ce-only; CE 2.0..209] */
HRESULT InternalQueryInterface( void* pThis, const _ATL_INTMAP_ENTRY* pEntries, REFIiD iid, void** ppvObject);

/* CComObjectRootEx::InternalRelease  [function; ce-only; CE 2.0..209] */
ULONG InternalRelease( );

/* CComObjectRootEx::Lock  [function; ce-only; CE 2.0..209] */
void Lock( );

/* CComObjectRootEx::OuterAddRef  [function; ce-only; CE 2.0..209] */
ULONG OuterAddRef( );

/* CComObjectRootEx::OuterQueryInterface  [function; ce-only; CE 2.0..209] */
HRESULT OuterQueryInterface( REFIID iid, void** ppvObject);

/* CComObjectRootEx::OuterRelease  [function; ce-only; CE 2.0..209] */
ULONG OuterRelease( );

/* CComObjectRootEx::Unlock  [function; ce-only; CE 2.0..209] */
void Unlock( );

/* CComObjectStack::AddRef  [function; ce-only; CE 2.0..209] */
ULONG AddRef( );

/* CComObjectStack::QueryInterface  [function; ce-only; CE 2.0..209] */
HRESULT QueryInterface( REFIID iid, void** ppvObject);

/* CComObjectStack::Release  [function; ce-only; CE 2.0..209] */
ULONG Release( );

/* CComPolyObject::AddRef  [function; ce-only; CE 2.0..209] */
ULONG AddRef( );

/* CComPolyObject::CComPolyObject  [function; ce-only; CE 2.0..209] */
CComPolyObject( void* pv );

/* CComPolyObject::FinalConstruct  [function; ce-only; CE 2.0..209] */
HRESULT FinalConstruct( );

/* CComPolyObject::FinalRelease  [function; ce-only; CE 2.0..209] */
void FinalRelease( );

/* CComPolyObject::QueryInterface  [function; ce-only; CE 2.0..209] */
HRESULT QueryInterface( REFIID iid, void** ppvObject);

/* CComPolyObject::Release  [function; ce-only; CE 2.0..209] */
ULONG Release( );

/* CComTearOffObject::AddRef  [function; ce-only; CE 2.0..209] */
ULONG AddRef( );

/* CComTearOffObject::CComTearOffObject  [function; ce-only; CE 2.0..209] */
CComTearOffObject( void* p);

/* CComTearOffObject::QueryInterface  [function; ce-only; CE 2.0..209] */
HRESULT QueryInterface( );

/* CComTearOffObject::Release  [function; ce-only; CE 2.0..209] */
ULONG Release( );

/* IConnectionPointContainerImpl::EnumConnectionPoints  [function; ce-only; CE 2.0..209] */
HRESULT EnumConnectionPoints( IEnumConnectionPoints **ppEnum );

/* IConnectionPointContainerImpl::FindConnectionPoint  [function; ce-only; CE 2.0..209] */
HRESULT FindConnectionPoint( REFIID riid, IConnectionPoint** ppCP );

/* IConnectionPointImpl::Advise  [function; ce-only; CE 2.0..209] */
HRESULT Advise( IUnknown* pUnkSink, DWORD* pdwCookie );

/* IConnectionPointImpl::EnumConnections  [function; ce-only; CE 2.0..209] */
HRESULT EnumConnections( IEnumConnections** ppEnum );

/* IConnectionPointImpl::GetConnectionInterface  [function; ce-only; CE 2.0..209] */
HRESULT GetConnectionInterface( IID* piid2 );

/* IConnectionPointImpl::GetConnectionPointContainer  [function; ce-only; CE 2.0..209] */
HRESULT GetConnectionPointContainer( IConnectionPointContainer** ppCPC );

/* IConnectionPointImpl::Unadvise  [function; ce-only; CE 2.0..209] */
HRESULT Unadvise( DWORD dwCookie );

/* ISupportErrorInfoImpl::InterfaceSupportsErrorInfo  [function; ce-only; CE 2.0..209] */
HRESULT InterfaceSupportsErrorInfo( REFIID riid );
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 200 && _WIN32_WCE < 210) || (_WIN32_WCE >= 212 && _WIN32_WCE < 400)) /* CE 2.0..209, 2.12..399 */

/* CComAggObject::AddRef  [function; ce-only; CE 2.0..209, 2.12..399] */
ULONG AddRef( );

/* CComAggObject::CComAggObject  [function; ce-only; CE 2.0..209, 2.12..399] */
CComAggObject( void* pv );

/* CComAggObject::FinalConstruct  [function; ce-only; CE 2.0..209, 2.12..399] */
HRESULT FinalConstruct( );

/* CComAggObject::FinalRelease  [function; ce-only; CE 2.0..209, 2.12..399] */
void FinalRelease( );

/* CComAggObject::QueryInterface  [function; ce-only; CE 2.0..209, 2.12..399] */
HRESULT QueryInterface( REFIID iid, void** ppvObject);

/* CComAggObject::Release  [function; ce-only; CE 2.0..209, 2.12..399] */
ULONG Release( );

/* CComClassFactory2::CreateInstance  [function; ce-only; CE 2.0..209, 2.12..399] */
HRESULT CreateInstance( LPUNKNOWN pUnkOuter, REFIID riid, 
void** ppvObj );

/* CComClassFactory2::CreateInstanceLic  [function; ce-only; CE 2.0..209, 2.12..399] */
HRESULT CreateInstanceLic( IUnknown* pUnkOuter, 
IUnknown* pUnkReserved, REFIID riid, BSTR bstrKey, void** ppvObject );

/* CComClassFactory2::GetLicInfo  [function; ce-only; CE 2.0..209, 2.12..399] */
HRESULT GetLicInfo( LICINFO* pLicInfo )

/* CComClassFactory2::LockServer  [function; ce-only; CE 2.0..209, 2.12..399] */
HRESULT LockServer( BOOL fLock );

/* CComClassFactory2::RequestLicKey  [function; ce-only; CE 2.0..209, 2.12..399] */
HRESULT RequestLicKey( DWORD dwReserved, BSTR* pbstrKey );

/* CComClassFactory::CreateInstance  [function; ce-only; CE 2.0..209, 2.12..399] */
HRESULT CreateInstance( LPUNKNOWN pUnkOuter, REFIID riid, 
void** ppvObj );

/* CComClassFactory::LockServer  [function; ce-only; CE 2.0..209, 2.12..399] */
HRESULT LockServer( BOOL fLock );

/* CComClassFactorySingleton::CreateInstance  [function; ce-only; CE 2.0..209, 2.12..399] */
HRESULT CreateInstance( LPUNKNOWN pUnkOuter, REFIID riid, 
void** ppvObj );

/* CComCoClass::Error  [function; ce-only; CE 2.0..209, 2.12..399] */
static HRESULT Error( LPCOLESTR lpszDesc, 
const IID& iid = GUID_NULL, HRESULT hRes = 0 );
static HRESULT Error( LPCOLESTR lpszDesc, 
DWORD dwHelpID, LPCOLESTR lpszHelpFile, 
const IID& iid = GUID_NULL, HRESULT hRes = 0 );
static HRESULT Error( LPCSTR lpszDesc, const IID& iid = GUID_NULL, 
HRESULT hRes = 0 ); static HRESULT Error( LPCSTR lpszDesc, 
DWORD dwHelpID, LPCSTR lpszHelpFile, const IID& iid = GUID_NULL, 
HRESULT hRes = 0 ); static HRESULT Error( UINT nID, 
const IID& iid = GUID_NULL, HRESULT hRes = 0, 
HINSTANCE hInst = _Module.GetResourceInstance( ) );
static HRESULT Error( UINT nID, DWORD dwHelpID, 
LPCOLESTR lpszHelpFile, const IID& iid = GUID_NULL, 
HRESULT hRes = 0, HINSTANCE hInst = _Module.GetResourceInstance( ) );

/* CComCoClass::GetObjectDescription  [function; ce-only; CE 2.0..209, 2.12..399] */
static LPCTSTR WINAPI GetObjectDescription( );

/* CComContainedObject::AddRef  [function; ce-only; CE 2.0..209, 2.12..399] */
ULONG AddRef( );

/* CComContainedObject::CComContainedObject  [function; ce-only; CE 2.0..209, 2.12..399] */
CComContainedObject( void* pv );

/* CComContainedObject::QueryInterface  [function; ce-only; CE 2.0..209, 2.12..399] */
HRESULT QueryInterface( REFIID iid, void** ppvObject );

/* CComContainedObject::Release  [function; ce-only; CE 2.0..209, 2.12..399] */
ULONG Release( );
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 212 && _WIN32_WCE < 400)) /* CE 2.12..399 */

/* AtlAdviseSinkMap  [function; ce-only; CE 2.12..399] */
HRESULT AtlAdviseSinkMap( T* pT, bool bAdvise );

/* AtlReportError  [function; ce-only; CE 2.12..399] */
HRESULT WINAPI AtlReportError( const CLSID& clsid, LPCOLESTR lpszDesc, 
const IID& iid = GUID_NULL, HRESULT hRes = 0 );
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
CComAggObject( void* pv );
CComCachedTearOffObject( void* pv );
CComContainedObject( void* pv );
CComObject( void* = NULL );
CComObjectNoLock( void* = NULL );
CComPolyObject( void* pv );
CComTearOffObject( void* p);
HRESULT FinalConstruct( );
void FinalRelease( );
ULONG InternalAddRef( );
HRESULT InternalQueryInterface( void* pThis, const _ATL_INTMAP_ENTRY* pEntries, REFIiD iid, void** ppvObject);
ULONG InternalRelease( );
ULONG OuterAddRef( );
HRESULT OuterQueryInterface( REFIID iid, void** ppvObject);
ULONG OuterRelease( );

#endif /* _ATLCOM_ */
