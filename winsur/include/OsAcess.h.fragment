/* OsAcess.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 10 declarations, 0 outlines, 0 base types, 0 extra macros, 7 extra decls
 */
#ifndef _OSACESS_
#define _OSACESS_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* IOsAxsModule::GetAllRoutineData  [function; ce-only; CE 5.0..699; OSAXSC.lib] */
HRESULT GetAllRoutineData(
 [out] ULONG* pcelt,
 [out, size_is(, *pcelt)] ROUTINE_DATA** ppPData
);

/* IOsAxsModule::GetData  [function; ce-only; CE 5.0..699; OSAXSC.lib] */
HRESULT GetData(
 DWORD* pdwId,
 DWORD* pdwHnd,
 DWORD* pdwPtr,
 IOsAxsProcess** ppiOsAxsOwningProc,
 LPOLESTR* pszModName,
 LPOLESTR* pszModPath,
 ADDRESS_TYPE* pAddrStart,
 ADDRESS_TYPE* pAddrEnd,
 BOOL* pfRelocRwData,
 ADDRESS_TYPE* pAddrRrwdStart,
 ADDRESS_TYPE* pAddrRrwdEnd
 );

/* IOsAxsProcess::EnumOwnedThreads  [function; ce-only; CE 5.0..699; OSAXSC.lib] */
HRESULT EnumOwnedThreads(
 IOsAxsEnumThread** ppiOsAxsEnumThd
);

/* IOsAxsProcess::EnumUsedModules  [function; ce-only; CE 5.0..699; OSAXSC.lib] */
HRESULT EnumUsedModules(
 IOsAxsEnumModule** ppiOsAxsEnumMod
);

/* IOsAxsProcess::GetData  [function; ce-only; CE 5.0..699; OSAXSC.lib] */
HRESULT GetData(
 DWORD* pdwId,
 DWORD* pdwHnd,
 DWORD* pdwPtr,
 IOsAxsModule** ppiOsAxsPrimaryMod
);

/* IOsAxsProcess::SwitchViewTo  [function; ce-only; CE 5.0..699; OSAXSC.lib] */
HRESULT SwitchViewTo();

/* IOsAxsThread::GetCallStack  [function; ce-only; CE 5.0..699; OSAXSC.lib] */
HRESULT GetCallStack(
 [in] DWORD dwStartingFrameNb,
 [in] DWORD dwEndingFrameNb,
 [in] IeXdi2EnumCpuRegs* piOsAxsEnumCpuRegThreadCtx,
 [in] IOsAxsProcess* piOsAxsCurProc,
 [out] IeXdi2EnumCpuRegs** ppiOsAxsEnumCpuRegThreadCtxNew,
 [out] IOsAxsProcess** ppiOsAxsCurProcNew,
 [out] DWORD* pdwNbActualFramesRead,
 [out, size_is(,*pdwNbActualFramesRead)] FRAME_TYPE ** ppframeList
);

/* IOsAxsThread::GetData  [function; ce-only; CE 5.0..699; OSAXSC.lib] */
HRESULT GetData(
 DWORD* pdwId,
 DWORD* pdwHnd,
 DWORD* pdwPtr,
 IOsAxsProcess** ppiOsAxsOwningProc,
 BOOL* pfRunning,
 DWORD* pdwCpuNum
);

/* IOsAxsThread::ReadRegsFromThdCtx  [function; ce-only; CE 5.0..699; OSAXSC.lib] */
HRESULT ReadRegsFromThdCtx(
 [in] IeXdi2EnumCpuRegs* piOsAxsEnumCpuRegThreadCtx,
 [out] DWORD* pdwNbRegsInList,
 [out, size_is(,*pdwNbRegsInList)] REGVAL_TYPE** pprvList
);

/* IOsAxsThread::WriteRegsToThdCtx  [function; ce-only; CE 5.0..699; OSAXSC.lib] */
HRESULT WriteRegsToThdCtx(
 [in] IeXdi2EnumCpuRegs* piOsAxsEnumCpuRegThreadCtx,
 [in] DWORD dwNbRegsInList,
 [in, size_is(dwNbRegsInList)] REGVAL_TYPE* prvList
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT EnumOwnedThreads( IOsAxsEnumThread**ppiOsAxsEnumThd);
HRESULT EnumUsedModules( IOsAxsEnumModule**ppiOsAxsEnumMod);
HRESULT GetAllRoutineData( [out] ULONG*pcelt, [out, size_is( , *pcelt)] ROUTINE_DATA**ppPData);
HRESULT GetCallStack( [in] DWORD dwStartingFrameNb,[in] DWORDdwEndingFrameNb,[in] IeXdi2EnumCpuRegs* piOsAxsEnumCpuRegThreadCtx,[in] IOsAxsProcess* piOsAxsCurProc,[out] IeXdi2EnumCpuRegs** ppiOsAxsEnumCpuRegThreadCtxNew,[out] IOsAxsProcess** ppiOsAxsCurProcNew,[out] DWORD* pdwNbActualFramesRead,[out, size_is(,*pdwNbActualFramesRead)] FRAME_TYPE **ppframeList);
HRESULT ReadRegsFromThdCtx( [in] IeXdi2EnumCpuRegs* piOsAxsEnumCpuRegThreadCtx, [out] DWORD* pdwNbRegsInList, [out, size_is(,*pdwNbRegsInList)] REGVAL_TYPE **pprvList);
HRESULT SwitchViewTo();
HRESULT WriteRegsToThdCtx( [in] IeXdi2EnumCpuRegs *piOsAxsEnumCpuRegThreadCtx, [in] DWORDdwNbRegsInList, [in, size_is(dwNbRegsInList)] REGVAL_TYPE* prvList);

#endif /* _OSACESS_ */
