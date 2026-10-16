/* eXDI2.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 27 constants, 149 declarations, 0 outlines, 0 base types, 0 extra macros, 86 extra decls
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
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* ADDRESS_RANGE  [struct; ce-only; CE 5.0..699] */
typedef struct _ADDRESS_RANGE {
 ADDRESS_TYPE AddrStart;
 ADDRESS_TYPE AddrEnd;
} ADDRESS_RANGE;

/* BP_KIND  [enum; ce-only; CE 5.0..699] */
typedef enum _BP_KIND {
 bptAlgo,
 bptHW,
 bptSW
} BP_KIND;

/* BREAKPOINT_SUPPORT_TYPE2  [struct; ce-only; CE 5.0..699] */
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

/* CODE_BP_TYPE  [struct; ce-only; CE 5.0..699] */
typedef struct _CODE_BP_TYPE {
 BP_KIND bpk;
 BOOL fPhys;
 DWORD dwExecMode;
 ADDRESS_TYPE Address;
 DWORD dwTotalBypassCount;
 BOOL fEnabled;
} CODE_BP_TYPE;

/* CPU_REG_STRUCT  [struct; ce-only; CE 5.0..699] */
typedef struct _CPU_REG_STRUCT {
 LPOLESTR szRegName;
 CPU_REG_VS6_DISP_STRUCT sVs6Disp;
} CPU_REG_STRUCT;

/* DATA_BP_TYPE  [struct; ce-only; CE 5.0..699] */
typedef struct _DATA_BP_TYPE {
 BP_KIND bpk;
 MEM_TYPE2 mt2;
 BYTE bAddressSpace;
 ADDRESS_TYPE Address;
 ADDRESS_TYPE AddressMask;
 LPOLESTR szRegName;
 REGVAL_TYPE rvData;
 REGVAL_TYPE rvDataMask;
 BYTE bAccessWidthInBytes;
 DATA_ACCESS_TYPE da;
 DWORD dwTotalBypassCount;
 BOOL fEnabled;
} DATA_BP_TYPE;

/* DEBUG_ACCESS_CAPABILITIES_STRUCT2  [struct; ce-only; CE 5.0..699] */
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

/* EXCEPTION_CHANCE  [enum; ce-only; CE 5.0..699] */
typedef enum _EXCEPTION_CHANCE {
 ec1stChance = 0,
 ec2ndChance
} EXCEPTION_CHANCE;

/* EXCEPTION_DEFAULT_ACTION_TYPE2  [enum; ce-only; CE 5.0..699] */
typedef enum _EXCEPTION_DEFAULT_ACTION_TYPE2 {
 eda2IgnoreAll = 0,
 eda2NotifyAll,
 eda2StopAll,
 eda2Ignore1stChc,
 eda2Notify1stChc
} EXCEPTION_DEFAULT_ACTION_TYPE2;

/* EXCEPTION_TYPE2  [struct; ce-only; CE 5.0..699] */
typedef struct _EXCEPTION_TYPE2 {
 DWORD dwExceptionCode;
 EXCEPTION_CHANCE ec;
} EXCEPTION_TYPE2;

/* GLOBAL_TARGET_INFO_STRUCT2  [struct; ce-only; CE 5.0..699] */
typedef struct _GLOBAL_TARGET_INFO_STRUCT2 {
 DWORD dwTargetCpuMajorFamily;
 DWORD dwTargetCpuCapabilities;
 DWORD dwNumberOfCpus;
 LPOLESTR szTargetName;
 LPOLESTR szProbeName;
} GLOBAL_TARGET_INFO_STRUCT2;

/* HALT_REASON_CODE_TYPE2  [enum; ce-only; CE 5.0..699] */
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

/* HALT_REASON_TYPE2  [struct; ce-only; CE 5.0..699] */
typedef struct _HALT_REASON_TYPE2 {
 HALT_REASON_CODE_TYPE2 hrc2;
 DWORD dwCpuNum; [unique] IeXdi2CodeBp* pieXdi2CodeBp;
 [unique] IeXdi2DataBp* pieXdi2DataBp;
 [unique] EXCEPTION_TYPE2* pet;
} HALT_REASON_TYPE2;

/* LINEAR_MEM_MAP_TYPE  [typedef; ce-only; CE 5.0..699] */
typedef DWORD LINEAR_MEM_MAP_TYPE;

/* MEM_ACCESS_EXCLUSION_RANGE  [struct; ce-only; CE 5.0..699] */
typedef struct _MEM_ACCESS_EXCLUSION_RANGE {
 ADDRESS_RANGE ar;
 DATA_ACCESS_TYPE da;
} MEM_ACCESS_EXCLUSION_RANGE;

/* MEM_TYPE2  [enum; ce-only; CE 5.0..699] */
typedef enum _MEM_TYPE2 {
 mt2Virtual,
 mt2PhysicalOrPeriIO,
 mt2CpuReg
} MEM_TYPE2;

/* MEMMAP_DESCRIPTION_TYPE  [struct; ce-only; CE 5.0..699] */
typedef struct _MEMMAP_DESCRIPTION_TYPE {
 LPOLESTR szName;
 LINEAR_MEM_MAP_TYPE dwId;
 ADDRESS_TYPE MaxAddr;
 BYTE bByteWidthBitfield;
} MEMMAP_DESCRIPTION_TYPE;

/* MISC_EXDIACCESS_SERVICE_INFO  [struct; ce-only; CE 5.0..699] */
typedef struct _MISC_EXDIACCESS_SERVICE_INFO {
 IUnknown* piunkeXdiHandler;
 IUnknown* piunkProbeHandler;
} MISC_EXDIACCESS_SERVICE_INFO;

/* RUN_STATUS_TYPE2  [enum; ce-only; CE 5.0..699] */
typedef enum _RUN_STATUS_TYPE2 {
 rs2Running,
 rs2Halted,
 rs2Reset,
 rs2Error,
 rs2Unknown
} RUN_STATUS_TYPE2;

/* TRISTATE_TYPE  [enum; ce-only; CE 5.0..699] */
typedef enum _TRISTATE_TYPE {
 tsDisable = 0,
 tsEnable = 1,
 tsDontCare = 2
} TRISTATE_TYPE;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* IeXdi2ClientAuthorizeContinuation::AuthorizeTargetRestart  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT AuthorizeTargetRestart(
 BOOL * pfContinue,
 DWORD *
 pdwRetryDelayMs
);

/* IeXdi2ClientNotifyMemChg::NotifyMemoryChange  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT NotifyMemoryChange(
 MEM_TYPE2 mt2Changed,
 ADDRESS_TYPE Address,
 BYTE bAddressSpace,
 DWORD dwNbElemChanged,
 BYTE bAccessWidthInBytes
);

/* IeXdi2ClientNotifyRunChg::NotifyRunStateChange  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT NotifyRunStateChange(
 [in] RUN_STATUS_TYPE2 ers2Current,
 [in] DWORD dwNbOfHaltReasons,
 [in, size_is (dwNbOfHaltReasons)] HALT_REASON_TYPE2 * pehr2List,
 [in] ADDRESS_TYPE CurrentExecAddress,
 [in] DWORD64 dw64CycleSinceLastRun
);

/* IeXdi2CodeBp::GetAttributes  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT GetAttributes(
 CODE_BP_TYPE* pcbp,
 DWORD* pdwBypassedOccurences
);

/* IeXdi2CodeBp::LockChanges  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT LockChanges(
 BOOL fLock
);

/* IeXdi2CodeBp::SetState  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT SetState(
 BOOL fEnabled,
 BOOL fResetBypassedOccurences
);

/* IeXdi2DataBp::GetAttributes  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT GetAttributes(
 DATA_BP_TYPE * pdbp,
 DWORD * pdwBypassedOccurences
);

/* IeXdi2DataBp::LockChanges  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT LockChanges(
 BOOL fLock
);

/* IeXdi2DataBp::SetState  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT SetState(
 BOOL fEnabled,
 BOOL fResetBypassedOccurences 
);

/* IeXdi2EnumCodeBp::Clone  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT Clone(
 IeXdi2EnumCodeBp** ppieXdi2EnumCodeBp
);

/* IeXdi2EnumCodeBp::DisableAll  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT DisableAll(void);

/* IeXdi2EnumCodeBp::EnableAll  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT EnableAll(void);

/* IeXdi2EnumCodeBp::GetCount  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT GetCount(
 DWORD* pcelt
);

/* IeXdi2EnumCodeBp::GetNext  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT GetNext(
 IeXdi2CodeBp** ppieXdi2CodeBp
);

/* IeXdi2EnumCodeBp::LockChangesAll  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT LockChangesAll(
 BOOL fLock
);

/* IeXdi2EnumCodeBp::Next  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT Next(
 [in] DWORD celt,
 [out, size_is(celt), length_is(* pceltFetched )] IeXdi2CodeBp* apieXdi2CodeBp[],
 [out] DWORD* pceltFetched
);

/* IeXdi2EnumCodeBp::Reset  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT Reset(void);

/* IeXdi2EnumCodeBp::Skip  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT Skip(
 DWORD celt
);

/* IeXdi2EnumCpuRegs::Clone  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT Clone(
 IeXdi2EnumCpuRegs** ppieXdi2EnumCpuRegs
);

/* IeXdi2EnumCpuRegs::GetCount  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT GetCount(
 DWORD *pcelt
);

/* IeXdi2EnumCpuRegs::GetNext  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT GetNext(
 CPU_REG_STRUCT* psCpuRegs
);

/* IeXdi2EnumCpuRegs::Next  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT Next(
 [in] DWORD celt,
 [out, size_is(celt), length_is(*pceltFetched)] CPU_REG_STRUCT asCpuRegs[],
 [out] DWORD* pceltFetched
);

/* IeXdi2EnumCpuRegs::ReadAll  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT ReadAll(
 [in] DWORD dwCpuNum,
 [out] DWORD * pdwNbRegsInList,
 [out, size_is(,*pdwNbRegsInList)] REGVAL_TYPE** pprvList
);

/* IeXdi2EnumCpuRegs::Reset  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT Reset(void);

/* IeXdi2EnumCpuRegs::Skip  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT Skip(
 DWORD celt
);

/* IeXdi2EnumCpuRegs::WriteAll  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT WriteAll(
 [in] DWORD dwCpuNum,
 [in] DWORD dwNbRegsInList,
 [in, size_is(dwNbRegsInList)] REGVAL_TYPE* prvList
);

/* IeXdi2EnumDataBp::Clone  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT Clone(
 IeXdi2EnumDataBp** ppieXdi2EnumDataBp
);

/* IeXdi2EnumDataBp::DisableAll  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT DisableAll(void);

/* IeXdi2EnumDataBp::EnableAll  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT EnableAll(void);

/* IeXdi2EnumDataBp::GetCount  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT GetCount(
 DWORD* pcelt
);

/* IeXdi2EnumDataBp::GetNext  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT GetNext(
 IeXdi2DataBp** ppieXdi2DataBp
);

/* IeXdi2EnumDataBp::LockChangesAll  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT LockChangesAll(
 BOOL fLock
);

/* IeXdi2EnumDataBp::Next  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT Next(
 [in] DWORD celt,
 [out, size_is(celt), length_is(* pceltFetched )] IeXdi2DataBp* apieXdi2DataBp[],
 [out] DWORD* pceltFetched
);

/* IeXdi2EnumDataBp::Reset  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT Reset(void);

/* IeXdi2EnumDataBp::Skip  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT Skip(
 DWORD celt
);

/* IeXdi2Exec::AddCodeBps  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT AddCodeBps(
 [in] DWORD ccbp,
 [in, size_is(ccbp)] CODE_BP_TYPE acbp[],
 [out, size_is(ccbp)] IeXdi2CodeBp* apieXdi2CodeBp[]
);

/* IeXdi2Exec::AddDataBps  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT AddDataBps(
 [in] DWORD cdbp,
 [in, size_is(cdbp)] DATA_BP_TYPE adbp[],
 [out, size_is(cdbp)] IeXdi2DataBp*apieXdi2DataBp[]
);

/* IeXdi2Exec::ChangeExceptionAction  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT ChangeExceptionAction(
 DWORD dwExceptionCode,
 EXCEPTION_DEFAULT_ACTION_TYPE2 efd2
);

/* IeXdi2Exec::EnumAllCodeBps  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT EnumAllCodeBps(
 TRISTATE_TYPE f3Enabled,
 IeXdi2EnumCodeBp** ppieXdi2EnumCodeBp
);

/* IeXdi2Exec::EnumAllDataBps  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT EnumAllDataBps(
 TRISTATE_TYPE f3Enabled,
 IeXdi2EnumDataBp** ppieXdi2EnumDataBp
);

/* IeXdi2Exec::EnumCodeBpsInAddrRange  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT EnumCodeBpsInAddrRange(
 BOOL fPhys,
 ADDRESS_TYPE FirstAddress,
 ADDRESS_TYPE LastAddress,
 TRISTATE_TYPE f3Enabled,
 IeXdi2EnumCodeBp** ppieXdi2EnumCodeBp
);

/* IeXdi2Exec::EnumDataBpsInAddrRange  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT EnumDataBpsInAddrRange(
 MEM_TYPE2 mt2,
 ADDRESS_TYPE FirstAddress,
 ADDRESS_TYPE LastAddress,
 TRISTATE_TYPE f3Enabled,
 IeXdi2EnumDataBp** ppieXdi2EnumDataBp
);

/* IeXdi2Exec::GetBpSupport  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT GetBpSupport(
 BREAKPOINT_SUPPORT_TYPE2* pbps2
);

/* IeXdi2Exec::GetCurrentExecMode  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT GetCurrentExecMode(
 DWORD dwCpuNum,
 DWORD* pdwExecMode
);

/* IeXdi2Exec::GetExceptionDescriptionList  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT GetExceptionDescriptionList(
 [out] DWORD *pdwNbTotalExceptionInList,
 [out, size_is(,* pdwNbTotalExceptionInList)] EXCEPTION_DESCRIPTION_TYPE ** ppedTable
);

/* IeXdi2Exec::GetNbBpAvail  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT GetNbBpAvail(
 DWORD* pdwNbHwCodeBpAvail,
 DWORD* pdwNbSwCodeBpAvail,
 DWORD* pdwNbHwDataBpAvail,
 DWORD* pdwNbSwDataBpAvail
);

/* IeXdi2Exec::GetRunStatus  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT GetRunStatus(
 [out] RUN_STATUS_TYPE2* pers2Current,
 [out] DWORD* pdwNbOfHaltReasons,
 [out, size_is (,* pdwNbOfHaltReasons)] HALT_REASON_TYPE2** ppehr2List,
 [out] ADDRESS_TYPE* pCurrentExecAddress,
 [out] DWORD64* pdw64CycleSinceLastRun
);

/* IeXdi2Exec::Halt  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT Halt(void);

/* IeXdi2Exec::Reboot  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT Reboot(void);

/* IeXdi2Exec::RegisterEmbeddedBpOpCode  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT RegisterEmbeddedBpOpCode(
 [in] DWORD dwOpCodeSizeInByte,
 [in, size_is(dwOpCodeSizeInByte)] const BYTE* pbOpCode,
 [in] DWORD dwExecMode,
 [in] BOOL fToBeUsedAsSwBp
);

/* IeXdi2Exec::Run  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT Run(
 [in] BOOL fIgnoreCurrentExcept
);

/* IeXdi2Exec::SingleStep  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT SingleStep(
 BOOL fIgnoreCurrentExcept,
 BOOL fOneCycleOnly
);

/* IeXdi2Exec::UnregisterEmbeddedBpOpCode  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT UnregisterEmbeddedBpOpCode(
 [in] DWORD dwOpCodeSizeInByte,
 [in, size_is(dwOpCodeSizeInByte)] const BYTE * pbOpCode,
 [in] DWORD dwExecMode
);

/* IeXdi2Generic2::GetDriverInfoDword  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT GetDriverInfoDword(
 [in] GUID guidQuery,
 [out] DWORD *pdwInfo
);

/* IeXdi2Generic2::GetDriverInfoString  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT GetDriverInfoString(
 [in] GUID guidDriverQuery,
 [in] LANGID wLangID,
 [out] LPOLESTR* ppszInfo
);

/* IeXdi2Generic::GetErrorDescription  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT GetErrorDescription(
 HRESULT ErrorCode,
 SHORT wLangLocalId,
 LPOLESTR* pszErrorDesc
 BOOL* pfRetryAvail
);

/* IeXdi2Generic::GetOsAxsService  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT GetOsAxsService(
 [out] ICcService** ppiOsAxsService
);

/* IeXdi2Generic::GetTargetInfo  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT GetTargetInfo(
 GLOBAL_TARGET_INFO_STRUCT2* pgti2
);

/* IeXdi2Generic::Ioctl  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT Ioctl(
 [in] GUID guidIoctl,
 [in] DWORD dwBuffInSize,
 [in, size_is(dwBuffInSize)] const BYTE * pbBufferIn,
 [out] DWORD * pdwBuffOutSize,
 [out, size_is(,* pdwBuffOutSize)] BYTE ** ppbBufferOut
);

/* IeXdi2Generic::ReadClientScratchPad  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT ReadClientScratchPad(
 [in] GUID guidClient,
 [out] DWORD* pdwBuffOutSize,
 [out, size_is(,* pdwBuffOutSize)] BYTE** ppbBufferOut
);

/* IeXdi2Generic::WriteClientScratchPad  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT WriteClientScratchPad(
 [in] GUID guidClient,
 [in] DWORD dwBuffInSize,
 [in, size_is(dwBuffInSize)] const BYTE* pbBufferIn
);

/* IeXdi2HelperGeneric::InitAndLockHelper  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT InitAndLockHelper( 
 IeXdi2Exec* pieXdi2ExecDownLink,
 IeXdi2Mem* pieXdi2MemDownLink,
 IeXdi2ClientNotifyMemChg* pieXdiClientNotifMemChg2UpLink,
 IeXdi2ClientNotifyRunChg* pieXdiClientNotifRunChg2UpLink,
 IeXdi2ClientAuthorizeContinuation* pieXdiClientAuthorizeContUpLink,
 MISC_EXDIACCESS_SERVICE_INFO measInfo
);

/* IeXdi2HelperGeneric::Ioctl  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT Ioctl(
 [in] GUID guidIoctl,
 [in] DWORD dwBuffInSize,
 [in, size_is(dwBuffInSize)] const BYTE* pbBufferIn,
 [out] DWORD* pdwBuffOutSize,
 [out, size_is(,* pdwBuffOutSize)] BYTE** ppbBufferOut
);

/* IeXdi2HelperGeneric::LockHelper  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT LockHelper ();

/* IeXdi2HelperGeneric::UnlockHelper  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT UnlockHelper ();

/* IeXdi2Mem::CopyMemoryX  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT CopyMemoryX(
 DWORD dwCpuNum,
 LINEAR_MEM_MAP_TYPE lmt,
 ADDRESS_TYPE AddressSource,
 ADDRESS_TYPE AddressTarget,
 DWORD dwNbElem,
 BYTE bAccessWidthInBytes
);

/* IeXdi2Mem::CreateCpuRegCustomList  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT CreateCpuRegCustomList(
 [in] DWORD dwNbRegsInList,
 [in, size_is(dwNbRegsInList)] LPOLESTR* pszRegName,
 [out] IeXdi2EnumCpuRegs** ppieXdi2EnumCpuRegs
);

/* IeXdi2Mem::EnumAllCpuRegGroups  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT EnumAllCpuRegGroups(
 [out] DWORD* pdwNbGroups,
 [out, size_is(,*pdwNbGroups)] CPU_REG_GROUP_STRUCT** ppscrg
);

/* IeXdi2Mem::EnumAllCpuRegs  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT EnumAllCpuRegs(
 IeXdi2EnumCpuRegs** ppieXdi2EnumCpuRegs
);

/* IeXdi2Mem::EnumAllCpuRegsInGroup  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT EnumAllCpuRegsInGroup(
 DWORD dwGroupIdx,
 IeXdi2EnumCpuRegs** ppieXdi2EnumCpuRegs
);

/* IeXdi2Mem::FillMemoryX  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT FillMemoryX(
 [in] DWORD dwCpuNum,
 [in] LINEAR_MEM_MAP_TYPE lmt,
 [in] ADDRESS_TYPE AddressRangeStart,
 [in] ADDRESS_TYPE AddressRangeEnd,
 [in] DWORD dwNbElem,
 [in] BYTE bAccessWidthInBytes,
 [in, size_is(dwNbElem* bAccessWidthInBytes)] BYTE* pbSequenceToFill
);

/* IeXdi2Mem::GetLinearMemMapList  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT GetLinearMemMapList(
 [out] DWORD* pdwNbTotalMemMapInList,
 [out, size_is(,*pdwNbTotalMemMapInList)] MEMMAP_DESCRIPTION_TYPE** ppmmdTable
);

/* IeXdi2Mem::GetMemAccessExclusionRange  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT GetMemAccessExclusionRange(
 [in] LINEAR_MEM_MAP_TYPE lmt,
 [out] DWORD* pdwNbTotalExclRange,
 [out, size_is(,*pdwNbTotalExclRange)] MEM_ACCESS_EXCLUSION_RANGE** ppmaerExclusionList
);

/* IeXdi2Mem::GetStdRegAlias  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT GetStdRegAlias(
 LPOLESTR szStdRegName,
 LPOLESTR* pszRegName
);

/* IeXdi2Mem::ReadCpuRegByName  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT ReadCpuRegByName(
 DWORD dwCpuNum,
 LPOLESTR szRegName,
 REGVAL_TYPE* prv
);

/* IeXdi2Mem::ReadMemoryX  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT ReadMemoryX(
 [in] DWORD dwCpuNum,
 [in] LINEAR_MEM_MAP_TYPElmt,
 [in] ADDRESS_TYPE Address,
 [in] DWORD dwNbElemToRead,
 [in] BYTE bAccessWidthInBytes,
 [out, size_is(dwNbElemToRead* bAccessWidthInBytes)] BYTE* pbReadBuffer,
 [out] DWORD* pdwNbElementEffectRead
);

/* IeXdi2Mem::SearchMemoryX  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT SearchMemoryX(
 [in] DWORD dwCpuNum,
 [in] LINEAR_MEM_MAP_TYPE lmt,
 [in] ADDRESS_TYPE AddressRangeStart,
 [in] ADDRESS_TYPE AddressRangeEnd,
 [in] DWORD dwNbElem,
 [in] BYTE bAccessWidthInBytes,
 [in, size_is(dwNbElem* bAccessWidthInBytes)] BYTE* pbSequenceToSearch,
 [out] ADDRESS_TYPE** ppAddressFound
);

/* IeXdi2Mem::SetMemAccessExclusionRange  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT SetMemAccessExclusionRange(
 [in] LINEAR_MEM_MAP_TYPE lmt,
 [in] DWORD dwNbTotalExclRange,
 [in, size_is(dwNbTotalExclRange)] MEM_ACCESS_EXCLUSION_RANGE* pmaerExclusionList
);

/* IeXdi2Mem::WriteCpuRegByName  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT WriteCpuRegByName(
 DWORD dwCpuNum,
 LPOLESTR szRegName,
 REGVAL_TYPE rv
);

/* IeXdi2Mem::WriteMemoryX  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT WriteMemoryX(
 [in] DWORD dwCpuNum,
 [in] LINEAR_MEM_MAP_TYPE lmt,
 [in] ADDRESS_TYPE Address,
 [in] DWORD dwNbElemToWrite,
 [in] BYTE bAccessWidthInBytes,
 [in, size_is(dwNbElemToWrite* bAccessWidthInBytes)] const BYTE*
 pbWriteBuffer,
 [out] DWORD* pdwNbElementEffectWritten
);

/* IeXdi2OleAutoServer::AddCodeBpOle  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT AddCodeBpOle(
 VARIANT bpKind,
 VARIANT fVirtMem,
 VARIANT dwExecMode,
 VARIANT dwAddress,
 VARIANT dwTotalBypassCount,
 VARIANT* pvtPIeXdiCBP2
);

/* IeXdi2OleAutoServer::AddDataBpOle  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT AddDataBpOle(
 VARIANT bpKind,
 VARIANT MemType,
 VARIANT dwAddressSpace,
 VARIANT dwAddress,
 VARIANT AddressMask,
 VARIANT strRegName,
 VARIANT Data,
 VARIANT DataMask,
 VARIANT RWAccessType,
 VARIANT dwAccessWidth,
 VARIANT dwTotalBypassCount,
 VARIANT* pvtPIeXdiDBP2
);

/* IeXdi2OleAutoServer::ChangeExceptionActionOle  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT ChangeExceptionActionOle(
 VARIANT dwListIndex,
 VARIANT dwAction
);

/* IeXdi2OleAutoServer::CopyMemOle  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT CopyMemOle(
 VARIANT dwCpuNum,
 VARIANT dwMemMap,
 VARIANT AddressSource,
 VARIANT AddressTarget,
 VARIANT cElements,
 VARIANT dwAccessWidth
);

/* IeXdi2OleAutoServer::EnableCodeBp  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT EnableCodeBp(
 VARIANT pieXdiCBP2,
 VARIANT fEnable
);

/* IeXdi2OleAutoServer::EnableDataBp  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT EnableDataBp(
 VARIANT pieXdiDBP2,
 VARIANT fEnable
);

/* IeXdi2OleAutoServer::FillMemOle  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT FillMemOle(
 VARIANT dwCpuNum,
 VARIANT dwMemMap,
 VARIANT AddressStart,
 VARIANT AddressEnd,
 VARIANT cElements,
 VARIANT dwAccessWidth,
 VARIANT* pvtArrayOfByteFill
);

/* IeXdi2OleAutoServer::GetCodeBpAttributes  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT GetCodeBpAttributes(
 VARIANT pieXdiCBP2,
 VARIANT* pbpKind,
 VARIANT* pfVirtMem,
 VARIANT* pdwExecMode,
 VARIANT* pAddress,
 VARIANT* pdwTotalBypass,
 VARIANT* pdwCurrentBypass,
 VARIANT* pfEnabled
);

/* IeXdi2OleAutoServer::GetDataBpAttributes  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT GetDataBpAttributes(
 VARIANT pieXdiDBP2,
 VARIANT* pbpKind,
 VARIANT* pMemType,
 VARIANT* pdwAddressSpace,
 VARIANT* pAddress,
 VARIANT* pAddressMask,
 VARIANT* pstrRegName,
 VARIANT* pData,
 VARIANT* pDataMask,
 VARIANT* pRWAccessType,
 VARIANT* pdwAccessWidth,
 VARIANT* pdwTotalBypassCount,
 VARIANT* pdwCurrentBypassCount,
 VARIANT* pfEnabled
);

/* IeXdi2OleAutoServer::GetErrorDescriptionOle  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT GetErrorDescriptionOle(
 VARIANT scErrorCode,
 VARIANT wLangLocalId,
 VARIANT* pbstrErrorDesc
);

/* IeXdi2OleAutoServer::GetExceptionAction  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT GetExceptionAction(
 VARIANT dwListIndex,
 VARIANT* pdwAction
);

/* IeXdi2OleAutoServer::GetExceptionCode  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT GetExceptionCode(
 VARIANT dwListIndex,
 VARIANT* pdwExceptionCode
);

/* IeXdi2OleAutoServer::GetExceptionDescription  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT GetExceptionDescription(
 VARIANT dwListIndex,
 VARIANT* vtpbstrExceptionDescription
);

/* IeXdi2OleAutoServer::GetHaltReasons  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT GetHaltReasons(
 VARIANT dwIndex,
 VARIANT* pdwHaltReasonCode,
 VARIANT* ppdwExceptionCode,
 VARIANT* ppChance,
 [out] VARIANT* ppieXdiCodeBP,
 [out] VARIANT* ppieXdiDataBP
);

/* IeXdi2OleAutoServer::GetListOfAllCpuRegGroupNames  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT GetListOfAllCpuRegGroupNames(
 VARIANT* pvtArrayOfGroupNames
);

/* IeXdi2OleAutoServer::GetListOfAllCpuRegNameInAGroup  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT GetListOfAllCpuRegNameInAGroup(
 VARIANT dwGroupIndex,
 VARIANT* pvtArrayOfCpuRegNames,
 VARIANT* pfDefaultActiveState
);

/* IeXdi2OleAutoServer::GetListOfAllCpuRegNames  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT GetListOfAllCpuRegNames(
 VARIANT* pvtArrayOfCpuRegNames
);

/* IeXdi2OleAutoServer::GetMemMapId  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT GetMemMapId(
 VARIANT dwListIndex,
 VARIANT* pdwMemMapId
);

/* IeXdi2OleAutoServer::GetMemMapMaxAddrHi  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT GetMemMapMaxAddrHi(
 VARIANT dwListIndex,
 VARIANT* pdwMemMapMaxAddrHi
);

/* IeXdi2OleAutoServer::GetMemMapMaxAddrLo  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT GetMemMapMaxAddrLo(
 VARIANT dwListIndex,
 VARIANT* pdwMemMapMaxAddrLo
);

/* IeXdi2OleAutoServer::GetMemMapName  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT GetMemMapName(
 VARIANT dwListIndex,
 VARIANT* vtpbstrMemMapName
);

/* IeXdi2OleAutoServer::GetMemMapWidthUsage  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT GetMemMapWidthUsage(
 VARIANT dwListIndex,
 VARIANT *pdwMemMapWidthUsage
);

/* IeXdi2OleAutoServer::GetStdRegAliasOle  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT GetStdRegAliasOle(
 VARIANT strStdRegName,
 VARIANT* pbstrRegName
);

/* IeXdi2OleAutoServer::ListAllCodeBp  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT ListAllCodeBp(
 VARIANT* pvtArrayOfPIeXdiCBP2
);

/* IeXdi2OleAutoServer::ListAllDataBp  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT ListAllDataBp(
 VARIANT* pvtArrayOfPIeXdiDBP2
);

/* IeXdi2OleAutoServer::LockUnlockCodeBpChanges  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT LockUnlockCodeBpChanges(
 VARIANT pieXdiCBP2,
 VARIANT fLock
);

/* IeXdi2OleAutoServer::LockUnlockDataBpChanges  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT LockUnlockDataBpChanges(
 VARIANT pieXdiDBP2,
 VARIANT fLock
);

/* IeXdi2OleAutoServer::ReadMemOle  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT ReadMemOle(
 VARIANT dwCpuNum,
 VARIANT dwMemMap,
 VARIANT dwAddressHi,
 VARIANT dwAddressLo,
 VARIANT cElements,
 VARIANT dwByteAccessWidth,
 VARIANT* pvtArrayOfByteRead
);

/* IeXdi2OleAutoServer::ReadRegByNameOle  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT ReadRegByNameOle(
 VARIANT dwCpuNum,
 VARIANT strRegName,
 VARIANT* pvtVal
);

/* IeXdi2OleAutoServer::RegisterNewEmbeddedBpOpCodeOle  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT RegisterNewEmbeddedBpOpCodeOle(
 VARIANT* pvtArrayOfByteForOpCode,
 VARIANT dwExecMode,
 VARIANT fToBeUsedAsSwBp
);

/* IeXdi2OleAutoServer::SearchMemOle  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT SearchMemOle(
 VARIANT dwCpuNum,
 VARIANT dwMemMap,
 VARIANT AddressStart,
 VARIANT AddressEnd,
 VARIANT dwAccessWidth,
 VARIANT* pvtArrayOfByteSearch,
 VARIANT* pfFound,
 VARIANT*pAddrFound
);

/* IeXdi2OleAutoServer::SingleStepOle  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT SingleStepOle(
 VARIANT fOneCycleOnly
);

/* IeXdi2OleAutoServer::UnregisterEmbeddedBpOpCodeOle  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT UnregisterEmbeddedBpOpCodeOle(
 VARIANT* pvtArrayOfByteForOpCode,
 VARIANT dwExecMode
);

/* IeXdi2OleAutoServer::WriteMemOle  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT WriteMemOle(
 VARIANT dwCpuNum,
 VARIANT dwMemMap,
 VARIANT dwAddressHi,
 VARIANT dwAddressLo,
 VARIANT dwByteAccessWidth,
 VARIANT* pvtArrayOfByteWrite
);

/* IeXdi2OleAutoServer::WriteRegByNameOle  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT WriteRegByNameOle(
 VARIANT dwCpuNum,
 VARIANT strRegName,
 VARIANT vtVal
);

/* IeXdi2OleEvents::AuthorizeTargetRestartOle  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT AuthorizeTargetRestartOle(
 VARIANT* pfContinue,
 VARIANT* pdwRetryDelayMs
);

/* IeXdi2OleEvents::NotifyCpuRegChange  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT NotifyCpuRegChange();

/* IeXdi2OleEvents::NotifyErrorState  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT NotifyErrorState();

/* IeXdi2OleEvents::NotifyHalt  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT NotifyHalt(
 VARIANT dwAddressStopped
);

/* IeXdi2OleEvents::NotifyMemoryChangeOle  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT NotifyMemoryChangeOle(
 VARIANT dwMemMap,
 VARIANT dwAddressHi,
 VARIANT dwAddressLo,
 VARIANT cElements,
 VARIANT ByteAccessWidth
);

/* IeXdi2OleEvents::NotifyReset  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT NotifyReset();

/* IeXdi2OleEvents::NotifyRun  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT NotifyRun();

/* IeXdi2ProbeHandlerGeneric::Connect  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT Connect(
 DWORD dwTimeout,
 BOOL fAsync,
 HANDLE_PTR hConnected,
 HANDLE_PTR hAbort
);

/* IeXdi2ProbeHandlerGeneric::Disconnect  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT Disconnect(
 DWORD dwTimeout
);

/* IeXdi2ProbeHandlerGeneric::GetTargetInfo  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT GetTargetInfo(
 GLOBAL_TARGET_INFO_STRUCT2* pgti2
);

/* IeXdi2ProbeHandlerGeneric::InitAndLockProbeHandler  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT InitAndLockProbeHandler(
 IeXdi2ClientNotifyMemChg* pieXdiClientNotifMemChg2UpLink,
 IeXdi2ClientNotifyRunChg* pieXdiClientNotifRunChg2UpLink,
 IeXdi2ClientAuthorizeContinuation* pieXdiClientAuthorizeContUpLink,
 MISC_EXDIACCESS_SERVICE_INFO measInfo
);

/* IeXdi2ProbeHandlerGeneric::LockProbe  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT LockProbe ();

/* IeXdi2ProbeHandlerGeneric::UnlockProbe  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT UnlockProbe ();

/* IFlexiPTMInfo::GetData2  [function; ce-only; CE 5.0..699; ole32.lib, oleaut32.lib] */
HRESULT GetData2(
 [in] FLEXI_GETDATA_TYPE2 fgds2,
 [out, size_is(,*pcProcess)] PTM_RAW_DATA** ppdatProcess,
 [out] DWORD * pcProcess,
 [out] DWORD* pcProcessTotal,
 [out, size_is(,*pcThread)] PTM_RAW_DATA ** ppdatThread,
 [out] DWORD* pcThread,
 [out] DWORD* pcThreadTotal,
 [out, size_is(,*pcModule)] PTM_RAW_DATA** ppdatModule,
 [out] DWORD* pcModule,
#endif /* _WIN32_WCE */

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
