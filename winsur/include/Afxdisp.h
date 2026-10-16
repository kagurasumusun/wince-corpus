/* Afxdisp.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 73 declarations, 0 outlines, 0 base types, 0 extra macros, 47 extra decls
 */
#ifndef _AFXDISP_
#define _AFXDISP_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 200 && _WIN32_WCE < 210)) /* CE 2.0..209 */

/* CConnectionPoint::GetMaxConnections  [function; ce-only; CE 2.0..209] */
virtual int GetMaxConnections( );

/* CConnectionPoint::OnAdvise  [function; ce-only; CE 2.0..209] */
virtual void OnAdvise( BOOL bAdvise );

/* COleCurrency::Format  [function; ce-only; CE 2.0..209] */
CString Format( DWORD dwFlags = 0, LCID lcid = LANG_USER_DEFAULT );

/* COleCurrency::ParseCurrency  [function; ce-only; CE 2.0..209] */
BOOL ParseCurrency( LPCTSTR lpszCurrency, DWORD dwFlags = 0, LCID lcid = LANG_USER_DEFAULT );
throw( CMemoryException );
throw( COleException );

/* COleCurrency::SetCurrency  [function; ce-only; CE 2.0..209] */
void SetCurrency( long nUnits, long nFractionalUnits );

/* COleCurrency::SetStatus  [function; ce-only; CE 2.0..209] */
void SetStatus( COleCurrency::CurrencyStatus nStatus );

/* COleDateTime::GetCurrentTime  [function; ce-only; CE 2.0..209] */
static COleDateTime PASCAL GetCurrentTime( );

/* COleDateTime::GetDay  [function; ce-only; CE 2.0..209] */
int GetDay( ) const;

/* COleDateTime::GetDayOfWeek  [function; ce-only; CE 2.0..209] */
int GetDayOfWeek( ) const;

/* COleDateTime::GetDayOfYear  [function; ce-only; CE 2.0..209] */
int GetDayOfYear( ) const;

/* COleDateTime::GetHour  [function; ce-only; CE 2.0..209] */
int GetHour( ) const;

/* COleDateTime::GetMinute  [function; ce-only; CE 2.0..209] */
int GetMinute( ) const;

/* COleDateTime::GetMonth  [function; ce-only; CE 2.0..209] */
int GetMonth( ) const;

/* COleDateTime::GetSecond  [function; ce-only; CE 2.0..209] */
int GetSecond( ) const;

/* COleDateTime::GetYear  [function; ce-only; CE 2.0..209] */
int GetYear( ) const;

/* COleDateTime::operator ==  [function; ce-only; CE 2.0..209] */
BOOL operator ==( const COleDateTime& date ) const;

/* COleDateTime::ParseDateTime  [function; ce-only; CE 2.0..209] */
BOOL ParseDateTime( LPCTSTR lpszDate, DWORD dwFlags = 0, LCID lcid = LANG_USER_DEFAULT );
throw( CMemoryException );
throw( COleException );

/* COleDateTime::SetDate  [function; ce-only; CE 2.0..209] */
int SetDate( int nYear, int nMonth, int nDay );

/* COleDateTime::SetDateTime  [function; ce-only; CE 2.0..209] */
int SetDateTime( int nYear, int nMonth, int nDay, int nHour, int nMin, int nSec );

/* COleDateTime::SetStatus  [function; ce-only; CE 2.0..209] */
void SetStatus( COleDateTime::DateTimeStatus nStatus );

/* COleDateTime::SetTime  [function; ce-only; CE 2.0..209] */
int SetTime( int nHour, int nMin, int nSec );

/* COleDateTimeSpan::operator ==  [function; ce-only; CE 2.0..209] */
BOOL operator ==( const COleCurrency& cur ) const;

/* COleDateTimeSpan::SetDateTimeSpan  [function; ce-only; CE 2.0..209] */
void SetDateTimeSpan( long lDays, int nHours, int nMins, int nSecs );

/* COleDateTimeSpan::SetStatus  [function; ce-only; CE 2.0..209] */
void SetStatus( COleDateTimeSpan::DateTimeSpanStatus nStatus );

/* COleDispatchDriver::AttachDispatch  [function; ce-only; CE 2.0..209] */
void AttachDispatch( LPDISPATCH lpDispatch, BOOL bAutoRelease = TRUE );

/* COleDispatchDriver::CreateDispatch  [function; ce-only; CE 2.0..209] */
BOOL CreateDispatch( REFCLSID clsid, COleException* pError = NULL );

/* COleDispatchDriver::DetachDispatch  [function; ce-only; CE 2.0..209] */
LPDISPATCH DetachDispatch( );

/* COleDispatchDriver::GetProperty  [function; ce-only; CE 2.0..209] */
void GetProperty( DISPID dwDispID, VARTYPE vtProp, void* pvProp ) const;

/* COleDispatchDriver::InvokeHelper  [function; ce-only; CE 2.0..209] */
void InvokeHelper( DISPID dwDispID, WORD wFlags, VARTYPE vtRet, void* pvRet, const BYTE FAR* pbParamInfo, ... );
throw( COleException );
throw( COleDispatchException );

/* COleDispatchDriver::ReleaseDispatch  [function; ce-only; CE 2.0..209] */
void ReleaseDispatch( );

/* COleDispatchDriver::SetProperty  [function; ce-only; CE 2.0..209] */
void SetProperty(DISPID dwDispID, VARTYPE vtProp, ... );

/* COleException::Process  [function; ce-only; CE 2.0..209] */
static SCODE PASCAL Process( const CException* pAnyException );

/* COleObjectFactory::COleObjectFactory  [function; ce-only; CE 2.0..209] */
COleObjectFactory( REFCLSID clsid, CRuntimeClass* pRuntimeClass, BOOL bMultiInstance, LPCTSTR lpszProgID );

/* COleObjectFactory::GetLicenseKey  [function; ce-only; CE 2.0..209] */
virtual BOOL GetLicenseKey( DWORD dwReserved, BSTR *pbstrKey );

/* COleObjectFactory::IsRegistered  [function; ce-only; CE 2.0..209] */
BOOL IsRegistered( ) const;

/* COleObjectFactory::Register  [function; ce-only; CE 2.0..209] */
BOOL Register( );

/* COleObjectFactory::RegisterAll  [function; ce-only; CE 2.0..209] */
static BOOL PASCAL RegisterAll( );

/* COleObjectFactory::UpdateRegistry  [function; ce-only; CE 2.0..209] */
void UpdateRegistry( LPCTSTR lpszProgID = NULL );

/* COleObjectFactory::UpdateRegistryAll  [function; ce-only; CE 2.0..209] */
static void PASCAL UpdateRegistryAll( );

/* COleObjectFactory::VerifyLicenseKey  [function; ce-only; CE 2.0..209] */
virtual BOOL VerifyLicenseKey( BSTR bstrKey );

/* COleObjectFactory::VerifyUserLicense  [function; ce-only; CE 2.0..209] */
virtual BOOL VerifyUserLicense( );

/* COleSafeArray::AccessData  [function; ce-only; CE 2.0..209] */
void AccessData( void** ppvData );

/* COleSafeArray::AllocData  [function; ce-only; CE 2.0..209] */
void AllocData( );

/* COleSafeArray::AllocDescriptor  [function; ce-only; CE 2.0..209] */
void AllocDescriptor( DWORD dwDims );

/* COleSafeArray::Attach  [function; ce-only; CE 2.0..209] */
void Attach( VARIANT& varSrc );

/* COleSafeArray::Clear  [function; ce-only; CE 2.0..209] */
void Clear( );

/* COleSafeArray::Copy  [function; ce-only; CE 2.0..209] */
void Copy( LPSAFEARRAY* ppsa );

/* COleSafeArray::Create  [function; ce-only; CE 2.0..209] */
void Create( VARTYPE vtSrc, DWORD dwDims, DWORD* rgElements );

/* COleSafeArray::CreateOneDim  [function; ce-only; CE 2.0..209] */
void CreateOneDim( VARTYPE vtSrc, DWORD dwElements, void pvSrcData = NULL, long nLBound = 0 );

/* COleSafeArray::Destroy  [function; ce-only; CE 2.0..209] */
void Destroy( );

/* COleSafeArray::DestroyData  [function; ce-only; CE 2.0..209] */
void DestroyData( );

/* COleSafeArray::DestroyDescriptor  [function; ce-only; CE 2.0..209] */
void DestroyDescriptor( );

/* COleSafeArray::Detach  [function; ce-only; CE 2.0..209] */
VARIANT Detach( );

/* COleSafeArray::GetDim  [function; ce-only; CE 2.0..209] */
DWORD GetDim( );

/* COleSafeArray::GetElement  [function; ce-only; CE 2.0..209] */
void GetElement( long* rgIndices, void* pvData );

/* COleSafeArray::GetElemSize  [function; ce-only; CE 2.0..209] */
DWORD GetElemSize( );

/* COleSafeArray::GetLBound  [function; ce-only; CE 2.0..209] */
void GetLBound( DWORD dwDim, long* pLBound );

/* COleSafeArray::GetOneDimSize  [function; ce-only; CE 2.0..209] */
DWORD GetOneDimSize( );

/* COleSafeArray::GetUBound  [function; ce-only; CE 2.0..209] */
void GetUBound( DWORD dwDim, long* pUBound );

/* COleSafeArray::Lock  [function; ce-only; CE 2.0..209] */
void Lock( );

/* COleSafeArray::operator ==  [function; ce-only; CE 2.0..209] */
BOOL operator ==( const SAFEARRAY& saSrc ) const;

/* COleSafeArray::operator LPVARIANT  [function; ce-only; CE 2.0..209] */
operator LPVARIANT( );

/* COleSafeArray::PtrOfIndex  [function; ce-only; CE 2.0..209] */
void PtrOfIndex( long* rgIndices, void** ppvData );

/* COleSafeArray::PutElement  [function; ce-only; CE 2.0..209] */
void PutElement( long* rgIndices, LPVOID pvData );

/* COleSafeArray::Redim  [function; ce-only; CE 2.0..209] */
void Redim( SAFEARRAYBOUND* psaboundNew );

/* COleSafeArray::ResizeOneDim  [function; ce-only; CE 2.0..209] */
void ResizeOneDim( DWORD dwElements );

/* COleSafeArray::UnaccessData  [function; ce-only; CE 2.0..209] */
void UnaccessData( );

/* COleSafeArray::Unlock  [function; ce-only; CE 2.0..209] */
void Unlock( );

/* COleVariant::Attach  [function; ce-only; CE 2.0..209] */
void Attach( VARIANT& varSrc );

/* COleVariant::ChangeType  [function; ce-only; CE 2.0..209] */
void ChangeType( VARTYPE vartype, LPVARIANT pSrc = NULL );

/* COleVariant::Clear  [function; ce-only; CE 2.0..209] */
void Clear( );

/* COleVariant::Detach  [function; ce-only; CE 2.0..209] */
VARIANT Detach( );

/* COleVariant::SetString  [function; ce-only; CE 2.0..209] */
void SetString( LPCTSTR lpszSrc, VARTYPE vtSrc );
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
void AccessData( void** ppvData );
void AllocData( );
void AllocDescriptor( DWORD dwDims );
COleObjectFactory( REFCLSID clsid, CRuntimeClass* pRuntimeClass, BOOL bMultiInstance, LPCTSTR lpszProgID );
void Destroy( );
void DestroyData( );
void DestroyDescriptor( );
LPDISPATCH DetachDispatch( );
DWORD GetDim( );
DWORD GetElemSize( );
void GetLBound( DWORD dwDim, long* pLBound );
DWORD GetOneDimSize( );
void GetUBound( DWORD dwDim, long* pUBound );
void InvokeHelper( DISPID dwDispID, WORD wFlags, VARTYPE vtRet, void* pvRet, const BYTE FAR* pbParamInfo, ... ); throw( COleException ); throw( COleDispatchException );
BOOL ParseCurrency( LPCTSTR lpszCurrency, DWORD dwFlags = 0, LCID lcid = LANG_USER_DEFAULT ); throw( CMemoryException ); throw( COleException );
BOOL ParseDateTime( LPCTSTR lpszDate, DWORD dwFlags = 0, LCID lcid = LANG_USER_DEFAULT ); throw( CMemoryException ); throw( COleException );
void PtrOfIndex( long* rgIndices, void** ppvData );
void PutElement( long* rgIndices, LPVOID pvData );
void Redim( SAFEARRAYBOUND* psaboundNew );
static BOOL PASCAL RegisterAll( );
void ReleaseDispatch( );
void ResizeOneDim( DWORD dwElements );
void SetCurrency( long nUnits, long nFractionalUnits );
int SetDate( int nYear, int nMonth, int nDay );
int SetDateTime( int nYear, int nMonth, int nDay, int nHour, int nMin, int nSec );
void SetDateTimeSpan( long lDays, int nHours, int nMins, int nSecs );
void UnaccessData( );
static void PASCAL UpdateRegistryAll( );

#endif /* _AFXDISP_ */
