/* Msime.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 6 declarations, 0 outlines, 0 base types, 0 extra macros, 17 extra decls
 */
#ifndef _MSIME_
#define _MSIME_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* IMESHF  [struct; shared] */
typedef struct {
 WORD cbShf; 
 WORD verDic;
 CHAR szTitle[48]; 
 CHAR szDescription[256]; 
 CHAR szCopyright[128]; 
} IMESHF;

/* POSTBL  [struct; shared] */
typedef struct _POSTBL {
 WORD nPos; 
 BYTE* szName; 
} POSTBL;

/* PIMEWRD  [extra struct] */
typedef struct _IMEWRD {WCHAR* pwchReading;WCHAR* pwchDisplay;Union{ULONGulPos;Struct{ WORDnPos1; WORDnPos2;};};ULONG* rgulAttrs[2];INTcbComment;IMEUCTuct;VOID* pvComment;}IMEWRD, *PIMEWRD;

/* PIPCANDIDATE  [extra struct] */
typedef struct tagIPCANDIDATE {DWORD dwSize;DWORD dwFlags;INT iSelIndex;INT nCandidate;DWORD dwPrivateDataOffset;DWORD dwPrivateDataSize;DWORD dwOffset[1];} IPCANDIDATE, *PIPCANDIDATE;

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x400 && _WIN32_WCE < 0x700)) /* CE 4.0..699 */

/* CreateIFEDictionaryInstance  [function; shared; CE 4.0..699; Imejpp.dll, imejpp.dll] */
HRESULT CreateIFEDictionaryInstance(
 VOID** ppvObj
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT GenerateMessage(void);
HRESULT IsReadingHalfKana(void);
HRESULT SetCandidateSelection(UINT iciCandidate);
HRESULT SetCandidateStr(UINTciCandidate,WCHAR* pwsz,UINT cbData);
HRESULT SetCompositionAttr(UINT ciAtr,BYTE* pb);
HRESULT SetCompositionClause(UINTciCls,DWORD* pdw);
HRESULT SetCompositionReadAttr(UINTciAtr,BYTE* pb);
HRESULT SetCompositionReadClause(UINTciCls,DWORD* pdw);
HRESULT SetCompositionReadStr(UINTcwch,WCHAR* pwsz);
HRESULT SetCompositionStr(UINTcwch,WCHAR* pwsz);
HRESULT SetDeltaPos(UINTiDelta);
HRESULT SetResultClause(UINT ciCls,DWORD* pdw);
HRESULT SetResultReadClause(UINT ciCls,DWORD* pdw);
HRESULT SetResultReadStr(UINT cwch,WCHAR* pwsz);
HRESULT SetResultStr(UINT cwch,WCHAR* pwsz);

#endif /* _MSIME_ */
