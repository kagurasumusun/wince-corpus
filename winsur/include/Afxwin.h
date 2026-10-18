/* Afxwin.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 0 declarations, 1 outlines, 0 base types, 0 extra macros, 123 extra decls
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
BOOL AddAdornments(DWORD dwflags);
BOOL AddBitmap(int nToolbarBitmapID, int nNImages);
#ifdef __cplusplus
BOOL AddComboBoxString (UINT wStringResourceID, long lItemData=0);
#endif /* __cplusplus */
#ifdef __cplusplus
void AddDocTemplate(CDocTemplate* pTemplate);
#endif /* __cplusplus */
int AddString(LPCTSTR lpszString);
#ifdef __cplusplus
void AddView(CView* pView);
#endif /* __cplusplus */
void BeginWaitCursor();
#ifdef __cplusplus
void CCmdTarget();
#endif /* __cplusplus */
#ifdef __cplusplus
void CCmdUI();
#endif /* __cplusplus */
BOOL ContinueModal();
void ContinueRouting();
#ifdef __cplusplus
int CopyRgn(CRgn* pRgnSrc);
#endif /* __cplusplus */
BOOL CreateDIBPatternBrush (HGLOBAL hPackedDIB, UINT nUsage);
BOOL CreateStockObject (int nIndex);
BOOL CreateSysColorBrush (int nIndex);
void Cut();
LRESULT Default();
void DeflateRect(int x, int y);
int DeleteString(UINT nIndex);
static void PASCAL DeleteTempMap();
int Dir(UINT attr, LPCTSTR lpszWildCard);
void Draw3dRect(LPCRECT lpRect, COLORREF clrTopLeft, COLORREF clrBottomRight);
void EmptyUndoBuffer();
void EnableAutomation();
void EndModalLoop(int nResult);
void EndWaitCursor();
BOOL ExecuteDlgInit(LPCTSTR lpszResourceName);
void FillSolidRect(LPCRECT lpRect, COLORREF clr);
BOOL FmtLines(BOOL bAddEOL);
int GetBitmap(BITMAP* pBitMap);
int GetCheckedRadioButton(int nIDFirstButton, int nIDLastButton);
static const MSG* PASCAL GetCurrentMessage();
int GetLogBrush(LOGBRUSH* pLogBrush);
int GetLogFont(LOGFONT * pLogFont);
int GetLogPen(LOGPEN* pLogPen);
UINT GetProfileInt(LPCTSTR lpszSection, LPCTSTR lpszEntry, int nDefault);
int GetScrollLimit();
void HideApplication();
int InitStorage(int nItems, UINT nBytes);
HWND InsertComboBox (int nWidth);
int InsertString(int nIndex, LPCTSTR lpszString);
BOOL IsModified();
BOOL IsResultExpected();
BOOL LimitText(int nMaxChars);
#ifdef __cplusplus
void LineScroll(int nLines, int nChars = 0);
#endif /* __cplusplus */
BOOL LoadOEMBitmap (UINT nIDBitmap);
#ifdef __cplusplus
void LoadStdProfileSettings(UINT nMaxMRU = _AFX_MRU_COUNT);
#endif /* __cplusplus */
void NormalizeRect();
void Offset(int xOffset, int yOffset);
afx_msg void OnCancelMode();
afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
#ifdef __cplusplus
afx_msg int OnCharToItem(UINT nChar, CListBox* pListBox, UINT nIndex);
#endif /* __cplusplus */
afx_msg void OnDeadChar(UINT nChar, UINT nRepCnt, UINT nFlags);
afx_msg void OnDestroy();
afx_msg void OnDestroyClipboard();
afx_msg void OnEnable(BOOL bEnable);
afx_msg void OnFileNew();
afx_msg void OnFileOpen();
afx_msg void OnFontChange();
#ifdef __cplusplus
afx_msg void OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
#endif /* __cplusplus */
#ifdef __cplusplus
afx_msg void OnInitMenuPopup (CMenu* pPopupMenu, UINT nIndex, BOOL bSysMenu);
#endif /* __cplusplus */
afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
afx_msg void OnKeyUp(UINT nChar, UINT nRepCnt, UINT nFlags);
#ifdef __cplusplus
afx_msg LRESULT OnMenuChar (UINT nChar, UINT nFlags, CMenu* pMenu);
#endif /* __cplusplus */
afx_msg void OnNcDestroy();
afx_msg void OnRenderAllFormats();
afx_msg void OnRenderFormat(UINT nFormat);
afx_msg void OnSysChar(UINT nChar, UINT nRepCnt, UINT nFlags);
afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
afx_msg void OnSysDeadChar(UINT nChar, UINT nRepCnt, UINT nFlags);
afx_msg void OnSysKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
afx_msg void OnSysKeyUp(UINT nChar, UINT nRepCnt, UINT nFlags);
#ifdef __cplusplus
protafx_msg int OnVKeyToItem(UINT nKey, CListBox* pListBox, UINT nIndex);
#endif /* __cplusplus */
#ifdef __cplusplus
afx_msg void OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
#endif /* __cplusplus */
afx_msg void OnWinIniChange (LPCTSTR lpszSection);
#ifdef __cplusplus
void ParseCommandLine(CCommandLineInfo& rCmdInfo);
#endif /* __cplusplus */
void Paste();
#ifdef __cplusplus
BOOL ProcessShellCommand(CCommandLineInfo& rCmdInfo);
#endif /* __cplusplus */
BOOL ReflectChildNotify(UINT message, WPARAM wParam, LPARAM lParam, LRESULT* pResult);
#ifdef __cplusplus
void RemoveView(CView* pView);
#endif /* __cplusplus */
void ReplaceSel(LPCTSTR lpszNewText);
void ResetContent();
void RestoreWaitCursor();
int RunModalLoop(DWORD dwFlags);
void ScrollToPosition(POINT pt);
int SelItemRange(BOOL bSelect, int nFirstItem, int nLastItem);
int SelectString(int nStartAfter, LPCTSTR lpszString);
void SetAnchorIndex(int nIndex);
HBITMAP SetBitmap(HBITMAP hBitmap);
void SetCheck(int nCheck);
void SetColumnWidth(int cxWidth);
int SetComboCurSel (int nSelect);
int SetCurSel(int nSelect);
void SetDefID(UINT nID);
int SetDroppedWidth(UINT nWidth);
BOOL SetEditSel(int nStartChar, int nEndChar);
void SetHelpID(UINT nIDR);
void SetHorizontalExtent(UINT nExtent);
int SetItemDataPtr(int nIndex, void* pData);
int SetItemHeight(int nIndex, UINT cyItemHeight);
void SetLimitText(UINT nMax);
void SetMargins(UINT nLeft, UINT nRight);
void SetRegistryKey(LPCTSTR lpszRegistryKey);
void SetScaleToFitSize(SIZE sizeTotal);
void SetTabStops();
int SetTopIndex(int nIndex);
void ShowOwnedWindows(BOOL bShow);
BOOL Undo();
#ifdef __cplusplus
void UpdateDialogControls(CCmdTarget* pTarget, BOOL bDisableIfNoHndler);
#endif /* __cplusplus */
BOOL WriteProfileInt(LPCTSTR lpszSection, LPCTSTR lpszEntry, int nValue);
BOOL WriteProfileString(LPCTSTR lpszSection, LPCTSTR lpszEntry, LPCTSTR lpszValue);

#endif /* _AFXWIN_ */
