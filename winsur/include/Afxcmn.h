/* Afxcmn.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 0 declarations, 0 outlines, 0 base types, 0 extra macros, 87 extra decls
 */
#ifndef _AFXCMN_
#define _AFXCMN_


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
