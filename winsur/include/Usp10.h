/* Usp10.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 47 constants, 45 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _USP10_
#define _USP10_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define SCRIPT_DIGITSUBSTITUTE_CONTEXT 0
#define SCRIPT_DIGITSUBSTITUTE_NATIONAL 2
#define SCRIPT_DIGITSUBSTITUTE_NONE 1
#define SCRIPT_DIGITSUBSTITUTE_TRADITIONAL 3
#define SCRIPT_JUSTIFY_ARABIC_ALEF 9
#define SCRIPT_JUSTIFY_ARABIC_BA 12
#define SCRIPT_JUSTIFY_ARABIC_BARA 13
#define SCRIPT_JUSTIFY_ARABIC_BLANK 1
#define SCRIPT_JUSTIFY_ARABIC_HA 10
#define SCRIPT_JUSTIFY_ARABIC_KASHIDA 8
#define SCRIPT_JUSTIFY_ARABIC_NORMAL 7
#define SCRIPT_JUSTIFY_ARABIC_RA 11
#define SCRIPT_JUSTIFY_ARABIC_SEEN 14
#define SCRIPT_JUSTIFY_ARABIC_SEEN_M 15
#define SCRIPT_JUSTIFY_BLANK 4
#define SCRIPT_JUSTIFY_CHARACTER 2
#define SCRIPT_JUSTIFY_NONE 0
#define SCRIPT_JUSTIFY_RESERVED1 3
#define SCRIPT_JUSTIFY_RESERVED2 5
#define SCRIPT_JUSTIFY_RESERVED3 6
#define SCRIPT_UNDEFINED 0
#define SGCM_RTL 0x00000001
#define SIC_ASCIIDIGIT 2
#define SIC_COMPLEX 1
#define SIC_NEUTRAL 4
#define SSA_BREAK 0x00000040
#define SSA_CLIP 0x00000004
#define SSA_DONTGLYPH 0x40000000
#define SSA_DZWG 0x00000010
#define SSA_FALLBACK 0x00000020
#define SSA_FIT 0x00000008
#define SSA_FULLMEASURE 0x04000000
#define SSA_GCP 0x00000200
#define SSA_GLYPHS 0x00000080
#define SSA_HIDEHOTKEY 0x00002000
#define SSA_HOTKEY 0x00000400
#define SSA_HOTKEYONLY 0x00002400
#define SSA_LAYOUTRTL 0x20000000
#define SSA_LINK 0x00001000
#define SSA_LPKANSIFALLBACK 0x08000000
#define SSA_METAFILE 0x00000800
#define SSA_NOKASHIDA 0x80000000
#define SSA_PASSWORD 0x00000001
#define SSA_PIDX 0x10000000
#define SSA_RTL 0x00000100
#define SSA_TAB 0x00000002
#define USP_E_SCRIPT_NOT_IN_FONT MAKE_HRESULT(SEVERITY_ERROR,FACILITY_ITF,0x200)

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* GOFFSET  [struct; shared; CE 5.0..699] */
typedef struct tagGOFFSET {
 LONG du;
 LONG dv;
} GOFFSET;

/* SCRIPT_ANALYSIS  [struct; shared; CE 5.0..699] */
typedef struct tag_SCRIPT_ANALYSIS {
 WORD eScript; 
 WORD fRTL; 
 WORD fLayoutRTL; 
 WORD fLinkBefore; 
 WORD fLinkAfter; 
 WORD fLogicalOrder; 
 WORD fNoGlyphIndex; 
 SCRIPT_STATE s; 
} SCRIPT_ANALYSIS;

/* SCRIPT_CACHE  [typedef; ce-only; CE 5.0..699] */
typedef void *SCRIPT_CACHE;

/* SCRIPT_CONTROL  [struct; shared; CE 5.0..699] */
typedef struct tag_SCRIPT_CONTROL { 
 DWORD uDefaultLanguage; 
 DWORD fContextDigits; 
 DWORD fInvertPreBoundDir; 
 DWORD fInvertPostBoundDir; 
 DWORD fLinkStringBefore; 
 DWORD fLinkStringAfter; 
 DWORD fNeutralOverride; 
 DWORD fNumericOverride; 
 DWORD fLegacyBidiClass; 
 DWORD fReserved; 
} SCRIPT_CONTROL;

/* SCRIPT_DIGITSUBSTITUTE  [struct; shared; CE 5.0..699] */
typedef struct tag_SCRIPT_DIGITSUBSTITUTE {
 DWORD NationalDigitLanguage;
 DWORD TraditionalDigitLanguage;
 DWORD DigitSubstitute;
 DWORD dwReserved;
} SCRIPT_DIGITSUBSTITUTE;

/* SCRIPT_FONTPROPERTIES  [struct; shared; CE 5.0..699] */
typedef struct {
 int cBytes; 
 WORD wgBlank; 
 WORD wgDefault; 
 WORD wgInvalid; 
 WORD wgKashida; 
 int iKashidaWidth; 
} SCRIPT_FONTPROPERTIES;

/* SCRIPT_ITEM  [struct; shared; CE 5.0..699] */
typedef struct tag_SCRIPT_ITEM { 
 int iCharPos; 
 SCRIPT_ANALYSIS a; 
} SCRIPT_ITEM;

/* SCRIPT_JUSTIFY  [enum; shared; CE 5.0..699] */
typedef enum tag_SCRIPT_JUSTIFY { 
 SCRIPT_JUSTIFY_NONE = 0, 
 SCRIPT_JUSTIFY_ARABIC_BLANK = 1, 
 SCRIPT_JUSTIFY_CHARACTER = 2, 
 SCRIPT_JUSTIFY_RESERVED1 = 3, 
 SCRIPT_JUSTIFY_BLANK = 4, 
 SCRIPT_JUSTIFY_RESERVED2 = 5, 
 SCRIPT_JUSTIFY_RESERVED3 = 6, 
 SCRIPT_JUSTIFY_ARABIC_NORMAL = 7, 
 SCRIPT_JUSTIFY_ARABIC_KASHIDA = 8, 
 SCRIPT_JUSTIFY_ARABIC_ALEF = 9, 
 SCRIPT_JUSTIFY_ARABIC_HA = 10, 
 SCRIPT_JUSTIFY_ARABIC_RA = 11, 
 SCRIPT_JUSTIFY_ARABIC_BA = 12, 
 SCRIPT_JUSTIFY_ARABIC_BARA = 13, 
 SCRIPT_JUSTIFY_ARABIC_SEEN = 14, 
 SCRIPT_JUSTIFY_ARABIC_SEEN_M = 15, 
} SCRIPT_JUSTIFY;

/* SCRIPT_LOGATTR  [struct; shared; CE 5.0..699] */
typedef struct tag_SCRIPT_LOGATTR { 
 BYTE fSoftBreak; 
 BYTE fWhiteSpace; 
 BYTE fCharStop; 
 BYTE fWordStop; 
 BYTE fInvalid; 
 BYTE fReserved; 
} SCRIPT_LOGATTR;

/* SCRIPT_PROPERTIES  [struct; shared; CE 5.0..699] */
typedef struct {
 DWORD langid; 
 DWORD fNumeric;
 DWORD fComplex;
 DWORD fNeedsWordBreaking;
 DWORD fNeedsCaretInfo;
 DWORD bCharSet; 
 DWORD fControl; 
 DWORD fPrivateUseArea; 
 DWORD fNeedsCharacterJustify;
 DWORD fInvalidGlyph;
 DWORD fInvalidLogAttr;
 DWORD fCDM;
 DWORD fAmbiguousCharSet;
 DWORD fClusterSizeVaries;
 DWORD fRejectInvalid;
} SCRIPT_PROPERTIES;

/* SCRIPT_STATE  [struct; shared; CE 5.0..699] */
typedef struct tag_SCRIPT_STATE { 
 WORD uBidiLevel; 
 WORD fOverrideDirection; 
 WORD fInhibitSymSwap; 
 WORD fCharShape; 
 WORD fDigitSubstitute; 
 WORD fInhibitLigate; 
 WORD fDisplayZWG; 
 WORD fArabicNumContext; 
 WORD fGcpClusters; 
 WORD fReserved; 
 WORD fEngineReserved; 
} SCRIPT_STATE;

/* SCRIPT_STRING_ANALYSIS  [typedef; ce-only; CE 5.0..699] */
typedef void *SCRIPT_STRING_ANALYSIS;

/* SCRIPT_TABDEF  [struct; shared; CE 5.0..699] */
typedef struct tag_SCRIPT_TABDEF {
 int cTabStops;
 int iScale;
 int* pTabStops;
 int iTabOrigin;
} SCRIPT_TABDEF;

/* SCRIPT_VISATTR  [struct; shared; CE 5.0..699] */
typedef struct tag_SCRIPT_VISATTR { 
 WORD uJustification; 
 WORD fClusterStart; 
 WORD fDiacritic; 
 WORD fZeroWidth; 
 WORD fReserved; 
 WORD fShapeReserved; 
} SCRIPT_VISATTR;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* ScriptApplyDigitSubstitution  [function; shared; CE 5.0..699; Uspce.lib] */
HRESULT WINAPI ScriptApplyDigitSubstitution(
 const SCRIPT_DIGITSUBSTITUTE* psds, 
 SCRIPT_CONTROL* psc, 
 SCRIPT_STATE* pss
);

/* ScriptApplyLogicalWidth  [function; shared; CE 5.0..699; Uspce.lib] */
HESULT WINAPI ScriptApplyLogicalWidth(
 const int* piDx,
 int cChars,
 int cGlyphs,
 const WORD* pwLogClust,
 const SCRIPT_VISATTR* psva,
 const int* piAdvance,
 const SCRIPT_ANALYSIS* psa,
 ABC* pABC,
 int* piJustify,
);

/* ScriptBreak  [function; shared; CE 5.0..699; Uspce.lib] */
HRESULT WINAPI ScriptBreak( 
 const WCHAR* pwcChars, 
 int cChars, 
 const SCRIPT_ANALYSIS* psa, 
 SCRIPT_LOGATTR* psla 
);

/* ScriptCacheGetHeight  [function; shared; CE 5.0..699; Uspce.lib] */
HRESULT WINAPI ScriptCacheGetHeight(
 HDC hdc, 
 SCRIPT_CACHE* psc, 
 long* tmHeight 
);

/* ScriptCPtoX  [function; shared; CE 5.0..699; Uspce.lib] */
HRESULT WINAPI ScriptCPtoX( 
 int iCP, 
 BOOL fTrailing, 
 int cChars, 
 int cGlyphs, 
 const WORD* pwLogClust, 
 const SCRIPT_VISATTR* psva, 
 const int* piAdvance, 
 const SCRIPT_ANALYSIS* psa, 
 int* piX 
);

/* ScriptFreeCache  [function; shared; CE 5.0..699; Uspce.lib] */
HRESULT WINAPI ScriptFreeCache(
 SCRIPT_CACHE *psc 
);

/* ScriptGetCMap  [function; shared; CE 5.0..699; Uspce.lib] */
HRESULT WINAPI ScriptGetCMap(
 HDC hdc, 
 SCRIPT_CACHE *psc, 
 const WCHAR *pwcInChars, 
 int cChars, 
 DWORD dwFlags, 
 WORD *pwOutGlyphs 
);

/* ScriptGetFontProperties  [function; shared; CE 5.0..699; Uspce.lib] */
HRESULT WINAPI ScriptGetFontProperties(
 HDC hdc, 
 SCRIPT_CACHE* psc, 
 SCRIPT_FONTPROPERTIES* sfp 
);

/* ScriptGetGlyphABCWidth  [function; shared; CE 5.0..699; Uspce.lib] */
HRESULT WINAPI ScriptGetGlyphABCWidth(
 HDC hdc, 
 SCRIPT_CACHE* psc,
 WORD wGlyph,
 ABC* pABC,
);

/* ScriptGetLogicalWidths  [function; shared; CE 5.0..699; Uspce.lib] */
HRESULT WINAPI ScriptGetLogicalWidths(
 const SCRIPT_ANALYSIS *psa,
 int cChars,
 int cGlyphs,
 const int* piGlyphWidth,
 const WORD* pwLogClust,
 const SCRIPT_VISATTR* psva,
 int* piDx,
);

/* ScriptGetProperties  [function; shared; CE 5.0..699; Uspce.lib] */
HRESULT WINAPI ScriptGetProperties(
 const SCRIPT_PROPERTIES*** ppSp, 
 int* piNumScripts 
);

/* ScriptIsComplex  [function; shared; CE 5.0..699; Uspce.lib] */
HRESULT WINAPI ScriptIsComplex(
 const WCHAR* pwcInChars,
 int cInChars,
 DWORD dwFlags
);

/* ScriptItemize  [function; shared; CE 5.0..699; Uspce.lib] */
HRESULT WINAPI ScriptItemize(
 const WCHAR* pwcInChars, 
 int cInChars, 
 int cMaxItems, 
 const SCRIPT_CONTROL* psControl, 
 const SCRIPT_STATE* psState, 
 SCRIPT_ITEM* pItems, 
 int* pcItems 
);

/* ScriptJustify  [function; shared; CE 5.0..699; Uspce.lib] */
HRESULT WINAPI ScriptJustify(
 const SCRIPT_VISATTR* psva, 
 const int* piAdvance, 
 int cGlyphs, 
 int iDx, 
 int iMinKashida, 
 int* piJustify 
);

/* ScriptLayout  [function; shared; CE 5.0..699; Uspce.lib] */
HRESULT WINAPI ScriptLayout(
 int cRuns, 
 const BYTE* pbLevel, 
 int* piVisualToLogical, 
 int* piLogicalToVisual 
);

/* ScriptPlace  [function; shared; CE 5.0..699; Uspce.lib] */
HRESULT WINAPI ScriptPlace(
 HDC hdc, 
 SCRIPT_CACHE* psc, 
 const WORD* pwGlyphs, 
 int cGlyphs, 
 const SCRIPT_VISATTR* psva, 
 SCRIPT_ANALYSIS* psa, 
 int* piAdvance, 
 GOFFSET* pGoffset, 
 ABC* pABC 
);

/* ScriptRecordDigitSubstitution  [function; shared; CE 5.0..699; Uspce.lib] */
HRESULT WINAPI ScriptRecordDigitSubstitution(
 LCID Locale,
 SCRIPT_DIGITSUBSTITUTE* psds
);

/* ScriptShape  [function; shared; CE 5.0..699; Uspce.lib] */
HRESULT WINAPI ScriptShape(
 HDC hdc, 
 SCRIPT_CACHE* psc, 
 const WCHAR* pwcChars, 
 int cChars, 
 int cMaxGlyphs, 
 SCRIPT_ANALYSIS* psa, 
 WORD* pwOutGlyphs, 
 WORD* pwLogClust, 
 SCRIPT_VISATTR* psva, 
 int* pcGlyphs 
);

/* ScriptString_pcOutChars  [function; shared; CE 5.0..699; Uspce.lib] */
const int* WINAPI ScriptString_pcOutChars(
 SCRIPT_STRING_ANALYSIS ssa 
);

/* ScriptString_pLogAttr  [function; shared; CE 5.0..699; Uspce.lib] */
const SCRIPT_LOGATTR* WINAPI ScriptString_pLogAttr(
 SCRIPT_STRING_ANALYSIS ssa 
);

/* ScriptString_pSize  [function; shared; CE 5.0..699; Uspce.lib] */
const SIZE* WINAPI ScriptString_pSize(
 SCRIPT_STRING_ANALYSIS ssa
);

/* ScriptStringAnalyse  [function; shared; CE 5.0..699; Uspce.lib] */
HRESULT WINAPI ScriptStringAnalyse(
 HDC hdc,
 const void* pString,
 int cString,
 int cGlyphs,
 int iCharset,
 DWORD dwFlags,
 int iReqWidth,
 SCRIPT_CONTROL* psControl,
 SCRIPT_STATE* psState,
 const int* piDx,
 SCRIPT_TABDEF* pTabdef,
 const BYTE* pbInClass,
 SCRIPT_STRING_ANALYSIS* pssa
);

/* ScriptStringCPtoX  [function; shared; CE 5.0..699; Uspce.lib] */
HRESULT WINAPI ScriptStringCPtoX(
 SCRIPT_STRING_ANALYSIS ssa, 
 int icp, 
 BOOL fTrailing, 
 int* pX 
);

/* ScriptStringFree  [function; shared; CE 5.0..699; Uspce.lib] */
HRESULT WINAPI ScriptStringFree(
 SCRIPT_STRING_ANALYSIS* pssa
);

/* ScriptStringGetLogicalWidths  [function; shared; CE 5.0..699; Uspce.lib] */
HRESULT WINAPI ScriptStringGetLogicalWidths(
 SCRIPT_STRING_ANALYSIS ssa, 
 int* piDx 
);

/* ScriptStringGetOrder  [function; shared; CE 5.0..699; Uspce.lib] */
HRESULT WINAPI ScriptStringGetOrder(
 SCRIPT_STRING_ANALYSIS ssa, 
 UINT *puOrder 
);

/* ScriptStringOut  [function; shared; CE 5.0..699; Uspce.lib] */
HRESULT WINAPI ScriptStringOut(
 SCRIPT_STRING_ANALYSIS ssa, 
 int iX, 
 int iY, 
 UINT uOptions, 
 const RECT* prc, 
 int iMinSel, 
 int iMaxSel, 
 BOOL fDisabled 
);

/* ScriptStringValidate  [function; shared; CE 5.0..699; Uspce.lib] */
HRESULT WINAPI ScriptStringValidate(
 SCRIPT_STRING_ANALYSIS ssa 
);

/* ScriptStringXtoCP  [function; shared; CE 5.0..699; Uspce.lib] */
HRESULT WINAPI ScriptStringXtoCP(
 SCRIPT_STRING_ANALYSIS ssa, 
 int iX, 
 int* piCh, 
 int* piTrailing 
);

/* ScriptTextOut  [function; shared; CE 5.0..699; Uspce.lib] */
HRESULT WINAPI ScriptTextOut(
 const HDC hdc, 
 SCRIPT_CACHE* psc, 
 int x, 
 int y, 
 UINT fuOptions, 
 const RECT* lprc, 
 const SCRIPT_ANALYSIS* psa, 
 const WCHAR* pwcReserved, 
 int iReserved, 
 const WORD* pwGlyphs, 
 int cGlyphs, 
 const int* piAdvance, 
 const int* piJustify, 
 const GOFFSET* pGoffset 
);

/* ScriptXtoCP  [function; shared; CE 5.0..699; Uspce.lib] */
HRESULT WINAPI ScriptXtoCP(
 int iX, 
 int cChars, 
 int cGlyphs, 
 const WORD* pwLogClust, 
 const SCRIPT_VISATTR* psva, 
 const int* piAdvance, 
 const SCRIPT_ANALYSIS* psa, 
 int* piCP, 
 int* piTrailing 
);
#endif /* _WIN32_WCE */

#endif /* _USP10_ */
