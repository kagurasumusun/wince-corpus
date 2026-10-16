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
HRESULT ChangeVirtualMapping( ADDRESS_TYPE addrVirtual, ADDRESS_TYPEaddrPhysNew, ADDRESS_TYPE* paddrPhysOld);
HRESULT Disable(void);
HRESULT EnumAllModules( IOsAxsEnumModule** ppienum);
HRESULT EnumAllProcesses( IOsAxsEnumProcess** ppienum);
HRESULT EnumAllThreads( IOsAxsEnumThread** ppienum);
HRESULT GetAttributesEx( DWORD* pProcID, DWORD* pThreadID, DATA_BP_TYPE* pdbp, DWORD* pdwBypassedOccurences);
HRESULT GetCurrentlyViewedProcess( IOsAxsProcess** ppiOsAxsProcess);
HRESULT GetExecModeAtAddress( [in] ADDRESS_TYPE AddrCode, [out] DWORD* pdwExecMode);
HRESULT GetFullThdContextRegList( IeXdi2EnumCpuRegs**ppiOsAxsEnumCpuRegThreadCtx);
HRESULT GetHdstubNotifAddress( ADDRESS_TYPE *paddrNotif);
HRESULT GetMetrics( OSAXS_METRICS* pmetrics);
HRESULT GetModuleByID( DWORD dwID, IOsAxsProcess** ppiOsAxsModule);
HRESULT GetModuleFromAddress( ADDRESS_TYPEAddr, IOsAxsModule** ppiModule);
HRESULT GetPageSize( DWORD*pdwVmPageSize);
HRESULT GetProcessByID( DWORD dwID, IOsAxsProcess** ppiOsAxsProcess);
HRESULT GetRoutineDataByAddress( ADDRESS_TYPEAddrCode, ROUTINE_DATA*pPData, IOsAxsModule **ppiModule);
HRESULT GetThreadByID ( DWORDdwID, IOsAxsProcess **ppiOsAxsThread);
HRESULT GetThreadMigrationTarget( ADDRESS_TYPEaddrPsl, ADDRESS_TYPE*paddrTarget);
HRESULT GeteXdi2Service( [out] ICcService**ppeXdi2Service);
HRESULT MapPointerToProcess( ADDRESS_TYPE addrPointer, ADDRESS_TYPE* paddrProc);
HRESULT NotifyModule( [in] IOsAxsModule* pmod, [in] BOOLfLoaded);
HRESULT NotifyModuledOle( VARIANTvtModId, VARIANTvtLoaded);
HRESULT NotifyPageIn( ADDRESS_TYPE addr, BOOL fWrite);
HRESULT NotifyProcess( IOsAxsProcess*pproc, BOOLfCreated);
HRESULT NotifyProcessOle( VARIANT vtProcId, VARIANTvtCreated);
HRESULT NotifyThreadOle( VARIANTvtThrdId, VARIANT vtCreated);
HRESULT NotifyThreadSwitched( IOsAxsThread*pthrd);
HRESULT SingleStepInCurThread( BOOLfIgnoreCurrentExcept, BOOLfOneCycleOnly);
HRESULT SwitchExecutionTo( IOsAxsProcess** ppiOldProc, IOsAxsThread**ppiOldThrd, IOsAxsProcess** ppiNewProc);
HRESULT TranslateAddressVirtualToPhysical( ADDRESS_TYPEaddrVirt,ADDRESS_TYPE*paddrPhys);
HRESULT TranslateReturnAddress( ADDRESS_TYPEaddrReturn,ADDRESS_TYPEaddrFrame,DWORDdwFrameCurProcHnd,ADDRESS_TYPE*paddrNewReturn, ADDRESS_TYPE*paddrNewFrame,DWORD * pdwNewFrameProcHnd);

#endif /* _OSACCESS_ */
