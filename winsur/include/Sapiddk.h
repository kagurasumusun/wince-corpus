/* Sapiddk.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 7 declarations, 0 outlines, 0 base types, 0 extra macros, 56 extra decls
 */
#ifndef _SAPIDDK_
#define _SAPIDDK_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* SPPROPSRC  [enum; ce-only] */
#ifndef __WINCE_DEFINED_SPPROPSRC
#define __WINCE_DEFINED_SPPROPSRC
typedef enum SPPROPSRC{
 SPPROPSRC_RECO_INST,
 SPPROPSRC_RECO_CTX,
 SPPROPSRC_RECO_GRAMMAR
} SPPROPSRC;
#endif /* __WINCE_DEFINED_SPPROPSRC */
#ifndef __WINCE_DEFINED_PSPPROPSRC
#define __WINCE_DEFINED_PSPPROPSRC
typedef SPPROPSRC *PSPPROPSRC, *LPSPPROPSRC;
#endif /* __WINCE_DEFINED_PSPPROPSRC */

/* SPRESULTTYPE  [enum; ce-only] */
#ifndef __WINCE_DEFINED_SPRESULTTYPE
#define __WINCE_DEFINED_SPRESULTTYPE
typedef enum SPRESULTTYPE {
 SPRT_CFG = 0,
 SPRT_SLM = 1,
 SPRT_PROPRIETARY = 2,
 SPRT_FALSE_RECOGNITION = (1 << 1)
} SPRESULTTYPE;
#endif /* __WINCE_DEFINED_SPRESULTTYPE */
#ifndef __WINCE_DEFINED_PSPRESULTTYPE
#define __WINCE_DEFINED_PSPRESULTTYPE
typedef SPRESULTTYPE *PSPRESULTTYPE, *LPSPRESULTTYPE;
#endif /* __WINCE_DEFINED_PSPRESULTTYPE */

/* SPRULEINFOOPT  [enum; ce-only] */
#ifndef __WINCE_DEFINED_SPRULEINFOOPT
#define __WINCE_DEFINED_SPRULEINFOOPT
typedef enum SPRULEINFOOPT{
 SPRIO_NONE = 0
} SPRULEINFOOPT;
#endif /* __WINCE_DEFINED_SPRULEINFOOPT */
#ifndef __WINCE_DEFINED_PSPRULEINFOOPT
#define __WINCE_DEFINED_PSPRULEINFOOPT
typedef SPRULEINFOOPT *PSPRULEINFOOPT, *LPSPRULEINFOOPT;
#endif /* __WINCE_DEFINED_PSPRULEINFOOPT */

/* SPTRANSITIONTYPE  [enum; ce-only] */
#ifndef __WINCE_DEFINED_SPTRANSITIONTYPE
#define __WINCE_DEFINED_SPTRANSITIONTYPE
typedef enum SPTRANSITIONTYPE{
 SPTRANSEPSILON,
 SPTRANSWORD,
 SPTRANSRULE,
 SPTRANSTEXTBUF,
 SPTRANSWILDCARD,
 SPTRANSDICTATION
} SPTRANSITIONTYPE;
#endif /* __WINCE_DEFINED_SPTRANSITIONTYPE */
#ifndef __WINCE_DEFINED_PSPTRANSITIONTYPE
#define __WINCE_DEFINED_PSPTRANSITIONTYPE
typedef SPTRANSITIONTYPE *PSPTRANSITIONTYPE, *LPSPTRANSITIONTYPE;
#endif /* __WINCE_DEFINED_PSPTRANSITIONTYPE */

/* SPVESACTIONS  [enum; ce-only] */
#ifndef __WINCE_DEFINED_SPVESACTIONS
#define __WINCE_DEFINED_SPVESACTIONS
typedef enum SPVESACTIONS{
 SPVES_CONTINUE = 0,
 SPVES_ABORT = (1L << 0),
 SPVES_SKIP = (1L << 1),
 SPVES_RATE = (1L << 2),
 SPVES_VOLUME = (1L << 3)
} SPVESACTIONS;
#endif /* __WINCE_DEFINED_SPVESACTIONS */
#ifndef __WINCE_DEFINED_PSPVESACTIONS
#define __WINCE_DEFINED_PSPVESACTIONS
typedef SPVESACTIONS *PSPVESACTIONS, *LPSPVESACTIONS;
#endif /* __WINCE_DEFINED_PSPVESACTIONS */

/* SPVSKIPTYPE  [enum; ce-only] */
#ifndef __WINCE_DEFINED_SPVSKIPTYPE
#define __WINCE_DEFINED_SPVSKIPTYPE
typedef enum SPVSKIPTYPE{
 SPVST_SENTENCE = (1L << 0)
} SPVSKIPTYPE;
#endif /* __WINCE_DEFINED_SPVSKIPTYPE */
#ifndef __WINCE_DEFINED_PSPVSKIPTYPE
#define __WINCE_DEFINED_PSPVSKIPTYPE
typedef SPVSKIPTYPE *PSPVSKIPTYPE, *LPSPVSKIPTYPE;
#endif /* __WINCE_DEFINED_PSPVSKIPTYPE */

/* SPWORDINFOOPT  [enum; ce-only] */
#ifndef __WINCE_DEFINED_SPWORDINFOOPT
#define __WINCE_DEFINED_SPWORDINFOOPT
typedef enum SPWORDINFOOPT{
 SPWIO_NONE = 0,
 SPWIO_WANT_TEXT = 1
} SPWORDINFOOPT;
#endif /* __WINCE_DEFINED_SPWORDINFOOPT */
#ifndef __WINCE_DEFINED_PSPWORDINFOOPT
#define __WINCE_DEFINED_PSPWORDINFOOPT
typedef SPWORDINFOOPT *PSPWORDINFOOPT, *LPSPWORDINFOOPT;
#endif /* __WINCE_DEFINED_PSPWORDINFOOPT */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT CallEngine(VOID* pCallFrame, ULONG ulCallFrameSize);
HRESULT CallEngineEx(const void* pInFrame, ULONG ulInFrameSize, void** ppCoMemOutFrame, ULONG* pulOutFrameSize);
HRESULT CompleteSkip(long ulNumSkipped);
HRESULT DataAvailable(ULONG* pcb);
DWORD GetActions(void);
HRESULT GetPropertyNum(SPPROPSRC eSrc, void* pvSrcObj, const WCHAR* pName, LONG* lValue);
HRESULT GetPropertyString(SPPROPSRC eSrc, void* pvSrcObj, const WCHAR* pName, WCHAR** ppCoMemValue);
HRESULT GetResourceValue(const WCHAR* pszResourceName, WCHAR** ppCoMemResource);
HRESULT GetSkipInfo(SPVSKIPTYPE* peType, long* plNumItems);
HRESULT InitGrammar(const WCHAR* pszGrammarName, const void** pvGrammarData);
HRESULT LoadITNGrammar(WCHAR* pszCLSID);
HRESULT LoadSLM(void* pvEngineGrammar, const WCHAR* pszTopicName);
HRESULT OnDeleteGrammar(void* pvEngineGrammar);
HRESULT OnDeleteRecoContext(void* pvEngineContext);
HRESULT PrivateCall(void* pvEngineContext, PVOID* pCallFrame, ULONG ulCallFrameSize);
HRESULT PrivateCallEx(void* pvEngineContext, const void* pInCallFrame, ULONG ulInCallFrameSize, void** ppvCoMemResponse, ULONG* pulResponseSize);
HRESULT SetAttribs(const WCHAR* pszReqAttribs, const WCHAR* pszOptAttribs);
HRESULT SetPropertyNum(SPPROPSRC eSrc, void* pvSrcObj, const WCHAR* pName, LONG lValue);
HRESULT SetPropertyString(SPPROPSRC eSrc, void* pvSrcObj, const WCHAR* pName, const WCHAR* pValue);
HRESULT StartThread(DWORD dwFlags, HWND* phwnd);
HRESULT Synchronize(ULONGLONG ullStreamPos);
HRESULT TerminateTask(DWORD dwTaskId, ULONG ulWaitPeriod);
HRESULT TerminateTaskGroup(DWORD dwGroupId, ULONG ulWaitPeriod);
HANDLE ThreadCompleteEvent(void);
HANDLE ThreadHandle(void);
DWORD ThreadId(void);
HRESULT UnloadProprietaryGrammar(void* pvEngineGrammar);
HRESULT UnloadSLM(void* pvEngineGrammar);
HRESULT UpdateRecoPos(ULONGLONG ullStreamPos);
HWND WindowHandle(void);

#endif /* _SAPIDDK_ */
