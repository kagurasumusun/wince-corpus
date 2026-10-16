/* Afxcmn.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 159 declarations, 0 outlines, 0 base types, 0 extra macros, 87 extra decls
 */
#ifndef _AFXCMN_
#define _AFXCMN_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 200 && _WIN32_WCE < 210)) /* CE 2.0..209 */

/* CHeaderCtrl::Create  [function; ce-only; CE 2.0..209] */
BOOL Create( DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID );

/* CHeaderCtrl::DeleteItem  [function; ce-only; CE 2.0..209] */
BOOL DeleteItem( int nPos );

/* CHeaderCtrl::DrawItem  [function; ce-only; CE 2.0..209] */
void DrawItem( LPDRAWITEMSTRUCT lpDrawItemStruct );

/* CHeaderCtrl::GetItem  [function; ce-only; CE 2.0..209] */
BOOL GetItem( int nPos, HD_ITEM* pHeaderItem ) const;

/* CHeaderCtrl::GetItemCount  [function; ce-only; CE 2.0..209] */
int GetItemCount( ) const;

/* CHeaderCtrl::InsertItem  [function; ce-only; CE 2.0..209] */
int InsertItem( int nPos, HD_ITEM* phdi );

/* CHeaderCtrl::Layout  [function; ce-only; CE 2.0..209] */
BOOL Layout( HD_LAYOUT* pHeaderLayout );

/* CHeaderCtrl::SetItem  [function; ce-only; CE 2.0..209] */
BOOL SetItem( int nPos, HD_ITEM* pHeaderItem );

/* CImageList::Add  [function; ce-only; CE 2.0..209] */
int Add( CBitmap* pbmImage, CBitmap* pbmMask );

/* CImageList::Attach  [function; ce-only; CE 2.0..209] */
BOOL Attach( HIMAGELIST hImageList );

/* CImageList::BeginDrag  [function; ce-only; CE 2.0..209] */
BOOL BeginDrag( int nImage, CPoint ptHotSpot );

/* CImageList::Create  [function; ce-only; CE 2.0..209] */
BOOL Create( int cx, int cy, BOOL bMask, int nInitial, int nGrow );

/* CImageList::DeleteImageList  [function; ce-only; CE 2.0..209] */
BOOL DeleteImageList( );

/* CImageList::Detach  [function; ce-only; CE 2.0..209] */
HIMAGELIST Detach( );

/* CImageList::DragEnter  [function; ce-only; CE 2.0..209] */
static BOOL DragEnter( CWnd* pWndLock, CPoint point );

/* CImageList::DragLeave  [function; ce-only; CE 2.0..209] */
static BOOL DragLeave( CWnd* pWndLock );

/* CImageList::DragMove  [function; ce-only; CE 2.0..209] */
static BOOL DragMove( CPoint pt );

/* CImageList::DragShowNolock  [function; ce-only; CE 2.0..209] */
static BOOL DragShowNolock( BOOL bShow );

/* CImageList::Draw  [function; ce-only; CE 2.0..209] */
BOOL Draw( CDC* pdc, int nImage, POINT pt, UINT nStyle );

/* CImageList::EndDrag  [function; ce-only; CE 2.0..209] */
static void EndDrag( );

/* CImageList::ExtractIcon  [function; ce-only; CE 2.0..209] */
HICON ExtractIcon( int nImage );

/* CImageList::GetImageCount  [function; ce-only; CE 2.0..209] */
int GetImageCount( ) const;

/* CImageList::GetImageInfo  [function; ce-only; CE 2.0..209] */
BOOL GetImageInfo( int nImage, IMAGEINFO* pImageInfo ) const;

/* CImageList::Read  [function; ce-only; CE 2.0..209] */
BOOL Read( CArchive* pArchive );

/* CImageList::Remove  [function; ce-only; CE 2.0..209] */
BOOL Remove( int nImage );

/* CImageList::Replace  [function; ce-only; CE 2.0..209] */
BOOL Replace( int nImage, CBitmap* pbmImage, CBitmap* pbmMask );

/* CImageList::SetBkColor  [function; ce-only; CE 2.0..209] */
COLORREF SetBkColor( COLORREF cr );

/* CImageList::SetDragCursorImage  [function; ce-only; CE 2.0..209] */
BOOL SetDragCursorImage( int nDrag, CPoint ptHotSpot );

/* CImageList::SetOverlayImage  [function; ce-only; CE 2.0..209] */
BOOL SetOverlayImage( int nImage, int nOverlay );

/* CImageList::Write  [function; ce-only; CE 2.0..209] */
BOOL Write( CArchive* pArchive );

/* CListCtrl::Arrange  [function; ce-only; CE 2.0..209] */
BOOL Arrange( UINT nCode );

/* CListCtrl::Create  [function; ce-only; CE 2.0..209] */
BOOL Create( DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID );

/* CListCtrl::DeleteAllItems  [function; ce-only; CE 2.0..209] */
BOOL DeleteAllItems( );

/* CListCtrl::DeleteColumn  [function; ce-only; CE 2.0..209] */
BOOL DeleteColumn( int nCol );

/* CListCtrl::DeleteItem  [function; ce-only; CE 2.0..209] */
BOOL DeleteItem( int nItem );

/* CListCtrl::DrawItem  [function; ce-only; CE 2.0..209] */
virtual void DrawItem( LPDRAWITEMSTRUCT lpDrawItemStruct );

/* CListCtrl::EditLabel  [function; ce-only; CE 2.0..209] */
CEdit* EditLabel( int nItem );

/* CListCtrl::EnsureVisible  [function; ce-only; CE 2.0..209] */
BOOL EnsureVisible( int nItem, BOOL bPartialOK );

/* CListCtrl::FindItem  [function; ce-only; CE 2.0..209] */
int FindItem( LV_FINDINFO* pFindInfo, int nStart = –1 ) const;

/* CListCtrl::GetCallbackMask  [function; ce-only; CE 2.0..209] */
UINT GetCallbackMask( ) const;

/* CListCtrl::GetColumn  [function; ce-only; CE 2.0..209] */
BOOL GetColumn( int nCol, LV_COLUMN* pColumn ) const;

/* CListCtrl::GetColumnWidth  [function; ce-only; CE 2.0..209] */
int GetColumnWidth( int nCol ) const;

/* CListCtrl::GetCountPerPage  [function; ce-only; CE 2.0..209] */
int GetCountPerPage( ) const;

/* CListCtrl::GetImageList  [function; ce-only; CE 2.0..209] */
CImageList* GetImageList( int nImageList ) const;

/* CListCtrl::GetItem  [function; ce-only; CE 2.0..209] */
BOOL GetItem( LV_ITEM* pItem ) const;

/* CListCtrl::GetItemCount  [function; ce-only; CE 2.0..209] */
int GetItemCount( );

/* CListCtrl::GetItemData  [function; ce-only; CE 2.0..209] */
DWORD GetItemData( int nItem ) const;

/* CListCtrl::GetItemPosition  [function; ce-only; CE 2.0..209] */
BOOL GetItemPosition( int nItem, LPPOINT lpPoint ) const;

/* CListCtrl::GetItemRect  [function; ce-only; CE 2.0..209] */
BOOL GetItemRect( int nItem, LPRECT lpRect, UINT nCode ) const;

/* CListCtrl::GetItemState  [function; ce-only; CE 2.0..209] */
UINT GetItemState( int nItem, UINT nMask ) const;

/* CListCtrl::GetItemText  [function; ce-only; CE 2.0..209] */
int GetItemText( int nItem, int nSubItem, LPTSTR lpszText, int nLen ) const;

/* CListCtrl::GetNextItem  [function; ce-only; CE 2.0..209] */
int GetNextItem( int nItem, int nFlags ) const;

/* CListCtrl::GetOrigin  [function; ce-only; CE 2.0..209] */
BOOL GetOrigin( LPPOINT lpPoint ) const;

/* CListCtrl::GetSelectedCount  [function; ce-only; CE 2.0..209] */
UINT GetSelectedCount( ) const;

/* CListCtrl::GetStringWidth  [function; ce-only; CE 2.0..209] */
int GetStringWidth( LPCTSTR lpsz ) const;

/* CListCtrl::GetTopIndex  [function; ce-only; CE 2.0..209] */
int GetTopIndex( ) const;

/* CListCtrl::GetViewRect  [function; ce-only; CE 2.0..209] */
BOOL GetViewRect( LPRECT lpRect ) const;

/* CListCtrl::HitTest  [function; ce-only; CE 2.0..209] */
int HitTest( LV_HITTESTINFO* pHitTestInfo ) const;

/* CListCtrl::InsertColumn  [function; ce-only; CE 2.0..209] */
int InsertColumn( int nCol, const LV_COLUMN* pColumn );

/* CListCtrl::InsertItem  [function; ce-only; CE 2.0..209] */
int InsertItem( const LV_ITEM* pItem );

/* CListCtrl::RedrawItems  [function; ce-only; CE 2.0..209] */
BOOL RedrawItems( int nFirst, int nLast );

/* CListCtrl::Scroll  [function; ce-only; CE 2.0..209] */
BOOL Scroll( CSize size );

/* CListCtrl::SetBkColor  [function; ce-only; CE 2.0..209] */
BOOL SetBkColor( COLORREF cr );

/* CListCtrl::SetCallbackMask  [function; ce-only; CE 2.0..209] */
BOOL SetCallbackMask( UINT nMask );

/* CListCtrl::SetColumn  [function; ce-only; CE 2.0..209] */
BOOL SetColumn( int nCol, const LV_COLUMN* pColumn );

/* CListCtrl::SetColumnWidth  [function; ce-only; CE 2.0..209] */
BOOL SetColumnWidth( int nCol, int cx );

/* CListCtrl::SetImageList  [function; ce-only; CE 2.0..209] */
CImageList* SetImageList( CImageList* pImageList, int nImageList );

/* CListCtrl::SetItem  [function; ce-only; CE 2.0..209] */
BOOL SetItem( const LV_ITEM* pItem );

/* CListCtrl::SetItemCount  [function; ce-only; CE 2.0..209] */
void SetItemCount( int nItems );

/* CListCtrl::SetItemData  [function; ce-only; CE 2.0..209] */
BOOL SetItemData( int nItem, DWORD dwData );

/* CListCtrl::SetItemPosition  [function; ce-only; CE 2.0..209] */
BOOL SetItemPosition( int nItem, POINT pt );

/* CListCtrl::SetItemState  [function; ce-only; CE 2.0..209] */
BOOL SetItemState( int nItem, LV_ITEM* pItem );

/* CListCtrl::SetItemText  [function; ce-only; CE 2.0..209] */
BOOL SetItemText( int nItem, int nSubItem, LPTSTR lpszText );

/* CListCtrl::SetTextBkColor  [function; ce-only; CE 2.0..209] */
BOOL SetTextBkColor( COLORREF cr );

/* CListCtrl::SetTextColor  [function; ce-only; CE 2.0..209] */
BOOL SetTextColor( COLORREF cr );

/* CListCtrl::SortItems  [function; ce-only; CE 2.0..209] */
BOOL SortItems( PFNLVCOMPARE pfnCompare, DWORD dwData );

/* CListCtrl::Update  [function; ce-only; CE 2.0..209] */
BOOL Update( int nItem );

/* CProgressCtrl::Create  [function; ce-only; CE 2.0..209] */
BOOL Create( DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID );

/* CProgressCtrl::OffsetPos  [function; ce-only; CE 2.0..209] */
int OffsetPos( int nPos );

/* CProgressCtrl::SetPos  [function; ce-only; CE 2.0..209] */
int SetPos( int nPos );

/* CProgressCtrl::SetRange  [function; ce-only; CE 2.0..209] */
void SetRange( int nLower, int nUpper );

/* CProgressCtrl::SetStep  [function; ce-only; CE 2.0..209] */
int SetStep( int nStep );

/* CProgressCtrl::StepIt  [function; ce-only; CE 2.0..209] */
int StepIt( );

/* CSliderCtrl::ClearSel  [function; ce-only; CE 2.0..209] */
void ClearSel( BOOL bRedraw = FALSE );

/* CSliderCtrl::ClearTics  [function; ce-only; CE 2.0..209] */
void ClearTics( BOOL bRedraw = FALSE );

/* CSliderCtrl::Create  [function; ce-only; CE 2.0..209] */
BOOL Create( DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID );

/* CSliderCtrl::GetChannelRect  [function; ce-only; CE 2.0..209] */
void GetChannelRect( LPRECT lprc ) const;

/* CSliderCtrl::GetLineSize  [function; ce-only; CE 2.0..209] */
int GetLineSize( ) const;

/* CSliderCtrl::GetNumTics  [function; ce-only; CE 2.0..209] */
UINT GetNumTics( ) const;

/* CSliderCtrl::GetPageSize  [function; ce-only; CE 2.0..209] */
int GetPageSize( ) const;

/* CSliderCtrl::GetPos  [function; ce-only; CE 2.0..209] */
int GetPos( ) const;

/* CSliderCtrl::GetRange  [function; ce-only; CE 2.0..209] */
void GetRange( int& nMin, int& nMax ) const;

/* CSliderCtrl::GetRangeMax  [function; ce-only; CE 2.0..209] */
int GetRangeMax( ) const;

/* CSliderCtrl::GetRangeMin  [function; ce-only; CE 2.0..209] */
int GetRangeMin( ) const;

/* CSliderCtrl::GetSelection  [function; ce-only; CE 2.0..209] */
void GetSelection( int& nMin, int& nMax ) const;

/* CSliderCtrl::GetThumbRect  [function; ce-only; CE 2.0..209] */
void GetThumbRect( LPRECT lprc ) const;

/* CSliderCtrl::GetTic  [function; ce-only; CE 2.0..209] */
int GetTic( int nTic ) const;

/* CSliderCtrl::GetTicArray  [function; ce-only; CE 2.0..209] */
DWORD* GetTicArray( ) const;

/* CSliderCtrl::GetTicPos  [function; ce-only; CE 2.0..209] */
int GetTicPos( int nTic ) const;

/* CSliderCtrl::SetLineSize  [function; ce-only; CE 2.0..209] */
int SetLineSize( int nSize );

/* CSliderCtrl::SetPageSize  [function; ce-only; CE 2.0..209] */
int SetPageSize( int nSize );

/* CSliderCtrl::SetPos  [function; ce-only; CE 2.0..209] */
void SetPos( int nPos );

/* CSliderCtrl::SetRange  [function; ce-only; CE 2.0..209] */
void SetRange( int nMin, int nMax, BOOL bRedraw = FALSE );

/* CSliderCtrl::SetRangeMax  [function; ce-only; CE 2.0..209] */
void SetRangeMax( int nMax, BOOL bRedraw = FALSE );

/* CSliderCtrl::SetRangeMin  [function; ce-only; CE 2.0..209] */
void SetRangeMin( int nMin, BOOL bRedraw = FALSE );

/* CSliderCtrl::SetSelection  [function; ce-only; CE 2.0..209] */
void SetSelection( int nMin, int nMax );

/* CSliderCtrl::SetTic  [function; ce-only; CE 2.0..209] */
BOOL SetTic( int nTic );

/* CSliderCtrl::SetTicFreq  [function; ce-only; CE 2.0..209] */
void SetTicFreq( int nFreq );

/* CSliderCtrl::VerifyPos  [function; ce-only; CE 2.0..209] */
void VerifyPos( );

/* CSpinButtonCtrl::Create  [function; ce-only; CE 2.0..209] */
BOOL Create( DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID );

/* CSpinButtonCtrl::GetAccel  [function; ce-only; CE 2.0..209] */
UINT GetAccel( int nAccel, UDACCEL* pAccel ) const;

/* CSpinButtonCtrl::GetBase  [function; ce-only; CE 2.0..209] */
UINT GetBase( ) const;

/* CSpinButtonCtrl::GetPos  [function; ce-only; CE 2.0..209] */
int GetPos( ) const;

/* CSpinButtonCtrl::GetRange  [function; ce-only; CE 2.0..209] */
DWORD GetRange( ) const;

/* CSpinButtonCtrl::SetAccel  [function; ce-only; CE 2.0..209] */
BOOL SetAccel( int nAccel, UDACCEL* pAccel );

/* CSpinButtonCtrl::SetBase  [function; ce-only; CE 2.0..209] */
int SetBase( int nBase );

/* CSpinButtonCtrl::SetPos  [function; ce-only; CE 2.0..209] */
int SetPos( int nPos );

/* CSpinButtonCtrl::SetRange  [function; ce-only; CE 2.0..209] */
void SetRange( int nLower, int nUpper );

/* CTreeCtrl::Create  [function; ce-only; CE 2.0..209] */
BOOL Create( DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID );

/* CTreeCtrl::DeleteAllItems  [function; ce-only; CE 2.0..209] */
BOOL DeleteAllItems( );

/* CTreeCtrl::DeleteItem  [function; ce-only; CE 2.0..209] */
BOOL DeleteItem( HTREEITEM hItem );

/* CTreeCtrl::EnsureVisible  [function; ce-only; CE 2.0..209] */
BOOL EnsureVisible( HTREEITEM hItem );

/* CTreeCtrl::Expand  [function; ce-only; CE 2.0..209] */
BOOL Expand( HTREEITEM hItem, UINT nCode );

/* CTreeCtrl::GetChildItem  [function; ce-only; CE 2.0..209] */
HTREEITEM GetChildItem( HTREEITEM hItem );

/* CTreeCtrl::GetCount  [function; ce-only; CE 2.0..209] */
UINT GetCount( );

/* CTreeCtrl::GetDropHilightItem  [function; ce-only; CE 2.0..209] */
HTREEITEM GetDropHilightItem( );

/* CTreeCtrl::GetFirstVisibleItem  [function; ce-only; CE 2.0..209] */
HTREEITEM GetFirstVisibleItem( );

/* CTreeCtrl::GetImageList  [function; ce-only; CE 2.0..209] */
CImageList* GetImageList( UINT nImage );

/* CTreeCtrl::GetIndent  [function; ce-only; CE 2.0..209] */
UINT GetIndent( );

/* CTreeCtrl::GetItem  [function; ce-only; CE 2.0..209] */
BOOL GetItem( TV_ITEM* pItem );

/* CTreeCtrl::GetItemData  [function; ce-only; CE 2.0..209] */
DWORD GetItemData( HTREEITEM hItem ) const;

/* CTreeCtrl::GetItemImage  [function; ce-only; CE 2.0..209] */
BOOL GetItemImage( HTREEITEM hItem, int& nImage, int& nSelectedImage ) const;

/* CTreeCtrl::GetItemRect  [function; ce-only; CE 2.0..209] */
BOOL GetItemRect( HTREEITEM hItem, LPRECT lpRect, BOOL bTextOnly );

/* CTreeCtrl::GetItemState  [function; ce-only; CE 2.0..209] */
UINT GetItemState( HTREEITEM hItem, UINT nStateMask ) const;

/* CTreeCtrl::GetNextItem  [function; ce-only; CE 2.0..209] */
HTREEITEM GetNextItem( HTREEITEM hItem, UINT nCode );

/* CTreeCtrl::GetNextSiblingItem  [function; ce-only; CE 2.0..209] */
HTREEITEM GetNextSiblingItem( HTREEITEM hItem );

/* CTreeCtrl::GetNextVisibleItem  [function; ce-only; CE 2.0..209] */
HTREEITEM GetNextVisibleItem( HTREEITEM hItem );

/* CTreeCtrl::GetParentItem  [function; ce-only; CE 2.0..209] */
HTREEITEM GetParentItem( HTREEITEM hItem );

/* CTreeCtrl::GetPrevSiblingItem  [function; ce-only; CE 2.0..209] */
HTREEITEM GetPrevSiblingItem( HTREEITEM hItem );

/* CTreeCtrl::GetPrevVisibleItem  [function; ce-only; CE 2.0..209] */
HTREEITEM GetPrevVisibleItem( HTREEITEM hItem );

/* CTreeCtrl::GetRootItem  [function; ce-only; CE 2.0..209] */
HTREEITEM GetRootItem( );

/* CTreeCtrl::GetSelectedItem  [function; ce-only; CE 2.0..209] */
HTREEITEM GetSelectedItem( );

/* CTreeCtrl::GetVisibleCount  [function; ce-only; CE 2.0..209] */
UINT GetVisibleCount( );

/* CTreeCtrl::HitTest  [function; ce-only; CE 2.0..209] */
HTREEITEM HitTest( CPoint pt, UINT* pFlags );

/* CTreeCtrl::InsertItem  [function; ce-only; CE 2.0..209] */
HTREEITEM InsertItem( LPTV_INSERTSTRUCT lpInsertStruct );

/* CTreeCtrl::ItemHasChildren  [function; ce-only; CE 2.0..209] */
BOOL ItemHasChildren( HTREEITEM hItem );

/* CTreeCtrl::Select  [function; ce-only; CE 2.0..209] */
HTREEITEM Select( HTREEITEM hItem, UINT nCode );

/* CTreeCtrl::SelectDropTarget  [function; ce-only; CE 2.0..209] */
HTREEITEM SelectDropTarget( HTREEITEM hItem );

/* CTreeCtrl::SelectItem  [function; ce-only; CE 2.0..209] */
BOOL SelectItem( HTREEITEM hItem );

/* CTreeCtrl::SelectSetFirstVisible  [function; ce-only; CE 2.0..209] */
HTREEITEM SelectItem( HTREEITEM hItem );

/* CTreeCtrl::SetImageList  [function; ce-only; CE 2.0..209] */
CImageList* SetImageList( CImageList * pImageList, int nImageListType );

/* CTreeCtrl::SetIndent  [function; ce-only; CE 2.0..209] */
void SetIndent( UINT nIndent );

/* CTreeCtrl::SetItem  [function; ce-only; CE 2.0..209] */
BOOL SetItem( TV_ITEM* pItem );

/* CTreeCtrl::SetItemData  [function; ce-only; CE 2.0..209] */
BOOL SetItemData( HTREEITEM hItem, DWORD dwData );

/* CTreeCtrl::SetItemImage  [function; ce-only; CE 2.0..209] */
BOOL SetItemImage( HTREEITEM hItem, int nImage, int nSelectedImage );

/* CTreeCtrl::SetItemState  [function; ce-only; CE 2.0..209] */
BOOL SetItemState( HTREEITEM hItem, UINT nState, UINT nStateMask );

/* CTreeCtrl::SetItemText  [function; ce-only; CE 2.0..209] */
BOOL SetItemText( HTREEITEM hItem, LPCTSTR lpszItem );

/* CTreeCtrl::SortChildren  [function; ce-only; CE 2.0..209] */
BOOL SortChildren( HTREEITEM hItem );

/* CTreeCtrl::SortChildrenCB  [function; ce-only; CE 2.0..209] */
BOOL SortChildrenCB( LPTV_SORTCB pSort );
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
BOOL BeginDrag( int nImage, CPoint ptHotSpot );
BOOL DeleteAllItems( );
BOOL DeleteColumn( int nCol );
BOOL DeleteImageList( );
static BOOL DragMove( CPoint pt );
static BOOL DragShowNolock( BOOL bShow );
CEdit* EditLabel( int nItem );
static void EndDrag( );
BOOL EnsureVisible( int nItem, BOOL bPartialOK );
BOOL Expand( HTREEITEM hItem, UINT nCode );
HTREEITEM GetChildItem( HTREEITEM hItem );
HTREEITEM GetDropHilightItem( );
HTREEITEM GetFirstVisibleItem( );
UINT GetIndent( );
HTREEITEM GetNextSiblingItem( HTREEITEM hItem );
HTREEITEM GetNextVisibleItem( HTREEITEM hItem );
HTREEITEM GetPrevSiblingItem( HTREEITEM hItem );
HTREEITEM GetPrevVisibleItem( HTREEITEM hItem );
HTREEITEM GetRootItem( );
UINT GetVisibleCount( );
int InsertColumn( int nCol, const LV_COLUMN* pColumn );
int InsertItem( int nPos, HD_ITEM* phdi );
BOOL ItemHasChildren( HTREEITEM hItem );
BOOL Layout( HD_LAYOUT* pHeaderLayout );
int OffsetPos( int nPos );
BOOL RedrawItems( int nFirst, int nLast );
BOOL Replace( int nImage, CBitmap* pbmImage, CBitmap* pbmMask );
HTREEITEM SelectDropTarget( HTREEITEM hItem );
BOOL SetAccel( int nAccel, UDACCEL* pAccel );
int SetBase( int nBase );
BOOL SetCallbackMask( UINT nMask );
BOOL SetColumn( int nCol, const LV_COLUMN* pColumn );
BOOL SetDragCursorImage( int nDrag, CPoint ptHotSpot );
CImageList* SetImageList( CImageList* pImageList, int nImageList );
void SetIndent( UINT nIndent );
void SetItemCount( int nItems );
BOOL SetItemImage( HTREEITEM hItem, int nImage, int nSelectedImage );
BOOL SetItemPosition( int nItem, POINT pt );
BOOL SetItemState( int nItem, LV_ITEM* pItem );
BOOL SetItemText( int nItem, int nSubItem, LPTSTR lpszText );
int SetLineSize( int nSize );
BOOL SetOverlayImage( int nImage, int nOverlay );
int SetPageSize( int nSize );
int SetPos( int nPos );
void SetRange( int nLower, int nUpper );
void SetSelection( int nMin, int nMax );
int SetStep( int nStep );
BOOL SetTextBkColor( COLORREF cr );
BOOL SetTic( int nTic );
void SetTicFreq( int nFreq );
BOOL SortChildren( HTREEITEM hItem );
BOOL SortChildrenCB( LPTV_SORTCB pSort );
BOOL SortItems( PFNLVCOMPARE pfnCompare, DWORD dwData );
int StepIt( );
void VerifyPos( );

#endif /* _AFXCMN_ */
