/* Msgqueue.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 2 constants, 9 declarations, 0 outlines, 0 base types, 0 extra macros, 3 extra decls
 */
#ifndef _MSGQUEUE_
#define _MSGQUEUE_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define MSGQUEUE_ALLOW_BROKEN 2
#define MSGQUEUE_NOPRECOMMIT 1

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* MSGQUEUEINFO  [typedef; ce-only; CE 5.0..699] */
typedef MSGQUEUEINFO{
 DWORD dwSize;
 DWORD dwFlags;
 DWORD dwMaxMessages;
 DWORD cbMaxMessage;
 DWORD dwCurrentMessages;
 DWORD dwMaxQueueMessages;
 WORD wNumReaders;
 WORD wNumWriters;
} MSGQUEUEINFO, *PMSGQUEUEINFO, FAR* LPMSGQUEUEINFO;

/* MSGQUEUEOPTIONS  [typedef; ce-only; CE 5.0..699] */
typedef MSGQUEUEOPTIONS_OS{
 DWORD dwSize;
 DWORD dwFlags;
 DWORD dwMaxMessages;
 DWORD cbMaxMessage;
 BOOL bReadAccess;
} MSGQUEUEOPTIONS, FAR* LPMSGQUEUEOPTIONS, *PMSGQUEUEOPTIONS;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* CloseMsgQueue  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
BOOL CloseMsgQueue(
 HANDLE hMsgQ
);

/* CreateMsgQueue  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
HANDLE CreateMsgQueue(
 LPCWSTR lpszName,
 LPMSGQUEUEOPTIONS lpOptions
);

/* GetMsgQueueInfo  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
BOOL GetMsgQueueInfo(
 HANDLE hMsgQ,
 LPMSGQUEUEINFO lpInfo
);

/* OpenMsgQueue  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
HANDLE OpenMsgQueue(
 HANDLE hSrcProc,
 HANDLE hMsgQ,
 LPMSGQUEUEOPTIONS lpOptions
);

/* ReadMsgQueue  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
BOOL ReadMsgQueue(
 HANDLE hMsgQ,
 LPVOID lpBuffer,
 DWORD cbBufferSize,
 LPDWORD lpNumberOfBytesRead,
 DWORD dwTimeout,
 DWORD* pdwFlags
);

/* WriteMsgQueue  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
BOOL WriteMsgQueue(
 HANDLE hMsgQ,
 LPVOID lpBuffer,
 DWORD cbDataSize,
 DWORD dwTimeout,
 DWORD dwFlags
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* ReadMsgQueueEx  [function; ce-only; CE 6.0..699; coredll.lib] */
BOOL ReadMsgQueueEx(
 HANDLE hMsgQ, 
 LPVOID lpBuffer,
 DWORD cbBufferSize,
 LPDWORD lpNumberOfBytesRead,
 DWORD dwTimeout,
 DWORD *pdwFlags,
 PHANDLE phTok
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* typedef */
typedef MSGQUEUEINFO{DWORDdwSize;
typedef MSGQUEUEINFO{DWORDdwSize;DWORDdwFlags;DWORDdwMaxMessages;DWORDcbMaxMessage;DWORDdwCurrentMessages;DWORDdwMaxQueueMessages;WORDwNumReaders;WORDwNumWriters;}MSGQUEUEINFO, *PMSGQUEUEINFO, FAR* LPMSGQUEUEINFO;
typedef MSGQUEUEOPTIONS_OS{DWORDdwSize;DWORDdwFlags;DWORDdwMaxMessages;DWORDcbMaxMessage;BOOLbReadAccess;} MSGQUEUEOPTIONS, FAR* LPMSGQUEUEOPTIONS, *PMSGQUEUEOPTIONS;

#endif /* _MSGQUEUE_ */
