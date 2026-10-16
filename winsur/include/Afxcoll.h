/* Afxcoll.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 53 declarations, 0 outlines, 0 base types, 0 extra macros, 5 extra decls
 */
#ifndef _AFXCOLL_
#define _AFXCOLL_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 200 && _WIN32_WCE < 210)) /* CE 2.0..209 */

/* CMapStringToOb::CMapStringToOb  [function; ce-only; CE 2.0..209] */
CMapStringToOb( int nBlockSize = 10 );

/* CMapStringToOb::GetCount  [function; ce-only; CE 2.0..209] */
int GetCount( ) const;

/* CMapStringToOb::GetNextAssoc  [function; ce-only; CE 2.0..209] */
void GetNextAssoc( POSITION& rNextPosition, CString& rKey, CObject*& rValue ) const;

/* CMapStringToOb::IsEmpty  [function; ce-only; CE 2.0..209] */
BOOL IsEmpty( ) const;

/* CMapStringToOb::Lookup  [function; ce-only; CE 2.0..209] */
BOOL Lookup( LPCTSTR key, CObject*& rValue ) const;

/* CMapStringToOb::operator [ ]  [function; ce-only; CE 2.0..209] */
CObject*& operator [ ]( LPCTSTR key );

/* CMapStringToOb::RemoveAll  [function; ce-only; CE 2.0..209] */
void RemoveAll( );

/* CMapStringToOb::RemoveKey  [function; ce-only; CE 2.0..209] */
BOOL RemoveKey( LPCTSTR key );

/* CMapStringToOb::SetAt  [function; ce-only; CE 2.0..209] */
void SetAt( LPCTSTR key, CObject* newValue );
throw( CMemoryException );

/* CObArray::Add  [function; ce-only; CE 2.0..209] */
int Add( CObject* newElement ); 
throw( CMemoryException );

/* CObArray::Append  [function; ce-only; CE 2.0..209] */
int Append( const CArray& src );

/* CObArray::Copy  [function; ce-only; CE 2.0..209] */
int Copy( const CArray& src );

/* CObArray::ElementAt  [function; ce-only; CE 2.0..209] */
CObject*& ElementAt( int nIndex );

/* CObArray::FreeExtra  [function; ce-only; CE 2.0..209] */
void FreeExtra( );

/* CObArray::GetData  [function; ce-only; CE 2.0..209] */
int Append( const CArray& src );

/* CObArray::GetSize  [function; ce-only; CE 2.0..209] */
int GetSize( ) const;

/* CObArray::GetUpperBound  [function; ce-only; CE 2.0..209] */
int GetUpperBound( ) const;

/* CObArray::InsertAt  [function; ce-only; CE 2.0..209] */
void InsertAt( int nIndex, CObject* newElement, int nCount = 1 );
throw( CMemoryException );

/* CObArray::RemoveAll  [function; ce-only; CE 2.0..209] */
void RemoveAll( );

/* CObArray::RemoveAt  [function; ce-only; CE 2.0..209] */
void RemoveAt( int nIndex, int nCount = 1 );

/* CObArray::SetAt  [function; ce-only; CE 2.0..209] */
void SetAt( int nIndex, CObject* newElement );

/* CObArray::SetAtGrow  [function; ce-only; CE 2.0..209] */
void SetAtGrow( int nIndex, CObject* newElement );
throw( CMemoryException );

/* CObArray::SetSize  [function; ce-only; CE 2.0..209] */
void SetSize( int nNewSize, int nGrowBy = –1 );
throw( CMemoryException );

/* CObList::AddHead  [function; ce-only; CE 2.0..209] */
POSITION AddHead( CObject* newElement );
throw( CMemoryException );

/* CObList::AddTail  [function; ce-only; CE 2.0..209] */
POSITION AddTail( CObject* newElement );
throw( CMemoryException );

/* CObList::CObList  [function; ce-only; CE 2.0..209] */
CObList( int nBlockSize = 10 );

/* CObList::FindIndex  [function; ce-only; CE 2.0..209] */
POSITION FindIndex( int nIndex ) const;

/* CObList::GetCount  [function; ce-only; CE 2.0..209] */
int GetCount( ) const;

/* CObList::InsertAfter  [function; ce-only; CE 2.0..209] */
POSITION InsertAfter( POSITION position, CObject* newElement );
throw ( CMemoryException );

/* CObList::InsertBefore  [function; ce-only; CE 2.0..209] */
POSITION InsertBefore( POSITION position, CObject* newElement );
throw ( CMemoryException );

/* CObList::IsEmpty  [function; ce-only; CE 2.0..209] */
BOOL IsEmpty( ) const;

/* CObList::RemoveAll  [function; ce-only; CE 2.0..209] */
void RemoveAll( );

/* CObList::RemoveAt  [function; ce-only; CE 2.0..209] */
void RemoveAt( POSITION position );

/* CObList::SetAt  [function; ce-only; CE 2.0..209] */
void SetAt( POSITION pos, CObject* newElement );

/* CTabCtrl::AdjustRect  [function; ce-only; CE 2.0..209] */
void AdjustRect( BOOL bLarger, LPRECT lpRect );

/* CTabCtrl::Create  [function; ce-only; CE 2.0..209] */
BOOL Create( DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID );

/* CTabCtrl::DeleteAllItems  [function; ce-only; CE 2.0..209] */
BOOL DeleteAllItems( );

/* CTabCtrl::DeleteItem  [function; ce-only; CE 2.0..209] */
BOOL DeleteItem( int nItem );

/* CTabCtrl::DrawItem  [function; ce-only; CE 2.0..209] */
void DrawItem( LPDRAWITEMSTRUCT lpDrawItemStruct );

/* CTabCtrl::GetCurFocus  [function; ce-only; CE 2.0..209] */
int GetCurFocus( ) const;

/* CTabCtrl::GetCurSel  [function; ce-only; CE 2.0..209] */
int GetCurSel( ) const;

/* CTabCtrl::GetItem  [function; ce-only; CE 2.0..209] */
BOOL GetItem( int nItem, TC_ITEM* pTabCtrlItem ) const;

/* CTabCtrl::GetItemCount  [function; ce-only; CE 2.0..209] */
int GetItemCount( ) const;

/* CTabCtrl::GetItemRect  [function; ce-only; CE 2.0..209] */
BOOL GetItemRect( int nItem, LPRECT lpRect ) const;

/* CTabCtrl::GetRowCount  [function; ce-only; CE 2.0..209] */
int GetRowCount( ) const;

/* CTabCtrl::HitTest  [function; ce-only; CE 2.0..209] */
int HitTest( TC_HITTESTINFO* pHitTestInfo ) const;

/* CTabCtrl::InsertItem  [function; ce-only; CE 2.0..209] */
BOOL InsertItem( int nItem, TC_ITEM* pTabCtrlItem );

/* CTabCtrl::RemoveImage  [function; ce-only; CE 2.0..209] */
void RemoveImage( int nImage );

/* CTabCtrl::SetCurSel  [function; ce-only; CE 2.0..209] */
int SetCurSel( int nItem );

/* CTabCtrl::SetImageList  [function; ce-only; CE 2.0..209] */
CImageList * SetImageList( CImageList * pImageList );

/* CTabCtrl::SetItem  [function; ce-only; CE 2.0..209] */
BOOL SetItem( int nItem, TC_ITEM* pTabCtrlItem );

/* CTabCtrl::SetItemSize  [function; ce-only; CE 2.0..209] */
CSize SetItemSize( CSize size );

/* CTabCtrl::SetPadding  [function; ce-only; CE 2.0..209] */
void SetPadding( CSize size );
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
CMapStringToOb( int nBlockSize = 10 );
CObList( int nBlockSize = 10 );
int GetCurFocus( ) const;
void RemoveImage( int nImage );
CSize SetItemSize( CSize size );

#endif /* _AFXCOLL_ */
