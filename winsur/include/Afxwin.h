/* Afxwin.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 624 declarations, 0 outlines, 0 base types, 0 extra macros, 298 extra decls
 */
#ifndef _AFXWIN_
#define _AFXWIN_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 200 && _WIN32_WCE < 210)) /* CE 2.0..209 */

/* CDocTemplate::GetDocString  [enum; ce-only; CE 2.0..209] */
virtual BOOL GetDocString( CString& rString, enum DocStringIndex index ) const;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 200 && _WIN32_WCE < 210)) /* CE 2.0..209 */

/* CBitmap::CreateBitmap  [function; ce-only; CE 2.0..209] */
BOOL CreateBitmap ( int nWidth, int nHeight, UINT nPlanes, UINT nBitcount, const void* lpBits );

/* CBitmap::CreateBitmapIndirect  [function; ce-only; CE 2.0..209] */
BOOL CreateBitmapIndirect( LPBITMAP lpBitmap );

/* CBitmap::CreateCompatibleBitmap  [function; ce-only; CE 2.0..209] */
BOOL CreateCompatibleBitmap( CDC* pDC, int nWidth, int nHeight );

/* CBitmap::FromHandle  [function; ce-only; CE 2.0..209] */
static CBitmap* PASCAL FromHandle( HBITMAP hBitmap );

/* CBitmap::GetBitmap  [function; ce-only; CE 2.0..209] */
int GetBitmap( BITMAP* pBitMap );

/* CBitmap::LoadBitmap  [function; ce-only; CE 2.0..209] */
BOOL LoadBitmap ( LPCTSTR lpszResourceName );

/* CBitmap::LoadOEMBitmap  [function; ce-only; CE 2.0..209] */
BOOL LoadOEMBitmap ( UINT nIDBitmap );

/* CBitmap::SetBitmapDimension  [function; ce-only; CE 2.0..209] */
CSize SetBitmapDimension( int nWidth, int nHeight );

/* CBrush::CreateBrushIndirect  [function; ce-only; CE 2.0..209] */
BOOL CreateBrushIndirect( LPLOGBRUSH lpLogBrush );

/* CBrush::CreateDIBPatternBrush  [function; ce-only; CE 2.0..209] */
BOOL CreateDIBPatternBrush ( HGLOBAL hPackedDIB, UINT nUsage );

/* CBrush::CreateSolidBrush  [function; ce-only; CE 2.0..209] */
BOOL CreateSolidBrush( COLORREF crColor );

/* CBrush::CreateSysColorBrush  [function; ce-only; CE 2.0..209] */
BOOL CreateSysColorBrush ( int nIndex );

/* CBrush::FromHandle  [function; ce-only; CE 2.0..209] */
static CBrush* PASCAL FromHandle( HBRUSH hBrush );

/* CBrush::GetLogBrush  [function; ce-only; CE 2.0..209] */
int GetLogBrush( LOGBRUSH* pLogBrush );

/* CButton::Create  [function; ce-only; CE 2.0..209] */
BOOL Create( LPCTSTR lpszCaption, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID );

/* CButton::DrawItem  [function; ce-only; CE 2.0..209] */
virtual void DrawItem( LPDRAWITEMSTRUCT lpDrawItemStruct );

/* CButton::GetButtonStyle  [function; ce-only; CE 2.0..209] */
UINT GetButtonStyle( ) const;

/* CButton::GetCheck  [function; ce-only; CE 2.0..209] */
int GetCheck( ) const;

/* CButton::GetState  [function; ce-only; CE 2.0..209] */
UINT GetState( ) const;

/* CButton::SetButtonStyle  [function; ce-only; CE 2.0..209] */
void SetButtonStyle( UINT nStyle, BOOL bRedraw = TRUE );

/* CButton::SetCheck  [function; ce-only; CE 2.0..209] */
void SetCheck( int nCheck );

/* CButton::SetState  [function; ce-only; CE 2.0..209] */
void SetState( BOOL bHighlight );

/* CCmdTarget::BeginWaitCursor  [function; ce-only; CE 2.0..209] */
void BeginWaitCursor( );

/* CCmdTarget::CCmdTarget  [function; ce-only; CE 2.0..209] */
void CCmdTarget( );

/* CCmdTarget::EnableAutomation  [function; ce-only; CE 2.0..209] */
void EnableAutomation( );

/* CCmdTarget::EndWaitCursor  [function; ce-only; CE 2.0..209] */
void EndWaitCursor( );

/* CCmdTarget::GetIDispatch  [function; ce-only; CE 2.0..209] */
LPDISPATCH GetIDispatch( BOOL bAddRef );

/* CCmdTarget::IsResultExpected  [function; ce-only; CE 2.0..209] */
BOOL IsResultExpected( );

/* CCmdTarget::OnCmdMsg  [function; ce-only; CE 2.0..209] */
virtual BOOL OnCmdMsg( UINT nID, int nCode, void* pExtra, AFX_CMDHANDLERINFO* pHandlerInfo );

/* CCmdTarget::OnFinalRelease  [function; ce-only; CE 2.0..209] */
virtual void OnFinalRelease( );

/* CCmdTarget::RestoreWaitCursor  [function; ce-only; CE 2.0..209] */
void RestoreWaitCursor( );

/* CCmdUI::CCmdUI  [function; ce-only; CE 2.0..209] */
void CCmdUI( );

/* CCmdUI::ContinueRouting  [function; ce-only; CE 2.0..209] */
void ContinueRouting( );

/* CCmdUI::Enable  [function; ce-only; CE 2.0..209] */
virtual void Enable( BOOL bOn = TRUE );

/* CCmdUI::SetCheck  [function; ce-only; CE 2.0..209] */
virtual void SetCheck( int nCheck = 1 );

/* CCmdUI::SetRadio  [function; ce-only; CE 2.0..209] */
virtual void SetRadio( BOOL bOn = TRUE );

/* CCmdUI::SetText  [function; ce-only; CE 2.0..209] */
virtual void SetText( LPCTSTR lpszText );

/* CComboBox::AddString  [function; ce-only; CE 2.0..209] */
int AddString( LPCTSTR lpszString );

/* CComboBox::Clear  [function; ce-only; CE 2.0..209] */
void Clear( );

/* CComboBox::CompareItem  [function; ce-only; CE 2.0..209] */
virtual int CompareItem( LPCOMPAREITEMSTRUCT lpCompareItemStruct );

/* CComboBox::Copy  [function; ce-only; CE 2.0..209] */
void Copy( );

/* CComboBox::Create  [function; ce-only; CE 2.0..209] */
BOOL Create( DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID );

/* CComboBox::Cut  [function; ce-only; CE 2.0..209] */
void Cut( );

/* CComboBox::DeleteItem  [function; ce-only; CE 2.0..209] */
virtual void DeleteItem( LPDELETEITEMSTRUCT lpDeleteItemStruct );

/* CComboBox::DeleteString  [function; ce-only; CE 2.0..209] */
int DeleteString( UINT nIndex );

/* CComboBox::DrawItem  [function; ce-only; CE 2.0..209] */
virtual void DrawItem( LPDRAWITEMSTRUCT lpDrawItemStruct );

/* CComboBox::FindString  [function; ce-only; CE 2.0..209] */
int FindString( int nStartAfter, LPCTSTR lpszString ) const;

/* CComboBox::FindStringExact  [function; ce-only; CE 2.0..209] */
int FindStringExact( int nIndexStart, LPCTSTR lpszFind ) const;

/* CComboBox::GetCount  [function; ce-only; CE 2.0..209] */
int GetCount( ) const;

/* CComboBox::GetCurSel  [function; ce-only; CE 2.0..209] */
int GetCurSel( ) const;

/* CComboBox::GetDroppedControlRect  [function; ce-only; CE 2.0..209] */
void GetDroppedControlRect( LPRECT lprect ) const;

/* CComboBox::GetDroppedState  [function; ce-only; CE 2.0..209] */
BOOL GetDroppedState( ) const;

/* CComboBox::GetDroppedWidth  [function; ce-only; CE 2.0..209] */
int GetDroppedWidth( ) const;

/* CComboBox::GetEditSel  [function; ce-only; CE 2.0..209] */
DWORD GetEditSel( ) const;

/* CComboBox::GetExtendedUI  [function; ce-only; CE 2.0..209] */
BOOL GetExtendedUI( ) const;

/* CComboBox::GetHorizontalExtent  [function; ce-only; CE 2.0..209] */
UINT GetHorizontalExtent( ) const;

/* CComboBox::GetItemData  [function; ce-only; CE 2.0..209] */
DWORD GetItemData( int nIndex ) const;

/* CComboBox::GetItemDataPtr  [function; ce-only; CE 2.0..209] */
void* GetItemDataPtr( int nIndex ) const;

/* CComboBox::GetItemHeight  [function; ce-only; CE 2.0..209] */
int GetItemHeight( int nIndex ) const;

/* CComboBox::GetLBText  [function; ce-only; CE 2.0..209] */
int GetLBText( int nIndex, LPTSTR lpszText ) const;

/* CComboBox::GetLBTextLen  [function; ce-only; CE 2.0..209] */
int GetLBTextLen( int nIndex ) const;

/* CComboBox::GetTopIndex  [function; ce-only; CE 2.0..209] */
int GetTopIndex( ) const;

/* CComboBox::InitStorage  [function; ce-only; CE 2.0..209] */
int InitStorage( int nItems, UINT nBytes );

/* CComboBox::InsertString  [function; ce-only; CE 2.0..209] */
int InsertString( int nIndex, LPCTSTR lpszString );

/* CComboBox::LimitText  [function; ce-only; CE 2.0..209] */
BOOL LimitText( int nMaxChars );

/* CComboBox::MeasureItem  [function; ce-only; CE 2.0..209] */
virtual void MeasureItem( LPMEASUREITEMSTRUCT lpMeasureItemStruct );

/* CComboBox::Paste  [function; ce-only; CE 2.0..209] */
void Paste( );

/* CComboBox::ResetContent  [function; ce-only; CE 2.0..209] */
void ResetContent( );

/* CComboBox::SelectString  [function; ce-only; CE 2.0..209] */
int SelectString( int nStartAfter, LPCTSTR lpszString );

/* CComboBox::SetCurSel  [function; ce-only; CE 2.0..209] */
int SetCurSel( int nSelect );

/* CComboBox::SetDroppedWidth  [function; ce-only; CE 2.0..209] */
int SetDroppedWidth( UINT nWidth );

/* CComboBox::SetEditSel  [function; ce-only; CE 2.0..209] */
BOOL SetEditSel( int nStartChar, int nEndChar );

/* CComboBox::SetExtendedUI  [function; ce-only; CE 2.0..209] */
int SetExtendedUI( BOOL bExtended = TRUE );

/* CComboBox::SetHorizontalExtent  [function; ce-only; CE 2.0..209] */
void SetHorizontalExtent( UINT nExtent );

/* CComboBox::SetItemData  [function; ce-only; CE 2.0..209] */
int SetItemData( int nIndex, DWORD dwItemData );

/* CComboBox::SetItemDataPtr  [function; ce-only; CE 2.0..209] */
int SetItemDataPtr( int nIndex, void* pData );

/* CComboBox::SetItemHeight  [function; ce-only; CE 2.0..209] */
int SetItemHeight( int nIndex, UINT cyItemHeight );

/* CComboBox::SetLocale  [function; ce-only; CE 2.0..209] */
LCID SetLocale( LCID nNewLocale );

/* CComboBox::SetTopIndex  [function; ce-only; CE 2.0..209] */
int SetTopIndex( int nIndex );

/* CComboBox::ShowDropDown  [function; ce-only; CE 2.0..209] */
void ShowDropDown( BOOL bShowIt = TRUE );

/* CCommandLineInfo::ParseParam  [function; ce-only; CE 2.0..209] */
virtual void ParseParam (LPCTSTR lpszParam,BOOL bFlag,BOOL bLast );

/* CDataExchange::Fail  [function; ce-only; CE 2.0..209] */
void Fail( );
throw( CUserException );

/* CDataExchange::PrepareCtrl  [function; ce-only; CE 2.0..209] */
HWND PrepareCtrl( int nIDC );
throw( CNotSupportedException );

/* CDataExchange::PrepareEditCtrl  [function; ce-only; CE 2.0..209] */
HWND PrepareEditCtrl( int nIDC );
throw( CNotSupportedException );

/* CDC::Attach  [function; ce-only; CE 2.0..209] */
BOOL Attach( HDC hDC );

/* CDC::BitBlt  [function; ce-only; CE 2.0..209] */
BOOL BitBlt ( int x, int y, int nWidth, int nHeight, CDC* pSrcDC, int xSrc, int ySrc, DWORD dwRop );

/* CDC::CreateCompatibleDC  [function; ce-only; CE 2.0..209] */
virtual BOOL CreateCompatibleDC( CDC* pDC );

/* CDC::DeleteDC  [function; ce-only; CE 2.0..209] */
virtual BOOL DeleteDC( );

/* CDC::DeleteTempMap  [function; ce-only; CE 2.0..209] */
static void PASCAL DeleteTempMap( );

/* CDC::Detach  [function; ce-only; CE 2.0..209] */
HDC Detach( );

/* CDC::DPtoLP  [function; ce-only; CE 2.0..209] */
void DPtoLP ( LPPOINT lpPoints, int nCount = 1 ) const;

/* CDC::Draw3dRect  [function; ce-only; CE 2.0..209] */
void Draw3dRect( LPCRECT lpRect, COLORREF clrTopLeft, COLORREF clrBottomRight );

/* CDC::DrawDragRect  [function; ce-only; CE 2.0..209] */
void DrawDragRect( LPCRECT lpRect, SIZE size, LPCRECT lpRectLast, SIZE sizeLast, CBrush* pBrush = NULL, CBrush* pBrushLast = NULL );

/* CDC::DrawEdge  [function; ce-only; CE 2.0..209] */
BOOL DrawEdge ( LPRECT lpRect, UINT nEdge, UINT nFlags );

/* CDC::DrawFocusRect  [function; ce-only; CE 2.0..209] */
void DrawFocusRect( LPCRECT lpRect );

/* CDC::DrawIcon  [function; ce-only; CE 2.0..209] */
BOOL DrawIcon( int x, int y, HICON hIcon );

/* CDC::DrawText  [function; ce-only; CE 2.0..209] */
virtual int DrawText ( LPCTSTR lpszString, int nCount, LPRECT lpRect, UINT nFormat );

/* CDC::Ellipse  [function; ce-only; CE 2.0..209] */
BOOL Ellipse( int x1, int y1, int x2, int y2 );

/* CDC::ExcludeClipRect  [function; ce-only; CE 2.0..209] */
virtual int ExcludeClipRect( int x1, int y1, int x2, int y2 );

/* CDC::ExtTextOut  [function; ce-only; CE 2.0..209] */
virtual BOOL ExtTextOut ( int x, int y, UINT nOptions, LPCRECT lpRect, LPCTSTR lpszString, UINT nCount, LPINT lpDxWidths );

/* CDC::FillRect  [function; ce-only; CE 2.0..209] */
void FillRect( LPCRECT lpRect, CBrush* pBrush );

/* CDC::FillSolidRect  [function; ce-only; CE 2.0..209] */
void FillSolidRect( LPCRECT lpRect, COLORREF clr );

/* CDC::FrameRect  [function; ce-only; CE 2.0..209] */
void FrameRect( LPCRECT lpRect, CBrush* pBrush );

/* CDC::FromHandle  [function; ce-only; CE 2.0..209] */
static CDC* PASCAL FromHandle( HDC hDC );

/* CDC::GetBkMode  [function; ce-only; CE 2.0..209] */
int GetBkMode( ) const;

/* CDC::GetClipBox  [function; ce-only; CE 2.0..209] */
virtual int GetClipBox( LPRECT lpRect ) const;

/* CDC::GetDeviceCaps  [function; ce-only; CE 2.0..209] */
int GetDeviceCaps ( int nIndex ) const;

/* CDC::GetHalftoneBrush  [function; ce-only; CE 2.0..209] */
static CBrush* PASCAL GetHalftoneBrush ( CDC* pDC );

/* CDC::GetMapMode  [function; ce-only; CE 2.0..209] */
int GetMapMode ( ) const;

/* CDC::GetOutputTextExtent  [function; ce-only; CE 2.0..209] */
CSize GetOutputTextExtent( LPCTSTR lpszString, int nCount ) const;

/* CDC::GetOutputTextMetrics  [function; ce-only; CE 2.0..209] */
BOOL GetOutputTextMetrics( LPTEXTMETRIC lpMetrics ) const;

/* CDC::GetPixel  [function; ce-only; CE 2.0..209] */
COLORREF GetPixel( int x, int y ) const;

/* CDC::GetTextExtent  [function; ce-only; CE 2.0..209] */
CSize GetTextExtent( LPCTSTR lpszString, int nCount ) const;

/* CDC::GetTextFace  [function; ce-only; CE 2.0..209] */
int GetTextFace( int nCount, LPTSTR lpszFacename ) const;

/* CDC::GetTextMetrics  [function; ce-only; CE 2.0..209] */
BOOL GetTextMetrics( LPTEXTMETRIC lpMetrics ) const;

/* CDC::IntersectClipRect  [function; ce-only; CE 2.0..209] */
virtual int IntersectClipRect( int x1, int y1, int x2, int y2 );

/* CDC::InvertRect  [function; ce-only; CE 2.0..209] */
void InvertRect( LPCRECT lpRect );

/* CDC::LineTo  [function; ce-only; CE 2.0..209] */
BOOL LineTo( int x, int y );

/* CDC::LPtoDP  [function; ce-only; CE 2.0..209] */
void LPtoDP ( LPPOINT lpPoints, int nCount = 1 ) const;

/* CDC::MaskBlt  [function; ce-only; CE 2.0..209] */
BOOL MaskBlt ( int x, int y, int nWidth, int nHeight, CDC* pSrcDC, int xSrc, int ySrc, CBitmap& maskBitmap, int xMask, int yMask, DWORD dwRop );

/* CDC::MoveTo  [function; ce-only; CE 2.0..209] */
CPoint MoveTo( int x, int y );

/* CDC::OffsetClipRgn  [function; ce-only; CE 2.0..209] */
virtual int OffsetClipRgn( int x, int y );

/* CDC::PatBlt  [function; ce-only; CE 2.0..209] */
BOOL PatBlt( int x, int y, int nWidth, int nHeight, DWORDdwRop );

/* CDC::Polygon  [function; ce-only; CE 2.0..209] */
BOOL Polygon ( LPPOINT lpPoints, int nCount );

/* CDC::Polyline  [function; ce-only; CE 2.0..209] */
BOOL Polyline( LPPOINT lpPoints, int nCount );

/* CDC::PolylineTo  [function; ce-only; CE 2.0..209] */
BOOL PolylineTo( const POINT* lpPoints, int nCount );

/* CDC::PolyPolygon  [function; ce-only; CE 2.0..209] */
BOOL PolyPolygon ( LPPOINT lpPoints, LPINT lpPolyCounts, int nCount );

/* CDC::PolyPolyline  [function; ce-only; CE 2.0..209] */
BOOL PolyPolyline( const POINT* lpPoints, const DWORD* lpPolyPoints, int nCount );

/* CDC::Rectangle  [function; ce-only; CE 2.0..209] */
BOOL Rectangle( int x1, int y1, int x2, int y2 );

/* CDC::ReleaseAttribDC  [function; ce-only; CE 2.0..209] */
virtual void ReleaseAttribDC( );

/* CDC::ReleaseOutputDC  [function; ce-only; CE 2.0..209] */
virtual void ReleaseOutputDC( );

/* CDC::RestoreDC  [function; ce-only; CE 2.0..209] */
virtual BOOL RestoreDC( int nSavedDC );

/* CDC::RoundRect  [function; ce-only; CE 2.0..209] */
BOOL RoundRect( int x1, int y1, int x2, int y2, int x3, int y3 )

/* CDC::SaveDC  [function; ce-only; CE 2.0..209] */
virtual int SaveDC( );

/* CDC::ScrollDC  [function; ce-only; CE 2.0..209] */
BOOL ScrollDC( int dx, int dy, LPCRECT lpRectScroll, LPCRECT lpRectClip, CRgn* pRgnUpdate, LPRECT lpRectUpdate );

/* CDC::SelectClipRgn  [function; ce-only; CE 2.0..209] */
virtual int SelectClipRgn( CRgn* pRgn );

/* CDC::SelectStockObject  [function; ce-only; CE 2.0..209] */
virtual CGdiObject* SelectStockObject ( int nIndex );

/* CDC::SetAttribDC  [function; ce-only; CE 2.0..209] */
virtual void SetAttribDC( HDC hDC );

/* CDC::SetBkColor  [function; ce-only; CE 2.0..209] */
virtual COLORREF SetBkColor( COLORREF crColor );

/* CDC::SetBkMode  [function; ce-only; CE 2.0..209] */
int SetBkMode( int nBkMode );

/* CDC::SetBrushOrg  [function; ce-only; CE 2.0..209] */
CPoint SetBrushOrg( int x, int y );

/* CDC::SetOutputDC  [function; ce-only; CE 2.0..209] */
virtual void SetOutputDC( HDC hDC );

/* CDC::SetPixel  [function; ce-only; CE 2.0..209] */
COLORREF SetPixel( int x, int y, COLORREF crColor );

/* CDC::SetTextColor  [function; ce-only; CE 2.0..209] */
virtual COLORREF SetTextColor( COLORREF crColor );

/* CDC::StretchBlt  [function; ce-only; CE 2.0..209] */
BOOL StretchBlt ( int x, int y, int nWidth, int nHeight, CDC* pSrcDC, int xSrc, int ySrc, int nSrcWidth, int nSrcHeight, DWORD dwRop );

/* CDialog::CDialog  [function; ce-only; CE 2.0..209] */
CDialog( LPCTSTR lpszTemplateName, CWnd* pParentWnd = NULL );

/* CDialog::Create  [function; ce-only; CE 2.0..209] */
BOOL Create( LPCTSTR lpszTemplateName, CWnd* pParentWnd = NULL );

/* CDialog::CreateIndirect  [function; ce-only; CE 2.0..209] */
BOOL CreateIndirect( LPCDLGTEMPLATE lpDialogTemplate, CWnd* pParentWnd = NULL );

/* CDialog::DoModal  [function; ce-only; CE 2.0..209] */
virtual int DoModal( );

/* CDialog::EndDialog  [function; ce-only; CE 2.0..209] */
void EndDialog( int nResult );

/* CDialog::GetDefID  [function; ce-only; CE 2.0..209] */
DWORD GetDefID( ) const;

/* CDialog::GotoDlgCtrl  [function; ce-only; CE 2.0..209] */
void GotoDlgCtrl( CWnd* pWndCtrl );

/* CDialog::InitModalIndirect  [function; ce-only; CE 2.0..209] */
BOOL InitModalIndirect( LPCDLGTEMPLATE lpDialogTemplate, CWnd* pParentWnd = NULL );

/* CDialog::MapDialogRect  [function; ce-only; CE 2.0..209] */
void MapDialogRect( LPRECT lpRect ) const;

/* CDialog::NextDlgCtrl  [function; ce-only; CE 2.0..209] */
void NextDlgCtrl( ) const;

/* CDialog::OnCancel  [function; ce-only; CE 2.0..209] */
virtual void OnCancel( );

/* CDialog::OnInitDialog  [function; ce-only; CE 2.0..209] */
virtual BOOL OnInitDialog( );

/* CDialog::OnOK  [function; ce-only; CE 2.0..209] */
virtual void OnOK( );

/* CDialog::OnSetFont  [function; ce-only; CE 2.0..209] */
virtual void OnSetFont( CFont* pFont );

/* CDialog::PrevDlgCtrl  [function; ce-only; CE 2.0..209] */
void PrevDlgCtrl( ) const;

/* CDialog::SetDefID  [function; ce-only; CE 2.0..209] */
void SetDefID( UINT nID );

/* CDialog::SetHelpID  [function; ce-only; CE 2.0..209] */
void SetHelpID( UINT nIDR );

/* CDocTemplate::AddDocument  [function; ce-only; CE 2.0..209] */
virtual void AddDocument( CDocument* pDoc );

/* CDocTemplate::CDocTemplate  [function; ce-only; CE 2.0..209] */
CDocTemplate ( UINT nIDResource, CRuntimeClass* pDocClass, CRuntimeClass* pFrameClass, CRuntimeClass* pViewClass );

/* CDocTemplate::CloseAllDocuments  [function; ce-only; CE 2.0..209] */
virtual void CloseAllDocuments( BOOL bEndSession );

/* CDocTemplate::InitialUpdateFrame  [function; ce-only; CE 2.0..209] */
virtual void InitialUpdateFrame( CFrameWnd* pFrame, CDocument* pDoc, BOOL bMakeVisible = TRUE );

/* CDocTemplate::LoadTemplate  [function; ce-only; CE 2.0..209] */
virtual void LoadTemplate( );

/* CDocTemplate::MatchDocType  [function; ce-only; CE 2.0..209] */
virtual Confidence MatchDocType( LPCTSTR lpszPathName, CDocument*& rpDocMatch );

/* CDocTemplate::OpenDocumentFile  [function; ce-only; CE 2.0..209] */
virtual CDocument* OpenDocumentFile( LPCTSTR lpszPathName, BOOL bMakeVisible = TRUE ) = 0;

/* CDocTemplate::RemoveDocument  [function; ce-only; CE 2.0..209] */
virtual void RemoveDocument( CDocument* pDoc );

/* CDocTemplate::SaveAllModified  [function; ce-only; CE 2.0..209] */
virtual BOOL SaveAllModified( );

/* CDocument::AddView  [function; ce-only; CE 2.0..209] */
void AddView( CView* pView );

/* CDocument::CanCloseFrame  [function; ce-only; CE 2.0..209] */
virtual BOOL CanCloseFrame( CFrameWnd* pFrame );

/* CDocument::DeleteContents  [function; ce-only; CE 2.0..209] */
virtual void DeleteContents( );

/* CDocument::GetFile  [function; ce-only; CE 2.0..209] */
virtual CFile* GetFile( LPCTSTR lpszFileName, UINT nOpenFlags, CFileException* pError );

/* CDocument::IsModified  [function; ce-only; CE 2.0..209] */
BOOL IsModified( );

/* CDocument::OnChangedViewList  [function; ce-only; CE 2.0..209] */
virtual void OnChangedViewList( );

/* CDocument::OnCloseDocument  [function; ce-only; CE 2.0..209] */
virtual void OnCloseDocument( );

/* CDocument::OnNewDocument  [function; ce-only; CE 2.0..209] */
virtual BOOL OnNewDocument( );

/* CDocument::OnOpenDocument  [function; ce-only; CE 2.0..209] */
virtual BOOL OnOpenDocument( LPCTSTR lpszPathName );

/* CDocument::OnSaveDocument  [function; ce-only; CE 2.0..209] */
virtual BOOL OnSaveDocument( LPCTSTR lpszPathName );

/* CDocument::PreCloseFrame  [function; ce-only; CE 2.0..209] */
virtual void PreCloseFrame( CFrameWnd* pFrame );

/* CDocument::ReleaseFile  [function; ce-only; CE 2.0..209] */
virtual void ReleaseFile( CFile* pFile, BOOL bAbort );

/* CDocument::RemoveView  [function; ce-only; CE 2.0..209] */
void RemoveView( CView* pView );

/* CDocument::ReportSaveLoadException  [function; ce-only; CE 2.0..209] */
virtual void ReportSaveLoadException( LPCTSTR lpszPathName, CException* e, BOOL bSaving, UINT nIDPDefault );

/* CDocument::SaveModified  [function; ce-only; CE 2.0..209] */
virtual BOOL SaveModified( );

/* CDocument::SetModifiedFlag  [function; ce-only; CE 2.0..209] */
void SetModifiedFlag( BOOL bModified = TRUE );

/* CDocument::SetPathName  [function; ce-only; CE 2.0..209] */
virtual void SetPathName( LPCTSTR lpszPathName, BOOL bAddToMRU = TRUE );

/* CDocument::SetTitle  [function; ce-only; CE 2.0..209] */
virtual void SetTitle( LPCTSTR lpszTitle );

/* CDocument::UpdateAllViews  [function; ce-only; CE 2.0..209] */
void UpdateAllViews( CView* pSender, LPARAM lHint = 0L, CObject* pHint = NULL );

/* CEdit::CanUndo  [function; ce-only; CE 2.0..209] */
BOOL CanUndo( ) const;

/* CEdit::CharFromPos  [function; ce-only; CE 2.0..209] */
int CharFromPos( CPoint pt ) const;

/* CEdit::Clear  [function; ce-only; CE 2.0..209] */
void Clear( );

/* CEdit::Copy  [function; ce-only; CE 2.0..209] */
void Copy( );

/* CEdit::Create  [function; ce-only; CE 2.0..209] */
BOOL Create( DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID );

/* CEdit::EmptyUndoBuffer  [function; ce-only; CE 2.0..209] */
void EmptyUndoBuffer( );

/* CEdit::FmtLines  [function; ce-only; CE 2.0..209] */
BOOL FmtLines( BOOL bAddEOL );

/* CEdit::GetFirstVisibleLine  [function; ce-only; CE 2.0..209] */
int GetFirstVisibleLine( ) const;

/* CEdit::GetLimitText  [function; ce-only; CE 2.0..209] */
UINT GetLimitText( ) const;

/* CEdit::GetLine  [function; ce-only; CE 2.0..209] */
int GetLine( int nIndex, LPTSTR lpszBuffer ) const;

/* CEdit::GetLineCount  [function; ce-only; CE 2.0..209] */
int GetLineCount( ) const;

/* CEdit::GetMargins  [function; ce-only; CE 2.0..209] */
DWORD GetMargins( ) const;

/* CEdit::GetModify  [function; ce-only; CE 2.0..209] */
BOOL GetModify( ) const;

/* CEdit::GetPasswordChar  [function; ce-only; CE 2.0..209] */
TCHAR GetPasswordChar( ) const;

/* CEdit::GetRect  [function; ce-only; CE 2.0..209] */
void GetRect( LPRECT lpRect ) const;

/* CEdit::GetSel  [function; ce-only; CE 2.0..209] */
DWORD GetSel( ) const;

/* CEdit::LimitText  [function; ce-only; CE 2.0..209] */
void LimitText( int nChars = 0 );

/* CEdit::LineFromChar  [function; ce-only; CE 2.0..209] */
int LineFromChar( int nIndex = –1 ) const;

/* CEdit::LineIndex  [function; ce-only; CE 2.0..209] */
int LineIndex( int nLine = –1 ) const;

/* CEdit::LineLength  [function; ce-only; CE 2.0..209] */
int LineLength( int nLine = –1 ) const;

/* CEdit::LineScroll  [function; ce-only; CE 2.0..209] */
void LineScroll( int nLines, int nChars = 0 );

/* CEdit::Paste  [function; ce-only; CE 2.0..209] */
void Paste( );

/* CEdit::PosFromChar  [function; ce-only; CE 2.0..209] */
CPoint PosFromChar( UINT nChar ) const;

/* CEdit::ReplaceSel  [function; ce-only; CE 2.0..209] */
void ReplaceSel( LPCTSTR lpszNewText );

/* CEdit::SetHandle  [function; ce-only; CE 2.0..209] */
void SetHandle( HLOCAL hBuffer );

/* CEdit::SetLimitText  [function; ce-only; CE 2.0..209] */
void SetLimitText( UINT nMax );

/* CEdit::SetMargins  [function; ce-only; CE 2.0..209] */
void SetMargins( UINT nLeft, UINT nRight );

/* CEdit::SetModify  [function; ce-only; CE 2.0..209] */
void SetModify( BOOL bModified = TRUE );

/* CEdit::SetPasswordChar  [function; ce-only; CE 2.0..209] */
void SetPasswordChar( TCHAR ch );

/* CEdit::SetReadOnly  [function; ce-only; CE 2.0..209] */
BOOL SetReadOnly( BOOL bReadOnly = TRUE );

/* CEdit::SetRect  [function; ce-only; CE 2.0..209] */
void SetRect( LPCRECT lpRect );

/* CEdit::SetRectNP  [function; ce-only; CE 2.0..209] */
void SetRectNP( LPCRECT lpRect );

/* CEdit::SetSel  [function; ce-only; CE 2.0..209] */
void SetSel( DWORD dwSelection, BOOL bNoScroll = FALSE );

/* CEdit::SetTabStops  [function; ce-only; CE 2.0..209] */
void SetTabStops( );

/* CEdit::Undo  [function; ce-only; CE 2.0..209] */
BOOL Undo( );

/* CFont::CreateFont  [function; ce-only; CE 2.0..209] */
BOOL CreateFont( int nHeight, int nWidth, int nEscapement, int nOrientation, int nWeight, BYTE bItalic, BYTE bUnderline, BYTE cStrikeOut, BYTE nCharSet, BYTE nOutPrecision, BYTE nClipPrecision, BYTE nQuality, BYTE nPitchAndFamily, LPCTSTR lpszFacename );

/* CFont::CreateFontIndirect  [function; ce-only; CE 2.0..209] */
BOOL CreateFontIndirect(const LOGFONT* lpLogFont );

/* CFont::CreatePointFont  [function; ce-only; CE 2.0..209] */
BOOL CreatePointFont( int nPointSize, LPCTSTR lpszFaceName, CDC* pDC = NULL );

/* CFont::CreatePointFontIndirect  [function; ce-only; CE 2.0..209] */
BOOL CreatePointFontIndirect( const LOGFONT* lpLogFont, CDC* pDC = NULL );

/* CFont::FromHandle  [function; ce-only; CE 2.0..209] */
static CFont* PASCAL FromHandle( HFONT hFont );

/* CFont::GetLogFont  [function; ce-only; CE 2.0..209] */
int GetLogFont( LOGFONT * pLogFont );

/* CFrameWnd::ActivateFrame  [function; ce-only; CE 2.0..209] */
virtual void ActivateFrame( int nCmdShow = – 1 );

/* CFrameWnd::AddAdornments  [function; ce-only; CE 2.0..209] */
BOOL AddAdornments( DWORD dwflags );

/* CFrameWnd::AddBitmap  [function; ce-only; CE 2.0..209] */
BOOL AddBitmap( int nToolbarBitmapID, int nNImages );

/* CFrameWnd::AddComboBoxString  [function; ce-only; CE 2.0..209] */
BOOL AddComboBoxString ( UINT wStringResourceID, long lItemData=0 );

/* CFrameWnd::BeginModalState  [function; ce-only; CE 2.0..209] */
virtual void BeginModalState( );

/* CFrameWnd::Create  [function; ce-only; CE 2.0..209] */
BOOL Create( LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle = WS_OVERLAPPEDWINDOW, const RECT& rect = rectDefault, CWnd* pParentWnd = NULL, LPCTSTR lpszMenuName = NULL, DWORD dwExStyle = 0, CCreateContext* pContext = NULL );

/* CFrameWnd::CreateView  [function; ce-only; CE 2.0..209] */
CWnd* CreateView( CCreateContext* pContext, UINT nID = AFX_IDW_PANE_FIRST );

/* CFrameWnd::EndModalState  [function; ce-only; CE 2.0..209] */
virtual void EndModalState( );

/* CFrameWnd::GetComboCount  [function; ce-only; CE 2.0..209] */
int GetComboCount ( ) const;

/* CFrameWnd::GetComboCurSel  [function; ce-only; CE 2.0..209] */
int GetComboCurSel ( ) const;

/* CFrameWnd::InitialUpdateFrame  [function; ce-only; CE 2.0..209] */
void InitialUpdateFrame( CDocument* pDoc, BOOL bMakeVisible );

/* CFrameWnd::InModalState  [function; ce-only; CE 2.0..209] */
BOOL InModalState( ) const;

/* CFrameWnd::InsertButtons  [function; ce-only; CE 2.0..209] */
BOOL InsertButtons ( LPTBUTTON lpButtons, UINT wNButtons, int nToolbarBitmapID=-1, int nNImages=0 );

/* CFrameWnd::InsertComboBox  [function; ce-only; CE 2.0..209] */
HWND InsertComboBox ( int nWidth );

/* CFrameWnd::InsertMenu  [function; ce-only; CE 2.0..209] */
HMENU InsertMenu ( LPCTSTR lpszMenuName );

/* CFrameWnd::IsTracking  [function; ce-only; CE 2.0..209] */
BOOL IsTracking( ) const;

/* CFrameWnd::LoadFrame  [function; ce-only; CE 2.0..209] */
virtual BOOL LoadFrame( UINT nIDResource, DWORD dwDefaultStyle = WS_OVERLAPPEDWINDOW | FWS_ADDTOTITLE, CWnd* pParentWnd = NULL, CCreateContext* pContext = NULL );

/* CFrameWnd::OnCreateClient  [function; ce-only; CE 2.0..209] */
virtual BOOL OnCreateClient( LPCREATESTRUCT lpcs, CCreateContext* pContext );

/* CFrameWnd::SetActiveView  [function; ce-only; CE 2.0..209] */
void SetActiveView( CView* pViewNew, BOOL bNotify = TRUE );

/* CFrameWnd::SetComboCurSel  [function; ce-only; CE 2.0..209] */
int SetComboCurSel ( int nSelect );

/* CFrameWnd::ShowOwnedWindows  [function; ce-only; CE 2.0..209] */
void ShowOwnedWindows( BOOL bShow );

/* CGdiObject::Attach  [function; ce-only; CE 2.0..209] */
BOOL Attach( HGDIOBJ hObject );

/* CGdiObject::CreateStockObject  [function; ce-only; CE 2.0..209] */
BOOL CreateStockObject ( int nIndex );

/* CGdiObject::DeleteObject  [function; ce-only; CE 2.0..209] */
BOOL DeleteObject ( );

/* CGdiObject::DeleteTempMap  [function; ce-only; CE 2.0..209] */
static void PASCAL DeleteTempMap( );

/* CGdiObject::Detach  [function; ce-only; CE 2.0..209] */
HGDIOBJ Detach( );

/* CGdiObject::FromHandle  [function; ce-only; CE 2.0..209] */
static CGdiObject* PASCAL FromHandle( HGDIOBJ hObject );

/* CGdiObject::GetObject  [function; ce-only; CE 2.0..209] */
int GetObject( int nCount, LPVOID lpObject ) const;

/* CGdiObject::GetObjectType  [function; ce-only; CE 2.0..209] */
UINT GetObjectType ( ) const;

/* CListBox::AddString  [function; ce-only; CE 2.0..209] */
int AddString( LPCTSTR lpszItem );

/* CListBox::CharToItem  [function; ce-only; CE 2.0..209] */
virtual int CharToItem( UINT nKey, UINT nIndex );

/* CListBox::CompareItem  [function; ce-only; CE 2.0..209] */
virtual int CompareItem( LPCOMPAREITEMSTRUCT lpCompareItemStruct );

/* CListBox::Create  [function; ce-only; CE 2.0..209] */
BOOL Create( DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID );

/* CListBox::DeleteItem  [function; ce-only; CE 2.0..209] */
virtual void DeleteItem( LPDELETEITEMSTRUCT lpDeleteItemStruct );

/* CListBox::DeleteString  [function; ce-only; CE 2.0..209] */
int DeleteString( UINT nIndex );

/* CListBox::Dir  [function; ce-only; CE 2.0..209] */
int Dir( UINT attr, LPCTSTR lpszWildCard );

/* CListBox::DrawItem  [function; ce-only; CE 2.0..209] */
virtual void DrawItem( LPDRAWITEMSTRUCT lpDrawItemStruct );

/* CListBox::FindString  [function; ce-only; CE 2.0..209] */
int FindString( int nStartAfter, LPCTSTR lpszItem ) const;

/* CListBox::FindStringExact  [function; ce-only; CE 2.0..209] */
int FindStringExact( int nIndexStart, LPCTSTR lpszFind ) const;

/* CListBox::GetAnchorIndex  [function; ce-only; CE 2.0..209] */
int GetAnchorIndex( ) const;

/* CListBox::GetCaretIndex  [function; ce-only; CE 2.0..209] */
int GetCaretIndex( ) const;

/* CListBox::GetCount  [function; ce-only; CE 2.0..209] */
int GetCount( ) const;

/* CListBox::GetCurSel  [function; ce-only; CE 2.0..209] */
int GetCurSel( ) const;

/* CListBox::GetHorizontalExtent  [function; ce-only; CE 2.0..209] */
int GetHorizontalExtent( ) const;

/* CListBox::GetItemData  [function; ce-only; CE 2.0..209] */
DWORD GetItemData( int nIndex ) const;

/* CListBox::GetItemDataPtr  [function; ce-only; CE 2.0..209] */
void* GetItemDataPtr( int nIndex ) const;

/* CListBox::GetItemHeight  [function; ce-only; CE 2.0..209] */
int GetItemHeight( int nIndex ) const;

/* CListBox::GetItemRect  [function; ce-only; CE 2.0..209] */
int GetItemRect( int nIndex, LPRECT lpRect ) const;

/* CListBox::GetSel  [function; ce-only; CE 2.0..209] */
int GetSel( int nIndex ) const;

/* CListBox::GetSelCount  [function; ce-only; CE 2.0..209] */
int GetSelCount( ) const;

/* CListBox::GetSelItems  [function; ce-only; CE 2.0..209] */
int GetSelItems( int nMaxItems, LPINT rgIndex ) const;

/* CListBox::GetText  [function; ce-only; CE 2.0..209] */
int GetText( int nIndex, LPTSTR lpszBuffer ) const;

/* CListBox::GetTextLen  [function; ce-only; CE 2.0..209] */
int GetTextLen( int nIndex ) const;

/* CListBox::GetTopIndex  [function; ce-only; CE 2.0..209] */
int GetTopIndex( ) const;

/* CListBox::InitStorage  [function; ce-only; CE 2.0..209] */
int InitStorage ( int nItems, UINT nBytes )

/* CListBox::InsertString  [function; ce-only; CE 2.0..209] */
int InsertString( int nIndex, LPCTSTR lpszItem );

/* CListBox::ItemFromPoint  [function; ce-only; CE 2.0..209] */
UINT ItemFromPoint( CPoint pt, BOOL& bOutside ) const;

/* CListBox::MeasureItem  [function; ce-only; CE 2.0..209] */
virtual void MeasureItem( LPMEASUREITEMSTRUCT lpMeasureItemStruct );

/* CListBox::ResetContent  [function; ce-only; CE 2.0..209] */
void ResetContent( );

/* CListBox::SelectString  [function; ce-only; CE 2.0..209] */
int SelectString( int nStartAfter, LPCTSTR lpszItem );

/* CListBox::SelItemRange  [function; ce-only; CE 2.0..209] */
int SelItemRange( BOOL bSelect, int nFirstItem, int nLastItem );

/* CListBox::SetAnchorIndex  [function; ce-only; CE 2.0..209] */
void SetAnchorIndex( int nIndex );

/* CListBox::SetCaretIndex  [function; ce-only; CE 2.0..209] */
int SetCaretIndex( int nIndex, BOOL bScroll = TRUE );

/* CListBox::SetColumnWidth  [function; ce-only; CE 2.0..209] */
void SetColumnWidth( int cxWidth );

/* CListBox::SetCurSel  [function; ce-only; CE 2.0..209] */
int SetCurSel( int nSelect );

/* CListBox::SetHorizontalExtent  [function; ce-only; CE 2.0..209] */
void SetHorizontalExtent( int cxExtent );

/* CListBox::SetItemData  [function; ce-only; CE 2.0..209] */
int SetItemData( int nIndex, DWORD dwItemData );

/* CListBox::SetItemDataPtr  [function; ce-only; CE 2.0..209] */
int SetItemDataPtr( int nIndex, void* pData );

/* CListBox::SetItemHeight  [function; ce-only; CE 2.0..209] */
int SetItemHeight ( int nIndex, UINT cyItemHeight );

/* CListBox::SetLocale  [function; ce-only; CE 2.0..209] */
LCID SetLocale( LCID nNewLocale );

/* CListBox::SetSel  [function; ce-only; CE 2.0..209] */
int SetSel( int nIndex, BOOL bSelect = TRUE );

/* CListBox::SetTabStops  [function; ce-only; CE 2.0..209] */
void SetTabStops( );

/* CListBox::SetTopIndex  [function; ce-only; CE 2.0..209] */
int SetTopIndex( int nIndex );

/* CListBox::VKeyToItem  [function; ce-only; CE 2.0..209] */
virtual int VKeyToItem( UINT nKey, UINT nIndex );

/* CMenu::AppendMenu  [function; ce-only; CE 2.0..209] */
BOOL AppendMenu ( UINT nFlags, UINT nIDNewItem = 0, LPCTSTR lpszNewItem = NULL );

/* CMenu::Attach  [function; ce-only; CE 2.0..209] */
BOOL Attach( HMENU hMenu );

/* CMenu::CheckMenuItem  [function; ce-only; CE 2.0..209] */
UINT CheckMenuItem( UINT nIDCheckItem, UINT nCheck );

/* CMenu::CheckMenuRadioItem  [function; ce-only; CE 2.0..209] */
BOOL CheckMenuRadioItem( UINT nIDFirst, UINT nIDLast, UINT nIDItem, UINT nFlags );

/* CMenu::CreateMenu  [function; ce-only; CE 2.0..209] */
BOOL CreateMenu( );

/* CMenu::CreatePopupMenu  [function; ce-only; CE 2.0..209] */
BOOL CreatePopupMenu( );

/* CMenu::DeleteMenu  [function; ce-only; CE 2.0..209] */
BOOL DeleteMenu( UINT nPosition, UINT nFlags );

/* CMenu::DeleteTempMap  [function; ce-only; CE 2.0..209] */
static void PASCAL DeleteTempMap( );

/* CMenu::DestroyMenu  [function; ce-only; CE 2.0..209] */
BOOL DestroyMenu( );

/* CMenu::Detach  [function; ce-only; CE 2.0..209] */
HMENU Detach( );

/* CMenu::DrawItem  [function; ce-only; CE 2.0..209] */
virtual void DrawItem( LPDRAWITEMSTRUCT lpDrawItemStruct );

/* CMenu::EnableMenuItem  [function; ce-only; CE 2.0..209] */
UINT EnableMenuItem ( UINT nIDEnableItem, UINT nEnable );

/* CMenu::FromHandle  [function; ce-only; CE 2.0..209] */
static CMenu* PASCAL FromHandle( HMENU hMenu );

/* CMenu::GetMenuItemCount  [function; ce-only; CE 2.0..209] */
UINT GetMenuItemCount( ) const;

/* CMenu::GetMenuItemID  [function; ce-only; CE 2.0..209] */
UINT GetMenuItemID( int nPos ) const;

/* CMenu::GetMenuState  [function; ce-only; CE 2.0..209] */
UINT GetMenuState( UINT nID, UINT nFlags ) const;

/* CMenu::GetMenuString  [function; ce-only; CE 2.0..209] */
int GetMenuString( UINT nIDItem, LPTSTR lpString, int nMaxCount, UINT nFlags ) const;

/* CMenu::GetSubMenu  [function; ce-only; CE 2.0..209] */
CMenu* GetSubMenu( int nPos ) const;

/* CMenu::InsertMenu  [function; ce-only; CE 2.0..209] */
BOOL InsertMenu( UINT nPosition, UINT nFlags, UINT nIDNewItem = 0, LPCTSTR lpszNewItem = NULL );

/* CMenu::LoadMenu  [function; ce-only; CE 2.0..209] */
BOOL LoadMenu( LPCTSTR lpszResourceName );

/* CMenu::MeasureItem  [function; ce-only; CE 2.0..209] */
virtual void MeasureItem( LPMEASUREITEMSTRUCT lpMeasureItemStruct );

/* CMenu::ModifyMenu  [function; ce-only; CE 2.0..209] */
BOOL ModifyMenu( UINT nPosition, UINT nFlags, UINT nIDNewItem = 0, LPCTSTR lpszNewItem = NULL );

/* CMenu::RemoveMenu  [function; ce-only; CE 2.0..209] */
BOOL RemoveMenu( UINT nPosition, UINT nFlags );

/* CMenu::TrackPopupMenu  [function; ce-only; CE 2.0..209] */
BOOL TrackPopupMenu ( UINT nFlags, int x, int y, CWnd* pWnd, LPCRECT lpRect = 0 );

/* CPen::CreatePen  [function; ce-only; CE 2.0..209] */
BOOL CreatePen (
int nPenStyle,
int nWidth,
COLORREF crColor
);

/* CPen::CreatePenIndirect  [function; ce-only; CE 2.0..209] */
BOOL CreatePenIndirect( LPLOGPEN lpLogPen );

/* CPen::FromHandle  [function; ce-only; CE 2.0..209] */
static CPen* PASCAL FromHandle( HPEN hPen );

/* CPen::GetLogPen  [function; ce-only; CE 2.0..209] */
int GetLogPen( LOGPEN* pLogPen );

/* CPoint::Offset  [function; ce-only; CE 2.0..209] */
void Offset( int xOffset, int yOffset );

/* CPoint::operator +=  [function; ce-only; CE 2.0..209] */
void operator +=( SIZE size );

/* CRect::CopyRect  [function; ce-only; CE 2.0..209] */
void CopyRect( LPCRECT lpSrcRect );

/* CRect::DeflateRect  [function; ce-only; CE 2.0..209] */
void DeflateRect( int x, int y );

/* CRect::EqualRect  [function; ce-only; CE 2.0..209] */
BOOL EqualRect( LPCRECT lpRect ) const;

/* CRect::Height  [function; ce-only; CE 2.0..209] */
int Height( ) const;

/* CRect::InflateRect  [function; ce-only; CE 2.0..209] */
void InflateRect( int x, int y );

/* CRect::IntersectRect  [function; ce-only; CE 2.0..209] */
BOOL IntersectRect( LPCRECT lpRect1, LPCRECT lpRect2 );

/* CRect::IsRectEmpty  [function; ce-only; CE 2.0..209] */
BOOL IsRectEmpty( ) const;

/* CRect::IsRectNull  [function; ce-only; CE 2.0..209] */
BOOL IsRectNull( ) const;

/* CRect::NormalizeRect  [function; ce-only; CE 2.0..209] */
void NormalizeRect( );

/* CRect::OffsetRect  [function; ce-only; CE 2.0..209] */
void OffsetRect( int x, int y );

/* CRect::PtInRect  [function; ce-only; CE 2.0..209] */
BOOL PtInRect( POINT point ) const;

/* CRect::SetRect  [function; ce-only; CE 2.0..209] */
void SetRect( int x1, int y1, int x2, int y2 );

/* CRect::SetRectEmpty  [function; ce-only; CE 2.0..209] */
void SetRectEmpty( );

/* CRect::SubtractRect  [function; ce-only; CE 2.0..209] */
BOOL SubtractRect( LPCRECT lpRectSrc1, LPCRECT lpRectSrc2 );

/* CRect::UnionRect  [function; ce-only; CE 2.0..209] */
BOOL UnionRect( LPCRECT lpRect1, LPCRECT lpRect2 );

/* CRect::Width  [function; ce-only; CE 2.0..209] */
int Width( ) const;

/* CRgn::CombineRgn  [function; ce-only; CE 2.0..209] */
int CombineRgn( CRgn* pRgn1, CRgn* pRgn2, int nCombineMode );

/* CRgn::CopyRgn  [function; ce-only; CE 2.0..209] */
int CopyRgn( CRgn* pRgnSrc );

/* CRgn::CreateRectRgn  [function; ce-only; CE 2.0..209] */
BOOL CreateRectRgn( int x1, int y1, int x2, int y2 );

/* CRgn::CreateRectRgnIndirect  [function; ce-only; CE 2.0..209] */
BOOL CreateRectRgnIndirect ( LPCRECT lpRect );

/* CRgn::EqualRgn  [function; ce-only; CE 2.0..209] */
BOOL EqualRgn( CRgn* pRgn ) const;

/* CRgn::FromHandle  [function; ce-only; CE 2.0..209] */
static CRgn* PASCAL FromHandle( HRGN hRgn );

/* CRgn::GetRegionData  [function; ce-only; CE 2.0..209] */
Int GetRegionData ( LPRGNDATA lpRgnData, int nCount ) const;

/* CRgn::GetRgnBox  [function; ce-only; CE 2.0..209] */
int GetRgnBox( LPRECT lpRect ) const;

/* CRgn::OffsetRgn  [function; ce-only; CE 2.0..209] */
int OffsetRgn( int x, int y );

/* CRgn::PtInRegion  [function; ce-only; CE 2.0..209] */
BOOL PtInRegion( int x, int y ) const;

/* CRgn::RectInRegion  [function; ce-only; CE 2.0..209] */
BOOL RectInRegion( LPCRECT lpRect ) const;

/* CRgn::SetRectRgn  [function; ce-only; CE 2.0..209] */
void SetRectRgn ( int x1, int y1, int x2, int y2 );

/* CScrollBar::Create  [function; ce-only; CE 2.0..209] */
BOOL Create( DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID );

/* CScrollBar::EnableScrollBar  [function; ce-only; CE 2.0..209] */
BOOL EnableScrollBar( UINT nArrowFlags = ESB_ENABLE_BOTH );

/* CScrollBar::GetScrollInfo  [function; ce-only; CE 2.0..209] */
BOOL GetScrollInfo( LPSCROLLINFO lpScrollInfo, UINT nMask );

/* CScrollBar::GetScrollLimit  [function; ce-only; CE 2.0..209] */
int GetScrollLimit( );

/* CScrollBar::GetScrollPos  [function; ce-only; CE 2.0..209] */
int GetScrollPos( ) const;

/* CScrollBar::GetScrollRange  [function; ce-only; CE 2.0..209] */
void GetScrollRange( LPINT lpMinPos, LPINT lpMaxPos ) const;

/* CScrollBar::SetScrollInfo  [function; ce-only; CE 2.0..209] */
BOOL SetScrollInfo( LPSCROLLINFO lpScrollInfo, BOOL bRedraw = TRUE );

/* CScrollBar::SetScrollPos  [function; ce-only; CE 2.0..209] */
int SetScrollPos( int nPos, BOOL bRedraw = TRUE );

/* CScrollBar::SetScrollRange  [function; ce-only; CE 2.0..209] */
void SetScrollRange( int nMinPos, int nMaxPos, BOOL bRedraw = TRUE );

/* CScrollBar::ShowScrollBar  [function; ce-only; CE 2.0..209] */
void ShowScrollBar( BOOL bShow = TRUE );

/* CScrollView::FillOutsideRect  [function; ce-only; CE 2.0..209] */
void FillOutsideRect( CDC* pDC, CBrush* pBrush );

/* CScrollView::GetDeviceScrollSizes  [function; ce-only; CE 2.0..209] */
void GetDeviceScrollSizes( int& nMapMode, SIZE& sizeTotal, SIZE& sizePage, SIZE& sizeLine ) const;

/* CScrollView::ResizeParentToFit  [function; ce-only; CE 2.0..209] */
void ResizeParentToFit( BOOL bShrinkOnly = TRUE );

/* CScrollView::ScrollToPosition  [function; ce-only; CE 2.0..209] */
void ScrollToPosition( POINT pt );

/* CScrollView::SetScaleToFitSize  [function; ce-only; CE 2.0..209] */
void SetScaleToFitSize( SIZE sizeTotal );

/* CScrollView::SetScrollSizes  [function; ce-only; CE 2.0..209] */
void SetScrollSizes( int nMapMode, SIZE sizeTotal, const SIZE& sizePage = sizeDefault, const SIZE& sizeLine = sizeDefault );

/* CSingleDocTemplate::CSingleDocTemplate  [function; ce-only; CE 2.0..209] */
CSingleDocTemplate( UINT nIDResource, CRuntimeClass* pDocClass, CRuntimeClass* pFrameClass, CRuntimeClass* pViewClass );

/* CStatic::Create  [function; ce-only; CE 2.0..209] */
BOOL Create( LPCTSTR lpszText, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID = 0xffff );

/* CStatic::SetBitmap  [function; ce-only; CE 2.0..209] */
HBITMAP SetBitmap( HBITMAP hBitmap );

/* CTime::GetCurrentTime  [function; ce-only; CE 2.0..209] */
static CTime PASCAL GetCurrentTime( );

/* CTime::GetDay  [function; ce-only; CE 2.0..209] */
int GetDay( ) const;

/* CTime::GetDayOfWeek  [function; ce-only; CE 2.0..209] */
int GetDayOfWeek( ) const;

/* CTime::GetHour  [function; ce-only; CE 2.0..209] */
int GetHour( ) const;

/* CTime::GetMinute  [function; ce-only; CE 2.0..209] */
int GetMinute( ) const;

/* CTime::GetMonth  [function; ce-only; CE 2.0..209] */
int GetMonth( ) const;

/* CTime::GetSecond  [function; ce-only; CE 2.0..209] */
int GetSecond( ) const;

/* CTime::GetYear  [function; ce-only; CE 2.0..209] */
int GetYear( ) const;

/* CView::OnActivateFrame  [function; ce-only; CE 2.0..209] */
virtual void OnActivateFrame( UINT nState, CFrameWnd* pFrameWnd );

/* CView::OnActivateView  [function; ce-only; CE 2.0..209] */
virtual void OnActivateView( BOOL bActivate, CView* pActivateView, CView* pDeactiveView );

/* CView::OnDraw  [function; ce-only; CE 2.0..209] */
virtual void OnDraw( CDC* pDC ) = 0;

/* CView::OnInitialUpdate  [function; ce-only; CE 2.0..209] */
virtual void OnInitialUpdate( );

/* CView::OnPrepareDC  [function; ce-only; CE 2.0..209] */
virtual void OnPrepareDC( CDC* pDC, ConstVoid* * pUnused= NULL );

/* CView::OnScroll  [function; ce-only; CE 2.0..209] */
virtual BOOL CView::OnScroll( UINT nScrollCode, UINT nPos, BOOL bDoScroll = TRUE );

/* CView::OnScrollBy  [function; ce-only; CE 2.0..209] */
BOOL CView::OnScrollBy( CSize sizeScroll, BOOL bDoScroll = TRUE );

/* CView::OnUpdate  [function; ce-only; CE 2.0..209] */
virtual void OnUpdate( CView* pSender, LPARAM lHint, CObject* pHint );

/* CWaitCursor::Restore  [function; ce-only; CE 2.0..209] */
void Restore( );

/* CWinApp::AddDocTemplate  [function; ce-only; CE 2.0..209] */
void AddDocTemplate( CDocTemplate* pTemplate );

/* CWinApp::AddToRecentFileList  [function; ce-only; CE 2.0..209] */
virtual void AddToRecentFileList( LPCTSTR lpszPathName );

/* CWinApp::CloseAllDocuments  [function; ce-only; CE 2.0..209] */
void CloseAllDocuments( BOOL bEndSession );

/* CWinApp::CWinApp  [function; ce-only; CE 2.0..209] */
CWinApp ( LPCTSTR lpszAppName, LPCTSTR lpszHelpName = _T("") );

/* CWinApp::DoMessageBox  [function; ce-only; CE 2.0..209] */
virtual int DoMessageBox( LPCTSTR lpszPrompt, UINT nType, UINT nIDPrompt );

/* CWinApp::DoWaitCursor  [function; ce-only; CE 2.0..209] */
virtual void DoWaitCursor( int nCode );

/* CWinApp::ExitInstance  [function; ce-only; CE 2.0..209] */
virtual int ExitInstance( );

/* CWinApp::GetProfileInt  [function; ce-only; CE 2.0..209] */
UINT GetProfileInt( LPCTSTR lpszSection, LPCTSTR lpszEntry, int nDefault );

/* CWinApp::GetProfileString  [function; ce-only; CE 2.0..209] */
CString GetProfileString( LPCTSTR lpszSection, LPCTSTR lpszEntry, LPCTSTR lpszDefault = NULL );

/* CWinApp::HideApplication  [function; ce-only; CE 2.0..209] */
void HideApplication( );

/* CWinApp::InitApplication  [function; ce-only; CE 2.0..209] */
virtual BOOL InitApplication( );

/* CWinApp::InitInstance  [function; ce-only; CE 2.0..209] */
virtual BOOL InitInstance( );

/* CWinApp::LoadIcon  [function; ce-only; CE 2.0..209] */
HICON LoadIcon( LPCTSTR lpszResourceName ) const;

/* CWinApp::LoadOEMIcon  [function; ce-only; CE 2.0..209] */
HICON LoadOEMIcon( UINT nIDIcon ) const;

/* CWinApp::LoadStandardIcon  [function; ce-only; CE 2.0..209] */
HICON LoadStandardIcon( LPCTSTR lpszIconName ) const;

/* CWinApp::LoadStdProfileSettings  [function; ce-only; CE 2.0..209] */
void LoadStdProfileSettings( UINT nMaxMRU = _AFX_MRU_COUNT );

/* CWinApp::OnDDECommand  [function; ce-only; CE 2.0..209] */
virtual BOOL OnDDECommand( LPTSTR lpszCommand );

/* CWinApp::OnFileNew  [function; ce-only; CE 2.0..209] */
afx_msg void OnFileNew( );

/* CWinApp::OnFileOpen  [function; ce-only; CE 2.0..209] */
afx_msg void OnFileOpen( );

/* CWinApp::OnHelp  [function; ce-only; CE 2.0..209] */
afx_msg void OnHelp( );

/* CWinApp::OnIdle  [function; ce-only; CE 2.0..209] */
virtual BOOL OnIdle( LONG lCount );

/* CWinApp::OpenDocumentFile  [function; ce-only; CE 2.0..209] */
virtual CDocument* OpenDocumentFile( LPCTSTR lpszFileName );

/* CWinApp::ParseCommandLine  [function; ce-only; CE 2.0..209] */
void ParseCommandLine( CCommandLineInfo& rCmdInfo );

/* CWinApp::ProcessShellCommand  [function; ce-only; CE 2.0..209] */
BOOL ProcessShellCommand( CCommandLineInfo& rCmdInfo );

/* CWinApp::ProcessWndProcException  [function; ce-only; CE 2.0..209] */
virtual LRESULT ProcessWndProcException( CException* e, const MSG* pMsg );

/* CWinApp::Run  [function; ce-only; CE 2.0..209] */
virtual int Run( );

/* CWinApp::SaveAllModified  [function; ce-only; CE 2.0..209] */
virtual BOOL SaveAllModified( );

/* CWinApp::SetDialogBkColor  [function; ce-only; CE 2.0..209] */
void SetDialogBkColor( COLORREF clrCtlBk = RGB(192, 192, 192), COLORREF clrCtlText = RGB(0, 0, 0) );

/* CWinApp::SetRegistryKey  [function; ce-only; CE 2.0..209] */
void SetRegistryKey( LPCTSTR lpszRegistryKey );

/* CWinApp::WinHelp  [function; ce-only; CE 2.0..209] */
virtual void WinHelp( DWORD dwData, UINT nCmd = HELP_CONTEXT );

/* CWinApp::WriteProfileInt  [function; ce-only; CE 2.0..209] */
BOOL WriteProfileInt( LPCTSTR lpszSection, LPCTSTR lpszEntry, int nValue );

/* CWinApp::WriteProfileString  [function; ce-only; CE 2.0..209] */
BOOL WriteProfileString( LPCTSTR lpszSection, LPCTSTR lpszEntry, LPCTSTR lpszValue );

/* CWinThread::CreateThread  [function; ce-only; CE 2.0..209] */
BOOL CreateThread( DWORD dwCreateFlags = 0, UINT nStackSize = 0, LPSECURITY_ATTRIBUTES lpSecurityAttrs = NULL );

/* CWinThread::ExitInstance  [function; ce-only; CE 2.0..209] */
virtual int ExitInstance( );

/* CWinThread::GetMainWnd  [function; ce-only; CE 2.0..209] */
virtual CWnd * GetMainWnd( );

/* CWinThread::GetThreadPriority  [function; ce-only; CE 2.0..209] */
int GetThreadPriority( );

/* CWinThread::InitInstance  [function; ce-only; CE 2.0..209] */
virtual BOOL InitInstance( );

/* CWinThread::IsIdleMessage  [function; ce-only; CE 2.0..209] */
virtual BOOL IsIdleMessage( MSG* pMsg );

/* CWinThread::OnIdle  [function; ce-only; CE 2.0..209] */
virtual BOOL OnIdle( LONG lCount );

/* CWinThread::PreTranslateMessage  [function; ce-only; CE 2.0..209] */
virtual BOOL PreTranslateMessage( MSG *pMsg );

/* CWinThread::ProcessWndProcException  [function; ce-only; CE 2.0..209] */
virtual LRESULT ProcessWndProcException( CException *e, const MSG *pMsg );

/* CWinThread::ResumeThread  [function; ce-only; CE 2.0..209] */
DWORD ResumeThread( );

/* CWinThread::Run  [function; ce-only; CE 2.0..209] */
virtual int Run( );

/* CWinThread::SetThreadPriority  [function; ce-only; CE 2.0..209] */
BOOL SetThreadPriority( int nPriority );

/* CWinThread::SuspendThread  [function; ce-only; CE 2.0..209] */
DWORD SuspendThread( );

/* CWnd::Attach  [function; ce-only; CE 2.0..209] */
BOOL Attach( HWND hWndNew );

/* CWnd::BindDefaultProperty  [function; ce-only; CE 2.0..209] */
void BindDefaultProperty( DISPID dwDispID, VARTYPE vtProp, LPCTSTR szFieldName, CWnd * pDSCWnd );

/* CWnd::BindProperty  [function; ce-only; CE 2.0..209] */
void BindProperty( DISPID dwDispID, CWnd * pWndDSC );

/* CWnd::BringWindowToTop  [function; ce-only; CE 2.0..209] */
void BringWindowToTop( );

/* CWnd::CalcWindowRect  [function; ce-only; CE 2.0..209] */
virtual void CalcWindowRect( LPRECT lpClientRect, UINT nAdjustType = adjustBorder );

/* CWnd::CenterWindow  [function; ce-only; CE 2.0..209] */
void CenterWindow( CWnd* pAlternateOwner = NULL );

/* CWnd::CheckDlgButton  [function; ce-only; CE 2.0..209] */
void CheckDlgButton( int nIDButton, UINT nCheck );

/* CWnd::CheckRadioButton  [function; ce-only; CE 2.0..209] */
void CheckRadioButton( int nIDFirstButton, int nIDLastButton, int nIDCheckButton );

/* CWnd::ClientToScreen  [function; ce-only; CE 2.0..209] */
void ClientToScreen( LPPOINT lpPoint ) const;

/* CWnd::ContinueModal  [function; ce-only; CE 2.0..209] */
BOOL ContinueModal( );

/* CWnd::Create  [function; ce-only; CE 2.0..209] */
virtual BOOL Create ( LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, CCreateContext* pContext = NULL );

/* CWnd::CreateControl  [function; ce-only; CE 2.0..209] */
BOOL CreateControl(REFCLSID clsid, LPCTSTR pszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, CFile* pPersist=NULL, BOOL bStorage=FALSE, BSTR bstrLicKey=NULL);

/* CWnd::CreateEx  [function; ce-only; CE 2.0..209] */
BOOL CreateEx ( DWORD dwExStyle, LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle, int x, int y, int nWidth, int nHeight, HWND hwndParent, HMENU nIDorHMenu, LPVOID lpParam = NULL );

/* CWnd::CreateSolidCaret  [function; ce-only; CE 2.0..209] */
void CreateSolidCaret( int nWidth, int nHeight );

/* CWnd::Default  [function; ce-only; CE 2.0..209] */
LRESULT Default( );

/* CWnd::DefWindowProc  [function; ce-only; CE 2.0..209] */
virtual LRESULT DefWindowProc( UINT message, WPARAM wParam, LPARAM lParam );

/* CWnd::DeleteTempMap  [function; ce-only; CE 2.0..209] */
static void PASCAL DeleteTempMap( );

/* CWnd::DestroyWindow  [function; ce-only; CE 2.0..209] */
virtual BOOL DestroyWindow ( );

/* CWnd::Detach  [function; ce-only; CE 2.0..209] */
HWND Detach( );

/* CWnd::DoDataExchange  [function; ce-only; CE 2.0..209] */
virtual void DoDataExchange( CDataExchange* pDX );

/* CWnd::EnableWindow  [function; ce-only; CE 2.0..209] */
BOOL EnableWindow( BOOL bEnable = TRUE );

/* CWnd::EndModalLoop  [function; ce-only; CE 2.0..209] */
void EndModalLoop( int nResult );

/* CWnd::EndPaint  [function; ce-only; CE 2.0..209] */
void EndPaint( LPPAINTSTRUCT lpPaint );

/* CWnd::ExecuteDlgInit  [function; ce-only; CE 2.0..209] */
BOOL ExecuteDlgInit( LPCTSTR lpszResourceName );

/* CWnd::FindWindow  [function; ce-only; CE 2.0..209] */
static CWnd* PASCAL FindWindow( LPCTSTR lpszClassName, LPCTSTR lpszWindowName );

/* CWnd::FromHandle  [function; ce-only; CE 2.0..209] */
static CWnd* PASCAL FromHandle( HWND hWnd );

/* CWnd::FromHandlePermanent  [function; ce-only; CE 2.0..209] */
static CWnd* PASCAL FromHandlePermanent( HWND hWnd );

/* CWnd::GetActiveWindow  [function; ce-only; CE 2.0..209] */
static CWnd* PASCAL GetActiveWindow( );

/* CWnd::GetCapture  [function; ce-only; CE 2.0..209] */
static CWnd* PASCAL GetCapture( );

/* CWnd::GetCaretPos  [function; ce-only; CE 2.0..209] */
static CPoint PASCAL GetCaretPos( );

/* CWnd::GetCheckedRadioButton  [function; ce-only; CE 2.0..209] */
int GetCheckedRadioButton( int nIDFirstButton, int nIDLastButton );

/* CWnd::GetClientRect  [function; ce-only; CE 2.0..209] */
void GetClientRect( LPRECT lpRect ) const;

/* CWnd::GetClipboardOwner  [function; ce-only; CE 2.0..209] */
static CWnd* PASCAL GetClipboardOwner( );

/* CWnd::GetControlUnknown  [function; ce-only; CE 2.0..209] */
LPUNKNOWN GetControlUnknown( );

/* CWnd::GetCurrentMessage  [function; ce-only; CE 2.0..209] */
static const MSG* PASCAL GetCurrentMessage( );

/* CWnd::GetDescendantWindow  [function; ce-only; CE 2.0..209] */
CWnd* GetDescendantWindow( int nID, BOOL bOnlyPerm = FALSE ) const;

/* CWnd::GetDesktopWindow  [function; ce-only; CE 2.0..209] */
static CWnd* PASCAL GetDesktopWindow( );

/* CWnd::GetDlgCtrlID  [function; ce-only; CE 2.0..209] */
int GetDlgCtrlID( ) const;

/* CWnd::GetDlgItem  [function; ce-only; CE 2.0..209] */
CWnd* GetDlgItem ( int nID ) const;

/* CWnd::GetDlgItemInt  [function; ce-only; CE 2.0..209] */
UINT GetDlgItemInt( int nID, BOOL* lpTrans = NULL, BOOL bSigned = TRUE ) const;

/* CWnd::GetDlgItemText  [function; ce-only; CE 2.0..209] */
int GetDlgItemText( int nID, LPTSTR lpStr, int nMaxCount ) const;

/* CWnd::GetExStyle  [function; ce-only; CE 2.0..209] */
DWORD GetExStyle( ) const;

/* CWnd::GetFocus  [function; ce-only; CE 2.0..209] */
static CWnd* PASCAL GetFocus( );

/* CWnd::GetForegroundWindow  [function; ce-only; CE 2.0..209] */
static CWnd* PASCAL GetForegroundWindow( );

/* CWnd::GetIcon  [function; ce-only; CE 2.0..209] */
HICON GetIcon( BOOL bBigIcon ) const;

/* CWnd::GetNextDlgGroupItem  [function; ce-only; CE 2.0..209] */
CWnd* GetNextDlgGroupItem( CWnd* pWndCtl, BOOL bPrevious = FALSE ) const;

/* CWnd::GetNextDlgTabItem  [function; ce-only; CE 2.0..209] */
CWnd* GetNextDlgTabItem( CWnd* pWndCtl, BOOL bPrevious = FALSE ) const;

/* CWnd::GetNextWindow  [function; ce-only; CE 2.0..209] */
CWnd* GetNextWindow( UINT nFlag = GW_HWNDNEXT ) const;

/* CWnd::GetOpenClipboardWindow  [function; ce-only; CE 2.0..209] */
static CWnd* PASCAL GetOpenClipboardWindow( );

/* CWnd::GetProperty  [function; ce-only; CE 2.0..209] */
void GetProperty( DISPID dwDispID, VARTYPE vtProp, void* pvProp ) const;

/* CWnd::GetSafeHwnd  [function; ce-only; CE 2.0..209] */
HWND GetSafeHwnd( ) const;

/* CWnd::GetSafeOwner  [function; ce-only; CE 2.0..209] */
CWnd* PASCAL GetSafeOwner( CWnd* pParent, HWND* pWndTop );

/* CWnd::GetScrollBarCtrl  [function; ce-only; CE 2.0..209] */
virtual CScrollBar* GetScrollBarCtrl( int nBar ) const;

/* CWnd::GetScrollInfo  [function; ce-only; CE 2.0..209] */
BOOL GetScrollInfo( int nBar, LPSCROLLINFO lpScrollInfo, UINT nMask = SIF_ALL );

/* CWnd::GetScrollLimit  [function; ce-only; CE 2.0..209] */
int GetScrollLimit( int nBar );

/* CWnd::GetScrollPos  [function; ce-only; CE 2.0..209] */
int GetScrollPos( int nBar ) const;

/* CWnd::GetScrollRange  [function; ce-only; CE 2.0..209] */
void GetScrollRange( int nBar, LPINT lpMinPos, LPINT lpMaxPos ) const;

/* CWnd::GetStyle  [function; ce-only; CE 2.0..209] */
DWORD GetStyle( ) const;

/* CWnd::GetUpdateRect  [function; ce-only; CE 2.0..209] */
BOOL GetUpdateRect( LPRECT lpRect, BOOL bErase = FALSE );

/* CWnd::GetUpdateRgn  [function; ce-only; CE 2.0..209] */
int GetUpdateRgn ( CRgn* pRgn, BOOL bErase = FALSE );

/* CWnd::GetWindow  [function; ce-only; CE 2.0..209] */
CWnd* GetWindow ( UINT nCmd ) const;

/* CWnd::GetWindowRect  [function; ce-only; CE 2.0..209] */
void GetWindowRect( LPRECT lpRect ) const;

/* CWnd::GetWindowText  [function; ce-only; CE 2.0..209] */
int GetWindowText( LPTSTR lpszStringBuf, int nMaxCount ) const;

/* CWnd::GetWindowTextLength  [function; ce-only; CE 2.0..209] */
int GetWindowTextLength( ) const;

/* CWnd::HideCaret  [function; ce-only; CE 2.0..209] */
void HideCaret( );

/* CWnd::Invalidate  [function; ce-only; CE 2.0..209] */
void Invalidate( BOOL bErase = TRUE );

/* CWnd::InvalidateRect  [function; ce-only; CE 2.0..209] */
void InvalidateRect ( LPCRECT lpRect, BOOL bErase = TRUE );

/* CWnd::InvokeHelper  [function; ce-only; CE 2.0..209] */
void InvokeHelper( DISPID dwDispID, WORD wFlags, VARTYPE vtRet, void* pvRet, const BYTE* pbParamInfo, ... );
throw( COleException );
throw( COleDispatchException );

/* CWnd::IsChild  [function; ce-only; CE 2.0..209] */
BOOL IsChild( const CWnd* pWnd ) const;

/* CWnd::IsDialogMessage  [function; ce-only; CE 2.0..209] */
BOOL IsDialogMessage( LPMSG lpMsg );

/* CWnd::IsDlgButtonChecked  [function; ce-only; CE 2.0..209] */
UINT IsDlgButtonChecked( int nIDButton ) const;

/* CWnd::IsIconic  [function; ce-only; CE 2.0..209] */
BOOL IsIconic( ) const;

/* CWnd::IsWindowEnabled  [function; ce-only; CE 2.0..209] */
BOOL IsWindowEnabled( ) const;

/* CWnd::IsWindowVisible  [function; ce-only; CE 2.0..209] */
BOOL IsWindowVisible( ) const;

/* CWnd::KillTimer  [function; ce-only; CE 2.0..209] */
BOOL KillTimer( int nIDEvent );

/* CWnd::MapWindowPoints  [function; ce-only; CE 2.0..209] */
void MapWindowPoints( CWnd* pwndTo, LPRECT lpRect ) const;

/* CWnd::MessageBox  [function; ce-only; CE 2.0..209] */
int MessageBox ( LPCTSTR lpszText, LPCTSTR lpszCaption = NULL, UINT nType = MB_OK );

/* CWnd::ModifyStyle  [function; ce-only; CE 2.0..209] */
BOOL ModifyStyle( DWORD dwRemove, DWORD dwAdd, UINT nFlags = 0 );

/* CWnd::ModifyStyleEx  [function; ce-only; CE 2.0..209] */
BOOL ModifyStyleEx( DWORD dwRemove, DWORD dwAdd, UINT nFlags = 0 );

/* CWnd::MoveWindow  [function; ce-only; CE 2.0..209] */
void MoveWindow ( int x, int y, int nWidth, int nHeight, BOOL bRepaint = TRUE );

/* CWnd::OnActivate  [function; ce-only; CE 2.0..209] */
afx_msg void OnActivate( UINT nState, CWnd* pWndOther, BOOL bMinimized );

/* CWnd::OnAmbientProperty  [function; ce-only; CE 2.0..209] */
BOOL OnAmbientProperty( COleControlSite* pSite, DISPID dispid, VARIANT* pvar )

/* CWnd::OnCancelMode  [function; ce-only; CE 2.0..209] */
afx_msg void OnCancelMode( );

/* CWnd::OnCaptureChanged  [function; ce-only; CE 2.0..209] */
afx_msg void OnCaptureChanged( CWnd* pWnd );

/* CWnd::OnChar  [function; ce-only; CE 2.0..209] */
afx_msg void OnChar( UINT nChar, UINT nRepCnt, UINT nFlags );

/* CWnd::OnCharToItem  [function; ce-only; CE 2.0..209] */
afx_msg int OnCharToItem( UINT nChar, CListBox* pListBox, UINT nIndex );

/* CWnd::OnChildNotify  [function; ce-only; CE 2.0..209] */
virtual BOOL OnChildNotify( UINT message, WPARAM wParam, LPARAM lParam, LRESULT* pLResult );

/* CWnd::OnClose  [function; ce-only; CE 2.0..209] */
afx_msg void OnClose( );

/* CWnd::OnCommand  [function; ce-only; CE 2.0..209] */
virtual BOOL OnCommand( WPARAM wParam, LPARAM lParam );

/* CWnd::OnCompareItem  [function; ce-only; CE 2.0..209] */
afx_msg int OnCompareItem( int nIDCtl, LPCOMPAREITEMSTRUCT lpCompareItemStruct );

/* CWnd::OnCreate  [function; ce-only; CE 2.0..209] */
afx_msg int OnCreate( LPCREATESTRUCT lpCreateStruct );

/* CWnd::OnCtlColor  [function; ce-only; CE 2.0..209] */
afx_msg HBRUSH OnCtlColor( CDC* pDC, CWnd* pWnd, UINT nCtlColor );

/* CWnd::OnDeadChar  [function; ce-only; CE 2.0..209] */
afx_msg void OnDeadChar( UINT nChar, UINT nRepCnt, UINT nFlags );

/* CWnd::OnDeleteItem  [function; ce-only; CE 2.0..209] */
afx_msg void OnDeleteItem( int nIDCtl, LPDELETEITEMSTRUCT lpDeleteItemStruct );

/* CWnd::OnDestroy  [function; ce-only; CE 2.0..209] */
afx_msg void OnDestroy( );

/* CWnd::OnDestroyClipboard  [function; ce-only; CE 2.0..209] */
afx_msg void OnDestroyClipboard( );

/* CWnd::OnDrawItem  [function; ce-only; CE 2.0..209] */
afx_msg void OnDrawItem( int nIDCtl, LPDRAWITEMSTRUCT lpDrawItemStruct );

/* CWnd::OnEnable  [function; ce-only; CE 2.0..209] */
afx_msg void OnEnable( BOOL bEnable );

/* CWnd::OnEraseBkgnd  [function; ce-only; CE 2.0..209] */
afx_msg BOOL OnEraseBkgnd( CDC* pDC );

/* CWnd::OnFontChange  [function; ce-only; CE 2.0..209] */
afx_msg void OnFontChange( );

/* CWnd::OnGetDlgCode  [function; ce-only; CE 2.0..209] */
afx_msg UINT OnGetDlgCode( );

/* CWnd::OnHelpInfo  [function; ce-only; CE 2.0..209] */
afx_msg BOOL OnHelpInfo( HELPINFO* lpHelpInfo );

/* CWnd::OnHScroll  [function; ce-only; CE 2.0..209] */
afx_msg void OnHScroll( UINT nSBCode, UINT nPos, CScrollBar* pScrollBar );

/* CWnd::OnInitMenuPopup  [function; ce-only; CE 2.0..209] */
afx_msg void OnInitMenuPopup ( CMenu* pPopupMenu, UINT nIndex, BOOL bSysMenu );

/* CWnd::OnKeyDown  [function; ce-only; CE 2.0..209] */
afx_msg void OnKeyDown( UINT nChar, UINT nRepCnt, UINT nFlags );

/* CWnd::OnKeyUp  [function; ce-only; CE 2.0..209] */
afx_msg void OnKeyUp( UINT nChar, UINT nRepCnt, UINT nFlags );

/* CWnd::OnKillFocus  [function; ce-only; CE 2.0..209] */
afx_msg void OnKillFocus( CWnd* pNewWnd );

/* CWnd::OnLButtonDblClk  [function; ce-only; CE 2.0..209] */
afx_msg void OnLButtonDblClk( UINT nFlags, CPoint point );

/* CWnd::OnLButtonDown  [function; ce-only; CE 2.0..209] */
afx_msg void OnLButtonDown( UINT nFlags, CPoint point );

/* CWnd::OnLButtonUp  [function; ce-only; CE 2.0..209] */
afx_msg void OnLButtonUp( UINT nFlags, CPoint point );

/* CWnd::OnMeasureItem  [function; ce-only; CE 2.0..209] */
afx_msg void OnMeasureItem( int nIDCtl, LPMEASUREITEMSTRUCT lpMeasureItemStruct );

/* CWnd::OnMenuChar  [function; ce-only; CE 2.0..209] */
afx_msg LRESULT OnMenuChar ( UINT nChar, UINT nFlags, CMenu* pMenu );

/* CWnd::OnMouseMove  [function; ce-only; CE 2.0..209] */
afx_msg void OnMouseMove( UINT nFlags, CPoint point );

/* CWnd::OnMove  [function; ce-only; CE 2.0..209] */
afx_msg void OnMove( int x, int y );

/* CWnd::OnNcDestroy  [function; ce-only; CE 2.0..209] */
afx_msg void OnNcDestroy( );

/* CWnd::OnPaint  [function; ce-only; CE 2.0..209] */
afx_msg void OnPaint( );

/* CWnd::OnRenderAllFormats  [function; ce-only; CE 2.0..209] */
afx_msg void OnRenderAllFormats( );

/* CWnd::OnRenderFormat  [function; ce-only; CE 2.0..209] */
afx_msg void OnRenderFormat( UINT nFormat );

/* CWnd::OnSetFocus  [function; ce-only; CE 2.0..209] */
afx_msg void OnSetFocus( CWnd* pOldWnd );

/* CWnd::OnShowWindow  [function; ce-only; CE 2.0..209] */
afx_msg void OnShowWindow( BOOL bShow, UINT nStatus );

/* CWnd::OnSize  [function; ce-only; CE 2.0..209] */
afx_msg void OnSize ( UINT nType, int cx, int cy );

/* CWnd::OnStyleChanged  [function; ce-only; CE 2.0..209] */
afx_msg void OnStyleChanged( int nStyleType, LPSTYLESTRUCT lpStyleStruct );

/* CWnd::OnSysChar  [function; ce-only; CE 2.0..209] */
afx_msg void OnSysChar( UINT nChar, UINT nRepCnt, UINT nFlags );

/* CWnd::OnSysCommand  [function; ce-only; CE 2.0..209] */
afx_msg void OnSysCommand( UINT nID, LPARAM lParam );

/* CWnd::OnSysDeadChar  [function; ce-only; CE 2.0..209] */
afx_msg void OnSysDeadChar( UINT nChar, UINT nRepCnt, UINT nFlags );

/* CWnd::OnSysKeyDown  [function; ce-only; CE 2.0..209] */
afx_msg void OnSysKeyDown( UINT nChar, UINT nRepCnt, UINT nFlags );

/* CWnd::OnSysKeyUp  [function; ce-only; CE 2.0..209] */
afx_msg void OnSysKeyUp( UINT nChar, UINT nRepCnt, UINT nFlags );

/* CWnd::OnTimer  [function; ce-only; CE 2.0..209] */
afx_msg void OnTimer( UINT nIDEvent );

/* CWnd::OnVKeyToItem  [function; ce-only; CE 2.0..209] */
protafx_msg int OnVKeyToItem( UINT nKey, CListBox* pListBox, UINT nIndex );

/* CWnd::OnVScroll  [function; ce-only; CE 2.0..209] */
afx_msg void OnVScroll( UINT nSBCode, UINT nPos, CScrollBar* pScrollBar );

/* CWnd::OnWindowPosChanged  [function; ce-only; CE 2.0..209] */
afx_msg void OnWindowPosChanged( WINDOWPOS* lpwndpos );

/* CWnd::OnWndMsg  [function; ce-only; CE 2.0..209] */
virtual BOOL OnWndMsg( UINT message, WPARAM wParam, LPARAM lParam, LRESULT* pResult );

/* CWnd::OpenClipboard  [function; ce-only; CE 2.0..209] */
BOOL OpenClipboard( );

/* CWnd::PostMessage  [function; ce-only; CE 2.0..209] */
BOOL PostMessage( UINT message, WPARAM wParam = 0, LPARAM lParam = 0 );

/* CWnd::PostNcDestroy  [function; ce-only; CE 2.0..209] */
virtual void PostNcDestroy( );

/* CWnd::PreCreateWindow  [function; ce-only; CE 2.0..209] */
virtual BOOL PreCreateWindow( CREATESTRUCT& cs );

/* CWnd::PreSubclassWindow  [function; ce-only; CE 2.0..209] */
virtual void PreSubclassWindow( );

/* CWnd::PreTranslateMessage  [function; ce-only; CE 2.0..209] */
virtual BOOL PreTranslateMessage( MSG* pMsg );

/* CWnd::RedrawWindow  [function; ce-only; CE 2.0..209] */
BOOL RedrawWindow( LPCRECT lpRectUpdate = NULL, CRgn* prgnUpdate = NULL, UINT flags = RDW_INVALIDATE | RDW_UPDATENOW | RDW_ERASE );

/* CWnd::ReflectChildNotify  [function; ce-only; CE 2.0..209] */
BOOL ReflectChildNotify( UINT message, WPARAM wParam, LPARAM lParam, LRESULT* pResult );

/* CWnd::ReflectLastMsg  [function; ce-only; CE 2.0..209] */
static BOOL PASCAL ReflectLastMsg( HWND hWndChild, LRESULT* pResult = NULL );

/* CWnd::ReleaseDC  [function; ce-only; CE 2.0..209] */
int ReleaseDC( CDC* pDC );

/* CWnd::RepositionBars  [function; ce-only; CE 2.0..209] */
void RepositionBars( UINT nIDFirst, UINT nIDLast, UINT nIDLeftOver, UINT nFlag = CWnd::reposDefault, LPRECT lpRectParam = NULL, LPCRECT lpRectClient = NULL );

/* CWnd::RunModalLoop  [function; ce-only; CE 2.0..209] */
int RunModalLoop( DWORD dwFlags );

/* CWnd::ScreenToClient  [function; ce-only; CE 2.0..209] */
void ScreenToClient( LPPOINT lpPoint ) const;

/* CWnd::ScrollWindow  [function; ce-only; CE 2.0..209] */
void ScrollWindow ( int xAmount, int yAmount, LPCRECT lpRect = NULL, LPCRECT lpClipRect = NULL );

/* CWnd::ScrollWindowEx  [function; ce-only; CE 2.0..209] */
int ScrollWindowEx ( int dx, int dy, LPCRECT lpRectScroll, LPCRECT lpRectClip, CRgn* prgnUpdate, LPRECT lpRectUpdate, UINT flags );

/* CWnd::SendChildNotifyLastMsg  [function; ce-only; CE 2.0..209] */
BOOL SendChildNotifyLastMsg( LRESULT* pResult = NULL );

/* CWnd::SendDlgItemMessage  [function; ce-only; CE 2.0..209] */
LRESULT SendDlgItemMessage( int nID, UINT message, WPARAM wParam = 0, LPARAM lParam = 0 );

/* CWnd::SendMessage  [function; ce-only; CE 2.0..209] */
LRESULT SendMessage( UINT message, WPARAM wParam = 0, LPARAM lParam = 0 );

/* CWnd::SendMessageToDescendants  [function; ce-only; CE 2.0..209] */
void SendMessageToDescendants( UINT message, WPARAM wParam = 0, LPARAM lParam = 0, BOOL bDeep = TRUE, BOOL bOnlyPerm = FALSE );

/* CWnd::SendNotifyMessage  [function; ce-only; CE 2.0..209] */
BOOL SendNotifyMessage( UINT message, WPARAM wParam, LPARAM lParam );

/* CWnd::SetCaretPos  [function; ce-only; CE 2.0..209] */
static void PASCAL SetCaretPos( POINT point );

/* CWnd::SetDlgCtrlID  [function; ce-only; CE 2.0..209] */
int SetDlgCtrlID( int nID );

/* CWnd::SetDlgItemInt  [function; ce-only; CE 2.0..209] */
void SetDlgItemInt( int nID, UINT nValue, BOOL bSigned = TRUE );

/* CWnd::SetDlgItemText  [function; ce-only; CE 2.0..209] */
void SetDlgItemText( int nID, LPCTSTR lpszString );

/* CWnd::SetFont  [function; ce-only; CE 2.0..209] */
void SetFont( CFont* pFont, BOOL bRedraw = TRUE );

/* CWnd::SetForegroundWindow  [function; ce-only; CE 2.0..209] */
BOOL SetForegroundWindow ( );

/* CWnd::SetIcon  [function; ce-only; CE 2.0..209] */
HICON SetIcon( HICON hIcon, BOOL bBigIcon );

/* CWnd::SetOwner  [function; ce-only; CE 2.0..209] */
void SetOwner( CWnd* pOwnerWnd );

/* CWnd::SetProperty  [function; ce-only; CE 2.0..209] */
void SetProperty( DISPID dwDispID, VARTYPE vtProp, ... );

/* CWnd::SetRedraw  [function; ce-only; CE 2.0..209] */
void SetRedraw( BOOL bRedraw = TRUE );

/* CWnd::SetScrollInfo  [function; ce-only; CE 2.0..209] */
BOOL SetScrollInfo( int nBar, LPSCROLLINFO lpScrollInfo, BOOL bRedraw = TRUE );

/* CWnd::SetScrollPos  [function; ce-only; CE 2.0..209] */
int SetScrollPos( int nBar, int nPos, BOOL bRedraw = TRUE );

/* CWnd::SetScrollRange  [function; ce-only; CE 2.0..209] */
void SetScrollRange( int nBar, int nMinPos, int nMaxPos, BOOL bRedraw = TRUE );

/* CWnd::SetTimer  [function; ce-only; CE 2.0..209] */
UINT SetTimer( UINT nIDEvent, UINT nElapse, void (CALLBACK EXPORT* lpfnTimer)(HWND, UINT, UINT, DWORD) );

/* CWnd::SetWindowPos  [function; ce-only; CE 2.0..209] */
BOOL SetWindowPos ( const CWnd* pWndInsertAfter, int x, int y, int cx, int cy, UINT nFlags );

/* CWnd::SetWindowText  [function; ce-only; CE 2.0..209] */
void SetWindowText( LPCTSTR lpszString );

/* CWnd::ShowCaret  [function; ce-only; CE 2.0..209] */
void ShowCaret( );

/* CWnd::ShowWindow  [function; ce-only; CE 2.0..209] */
BOOL ShowWindow ( int nCmdShow );

/* CWnd::SubclassDlgItem  [function; ce-only; CE 2.0..209] */
BOOL SubclassDlgItem( UINT nID, CWnd* pParent );

/* CWnd::SubclassWindow  [function; ce-only; CE 2.0..209] */
BOOL SubclassWindow( HWND hWnd );

/* CWnd::UnSubclassWindow  [function; ce-only; CE 2.0..209] */
HWND UnsubclassWindow( );

/* CWnd::UpdateData  [function; ce-only; CE 2.0..209] */
BOOL UpdateData( BOOL bSaveAndValidate = TRUE );

/* CWnd::UpdateDialogControls  [function; ce-only; CE 2.0..209] */
void UpdateDialogControls( CCmdTarget* pTarget, BOOL bDisableIfNoHndler );

/* CWnd::UpdateWindow  [function; ce-only; CE 2.0..209] */
void UpdateWindow( );

/* CWnd::ValidateRect  [function; ce-only; CE 2.0..209] */
void ValidateRect ( LPCRECT lpRect );

/* CWnd::WindowFromPoint  [function; ce-only; CE 2.0..209] */
static CWnd* PASCAL WindowFromPoint( POINT point );

/* CWnd::WindowProc  [function; ce-only; CE 2.0..209] */
virtual LRESULT WindowProc( UINT message, WPARAM wParam, LPARAM lParam );
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
BOOL AddAdornments( DWORD dwflags );
BOOL AddBitmap( int nToolbarBitmapID, int nNImages );
BOOL AddComboBoxString ( UINT wStringResourceID, long lItemData=0 );
void AddDocTemplate( CDocTemplate* pTemplate );
int AddString( LPCTSTR lpszString );
void AddView( CView* pView );
void BeginWaitCursor( );
void CCmdTarget( );
void CCmdUI( );
CDocTemplate ( UINT nIDResource, CRuntimeClass* pDocClass, CRuntimeClass* pFrameClass, CRuntimeClass* pViewClass );
CSingleDocTemplate( UINT nIDResource, CRuntimeClass* pDocClass, CRuntimeClass* pFrameClass, CRuntimeClass* pViewClass );
CWinApp ( LPCTSTR lpszAppName, LPCTSTR lpszHelpName = _T("") );
BOOL ContinueModal( );
void ContinueRouting( );
int CopyRgn( CRgn* pRgnSrc );
BOOL CreateDIBPatternBrush ( HGLOBAL hPackedDIB, UINT nUsage );
BOOL CreateStockObject ( int nIndex );
BOOL CreateSysColorBrush ( int nIndex );
void Cut( );
LRESULT Default( );
void DeflateRect( int x, int y );
int DeleteString( UINT nIndex );
static void PASCAL DeleteTempMap( );
int Dir( UINT attr, LPCTSTR lpszWildCard );
void Draw3dRect( LPCRECT lpRect, COLORREF clrTopLeft, COLORREF clrBottomRight );
void EmptyUndoBuffer( );
void EnableAutomation( );
void EndModalLoop( int nResult );
void EndWaitCursor( );
BOOL ExecuteDlgInit( LPCTSTR lpszResourceName );
void Fail( ); throw( CUserException );
void FillOutsideRect( CDC* pDC, CBrush* pBrush );
void FillSolidRect( LPCRECT lpRect, COLORREF clr );
BOOL FmtLines( BOOL bAddEOL );
int GetBitmap( BITMAP* pBitMap );
int GetCheckedRadioButton( int nIDFirstButton, int nIDLastButton );
LPUNKNOWN GetControlUnknown( );
static const MSG* PASCAL GetCurrentMessage( );
static CBrush* PASCAL GetHalftoneBrush ( CDC* pDC );
LPDISPATCH GetIDispatch( BOOL bAddRef );
int GetLogBrush( LOGBRUSH* pLogBrush );
int GetLogFont( LOGFONT * pLogFont );
int GetLogPen( LOGPEN* pLogPen );
UINT GetProfileInt( LPCTSTR lpszSection, LPCTSTR lpszEntry, int nDefault );
int GetScrollLimit( );
void HideApplication( );
int InitStorage( int nItems, UINT nBytes );
BOOL InsertButtons ( LPTBUTTON lpButtons, UINT wNButtons, int nToolbarBitmapID=-1, int nNImages=0 );
HWND InsertComboBox ( int nWidth );
int InsertString( int nIndex, LPCTSTR lpszString );
BOOL IsModified( );
BOOL IsResultExpected( );
BOOL LimitText( int nMaxChars );
void LineScroll( int nLines, int nChars = 0 );
BOOL LoadOEMBitmap ( UINT nIDBitmap );
void LoadStdProfileSettings( UINT nMaxMRU = _AFX_MRU_COUNT );
CPoint MoveTo( int x, int y );
void NormalizeRect( );
void Offset( int xOffset, int yOffset );
BOOL OnAmbientProperty( COleControlSite* pSite, DISPID dispid, VARIANT* pvar )
afx_msg void OnCancelMode( );
afx_msg void OnChar( UINT nChar, UINT nRepCnt, UINT nFlags );
afx_msg int OnCharToItem( UINT nChar, CListBox* pListBox, UINT nIndex );
afx_msg int OnCompareItem( int nIDCtl, LPCOMPAREITEMSTRUCT lpCompareItemStruct );
afx_msg void OnDeadChar( UINT nChar, UINT nRepCnt, UINT nFlags );
afx_msg void OnDeleteItem( int nIDCtl, LPDELETEITEMSTRUCT lpDeleteItemStruct );
afx_msg void OnDestroy( );
afx_msg void OnDestroyClipboard( );
afx_msg void OnDrawItem( int nIDCtl, LPDRAWITEMSTRUCT lpDrawItemStruct );
afx_msg void OnEnable( BOOL bEnable );
afx_msg BOOL OnEraseBkgnd( CDC* pDC );
afx_msg void OnFileNew( );
afx_msg void OnFileOpen( );
afx_msg void OnFontChange( );
afx_msg void OnHScroll( UINT nSBCode, UINT nPos, CScrollBar* pScrollBar );
afx_msg BOOL OnHelpInfo( HELPINFO* lpHelpInfo );
afx_msg void OnInitMenuPopup ( CMenu* pPopupMenu, UINT nIndex, BOOL bSysMenu );
afx_msg void OnKeyDown( UINT nChar, UINT nRepCnt, UINT nFlags );
afx_msg void OnKeyUp( UINT nChar, UINT nRepCnt, UINT nFlags );
afx_msg void OnLButtonDblClk( UINT nFlags, CPoint point );
afx_msg void OnLButtonDown( UINT nFlags, CPoint point );
afx_msg void OnLButtonUp( UINT nFlags, CPoint point );
afx_msg void OnMeasureItem( int nIDCtl, LPMEASUREITEMSTRUCT lpMeasureItemStruct );
afx_msg LRESULT OnMenuChar ( UINT nChar, UINT nFlags, CMenu* pMenu );
afx_msg void OnMouseMove( UINT nFlags, CPoint point );
afx_msg void OnNcDestroy( );
afx_msg void OnRenderAllFormats( );
afx_msg void OnRenderFormat( UINT nFormat );
afx_msg void OnStyleChanged( int nStyleType, LPSTYLESTRUCT lpStyleStruct );
afx_msg void OnSysChar( UINT nChar, UINT nRepCnt, UINT nFlags );
afx_msg void OnSysCommand( UINT nID, LPARAM lParam );
afx_msg void OnSysDeadChar( UINT nChar, UINT nRepCnt, UINT nFlags );
afx_msg void OnSysKeyDown( UINT nChar, UINT nRepCnt, UINT nFlags );
afx_msg void OnSysKeyUp( UINT nChar, UINT nRepCnt, UINT nFlags );
protafx_msg int OnVKeyToItem( UINT nKey, CListBox* pListBox, UINT nIndex );
afx_msg void OnVScroll( UINT nSBCode, UINT nPos, CScrollBar* pScrollBar );
afx_msg void OnWinIniChange ( LPCTSTR lpszSection );
afx_msg void OnWindowPosChanged( WINDOWPOS* lpwndpos );
void ParseCommandLine( CCommandLineInfo& rCmdInfo );
void Paste( );
HWND PrepareCtrl( int nIDC ); throw( CNotSupportedException );
HWND PrepareEditCtrl( int nIDC ); throw( CNotSupportedException );
BOOL ProcessShellCommand( CCommandLineInfo& rCmdInfo );
BOOL ReflectChildNotify( UINT message, WPARAM wParam, LPARAM lParam, LRESULT* pResult );
void RemoveView( CView* pView );
void ReplaceSel( LPCTSTR lpszNewText );
void ResetContent( );
void RestoreWaitCursor( );
int RunModalLoop( DWORD dwFlags );
void ScrollToPosition( POINT pt );
int SelItemRange( BOOL bSelect, int nFirstItem, int nLastItem );
int SelectString( int nStartAfter, LPCTSTR lpszString );
void SetAnchorIndex( int nIndex );
HBITMAP SetBitmap( HBITMAP hBitmap );
void SetCheck( int nCheck );
void SetColumnWidth( int cxWidth );
int SetComboCurSel ( int nSelect );
int SetCurSel( int nSelect );
void SetDefID( UINT nID );
void SetDialogBkColor( COLORREF clrCtlBk = RGB(192, 192, 192), COLORREF clrCtlText = RGB(0, 0, 0) );
int SetDroppedWidth( UINT nWidth );
BOOL SetEditSel( int nStartChar, int nEndChar );
void SetHelpID( UINT nIDR );
void SetHorizontalExtent( UINT nExtent );
int SetItemDataPtr( int nIndex, void* pData );
int SetItemHeight( int nIndex, UINT cyItemHeight );
void SetLimitText( UINT nMax );
void SetMargins( UINT nLeft, UINT nRight );
void SetRegistryKey( LPCTSTR lpszRegistryKey );
void SetScaleToFitSize( SIZE sizeTotal );
void SetScrollSizes( int nMapMode, SIZE sizeTotal, const SIZE& sizePage = sizeDefault, const SIZE& sizeLine = sizeDefault );
void SetTabStops( );
int SetTopIndex( int nIndex );
void ShowOwnedWindows( BOOL bShow );
BOOL Undo( );
void UpdateDialogControls( CCmdTarget* pTarget, BOOL bDisableIfNoHndler );
BOOL WriteProfileInt( LPCTSTR lpszSection, LPCTSTR lpszEntry, int nValue );
BOOL WriteProfileString( LPCTSTR lpszSection, LPCTSTR lpszEntry, LPCTSTR lpszValue );

#endif /* _AFXWIN_ */
