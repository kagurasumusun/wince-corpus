/* Atlbase.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 3 declarations, 10 outlines, 0 base types, 0 extra macros, 29 extra decls
 */
#ifndef _ATLBASE_
#define _ATLBASE_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* CComModule::UpdateRegistryFromResourceD  [struct; ce-only] */

/* CComModule::UpdateRegistryFromResourceS  [struct; ce-only] */

/* CComMultiThreadModel::AutoCriticalSection  [typedef; ce-only] */

/* CComMultiThreadModel::CriticalSection  [typedef; ce-only] */

/* CComMultiThreadModel::ThreadModelNoCS  [typedef; ce-only] */

/* CComMultiThreadModelNoCS::AutoCriticalSection  [typedef; ce-only] */

/* CComMultiThreadModelNoCS::CriticalSection  [typedef; ce-only] */

/* CComMultiThreadModelNoCS::ThreadModelNoCS  [typedef; ce-only] */

/* CComSingleThreadModel::AutoCriticalSection  [typedef; ce-only] */

/* CComSingleThreadModel::CriticalSection  [typedef; ce-only] */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 212 && _WIN32_WCE < 400)) /* CE 2.12..399 */

/* AtlInternalQueryInterface  [function; ce-only; CE 2.12..399] */
HRESULT AtlInternalQueryInterface( void* pThis, 
const _ATL_INTMAP_ENTRY* pEntries, REFIID iid, void** ppvObject );

/* AtlTrace  [function; ce-only; CE 2.12..399] */
void _cdecl AtlTrace( LPCTSTR lpszFormat, ... );

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
HRESULT AtlSetChildSite( IUnknown* punkChild, IUnknown* punkParent );
HRESULT AtlUnadvise( IUnknown* pUnkCP, const IID& iid, DWORD dw );
HRESULT AtlAdvise( IUnknown* pUnkCP, IUnknown* pUnk, const IID& iid, LPDWORD pdw );
void CComAutoCriticalSection( );
ULONG CComPtr( VOID );
ULONG CComQIPtr( VOID );
CComVariant( ); CComVariant( const CComVariant& varSrc); CComVariant( const VARIANT& varSrc); CComVariant( LPCOLESTR lpsz ); CComVariant( LPCSTR lpsz ); CComVariant( BSTR bstrSrc ); CComVariant( bool bSrc ); CComVariant( int nSrc ); CComVariant( BYTE nSrc ); CComVariant( short nSrc ); CComVariant( long nSrc, VARTYPE vtSrc = VT_I4 ); CComVariant( float fltSrc ); CComVariant( double dblSrc ); CComVariant( CY cySrc ); CComVariant( IDispatch* pSrc ); CComVariant( IUnknown* pSrc );
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
HRESULT RevokeClassObjects( );
void Term( );
HRESULT UpdateRegistryClass( const CLSID& clsid, LPCTSTR lpszProgID, LPCTSTR lpszVerIndProgID, UINT nDescID, DWORD dwFlags, BOOL bRegister );

#endif /* _ATLBASE_ */
