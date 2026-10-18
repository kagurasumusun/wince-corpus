/* settingsapi.hpp -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 2 declarations, 3 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _SETTINGSAPI_HPP_
#define _SETTINGSAPI_HPP_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* PHActiveVolumeMode  [enum; ce-only; PhCommon.dll] */

/* PHSetting  [enum; ce-only; PhCommon.dll] */

/* PHVolumeSetting  [enum; ce-only; PhCommon.dll] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* AuthenticationResult_e  [enum; ce-only; PhCommon.dll] */
#ifndef __WINCE_DEFINED_AUTHENTICATIONRESULT_E
#define __WINCE_DEFINED_AUTHENTICATIONRESULT_E
enum AuthenticationResult_e
{
 AuthCanceled = 0,
 AuthInProgress,
 AuthSucceeded,
};
#endif /* __WINCE_DEFINED_AUTHENTICATIONRESULT_E */

/* PH_AUTHENTICATE_USER_PARAMETERS  [struct; ce-only; PhCommon.dll] */
#ifndef __WINCE_DEFINED_TAGPH_AUTHENTICATE_USER_PARAMETERS
#define __WINCE_DEFINED_TAGPH_AUTHENTICATE_USER_PARAMETERS
typedef struct tagPH_AUTHENTICATE_USER_PARAMETERS
{
 UINT StructSize;
 HWND NotificationWindow;
 UINT NotificationMessage;
 AuthenticationResult_e Result;
} PH_AUTHENTICATE_USER_PARAMETERS;
#endif /* __WINCE_DEFINED_TAGPH_AUTHENTICATE_USER_PARAMETERS */
#ifndef __WINCE_DEFINED_PPH_AUTHENTICATE_USER_PARAMETERS
#define __WINCE_DEFINED_PPH_AUTHENTICATE_USER_PARAMETERS
typedef PH_AUTHENTICATE_USER_PARAMETERS *PPH_AUTHENTICATE_USER_PARAMETERS, *LPPH_AUTHENTICATE_USER_PARAMETERS;
#endif /* __WINCE_DEFINED_PPH_AUTHENTICATE_USER_PARAMETERS */

/* AuthSucceeded  [extra enum] */
#ifndef __WINCE_DEFINED_AUTHENTICATIONRESULT_E
#define __WINCE_DEFINED_AUTHENTICATIONRESULT_E
enum AuthenticationResult_e
{
 AuthCanceled = 0,
 AuthInProgress,
 AuthSucceeded,
};
#endif /* __WINCE_DEFINED_AUTHENTICATIONRESULT_E */

#endif /* _SETTINGSAPI_HPP_ */
