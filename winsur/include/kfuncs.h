/* kfuncs.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 38 constants, 10 declarations, 0 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _KFUNCS_
#define _KFUNCS_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define EVENT_PULSE 1
#define EVENT_RESET 2
#define EVENT_SET 3
#define HT_AFSVOLUME 16
#define HT_APISET 6
#define HT_CRITSEC 12
#define HT_DBFILE 9
#define HT_DBFIND 10
#define HT_EVENT 4
#define HT_FILE 7
#define HT_FIND 8
#define HT_FSMAP 14
#define HT_MUTEX 5
#define HT_SEMAPHORE 13
#define HT_SOCKET 11
#define HT_WNETENUM 15
#define OEM_CERTIFY_RUN 1
#define OEM_CERTIFY_TRUST 2
#define SH_COMM 83
#define SH_CPROG 88
#define SH_CURPROC 2
#define SH_CURTHREAD 1
#define SH_CURTOKEN 3
#define SH_D3DM 92
#define SH_DDRAW 91
#define SH_DEVMGR_APIS 86
#define SH_FILESYS_APIS 84
#define SH_GDI 80
#define SH_SERVICES 90
#define SH_SHELL 85
#define SH_TAPI 87
#define SH_WIN32 0
#define SH_WMGR 81
#define SH_WNET 82
#define SYS_HANDLE_BASE 64
#define SYSHANDLE_OFFSET 0x004
#define TLS_FUNCALLOC 0
#define TLS_FUNCFREE 1

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* WaitForAPIReady  [function, macro; ce-only; CE 6.0..699; coredll.dll] */
DWORD WaitForAPIReady(
DWORD dwAPISlotIndex,
DWORD dwTimeout
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 2.11..2.12, 3.0..399, 5.0..699 */

/* DebugBreak  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
void DebugBreak(void);

/* GetCurrentProcess  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Coredll.lib, coredll.lib, Nk.lib] */
HANDLE GetCurrentProcess(void);

/* GetCurrentProcessId  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Coredll.lib, coredll.lib, Nk.lib] */
DWORD GetCurrentProcessId(void);

/* GetCurrentThread  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Coredll.lib, coredll.lib, Nk.lib] */
HANDLE GetCurrentThread(void);

/* GetCurrentThreadId  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Coredll.lib, coredll.lib, Nk.lib] */
DWORD GetCurrentThreadId(void);

/* ResetEvent  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
BOOL ResetEvent(
 HANDLE hEvent
);

/* SetEvent  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
BOOL SetEvent(
 HANDLE hEvent
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 3.0..399, 5.0..699 */

/* CeGetCallerTrust  [function; ce-only; CE 3.0..399, 5.0..699; Coredll.lib, coredll.lib, Nk.lib] */
DWORD CeGetCallerTrust (void);

/* CeGetCurrentTrust  [function; ce-only; CE 3.0..399, 5.0..699; Nk.lib, nk.lib] */
DWORD CeGetCurrentTrust (void);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
BOOL KernelIOControl(UINT32 code, VOID* pInpBuffer, UINT32 inpSize, VOID* pOutBuffer, UINT32 outSize, UINT32 *pOutSize);

#endif /* _KFUNCS_ */
