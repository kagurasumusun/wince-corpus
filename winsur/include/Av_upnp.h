/* Av_upnp.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 59 constants, 7 declarations, 3 outlines, 0 base types, 0 extra macros, 10 extra decls
 */
#ifndef _AV_UPNP_
#define _AV_UPNP_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define BIT_AV_ERROR 0
#define BIT_AV_TRACE 2
#define BIT_AV_WARN 1
#define ERROR_AV_ALREADY_INITED -5
#define ERROR_AV_INVALID_INSTANCE -3
#define ERROR_AV_INVALID_OUT_ARGUMENTS -9
#define ERROR_AV_INVALID_STATEVAR -4
#define ERROR_AV_NO_MORE_ITEMS -7
#define ERROR_AV_NONEXISTANT_SERVICE -6
#define ERROR_AV_OOM -2
#define ERROR_AV_POINTER -1
#define ERROR_AV_UPNP_AVT_CONTENT_BUSY 715
#define ERROR_AV_UPNP_AVT_FULL_MEDIA 709
#define ERROR_AV_UPNP_AVT_ILLEGAL_MIME 714
#define ERROR_AV_UPNP_AVT_ILLEGAL_SEEK_TARGET 711
#define ERROR_AV_UPNP_AVT_INVALID_INSTANCE_ID 718
#define ERROR_AV_UPNP_AVT_INVALID_TRANSITION 701
#define ERROR_AV_UPNP_AVT_NO_CONTENTS 702
#define ERROR_AV_UPNP_AVT_PROTECTED_MEDIA 707
#define ERROR_AV_UPNP_AVT_READ_ERROR 703
#define ERROR_AV_UPNP_AVT_RESOURCE_NOT_FOUND 716
#define ERROR_AV_UPNP_AVT_TRANSPORT_LOCKED 705
#define ERROR_AV_UPNP_AVT_UNSUPPORTED_PLAY_FORMAT 704
#define ERROR_AV_UPNP_AVT_UNSUPPORTED_PLAY_MODE 712
#define ERROR_AV_UPNP_AVT_UNSUPPORTED_PLAY_SPEED 717
#define ERROR_AV_UPNP_AVT_UNSUPPORTED_REC_FORMAT 708
#define ERROR_AV_UPNP_AVT_UNSUPPORTED_REC_QUALITY 713
#define ERROR_AV_UPNP_AVT_UNSUPPORTED_SEEK_MODE 710
#define ERROR_AV_UPNP_AVT_WRITE_ERROR 706
#define ERROR_AV_UPNP_CD_BAD_METADATA 712
#define ERROR_AV_UPNP_CD_BAD_SEARCH_CRITERIA 708
#define ERROR_AV_UPNP_CD_BAD_SORT_CRITERIA 709
#define ERROR_AV_UPNP_CD_DESTINATION_RESOURCE_ACCESS_DENIED 719
#define ERROR_AV_UPNP_CD_INVALID_CURRENTTAGVALUE 702
#define ERROR_AV_UPNP_CD_INVALID_NEWTAGVALUE 703
#define ERROR_AV_UPNP_CD_NO_SUCH_CONTAINER 710
#define ERROR_AV_UPNP_CD_NO_SUCH_DESTINATION_RESOURCE 718
#define ERROR_AV_UPNP_CD_NO_SUCH_FILE_TRANSFER 717
#define ERROR_AV_UPNP_CD_NO_SUCH_OBJECT 701
#define ERROR_AV_UPNP_CD_NO_SUCH_SOURCE_RESOURCE 714
#define ERROR_AV_UPNP_CD_PARAMETER_NUM_MISMATCH 706
#define ERROR_AV_UPNP_CD_READONLY_TAG_UPDATE 705
#define ERROR_AV_UPNP_CD_REQUEST_FAILED 720
#define ERROR_AV_UPNP_CD_REQUIRED_TAG_DELETE 704
#define ERROR_AV_UPNP_CD_RESTRICTED_OBJECT 711
#define ERROR_AV_UPNP_CD_RESTRICTED_PARENT_OBJECT 713
#define ERROR_AV_UPNP_CD_SOURCE_RESOURCE_ACCESS_DENIED 715
#define ERROR_AV_UPNP_CD_TRANSFER_BUSY 716
#define ERROR_AV_UPNP_CM_ACCESS_DENIED 705
#define ERROR_AV_UPNP_CM_INCOMPATIBLE_DIRECTION 702
#define ERROR_AV_UPNP_CM_INCOMPATIBLE_PROTOCOL 701
#define ERROR_AV_UPNP_CM_INSUFFICIENT_NET_RESOURCES 703
#define ERROR_AV_UPNP_CM_INVALID_CONNECTION_REFERENCE 706
#define ERROR_AV_UPNP_CM_LOCAL_RESTRICTIONS 704
#define ERROR_AV_UPNP_CM_NOT_IN_NETWORK 707
#define ERROR_AV_UPNP_ERROR -8
#define ERROR_AV_UPNP_RC_INVALID_INSTANCE_ID 702
#define ERROR_AV_UPNP_RC_INVALID_PRESET_NAME 701
#define SUCCESS_AV 0

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* ConnectionInfo  [struct, typedef; ce-only; Av_upnp.lib] */

/* object  [struct, typedef; ce-only; Av_upnp.lib] */

/* UPnPAVError  [enum; ce-only; Av_upnp.lib] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* DeviceCapabilities  [struct, typedef; shared; Av_upnp.lib; A/W DeviceCapabilitiesA,DeviceCapabilitiesW (CE is W-side)] */
#ifdef __cplusplus
struct DeviceCapabilities
 {
 wstring
 strPossiblePlayMedia;
 wstring
 strPossibleRecMedia;
 wstring
 strPossibleRecQualityModes;
 };
#endif /* __cplusplus */

/* DIRECTION  [enum; ce-only; Av_upnp.lib] */
#ifndef __WINCE_DEFINED_DIRECTION
#define __WINCE_DEFINED_DIRECTION
enum DIRECTION {
 OUTPUT,
 INPUT
};
#endif /* __WINCE_DEFINED_DIRECTION */

/* MediaInfo  [struct, typedef; ce-only; Av_upnp.lib] */
#ifdef __cplusplus
struct MediaInfo
 {
 unsigned long
 nNrTracks;
 wstring
 strMediaDuration;
 wstring
 strCurrentURI;
 wstring
 strCurrentURIMetaData;
 wstring
 strNextURI;
 wstring
 strNextURIMetaData;
 wstring
 strPlayMedium;
 wstring
 strRecordMedium;
 wstring
 strWriteStatus;
 };
#endif /* __cplusplus */

/* PositionInfo  [struct, typedef; ce-only; Av_upnp.lib] */
#ifdef __cplusplus
struct PositionInfo
 {
 unsigned long
 nTrack;
 wstring
 strTrackDuration;
 wstring
 strTrackMetaData;
 wstring
 strTrackURI;
 wstring
 strRelTime;
 wstring
 strAbsTime;
 long
 nRelCount;
 long
 nAbsCount;
 };
#endif /* __cplusplus */

/* TransportActions  [struct, typedef; ce-only; Av_upnp.lib] */
#ifndef __WINCE_DEFINED_TRANSPORTACTIONS
#define __WINCE_DEFINED_TRANSPORTACTIONS
struct TransportActions
 {
 bool
 bPlay;
 bool
 bStop;
 bool
 bPause;
 bool
 bSeek;
 bool
 bNext;
 bool
 bPrevious;
 bool
 bRecord;
 };
#endif /* __WINCE_DEFINED_TRANSPORTACTIONS */

/* TransportInfo  [struct, typedef; ce-only; Av_upnp.lib] */
#ifdef __cplusplus
struct TransportInfo
 {
 wstring
 strCurrentTransportState;
 wstring
 strCurrentTransportStatus;
 wstring
 strCurrentSpeed;
 };
#endif /* __cplusplus */

/* TransportSettings  [struct, typedef; ce-only; Av_upnp.lib] */
#ifdef __cplusplus
struct TransportSettings
 {
 wstring
 strPlayMode;
 wstring
 strRecQualityMode;
 };
#endif /* __cplusplus */

/* strPossibleRecQualityModes  [extra struct] */
#ifdef __cplusplus
struct DeviceCapabilities
{
 wstring strPossiblePlayMedia;
 wstring strPossibleRecMedia;
 wstring strPossibleRecQualityModes;
};
#endif /* __cplusplus */

/* strWriteStatus  [extra struct] */
#ifdef __cplusplus
struct MediaInfo
{
 unsigned long nNrTracks;
 wstring strMediaDuration;
 wstring strCurrentURI;
 wstring strCurrentURIMetaData;
 wstring strNextURI;
 wstring strNextURIMetaData;
 wstring strPlayMedium;
 wstring strRecordMedium;
 wstring strWriteStatus;
};
#endif /* __cplusplus */

/* nAbsCount  [extra struct] */
#ifdef __cplusplus
struct PositionInfo
{
 unsigned long nTrack;
 wstring strTrackDuration;
 wstring strTrackMetaData;
 wstring strTrackURI;
 wstring strRelTime;
 wstring strAbsTime;
 long nRelCount;
 long nAbsCount;
};
#endif /* __cplusplus */

/* bRecord  [extra struct] */
#ifndef __WINCE_DEFINED_TRANSPORTACTIONS
#define __WINCE_DEFINED_TRANSPORTACTIONS
#ifndef __WINCE_DEFINED_BRECORD
#define __WINCE_DEFINED_BRECORD
struct TransportActions
{
 bool bPlay;
 bool bStop;
 bool bPause;
 bool bSeek;
 bool bNext;
 bool bPrevious;
 bool bRecord;
};
#endif /* __WINCE_DEFINED_BRECORD */
#endif /* __WINCE_DEFINED_TRANSPORTACTIONS */

/* strCurrentSpeed  [extra struct] */
#ifdef __cplusplus
struct TransportInfo
{
 wstring strCurrentTransportState;
 wstring strCurrentTransportStatus;
 wstring strCurrentSpeed;
};
#endif /* __cplusplus */

/* strRecQualityMode  [extra struct] */
#ifdef __cplusplus
struct TransportSettings
{
 wstring strPlayMode;
 wstring strRecQualityMode;
};
#endif /* __cplusplus */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
DWORD AddSinkProtocol(LPCWSTR pszProtocolInfo);
DWORD AddSourceProtocol(LPCWSTR pszProtocolInfo);
DWORD RemoveSinkProtocol(LPCWSTR pszProtocolInfo);
DWORD RemoveSourceProtocol(LPCWSTR pszProtocolInfo);

#endif /* _AV_UPNP_ */
