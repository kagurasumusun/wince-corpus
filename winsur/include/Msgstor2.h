/* Msgstor2.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 32 declarations, 0 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _MSGSTOR2_
#define _MSGSTOR2_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* TransportCheckForNewMailInfo  [struct; ce-only] */
typedef struct TransportCheckForNewMailInfo{
 TransportFolderList* ptfl;
 BOOL fFree;
 HANDLE hTerminateEvent;
 DWORD dwReserverd;
} TransportCheckForNewMailInfo, *lpTransportCheckForNewMailInfo;

/* TransportFolderList  [struct; ce-only] */
typedef struct TransportFolderList_s {
 UINT uiCount;
 lpTransportFolderInfo FolderArray[];
} TransportFolderList, *lpTransportFolderList;

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213)) /* CE 2.11..2.12 */

/* MailFirstEx  [function; ce-only; CE 2.11..2.12] */
BOOL MailFirstEx (HANDLE hMail, MailMsg* pmm, FID* pfid, 
FID* pfidTarget);

/* MailGetEx  [function; ce-only; CE 2.11..2.12] */
BOOL MailGetEx (HANDLE hMail, MailMsg* pmm, FID* pfid, 
FID* pfidTarget);

/* MailGetFolderIdEx  [function; ce-only; CE 2.11..2.12] */
BOOL MailGetFolderIdEx (HANDLE hMail, FID fidParent, FID* pfid, LPWSTR szName);

/* MailGetFolderNameEx  [function; ce-only; CE 2.11..2.12] */
BOOL MailGetFolderNameEx (HANDLE hMail, FID* pfId, int* piLen 
LPWSTR szName);

/* MailGetSvcIdEx  [function; ce-only; CE 2.11..2.12] */
BOOL MailGetSvcIdEx (HANDLE hMail, MailMsg* pmm, FID* pfid);

/* MailNextEx  [function; ce-only; CE 2.11..2.12] */
BOOL MailNextEx (HANDLE hMail, MailMsg* pmm, FID fid, FID fidTarget, 
BOOL fDoAll);

/* MailOpenNotifyEx  [function; ce-only; CE 2.11..2.12] */
BOOL MailOpenNotifyEx (HANDLE * phMail, WORD* pwVersion 
BOOL fAllowCreate, HWND hwndNotify);

/* MailPutEx  [function; ce-only; CE 2.11..2.12] */
BOOL MailPutEx (HANDLE hMail, MailMsg*pmm, FID fid);

/* MailPutFolderEx  [function; ce-only; CE 2.11..2.12] */
BOOL MailPutFolder (HANDLE hMail, FID fidParent, FID fidFolder, 
LPWSTR szName);

/* MailUpdateEx  [function; ce-only; CE 2.11..2.12] */
BOOL MailUpdateEx (HANDLE hMail, MailMsg* pmm, FID fid, 
FID fidTarget, BOOL fDoAll);

/* TransportCancel  [function; ce-only; CE 2.11..2.12] */
BOOL TransportCancel( HANDLE hService);

/* TransportCheckForNewMail  [function; ce-only; CE 2.11..2.12] */
BOOL TransportCheckForNewMail( HANDLE hService, 
CHECKFORNEWMAILCALLBACK pfnCheckNewMailCallback);

/* TransportCopy  [function; ce-only; CE 2.11..2.12] */
BOOL TransportCopy(HANDLE hService, MailMsg *MsgPtr, 
LPWSTR szDestFolderID);

/* TransportCountEx  [function; ce-only; CE 2.11..2.12] */
BOOL TransportCountEx(HANDLE hService, LPWSTR szFolderID, 
WORD *pwNumMsg);

/* TransportDelFolder  [function; ce-only; CE 2.11..2.12] */
BOOL TransportDelFolder(HANDLE hService, LPWSTR szFolderID);

/* TransportDownloadAttachment  [function; ce-only; CE 2.11..2.12] */
Int TransportDownloadAttachment (HANDLE serviceHandle_p, 
MailMsg* mailMessage_p, MailAtt* mailAtt_p)

/* TransportDuplicateHandle  [function; ce-only; CE 2.11..2.12] */
BOOL TransportDuplicateHandle(HANDLE hService, 
HANDLE *phDuplicate);

/* TransportErrorEx  [function; ce-only; CE 2.11..2.12] */
int TransportErrorEx(HANDLE, hService, BOOL *pfCritical);

/* TransportExpunge  [function; ce-only; CE 2.11..2.12] */
BOOL TransportExpunge( HANDLE hService, lpTransportFolderList pFolders);

/* TransportFreeFolderID  [function; ce-only; CE 2.11..2.12] */
BOOL TransportFreeFolderID(HANDLE hService, LPWSTR szFolderID);

/* TransportFreeFolderList  [function; ce-only; CE 2.11..2.12] */
BOOL TransportFreeFolderList(HANDLE hService, 
lpTransportFolderList pFolders);

/* TransportGetFolders  [function; ce-only; CE 2.11..2.12] */
BOOL TransportGetFolders(HANDLE hService, LPWSTR szParentID, 
lpTransportFolderList *ppFolders);

/* TransportGetInboxId  [function; ce-only; CE 2.11..2.12] */
BOOL TransportGetInboxID(HANDLE hService, LPWSTR *pszInboxID);

/* TransportMove  [function; ce-only; CE 2.11..2.12] */
BOOL TransportMove(HANDLE hService, MailMsg *MsgPtr, 
LPWSTR szDestFolderID);

/* TransportPut  [function; ce-only; CE 2.11..2.12] */
BOOL TransportPut(HANDLE hService, LPWSTR szFolderID, 
MailMsg *MsgPtr);

/* TransportPutFolder  [function; ce-only; CE 2.11..2.12] */
BOOL TransportPutFolder(HANDLE hService, LPWSTR szFolderName, 
LPWSTR szParentID, LPWST*pszCreatedID);

/* TransportRecvEx  [function; ce-only; CE 2.11..2.12] */
BOOL TransportRecvEx(HANDLE hService, LPWSTR szFolderID, 
WORD wMsgID, short sNumLines, MailMsg *MsgPtr, 
lpMailAttArray *lplMaa);

/* TransportSetMsgFlags  [function; ce-only; CE 2.11..2.12] */
BOOL TransportSetMsgFlags(HANDLE hService, MailMsg *MsgPtr, DWORD dwFlags, BOOL fValue);

/* TransportUIDsChanged  [function; ce-only; CE 2.11..2.12] */
BOOL TransportUIDsChanged(HANDLE hService, BOOL *pfChanged);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
BOOL TransportGetInboxID(HANDLE hService, LPWSTR *pszInboxID);

#endif /* _MSGSTOR2_ */
