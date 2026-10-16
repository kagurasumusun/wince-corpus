/* exdi.idl -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 0 declarations, 0 outlines, 0 base types, 0 extra macros, 35 extra decls
 */
#ifndef _EXDI_IDL_
#define _EXDI_IDL_


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
