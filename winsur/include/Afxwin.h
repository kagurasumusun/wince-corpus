/* Afxwin.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 0 declarations, 1 outlines, 0 base types, 0 extra macros, 298 extra decls
 */
#ifndef _AFXWIN_
#define _AFXWIN_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* CDocTemplate::GetDocString  [enum; ce-only] */

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
