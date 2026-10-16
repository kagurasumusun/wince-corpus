/* exdi.idl -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 60 declarations, 0 outlines, 0 base types, 0 extra macros, 35 extra decls
 */
#ifndef _EXDI_IDL_
#define _EXDI_IDL_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

/* IeXdiARMContext::GetContext  [function; ce-only] */
HRESULT GetContext(
 PCONTEXT_ARM pContext
);

/* IeXdiARMContext::SetContext  [function; ce-only] */
HRESULT SetContext(
 CONTEXT_ARM Context
);

/* IeXdiClientNotifyMemChg::NotifyMemoryChange  [function; ce-only] */
HRESULT NotifyMemoryChange(
 MEM_TYPE mtChanged, 
 ADDRESS_TYPE Address, 
 BYTE bAddressSpace, 
 DWORD dwNbElemChanged, 
 BYTE bAccessWidth 
);

/* IeXdiClientNotifyRunChg::NotifyRunStateChange  [function; ce-only] */
HRESULT NotifyRunChange(
 RUN_STATUS_TYPE ersCurrent,
 HALT_REASON_TYPE ehrCurrent,
 ADDRESS_TYPE CurrentExecAddress,
 DWORD dwExceptionCode
);

/* IeXdiCodeBreakpoint::GetAttributes  [function; ce-only] */
HRESULT GetAttributes(
 PADDRESS_TYPE pAddress,
 _KIND pcbpk,
 PMEM_TYPE pmt,
 DWORD* pdwExecMode,
 DWORD* pdwTotalBypassCount,
 DWORD* pdwBypassedOccurences,
 BOOL* pfEnabled
);

/* IeXdiCodeBreakpoint::SetState  [function; ce-only] */
HRESULT SetState(
 BOOL fEnabled,
 BOOL fResetBypassedOccurences
);

/* IeXdiDataBreakpoint::GetAttributes  [function; ce-only] */
HRESULT GetAttributes( 
 PADDRESS_TYPE pAddress, 
 PADDRESS_TYPE pAddressMask, 
 DWORD* pdwData, 
 DWORD* pdwDataMask, 
 BYTE* pbAccessWidth, 
 PMEM_TYPE pmt, 
 BYTE* pbAddressSpace, 
 PDATA_ACCESS_TYPE pda, 
 DWORD* pdwTotalBypassCount, 
 DWORD* pdwBypassedOccurences, 
 BOOL* pfEnabled
);

/* IeXdiDataBreakpoint::SetState  [function; ce-only] */
HRESULT SetState( 
 BOOL fEnabled, 
 BOOL fResetBypassedOccurences
);

/* IeXdiEnumCodeBreakpoint::DisableAll  [function; ce-only] */
HRESULT DisableAll (void);

/* IeXdiEnumCodeBreakpoint::EnableAll  [function; ce-only] */
HRESULT EnableAll (void);

/* IeXdiEnumCodeBreakpoint::GetCount  [function; ce-only] */
HRESULT GetCount(
 DWORD* pcelt
);

/* IeXdiEnumCodeBreakpoint::GetNext  [function; ce-only] */
HRESULT GetNext(
 IeXdiCodeBreakpoint** ppieXdiCodeBreakpoint
);

/* IeXdiEnumCodeBreakpoint::Next  [function; ce-only] */
HRESULT Next(
 DWORD celt, 
 IeXdiCodeBreakpoint* apieXdiCodeBreakpoint[],
 DWORD* pceltFetched
);

/* IeXdiEnumCodeBreakpoint::Reset  [function; ce-only] */
HRESULT NotifyRunChange (void);

/* IeXdiEnumCodeBreakpoint::Skip  [function; ce-only] */
HRESULT Skip(
 DWORD celt
);

/* IeXdiEnumDataBreakpoint::DisableAll  [function; ce-only] */
HRESULT DisableAll (void);

/* IeXdiEnumDataBreakpoint::EnableAll  [function; ce-only] */
HRESULT EnableAll (void);

/* IeXdiEnumDataBreakpoint::GetCount  [function; ce-only] */
HRESULT GetCount(
 DWORD* pcelt
);

/* IeXdiEnumDataBreakpoint::GetNext  [function; ce-only] */
HRESULT GetNext(
 IeXdiDataBreakpoint** ppieXdiDataBreakpoint
);

/* IeXdiEnumDataBreakpoint::Next  [function; ce-only] */
HRESULT Next(
 DWORD celt,
 IeXdiDataBreakpoint* apieXdiDataBreakpoint[],
 DWORD* pceltFetched
);

/* IeXdiEnumDataBreakpoint::Reset  [function; ce-only] */
HRESULT NotifyRunChange (void);

/* IeXdiEnumDataBreakpoint::Skip  [function; ce-only] */
HRESULT Skip(
 DWORD celt
);

/* IeXdiMIPSContext::GetContext  [function; ce-only] */
HRESULT GetContext(
 PCONTEXT_MIPS pContext 
);

/* IeXdiMIPSContext::SetContext  [function; ce-only] */
HRESULT SetContext(
 CONTEXT_MIPS Context 
);

/* IeXdiPPCContext::GetContext  [function; ce-only] */
HRESULT GetContext(
 PCONTEXT_PPC pContext
);

/* IeXdiPPCContext::SetContext  [function; ce-only] */
HRESULT SetContext(
 CONTEXT_PPC Context
);

/* IeXdiServer::AddCodeBreakpoint  [function; ce-only] */
HRESULT AddCodeBreakpoint(
 ADDRESS_TYPE Address,
 CBP_KIND cbpk,
 MEM_TYPE mt,
 DWORD dwExecMode,
 DWORD dwTotalBypassCount,
 IeXdiCodeBreakpoint** ppieXdiCodeBreakpoint
);

/* IeXdiServer::AddDataBreakpoint  [function; ce-only] */
HRESULT AddDataBreakpoint(
 ADDRESS_TYPE Address,
 ADDRESS_TYPE AddressMask,
 DWORD dwData,
 DWORD dwDataMask,
 BYTE bAccessWidth,
 MEM_TYPE mt,
 BYTE bAddressSpace,
 DATA_ACCESS_TYPE da,
 DWORD dwTotalBypassCount,
 IeXdiDataBreakpoint** ppieXdiDataBreakpoint
);

/* IeXdiServer::DelCodeBreakpoint  [function; ce-only] */
HRESULT DelCodeBreakpoint(
 IeXdiCodeBreakpoint* pieXdiCodeBreakpoint
);

/* IeXdiServer::DelDataBreakpoint  [function; ce-only] */
HRESULT DelDataBreakpoint(
 IeXdiDataBreakpoint* pieXdiDataBreakpoint
);

/* IeXdiServer::DoMultipleStep  [function; ce-only] */
HRESULT DoMultipleStep(
 DWORD dwNbInstructions
);

/* IeXdiServer::DoRangeStep  [function; ce-only] */
HRESULT DoRangeStep(
 ADDRESS_TYPE FirstAddress,
 ADDRESS_TYPE LastAddress
);

/* IeXdiServer::DoSingleStep  [function; ce-only] */
HRESULT DoSingleStep ();

/* IeXdiServer::EnumAllCodeBreakpoints  [function; ce-only] */
HRESULT EnumAllCodeBreakpoints(
 IeXdiEnumCodeBreakpoint** ppieXdiEnumCodeBreakpoint
);

/* IeXdiServer::EnumAllDataBreakpoints  [function; ce-only] */
HRESULT EnumAllDataBreakpoints(
 IeXdiEnumDataBreakpoint** ppieXdiEnumDataBreakpoint
);

/* IeXdiServer::EnumCodeBreakpointsInAddrRange  [function; ce-only] */
HRESULT EnumCodeBreakpointsInAddrRange(
 ADDRESS_TYPE FirstAddress,
 ADDRESS_TYPE LastAddress,
 IeXdiEnumCodeBreakpoint** ppieXdiEnumCodeBreakpoint
);

/* IeXdiServer::EnumDataBreakpointsInAddrRange  [function; ce-only] */
HRESULT EnumDataBreakpointsInAddrRange(
 ADDRESS_TYPE FirstAddress,
 ADDRESS_TYPE LastAddress,
 IeXdiEnumDataBreakpoint** ppieXdiEnumDataBreakpoint
);

/* IeXdiServer::GetBpSupport  [function; ce-only] */
HRESULT GetBpSupport(
 PBREAKPOINT_SUPPORT_TYPE pbps
);

/* IeXdiServer::GetErrorDescription  [function; ce-only] */
HRESULT GetErrorDescription(
 HRESULT ErrorCode,
 LPOLESTR* pszErrorDesc
);

/* IeXdiServer::GetExceptionDescriptionList  [function; ce-only] */
HRESULT GetExceptionDescriptionList(
 DWORD dwNbElementToReturn,
 EXCEPTION_DESCRIPTION_TYPE* pedTable,
 DWORD* pdwNbTotalExceptionInList
);

/* IeXdiServer::GetLastException  [function; ce-only] */
HRESULT GetLastException(
 PEXCEPTION_TYPE pexLast
);

/* IeXdiServer::GetNbCodeBpAvail  [function; ce-only] */
HRESULT GetNbCodeBpAvail(
 DWORD* pdwNbHwCodeBpAvail,
 DWORD* pdwNbSwCodeBpAvail
);

/* IeXdiServer::GetNbDataBpAvail  [function; ce-only] */
HRESULT GetNbDataBpAvail(
 DWORD* pdwNbDataBpAvail
);

/* IeXdiServer::GetRunStatus  [function; ce-only] */
HRESULT GetRunStatus(
 PRUN_STATUS_TYPE persCurrent,
 PHALT_REASON_TYPE pehrCurrent,
 ADDRESS_TYPE* pCurrentExecAddress,
 DWORD* pdwExceptionCode
);

/* IeXdiServer::GetTargetInfo  [function; ce-only] */
HRESULT GetTargetInfo(
 PGLOBAL_TARGET_INFO_STRUCT pgti
);

/* IeXdiServer::Halt  [function; ce-only] */
HRESULT Halt ();

/* IeXdiServer::Ioctl  [function; ce-only] */
HRESULT Ioctl(
 DWORD dwBuffInSize,
 const BYTE* pbBufferIn,
 DWORD dwBuffOutSize,
 DWORD* pdwEffectBuffOutSize,
 BYTE* pbBufferOut
);

/* IeXdiServer::ReadPhysicalMemoryOrPeriphIO  [function; ce-only] */
HRESULT ReadPhysicalMemoryOrPeriphIO(
 ADDRESS_TYPE Address,
 BYTE bAddressSpace,
 DWORD dwNbElemToRead,
 BYTE bAccessWidth,
 BYTE* pbReadBuffer
);

/* IeXdiServer::ReadVirtualMemory  [function; ce-only] */
HRESULT ReadVirtualMemory(
 ADDRESS_TYPE Address,
 DWORD dwNbElemToRead,
 BYTE bAccessWidth,
 BYTE* pbReadBuffer,
 DWORD* pdwNbElementEffectRead
);

/* IeXdiServer::Reboot  [function; ce-only] */
HRESULT Reboot ();

/* IeXdiServer::Run  [function; ce-only] */
HRESULT Run ();

/* IeXdiServer::StartNotifyingMemChg  [function; ce-only] */
HRESULT StartNotifyingMemChg(
 IeXdiClientNotifyMemChg* pieXdiClientNotifyMemChg,
 DWORD* pdwConnectionCookie
);

/* IeXdiServer::StartNotifyingRunChg  [function; ce-only] */
HRESULT StartNotifyingRunChg(
 IeXdiClientNotifyRunChg *pieXdiClientNotifyRunChg,
 DWORD* pdwConnectionCookie
);

/* IeXdiServer::StopNotifyingMemChg  [function; ce-only] */
HRESULT StopNotifyingMemChg(
 DWORD dwConnectionCookie
);

/* IeXdiServer::StopNotifyingRunChg  [function; ce-only] */
HRESULT StopNotifyingRunChg(
 DWORD dwConnectionCookie
);

/* IeXdiServer::WritePhysicalMemoryOrPeriphIO  [function; ce-only] */
HRESULT WritePhysicalMemoryOrPeriphIO(
 ADDRESS_TYPE Address,
 BYTE bAddressSpace,
 DWORD dwNbElemToWrite,
 BYTE bAccessWidth,
 const BYTE* pbWriteBuffer
);

/* IeXdiServer::WriteVirtualMemory  [function; ce-only] */
HRESULT WriteVirtualMemory(
 ADDRESS_TYPE Address,
 DWORD dwNbElemToWrite,
 BYTE bAccessWidth,
 const BYTE* pbWriteBuffer,
 DWORD* pdwNbElementEffectWritten
);

/* IeXdiSHXContext::GetContext  [function; ce-only] */
HRESULT GetContext(
 PCONTEXT_SHX pContext
);

/* IeXdiSHXContext::SetContext  [function; ce-only] */
HRESULT SetContext(
 CONTEXT_SHX Context
);

/* IeXdiX86Context::GetContext  [function; ce-only] */
HRESULT GetContext(
 PCONTEXT_X86 pContext
);

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT AddCodeBreakpoint( ADDRESS_TYPE Address, CBP_KIND cbpk, MEM_TYPE mt, DWORD dwExecMode, DWORD dwTotalBypassCount, IeXdiCodeBreakpoint** ppieXdiCodeBreakpoint );
HRESULT AddDataBreakpoint( ADDRESS_TYPE Address, ADDRESS_TYPE AddressMask, DWORD dwData, DWORD dwDataMask, BYTE bAccessWidth, MEM_TYPE mt, BYTE bAddressSpace, DATA_ACCESS_TYPE da, DWORD dwTotalBypassCount, IeXdiDataBreakpoint** ppieXdiDataBreakpoint );
HRESULT DelCodeBreakpoint( IeXdiCodeBreakpoint* pieXdiCodeBreakpoint );
HRESULT DelDataBreakpoint( IeXdiDataBreakpoint* pieXdiDataBreakpoint );
HRESULT DisableAll (void);
HRESULT DoMultipleStep( DWORD dwNbInstructions );
HRESULT DoRangeStep( ADDRESS_TYPE FirstAddress, ADDRESS_TYPE LastAddress );
HRESULT DoSingleStep ();
HRESULT EnableAll (void);
HRESULT EnumAllCodeBreakpoints( IeXdiEnumCodeBreakpoint** ppieXdiEnumCodeBreakpoint );
HRESULT EnumAllDataBreakpoints( IeXdiEnumDataBreakpoint** ppieXdiEnumDataBreakpoint );
HRESULT EnumCodeBreakpointsInAddrRange( ADDRESS_TYPE FirstAddress, ADDRESS_TYPE LastAddress, IeXdiEnumCodeBreakpoint** ppieXdiEnumCodeBreakpoint );
HRESULT EnumDataBreakpointsInAddrRange( ADDRESS_TYPE FirstAddress, ADDRESS_TYPE LastAddress, IeXdiEnumDataBreakpoint** ppieXdiEnumDataBreakpoint );
HRESULT GetAttributes( PADDRESS_TYPE pAddress, _KIND pcbpk, PMEM_TYPE pmt, DWORD* pdwExecMode, DWORD* pdwTotalBypassCount, DWORD* pdwBypassedOccurences, BOOL* pfEnabled );
HRESULT GetBpSupport( PBREAKPOINT_SUPPORT_TYPE pbps );
HRESULT GetErrorDescription( HRESULT ErrorCode, LPOLESTR* pszErrorDesc );
HRESULT GetExceptionDescriptionList( DWORD dwNbElementToReturn, EXCEPTION_DESCRIPTION_TYPE* pedTable, DWORD* pdwNbTotalExceptionInList );
HRESULT GetLastException( PEXCEPTION_TYPE pexLast );
HRESULT GetNbCodeBpAvail( DWORD* pdwNbHwCodeBpAvail, DWORD* pdwNbSwCodeBpAvail );
HRESULT GetNbDataBpAvail( DWORD* pdwNbDataBpAvail );
HRESULT GetNext( IeXdiCodeBreakpoint** ppieXdiCodeBreakpoint );
HRESULT GetRunStatus( PRUN_STATUS_TYPE persCurrent, PHALT_REASON_TYPE pehrCurrent, ADDRESS_TYPE* pCurrentExecAddress, DWORD* pdwExceptionCode );
HRESULT GetTargetInfo( PGLOBAL_TARGET_INFO_STRUCT pgti );
HRESULT Halt ();
HRESULT NotifyMemoryChange( MEM_TYPE mtChanged, ADDRESS_TYPE Address, BYTE bAddressSpace, DWORD dwNbElemChanged, BYTE bAccessWidth );
HRESULT NotifyRunChange( RUN_STATUS_TYPE ersCurrent, HALT_REASON_TYPE ehrCurrent, ADDRESS_TYPE CurrentExecAddress, DWORD dwExceptionCode );
HRESULT ReadPhysicalMemoryOrPeriphIO( ADDRESS_TYPE Address, BYTE bAddressSpace, DWORD dwNbElemToRead, BYTE bAccessWidth, BYTE* pbReadBuffer );
HRESULT ReadVirtualMemory( ADDRESS_TYPE Address, DWORD dwNbElemToRead, BYTE bAccessWidth, BYTE* pbReadBuffer, DWORD* pdwNbElementEffectRead );
HRESULT Reboot ();
HRESULT StartNotifyingMemChg( IeXdiClientNotifyMemChg* pieXdiClientNotifyMemChg, DWORD* pdwConnectionCookie );
HRESULT StartNotifyingRunChg( IeXdiClientNotifyRunChg *pieXdiClientNotifyRunChg, DWORD* pdwConnectionCookie );
HRESULT StopNotifyingMemChg( DWORD dwConnectionCookie );
HRESULT StopNotifyingRunChg( DWORD dwConnectionCookie );
HRESULT WritePhysicalMemoryOrPeriphIO( ADDRESS_TYPE Address, BYTE bAddressSpace, DWORD dwNbElemToWrite, BYTE bAccessWidth, const BYTE* pbWriteBuffer );
HRESULT WriteVirtualMemory( ADDRESS_TYPE Address, DWORD dwNbElemToWrite, BYTE bAccessWidth, const BYTE* pbWriteBuffer, DWORD* pdwNbElementEffectWritten );

#endif /* _EXDI_IDL_ */
