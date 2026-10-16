/* Tnefapi.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 1 constants, 10 declarations, 1 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _TNEFAPI_
#define _TNEFAPI_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define CODE_NONE 0

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* TNEFINFO  [struct; ce-only] */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213)) /* CE 2.11..2.12 */

/* ModifiedUTF7ToUnicode  [function; ce-only; CE 2.11..2.12] */
int WINAPI ModifiedUTF7ToUnicode (LPCSTR lpMultiByteSr, 
int ccMultiByte, LPWSTR lpWideCharStr, int ccWideChar);

/* TnefBuildInfo  [function; ce-only; CE 2.11..2.12] */
BOOL WINAPI TnefBuildInfo(const TNEFINFO * pti, LPWSTR szSubject, 
MailNonIpmInfo * lpnii, MailAttArray * lpmaa);

/* TnefConvertToUnicode  [function; ce-only; CE 2.11..2.12] */
INT WINAPI TnefConvertToUnicode (UINT CodePage, DWORD dwFlags, 
LPCSTR lpMultiByteStr, int cchMultiByte, LPWSTR lpWideCharStr, 
int cchWideChar);

/* TnefDecodeBuffer  [function; ce-only; CE 2.11..2.12] */
BOOL WINAPI TnefDecodeBuffer(INETENCODE EncodeType, 
LPSTR BufToDecode, BYTE * DecodedBuf, UINT * puiLength);

/* TnefDecodeFile  [function; ce-only; CE 2.11..2.12] */
BOOL WINAPI TnefDecodeFile(INETENCODE EncodeType, 
LPWSTR FileToDecode, LPWSTR DecodedFileName);

/* TnefEncodeBuffer  [function; ce-only; CE 2.11..2.12] */
BOOL WINAPI TnefEncodeBuffer(INETENCODE EncodeType, UINT cbIn, 
BYTE * BufToEncode, UINT * pcbOut, LPSTR EncodedBuf);

/* TnefEncodeFile  [function; ce-only; CE 2.11..2.12] */
LPWSTR WINAPI TnefEncodeFile(LPWSTR FileToEncode, 
INETENCODE EncodeType);

/* TnefGetInfo  [function; ce-only; CE 2.11..2.12] */
BOOL WINAPI TnefGetInfo(const TNEFINFO * pti, 
MailNonIpmInfo ** lplpnii, MailAttArray ** lplpmaa);

/* UnicodeToModifiedUTF7  [function; ce-only; CE 2.11..2.12] */
int WINAPI UnicodeToModifiedUTF7 (LPCWSTR wszIn, int cchIn, 
LPSTR pchOut, Int cchOut);
#endif /* _WIN32_WCE */

#endif /* _TNEFAPI_ */
