/* OsAcess.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 0 declarations, 0 outlines, 0 base types, 0 extra macros, 7 extra decls
 */
#ifndef _OSACESS_
#define _OSACESS_


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
