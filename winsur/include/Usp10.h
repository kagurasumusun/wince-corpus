/* Usp10.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 31 constants, 45 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
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

/* GOFFSET  [struct; shared] */
typedef struct tagGOFFSET {
 LONG du;
 LONG dv;
} GOFFSET;

/* SCRIPT_CACHE  [typedef; ce-only] */
typedef void *SCRIPT_CACHE;

/* SCRIPT_CONTROL  [struct; shared] */
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

/* SCRIPT_DIGITSUBSTITUTE  [struct; shared] */
typedef struct tag_SCRIPT_DIGITSUBSTITUTE {
 DWORD NationalDigitLanguage;
 DWORD TraditionalDigitLanguage;
 DWORD DigitSubstitute;
 DWORD dwReserved;
} SCRIPT_DIGITSUBSTITUTE;

/* SCRIPT_FONTPROPERTIES  [struct; shared] */
typedef struct {
 int cBytes; 
 WORD wgBlank; 
 WORD wgDefault; 
 WORD wgInvalid; 
 WORD wgKashida; 
 int iKashidaWidth; 
} SCRIPT_FONTPROPERTIES;

/* SCRIPT_LOGATTR  [struct; shared] */
typedef struct tag_SCRIPT_LOGATTR { 
 BYTE fSoftBreak; 
 BYTE fWhiteSpace; 
 BYTE fCharStop; 
 BYTE fWordStop; 
 BYTE fInvalid; 
 BYTE fReserved; 
} SCRIPT_LOGATTR;

/* SCRIPT_PROPERTIES  [struct; shared] */
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

/* SCRIPT_STATE  [struct; shared] */
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

/* SCRIPT_STRING_ANALYSIS  [typedef; ce-only] */
typedef void *SCRIPT_STRING_ANALYSIS;

/* SCRIPT_TABDEF  [struct; shared] */
typedef struct tag_SCRIPT_TABDEF {
 int cTabStops;
 int iScale;
 int* pTabStops;
 int iTabOrigin;
} SCRIPT_TABDEF;

/* SCRIPT_VISATTR  [struct; shared] */
typedef struct tag_SCRIPT_VISATTR { 
 WORD uJustification; 
 WORD fClusterStart; 
 WORD fDiacritic; 
 WORD fZeroWidth; 
 WORD fReserved; 
 WORD fShapeReserved; 
} SCRIPT_VISATTR;

/* SCRIPT_ANALYSIS  [struct; shared] */
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

/* SCRIPT_ITEM  [struct; shared] */
typedef struct tag_SCRIPT_ITEM { 
 int iCharPos; 
 SCRIPT_ANALYSIS a; 
} SCRIPT_ITEM;

#endif /* _USP10_ */
