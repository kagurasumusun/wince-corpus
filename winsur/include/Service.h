/* Service.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 16 constants, 11 declarations, 1 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _SERVICE_
#define _SERVICE_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */
#define SERVICE_INIT_CONFIGURE_CONNECT 0x4
#define SERVICE_INIT_CONFIGURE_NO_CONNECT 0x2
#define SERVICE_INIT_CONFIGURE_PENDING_CONNECT 0x3
#define SERVICE_INIT_NO_CONFIGURE 0x1
#define SERVICE_INIT_STANDALONE 0x02
#define SERVICE_INIT_STARTED 0x00000000
#define SERVICE_INIT_STOPPED 0x00000001
#define SERVICE_LOCKED 0x8
#define SERVICE_NO_INIT 0x0
#define SERVICE_STATE_OFF 0
#define SERVICE_STATE_ON 1
#define SERVICE_STATE_SHUTTING_DOWN 3
#define SERVICE_STATE_STARTING_UP 2
#define SERVICE_STATE_UNINITIALIZED 5
#define SERVICE_STATE_UNKNOWN 0xffffffff
#define SERVICE_STATE_UNLOADING 4
#endif /* _WIN32_WCE */

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* SERVICE  [typedef; ce-only; heuristic-prefix] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* ServicesexeCallbackFunctions  [struct; ce-only; CE 4.0..699] */
typedef struct _ServicesExeCallbackFunctions {
 PFN_SERVICE_SHUTDOWN pfnServiceShutdown;
} ServicesExeCallbackFunctions;
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* ServicesExeCommandLineParams  [struct; ce-only; CE 5.0..699] */
typedef struct _ServicesExeCommandLineParams {
 DWORD dwArgs;
 const WCHAR* ppwszArgs[SERVICES_EXE_MAX_CMD_LINE_OPTIONS];
} ServicesExeCommandLineParams;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* ActivateService  [function; ce-only; CE 4.0..699; Coredll.lib, coredll.lib] */
HANDLE ActivateService(
 LPCWSTR lpszDevKey,
 DWORD dwClientInfo
);

/* DeregisterService  [function; ce-only; CE 4.0..699; Coredll.lib, coredll.lib] */
BOOL DeregisterService(
 HANDLE hDevice
);

/* EnumServices  [function; ce-only; CE 4.0..699; Coredll.lib, coredll.lib] */
BOOL EnumServices(
 PBYTE pBuffer,
 DWORD pdwServiceEntries,
 DWORD pdwBufferLen
);

/* GetServiceHandle  [function; ce-only; CE 4.0..699; Coredll.lib, coredll.lib] */
HANDLE GetServiceHandle(
 LPWSTR szPrefix,
 LPWSTR szDllName,
 DWORD pdwDllBuf
);

/* RegisterService  [function; ce-only; CE 4.0..699; Coredll.lib, coredll.lib] */
HANDLE RegisterService(
 LPCWSTR lpszType,
 DWORD dwIndex,
 LPCWSTR lpszLib,
 DWORD dwInfo
);

/* ServiceAddPort  [function; ce-only; CE 4.0..699; Coredll.lib, coredll.lib] */
BOOL ServiceAddPort(
 HANDLE hService,
 SOCKADDR *pSockAddr,
 INT cbSockAddr,
 INT iProtocol,
 WCHAR szRegWritePath
);

/* ServiceClosePort  [function; ce-only; CE 4.0..699; Coredll.lib, coredll.lib] */
BOOL ServiceClosePort(
 HANDLE hService, 
 SOCKADDR* pSockAddr, 
 int cbSockAddr, 
 int iProtocol, 
 BOOL fRemoveFromRegistry
);

/* ServiceIoControl  [function; ce-only; CE 4.0..699; Coredll.lib, coredll.lib] */
BOOL ServiceIoControl(
 HANDLE hService,
 DWORD dwIoControlCode,
 LPVOID lpInBuf,
 DWORD nInBufSize,
 LPVOID lpOutBuf,
 DWORD nOutBufSize,
 LPDWORD lpBytesReturned,
 LPOVERLAPPED lpOverlapped
);

/* ServiceUnbindPorts  [function; ce-only; CE 4.0..699; Coredll.lib, coredll.lib] */
BOOL ServiceUnbindPorts(
 HANDLE hService
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct _ServicesExeCallbackFunctions { PFN_SERVICE_SHUTDOWN pfnServiceShutdown; } ServicesExeCallbackFunctions;

#endif /* _SERVICE_ */
