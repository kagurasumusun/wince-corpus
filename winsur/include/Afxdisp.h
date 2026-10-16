/* Afxdisp.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 0 declarations, 0 outlines, 0 base types, 0 extra macros, 47 extra decls
 */
#ifndef _AFXDISP_
#define _AFXDISP_


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
