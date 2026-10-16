/* Afxdlgs.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 43 declarations, 0 outlines, 0 base types, 0 extra macros, 33 extra decls
 */
#ifndef _AFXDLGS_
#define _AFXDLGS_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 200 && _WIN32_WCE < 210)) /* CE 2.0..209 */

/* CFileDialog::CFileDialog  [function; ce-only; CE 2.0..209] */
CFileDialog( BOOL bOpenFileDialog, LPCTSTR lpszDefExt = NULL, LPCTSTR lpszFileName = NULL, DWORD dwFlags = OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, LPCTSTR lpszFilter = NULL, CWnd* pParentWnd = NULL );

/* CFileDialog::DoModal  [function; ce-only; CE 2.0..209] */
virtual int DoModal( );

/* CFileDialog::GetReadOnlyPref  [function; ce-only; CE 2.0..209] */
BOOL GetReadOnlyPref( ) const;

/* CFileDialog::OnFileNameChange  [function; ce-only; CE 2.0..209] */
virtual void OnFileNameChange( );

/* CFileDialog::OnFileNameOK  [function; ce-only; CE 2.0..209] */
virtual BOOL OnFileNameOK( );

/* CFileDialog::OnFolderChange  [function; ce-only; CE 2.0..209] */
virtual void OnFolderChange( );

/* CFileDialog::OnInitDone  [function; ce-only; CE 2.0..209] */
virtual void OnInitDone( );

/* CFileDialog::OnLBSelChangedNotify  [function; ce-only; CE 2.0..209] */
virtual void OnLBSelChangedNotify( UINT nIDBox, UINT iCurSel, UINT nCode);

/* CFileDialog::OnShareViolation  [function; ce-only; CE 2.0..209] */
virtual UINT OnShareViolation( LPCTSTR lpszPathName );

/* CFileDialog::OnTypeChange  [function; ce-only; CE 2.0..209] */
virtual void OnTypeChange( );

/* CFindReplaceDialog::Create  [function; ce-only; CE 2.0..209] */
BOOL Create( BOOL bFindDialogOnly, LPCTSTR lpszFindWhat, LPCTSTR lpszReplaceWith = NULL, DWORD dwFlags = FR_DOWN, CWnd* pParentWnd = NULL );

/* CFindReplaceDialog::FindNext  [function; ce-only; CE 2.0..209] */
BOOL FindNext( ) const;

/* CFindReplaceDialog::GetNotifier  [function; ce-only; CE 2.0..209] */
static CFindReplaceDialog* PASCAL GetNotifier( LPARAM lParam );

/* CFindReplaceDialog::IsTerminating  [function; ce-only; CE 2.0..209] */
BOOL IsTerminating( ) const;

/* CFindReplaceDialog::MatchCase  [function; ce-only; CE 2.0..209] */
BOOL MatchCase( ) const;

/* CFindReplaceDialog::MatchWholeWord  [function; ce-only; CE 2.0..209] */
BOOL MatchWholeWord( ) const;

/* CFindReplaceDialog::ReplaceAll  [function; ce-only; CE 2.0..209] */
BOOL ReplaceAll( ) const;

/* CFindReplaceDialog::ReplaceCurrent  [function; ce-only; CE 2.0..209] */
BOOL ReplaceCurrent( ) const;

/* CFindReplaceDialog::SearchDown  [function; ce-only; CE 2.0..209] */
BOOL SearchDown( ) const;

/* CPropertyPage::CancelToClose  [function; ce-only; CE 2.0..209] */
void CancelToClose( );

/* CPropertyPage::Construct  [function; ce-only; CE 2.0..209] */
void Construct( UINT nIDTemplate, UINT nIDCaption = 0 );

/* CPropertyPage::OnApply  [function; ce-only; CE 2.0..209] */
virtual void OnApply( );

/* CPropertyPage::OnCancel  [function; ce-only; CE 2.0..209] */
virtual void OnCancel( );

/* CPropertyPage::OnKillActive  [function; ce-only; CE 2.0..209] */
virtual BOOL OnKillActive( );

/* CPropertyPage::OnOK  [function; ce-only; CE 2.0..209] */
virtual void OnOK( );

/* CPropertyPage::OnQueryCancel  [function; ce-only; CE 2.0..209] */
virtual BOOL OnQueryCancel( );

/* CPropertyPage::OnReset  [function; ce-only; CE 2.0..209] */
virtual void OnReset( );

/* CPropertyPage::OnSetActive  [function; ce-only; CE 2.0..209] */
virtual BOOL OnSetActive( );

/* CPropertyPage::QuerySiblings  [function; ce-only; CE 2.0..209] */
LRESULT QuerySiblings( WPARAM wParam, LPARAM lParam );

/* CPropertyPage::SetModified  [function; ce-only; CE 2.0..209] */
void SetModified( BOOL bChanged = TRUE );

/* CPropertySheet::AddPage  [function; ce-only; CE 2.0..209] */
void AddPage( CPropertyPage *pPage );

/* CPropertySheet::Construct  [function; ce-only; CE 2.0..209] */
void Construct( UINT nIDCaption, CWnd* pParentWnd = NULL, UINT iSelectPage = 0 );

/* CPropertySheet::Create  [function; ce-only; CE 2.0..209] */
BOOL Create( CWnd* pParentWnd = NULL, DWORD dwStyle = WS_SYSMENU | WS_POPUP | WS_CAPTION | DS_MODALFRAME | WS_VISIBLE, DWORD dwExStyle = WS_EX_DLGMODALFRAME );

/* CPropertySheet::DoModal  [function; ce-only; CE 2.0..209] */
virtual int DoModal( );

/* CPropertySheet::EndDialog  [function; ce-only; CE 2.0..209] */
void EndDialog( int nEndID );

/* CPropertySheet::GetActiveIndex  [function; ce-only; CE 2.0..209] */
int GetActiveIndex( ) const;

/* CPropertySheet::GetPage  [function; ce-only; CE 2.0..209] */
CPropertyPage* GetPage( int nPage ) const;

/* CPropertySheet::GetPageCount  [function; ce-only; CE 2.0..209] */
int GetPageCount( );

/* CPropertySheet::GetPageIndex  [function; ce-only; CE 2.0..209] */
int GetPageIndex( CPropertyPage* pPage ) const;

/* CPropertySheet::PressButton  [function; ce-only; CE 2.0..209] */
BOOL PressButton( int nButton );

/* CPropertySheet::RemovePage  [function; ce-only; CE 2.0..209] */
void RemovePage( CPropertyPage *pPage );

/* CPropertySheet::SetActivePage  [function; ce-only; CE 2.0..209] */
BOOL SetActivePage( int nPage );

/* CPropertySheet::SetTitle  [function; ce-only; CE 2.0..209] */
void SetTitle( UINT nStyle, LPCTSTR lpszText );
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
void AddPage( CPropertyPage *pPage );
CFileDialog( BOOL bOpenFileDialog, LPCTSTR lpszDefExt = NULL, LPCTSTR lpszFileName = NULL, DWORD dwFlags = OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, LPCTSTR lpszFilter = NULL, CWnd* pParentWnd = NULL );
void CancelToClose( );
void Construct( UINT nIDTemplate, UINT nIDCaption = 0 );
int GetActiveIndex( ) const;
static CFindReplaceDialog* PASCAL GetNotifier( LPARAM lParam );
CPropertyPage* GetPage( int nPage ) const;
int GetPageCount( );
int GetPageIndex( CPropertyPage* pPage ) const;
BOOL GetReadOnlyPref( ) const;
BOOL IsTerminating( ) const;
BOOL MatchCase( ) const;
BOOL MatchWholeWord( ) const;
virtual void OnApply( );
virtual void OnFileNameChange( );
virtual BOOL OnFileNameOK( );
virtual void OnFolderChange( );
virtual void OnInitDone( );
virtual BOOL OnKillActive( );
virtual void OnLBSelChangedNotify( UINT nIDBox, UINT iCurSel, UINT nCode);
virtual BOOL OnQueryCancel( );
virtual void OnReset( );
virtual BOOL OnSetActive( );
virtual UINT OnShareViolation( LPCTSTR lpszPathName );
virtual void OnTypeChange( );
BOOL PressButton( int nButton );
LRESULT QuerySiblings( WPARAM wParam, LPARAM lParam );
void RemovePage( CPropertyPage *pPage );
BOOL ReplaceAll( ) const;
BOOL ReplaceCurrent( ) const;
BOOL SearchDown( ) const;
BOOL SetActivePage( int nPage );
void SetModified( BOOL bChanged = TRUE );

#endif /* _AFXDLGS_ */
