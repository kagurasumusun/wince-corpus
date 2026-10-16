/* Sphelper.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 15 declarations, 0 outlines, 0 base types, 0 extra macros, 10 extra decls
 */
#ifndef _SPHELPER_
#define _SPHELPER_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* SpClearEvent  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
inline void SpClearEvent(
 SPEVENT* pe
);

/* SpConvertStreamFormatEnum  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
inline HRESULT SpConvertStreamFormatEnum(
 SPSTREAMFORMAT eFormat,
 GUID* pFormatId,
 WAVEFORMATEX** ppCoMemWaveFormatEx
);

/* SpCreateNewToken  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
inline HRESULT SpCreateNewToken(
 const WCHAR* pszTokenId,
 ISpObjectToken** ppToken
);

/* SpCreateNewTokenEx  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
inline HRESULT SpCreateNewTokenEx(
 const WCHAR* pszCategoryId,
 const WCHAR* pszTokenKeyName,
 const CLSID* pclsid,
 const WCHAR* pszLangIndependentName,
 LANGID langid,
 const WCHAR* pszLangDependentName,
 ISpObjectToken** ppToken,
 ISpDataKey** ppDataKeyAttribs
);

/* SpCreatePhoneConverter  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
inline HRESULT SpCreatePhoneConverter(
 LANGID* langid,
 const WCHAR* pszReqAttribs,
 const WCHAR* pszOptAttribs,
 ISpPhoneConverter** ppPhoneConverter
);

/* SpEnumTokens  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
inline HRESULT SpEnumTokens(
 const WCHAR* pszCategoryId,
 const WCHAR* pszReqAttribs,
 const WCHAR* pszOptAttribs,
 IEnumSpObjectTokens** ppEnum
);

/* SpEventSerializeSize  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
inline ULONG SpEventSerializeSize(
 const SPEVENT* pEvent
);

/* SpFindBestToken  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
inline HRESULT SpFindBestToken(
 const WCHAR* pszCategoryId, 
 const WCHAR* pszReqAttribs, 
 const WCHAR* pszOptAttribs, 
 ISpObjectToken** ppObjectToken
);

/* SpGetDefaultTokenIdFromCategoryId  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
inline HRESULT SpGetDefaultTokenIdFromCategoryId(
 const WCHAR* pszCategoryId,
 WCHAR** ppszTokenId
);

/* SpGetDescription  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
inline HRESULT SpGetDescription(
 ISpObjectToken* pObjToken,
 WCHAR** ppszDescription,
 LANGID* Language = SpGetUserDefaultUILanguage()
);

/* SpGetUserDefaultUILanguage  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
inline LANGID SpGetUserDefaultUILanguage(void);

/* SpInitEvent  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
inline void SpInitEvent(
 SPEVENT* pe
);

/* SpSetCommonTokenData  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
inline HRESULT SpSetCommonTokenData(
 ISpObjectToken* pToken,
 const CLSID* pclsid,
 const WCHAR* pszLangIndependentName,
 LANGID langid,
 const WCHAR* pszLangDependentName,
 ISpDataKey** ppDataKeyAttribs
);

/* SpSetDefaultTokenForCategoryId  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
inline HRESULT SpSetDefaultTokenForCategoryId(
 const WCHAR* pszCategoryId,
 ISpObjectToken* pToken
);

/* SpSetDefaultTokenIdForCategoryId  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
inline HRESULT SpSetDefaultTokenIdForCategoryId(
 const WCHAR* pszCategoryId,
 const WCHAR* pszTokenId
);
#endif /* _WIN32_WCE */

#endif /* _SPHELPER_ */
