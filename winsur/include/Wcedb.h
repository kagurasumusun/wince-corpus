/* Wcedb.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 48 declarations, 0 outlines, 0 base types, 0 extra macros, 37 extra decls
 */
#ifndef _WCEDB_
#define _WCEDB_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 200 && _WIN32_WCE < 210)) /* CE 2.0..209 */

/* CCeDBDatabase::AddRecord  [function; ce-only; CE 2.0..209] */
BOOL AddRecord( CCeDBRecord* pRecord );

/* CCeDBDatabase::Close  [function; ce-only; CE 2.0..209] */
BOOL Close( );

/* CCeDBDatabase::Create  [function; ce-only; CE 2.0..209] */
CEOID Create( LPCWSTR szName, DWORD dwIdent = 0, int nNumSortProps = 0, const CCeDBProp* pSortProps = NULL );

/* CCeDBDatabase::Delete  [function; ce-only; CE 2.0..209] */
BOOL Delete( );

/* CCeDBDatabase::DeleteCurrRecord  [function; ce-only; CE 2.0..209] */
BOOL DeleteCurrRecord( );

/* CCeDBDatabase::DeleteCurrRecordProps  [function; ce-only; CE 2.0..209] */
BOOL DeleteCurrRecordProps( int nNumProps = 0,CCeDBProp *pPropArray = NULL );

/* CCeDBDatabase::Exists  [function; ce-only; CE 2.0..209] */
static BOOL Exists( LPCWSTR szName );

/* CCeDBDatabase::GetCurrIndex  [function; ce-only; CE 2.0..209] */
DWORD GetCurrIndex( ) const;

/* CCeDBDatabase::GetIdent  [function; ce-only; CE 2.0..209] */
DWORD GetIdent( ) const;

/* CCeDBDatabase::GetName  [function; ce-only; CE 2.0..209] */
void GetName( LPWSTR szName ) const;

/* CCeDBDatabase::GetSize  [function; ce-only; CE 2.0..209] */
DWORD GetSize( ) const;

/* CCeDBDatabase::GetSortProps  [function; ce-only; CE 2.0..209] */
void GetSortProps( int *pnSize, CCeDBProp *pSortProps ) const;

/* CCeDBDatabase::Open  [function; ce-only; CE 2.0..209] */
BOOL Open( CEOID CeOID, const CCeDBProp* pKeyProp = NULL, const CWnd* pWndNotify = NULL );

/* CCeDBDatabase::ReadCurrRecord  [function; ce-only; CE 2.0..209] */
BOOL ReadCurrRecord( CCeDBRecord* pRecord, int nNumFilterProps = 0, CCeDBProp *PropFilterArray = NULL );

/* CCeDBDatabase::SeekFirst  [function; ce-only; CE 2.0..209] */
CEOID SeekFirst( );

/* CCeDBDatabase::SeekFirstEqual  [function; ce-only; CE 2.0..209] */
CEOID SeekFirstEqual( CCeDBProp& Prop );

/* CCeDBDatabase::SeekLast  [function; ce-only; CE 2.0..209] */
CEOID SeekFirst( );

/* CCeDBDatabase::SeekNext  [function; ce-only; CE 2.0..209] */
CEOID SeekNext( );

/* CCeDBDatabase::SeekNextEqual  [function; ce-only; CE 2.0..209] */
CEOID SeekNextEqual( CCeDBProp& Prop );

/* CCeDBDatabase::SeekPrev  [function; ce-only; CE 2.0..209] */
CEOID SeekPrev( );

/* CCeDBDatabase::SeekToIndex  [function; ce-only; CE 2.0..209] */
CEOID SeekToIndex( DWORD dwCurrIndex, BOOL bFromEnd = FALSE );

/* CCeDBDatabase::SeekToRecord  [function; ce-only; CE 2.0..209] */
CEOID SeekToRecord( CEOID CeOID );

/* CCeDBDatabase::SeekValueGreater  [function; ce-only; CE 2.0..209] */
CEOID SeekValueGreater( CCeDBProp& Prop );

/* CCeDBDatabase::SeekValueSmaller  [function; ce-only; CE 2.0..209] */
CEOID SeekValueSmaller( CCeDBProp& Prop );

/* CCeDBDatabase::SetIdent  [function; ce-only; CE 2.0..209] */
BOOL SetIdent( DWORD dwIdent );

/* CCeDBDatabase::SetLastModified  [function; ce-only; CE 2.0..209] */
BOOL SetLastModified( FILETIME ftLastModified );

/* CCeDBDatabase::SetName  [function; ce-only; CE 2.0..209] */
BOOL SetName( LPCWSTR wszName );

/* CCeDBDatabase::SetSortProps  [function; ce-only; CE 2.0..209] */
BOOL SetSortProps( int nSize, const CCeDBProp *pSortProps );

/* CCeDBDatabase::WriteCurrRecord  [function; ce-only; CE 2.0..209] */
BOOL WriteCurrRecord( CCeDBRecord* pRecord, int nNumFilterProps = 0, CCeDBProp *PropFilterArray = NULL );

/* CCeDBEnum::CCeDBEnum  [function; ce-only; CE 2.0..209] */
CCeDBEnum ( DWORD dwIdent = 0 );

/* CCeDBEnum::Next  [function; ce-only; CE 2.0..209] */
CEOID Next ( );

/* CCeDBProp::GetString  [function; ce-only; CE 2.0..209] */
LPWSTR GetString( ) const;

/* CCeDBProp::SetBlob  [function; ce-only; CE 2.0..209] */
void SetBlob( CEBLOB blob, UINT nMode = Copy );

/* CCeDBProp::SetFiletime  [function; ce-only; CE 2.0..209] */
void SetFiletime( FILETIME filetime );

/* CCeDBProp::SetIdent  [function; ce-only; CE 2.0..209] */
void SetIdent( WORD wIdent );

/* CCeDBProp::SetLong  [function; ce-only; CE 2.0..209] */
void SetLong( long lVal );

/* CCeDBProp::SetShort  [function; ce-only; CE 2.0..209] */
void SetShort( short iVal );

/* CCeDBProp::SetSortFlags  [function; ce-only; CE 2.0..209] */
void SetSortFlags( WORD wSortFlags );

/* CCeDBProp::SetString  [function; ce-only; CE 2.0..209] */
void SetString( LPWSTR lpwstr, UINT nMode = Copy );

/* CCeDBProp::SetType  [function; ce-only; CE 2.0..209] */
void SetType( CCeDBProp::enType nType );

/* CCeDBProp::SetULong  [function; ce-only; CE 2.0..209] */
void SetULong( ULONG ulVal );

/* CCeDBProp::SetUShort  [function; ce-only; CE 2.0..209] */
void SetUShort( USHORT uiVal );

/* CCeDBRecord::AddProp  [function; ce-only; CE 2.0..209] */
BOOL AddProp( CCeDBProp* pProp );

/* CCeDBRecord::AddProps  [function; ce-only; CE 2.0..209] */
BOOL AddProps( CCeDBProp* pPropArray, int nNumProps );

/* CCeDBRecord::DeleteAllProps  [function; ce-only; CE 2.0..209] */
void DeleteAllProps( );

/* CCeDBRecord::DeleteProp  [function; ce-only; CE 2.0..209] */
void DeleteProp( WORD wPropIdent );

/* CCeDBRecord::GetNumProps  [function; ce-only; CE 2.0..209] */
int GetNumProps( ) const;

/* CCeDBRecord::GetPropFromIndex  [function; ce-only; CE 2.0..209] */
CCeDBProp* GetPropFromIndex( int nIndex ) const;
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
BOOL AddProp( CCeDBProp* pProp );
BOOL AddProps( CCeDBProp* pPropArray, int nNumProps );
BOOL AddRecord( CCeDBRecord* pRecord );
CCeDBEnum ( DWORD dwIdent = 0 );
void DeleteAllProps( );
BOOL DeleteCurrRecord( );
BOOL DeleteCurrRecordProps( int nNumProps = 0,CCeDBProp *pPropArray = NULL );
void DeleteProp( WORD wPropIdent );
static BOOL Exists( LPCWSTR szName );
DWORD GetCurrIndex( ) const;
DWORD GetIdent( ) const;
int GetNumProps( ) const;
CCeDBProp* GetPropFromIndex( int nIndex ) const;
void GetSortProps( int *pnSize, CCeDBProp *pSortProps ) const;
LPWSTR GetString( ) const;
BOOL ReadCurrRecord( CCeDBRecord* pRecord, int nNumFilterProps = 0, CCeDBProp *PropFilterArray = NULL );
CEOID SeekFirst( );
CEOID SeekFirstEqual( CCeDBProp& Prop );
CEOID SeekNext( );
CEOID SeekNextEqual( CCeDBProp& Prop );
CEOID SeekPrev( );
CEOID SeekToIndex( DWORD dwCurrIndex, BOOL bFromEnd = FALSE );
CEOID SeekToRecord( CEOID CeOID );
CEOID SeekValueGreater( CCeDBProp& Prop );
CEOID SeekValueSmaller( CCeDBProp& Prop );
void SetBlob( CEBLOB blob, UINT nMode = Copy );
void SetFiletime( FILETIME filetime );
BOOL SetIdent( DWORD dwIdent );
BOOL SetLastModified( FILETIME ftLastModified );
void SetLong( long lVal );
void SetShort( short iVal );
void SetSortFlags( WORD wSortFlags );
BOOL SetSortProps( int nSize, const CCeDBProp *pSortProps );
void SetString( LPWSTR lpwstr, UINT nMode = Copy );
void SetULong( ULONG ulVal );
void SetUShort( USHORT uiVal );
BOOL WriteCurrRecord( CCeDBRecord* pRecord, int nNumFilterProps = 0, CCeDBProp *PropFilterArray = NULL );

#endif /* _WCEDB_ */
