/* Msime.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 6 declarations, 0 outlines, 0 base types, 0 extra macros, 15 extra decls
 */
#ifndef _MSIME_
#define _MSIME_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* IMESHF  [struct; shared] */
#ifndef __WINCE_DEFINED_IMESHF
#define __WINCE_DEFINED_IMESHF
typedef struct {
 WORD cbShf;
 WORD verDic;
 CHAR szTitle[48];
 CHAR szDescription[256];
 CHAR szCopyright[128];
} IMESHF;
#endif /* __WINCE_DEFINED_IMESHF */
#ifndef __WINCE_DEFINED_PIMESHF
#define __WINCE_DEFINED_PIMESHF
typedef IMESHF *PIMESHF, *LPIMESHF;
#endif /* __WINCE_DEFINED_PIMESHF */

/* IPCANDIDATE  [struct; ce-only] */
#ifndef __WINCE_DEFINED_TAGIPCANDIDATE
#define __WINCE_DEFINED_TAGIPCANDIDATE
#ifndef __WINCE_DEFINED_IPCANDIDATE
#define __WINCE_DEFINED_IPCANDIDATE
typedef struct tagIPCANDIDATE {
 DWORD dwSize;
 DWORD dwFlags;
 INT iSelIndex;
 INT nCandidate;
 DWORD dwPrivateDataOffset;
 DWORD dwPrivateDataSize;
 DWORD dwOffset[1];
} IPCANDIDATE, *PIPCANDIDATE;
#endif /* __WINCE_DEFINED_IPCANDIDATE */
#endif /* __WINCE_DEFINED_TAGIPCANDIDATE */

/* POSTBL  [struct; shared] */
#ifndef __WINCE_DEFINED__POSTBL
#define __WINCE_DEFINED__POSTBL
#ifndef __WINCE_DEFINED_POSTBL
#define __WINCE_DEFINED_POSTBL
typedef struct _POSTBL {
 WORD nPos;
 BYTE* szName;
} POSTBL;
#endif /* __WINCE_DEFINED_POSTBL */
#endif /* __WINCE_DEFINED__POSTBL */
#ifndef __WINCE_DEFINED_PPOSTBL
#define __WINCE_DEFINED_PPOSTBL
typedef POSTBL *PPOSTBL, *LPPOSTBL;
#endif /* __WINCE_DEFINED_PPOSTBL */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x400 && _WIN32_WCE < 0x700)) /* CE 4.0..699 */

/* CreateIFEDictionaryInstance  [function; shared; CE 4.0..699; Imejpp.dll, imejpp.dll] */
HRESULT CreateIFEDictionaryInstance(VOID** ppvObj);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT GenerateMessage(void);
HRESULT IsReadingHalfKana(void);
HRESULT SetCandidateSelection(UINT iciCandidate);
HRESULT SetCandidateStr(UINT ciCandidate, WCHAR* pwsz, UINT cbData);
HRESULT SetCompositionAttr(UINT ciAtr,BYTE* pb);
HRESULT SetCompositionClause(UINT ciCls, DWORD* pdw);
HRESULT SetCompositionReadAttr(UINT ciAtr, BYTE* pb);
HRESULT SetCompositionReadClause(UINT ciCls, DWORD* pdw);
HRESULT SetCompositionReadStr(UINT cwch, WCHAR* pwsz);
HRESULT SetCompositionStr(UINT cwch, WCHAR* pwsz);
HRESULT SetDeltaPos(UINT iDelta);
HRESULT SetResultClause(UINT ciCls,DWORD* pdw);
HRESULT SetResultReadClause(UINT ciCls,DWORD* pdw);
HRESULT SetResultReadStr(UINT cwch,WCHAR* pwsz);
HRESULT SetResultStr(UINT cwch,WCHAR* pwsz);

#endif /* _MSIME_ */
