/* eXDI2.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 27 constants, 19 declarations, 1 outlines, 0 base types, 0 extra macros, 86 extra decls
 */
#ifndef _EXDI2_
#define _EXDI2_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define CPUC_16BIT 0x00000001
#define CPUC_32BIT 0x00000002
#define CPUC_64BIT 0x00000004
#define CPUC_DSP 0x00000010
#define CPUC_FP 0x00001000
#define CPUC_MMX2 0x00000020
#define CPUC_SH4 0x00000100
#define CPUC_SSE 0x00000040
#define CPUC_SSE2 0x00000080
#define CPUC_THUMB2 0x00000008
#define CPUC_V4 0x00000100
#define CPUC_V5 0x00000200
#define CPUC_V6 0x00000400
#define CPUF_ARM 3
#define CPUF_IA64 4
#define CPUF_MIPS 2
#define CPUF_SHX 1
#define CPUF_UNK 0xFFFFFFF
#define CPUF_X86 0
#define ec1stChance 0
#define eda2IgnoreAll 0
#define LMM_IO 2
#define LMM_PHYS 1
#define LMM_VIRT 0
#define tsDisable 0
#define tsDontCare 2
#define tsEnable 1

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* MISC_EXDIACCESS_SERVICE_INFO  [struct; ce-only] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* BP_KIND  [enum; ce-only] */
typedef enum _BP_KIND {
 bptAlgo,
 bptHW,
 bptSW
} BP_KIND;

/* BREAKPOINT_SUPPORT_TYPE2  [struct; ce-only] */
typedef struct _BREAKPOINT_SUPPORT_TYPE2 {
 BOOL fDataBpSupported;
 BOOL fCodeBpBypassCountSupported;
 BOOL fDataBpBypassCountSupported;
 BOOL fDataBpMaskableAddress;
 BOOL fDataBpMaskableData;
 BOOL fDataBpDataWidthSpecifiable;
 BOOL fDataBpReadWriteSpecifiable;
 BOOL fDataBpDataMatchSupported;
} BREAKPOINT_SUPPORT_TYPE2;

/* DEBUG_ACCESS_CAPABILITIES_STRUCT2  [struct; ce-only] */
typedef struct _DEBUG_ACCESS_CAPABILITIES_STRUCT2 {
 BOOL fSupportsAsyncBreak;
 BOOL fSupportsFramePointerStdReg;
 BOOL fSupportsReturnAddressStdReg;
 BOOL fSupportsArg0StdReg;
 BOOL fSupportsArg1StdReg;
 BOOL fSupportsArg2StdReg;
 BOOL fSupportsArg3StdReg;
 BOOL fSupportsReturnValue0StdReg;
 BOOL fSupportsReturnValue1StdReg;
 BOOL fSupportsClockCycleCount;
} DEBUG_ACCESS_CAPABILITIES_STRUCT2;

/* EXCEPTION_CHANCE  [enum; ce-only] */
typedef enum _EXCEPTION_CHANCE {
 ec1stChance = 0,
 ec2ndChance
} EXCEPTION_CHANCE;

/* EXCEPTION_DEFAULT_ACTION_TYPE2  [enum; ce-only] */
typedef enum _EXCEPTION_DEFAULT_ACTION_TYPE2 {
 eda2IgnoreAll = 0,
 eda2NotifyAll,
 eda2StopAll,
 eda2Ignore1stChc,
 eda2Notify1stChc
} EXCEPTION_DEFAULT_ACTION_TYPE2;

/* EXCEPTION_TYPE2  [struct; ce-only] */
typedef struct _EXCEPTION_TYPE2 {
 DWORD dwExceptionCode;
 EXCEPTION_CHANCE ec;
} EXCEPTION_TYPE2;

/* HALT_REASON_CODE_TYPE2  [enum; ce-only] */
typedef enum _HALT_REASON_CODE_TYPE2 {
 hrc2User,
 hrc2Exception,
 hrc2Bp,
 hrc2EBp,
 hrc2Step,
 hrc2SmpSync,
 hrc2OsNotif,
 hrc2Unknown,
} HALT_REASON_CODE_TYPE2;

/* HALT_REASON_TYPE2  [struct; ce-only] */
typedef struct _HALT_REASON_TYPE2 {
 HALT_REASON_CODE_TYPE2 hrc2;
 DWORD dwCpuNum; [unique] IeXdi2CodeBp* pieXdi2CodeBp;
 [unique] IeXdi2DataBp* pieXdi2DataBp;
 [unique] EXCEPTION_TYPE2* pet;
} HALT_REASON_TYPE2;

/* LINEAR_MEM_MAP_TYPE  [typedef; ce-only] */
typedef DWORD LINEAR_MEM_MAP_TYPE;

/* MEM_TYPE2  [enum; ce-only] */
typedef enum _MEM_TYPE2 {
 mt2Virtual,
 mt2PhysicalOrPeriIO,
 mt2CpuReg
} MEM_TYPE2;

/* RUN_STATUS_TYPE2  [enum; ce-only] */
typedef enum _RUN_STATUS_TYPE2 {
 rs2Running,
 rs2Halted,
 rs2Reset,
 rs2Error,
 rs2Unknown
} RUN_STATUS_TYPE2;

/* TRISTATE_TYPE  [enum; ce-only] */
typedef enum _TRISTATE_TYPE {
 tsDisable = 0,
 tsEnable = 1,
 tsDontCare = 2
} TRISTATE_TYPE;

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT AddCodeBpOle( VARIANT bpKind, VARIANT fVirtMem, VARIANT dwExecMode, VARIANT dwAddress, VARIANT dwTotalBypassCount, VARIANT* pvtPIeXdiCBP2);
HRESULT AddCodeBps( [in] DWORD ccbp, [in, size_is(ccbp)] CODE_BP_TYPE acbp[], [out, size_is(ccbp)] IeXdi2CodeBp *apieXdi2CodeBp[]);
HRESULT AddDataBpOle( VARIANT bpKind, VARIANT MemType, VARIANT dwAddressSpace, VARIANT dwAddress, VARIANT AddressMask, VARIANT strRegName, VARIANT Data, VARIANT DataMask, VARIANT RWAccessType, VARIANT dwAccessWidth, VARIANT dwTotalBypassCount, VARIANT*pvtPIeXdiDBP2);
HRESULT AddDataBps( [in] DWORD cdbp, [in, size_is(cdbp)] DATA_BP_TYPE adbp[], [out, size_is(cdbp)] IeXdi2DataBp*apieXdi2DataBp[] );
HRESULT AuthorizeTargetRestart( BOOL *pfContinue, DWORD *pdwRetryDelayMs);
HRESULT AuthorizeTargetRestartOle( VARIANT* pfContinue, VARIANT* pdwRetryDelayMs);
HRESULT ChangeExceptionAction( DWORD dwExceptionCode, EXCEPTION_DEFAULT_ACTION_TYPE2 efd2);
HRESULT ChangeExceptionActionOle( VARIANT dwListIndex, VARIANT dwAction);
HRESULT CopyMemOle( VARIANT dwCpuNum, VARIANT dwMemMap, VARIANT AddressSource, VARIANT AddressTarget, VARIANT cElements, VARIANT dwAccessWidth);
HRESULT CopyMemoryX( DWORD dwCpuNum, LINEAR_MEM_MAP_TYPElmt, ADDRESS_TYPE AddressSource, ADDRESS_TYPE AddressTarget, DWORD dwNbElem, BYTE bAccessWidthInBytes);
HRESULT CreateCpuRegCustomList( [in] DWORD dwNbRegsInList, [in, size_is(dwNbRegsInList)] LPOLESTR* pszRegName, [out] IeXdi2EnumCpuRegs** ppieXdi2EnumCpuRegs);
HRESULT EnableCodeBp( VARIANT pieXdiCBP2, VARIANT fEnable);
HRESULT EnableDataBp( VARIANT pieXdiDBP2, VARIANT fEnable);
HRESULT EnumAllCodeBps( TRISTATE_TYPE f3Enabled, IeXdi2EnumCodeBp** ppieXdi2EnumCodeBp);
HRESULT EnumAllCpuRegGroups( [out] DWORD* pdwNbGroups, [out, size_is(,*pdwNbGroups)] CPU_REG_GROUP_STRUCT** ppscrg);
HRESULT EnumAllCpuRegs( IeXdi2EnumCpuRegs** ppieXdi2EnumCpuRegs);
HRESULT EnumAllCpuRegsInGroup( DWORDdwGroupIdx, IeXdi2EnumCpuRegs** ppieXdi2EnumCpuRegs);
HRESULT EnumAllDataBps( TRISTATE_TYPEf3Enabled, IeXdi2EnumDataBp** ppieXdi2EnumDataBp);
HRESULT EnumCodeBpsInAddrRange( BOOL fPhys, ADDRESS_TYPE FirstAddress, ADDRESS_TYPELastAddress, TRISTATE_TYPE f3Enabled, IeXdi2EnumCodeBp** ppieXdi2EnumCodeBp);
HRESULT EnumDataBpsInAddrRange( MEM_TYPE2mt2, ADDRESS_TYPE FirstAddress, ADDRESS_TYPELastAddress, TRISTATE_TYPE f3Enabled, IeXdi2EnumDataBp** ppieXdi2EnumDataBp);
HRESULT FillMemOle( VARIANT dwCpuNum, VARIANT dwMemMap, VARIANT AddressStart, VARIANT AddressEnd, VARIANT cElements, VARIANT dwAccessWidth, VARIANT* pvtArrayOfByteFill);
HRESULT FillMemoryX( [in] DWORDdwCpuNum, [in] LINEAR_MEM_MAP_TYPElmt, [in] ADDRESS_TYPEAddressRangeStart, [in] ADDRESS_TYPEAddressRangeEnd, [in] DWORDdwNbElem, [in] BYTEbAccessWidthInBytes, [in, size_is(dwNbElem* bAccessWidthInBytes)] BYTE* pbSequenceToFill);
HRESULT GetCodeBpAttributes( VARIANT pieXdiCBP2, VARIANT* pbpKind, VARIANT* pfVirtMem, VARIANT* pdwExecMode, VARIANT* pAddress, VARIANT* pdwTotalBypass, VARIANT* pdwCurrentBypass, VARIANT* pfEnabled);
HRESULT GetCurrentExecMode( DWORD dwCpuNum DWORD* pdwExecMode);
HRESULT GetData2( [in] FLEXI_GETDATA_TYPE2 fgds2, [out, size_is(, *pcProcess)] PTM_RAW_DATA **ppdatProcess, [out] DWORD *pcProcess, [out] DWORD *pcProcessTotal, [out, size_is(, *pcThread)] PTM_RAW_DATA **ppdatThread, [out] DWORD *pcThread, [out] DWORD *pcThreadTotal, [out, size_is(, *pcModule)] PTM_RAW_DATA **ppdatModule, [out] DWORD *pcModule, [out] DWORD *pcModuleTotal, [out, size_is(, *pcContext)] PTM_RAW_DATA **ppdatContext, [out] DWORD *pcContext, [out] DWORD *pcContextTotal );
HRESULT GetDataBpAttributes( VARIANT pieXdiDBP2, VARIANT* pbpKind, VARIANT* pMemType, VARIANT* pdwAddressSpace, VARIANT* pAddress, VARIANT* pAddressMask, VARIANT* pstrRegName, VARIANT* pData, VARIANT* pDataMask, VARIANT* pRWAccessType, VARIANT* pdwAccessWidth, VARIANT* pdwTotalBypassCount, VARIANT* pdwCurrentBypassCount, VARIANT* pfEnabled);
HRESULT GetDriverInfoDword( [in] GUID guidQuery, [out] DWORD *pdwInfo);
HRESULT GetDriverInfoString( [in] GUID guidDriverQuery, [in] LANGID wLangID, [out] LPOLESTR * ppszInfo );
HRESULT GetErrorDescriptionOle( VARIANT scErrorCode,VARIANT wLangLocalId, VARIANT* pbstrErrorDesc);
HRESULT GetExceptionAction( VARIANT dwListIndex, VARIANT *pdwAction);
HRESULT GetExceptionDescription( VARIANT dwListIndex, VARIANT* vtpbstrExceptionDescription);
HRESULT GetHaltReasons(VARIANT dwIndex,VARIANT*pdwHaltReasonCode,VARIANT*ppdwExceptionCode,VARIANT*ppChance,[out] VARIANT*ppieXdiCodeBP,[out] VARIANT*ppieXdiDataBP);
HRESULT GetLinearMemMapList( [out] DWORD *pdwNbTotalMemMapInList, [out, size_is(,*pdwNbTotalMemMapInList)] MEMMAP_DESCRIPTION_TYPE **ppmmdTable);
HRESULT GetListOfAllCpuRegGroupNames( VARIANT* pvtArrayOfGroupNames);
HRESULT GetListOfAllCpuRegNameInAGroup( VARIANT dwGroupIndex, VARIANT* pvtArrayOfCpuRegNames, VARIANT* pfDefaultActiveState);
HRESULT GetListOfAllCpuRegNames( VARIANT* pvtArrayOfCpuRegNames);
HRESULT GetMemAccessExclusionRange( [in] LINEAR_MEM_MAP_TYPE lmt, [out] DWORD* pdwNbTotalExclRange, [out, size_is(,*pdwNbTotalExclRange)] MEM_ACCESS_EXCLUSION_RANGE** ppmaerExclusionList);
HRESULT GetMemMapId(VARIANT dwListIndex, VARIANT* pdwMemMapId);
HRESULT GetMemMapMaxAddrHi( VARIANT dwListIndex, VARIANT* pdwMemMapMaxAddrHi);
HRESULT GetMemMapMaxAddrLo( VARIANT dwListIndex, VARIANT* pdwMemMapMaxAddrLo);
HRESULT GetMemMapName( VARIANT dwListIndex, VARIANT* vtpbstrMemMapName);
HRESULT GetMemMapWidthUsage( VARIANT dwListIndex, VARIANT *pdwMemMapWidthUsage);
HRESULT GetNbBpAvail( DWORD* pdwNbHwCodeBpAvail, DWORD* pdwNbSwCodeBpAvail, DWORD* pdwNbHwDataBpAvail, DWORD* pdwNbSwDataBpAvail);
HRESULT GetOsAxsService( [out] ICcService**ppiOsAxsService);
HRESULT GetStdRegAlias( LPOLESTR szStdRegName, LPOLESTR* pszRegName);
HRESULT GetStdRegAliasOle( VARIANT strStdRegName, VARIANT* pbstrRegName);
HRESULT InitAndLockHelper( IeXdi2Exec* pieXdi2ExecDownLink, IeXdi2Mem* pieXdi2MemDownLink, IeXdi2ClientNotifyMemChg* pieXdiClientNotifMemChg2UpLink, IeXdi2ClientNotifyRunChg* pieXdiClientNotifRunChg2UpLink, IeXdi2ClientAuthorizeContinuation* pieXdiClientAuthorizeContUpLink, MISC_EXDIACCESS_SERVICE_INFO measInfo);
HRESULT InitAndLockProbeHandler( IeXdi2ClientNotifyMemChg* pieXdiClientNotifMemChg2UpLink, IeXdi2ClientNotifyRunChg* pieXdiClientNotifRunChg2UpLink, IeXdi2ClientAuthorizeContinuation* pieXdiClientAuthorizeContUpLink, MISC_EXDIACCESS_SERVICE_INFO measInfo);
HRESULT ListAllCodeBp( VARIANT* pvtArrayOfPIeXdiCBP2);
HRESULT ListAllDataBp( VARIANT* pvtArrayOfPIeXdiDBP2);
HRESULT LockChanges(BOOL fLock);
HRESULT LockChangesAll( BOOL fLock);
HRESULT LockHelper ();
HRESULT LockProbe ();
HRESULT LockUnlockCodeBpChanges( VARIANT pieXdiCBP2, VARIANT fLock);
HRESULT LockUnlockDataBpChanges( VARIANT pieXdiDBP2, VARIANT fLock);
HRESULT NotifyCpuRegChange();
HRESULT NotifyErrorState();
HRESULT NotifyHalt( VARIANT dwAddressStopped);
HRESULT NotifyMemoryChangeOle( VARIANT dwMemMap, VARIANT dwAddressHi, VARIANT dwAddressLo, VARIANT cElements, VARIANT ByteAccessWidth);
HRESULT NotifyReset();
HRESULT NotifyRun();
HRESULT NotifyRunStateChange( [in] RUN_STATUS_TYPE2 ers2Current, [in] DWORD dwNbOfHaltReasons, [in, size_is (dwNbOfHaltReasons)] HALT_REASON_TYPE2 *pehr2List, [in] ADDRESS_TYPE CurrentExecAddress, [in] DWORD64dw64CycleSinceLastRun);
HRESULT ReadAll( [in] DWORD dwCpuNum, [out] DWORD *pdwNbRegsInList, [out, size_is(,*pdwNbRegsInList)] REGVAL_TYPE** pprvList);
HRESULT ReadClientScratchPad( [in] GUIDguidClient, [out] DWORD* pdwBuffOutSize, [out, size_is(,*pdwBuffOutSize)] BYTE** ppbBufferOut);
HRESULT ReadCpuRegByName( DWORD dwCpuNum, LPOLESTR szRegName, REGVAL_TYPE* prv);
HRESULT ReadMemOle( VARIANT dwCpuNum, VARIANT dwMemMap, VARIANT dwAddressHi, VARIANT dwAddressLo, VARIANT cElements, VARIANT dwByteAccessWidth, VARIANT* pvtArrayOfByteRead);
HRESULT ReadMemoryX( [in] DWORD dwCpuNum, [in] LINEAR_MEM_MAP_TYPElmt, [in] ADDRESS_TYPEAddress, [in] DWORDdwNbElemToRead, [in] BYTEbAccessWidthInBytes, [out, size_is(dwNbElemToRead*bAccessWidthInBytes)] BYTE* pbReadBuffer, [out] DWORD* pdwNbElementEffectRead);
HRESULT ReadRegByNameOle( VARIANT dwCpuNum, VARIANT strRegName, VARIANT*pvtVal);
HRESULT RegisterEmbeddedBpOpCode( [in] DWORD dwOpCodeSizeInByte, [in, size_is(dwOpCodeSizeInByte)] const BYTE* pbOpCode, [in] DWORDdwExecMode, [in] BOOL fToBeUsedAsSwBp);
HRESULT RegisterNewEmbeddedBpOpCodeOle( VARIANT* pvtArrayOfByteForOpCode, VARIANT dwExecMode, VARIANT fToBeUsedAsSwBp);
HRESULT SearchMemOle( VARIANT dwCpuNum, VARIANT dwMemMap, VARIANT AddressStart, VARIANT AddressEnd, VARIANT dwAccessWidth, VARIANT* pvtArrayOfByteSearch, VARIANT*pfFound, VARIANT*pAddrFound);
HRESULT SearchMemoryX( [in] DWORDdwCpuNum, [in] LINEAR_MEM_MAP_TYPElmt, [in] ADDRESS_TYPEAddressRangeStart, [in] ADDRESS_TYPEAddressRangeEnd, [in] DWORDdwNbElem, [in] BYTEbAccessWidthInBytes, [in, size_is(dwNbElem*bAccessWidthInBytes)] BYTE* pbSequenceToSearch, [out] ADDRESS_TYPE** ppAddressFound);
HRESULT SetMemAccessExclusionRange( [in] LINEAR_MEM_MAP_TYPE lmt, [in] DWORD dwNbTotalExclRange, [in, size_is(dwNbTotalExclRange)] MEM_ACCESS_EXCLUSION_RANGE* pmaerExclusionList);
HRESULT SingleStep( BOOL fIgnoreCurrentExcept, BOOLfOneCycleOnly);
HRESULT SingleStepOle( VARIANT fOneCycleOnly);
HRESULT UnlockHelper ();
HRESULT UnlockProbe ();
HRESULT UnregisterEmbeddedBpOpCode( [in] DWORD dwOpCodeSizeInByte, [in, size_is(dwOpCodeSizeInByte)] const BYTE *pbOpCode, [in] DWORD dwExecMode);
HRESULT UnregisterEmbeddedBpOpCodeOle( VARIANT* pvtArrayOfByteForOpCode, VARIANT dwExecMode);
HRESULT WriteAll( [in] DWORDdwCpuNum, [in] DWORD dwNbRegsInList, [in, size_is(dwNbRegsInList)] REGVAL_TYPE* prvList);
HRESULT WriteClientScratchPad( [in] GUID guidClient, [in] DWORD dwBuffInSize, [in, size_is(dwBuffInSize)] const BYTE* pbBufferIn);
HRESULT WriteCpuRegByName( DWORD dwCpuNum, LPOLESTR szRegName, REGVAL_TYPE rv);
HRESULT WriteMemOle( VARIANT dwCpuNum, VARIANT dwMemMap, VARIANT dwAddressHi, VARIANT dwAddressLo, VARIANT dwByteAccessWidth, VARIANT* pvtArrayOfByteWrite);
HRESULT WriteMemoryX( [in] DWORDdwCpuNum, [in] LINEAR_MEM_MAP_TYPElmt, [in] ADDRESS_TYPEAddress, [in] DWORD dwNbElemToWrite, [in] BYTEbAccessWidthInBytes, [in, size_is(dwNbElemToWrite*bAccessWidthInBytes)] const BYTE*pbWriteBuffer, [out] DWORD* pdwNbElementEffectWritten);
HRESULT WriteRegByNameOle( VARIANT dwCpuNum, VARIANT strRegName, VARIANT vtVal);

#endif /* _EXDI2_ */
