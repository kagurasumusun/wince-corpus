/* eXDI2.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 22 constants, 19 declarations, 1 outlines, 0 base types, 0 extra macros, 62 extra decls
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
#define LMM_IO 2
#define LMM_PHYS 1
#define LMM_VIRT 0

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
#ifndef __WINCE_DEFINED__BP_KIND
#define __WINCE_DEFINED__BP_KIND
#ifndef __WINCE_DEFINED_BP_KIND
#define __WINCE_DEFINED_BP_KIND
typedef enum _BP_KIND {
 bptAlgo,
 bptHW,
 bptSW
} BP_KIND;
#endif /* __WINCE_DEFINED_BP_KIND */
#endif /* __WINCE_DEFINED__BP_KIND */
#ifndef __WINCE_DEFINED_PBP_KIND
#define __WINCE_DEFINED_PBP_KIND
typedef BP_KIND *PBP_KIND, *LPBP_KIND;
#endif /* __WINCE_DEFINED_PBP_KIND */

/* BREAKPOINT_SUPPORT_TYPE2  [struct; ce-only] */
#ifndef __WINCE_DEFINED__BREAKPOINT_SUPPORT_TYPE2
#define __WINCE_DEFINED__BREAKPOINT_SUPPORT_TYPE2
#ifndef __WINCE_DEFINED_BREAKPOINT_SUPPORT_TYPE2
#define __WINCE_DEFINED_BREAKPOINT_SUPPORT_TYPE2
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
#endif /* __WINCE_DEFINED_BREAKPOINT_SUPPORT_TYPE2 */
#endif /* __WINCE_DEFINED__BREAKPOINT_SUPPORT_TYPE2 */
#ifndef __WINCE_DEFINED_PBREAKPOINT_SUPPORT_TYPE2
#define __WINCE_DEFINED_PBREAKPOINT_SUPPORT_TYPE2
typedef BREAKPOINT_SUPPORT_TYPE2 *PBREAKPOINT_SUPPORT_TYPE2, *LPBREAKPOINT_SUPPORT_TYPE2;
#endif /* __WINCE_DEFINED_PBREAKPOINT_SUPPORT_TYPE2 */

/* DEBUG_ACCESS_CAPABILITIES_STRUCT2  [struct; ce-only] */
#ifndef __WINCE_DEFINED__DEBUG_ACCESS_CAPABILITIES_STRUCT2
#define __WINCE_DEFINED__DEBUG_ACCESS_CAPABILITIES_STRUCT2
#ifndef __WINCE_DEFINED_DEBUG_ACCESS_CAPABILITIES_STRUCT2
#define __WINCE_DEFINED_DEBUG_ACCESS_CAPABILITIES_STRUCT2
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
#endif /* __WINCE_DEFINED_DEBUG_ACCESS_CAPABILITIES_STRUCT2 */
#endif /* __WINCE_DEFINED__DEBUG_ACCESS_CAPABILITIES_STRUCT2 */
#ifndef __WINCE_DEFINED_PDEBUG_ACCESS_CAPABILITIES_STRUCT2
#define __WINCE_DEFINED_PDEBUG_ACCESS_CAPABILITIES_STRUCT2
typedef DEBUG_ACCESS_CAPABILITIES_STRUCT2 *PDEBUG_ACCESS_CAPABILITIES_STRUCT2, *LPDEBUG_ACCESS_CAPABILITIES_STRUCT2;
#endif /* __WINCE_DEFINED_PDEBUG_ACCESS_CAPABILITIES_STRUCT2 */

/* EXCEPTION_CHANCE  [enum; ce-only] */
#ifndef __WINCE_DEFINED__EXCEPTION_CHANCE
#define __WINCE_DEFINED__EXCEPTION_CHANCE
#ifndef __WINCE_DEFINED_EXCEPTION_CHANCE
#define __WINCE_DEFINED_EXCEPTION_CHANCE
typedef enum _EXCEPTION_CHANCE {
 ec1stChance = 0,
 ec2ndChance
} EXCEPTION_CHANCE;
#endif /* __WINCE_DEFINED_EXCEPTION_CHANCE */
#endif /* __WINCE_DEFINED__EXCEPTION_CHANCE */
#ifndef __WINCE_DEFINED_PEXCEPTION_CHANCE
#define __WINCE_DEFINED_PEXCEPTION_CHANCE
typedef EXCEPTION_CHANCE *PEXCEPTION_CHANCE, *LPEXCEPTION_CHANCE;
#endif /* __WINCE_DEFINED_PEXCEPTION_CHANCE */

/* EXCEPTION_DEFAULT_ACTION_TYPE2  [enum; ce-only] */
#ifndef __WINCE_DEFINED__EXCEPTION_DEFAULT_ACTION_TYPE2
#define __WINCE_DEFINED__EXCEPTION_DEFAULT_ACTION_TYPE2
#ifndef __WINCE_DEFINED_EXCEPTION_DEFAULT_ACTION_TYPE2
#define __WINCE_DEFINED_EXCEPTION_DEFAULT_ACTION_TYPE2
typedef enum _EXCEPTION_DEFAULT_ACTION_TYPE2 {
 eda2IgnoreAll = 0,
 eda2NotifyAll,
 eda2StopAll,
 eda2Ignore1stChc,
 eda2Notify1stChc
} EXCEPTION_DEFAULT_ACTION_TYPE2;
#endif /* __WINCE_DEFINED_EXCEPTION_DEFAULT_ACTION_TYPE2 */
#endif /* __WINCE_DEFINED__EXCEPTION_DEFAULT_ACTION_TYPE2 */
#ifndef __WINCE_DEFINED_PEXCEPTION_DEFAULT_ACTION_TYPE2
#define __WINCE_DEFINED_PEXCEPTION_DEFAULT_ACTION_TYPE2
typedef EXCEPTION_DEFAULT_ACTION_TYPE2 *PEXCEPTION_DEFAULT_ACTION_TYPE2, *LPEXCEPTION_DEFAULT_ACTION_TYPE2;
#endif /* __WINCE_DEFINED_PEXCEPTION_DEFAULT_ACTION_TYPE2 */

/* EXCEPTION_TYPE2  [struct; ce-only] */
#ifndef __WINCE_DEFINED__EXCEPTION_TYPE2
#define __WINCE_DEFINED__EXCEPTION_TYPE2
#ifndef __WINCE_DEFINED_EXCEPTION_TYPE2
#define __WINCE_DEFINED_EXCEPTION_TYPE2
typedef struct _EXCEPTION_TYPE2 {
 DWORD dwExceptionCode;
 EXCEPTION_CHANCE ec;
} EXCEPTION_TYPE2;
#endif /* __WINCE_DEFINED_EXCEPTION_TYPE2 */
#endif /* __WINCE_DEFINED__EXCEPTION_TYPE2 */
#ifndef __WINCE_DEFINED_PEXCEPTION_TYPE2
#define __WINCE_DEFINED_PEXCEPTION_TYPE2
typedef EXCEPTION_TYPE2 *PEXCEPTION_TYPE2, *LPEXCEPTION_TYPE2;
#endif /* __WINCE_DEFINED_PEXCEPTION_TYPE2 */

/* HALT_REASON_CODE_TYPE2  [enum; ce-only] */
#ifndef __WINCE_DEFINED__HALT_REASON_CODE_TYPE2
#define __WINCE_DEFINED__HALT_REASON_CODE_TYPE2
#ifndef __WINCE_DEFINED_HALT_REASON_CODE_TYPE2
#define __WINCE_DEFINED_HALT_REASON_CODE_TYPE2
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
#endif /* __WINCE_DEFINED_HALT_REASON_CODE_TYPE2 */
#endif /* __WINCE_DEFINED__HALT_REASON_CODE_TYPE2 */
#ifndef __WINCE_DEFINED_PHALT_REASON_CODE_TYPE2
#define __WINCE_DEFINED_PHALT_REASON_CODE_TYPE2
typedef HALT_REASON_CODE_TYPE2 *PHALT_REASON_CODE_TYPE2, *LPHALT_REASON_CODE_TYPE2;
#endif /* __WINCE_DEFINED_PHALT_REASON_CODE_TYPE2 */

/* HALT_REASON_TYPE2  [struct; ce-only] */
#ifndef __WINCE_DEFINED__HALT_REASON_TYPE2
#define __WINCE_DEFINED__HALT_REASON_TYPE2
#ifndef __WINCE_DEFINED_HALT_REASON_TYPE2
#define __WINCE_DEFINED_HALT_REASON_TYPE2
typedef struct _HALT_REASON_TYPE2 {
 HALT_REASON_CODE_TYPE2 hrc2;
 DWORD dwCpuNum; IeXdi2CodeBp* pieXdi2CodeBp;
 IeXdi2DataBp* pieXdi2DataBp;
 EXCEPTION_TYPE2* pet;
} HALT_REASON_TYPE2;
#endif /* __WINCE_DEFINED_HALT_REASON_TYPE2 */
#endif /* __WINCE_DEFINED__HALT_REASON_TYPE2 */
#ifndef __WINCE_DEFINED_PHALT_REASON_TYPE2
#define __WINCE_DEFINED_PHALT_REASON_TYPE2
typedef HALT_REASON_TYPE2 *PHALT_REASON_TYPE2, *LPHALT_REASON_TYPE2;
#endif /* __WINCE_DEFINED_PHALT_REASON_TYPE2 */

/* LINEAR_MEM_MAP_TYPE  [typedef; ce-only] */
#ifndef __WINCE_DEFINED_LINEAR_MEM_MAP_TYPE
#define __WINCE_DEFINED_LINEAR_MEM_MAP_TYPE
typedef DWORD LINEAR_MEM_MAP_TYPE;
#endif /* __WINCE_DEFINED_LINEAR_MEM_MAP_TYPE */

/* MEM_TYPE2  [enum; ce-only] */
#ifndef __WINCE_DEFINED__MEM_TYPE2
#define __WINCE_DEFINED__MEM_TYPE2
#ifndef __WINCE_DEFINED_MEM_TYPE2
#define __WINCE_DEFINED_MEM_TYPE2
typedef enum _MEM_TYPE2 {
 mt2Virtual,
 mt2PhysicalOrPeriIO,
 mt2CpuReg
} MEM_TYPE2;
#endif /* __WINCE_DEFINED_MEM_TYPE2 */
#endif /* __WINCE_DEFINED__MEM_TYPE2 */
#ifndef __WINCE_DEFINED_PMEM_TYPE2
#define __WINCE_DEFINED_PMEM_TYPE2
typedef MEM_TYPE2 *PMEM_TYPE2, *LPMEM_TYPE2;
#endif /* __WINCE_DEFINED_PMEM_TYPE2 */

/* RUN_STATUS_TYPE2  [enum; ce-only] */
#ifndef __WINCE_DEFINED__RUN_STATUS_TYPE2
#define __WINCE_DEFINED__RUN_STATUS_TYPE2
#ifndef __WINCE_DEFINED_RUN_STATUS_TYPE2
#define __WINCE_DEFINED_RUN_STATUS_TYPE2
typedef enum _RUN_STATUS_TYPE2 {
 rs2Running,
 rs2Halted,
 rs2Reset,
 rs2Error,
 rs2Unknown
} RUN_STATUS_TYPE2;
#endif /* __WINCE_DEFINED_RUN_STATUS_TYPE2 */
#endif /* __WINCE_DEFINED__RUN_STATUS_TYPE2 */
#ifndef __WINCE_DEFINED_PRUN_STATUS_TYPE2
#define __WINCE_DEFINED_PRUN_STATUS_TYPE2
typedef RUN_STATUS_TYPE2 *PRUN_STATUS_TYPE2, *LPRUN_STATUS_TYPE2;
#endif /* __WINCE_DEFINED_PRUN_STATUS_TYPE2 */

/* TRISTATE_TYPE  [enum; ce-only] */
#ifndef __WINCE_DEFINED__TRISTATE_TYPE
#define __WINCE_DEFINED__TRISTATE_TYPE
#ifndef __WINCE_DEFINED_TRISTATE_TYPE
#define __WINCE_DEFINED_TRISTATE_TYPE
typedef enum _TRISTATE_TYPE {
 tsDisable = 0,
 tsEnable = 1,
 tsDontCare = 2
} TRISTATE_TYPE;
#endif /* __WINCE_DEFINED_TRISTATE_TYPE */
#endif /* __WINCE_DEFINED__TRISTATE_TYPE */
#ifndef __WINCE_DEFINED_PTRISTATE_TYPE
#define __WINCE_DEFINED_PTRISTATE_TYPE
typedef TRISTATE_TYPE *PTRISTATE_TYPE, *LPTRISTATE_TYPE;
#endif /* __WINCE_DEFINED_PTRISTATE_TYPE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT AuthorizeTargetRestart(BOOL *pfContinue, DWORD *pdwRetryDelayMs);
HRESULT ChangeExceptionAction(DWORD dwExceptionCode, EXCEPTION_DEFAULT_ACTION_TYPE2 efd2);
HRESULT EnumAllCodeBps(TRISTATE_TYPE f3Enabled, IeXdi2EnumCodeBp** ppieXdi2EnumCodeBp);
HRESULT EnumAllCpuRegs(IeXdi2EnumCpuRegs** ppieXdi2EnumCpuRegs);
HRESULT EnumAllCpuRegsInGroup(DWORD dwGroupIdx, IeXdi2EnumCpuRegs** ppieXdi2EnumCpuRegs);
HRESULT EnumAllDataBps(TRISTATE_TYPEf3Enabled, IeXdi2EnumDataBp** ppieXdi2EnumDataBp);
HRESULT GetCurrentExecMode(DWORD dwCpuNum, DWORD* pdwExecMode);
HRESULT GetNbBpAvail(DWORD* pdwNbHwCodeBpAvail, DWORD* pdwNbSwCodeBpAvail, DWORD* pdwNbHwDataBpAvail, DWORD* pdwNbSwDataBpAvail);
HRESULT InitAndLockHelper(IeXdi2Exec* pieXdi2ExecDownLink, IeXdi2Mem* pieXdi2MemDownLink, IeXdi2ClientNotifyMemChg* pieXdiClientNotifMemChg2UpLink, IeXdi2ClientNotifyRunChg* pieXdiClientNotifRunChg2UpLink, IeXdi2ClientAuthorizeContinuation* pieXdiClientAuthorizeContUpLink, MISC_EXDIACCESS_SERVICE_INFO measInfo);
HRESULT InitAndLockProbeHandler(IeXdi2ClientNotifyMemChg* pieXdiClientNotifMemChg2UpLink, IeXdi2ClientNotifyRunChg* pieXdiClientNotifRunChg2UpLink, IeXdi2ClientAuthorizeContinuation* pieXdiClientAuthorizeContUpLink, MISC_EXDIACCESS_SERVICE_INFO measInfo);
HRESULT LockChanges(BOOL fLock);
HRESULT LockChangesAll(BOOL fLock);
HRESULT LockHelper ();
HRESULT LockProbe ();
HRESULT NotifyCpuRegChange();
HRESULT NotifyErrorState();
HRESULT NotifyReset();
HRESULT NotifyRun();
HRESULT SingleStep(BOOL fIgnoreCurrentExcept, BOOL fOneCycleOnly);
HRESULT UnlockHelper ();
HRESULT UnlockProbe ();

#endif /* _EXDI2_ */
