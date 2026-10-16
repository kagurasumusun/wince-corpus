/* Atlbase.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 87 declarations, 0 outlines, 0 base types, 0 extra macros, 26 extra decls
 */
#ifndef _ATLBASE_
#define _ATLBASE_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 200 && _WIN32_WCE < 210)) /* CE 2.0..209 */

/* CComModule::UpdateRegistryFromResourceD  [struct; ce-only; CE 2.0..209] */
HRESULT UpdateRegistryFromResourceD( LPCTSTR lpszRes, BOOL bRegister, struct _ATL_REGMAP_ENTRY* pMapEntries = NULL );

/* CComModule::UpdateRegistryFromResourceS  [struct; ce-only; CE 2.0..209] */
HRESULT UpdateRegistryFromResourceS( LPCTSTR lpszRes, BOOL bRegister, struct _ATL_REGMAP_ENTRY* pMapEntries = NULL );

/* CComMultiThreadModel::AutoCriticalSection  [typedef; ce-only; CE 2.0..209] */
typedef CComAutoCriticalSection AutoCriticalSection

/* CComMultiThreadModel::CriticalSection  [typedef; ce-only; CE 2.0..209] */
typedef CComCriticalSection CriticalSection

/* CComMultiThreadModel::ThreadModelNoCS  [typedef; ce-only; CE 2.0..209] */
typedef CComMultiThreadModelNoCS ThreadModelNoCS

/* CComMultiThreadModelNoCS::AutoCriticalSection  [typedef; ce-only; CE 2.0..209] */
typedef CComFakeCriticalSection AutoCriticalSection

/* CComMultiThreadModelNoCS::CriticalSection  [typedef; ce-only; CE 2.0..209] */
typedef CComFakeCriticalSection CriticalSection

/* CComMultiThreadModelNoCS::ThreadModelNoCS  [typedef; ce-only; CE 2.0..209] */
typedef CComMultiThreadModelNoCS ThreadModelNoCS

/* CComSingleThreadModel::AutoCriticalSection  [typedef; ce-only; CE 2.0..209] */
typedef CComFakeCriticalSection AutoCriticalSection

/* CComSingleThreadModel::CriticalSection  [typedef; ce-only; CE 2.0..209] */
typedef CComFakeCriticalSection CriticalSection
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 200 && _WIN32_WCE < 210)) /* CE 2.0..209 */

/* CComAutoCriticalSection::CComAutoCriticalSection  [function; ce-only; CE 2.0..209] */
void CComAutoCriticalSection( );

/* CComAutoCriticalSection::Unlock  [function; ce-only; CE 2.0..209] */
void Unlock( );

/* CComFakeCriticalSection::Init  [function; ce-only; CE 2.0..209] */
void Init( );

/* CComFakeCriticalSection::Lock  [function; ce-only; CE 2.0..209] */
void Lock( );

/* CComFakeCriticalSection::Term  [function; ce-only; CE 2.0..209] */
void Term( );

/* CComFakeCriticalSection::Unlock  [function; ce-only; CE 2.0..209] */
void Unlock( );

/* CComModule::GetClassObject  [function; ce-only; CE 2.0..209] */
HRESULT GetClassObject( REFCLSID rclsid, REFIID riid, LPVOID* ppv );

/* CComModule::GetLockCount  [function; ce-only; CE 2.0..209] */
LONG GetLockCount( );

/* CComModule::GetModuleInstance  [function; ce-only; CE 2.0..209] */
HINSTANCE GetModuleInstance( );

/* CComModule::GetResourceInstance  [function; ce-only; CE 2.0..209] */
HINSTANCE GetResourceInstance( );

/* CComModule::GetTypeLibInstance  [function; ce-only; CE 2.0..209] */
HINSTANCE GetTypeLibInstance( );

/* CComModule::Init  [function; ce-only; CE 2.0..209] */
void Init( _ATL_OBJMAP_ENTRY* p, HINSTANCE h );

/* CComModule::Lock  [function; ce-only; CE 2.0..209] */
LONG Lock( );

/* CComModule::RegisterClassHelper  [function; ce-only; CE 2.0..209] */
HRESULT RegisterClassHelper( const CLSID& clsid, LPCTSTR lpszProgID, LPCTSTR lpszVerIndProgID, UINT nDescID, DWORD dwFlags );

/* CComModule::RegisterClassObjects  [function; ce-only; CE 2.0..209] */
HRESULT RegisterClassObjects( DWORD dwClsContext, DWORD* dwFlags );

/* CComModule::RegisterServer  [function; ce-only; CE 2.0..209] */
HRESULT RegisterServer( BOOL bRegTypeLib = FALSE, const CLSID* pCLSID = NULL );

/* CComModule::RegisterTypeLib  [function; ce-only; CE 2.0..209] */
HRESULT RegisterTypeLib( );

/* CComModule::RevokeClassObjects  [function; ce-only; CE 2.0..209] */
HRESULT RevokeClassObjects( );

/* CComModule::Term  [function; ce-only; CE 2.0..209] */
void Term( );

/* CComModule::Unlock  [function; ce-only; CE 2.0..209] */
LONG Unlock( );

/* CComModule::UnregisterClassHelper  [function; ce-only; CE 2.0..209] */
HRESULT UnregisterClassHelper( const CLSID& clsid, LPCTSTR lpszProgID, LPCTSTR lpszVerIndProgID );

/* CComModule::UnregisterServer  [function; ce-only; CE 2.0..209] */
HRESULT UnregisterServer( const CLSID* pCLSID = NULL );

/* CComModule::UpdateRegistryClass  [function; ce-only; CE 2.0..209] */
HRESULT UpdateRegistryClass( const CLSID& clsid, LPCTSTR lpszProgID, LPCTSTR lpszVerIndProgID, UINT nDescID, DWORD dwFlags, BOOL bRegister );

/* CComMultiThreadModel::Decrement  [function; ce-only; CE 2.0..209] */
static ULONG Decrement( LPLONG p);

/* CComMultiThreadModel::Increment  [function; ce-only; CE 2.0..209] */
static ULONG Increment( LPLONG p);

/* CComMultiThreadModelNoCS::Decrement  [function; ce-only; CE 2.0..209] */
static ULONG Decrement( LPLONG p);

/* CComMultiThreadModelNoCS::Increment  [function; ce-only; CE 2.0..209] */
static ULONG Increment( LPLONG p);

/* CComPtr::CComPtr  [function; ce-only; CE 2.0..209] */
ULONG CComPtr( VOID );

/* CComPtr::operator !  [function; ce-only; CE 2.0..209] */
BOOL operator !( VOID )

/* CComPtr::operator &  [function; ce-only; CE 2.0..209] */
T** operator &( VOID )

/* CComPtr::operator *  [function; ce-only; CE 2.0..209] */
T& operator *( VOID )

/* CComPtr::operator ->  [function; ce-only; CE 2.0..209] */
T* operator ->( VOID )

/* CComPtr::operator T*  [function; ce-only; CE 2.0..209] */
operator T*( VOID )

/* CComPtr::Release  [function; ce-only; CE 2.0..209] */
ULONG Release( VOID );

/* CComQIPtr::CComQIPtr  [function; ce-only; CE 2.0..209] */
ULONG CComQIPtr( VOID );

/* CComQIPtr::operator !  [function; ce-only; CE 2.0..209] */
BOOL operator !( VOID )

/* CComQIPtr::operator &  [function; ce-only; CE 2.0..209] */
T** operator &( VOID )

/* CComQIPtr::operator *  [function; ce-only; CE 2.0..209] */
T& operator *( VOID )

/* CComQIPtr::operator ->  [function; ce-only; CE 2.0..209] */
T* operator ->( VOID )

/* CComQIPtr::operator T*  [function; ce-only; CE 2.0..209] */
operator T*( VOID )

/* CComQIPtr::Release  [function; ce-only; CE 2.0..209] */
ULONG Release( VOID );

/* CComSingleThreadModel::Decrement  [function; ce-only; CE 2.0..209] */
static ULONG Decrement( LPLONG p);

/* CComSingleThreadModel::Increment  [function; ce-only; CE 2.0..209] */
static ULONG Increment( LPLONG p);

/* CComVariant::Attach  [function; ce-only; CE 2.0..209] */
HRESULT Attach( VARIANT* pSrc);

/* CComVariant::CComVariant  [function; ce-only; CE 2.0..209] */
CComVariant( );
CComVariant( const CComVariant& varSrc);
CComVariant( const VARIANT& varSrc);
CComVariant( LPCOLESTR lpsz );
CComVariant( LPCSTR lpsz );
CComVariant( BSTR bstrSrc );
CComVariant( bool bSrc );
CComVariant( int nSrc );
CComVariant( BYTE nSrc );
CComVariant( short nSrc );
CComVariant( long nSrc, VARTYPE vtSrc = VT_I4 );
CComVariant( float fltSrc );
CComVariant( double dblSrc );
CComVariant( CY cySrc );
CComVariant( IDispatch* pSrc );
CComVariant( IUnknown* pSrc );

/* CComVariant::ChangeType  [function; ce-only; CE 2.0..209] */
HRESULT ChangeType( VARTYPE vtNew, const VARIANT* pSrc = NULL);

/* CComVariant::Clear  [function; ce-only; CE 2.0..209] */
HRESULT Clear( );

/* CComVariant::Copy  [function; ce-only; CE 2.0..209] */
HRESULT Copy( );

/* CComVariant::Detach  [function; ce-only; CE 2.0..209] */
HRESULT Detach( VARIANT* pSrc);

/* CComVariant::operator =  [function; ce-only; CE 2.0..209] */
CComVariant& operator =(const CComVAriant& varSrc);
CComVariant& operator =(const VARIANT& varSrc);
CComVariant& operator =(LPCOLESTR lpsz);
CComVariant& operator =( LPCSTR lpsz );
CComVariant& operator =( BSTR bstrSrc );
CComVariant& operator =( bool bSrc );
CComVariant& operator =( int nSrc );
CComVariant& operator =( BYTE nSrc );
CComVariant& operator =( short nSrc );
CComVariant& operator =( long nSrc );
CComVariant& operator =( float nSrc );
CComVariant& operator =( double nSrc );
CComVariant& operator =( CY cySrc );
CComVariant& operator =( IDispatch* pSrc );
CComVariant& operator =( IUnknown* pSrc );

/* CComVariant::ReadFromStream  [function; ce-only; CE 2.0..209] */
HRESULT ReadFromStream( ISTREAM* pStream);

/* CComVariant::WriteToStream  [function; ce-only; CE 2.0..209] */
HRESULT WriteToStream( IStream* pStream);

/* CRegKey::Attach  [function; ce-only; CE 2.0..209] */
void Attach( HKEY hKey );

/* CRegKey::Close  [function; ce-only; CE 2.0..209] */
LONG Close( );

/* CRegKey::Create  [function; ce-only; CE 2.0..209] */
LONG Create( HKEY hKeyParent, LPCTSTR lpszKeyName, LPTSTR lpszClass = REG_NONE, DWORD dwOptions = REG_OPTION_NON_VOLATILE, REGSAM samDesired = KEY_ALL_ACCESS, LPSECURITY_ATTRIBUTES lpSecAttr = NULL, LPDWORD lpdwDisposition = NULL );

/* CRegKey::DeleteSubKey  [function; ce-only; CE 2.0..209] */
LONG DeleteSubKey( LPCTSTR lpszSubKey );

/* CRegKey::DeleteValue  [function; ce-only; CE 2.0..209] */
LONG DeleteValue( LPCTSTR lpszValue );

/* CRegKey::Detach  [function; ce-only; CE 2.0..209] */
HKEY Detach( );

/* CRegKey::Open  [function; ce-only; CE 2.0..209] */
LONG Open( HKEY hKeyParent, LPCTSTR lpszKeyName, REGSAM samDesired = KEY_ALL_ACCESS );

/* CRegKey::QueryValue  [function; ce-only; CE 2.0..209] */
LONG QueryValue( DWORD& dwValue, LPCTSTR lpszValueName );

/* CRegKey::RecurseDeleteKey  [function; ce-only; CE 2.0..209] */
LONG RecurseDeleteKey( LPCTSTR lpszKey );

/* CRegKey::SetKeyValue  [function; ce-only; CE 2.0..209] */
LONG SetKeyValue( LPCTSTR lpszKeyName, LPCTSTR lpszValue, LPCTSTR lpszValueName = NULL );

/* CRegKey::SetValue  [function; ce-only; CE 2.0..209] */
LONG SetValue( DWORD dwValue, LPCTSTR lpszValueName );
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 200 && _WIN32_WCE < 210) || (_WIN32_WCE >= 212 && _WIN32_WCE < 400)) /* CE 2.0..209, 2.12..399 */

/* CComBSTR::Append  [function; ce-only; CE 2.0..209, 2.12..399] */
void Append( const CComBSTR& bstrSrc );

/* CComBSTR::AppendBSTR  [function; ce-only; CE 2.0..209, 2.12..399] */
void AppendBSTR( BSTR p );

/* CComBSTR::Attach  [function; ce-only; CE 2.0..209, 2.12..399] */
void Attach( BSTR src );

/* CComBSTR::Detach  [function; ce-only; CE 2.0..209, 2.12..399] */
BSTR Detach( );

/* CComBSTR::Empty  [function; ce-only; CE 2.0..209, 2.12..399] */
void Empty( );

/* CComBSTR::Length  [function; ce-only; CE 2.0..209, 2.12..399] */
unsigned int Length( ) const;

/* CComBSTR::ReadFromStream  [function; ce-only; CE 2.0..209, 2.12..399] */
HRESULT ReadFromStream( IStream* pStream );

/* CComBSTR::WriteToStream  [function; ce-only; CE 2.0..209, 2.12..399] */
HRESULT WriteToStream( IStream* pStream );
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 212 && _WIN32_WCE < 400)) /* CE 2.12..399 */

/* Atladvise  [function; ce-only; CE 2.12..399] */
HRESULT AtlAdvise( IUnknown* pUnkCP, IUnknown* pUnk, const IID& iid, 
LPDWORD pdw );

/* AtlInternalQueryInterface  [function; ce-only; CE 2.12..399] */
HRESULT AtlInternalQueryInterface( void* pThis, 
const _ATL_INTMAP_ENTRY* pEntries, REFIID iid, void** ppvObject );

/* AtlSetChildSite  [function; ce-only; CE 2.12..399] */
HRESULT AtlSetChildSite( IUnknown* punkChild, IUnknown* punkParent );

/* AtlTrace  [function; ce-only; CE 2.12..399] */
void _cdecl AtlTrace( LPCTSTR lpszFormat, ... );

/* AtlUnadvise  [function; ce-only; CE 2.12..399] */
HRESULT AtlUnadvise( IUnknown* pUnkCP, const IID& iid, DWORD dw );

/* InlineIsEqualIUnknown  [function; ce-only; CE 2.12..399] */
BOOL InlineIsEqualUnknown( REFGUID rguid1 );
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* typedef */
typedef CComAutoCriticalSection AutoCriticalSection;
typedef CComCriticalSection CriticalSection;
typedef CComMultiThreadModelNoCS ThreadModelNoCS;

/* function */
void Append( const CComBSTR& bstrSrc );
void AppendBSTR( BSTR p );
void CComAutoCriticalSection( );
ULONG CComPtr( VOID );
ULONG CComQIPtr( VOID );
CComVariant( ); CComVariant( const CComVariant& varSrc); CComVariant( const VARIANT& varSrc); CComVariant( LPCOLESTR lpsz ); CComVariant( LPCSTR lpsz ); CComVariant( BSTR bstrSrc ); CComVariant( bool bSrc ); CComVariant( int nSrc ); CComVariant( BYTE nSrc ); CComVariant( short nSrc ); CComVariant( long nSrc, VARTYPE vtSrc = VT_I4 ); CComVariant( float fltSrc ); CComVariant( double dblSrc ); CComVariant( CY cySrc ); CComVariant( IDispatch* pSrc ); CComVariant( IUnknown* pSrc );
HRESULT ChangeType( VARTYPE vtNew, const VARIANT* pSrc = NULL);
static ULONG Decrement( LPLONG p);
LONG DeleteSubKey( LPCTSTR lpszSubKey );
void Empty( );
LONG GetLockCount( );
HINSTANCE GetModuleInstance( );
HINSTANCE GetResourceInstance( );
HINSTANCE GetTypeLibInstance( );
static ULONG Increment( LPLONG p);
LONG QueryValue( DWORD& dwValue, LPCTSTR lpszValueName );
LONG RecurseDeleteKey( LPCTSTR lpszKey );
HRESULT RegisterServer( BOOL bRegTypeLib = FALSE, const CLSID* pCLSID = NULL );
HRESULT RevokeClassObjects( );
LONG SetKeyValue( LPCTSTR lpszKeyName, LPCTSTR lpszValue, LPCTSTR lpszValueName = NULL );
void Term( );
HRESULT UnregisterServer( const CLSID* pCLSID = NULL );
HRESULT UpdateRegistryClass( const CLSID& clsid, LPCTSTR lpszProgID, LPCTSTR lpszVerIndProgID, UINT nDescID, DWORD dwFlags, BOOL bRegister );

#endif /* _ATLBASE_ */
