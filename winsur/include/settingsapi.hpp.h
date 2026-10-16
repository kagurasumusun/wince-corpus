/* settingsapi.hpp -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 3 constants, 15 declarations, 0 outlines, 0 base types, 0 extra macros, 4 extra decls
 */
#ifndef _SETTINGSAPI_HPP_
#define _SETTINGSAPI_HPP_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */
#define AuthCanceled 0
#define phsDoNotDisturb 0
#define SpeakerVolumeMode 0
#endif /* _WIN32_WCE */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* AuthenticationResult_e  [enum; ce-only; CE 6.0..699; PhCommon.dll] */
enum AuthenticationResult_e
{
 AuthCanceled = 0,
 AuthInProgress,
 AuthSucceeded,
};

/* PH_AUTHENTICATE_USER_PARAMETERS  [struct; ce-only; CE 6.0..699; PhCommon.dll] */
typedef struct tagPH_AUTHENTICATE_USER_PARAMETERS
{
 UINT StructSize; 
 HWND NotificationWindow; 
 UINT NotificationMessage; 
 AuthenticationResult_e Result; 
} PH_AUTHENTICATE_USER_PARAMETERS;

/* PHActiveVolumeMode  [enum; ce-only; CE 6.0..699; PhCommon.dll] */
enum PHActiveVolumeMode
{
 SpeakerVolumeMode = 0,
 RingerVolumeMode,
 LastVolumeMode, 
};

/* PHSetting  [enum; ce-only; CE 6.0..699; PhCommon.dll] */
enum PHSetting
{
 phsDoNotDisturb = 0,
 phsCallForwarding,
 phsAutoDial,
 phsBlockCallerId,
 phsMissedCalls,
 phsIncomingCalls,
 phsOutgoingCalls,
 phsGalFilterType,
 phsContactFilterType,
 phsDeviceLocked,
 phsAutoDialRulesAvailability, 
 phsPhoneAppStatus, 
 phsDisableAGC, 
 phsLockPhoneAfterUpdatingPIN, 
};

/* PHVolumeSetting  [enum; ce-only; CE 6.0..699; PhCommon.dll] */
enum PHVolumeSetting
{
 phvsSpeakerVolume,
 phvsRingerVolume,
 phvsHandsetVolume,
 phvsMicrophoneVolume,
};
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* PHAuthenticateUser  [function; ce-only; CE 6.0..699; PhCommon.dll] */
HRESULT PHAuthenticateUser(
 PH_AUTHENTICATE_USER_PARAMETERS* pParams
);

/* PHCancelAuthenticationRequest  [function; ce-only; CE 6.0..699; PhCommon.dll] */
HRESULT PHCancelAuthenticationRequest(
 HWND hwnd
);

/* PHGetActiveVolume  [function; ce-only; CE 6.0..699; PhCommon.dll] */
PHActiveVolumeMode PHGetActiveVolume ( void );

/* PHGetSetting  [function; ce-only; CE 6.0..699; PhCommon.dll] */
DWORD PHGetSetting(
 PHSetting Setting
);

/* PHGetVolumeSetting  [function; ce-only; CE 6.0..699; PhCommon.dll] */
DWORD PHGetVolumeSetting(
 PHVolumeSetting Setting
 );

/* PHReadPIN  [function; ce-only; CE 6.0..699; PhCommon.dll] */
HRESULT PHReadPIN(
WCHAR* pPinBuffer,
int BufferLength
);

/* PHSetActiveVolume  [function; ce-only; CE 6.0..699; PhCommon.dll] */
HRESULT PHSetActiveVolume (
 PHActiveVolumeMode VolumeMode
);

/* PHSetValue  [function; ce-only; CE 6.0..699; PhCommon.dll] */
HRESULT PHSetValue(
 PHSetting Setting,
 DWORD Value
);

/* PHSetVolume  [function; ce-only; CE 6.0..699; PhCommon.dll] */
HRESULT PHSetVolume(
 PHVolumeSetting Setting,
 DWORD Value
);

/* PHWritePIN  [function; ce-only; CE 6.0..699; PhCommon.dll] */
HRESULT PHWritePIN(
WCHAR* pPinString
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* enum */
enum AuthenticationResult_e
{
  AuthCanceled = 0,
  AuthInProgress,
  AuthSucceeded,
};
enum PHActiveVolumeMode
{
  SpeakerVolumeMode = 0,
  RingerVolumeMode,
  LastVolumeMode,
};
enum PHSetting
{
  phsDoNotDisturb = 0,
  phsCallForwarding,
  phsAutoDial,
  phsBlockCallerId,
  phsMissedCalls,
  phsIncomingCalls,
  phsOutgoingCalls,
  phsGalFilterType,
  phsContactFilterType,
  phsDeviceLocked,
  phsAutoDialRulesAvailability,
  phsPhoneAppStatus,
  phsDisableAGC,
  phsLockPhoneAfterUpdatingPIN,
};
enum PHVolumeSetting
{
  phvsSpeakerVolume,
  phvsRingerVolume,
  phvsHandsetVolume,
  phvsMicrophoneVolume,
};

#endif /* _SETTINGSAPI_HPP_ */
