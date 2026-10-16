/* Afxext.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 51 declarations, 0 outlines, 0 base types, 0 extra macros, 42 extra decls
 */
#ifndef _AFXEXT_
#define _AFXEXT_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 200 && _WIN32_WCE < 210)) /* CE 2.0..209 */

/* CBitmapButton::AutoLoad  [function; ce-only; CE 2.0..209] */
BOOL AutoLoad( UINT nID, CWnd* pParent );

/* CBitmapButton::LoadBitmaps  [function; ce-only; CE 2.0..209] */
BOOL LoadBitmaps( LPCTSTR lpszBitmapResource, LPCTSTR lpszBitmapResourceSel = NULL, LPCTSTR lpszBitmapResourceFocus = NULL, LPCTSTR lpszBitmapResourceDisabled = NULL );

/* CBitmapButton::SizeToContent  [function; ce-only; CE 2.0..209] */
void SizeToContent( );

/* CCtrlView::CCtrlView  [function; ce-only; CE 2.0..209] */
CCtrlView( LPCTSTR lpszClass, DWORD dwStyle )

/* CEditView::GetBufferLength  [function; ce-only; CE 2.0..209] */
UINT GetBufferLength( ) const;

/* CEditView::GetSelectedText  [function; ce-only; CE 2.0..209] */
void GetSelectedText( CString& strResult ) const;

/* CEditView::LockBuffer  [function; ce-only; CE 2.0..209] */
LPCTSTR LockBuffer( ) const;

/* CEditView::SerializeRaw  [function; ce-only; CE 2.0..209] */
void SerializeRaw( CArchive& ar );

/* CEditView::SetTabStops  [function; ce-only; CE 2.0..209] */
void SetTabStops( int nTabStops );

/* CEditView::UnlockBuffer  [function; ce-only; CE 2.0..209] */
void UnlockBuffer( ) const;

/* CFormView::CFormView  [function; ce-only; CE 2.0..209] */
CFormView( LPCTSTR lpszTemplateName );

/* CRectTracker::AdjustRect  [function; ce-only; CE 2.0..209] */
virtual void AdjustRect( int nHandle, LPRECT lpRect );

/* CRectTracker::Draw  [function; ce-only; CE 2.0..209] */
void Draw( CDC* pDC ) const;

/* CRectTracker::DrawTrackerRect  [function; ce-only; CE 2.0..209] */
virtual void DrawTrackerRect( LPCRECT lpRect, CWnd* pWndClipTo, CDC* pDC, CWnd* pWnd );

/* CRectTracker::GetHandleMask  [function; ce-only; CE 2.0..209] */
virtual UINT GetHandleMask( ) const;

/* CRectTracker::GetTrueRect  [function; ce-only; CE 2.0..209] */
void GetTrueRect( LPRECT lpTrueRect ) const;

/* CRectTracker::HitTest  [function; ce-only; CE 2.0..209] */
int HitTest( CPoint point ) const;

/* CRectTracker::NormalizeHit  [function; ce-only; CE 2.0..209] */
int NormalizeHit( int nHandle ) const;

/* CRectTracker::OnChangedRect  [function; ce-only; CE 2.0..209] */
virtual void OnChangedRect( const CRect& rectOld );

/* CRectTracker::Track  [function; ce-only; CE 2.0..209] */
BOOL Track( CWnd* pWnd, CPoint point, BOOL bAllowInvert = FALSE, CWnd* pWndClipTo = NULL );

/* CRectTracker::TrackRubberBand  [function; ce-only; CE 2.0..209] */
BOOL TrackRubberBand( CWnd* pWnd, CPoint point, BOOL bAllowInvert = TRUE );

/* CSplitterWnd::ActivateNext  [function; ce-only; CE 2.0..209] */
virtual void ActivateNext( BOOL bPrev = FALSE );

/* CSplitterWnd::CanActivateNext  [function; ce-only; CE 2.0..209] */
virtual BOOL CanActivateNext( BOOL bPrev = FALSE );

/* CSplitterWnd::Create  [function; ce-only; CE 2.0..209] */
BOOL Create( CWnd* pParentWnd, int nMaxRows, int nMaxCols, SIZE sizeMin, CCreateContext* pContext, DWORD dwStyle = WS_CHILD | WS_VISIBLE |WS_HSCROLL | WS_VSCROLL | SPLS_DYNAMIC_SPLIT, UINT nID = AFX_IDW_PANE_FIRST );

/* CSplitterWnd::CreateScrollBarCtrl  [function; ce-only; CE 2.0..209] */
virtual BOOL CreateScrollBarCtrl( DWORD dwStyle, UINT nID );

/* CSplitterWnd::CreateStatic  [function; ce-only; CE 2.0..209] */
BOOL CreateStatic( CWnd* pParentWnd, int nRows, int nCols, DWORD dwStyle = WS_CHILD | WS_VISIBLE, UINT nID = AFX_IDW_PANE_FIRST );

/* CSplitterWnd::CreateView  [function; ce-only; CE 2.0..209] */
virtual BOOL CreateView( int row, int col, CRuntimeClass* pViewClass, SIZE sizeInit, CCreateContext* pContext );

/* CSplitterWnd::DeleteColumn  [function; ce-only; CE 2.0..209] */
virtual void DeleteColumn( int colDelete );

/* CSplitterWnd::DeleteRow  [function; ce-only; CE 2.0..209] */
virtual void DeleteRow( int rowDelete );

/* CSplitterWnd::DeleteView  [function; ce-only; CE 2.0..209] */
virtual void DeleteView( int row, int col );

/* CSplitterWnd::DoKeyboardSplit  [function; ce-only; CE 2.0..209] */
virtual BOOL DoKeyboardSplit( );

/* CSplitterWnd::DoScroll  [function; ce-only; CE 2.0..209] */
virtual BOOL DoScroll( CView* pViewFrom, UINT nScrollCode, BOOL bDoScroll = TRUE );

/* CSplitterWnd::DoScrollBy  [function; ce-only; CE 2.0..209] */
virtual BOOL DoScrollBy( CView* pViewFrom, CSize sizeScroll, BOOL bDoScroll = TRUE );

/* CSplitterWnd::GetActivePane  [function; ce-only; CE 2.0..209] */
virtual CWnd* GetActivePane(int* pRow = NULL, int* pCol = NULL);

/* CSplitterWnd::GetColumnCount  [function; ce-only; CE 2.0..209] */
int GetColumnCount( );

/* CSplitterWnd::GetColumnInfo  [function; ce-only; CE 2.0..209] */
void GetColumnInfo( int col, int& cxCur, int& cxMin );

/* CSplitterWnd::GetPane  [function; ce-only; CE 2.0..209] */
CWnd* GetPane( int row, int col );

/* CSplitterWnd::GetRowCount  [function; ce-only; CE 2.0..209] */
int GetRowCount( );

/* CSplitterWnd::GetRowInfo  [function; ce-only; CE 2.0..209] */
void GetRowInfo( int row, int& cyCur, int& cyMin );

/* CSplitterWnd::GetScrollStyle  [function; ce-only; CE 2.0..209] */
DWORD GetScrollStyle( ) const;

/* CSplitterWnd::IdFromRowCol  [function; ce-only; CE 2.0..209] */
int IdFromRowCol( int row, int col );

/* CSplitterWnd::IsChildPane  [function; ce-only; CE 2.0..209] */
BOOL IsChildPane( CWnd* pWnd, int& row, int& col );

/* CSplitterWnd::OnDrawSplitter  [function; ce-only; CE 2.0..209] */
virtual void OnDrawSplitter( CDC* pDC, ESplitType nType, const CRect& rect );

/* CSplitterWnd::OnInvertTracker  [function; ce-only; CE 2.0..209] */
virtual void OnInvertTracker( const CRect& rect );

/* CSplitterWnd::RecalcLayout  [function; ce-only; CE 2.0..209] */
void RecalcLayout( );

/* CSplitterWnd::SetActivePane  [function; ce-only; CE 2.0..209] */
virtual void SetActivePane( int row, int col, CWnd* pWnd = NULL );

/* CSplitterWnd::SetColumnInfo  [function; ce-only; CE 2.0..209] */
void SetColumnInfo( int col, int cxIdeal, int cxMin );

/* CSplitterWnd::SetRowInfo  [function; ce-only; CE 2.0..209] */
void SetRowInfo( int row, int cyIdeal, int cyMin );

/* CSplitterWnd::SetScrollStyle  [function; ce-only; CE 2.0..209] */
void SetScrollStyle( DWORD dwStyle );

/* CSplitterWnd::SplitColumn  [function; ce-only; CE 2.0..209] */
virtual BOOL SplitColumn( int cxBefore );

/* CSplitterWnd::SplitRow  [function; ce-only; CE 2.0..209] */
virtual BOOL SplitRow( int cyBefore );
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
CCtrlView( LPCTSTR lpszClass, DWORD dwStyle )
CFormView( LPCTSTR lpszTemplateName );
int GetColumnCount( );
void GetColumnInfo( int col, int& cxCur, int& cxMin );
int GetRowCount( );
void GetRowInfo( int row, int& cyCur, int& cyMin );
int IdFromRowCol( int row, int col );
void RecalcLayout( );
void SerializeRaw( CArchive& ar );
void SetColumnInfo( int col, int cxIdeal, int cxMin );
void SetRowInfo( int row, int cyIdeal, int cyMin );
void SetScrollStyle( DWORD dwStyle );
void SizeToContent( );

#endif /* _AFXEXT_ */
