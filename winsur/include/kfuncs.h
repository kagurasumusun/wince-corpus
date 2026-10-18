/* kfuncs.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 9 constants, 48 declarations, 0 outlines, 0 base types, 0 extra macros, 1 extra decls
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
#define OEM_CERTIFY_RUN 1
#define OEM_CERTIFY_TRUST 2
#define SYS_HANDLE_BASE 64
#define SYSHANDLE_OFFSET 0x004
#define TLS_FUNCALLOC 0
#define TLS_FUNCFREE 1

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

/* DebugBreak  [function; ce-only; harvest-kb; harvest-kb] */
void DebugBreak(void);

/* GetCurrentProcess  [function; shared; unified-kb; unified-kb] */
HANDLE GetCurrentProcess(void);

/* GetCurrentProcessId  [function; shared; unified-kb; unified-kb] */
DWORD GetCurrentProcessId(void);

/* GetCurrentThread  [function; shared; unified-kb; unified-kb] */
HANDLE GetCurrentThread(void);

/* GetCurrentThreadId  [function; shared; unified-kb; unified-kb] */
DWORD GetCurrentThreadId(void);

/* ResetEvent  [function; shared; unified-kb; unified-kb] */
BOOL ResetEvent(HANDLE hEvent);

/* SetEvent  [function; shared; unified-kb; unified-kb] */
BOOL SetEvent(HANDLE hEvent);

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x300 && _WIN32_WCE < 0x400) || (_WIN32_WCE >= 0x500 && _WIN32_WCE < 0x700)) /* CE 3.0..399, 5.0..699 */

/* CeGetCallerTrust  [function; ce-only; CE 3.0..399, 5.0..699; Coredll.lib, coredll.lib, Nk.lib] */
DWORD CeGetCallerTrust (void);

/* CeGetCurrentTrust  [function; ce-only; CE 3.0..399, 5.0..699; Nk.lib, nk.lib] */
DWORD CeGetCurrentTrust (void);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x600 && _WIN32_WCE < 0x700)) /* CE 6.0..699 */

/* WaitForAPIReady  [function; ce-only; CE 6.0..699; coredll.dll] */
DWORD WaitForAPIReady(DWORD dwAPISlotIndex,
DWORD dwTimeout);
#endif /* _WIN32_WCE */

#endif /* _KFUNCS_ */
