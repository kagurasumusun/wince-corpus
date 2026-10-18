/* Msgstore.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 32 declarations, 1 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _MSGSTORE_
#define _MSGSTORE_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* SERVICE  [typedef; ce-only; heuristic-prefix] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* MailAtt  [struct; ce-only] */
#ifndef __WINCE_DEFINED_MAILATT_S
#define __WINCE_DEFINED_MAILATT_S
#ifndef __WINCE_DEFINED_MAILATT
#define __WINCE_DEFINED_MAILATT
typedef struct MailAtt_s {
 UINT uiAttachmentNumber;
 DWORD dwFlags;
 ULONG ulCharacterPosition;
 ULONG ulSize;
 LPWSTR szOriginalName;
 LPWSTR szLocalName;
} MailAtt, *lpMailAtt;
#endif /* __WINCE_DEFINED_MAILATT */
#endif /* __WINCE_DEFINED_MAILATT_S */

/* MailAttArray  [struct; ce-only] */
#ifndef __WINCE_DEFINED_MAILATTARRAY_S
#define __WINCE_DEFINED_MAILATTARRAY_S
#ifndef __WINCE_DEFINED_MAILATTARRAY
#define __WINCE_DEFINED_MAILATTARRAY
typedef struct MailAttArray_s {
 DWORD dwFlags;
 UINT uiAttCount;
 lpMailAtt AttArray;
} MailAttArray, *lpMailAttArray;
#endif /* __WINCE_DEFINED_MAILATTARRAY */
#endif /* __WINCE_DEFINED_MAILATTARRAY_S */

/* MailMsg  [struct, typedef; ce-only] */
#ifndef __WINCE_DEFINED_MAILMSG
#define __WINCE_DEFINED_MAILMSG
typedef struct MailMsg {
 DWORD dwMsgId;
 DWORD dwFlags;
 DWORD dwMsgLen;
 WORD wBodyLen;
 FILETIME ftDate;
 LPWSTR szSvcId;
 LPWSTR szSvcNam;
 WCHAR *pwcHeaders;
 LPWSTR szBody;
 CEOID oid;
 HANDLE hHeap
} MailMsg;
#endif /* __WINCE_DEFINED_MAILMSG */
#ifndef __WINCE_DEFINED_PMAILMSG
#define __WINCE_DEFINED_PMAILMSG
typedef MailMsg *PMailMsg, *LPMailMsg;
#endif /* __WINCE_DEFINED_PMAILMSG */

/* MAILSORTFIELD  [enum; ce-only] */
#ifndef __WINCE_DEFINED_MAILSORTFIELD
#define __WINCE_DEFINED_MAILSORTFIELD
typedef enum {
 MAIL_SORT_FROM,
 MAIL_SORT_SUBJ,
 MAIL_SORT_DATE,
 MAIL_SORT_SIZE
} MAILSORTFIELD;
#endif /* __WINCE_DEFINED_MAILSORTFIELD */
#ifndef __WINCE_DEFINED_PMAILSORTFIELD
#define __WINCE_DEFINED_PMAILSORTFIELD
typedef MAILSORTFIELD *PMAILSORTFIELD, *LPMAILSORTFIELD;
#endif /* __WINCE_DEFINED_PMAILSORTFIELD */

/* MAILSORTINFO  [struct; ce-only] */
#ifndef __WINCE_DEFINED__MAILSORTINFO
#define __WINCE_DEFINED__MAILSORTINFO
#ifndef __WINCE_DEFINED_MAILSORTINFO
#define __WINCE_DEFINED_MAILSORTINFO
#ifndef __WINCE_DEFINED_PMAILSORTINFO
#define __WINCE_DEFINED_PMAILSORTINFO
typedef struct _MAILSORTINFO {
 MAILSORTFIELD iSort;
 BOOL fAscending;
 int cMsgs;
} MAILSORTINFO, *PMAILSORTINFO;
#endif /* __WINCE_DEFINED_PMAILSORTINFO */
#endif /* __WINCE_DEFINED_MAILSORTINFO */
#endif /* __WINCE_DEFINED__MAILSORTINFO */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE < 0x200) || (_WIN32_WCE >= 0x211 && _WIN32_WCE < 0x213)) /* CE 1.0..199, 2.11..2.12 */

/* MailClose  [function; ce-only; CE 1.0..199, 2.11..2.12] */
BOOL MailClose (HANDLE hMail);

/* MailDelete  [function; ce-only; CE 1.0..199, 2.11..2.12] */
BOOL MailDelete (HANDLE hMail, MailMsg* pmm);

/* MailDeleteAttachment  [function; ce-only; CE 1.0..199, 2.11..2.12] */
BOOL MailDeleteAttachment (HANDLE hMail, MailMsg * pmm,
MailAtt * pma, BOOL fFullDelete);

/* MailError  [function; ce-only; CE 1.0..199, 2.11..2.12] */
int MailError (HANDLE hMail);

/* MailErrorMsg  [function; ce-only; CE 1.0..199, 2.11..2.12] */
int MailErrorMsg (HANDLE hMail, LPWSTR szBuffer, int iBuffLen,
int* piSrcLine);

/* MailFirst  [function; ce-only; CE 1.0..199, 2.11..2.12] */
BOOL MailFirst (HANDLE hMail, MailMsg* pmm);

/* MailFree  [function; ce-only; CE 1.0..199, 2.11..2.12] */
BOOL MailFree (MailMsg* pmm);

/* MailGet  [function; ce-only; CE 1.0..199, 2.11..2.12] */
BOOL MailGet (HANDLE hMail, MailMsg* pmm);

/* MailGetAttachment  [function; ce-only; CE 1.0..199, 2.11..2.12] */
int MailGetAttachment (HANDLE hMail, MailMsg * pmm, MailAtt * pma);

/* MailGetField  [function; ce-only; CE 1.0..199, 2.11..2.12] */
LPWSTR MailGetField (MailMsg* pmm, LPWSTR szName,
BOOL fGetName);

/* MailGetFolderId  [function; ce-only; CE 1.0..199, 2.11..2.12] */
BOOL MailGetFolderId (HANDLE hMail, BYTE* pbId, LPWSTR szName);

/* MailGetFolderName  [function; ce-only; CE 1.0..199, 2.11..2.12] */
BOOL MailGetFolderName (HANDLE hMail, int* piId, int* piLen, LPWSTR szName;

/* MailGetSort  [function; ce-only; CE 1.0..199, 2.11..2.12] */
BOOL MailSetSort (HANDLE hMail, PMAILSORTINFO pInfo);

/* MailGetSvcId  [function; ce-only; CE 1.0..199, 2.11..2.12] */
BOOL MailGetSvcId (HANDLE hMail, MailMsg* pmm);

/* MailHeaderLen  [function; ce-only; CE 1.0..199, 2.11..2.12] */
DWORD MailHeaderLen (MailMsg* pmm);

/* MailNext  [function; ce-only; CE 1.0..199, 2.11..2.12] */
BOOL MailNext (HANDLE hMail, MailMsg* pmm);

/* MailOpen  [function; ce-only; CE 1.0..199, 2.11..2.12] */
BOOL MailOpen (HANDLE * phNewMail, BOOL fAllowCreate);

/* MailOpenNotify  [function; ce-only; CE 1.0..199, 2.11..2.12] */
BOOL MailOpenNotify (HANDLE * phMail, BOOL fAllowCreate,
HWND hwndNotify);

/* MailPut  [function; ce-only; CE 1.0..199, 2.11..2.12] */
BOOL MailPut (HANDLE hMail, MailMsg*pmm);

/* MailPutAttachment  [function; ce-only; CE 1.0..199, 2.11..2.12] */
BOOL MailPutAttachment (HANDLE hMail, MailMsg * pmm,
MailAtt * pma);

/* MailPutFolder  [function; ce-only; CE 1.0..199, 2.11..2.12] */
BOOL MailPutFolder (HANDLE hMail, BYTE bId, LPWSTR szName);

/* MailRequestAttachment  [function; ce-only; CE 1.0..199, 2.11..2.12] */
BOOL MailRequestAttachment (HANDLE hMail, MailMsg * pmm,
MailAtt * pma, BOOL bRetrieve);

/* MailSetField  [function; ce-only; CE 1.0..199, 2.11..2.12] */
BOOL MailSetField (MailMsg*pmm, LPWSTR szName, LPCWSTR szVal);

/* MailSetSort  [function; ce-only; CE 1.0..199, 2.11..2.12] */
BOOL MailSetSort (HANDLE hMail, MAILSORTFIELD iSort,
BOOL fAscending);

/* MailUpdate  [function; ce-only; CE 1.0..199, 2.11..2.12] */
BOOL MailUpdate (HANDLE hMail, MailMsg* pmm, BOOL fDoAll);
#endif /* _WIN32_WCE */

#endif /* _MSGSTORE_ */
