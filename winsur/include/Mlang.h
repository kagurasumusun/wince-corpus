/* Mlang.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 10 constants, 14 declarations, 4 outlines, 0 base types, 0 extra macros, 40 extra decls
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
#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x400 && _WIN32_WCE < 0x700)) /* CE 4.0..699 */
#define D 1
#endif /* _WIN32_WCE */

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* MIMECPINFO  [struct; ce-only] */

/* MIMECSETINFO  [struct; ce-only] */

/* RFC1766INFO  [struct; ce-only] */

/* SCRIPTINFO  [struct; ce-only] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* DetectEncodingInfo  [struct; ce-only] */
typedef struct tagDetectEncodingInfo {
 UINT nLangID;
 UINT nCodePage;
 INT nDocPercent;
 INT nConfidence;
} DetectEncodingInfo, *pDetectEncodingInfo;

/* MIMECONTF  [enum; ce-only] */
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
typedef MIMECONTF *PMIMECONTF, *LPMIMECONTF;

/* MLCONVCHAR  [enum; ce-only] */
typedef enum tagMLCONVCHARF {
 MLCONVCHARF_NONE = 0,
 MLCONVCHARF_AUTODETECT = 1,
 MLCONVCHARF_NCR_ENTITIZE = 2,
 MLCONVCHARF_NAME_ENTITIZE = 4,
 MLCONVCHARF_USEDEFCHAR = 8,
 MLCONVCHARF_NOBESTFITCHARS = 16
} MLCONVCHAR;
typedef MLCONVCHAR *PMLCONVCHAR, *LPMLCONVCHAR;

/* MLCP  [enum; ce-only] */
typedef enum tagMLCPF {
 MLDETECTF_MAILNEWS = 0x0001,
 MLDETECTF_BROWSER = 0x0002,
 MLDETECTF_VALID = 0x0004,
 MLDETECTF_VALID_NLS = 0x0008,
 MLDETECTF_PRESERVE_ORDER = 0x0010,
 MLDETECTF_PREFERRED_ONLY = 0x0020,
 MLDETECTF_FILTER_SPECIALCHAR = 0x0040
} MLCP;
typedef MLCP *PMLCP, *LPMLCP;

/* MLDETECTCP  [enum; ce-only] */
typedef enum tagMLDETECTCP {
 MLDETECTCP_NONE = 0,
 MLDETECTCP_7BIT = 1,
 MLDETECTCP_8BIT = 2,
 MLDETECTCP_DBCS = 4,
 MLDETECTCP_HTML = 8
} MLDETECTCP;
typedef MLDETECTCP *PMLDETECTCP, *LPMLDETECTCP;

/* SCRIPTCONTF  [enum; ce-only] */
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
typedef SCRIPTCONTF *PSCRIPTCONTF, *LPSCRIPTCONTF;

/* SCRIPTFONTCONTF  [enum; ce-only] */
typedef enum tagSCRIPTFONTCONTF {
 SCRIPTCONTF_FIXED_FONT = 0x00000001,
 SCRIPTCONTF_PROPORTIONAL_FONT = 0x00000002,
 SCRIPTCONTF_SCRIPT_USER = 0x00010000,
 SCRIPTCONTF_SCRIPT_HIDE = 0x00020000,
 SCRIPTCONTF_SCRIPT_SYSTEM = 0x00040000
} SCRIPTFONTCONTF;
typedef SCRIPTFONTCONTF *PSCRIPTFONTCONTF, *LPSCRIPTFONTCONTF;

/* UNICODERANGE  [struct; ce-only] */
typedef struct tagUNICODERANGE {
 WCHAR wcFrom;
 WCHAR wcTo;
} UNICODERANGE;
typedef UNICODERANGE *PUNICODERANGE, *LPUNICODERANGE;

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x400 && _WIN32_WCE < 0x700)) /* CE 4.0..699 */

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

/* IsConvertINetStringAvailable  [function; ce-only; CE 4.0..699; Mlang.dll, mlang.dll] */
HRESULT IsConvertINetStringAvailable(
 DWORD dwSrcEncoding,
 DWORD dwDstEncoding
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT CodePageToCodePages( UINT uCodePage, DWORD* pdwCodePages );
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
HRESULT GetCharCodePages( WCHAR chSrc, DWORD* pdwCodePages );
HRESULT GetDestinationCodePage( UINT* puiDstCodePage );
HRESULT GetFamilyCodePage( UINT uiCodePage, UINT* puiFamilyCodePage );
HRESULT GetFontCodePages( HDC hDC, HFONT hFont, DWORD* pdwCodePages );
HRESULT GetFontUnicodeRanges( HDC hDC, UINT* puiRanges, UNICODERANGE* pUranges );
HRESULT GetNumberOfCodePageInfo( UINT* pcCodePage );
HRESULT GetNumberOfScripts( UINT* pnScripts );
HRESULT GetSourceCodePage( UINT* puiSrcCodePage );
HRESULT GetStrCodePages( const WCHAR* pszSrc, long cchSrc, DWORD dwPriorityCodePages, DWORD* pdwCodePages, long* pcchCodePages );
HRESULT IsConvertible( DWORD dwSrcEncoding, DWORD dwDstEncoding );
HRESULT MapFont( HDC hDC, DWORD dwCodePages, WCHAR chSrc, HFONT* pFont );
HRESULT ReleaseFont( HFONT hFont );
HRESULT ResetFontMapping(void);
HRESULT SetMimeDBSource( MIMECONTF dwSource );

#endif /* _MLANG_ */
