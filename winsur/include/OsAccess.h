/* OsAccess.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 2 declarations, 0 outlines, 0 base types, 0 extra macros, 31 extra decls
 */
#ifndef _OSACCESS_
#define _OSACCESS_


/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT Disable(void);
HRESULT EnumAllModules( IOsAxsEnumModule** ppienum);
HRESULT EnumAllProcesses( IOsAxsEnumProcess** ppienum);
HRESULT EnumAllThreads( IOsAxsEnumThread** ppienum);
HRESULT GetCurrentlyViewedProcess( IOsAxsProcess** ppiOsAxsProcess);
HRESULT GetFullThdContextRegList( IeXdi2EnumCpuRegs**ppiOsAxsEnumCpuRegThreadCtx);
HRESULT GetModuleByID( DWORD dwID, IOsAxsProcess** ppiOsAxsModule);
HRESULT GetModuleFromAddress( ADDRESS_TYPEAddr, IOsAxsModule** ppiModule);
HRESULT GetPageSize( DWORD*pdwVmPageSize);
HRESULT GetProcessByID( DWORD dwID, IOsAxsProcess** ppiOsAxsProcess);
HRESULT GetRoutineDataByAddress( ADDRESS_TYPEAddrCode, ROUTINE_DATA*pPData, IOsAxsModule **ppiModule);
HRESULT GetThreadByID ( DWORDdwID, IOsAxsProcess **ppiOsAxsThread);
HRESULT GeteXdi2Service( [out] ICcService**ppeXdi2Service);
HRESULT NotifyModule( [in] IOsAxsModule* pmod, [in] BOOLfLoaded);
HRESULT NotifyModuledOle( VARIANTvtModId, VARIANTvtLoaded);
HRESULT NotifyProcess( IOsAxsProcess*pproc, BOOLfCreated);
HRESULT NotifyThreadSwitched( IOsAxsThread*pthrd);
HRESULT SingleStepInCurThread( BOOLfIgnoreCurrentExcept, BOOLfOneCycleOnly);
HRESULT SwitchExecutionTo( IOsAxsProcess** ppiOldProc, IOsAxsThread**ppiOldThrd, IOsAxsProcess** ppiNewProc);

#endif /* _OSACCESS_ */
