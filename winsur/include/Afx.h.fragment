/* Afx.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 105 declarations, 0 outlines, 0 base types, 0 extra macros, 59 extra decls
 */
#ifndef _AFX_
#define _AFX_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 200 && _WIN32_WCE < 210)) /* CE 2.0..209 */

/* CFileStatus  [struct; ce-only; CE 2.0..209] */
struct CFileStatus
{
CTime m_ctime;
CTime m_mtime;
CTime m_atime;
LONG m_size;
BYTE m_attribute;
TCHAR m_szFullName[_MAX_PATH];
};

/* CRuntimeClass  [struct; ce-only; CE 2.0..209] */
struct CRuntimeClass
{
LPCSTR m_lpszClassName;
int m_nObjectSize;
UINT m_wSchema
CObject* (PASCAL* m_pfnCreateObject)( );
CRuntimeClass* (PASCAL* m_pfnGetBaseClass)( );
CRuntimeClass* m_pBaseClass;
CObject* CreateObject( );
BOOL IsDerivedFrom(const CRuntimeClass* pBaseClass) const;
};
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 200 && _WIN32_WCE < 210)) /* CE 2.0..209 */

/* CArchive::Abort  [function; ce-only; CE 2.0..209] */
void Abort( );

/* CArchive::CArchive  [function; ce-only; CE 2.0..209] */
CArchive( CFile* pFile, UINT nMode, int nBufSize = 512, void* lpBuf = NULL); throw( CMemoryException, CArchiveException, CFileException);

/* CArchive::Close  [function; ce-only; CE 2.0..209] */
void Close( );
throw( CArchiveException, CFileException );

/* CArchive::Flush  [function; ce-only; CE 2.0..209] */
void Flush( );
throw( CFileException );

/* CArchive::GetObjectSchema  [function; ce-only; CE 2.0..209] */
UINT GetObjectSchema( );

/* CArchive::IsBufferEmpty  [function; ce-only; CE 2.0..209] */
BOOL IsBufferEmpty( ) const;

/* CArchive::IsLoading  [function; ce-only; CE 2.0..209] */
BOOL IsLoading( ) const;

/* CArchive::IsStoring  [function; ce-only; CE 2.0..209] */
BOOL IsStoring( ) const;

/* CArchive::MapObject  [function; ce-only; CE 2.0..209] */
void MapObject( const CObject* pOb );

/* CArchive::Read  [function; ce-only; CE 2.0..209] */
UINT Read( void* lpBuf, UINT nMax );
throw( CFileException );

/* CArchive::ReadClass  [function; ce-only; CE 2.0..209] */
CRuntimeClass* ReadClass( const CRuntimeClass* pClassRefRequested = NULL, UINT* pSchema = NULL, DWORD* obTag = NULL );
Throw CArchiveException;
Throw CNotSupportedException;

/* CArchive::ReadString  [function; ce-only; CE 2.0..209] */
Bool ReadString(CString& rString );
LPTSTR ReadString( LPTSTR lpsz, UINT nMax );
throw( CArchiveException );

/* CArchive::SerializeClass  [function; ce-only; CE 2.0..209] */
void SerializeClass( const CRuntimeClass* pRuntimeClass );

/* CArchive::SetLoadParams  [function; ce-only; CE 2.0..209] */
void SetLoadParams( UINT nGrowBy = 1024 );

/* CArchive::SetObjectSchema  [function; ce-only; CE 2.0..209] */
void SetObjectSchema( UINT nSchema );

/* CArchive::SetStoreParams  [function; ce-only; CE 2.0..209] */
void SetStoreParams( UINT nHashSize = 2053, UINT nBlockSize = 128 );

/* CArchive::Write  [function; ce-only; CE 2.0..209] */
void Write( const void* lpBuf, UINT nMax );
throw( CFileException );

/* CArchive::WriteClass  [function; ce-only; CE 2.0..209] */
void WriteClass( const CRuntimeClass* pClassRef );

/* CArchive::WriteObject  [function; ce-only; CE 2.0..209] */
void WriteObject( const CObject* pOb );
throw( CFileException, CArchiveException );

/* CArchive::WriteString  [function; ce-only; CE 2.0..209] */
void WriteString( LPCTSTR lpsz );
throw( CFileException );

/* CArchiveException::CArchiveException  [function; ce-only; CE 2.0..209] */
CArchiveException( int cause = CArchiveException::none );

/* CDumpContext::Flush  [function; ce-only; CE 2.0..209] */
void Flush( );
throw( CFileException );

/* CDumpContext::GetDepth  [function; ce-only; CE 2.0..209] */
int GetDepth( ) const;

/* CDumpContext::HexDump  [function; ce-only; CE 2.0..209] */
void HexDump( LPCTSTR lpszLine, BYTE* pby, int nBytes, int nWidth );
throw( CFileException );

/* CDumpContext::SetDepth  [function; ce-only; CE 2.0..209] */
void SetDepth( int nNewDepth );

/* CException::GetErrorMessage  [function; ce-only; CE 2.0..209] */
virtual BOOL GetErrorMessage( LPTSTR lpszError, UINT nMaxError, PUINT pnHelpContext = NULL );

/* CException::ReportError  [function; ce-only; CE 2.0..209] */
virtual int ReportError( UINT nType = MB_OK, UINT nMessageID = 0 );

/* CFile::Abort  [function; ce-only; CE 2.0..209] */
virtual void Abort( );

/* CFile::Close  [function; ce-only; CE 2.0..209] */
virtual void Close( );
throw( CFileException );

/* CFile::Flush  [function; ce-only; CE 2.0..209] */
virtual void Flush( );
throw( CFileException );

/* CFile::GetLength  [function; ce-only; CE 2.0..209] */
virtual DWORD GetLength( ) const;
throw( CFileException );

/* CFile::GetPosition  [function; ce-only; CE 2.0..209] */
virtual DWORD GetPosition( ) const;
throw( CFileException );

/* CFile::GetStatus  [function; ce-only; CE 2.0..209] */
BOOL GetStatus( CFileStatus& rStatus ) const;

/* CFile::Open  [function; ce-only; CE 2.0..209] */
virtual BOOL Open( LPCTSTR lpszFileName, UINT nOpenFlags, CFileException* pError = NULL );

/* CFile::Read  [function; ce-only; CE 2.0..209] */
virtual UINT Read( void* lpBuf, UINT nCount );
throw( CFileException );

/* CFile::ReadHuge  [function; ce-only; CE 2.0..209] */
DWORD ReadHuge( void* lpBuffer, DWORD dwCount );
throw( CFileException );

/* CFile::Remove  [function; ce-only; CE 2.0..209] */
static void PASCAL Remove( LPCTSTR lpszFileName );
throw( CFileException );

/* CFile::Rename  [function; ce-only; CE 2.0..209] */
static void PASCAL Rename( LPCTSTR lpszOldName, LPCTSTR lpszNewName );
throw( CFileException );

/* CFile::Seek  [function; ce-only; CE 2.0..209] */
virtual LONG Seek( LONG lOff, UINT nFrom );
throw( CFileException );

/* CFile::SeekToBegin  [function; ce-only; CE 2.0..209] */
void SeekToBegin( );
throw( CFileException );

/* CFile::SeekToEnd  [function; ce-only; CE 2.0..209] */
DWORD SeekToEnd( );
throw( CFileException );

/* CFile::SetFilePath  [function; ce-only; CE 2.0..209] */
virtual void SetFilePath( LPCTSTR lpszNewName );

/* CFile::SetLength  [function; ce-only; CE 2.0..209] */
virtual void SetLength( DWORD dwNewLen );
throw( CFileException );

/* CFile::SetStatus  [function; ce-only; CE 2.0..209] */
static void SetStatus( LPCTSTR lpszFileName, const CFileStatus& status );
throw( CFileException );

/* CFile::Write  [function; ce-only; CE 2.0..209] */
virtual void Write( const void* lpBuf, UINT nCount );
throw( CFileException );

/* CFile::WriteHuge  [function; ce-only; CE 2.0..209] */
void WriteHuge( const void* lpBuf, DWORD dwCount );
throw( CFileException );

/* CFileException::CFileException  [function; ce-only; CE 2.0..209] */
CFileException( int cause = CFileException::none, LONG lOsError = –1 );

/* CFileException::ErrnoToException  [function; ce-only; CE 2.0..209] */
static int PASCAL ErrnoToException( int nErrno );

/* CFileException::OsErrorToException  [function; ce-only; CE 2.0..209] */
static int PASCAL OsErrorToException( LONG lOsError );

/* CFileException::ThrowErrno  [function; ce-only; CE 2.0..209] */
static void PASCAL ThrowErrno( int nErrno );

/* CFileException::ThrowOsError  [function; ce-only; CE 2.0..209] */
static void PASCAL ThrowOsError( LONG lOsError LPCTSTR lpszFileName = NULL );

/* CMemFile::Alloc  [function; ce-only; CE 2.0..209] */
BYTE * Alloc( DWORD nBytes );

/* CMemFile::Attach  [function; ce-only; CE 2.0..209] */
void Attach( BYTE* lpBuffer, UINT nBufferSize, UINT nGrowBytes = 0 );

/* CMemFile::CMemFile  [function; ce-only; CE 2.0..209] */
CMemFile( UINT nGrowBytes = 1024 );

/* CMemFile::Detach  [function; ce-only; CE 2.0..209] */
BYTE * Detach( );

/* CMemFile::Free  [function; ce-only; CE 2.0..209] */
void Free( BYTE * lpMem );

/* CMemFile::GrowFile  [function; ce-only; CE 2.0..209] */
void GrowFile( DWORD dwNewLen );

/* CMemFile::Memcpy  [function; ce-only; CE 2.0..209] */
BYTE * Memcpy( BYTE* lpMemTarget, BYTE* lpMemSource, UINT nBytes );

/* CMemFile::Realloc  [function; ce-only; CE 2.0..209] */
BYTE * Realloc( BYTE* lpMem, DWORD nBytes );

/* CObject::AssertValid  [function; ce-only; CE 2.0..209] */
virtual void AssertValid( ) const;

/* CObject::Dump  [function; ce-only; CE 2.0..209] */
virtual void Dump( CDumpContext& dc ) const;

/* CObject::IsKindOf  [function; ce-only; CE 2.0..209] */
BOOL IsKindOf( const CRuntimeClass* pClass ) const;

/* CObject::IsSerializable  [function; ce-only; CE 2.0..209] */
BOOL IsSerializable( ) const;

/* CObject::operator delete  [function; ce-only; CE 2.0..209] */
void operator delete( void* p );

/* CObject::operator new  [function; ce-only; CE 2.0..209] */
void* operator new( size_t nSize );
throw( CMemoryException );

/* CObject::Serialize  [function; ce-only; CE 2.0..209] */
virtual void Serialize( CArchive& ar );
throw( CMemoryException );
throw( CArchiveException );
throw( CFileException );

/* CString::Compare  [function; ce-only; CE 2.0..209] */
int Compare( LPCTSTR lpsz ) const;

/* CString::CompareNoCase  [function; ce-only; CE 2.0..209] */
int CompareNoCase( LPCTSTR lpsz ) const;

/* CString::Empty  [function; ce-only; CE 2.0..209] */
void Empty( );

/* CString::Find  [function; ce-only; CE 2.0..209] */
int Find( TCHAR ch ) const;

/* CString::FindOneOf  [function; ce-only; CE 2.0..209] */
int FindOneOf( LPCTSTR lpszCharSet ) const;

/* CString::Format  [function; ce-only; CE 2.0..209] */
void Format( LPCTSTR lpszFormat, ... );

/* CString::FreeExtra  [function; ce-only; CE 2.0..209] */
void FreeExtra( );

/* CString::GetAt  [function; ce-only; CE 2.0..209] */
TCHAR GetAt( int nIndex ) const;

/* CString::GetBuffer  [function; ce-only; CE 2.0..209] */
LPTSTR GetBuffer( int nMinBufLength );
throw( CMemoryException );

/* CString::GetBufferSetLength  [function; ce-only; CE 2.0..209] */
LPTSTR GetBufferSetLength( int nNewLength );
throw( CMemoryException );

/* CString::GetLength  [function; ce-only; CE 2.0..209] */
int GetLength( ) const;

/* CString::IsEmpty  [function; ce-only; CE 2.0..209] */
BOOL IsEmpty( ) const;

/* CString::Left  [function; ce-only; CE 2.0..209] */
CString Left( int nCount ) const;
throw( CMemoryException );

/* CString::LoadString  [function; ce-only; CE 2.0..209] */
BOOL LoadString( UINT nID );
throw( CMemoryException );

/* CString::LockBuffer  [function; ce-only; CE 2.0..209] */
LPTSTR LockBuffer( );

/* CString::MakeLower  [function; ce-only; CE 2.0..209] */
void MakeLower( );

/* CString::MakeReverse  [function; ce-only; CE 2.0..209] */
void MakeReverse( );

/* CString::MakeUpper  [function; ce-only; CE 2.0..209] */
void MakeUpper( );

/* CString::Mid  [function; ce-only; CE 2.0..209] */
CString Mid( int nFirst ) const;
throw( CMemoryException );

/* CString::operator [ ]  [function; ce-only; CE 2.0..209] */
TCHAR operator []( int nIndex ) const;

/* CString::operator LPCTSTR  [function; ce-only; CE 2.0..209] */
operator LPCTSTR ( ) const;

/* CString::ReleaseBuffer  [function; ce-only; CE 2.0..209] */
void ReleaseBuffer( int nNewLength = –1 );

/* CString::ReverseFind  [function; ce-only; CE 2.0..209] */
int ReverseFind( TCHAR ch ) const;

/* CString::Right  [function; ce-only; CE 2.0..209] */
CString Right( int nCount ) const;
throw( CMemoryException );

/* CString::SetAt  [function; ce-only; CE 2.0..209] */
void SetAt( int nIndex, TCHAR ch );

/* CString::SpanExcluding  [function; ce-only; CE 2.0..209] */
CString SpanExcluding( LPCTSTR lpszCharSet ) const;
throw( CMemoryException );

/* CString::SpanIncluding  [function; ce-only; CE 2.0..209] */
CString SpanIncluding( LPCTSTR lpszCharSet ) const;
throw( CMemoryException );

/* CString::TrimLeft  [function; ce-only; CE 2.0..209] */
void TrimLeft( );

/* CString::TrimRight  [function; ce-only; CE 2.0..209] */
void TrimRight( );

/* CString::UnlockBuffer  [function; ce-only; CE 2.0..209] */
void UnlockBuffer( );

/* CTimeSpan::GetDays  [function; ce-only; CE 2.0..209] */
LONG GetDays( ) const;

/* CTimeSpan::GetHours  [function; ce-only; CE 2.0..209] */
int GetHours( ) const;

/* CTimeSpan::GetMinutes  [function; ce-only; CE 2.0..209] */
int GetMinutes( ) const;

/* CTimeSpan::GetSeconds  [function; ce-only; CE 2.0..209] */
int GetSeconds( ) const;

/* CTimeSpan::GetTotalHours  [function; ce-only; CE 2.0..209] */
LONG GetTotalHours( ) const;

/* CTimeSpan::GetTotalMinutes  [function; ce-only; CE 2.0..209] */
LONG GetTotalMinutes( ) const;

/* CTimeSpan::GetTotalSeconds  [function; ce-only; CE 2.0..209] */
LONG GetTotalSeconds( ) const;
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
virtual void AssertValid( ) const;
CArchive( CFile* pFile, UINT nMode, int nBufSize = 512, void* lpBuf = NULL); throw( CMemoryException, CArchiveException, CFileException);
CArchiveException( int cause = CArchiveException::none );
CFileException( int cause = CFileException::none, LONG lOsError = –1 );
CMemFile( UINT nGrowBytes = 1024 );
int Compare( LPCTSTR lpsz ) const;
int CompareNoCase( LPCTSTR lpsz ) const;
virtual void Dump( CDumpContext& dc ) const;
static int PASCAL ErrnoToException( int nErrno );
int FindOneOf( LPCTSTR lpszCharSet ) const;
LPTSTR GetBufferSetLength( int nNewLength ); throw( CMemoryException );
LONG GetDays( ) const;
int GetDepth( ) const;
virtual BOOL GetErrorMessage( LPTSTR lpszError, UINT nMaxError, PUINT pnHelpContext = NULL );
int GetHours( ) const;
virtual DWORD GetLength( ) const; throw( CFileException );
int GetMinutes( ) const;
int GetSeconds( ) const;
LONG GetTotalHours( ) const;
LONG GetTotalMinutes( ) const;
LONG GetTotalSeconds( ) const;
void GrowFile( DWORD dwNewLen );
void HexDump( LPCTSTR lpszLine, BYTE* pby, int nBytes, int nWidth ); throw( CFileException );
BOOL IsBufferEmpty( ) const;
BOOL IsKindOf( const CRuntimeClass* pClass ) const;
BOOL IsLoading( ) const;
BOOL IsSerializable( ) const;
BOOL IsStoring( ) const;
void MakeLower( );
void MakeReverse( );
void MakeUpper( );
void MapObject( const CObject* pOb );
BYTE * Memcpy( BYTE* lpMemTarget, BYTE* lpMemSource, UINT nBytes );
CString Mid( int nFirst ) const; throw( CMemoryException );
static int PASCAL OsErrorToException( LONG lOsError );
CRuntimeClass* ReadClass( const CRuntimeClass* pClassRefRequested = NULL, UINT* pSchema = NULL, DWORD* obTag = NULL ); Throw CArchiveException; Throw CNotSupportedException;
DWORD ReadHuge( void* lpBuffer, DWORD dwCount ); throw( CFileException );
Bool ReadString(CString& rString ); LPTSTR ReadString( LPTSTR lpsz, UINT nMax ); throw( CArchiveException );
static void PASCAL Rename( LPCTSTR lpszOldName, LPCTSTR lpszNewName ); throw( CFileException );
virtual int ReportError( UINT nType = MB_OK, UINT nMessageID = 0 );
int ReverseFind( TCHAR ch ) const;
void SeekToBegin( ); throw( CFileException );
DWORD SeekToEnd( ); throw( CFileException );
void SerializeClass( const CRuntimeClass* pRuntimeClass );
void SetDepth( int nNewDepth );
virtual void SetFilePath( LPCTSTR lpszNewName );
void SetLoadParams( UINT nGrowBy = 1024 );
void SetObjectSchema( UINT nSchema );
void SetStoreParams( UINT nHashSize = 2053, UINT nBlockSize = 128 );
CString SpanExcluding( LPCTSTR lpszCharSet ) const; throw( CMemoryException );
CString SpanIncluding( LPCTSTR lpszCharSet ) const; throw( CMemoryException );
static void PASCAL ThrowErrno( int nErrno );
static void PASCAL ThrowOsError( LONG lOsError LPCTSTR lpszFileName = NULL );
void TrimLeft( );
void TrimRight( );
void WriteClass( const CRuntimeClass* pClassRef );
void WriteHuge( const void* lpBuf, DWORD dwCount ); throw( CFileException );
void WriteObject( const CObject* pOb ); throw( CFileException, CArchiveException );
void WriteString( LPCTSTR lpsz ); throw( CFileException );

#endif /* _AFX_ */
