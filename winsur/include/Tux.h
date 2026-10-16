/* Tux.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 11 declarations, 0 outlines, 0 base types, 0 extra macros, 10 extra decls
 */
#ifndef _TUX_
#define _TUX_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* ShellProc  [function; shared; CE 5.0..699; Coredll.lib, coredll.lib] */
SHELLPROCAPI ShellProc(
 UINT uMsg,
 SPPARAM spParam
)

/* TestProc  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
TESTPROCAPI TestProcExample(
 UINT uMsg,
 TPPARAM tpParam,
 LPFUNCTION_TABLE_ENTRY lpFTE
)
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct _FUNCTION_TABLE_ENTRY {LPCTSTRlpDescription;UINTuDepth;DWORDdwUserData;DWORDdwUniqueID;TESTPROClpTestProc;} FUNCTION_TABLE_ENTRY, *LPFUNCTION_TABLE_ENTRY;
typedef struct _SPS_BEGIN_TEST {LPFUNCTION_TABLE_ENTRYlpFTE;DWORDdwRandomSeed;DWORDdwThreadCount;} SPS_BEGIN_TEST, *LPSPS_BEGIN_TEST;
typedef struct _SPS_END_TEST {LPFUNCTION_TABLE_ENTRYlpFTE;DWORDdwResult;DWORDdwRandomSeed;DWORDdwThreadCount;DWORDdwExecutionTime;} SPS_END_TEST, *LPSPS_END_TEST;
typedef struct _SPS_EXCEPTION {LPFUNCTION_TABLE_ENTRYlpFTE;DWORDdwExceptionCode;EXCEPTION_POINTERS* lpExceptionPointers;DWORDdwExceptionFilter;} SPS_EXCEPTION, *LPSPS_EXCEPTION;
typedef struct _SPS_LOAD_DLL {BOOLfUnicode;} SPS_LOAD_DLL, *LPSPS_LOAD_DLL;
typedef struct _SPS_REGISTER {LPFUNCTION_TABLE_ENTRYlpFunctionTable;} SPS_REGISTER, *LPSPS_REGISTER;
typedef struct _SPS_SHELL_INFO {HINSTANCEhInstance;HWNDhWnd;HINSTANCEhLib;HANDLEhevmTerminate;BOOLfUsingServer;LPCTSTRszDllCmdLine;} SPS_SHELL_INFO, *LPSPS_SHELL_INFO;
typedef struct _TPS_EXECUTE {DWORDdwRandomSeed;DWORDdwThreadCount;DWORDdwThreadNumber;} TPS_EXECUTE, *LPTPS_EXECUTE;
typedef struct _TPS_QUERY_THREAD_COUNT {DWORDdwThreadCount;} TPS_QUERY_THREAD_COUNT, *LPTPS_QUERY_THREAD_COUNT;

/* function */
TESTPROCAPI TestProcExample( UINT uMsg, TPPARAM tpParam, LPFUNCTION_TABLE_ENTRY lpFTE )

#endif /* _TUX_ */
