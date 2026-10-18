/* Afxwin.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 0 declarations, 1 outlines, 0 base types, 0 extra macros, 94 extra decls
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
BOOL CheckMenuRadioItem(UINT nIDFirst, UINT nIDLast, UINT nIDItem, UINT nFlags);
void CloseAllDocuments(BOOL bEndSession);
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
#ifdef __cplusplus
void InitialUpdateFrame(CDocument* pDoc, BOOL bMakeVisible);
#endif /* __cplusplus */
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
void SetHandle(HLOCAL hBuffer);
void SetHelpID(UINT nIDR);
void SetHorizontalExtent(UINT nExtent);
int SetItemDataPtr(int nIndex, void* pData);
int SetItemHeight(int nIndex, UINT cyItemHeight);
void SetLimitText(UINT nMax);
void SetMargins(UINT nLeft, UINT nRight);
void SetPasswordChar(TCHAR ch);
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
