/* Afxtempl.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 54 declarations, 0 outlines, 0 base types, 0 extra macros, 16 extra decls
 */
#ifndef _AFXTEMPL_
#define _AFXTEMPL_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 200 && _WIN32_WCE < 210)) /* CE 2.0..209 */

/* CArray::Add  [function; ce-only; CE 2.0..209] */
int Add( ARG_TYPE newElement );
throw( CMemoryException );

/* CArray::Append  [function; ce-only; CE 2.0..209] */
int Append( const CArray& src );

/* CArray::Copy  [function; ce-only; CE 2.0..209] */
void Copy( const CArray& src );

/* CArray::ElementAt  [function; ce-only; CE 2.0..209] */
TYPE& ElementAt( int nIndex );

/* CArray::FreeExtra  [function; ce-only; CE 2.0..209] */
void FreeExtra( );

/* CArray::GetAt  [function; ce-only; CE 2.0..209] */
TYPE GetAt( int nIndex ) const;

/* CArray::GetSize  [function; ce-only; CE 2.0..209] */
int GetSize( ) const;

/* CArray::GetUpperBound  [function; ce-only; CE 2.0..209] */
int GetUpperBound( ) const;

/* CArray::InsertAt  [function; ce-only; CE 2.0..209] */
void InsertAt( int nIndex, ARG_TYPE newElement, int nCount = 1 );
throw( CMemoryException );

/* CArray::RemoveAll  [function; ce-only; CE 2.0..209] */
void RemoveAll( );

/* CArray::RemoveAt  [function; ce-only; CE 2.0..209] */
void RemoveAt( int nIndex, int nCount = 1 );

/* CArray::SetAt  [function; ce-only; CE 2.0..209] */
void SetAt( int nIndex, ARG_TYPE newElement );

/* CArray::SetAtGrow  [function; ce-only; CE 2.0..209] */
void SetAtGrow( int nIndex, ARG_TYPE newElement );
throw( CMemoryException );

/* CArray::SetSize  [function; ce-only; CE 2.0..209] */
void SetSize( int nNewSize, int nGrowBy = –1 );
throw( CMemoryException );

/* CList::AddHead  [function; ce-only; CE 2.0..209] */
POSITION AddHead( ARG_TYPE newElement );

/* CList::AddTail  [function; ce-only; CE 2.0..209] */
POSITION AddTail( ARG_TYPE newElement );

/* CList::CList  [function; ce-only; CE 2.0..209] */
CList( int nBlockSize = 10 );

/* CList::FindIndex  [function; ce-only; CE 2.0..209] */
POSITION FindIndex( int nIndex ) const;

/* CList::GetCount  [function; ce-only; CE 2.0..209] */
int GetCount() const;

/* CList::InsertAfter  [function; ce-only; CE 2.0..209] */
POSITION InsertAfter( POSITION position, ARG_TYPE newElement );

/* CList::InsertBefore  [function; ce-only; CE 2.0..209] */
POSITION InsertBefore( POSITION position, ARG_TYPE newElement );

/* CList::IsEmpty  [function; ce-only; CE 2.0..209] */
BOOL IsEmpty( ) const;

/* CList::RemoveAll  [function; ce-only; CE 2.0..209] */
void RemoveAll( );

/* CList::RemoveAt  [function; ce-only; CE 2.0..209] */
void RemoveAt( POSITION position );

/* CList::RemoveHead  [function; ce-only; CE 2.0..209] */
TYPE RemoveHead( );

/* CList::RemoveTail  [function; ce-only; CE 2.0..209] */
TYPE RemoveTail( );

/* CList::SetAt  [function; ce-only; CE 2.0..209] */
void SetAt( POSITION pos, ARG_TYPE newElement );

/* CMap::CMap  [function; ce-only; CE 2.0..209] */
CMap( int nBlockSize = 10 );

/* CMap::GetCount  [function; ce-only; CE 2.0..209] */
int GetCount( ) const;

/* CMap::GetHashTableSize  [function; ce-only; CE 2.0..209] */
UINT GetHashTableSize( ) const;

/* CMap::GetNextAssoc  [function; ce-only; CE 2.0..209] */
void GetNextAssoc( POSITION& rNextPosition, KEY& rKey, VALUE& rValue ) const;

/* CMap::InitHashTable  [function; ce-only; CE 2.0..209] */
void InitHashTable( UINT hashSize );

/* CMap::IsEmpty  [function; ce-only; CE 2.0..209] */
BOOL IsEmpty( ) const;

/* CMap::Lookup  [function; ce-only; CE 2.0..209] */
BOOL Lookup( ARG_KEY key, VALUE& rValue ) const;

/* CMap::RemoveAll  [function; ce-only; CE 2.0..209] */
void RemoveAll( );

/* CMap::RemoveKey  [function; ce-only; CE 2.0..209] */
BOOL RemoveKey( ARG_KEY key );

/* CMap::SetAt  [function; ce-only; CE 2.0..209] */
void SetAt( ARG_KEY key, ARG_VALUE newValue );

/* CTypedPtrArray::Add  [function; ce-only; CE 2.0..209] */
int Add( TYPE newElement );

/* CTypedPtrArray::Append  [function; ce-only; CE 2.0..209] */
int Append( const CTypedPtrArray<BASE_CLASS, TYPE>& src );

/* CTypedPtrArray::Copy  [function; ce-only; CE 2.0..209] */
void Copy( const CTypedPtrArray<BASE_CLASS, TYPE>& src );

/* CTypedPtrArray::ElementAt  [function; ce-only; CE 2.0..209] */
TYPE& ElementAt( int nIndex );

/* CTypedPtrArray::GetAt  [function; ce-only; CE 2.0..209] */
TYPE GetAt( int nIndex ) const;

/* CTypedPtrArray::InsertAt  [function; ce-only; CE 2.0..209] */
void InsertAt( int nIndex, TYPE newElement, int nCount = 1 );

/* CTypedPtrArray::SetAt  [function; ce-only; CE 2.0..209] */
TYPE GetAt( int nIndex ) const;

/* CTypedPtrArray::SetAtGrow  [function; ce-only; CE 2.0..209] */
void SetAtGrow( int nIndex, TYPE newElement );

/* CTypedPtrList::AddHead  [function; ce-only; CE 2.0..209] */
POSITION AddHead( TYPE newElement );

/* CTypedPtrList::AddTail  [function; ce-only; CE 2.0..209] */
POSITION AddTail( TYPE newElement );

/* CTypedPtrList::RemoveHead  [function; ce-only; CE 2.0..209] */
TYPE RemoveHead( );

/* CTypedPtrList::RemoveTail  [function; ce-only; CE 2.0..209] */
TYPE RemoveTail( );

/* CTypedPtrList::SetAt  [function; ce-only; CE 2.0..209] */
void SetAt( POSITION pos, TYPE newElement );

/* CTypedPtrMap::GetNextAssoc  [function; ce-only; CE 2.0..209] */
void GetNextAssoc( POSITION& rPosition, KEY& rKey, VALUE& rValue ) const;

/* CTypedPtrMap::Lookup  [function; ce-only; CE 2.0..209] */
BOOL Lookup( BASE_CLASS::BASE_ARG_KEY key, VALUE& rValue ) const;

/* CTypedPtrMap::RemoveKey  [function; ce-only; CE 2.0..209] */
BOOL RemoveKey( ARG_KEY key );

/* CTypedPtrMap::SetAt  [function; ce-only; CE 2.0..209] */
void SetAt( LPCTSTR key, CObject* newValue );
throw( CMemoryException );
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
CList( int nBlockSize = 10 );
CMap( int nBlockSize = 10 );
TYPE& ElementAt( int nIndex );
POSITION FindIndex( int nIndex ) const;
void FreeExtra( );
TYPE GetAt( int nIndex ) const;
UINT GetHashTableSize( ) const;
void GetNextAssoc( POSITION& rNextPosition, KEY& rKey, VALUE& rValue ) const;
int GetUpperBound( ) const;
void InitHashTable( UINT hashSize );
POSITION InsertAfter( POSITION position, ARG_TYPE newElement );
POSITION InsertBefore( POSITION position, ARG_TYPE newElement );
BOOL Lookup( ARG_KEY key, VALUE& rValue ) const;
BOOL RemoveKey( ARG_KEY key );
void SetAt( int nIndex, ARG_TYPE newElement );
void SetAtGrow( int nIndex, ARG_TYPE newElement ); throw( CMemoryException );

#endif /* _AFXTEMPL_ */
