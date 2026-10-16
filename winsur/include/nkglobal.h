/* nkglobal.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 1 declarations, 0 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _NKGLOBAL_
#define _NKGLOBAL_


/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct _NKGLOBAL {
  DWORD dwVersion;
  PFN_WriteDebugString pfnWriteDebugString;
  void (*pfnNKvDbgPrintfW) (LPCWSTR lpszFmt, va_list lpParms);
  int (*pfnNKwvsprintfW) (LPWSTR lpOut, LPCWSTR lpFmt, va_list lpParms, int maxchars);
  void (*pfnSetLastError) (DWORD dwErr);
  DWORD (*pfnGetLastError) (void);
  void (WINAPI *pfnInitializeCS) (LPCRITICAL_SECTION lpcs);
  void (WINAPI *pfnDeleteCS) (LPCRITICAL_SECTION lpcs);
  void (WINAPI *pfnEnterCS) (LPCRITICAL_SECTION lpcs);
  void (WINAPI *pfnLeaveCS) (LPCRITICAL_SECTION lpcs);
  void (*pfnINT_OFF) (void);
  void (*pfnINT_ON) (void);
  BOOL (*pfnINT_ENABLE) (BOOL fEnable);
  BOOL (*pfnHookInterrupt) (int hwInterruptNumber, FARPROC pfnHandler);
  BOOL (*pfnUnhookInterrupt) (int hwInterruptNumber, FARPROC pfnHandler);
  DWORD (*pfnNKCallIntChain) (BYTE irq);
  BOOL (*pfnNKIsSysIntrValid) (DWORD idInt);
  BOOL (*pfnNKSetInterruptEvent) (DWORD idInt);
  void (*pfnSleep) (DWORD cmsec);
  BOOL (*pfnVMSetAttrib) (LPVOID lpvAddress, DWORD cbSize, DWORD dwNewFlags, DWORD dwMask, LPDWORD lpdwOldFlags);
  LPVOID (*pfnCreateStaticMapping) (DWORD dwPhysBase, DWORD dwSize);
  LONG (*pfnRegCreateKeyExW) (HKEY hKey, LPCWSTR lpSubKey, DWORD Reserved, LPWSTR lpClass, DWORD dwOptions, REGSAM samDesired, LPSECURITY_ATTRIBUTES lpsa, PHKEY phkResult, LPDWORD lpdwDisp);
  LONG (*pfnRegCloseKey) (HKEY hKey);
  LONG (*pfnRegQueryValueExW) (HKEY hKey, LPCWSTR lpValueName, LPDWORD lpReserved, LPDWORD lpType, LPBYTE lpData, LPDWORD lpcbData);
  LONG (*pfnRegSetValueExW) (HKEY hKey, LPCWSTR lpValueName, DWORD dwReserved, DWORD dwType, LPBYTE lpData, DWORD cbData);
  void (*pfnNKForceCleanBoot) (void);
  BOOL (*pfnNKReboot) (BOOL fClean);
  LPVOID (*pfnPhysToVirt) (DWORD dwShiftedPhysAddr, BOOL fCached);
  LPVOID (*pfnVirtToPhys) (DWORD dwVirtAddr);
  PFN_Ioctl pfnKITLIoctl;
  DWORD (*pfnNKwcslen) (const wchar_t * wcs);
  int (*pfnNKwcscmp) (const wchar_t * pwc1, const wchar_t * pwc2);
  int (*pfnNKwcsicmp) (LPCWSTR str1, LPCWSTR str2);
  int (*pfnNKwcsnicmp) (LPCWSTR str1, LPCWSTR str2, int cchLen);
  void (*pfnNKwcscpy) (LPWSTR p1, LPCWSTR p2);
  DWORD (*pfnNKwcsncpy) (LPWSTR pDst, LPCWSTR pSrc, DWORD cchLen);
  int (*pfnNKstrcmpiAandW) (LPCSTR lpa, LPCWSTR lpu);
  void (*pfnNKUnicodeToAscii) (LPSTR chptr, LPCWSTR wchptr, int maxlen);
  void (*pfnNKAsciiToUnicode) (LPWSTR wchptr, LPCSTR chptr, int maxlen);
  BOOL (*pfnSystemTimeToFileTime) (const SYSTEMTIME *pst, LPFILETIME pft);
  BOOL (*pfnFileTimeToSystemTime) (const FILETIME *pft, LPSYSTEMTIME pst);
  LONG (*pfnCompareFileTime) (const FILETIME *, const FILETIME *);
  void (*pfnProfilerHit) (UINT addr);
  DWORD (*pfnGetEPC) (void);
  DWORD dwStartupAddr;
  volatile DWORD dwNextReschedTime;
  volatile DWORD dwCurMSec;
  volatile LARGE_INTEGER liIdle;
  DWORD dwIdleConv;
  DWORD dwMaxThreadPerProc;
  DWORD dwProcessorType;
  WORD wProcessorLevel;
  WORD wProcessorRevision;
  DWORD dwInstructionSet;
  DBGPARAM *pKITLDbgZOne;
  #ifdef x86
  FARPROC pfn_except_handler3;
  FARPROC pfn__abnormal_termination;
  BOOL (*pfnX86wrmsr) (DWORD dwAddr, DWORD dwValHigh, DWORD dwValLow);
  BOOL (*pfnX86rdmsr) (DWORD dwAddr, DWORD *lpdwValHigh, DWORD *lpdwValLow);
  #else
  FARPROC pfn__C_specific_handler;
  #endif
  #ifdef SH4
  BYTE *IntrPrio;
  DWORD *InterruptTable;
  #endif
  #ifdef ARM
  const DWORD *pdwOrigVectors;
  LPDWORD pdwCurrVectors;
  #endif
} NKGLOBAL, *PNKGLOBAL;

#endif /* _NKGLOBAL_ */
