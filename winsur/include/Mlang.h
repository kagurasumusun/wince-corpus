/* Mlang.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 46 constants, 91 declarations, 0 outlines, 0 base types, 0 extra macros, 48 extra decls
 */
#ifndef _MLANG_
#define _MLANG_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define ABCD 1
#define BCD 1
#define CD 1
#define MAX_LOCALE_NAME 32
#define MAX_MIMECP_NAME 64
#define MAX_MIMECSET_NAME 50
#define MAX_MIMEFACE_NAME 32
#define MAX_RFC1766_NAME 6
#define MAX_SCRIPT_NAME 48
#define MIMECONTF_BROWSER 0x00000002
#define MIMECONTF_EXPORT 0x00000400
#define MIMECONTF_IMPORT 0x00000008
#define MIMECONTF_MAILNEWS 0x00000001
#define MIMECONTF_MIME_IE4 0x10000000
#define MIMECONTF_MIME_LATEST 0x20000000
#define MIMECONTF_MIME_REGISTRY 0x40000000
#define MIMECONTF_MINIMAL 0x00000004
#define MIMECONTF_PRIVCONVERTER 0x00010000
#define MIMECONTF_SAVABLE_BROWSER 0x00000200
#define MIMECONTF_SAVABLE_MAILNEWS 0x00000100
#define MIMECONTF_VALID 0x00020000
#define MIMECONTF_VALID_NLS 0x00040000
#define MLCONVCHARF_AUTODETECT 1
#define MLCONVCHARF_NAME_ENTITIZE 4
#define MLCONVCHARF_NCR_ENTITIZE 2
#define MLCONVCHARF_NOBESTFITCHARS 16
#define MLCONVCHARF_NONE 0
#define MLCONVCHARF_USEDEFCHAR 8
#define MLDETECTCP_7BIT 1
#define MLDETECTCP_8BIT 2
#define MLDETECTCP_DBCS 4
#define MLDETECTCP_HTML 8
#define MLDETECTCP_NONE 0
#define MLDETECTF_BROWSER 0x0002
#define MLDETECTF_FILTER_SPECIALCHAR 0x0040
#define MLDETECTF_MAILNEWS 0x0001
#define MLDETECTF_PREFERRED_ONLY 0x0020
#define MLDETECTF_PRESERVE_ORDER 0x0010
#define MLDETECTF_VALID 0x0004
#define MLDETECTF_VALID_NLS 0x0008
#define SCRIPTCONTF_FIXED_FONT 0x00000001
#define SCRIPTCONTF_PROPORTIONAL_FONT 0x00000002
#define SCRIPTCONTF_SCRIPT_HIDE 0x00020000
#define SCRIPTCONTF_SCRIPT_SYSTEM 0x00040000
#define SCRIPTCONTF_SCRIPT_USER 0x00010000
#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */
#define D 1
#endif /* _WIN32_WCE */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* DetectEncodingInfo  [struct; ce-only; CE 4.0..699] */
typedef struct tagDetectEncodingInfo {
 UINT nLangID;
 UINT nCodePage;
 INT nDocPercent;
 INT nConfidence;
} DetectEncodingInfo, *pDetectEncodingInfo;

/* MIMECONTF  [enum; ce-only; CE 4.0..699] */
typedef enum tagMIMECONTF {
 MIMECONTF_MAILNEWS = 0x00000001,
 MIMECONTF_BROWSER = 0x00000002,
 MIMECONTF_MINIMAL = 0x00000004,
 MIMECONTF_IMPORT = 0x00000008,
 MIMECONTF_SAVABLE_MAILNEWS = 0x00000100,
 MIMECONTF_SAVABLE_BROWSER = 0x00000200,
 MIMECONTF_EXPORT = 0x00000400,
 MIMECONTF_PRIVCONVERTER = 0x00010000,
 MIMECONTF_VALID = 0x00020000,
 MIMECONTF_VALID_NLS = 0x00040000,
 MIMECONTF_MIME_IE4 = 0x10000000,
 MIMECONTF_MIME_LATEST = 0x20000000,
 MIMECONTF_MIME_REGISTRY = 0x40000000
} MIMECONTF;

/* MIMECPINFO  [struct; ce-only; CE 4.0..699] */
typedef struct tagMIMECPINFO {
 DWORD dwFlags;
 UINT uiCodePage;
 UINT uiFamilyCodePage;
 WCHAR wszDescription[MAX_MIMECP_NAME];
 WCHAR wszWebCharset[MAX_MIMECSET_NAME];
 WCHAR wszHeaderCharset[MAX_MIMECSET_NAME];
 WCHAR wszBodyCharset[MAX_MIMECSET_NAME];
 WCHAR wszFixedWidthFont[MAX_MIMEFACE_NAME];
 WCHAR wszProportionalFont[MAX_MIMEFACE_NAME];
 BYTE bGDICharset;
} MIMECPINFO, *PMIMECPINFO;

/* MIMECSETINFO  [struct; ce-only; CE 4.0..699] */
typedef struct tagMIMECSETINFO {
 UINT uiCodePage;
 UINT uiInternetEncoding;
 WCHAR wszCharset[MAX_MIMECSET_NAME];
} MIMECSETINFO, *PMIMECSETINFO;

/* MLCONVCHAR  [enum; ce-only; CE 4.0..699] */
typedef enum tagMLCONVCHARF {
 MLCONVCHARF_NONE = 0,
 MLCONVCHARF_AUTODETECT = 1,
 MLCONVCHARF_NCR_ENTITIZE = 2,
 MLCONVCHARF_NAME_ENTITIZE = 4,
 MLCONVCHARF_USEDEFCHAR = 8,
 MLCONVCHARF_NOBESTFITCHARS = 16
} MLCONVCHAR;

/* MLCP  [enum; ce-only; CE 4.0..699] */
typedef enum tagMLCPF {
 MLDETECTF_MAILNEWS = 0x0001,
 MLDETECTF_BROWSER = 0x0002,
 MLDETECTF_VALID = 0x0004,
 MLDETECTF_VALID_NLS = 0x0008,
 MLDETECTF_PRESERVE_ORDER = 0x0010,
 MLDETECTF_PREFERRED_ONLY = 0x0020,
 MLDETECTF_FILTER_SPECIALCHAR = 0x0040
} MLCP;

/* MLDETECTCP  [enum; ce-only; CE 4.0..699] */
typedef enum tagMLDETECTCP {
 MLDETECTCP_NONE = 0,
 MLDETECTCP_7BIT = 1,
 MLDETECTCP_8BIT = 2,
 MLDETECTCP_DBCS = 4,
 MLDETECTCP_HTML = 8
} MLDETECTCP;

/* RFC1766INFO  [struct; ce-only; CE 4.0..699] */
typedef struct tagRFC1766INFO {
 LCID lcid;
 WCHAR wszRfc1766[MAX_RFC1766_NAME];
 WCHAR wszLocaleName[MAX_LOCALE_NAME];
} RFC1766INFO, *PRFC1766INFO;

/* SCRIPTCONTF  [enum; ce-only; CE 4.0..699] */
typedef enum tagSCRIPTCONTF {
 sidDefault,
 sidMerge,
 sidAsciiSym,
 sidAsciiLatin,
 sidLatin,
 sidGreek,
 sidCyrillic,
 sidArmenian,
 sidHebrew,
 sidArabic,
 sidDevanagari,
 sidBengali,
 sidGurmukhi,
 sidGujarati,
 sidOriya,
 sidTamil,
 sidTelugu,
 sidKannada,
 sidMalayalam,
 sidThai,
 sidLao,
 sidTibetan,
 sidGeorgian,
 sidHangul,
 sidKana,
 sidBopomofo,
 sidHan,
 sidEthiopic,
 sidCanSyllabic,
 sidCherokee,
 sidYi,
 sidBraille,
 sidRunic,
 sidOgham,
 sidSinhala,
 sidSyriac,
 sidBurmese,
 sidKhmer,
 sidThaana,
 sidMongolian,
 sidLim,
 sidFEFirst = sidHangul,
 sidFELast = sidHan
} SCRIPTCONTF;

/* SCRIPTFONTCONTF  [enum; ce-only; CE 4.0..699] */
typedef enum tagSCRIPTFONTCONTF {
 SCRIPTCONTF_FIXED_FONT = 0x00000001,
 SCRIPTCONTF_PROPORTIONAL_FONT = 0x00000002,
 SCRIPTCONTF_SCRIPT_USER = 0x00010000,
 SCRIPTCONTF_SCRIPT_HIDE = 0x00020000,
 SCRIPTCONTF_SCRIPT_SYSTEM = 0x00040000
} SCRIPTFONTCONTF;

/* SCRIPTINFO  [struct; ce-only; CE 4.0..699] */
typedef struct tagSCRIPINFO {
 SCRIPT_ID ScriptId;
 UINT uiCodePage;
 WCHAR wszDescription[MAX_SCRIPT_NAME];
 WCHAR wszFixedWidthFont[MAX_MIMEFACE_NAME];
 WCHAR wszProportionalFont[MAX_MIMEFACE_NAME];
} SCRIPTINFO, *PSCRIPTINFO;

/* UNICODERANGE  [struct; ce-only; CE 4.0..699] */
typedef struct tagUNICODERANGE {
 WCHAR wcFrom;
 WCHAR wcTo;
} UNICODERANGE;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* ConvertINetMultiByteToUnicode  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT ConvertINetMultiByteToUnicode(
 LPDWORD lpdwMode,
 DWORD dwSrcEncoding,
 LPCSTR lpSrcStr,
 LPINT lpnMultiCharCount,
 LPWSTR lpDstStr,
 LPINT lpnWideCharCount
);

/* ConvertINetString  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT ConvertINetString(
 LPDWORD lpdwMode,
 DWORD dwSrcEncoding,
 DWORD dwDstEncoding,
 LPCSTR lpSrcStr,
 LPINT lpnSrcSize,
 LPBYTE lpDstStr,
 LPINT lpnDstSize
);

/* ConvertINetUnicodeToMultiByte  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT ConvertINetUnicodeToMultiByte(
 LPDWORD lpdwMode,
 DWORD dwEncoding,
 LPCWSTR lpSrcStr,
 LPINT lpnWideCharCount,
 LPSTR lpDstStr,
 LPINT lpnMultiCharCount
);

/* IEnumCodePage::Next  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT Next( 
 ULONG celt,
 PMIMECPINFO rgelt,
 ULONG* pceltFetched
);

/* IEnumCodePage::Reset  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT Reset(void);

/* IEnumCodePage::Skip  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT Skip( 
 ULONG celt
);

/* IEnumRfc1766::Next  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT Next( 
 ULONG celt,
 PRFC1766INFO rgelt,
 ULONG* pceltFetched
);

/* IEnumRfc1766::Reset  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT Reset(void);

/* IEnumRfc1766::Skip  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT Skip( 
 ULONG celt
);

/* IEnumScript::Clone  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT Clone( 
 IEnumScript** ppEnum
);

/* IEnumScript::Next  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT Next( 
 ULONG celt,
 PSCRIPTINFO rgelt,
 ULONG* pceltFetched
);

/* IEnumScript::Reset  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT Reset(void);

/* IEnumScript::Skip  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT Skip(
 ULONG celt
);

/* IMLangCodePages::CodePagesToCodePage  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT CodePagesToCodePage( 
 DWORD dwCodePages,
 UINT uDefaultCodePage,
 UINT* puCodePage
);

/* IMLangCodePages::CodePageToCodePages  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT CodePageToCodePages( 
 UINT uCodePage,
 DWORD* pdwCodePages
);

/* IMLangCodePages::GetCharCodePages  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT GetCharCodePages( 
 WCHAR chSrc,
 DWORD* pdwCodePages
);

/* IMLangCodePages::GetStrCodePages  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT GetStrCodePages(
 const WCHAR* pszSrc,
 long cchSrc,
 DWORD dwPriorityCodePages,
 DWORD* pdwCodePages,
 long* pcchCodePages
);

/* IMLangConvertCharset::DoConversion  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT DoConversion( 
 BYTE* pSrcStr,
 UINT* pcSrcSize,
 BYTE* pDstStr,
 UINT* pcDstSize
);

/* IMLangConvertCharset::DoConversionFromUnicode  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT DoConversionFromUnicode( 
 WCHAR* pSrcStr,
 UINT* pcSrcSize,
 CHAR* pDstStr,
 UINT* pcDstSize
);

/* IMLangConvertCharset::DoConversionToUnicode  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT DoConversionToUnicode( 
 CHAR* pSrcStr,
 UINT* pcSrcSize,
 WCHAR* pDstStr,
 UINT* pcDstSize
);

/* IMLangConvertCharset::GetDestinationCodePage  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT GetDestinationCodePage( 
 UINT* puiDstCodePage
);

/* IMLangConvertCharset::GetProperty  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT GetProperty( 
 DWORD* pdwProperty
);

/* IMLangConvertCharset::GetSourceCodePage  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT GetSourceCodePage( 
 UINT* puiSrcCodePage
);

/* IMLangConvertCharset::Initialize  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT Initialize( 
 UINT uiSrcCodePage,
 UINT uiDstCodePage,
 DWORD dwProperty
);

/* IMLangFontLink2::CodePageToScriptID  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT CodePageToScriptID( 
 UINT uiCodePage,
 SCRIPT_ID* pSid
);

/* IMLangFontLink2::GetFontCodePages  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT GetFontCodePages( 
 HDC hDC,
 HFONT hFont,
 DWORD* pdwCodePages
);

/* IMLangFontLink2::GetFontUnicodeRanges  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT GetFontUnicodeRanges( 
 HDC hDC,
 UINT* puiRanges,
 UNICODERANGE* pUranges
);

/* IMLangFontLink2::GetScriptFontInfo  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT GetScriptFontInfo( 
 SCRIPT_ID sid,
 DWORD dwFlags,
 UINT* puiFonts,
 SCRIPTFONTINFO* pScriptFont
);

/* IMLangFontLink2::MapFont  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT MapFont( 
 HDC hDC,
 DWORD dwCodePages,
 WCHAR chSrc,
 HFONT* pFont
);

/* IMLangFontLink2::ReleaseFont  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT ReleaseFont( 
 HFONT hFont
);

/* IMLangFontLink2::ResetFontMapping  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT ResetFontMapping(void);

/* IMLangFontLink::GetFontCodePages  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT GetFontCodePages( 
 HDC hDC,
 HFONT hFont,
 DWORD* pdwCodePages
);

/* IMLangFontLink::MapFont  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT MapFont( 
 HDC hDC,
 DWORD dwCodePages,
 HFONT hSrcFont,
 HFONT* phDestFont
);

/* IMLangFontLink::ReleaseFont  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT ReleaseFont( 
 HFONT hFont
);

/* IMLangFontLink::ResetFontMapping  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT ReleaseFont( 
 HFONT hFont
);

/* IMLangLineBreakConsole::BreakLineA  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT BreakLineA( 
 LCID locale,
 UINT uCodePage,
 const CHAR* pszSrc,
 long cchSrc,
 long cMaxColumns,
 long* pcchLine,
 long* pcchSkip
);

/* IMLangLineBreakConsole::BreakLineW  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT BreakLineW( 
 LCID locale,
 const WCHAR* pszSrc,
 long cchSrc,
 long cMaxColumns,
 long* pcchLine,
 long* pcchSkip
);

/* IMultiLanguage2::ConvertString  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT ConvertString( 
 DWORD* pdwMode,
 DWORD dwSrcEncoding,
 DWORD dwDstEncoding,
 BYTE* pSrcStr,
 UINT* pcSrcSize,
 BYTE* pDstStr,
 UINT* pcDstSize
);

/* IMultiLanguage2::ConvertStringFromUnicode  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT ConvertStringFromUnicode( 
 DWORD* pdwMode,
 DWORD dwEncoding,
 WCHAR* pSrcStr,
 UINT* pcSrcSize,
 CHAR* pDstStr,
 UINT* pcDstSize
);

/* IMultiLanguage2::ConvertStringFromUnicodeEx  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT ConvertStringFromUnicodeEx( 
 DWORD* pdwMode,
 DWORD dwEncoding,
 WCHAR* pSrcStr,
 UINT* pcSrcSize,
 CHAR* pDstStr,
 UINT* pcDstSize,
 DWORD dwFlag,
 WCHAR* lpFallBack
);

/* IMultiLanguage2::ConvertStringInIStream  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT ConvertStringInIStream( 
 DWORD* pdwMode,
 DWORD dwFlag,
 WCHAR* lpFallBack,
 DWORD dwSrcEncoding,
 DWORD dwDstEncoding,
 IStream* pstmIn,
 IStream* pstmOut
);

/* IMultiLanguage2::ConvertStringToUnicode  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT ConvertStringToUnicode( 
 DWORD* pdwMode,
 DWORD dwEncoding,
 CHAR* pSrcStr,
 UINT* pcSrcSize,
 WCHAR* pDstStr,
 UINT* pcDstSize
);

/* IMultiLanguage2::ConvertStringToUnicodeEx  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT ConvertStringToUnicodeEx( 
 DWORD* pdwMode,
 DWORD dwEncoding,
 CHAR* pSrcStr,
 UINT* pcSrcSize,
 WCHAR* pDstStr,
 UINT* pcDstSize,
 DWORD dwFlag,
 WCHAR* lpFallBack
);

/* IMultiLanguage2::CreateConvertCharset  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT CreateConvertCharset( 
 UINT uiSrcCodePage,
 UINT uiDstCodePage,
 DWORD dwProperty,
 IMLangConvertCharset** ppMLangConvertCharset
);

/* IMultiLanguage2::DetectCodepageInIStream  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT DetectCodepageInIStream( 
 DWORD dwFlag,
 DWORD dwPrefWinCodePage,
 IStream* pstmIn,
 DetectEncodingInfo* lpEncoding,
 INT* pnScores
);

/* IMultiLanguage2::DetectInputCodepage  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT DetectInputCodepage( 
 DWORD dwFlag,
 DWORD dwPrefWinCodePage,
 CHAR* pSrcStr,
 INT* pcSrcSize,
 DetectEncodingInfo* lpEncoding,
 INT* pnScores
);

/* IMultiLanguage2::EnumCodePages  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT EnumCodePages( 
 DWORD grfFlags,
 LANGID LangId,
 IEnumCodePage** ppEnumCodePage
);

/* IMultiLanguage2::EnumRfc1766  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT EnumRfc1766( 
 LANGID LangId,
 IEnumRfc1766** ppEnumRfc1766
);

/* IMultiLanguage2::EnumScripts  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT EnumScripts( 
 DWORD dwFlags,
 LANGID LangId,
 IEnumScript** ppEnumScript
);

/* IMultiLanguage2::GetCharsetInfo  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT GetCharsetInfo( 
 BSTR Charset,
 PMIMECSETINFO pCharsetInfo
);

/* IMultiLanguage2::GetCodePageDescription  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT GetCodePageDescription( 
 UINT uiCodePage,
 LCID lcid,
 LPWSTR lpWideCharStr,
 int cchWideChar
);

/* IMultiLanguage2::GetCodePageInfo  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT GetCodePageInfo( 
 UINT uiCodePage,
 LANGID LangId,
 PMIMECPINFO pCodePageInfo
);

/* IMultiLanguage2::GetFamilyCodePage  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT GetFamilyCodePage( 
 UINT uiCodePage,
 UINT* puiFamilyCodePage
);

/* IMultiLanguage2::GetLcidFromRfc1766  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT GetLcidFromRfc1766( 
 LCID* pLocale,
 BSTR bstrRfc1766
);

/* IMultiLanguage2::GetNumberOfCodePageInfo  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT GetNumberOfCodePageInfo( 
 UINT* pcCodePage
);

/* IMultiLanguage2::GetNumberOfScripts  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT GetNumberOfScripts( 
 UINT* pnScripts
);

/* IMultiLanguage2::GetRfc1766FromLcid  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT GetRfc1766FromLcid( 
 LCID Locale,
 BSTR* pbstrRfc1766
);

/* IMultiLanguage2::GetRfc1766Info  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT GetRfc1766Info( 
 LCID Locale,
 LANGID LangId,
 PRFC1766INFO pRfc1766Info
);

/* IMultiLanguage2::IsConvertible  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT IsConvertible( 
 DWORD dwSrcEncoding,
 DWORD dwDstEncoding
);

/* IMultiLanguage2::SetMimeDBSource  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT SetMimeDBSource( 
 MIMECONTF dwSource
);

/* IMultiLanguage3::DetectOutboundCodePage  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT DetectOutboundCodePage( 
 DWORD dwFlags,
 LPCWSTR lpWideCharStr,
 UINT cchWideChar,
 UINT* puiPreferredCodePages,
 UINT nPreferredCodePages,
 UINT* puiDetectedCodePages,
 UINT* pnDetectedCodePages,
 WCHAR* lpSpecialChar
);

/* IMultiLanguage3::DetectOutboundCodePageInIStream  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT DetectOutboundCodePageInIStream( 
 DWORD dwFlags,
 IStream* pStrIn,
 UINT* puiPreferredCodePages,
 UINT nPreferredCodePages,
 UINT* puiDetectedCodePages,
 UINT* pnDetectedCodePages,
 WCHAR* lpSpecialChar
);

/* IMultiLanguage::ConvertString  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT ConvertString( 
 DWORD* pdwMode,
 DWORD dwSrcEncoding,
 DWORD dwDstEncoding,
 BYTE* pSrcStr,
 UINT* pcSrcSize,
 BYTE* pDstStr,
 UINT* pcDstSize
);

/* IMultiLanguage::ConvertStringFromUnicode  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT ConvertStringFromUnicode( 
 DWORD* pdwMode,
 DWORD dwEncoding,
 WCHAR* pSrcStr,
 UINT* pcSrcSize,
 CHAR* pDstStr,
 UINT* pcDstSize
);

/* IMultiLanguage::ConvertStringToUnicode  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT ConvertStringToUnicode( 
 DWORD* pdwMode,
 DWORD dwEncoding,
 CHAR* pSrcStr,
 UINT* pcSrcSize,
 WCHAR* pDstStr,
 UINT* pcDstSize
);

/* IMultiLanguage::CreateConvertCharset  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT CreateConvertCharset( 
 UINT uiSrcCodePage,
 UINT uiDstCodePage,
 DWORD dwProperty,
 IMLangConvertCharset** ppMLangConvertCharset
);

/* IMultiLanguage::EnumCodePages  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT EnumCodePages( 
 DWORD grfFlags,
 IEnumCodePage** ppEnumCodePage
);

/* IMultiLanguage::EnumRfc1766  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT EnumRfc1766( 
 IEnumRfc1766** ppEnumRfc1766
);

/* IMultiLanguage::GetCharsetInfo  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT GetCharsetInfo( 
 BSTR Charset,
 PMIMECSETINFO pCharsetInfo
);

/* IMultiLanguage::GetCodePageInfo  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT GetCodePageInfo( 
 UINT uiCodePage,
 PMIMECPINFO pCodePageInfo
);

/* IMultiLanguage::GetFamilyCodePage  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT GetFamilyCodePage( 
 UINT uiCodePage,
 UINT* puiFamilyCodePage
);

/* IMultiLanguage::GetLcidFromRfc1766  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT GetLcidFromRfc1766( 
 LCID* pLocale,
 BSTR bstrRfc1766
);

/* IMultiLanguage::GetNumberOfCodePageInfo  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT GetNumberOfCodePageInfo( 
 UINT* pcCodePage
);

/* IMultiLanguage::GetRfc1766FromLcid  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT GetRfc1766FromLcid( 
 LCID Locale,
 BSTR* pbstrRfc1766
);

/* IMultiLanguage::GetRfc1766Info  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT GetRfc1766Info( 
 LCID Locale,
 PRFC1766INFO pRfc1766Info
);

/* IMultiLanguage::IsConvertible  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT IsConvertible( 
 DWORD dwSrcEncoding,
 DWORD dwDstEncoding
);

/* IsConvertINetStringAvailable  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT IsConvertINetStringAvailable(
 DWORD dwSrcEncoding,
 DWORD dwDstEncoding
);

/* LcidToRfc1766  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT LcidToRfc1766(
 LCID Locale,
 LPTSTR pszRfc1766,
 int nChar
);

/* Rfc1766ToLcid  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT Rfc1766ToLcid(
 LCID* pLocale,
 LPTSTR pszRfc1766
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct tagMIMECPINFO {DWORDdwFlags;UINTuiCodePage;UINTuiFamilyCodePage;WCHARwszDescription[MAX_MIMECP_NAME];WCHARwszWebCharset[MAX_MIMECSET_NAME];WCHARwszHeaderCharset[MAX_MIMECSET_NAME];WCHARwszBodyCharset[MAX_MIMECSET_NAME];WCHARwszFixedWidthFont[MAX_MIMEFACE_NAME];WCHARwszProportionalFont[MAX_MIMEFACE_NAME];BYTEbGDICharset;} MIMECPINFO, *PMIMECPINFO;
typedef struct tagMIMECSETINFO {UINTuiCodePage;UINTuiInternetEncoding;WCHAR wszCharset[MAX_MIMECSET_NAME];} MIMECSETINFO, *PMIMECSETINFO;
typedef struct tagRFC1766INFO {LCIDlcid;WCHARwszRfc1766[MAX_RFC1766_NAME];WCHARwszLocaleName[MAX_LOCALE_NAME];} RFC1766INFO, *PRFC1766INFO;
typedef struct tagSCRIPINFO {SCRIPT_ID ScriptId;UINTuiCodePage;WCHARwszDescription[MAX_SCRIPT_NAME];WCHARwszFixedWidthFont[MAX_MIMEFACE_NAME];WCHARwszProportionalFont[MAX_MIMEFACE_NAME];} SCRIPTINFO, *PSCRIPTINFO;
typedef struct tagDetectEncodingInfo {UINTnLangID;UINTnCodePage;INTnDocPercent;INTnConfidence;}DetectEncodingInfo, *pDetectEncodingInfo;

/* function */
HRESULT BreakLineA( LCID locale, UINT uCodePage, const CHAR* pszSrc, long cchSrc, long cMaxColumns, long* pcchLine, long* pcchSkip );
HRESULT BreakLineW( LCID locale, const WCHAR* pszSrc, long cchSrc, long cMaxColumns, long* pcchLine, long* pcchSkip );
HRESULT CodePageToCodePages( UINT uCodePage, DWORD* pdwCodePages );
HRESULT CodePageToScriptID( UINT uiCodePage, SCRIPT_ID* pSid );
HRESULT CodePagesToCodePage( DWORD dwCodePages, UINT uDefaultCodePage, UINT* puCodePage );
HRESULT ConvertString( DWORD* pdwMode, DWORD dwSrcEncoding, DWORD dwDstEncoding, BYTE* pSrcStr, UINT* pcSrcSize, BYTE* pDstStr, UINT* pcDstSize );
HRESULT ConvertStringFromUnicode( DWORD* pdwMode, DWORD dwEncoding, WCHAR* pSrcStr, UINT* pcSrcSize, CHAR* pDstStr, UINT* pcDstSize );
HRESULT ConvertStringFromUnicodeEx( DWORD* pdwMode, DWORD dwEncoding, WCHAR* pSrcStr, UINT* pcSrcSize, CHAR* pDstStr, UINT* pcDstSize, DWORD dwFlag, WCHAR* lpFallBack );
HRESULT ConvertStringInIStream( DWORD* pdwMode, DWORD dwFlag, WCHAR* lpFallBack, DWORD dwSrcEncoding, DWORD dwDstEncoding, IStream* pstmIn, IStream* pstmOut );
HRESULT ConvertStringToUnicode( DWORD* pdwMode, DWORD dwEncoding, CHAR* pSrcStr, UINT* pcSrcSize, WCHAR* pDstStr, UINT* pcDstSize );
HRESULT ConvertStringToUnicodeEx( DWORD* pdwMode, DWORD dwEncoding, CHAR* pSrcStr, UINT* pcSrcSize, WCHAR* pDstStr, UINT* pcDstSize, DWORD dwFlag, WCHAR* lpFallBack );
HRESULT CreateConvertCharset( UINT uiSrcCodePage, UINT uiDstCodePage, DWORD dwProperty, IMLangConvertCharset** ppMLangConvertCharset );
HRESULT DetectCodepageInIStream( DWORD dwFlag, DWORD dwPrefWinCodePage, IStream* pstmIn, DetectEncodingInfo* lpEncoding, INT* pnScores );
HRESULT DetectInputCodepage( DWORD dwFlag, DWORD dwPrefWinCodePage, CHAR* pSrcStr, INT* pcSrcSize, DetectEncodingInfo* lpEncoding, INT* pnScores );
HRESULT DetectOutboundCodePage( DWORD dwFlags, LPCWSTR lpWideCharStr, UINT cchWideChar, UINT* puiPreferredCodePages, UINT nPreferredCodePages, UINT* puiDetectedCodePages, UINT* pnDetectedCodePages, WCHAR* lpSpecialChar );
HRESULT DetectOutboundCodePageInIStream( DWORD dwFlags, IStream* pStrIn, UINT* puiPreferredCodePages, UINT nPreferredCodePages, UINT* puiDetectedCodePages, UINT* pnDetectedCodePages, WCHAR* lpSpecialChar );
HRESULT DoConversion( BYTE* pSrcStr, UINT* pcSrcSize, BYTE* pDstStr, UINT* pcDstSize );
HRESULT DoConversionFromUnicode( WCHAR* pSrcStr, UINT* pcSrcSize, CHAR* pDstStr, UINT* pcDstSize );
HRESULT DoConversionToUnicode( CHAR* pSrcStr, UINT* pcSrcSize, WCHAR* pDstStr, UINT* pcDstSize );
HRESULT EnumCodePages( DWORD grfFlags, LANGID LangId, IEnumCodePage** ppEnumCodePage );
HRESULT EnumRfc1766( LANGID LangId, IEnumRfc1766** ppEnumRfc1766 );
HRESULT EnumScripts( DWORD dwFlags, LANGID LangId, IEnumScript** ppEnumScript );
HRESULT GetCharCodePages( WCHAR chSrc, DWORD* pdwCodePages );
HRESULT GetCharsetInfo( BSTR Charset, PMIMECSETINFO pCharsetInfo );
HRESULT GetCodePageDescription( UINT uiCodePage, LCID lcid, LPWSTR lpWideCharStr, int cchWideChar );
HRESULT GetCodePageInfo( UINT uiCodePage, LANGID LangId, PMIMECPINFO pCodePageInfo );
HRESULT GetDestinationCodePage( UINT* puiDstCodePage );
HRESULT GetFamilyCodePage( UINT uiCodePage, UINT* puiFamilyCodePage );
HRESULT GetFontCodePages( HDC hDC, HFONT hFont, DWORD* pdwCodePages );
HRESULT GetFontUnicodeRanges( HDC hDC, UINT* puiRanges, UNICODERANGE* pUranges );
HRESULT GetLcidFromRfc1766( LCID* pLocale, BSTR bstrRfc1766 );
HRESULT GetNumberOfCodePageInfo( UINT* pcCodePage );
HRESULT GetNumberOfScripts( UINT* pnScripts );
HRESULT GetRfc1766FromLcid( LCID Locale, BSTR* pbstrRfc1766 );
HRESULT GetRfc1766Info( LCID Locale, LANGID LangId, PRFC1766INFO pRfc1766Info );
HRESULT GetScriptFontInfo( SCRIPT_ID sid, DWORD dwFlags, UINT* puiFonts, SCRIPTFONTINFO* pScriptFont );
HRESULT GetSourceCodePage( UINT* puiSrcCodePage );
HRESULT GetStrCodePages( const WCHAR* pszSrc, long cchSrc, DWORD dwPriorityCodePages, DWORD* pdwCodePages, long* pcchCodePages );
HRESULT IsConvertible( DWORD dwSrcEncoding, DWORD dwDstEncoding );
HRESULT MapFont( HDC hDC, DWORD dwCodePages, WCHAR chSrc, HFONT* pFont );
HRESULT ReleaseFont( HFONT hFont );
HRESULT ResetFontMapping(void);
HRESULT SetMimeDBSource( MIMECONTF dwSource );

#endif /* _MLANG_ */
