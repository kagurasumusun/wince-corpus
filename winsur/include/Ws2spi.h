/* Ws2spi.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 2 constants, 57 declarations, 0 outlines, 0 base types, 0 extra macros, 5 extra decls
 */
#ifndef _WS2SPI_
#define _WS2SPI_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define WSPAPI WSAAPI
#define WSPDESCRIPTION_LEN 255

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* WSCDeinstallProvider  [function; shared; CE 4.0..699; Ws2.dll, Ws2.lib] */
int WSCDeinstallProvider(
 LPGUID lpProviderId,
 LPINT lpErrno 
);

/* WSCEnumProtocols  [function; shared; CE 4.0..699; Ws2.dll, Ws2.lib] */
int WSCEnumProtocols(
 LPINT lpiProtocols,
 LPWSAPROTOCOL_INFOW lpProtocolBuffer,
 LPDWORD lpdwBufferLength,
 LPINT lpErrno 
);

/* WSCInstallProvider  [function; shared; CE 4.0..699; Ws2.dll, Ws2.lib] */
int WSCInstallProvider(
 const LPGUID lpProviderId,
 const LPWSTR lpszProviderDllPath,
 const LPWSAPROTOCOL_INFOW lpProtocolInfoList,
 DWORD dwNumberOfEntries,
 LPINT lpErrno 
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* NSPCleanup  [function; ce-only; CE 5.0..699; Ws2.lib] */
int NSPCleanup(
 LPGUID lpProviderId
);

/* NSPGetServiceClassInfo  [function; ce-only; CE 5.0..699; Ws2.lib] */
int NSPGetServiceClassInfo(
 LPGUID lpProviderId,
 LPDWORD lpdwBufSize,
 LPWSASERVICECLASSINFOW lpServiceClassInfo 
);

/* NSPInstallServiceClass  [function; ce-only; CE 5.0..699; Ws2.lib] */
int NSPInstallServiceClass(
 LPGUID lpProviderId,
 LPWSASERVICECLASSINFOW lpServiceClassInfo 
);

/* NSPLookupServiceBegin  [function; ce-only; CE 5.0..699; Ws2.lib] */
int NSPLookupServiceBegin(
 LPGUID lpProviderId,
 LPWSAQUERYSETW lpqsRestrictions,
 LPWSASERVICECLASSINFOW lpServiceClassInfo,
 DWORD dwControlFlags,
 LPHANDLE lphLookup 
);

/* NSPLookupServiceEnd  [function; ce-only; CE 5.0..699; Ws2.lib] */
int NSPLookupServiceEnd(
 HANDLE hLookup
);

/* NSPLookupServiceNext  [function; ce-only; CE 5.0..699; Ws2.lib] */
int NSPAPI WSALookupServiceNext(
 HANDLE hLookup,
 DWORD dwControlFlags,
 LPDWORD lpdwBufferLength,
 LPWSAQUERYSET lpqsResults 
);

/* NSPRemoveServiceClass  [function; ce-only; CE 5.0..699; Ws2.lib] */
int NSPRemoveServiceClass(
 LPGUID lpProviderId,
 LPGUID lpServiceClassId 
);

/* NSPSetService  [function; ce-only; CE 5.0..699; Ws2.lib] */
int NSPSetService(
 LPGUID lpProviderId,
 LPWSASERVICECLASSINFOW lpServiceClassInfo,
 LPWSAQUERYSETW lpqsRegInfo,
 WSAESETSERVICEOP essOperation,
 DWORD dwControlFlags 
);

/* NSPStartup  [function; shared; CE 5.0..699; Ws2.lib] */
int NSPStartup(
 LPGUID lpProviderId,
 LPNSP_ROUTINE lpnspRoutines 
);

/* WPUCloseEvent  [function; shared; CE 5.0..699; Ws2.lib] */
BOOL WPUCloseEvent(
 WSAEVENT hEvent,
 LPINT lpErrno 
);

/* WPUCloseSocketHandle  [function; shared; CE 5.0..699; Ws2.lib] */
int WPUCloseSocketHandle(
 SOCKET s,
 LPINT lpErrno 
);

/* WPUCompleteOverlappedRequest  [function; shared; CE 5.0..699; Ws2.lib] */
int WSPAPI WPUCompleteOverlappedRequest(
 SOCKET s,
 LPWSAOVERLAPPED lpOverlapped,
 DWORD dwError,
 DWORD cbTransferred,
 LPINT lpErrno
);

/* WPUCreateEvent  [function; shared; CE 5.0..699; Ws2.lib] */
WSAEVENT WPUCreateEvent(
 LPINT lpErrno 
);

/* WPUCreateSocketHandle  [function; shared; CE 5.0..699; Ws2.lib] */
SOCKET WPUCreateSocketHandle(
 DWORD dwCatalogEntryId,
 DWORD_PTR dwContext,
 LPINT lpErrno 
);

/* WPUFDIsSet  [function; shared; CE 5.0..699; Ws2.lib] */
int WPUFDIsSet(
 SOCKET s,
 fd_set FAR* set 
);

/* WPUGetProviderPath  [function; shared; CE 5.0..699; Ws2.lib] */
int WPUGetProviderPath(
 LPGUID lpProviderId,
 LPWSTR lpszProviderDllPath,
 LPINT lpProviderDllPathLen,
 LPINT lpErrno 
);

/* WPUQueryBlockingCallback  [function; shared; CE 5.0..699; Ws2.lib] */
int WPUQueryBlockingCallback(
 DWORD dwCatalogEntryId,
 LPBLOCKINGCALLBACK FAR* lplpfnCallback,
 PDWORD_PTR lpdwContext,
 LPINT lpErrno 
);

/* WPUQuerySocketHandleContext  [function; shared; CE 5.0..699; Ws2.lib] */
int WPUQuerySocketHandleContext(
 SOCKET s,
 PDWORD_PTR lpContext,
 LPINT lpErrno 
);

/* WPUResetEvent  [function; shared; CE 5.0..699; Ws2.lib] */
BOOL WPUResetEvent(
 WSAEVENT hEvent,
 LPINT lpErrno 
);

/* WPUSetEvent  [function; shared; CE 5.0..699; Ws2.lib] */
BOOL WPUSetEvent(
 WSAEVENT hEvent,
 LPINT lpErrno 
);

/* WSCInstallNameSpace  [function; shared; CE 5.0..699; Ws2.lib] */
int WSCInstallNameSpace(
 LPWSTR lpszIdentifier,
 LPWSTR lpszPathName,
 DWORD dwNameSpace,
 DWORD dwVersion,
 LPGUID lpProviderId 
);

/* WSCUnInstallNameSpace  [function; shared; CE 5.0..699; Ws2.lib] */
int WSCUninstallNameSpace(
 LPGUID lpProviderId 
);

/* WSPAddressToString  [function; ce-only; CE 5.0..699; Ws2.lib] */
int WSPAddressToString(
 LPSOCKADDR lpsaAddress,
 DWORD dwAddressLength,
 LPWSAPROTOCOL_INFOW lpProtocolInfo,
 LPWSTR lpszAddressString,
 LPDWORD lpdwAddressStringLength,
 LPINT lpErrno 
);

/* WSPAsyncSelect  [function; ce-only; CE 5.0..699; Ws2.lib] */
int WSPAsyncSelect(
 SOCKET s,
 HWND hWnd,
 unsigned int wMsg,
 long lEvent,
 LPINT lpErrno 
);

/* WSPCleanup  [function; ce-only; CE 5.0..699; Ws2.lib] */
int WSPCleanup(
 LPINT lpErrno 
);

/* WSPCloseSocket  [function; ce-only; CE 5.0..699; Ws2.lib] */
int WSPCloseSocket(
 SOCKET s,
 LPINT lpErrno 
);

/* WSPDuplicateSocket  [function; ce-only; CE 5.0..699; Ws2.lib] */
int WSPDuplicateSocket(
 SOCKET s,
 DWORD dwProcessId,
 LPWSAPROTOCOL_INFOW lpProtocolInfo,
 LPINT lpErrno 
);

/* WSPEnumNetworkEvents  [function; ce-only; CE 5.0..699; Ws2.lib] */
int WSPEnumNetworkEvents(
 SOCKET s,
 WSAEVENT hEventObject,
 LPWSANETWORKEVENTS lpNetworkEvents,
 LPINT lpErrno 
);

/* WSPEventSelect  [function; ce-only; CE 5.0..699; Ws2.lib] */
int WSPEventSelect(
 SOCKET s,
 WSAEVENT hEventObject,
 long lNetworkEvents,
 LPINT lpErrno 
);

/* WSPGetOverlappedResult  [function; ce-only; CE 5.0..699; Ws2.lib] */
BOOL WSPGetOverlappedResult(
 SOCKET s,
 LPWSAOVERLAPPED lpOverlapped,
 LPDWORD lpcbTransfer,
 BOOL fWait,
 LPDWORD lpdwFlags,
 LPINT lpErrno 
);

/* WSPGetSockOpt  [function; ce-only; CE 5.0..699; Ws2.lib] */
int WSPGetSockOpt(
 SOCKET s,
 int level,
 int optname,
 char FAR* optval,
 LPINT optlen,
 LPINT lpErrno 
);

/* WSPIoctl  [function; ce-only; CE 5.0..699; Ws2.lib] */
int WSPIoctl(
 SOCKET s,
 DWORD dwIoControlCode,
 LPVOID lpvInBuffer,
 DWORD cbInBuffer,
 LPVOID lpvOutBuffer,
 DWORD cbOutBuffer,
 LPDWORD lpcbBytesReturned,
 LPWSAOVERLAPPED lpOverlapped,
 LPWSAOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine,
 LPWSATHREADID lpThreadId,
 LPINT lpErrno 
);

/* WSPListen  [function; ce-only; CE 5.0..699; Ws2.lib] */
int WSPListen(
 SOCKET s,
 int backlog,
 LPINT lpErrno 
);

/* WSPRecv  [function; ce-only; CE 5.0..699; Ws2.lib] */
int WSPRecv(
 SOCKET s,
 LPWSABUF lpBuffers,
 DWORD dwBufferCount,
 LPDWORD lpNumberOfBytesRecvd,
 LPDWORD lpFlags,
 LPWSAOVERLAPPED lpOverlapped,
 LPWSAOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine,
 LPWSATHREADID lpThreadId,
 LPINT lpErrno 
);

/* WSPRecvDisconnect  [function; ce-only; CE 5.0..699; Ws2.lib] */
int WSPRecvDisconnect(
 SOCKET s,
 LPWSABUF lpInboundDisconnectData,
 LPINT lpErrno 
);

/* WSPSend  [function; ce-only; CE 5.0..699; Ws2.lib] */
int WSPSend(
 SOCKET s,
 LPWSABUF lpBuffers,
 DWORD dwBufferCount,
 LPDWORD lpNumberOfBytesSent,
 DWORD dwFlags,
 LPWSAOVERLAPPED lpOverlapped,
 LPWSAOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine,
 LPWSATHREADID lpThreadId,
 LPINT lpErrno 
);

/* WSPSendDisconnect  [function; ce-only; CE 5.0..699; Ws2.lib] */
int WSPSendDisconnect(
 SOCKET s,
 LPWSABUF lpOutboundDisconnectData,
 LPINT lpErrno 
);

/* WSPSetSockOpt  [function; ce-only; CE 5.0..699; Ws2.lib] */
int WSPSetSockOpt(
 SOCKET s,
 int level,
 int optname,
 const char FAR* optval,
 int optlen,
 LPINT lpErrno 
);

/* WSPShutdown  [function; ce-only; CE 5.0..699; Ws2.lib] */
int WSPShutdown(
 SOCKET s,
 int how,
 LPINT lpErrno 
);

/* WSPSocket  [function; ce-only; CE 5.0..699; Ws2.lib] */
SOCKET WSPSocket(
 int af,
 int type,
 int protocol,
 LPWSAPROTOCOL_INFOW lpProtocolInfo,
 GROUP g,
 DWORD dwFlags,
 LPINT lpErrno 
);

/* WSPStartup  [function; shared; CE 5.0..699; Ws2.lib] */
int WSPStartup(
 WORD wVersionRequested,
 LPWSPDATAW lpWSPData, 
 LPWSAPROTOCOL_INFOW lpProtocolInfo,
 WSPUPCALLTABLE UpcallTable,
 LPWSPPROC_TABLE lpProcTable 
);

/* WSPStringToAddress  [function; ce-only; CE 5.0..699; Ws2.lib] */
int WSPStringToAddress (
 LPWSTR AddressString,
 INT AddressFamily,
 LPWSAPROTOCOL_INFOW lpProtocolInfo,
 LPSOCKADDR lpAddress,
 LPINT lpAddressLength,
 LPINT lpErrno 
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct _NSP_ROUTINE { DWORDcbSize;DWORDdwMajorVersion;DWORDdwMinorVersion;INT (*NSPCleanup);INT (*NSPLookupServiceBegin);INT (*NSPLookupServiceNext);INT (*NSPLookupServiceEnd);INT (*NSPSetService);INT (*NSPInstallServiceClass);INT (*NSPRemoveServiceClass);INT (*NSPGetServiceClassInfo);} NSP_ROUTINE, *PNSP_ROUTINE, *LPNSP_ROUTINE;
typedef struct _WSATHREADID {HANDLE ThreadHandle;DWORD Reserved;} WSATHREADID, *LPWSATHREADID;
typedef struct WSPData { WORD wVersion; WORD wHighVersion; WCHAR szDescription[WSPDESCRIPTION_LEN+1];} WSPDATA, FAR * LPWSPDATA;
SOCKET WSPAccept(SOCKET s,struct sockaddr FAR* addr,LPINT addrlen,LPCONDITIONPROC lpfnCondition,DWORD dwCallbackData,LPINT lpErrno );

/* function */
int WSCUninstallNameSpace(LPGUID lpProviderId);

#endif /* _WS2SPI_ */
