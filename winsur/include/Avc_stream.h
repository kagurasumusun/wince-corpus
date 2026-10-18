/* Avc_stream.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 23 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _AVC_STREAM_
#define _AVC_STREAM_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* AUDIO_SampleFrequency  [enum; ce-only] */
#ifndef __WINCE_DEFINED_AUDIO_SAMPLEFREQUENCY
#define __WINCE_DEFINED_AUDIO_SAMPLEFREQUENCY
typedef enum { AUDIO_SampleFrequency_32Khz = 0, AUDIO_SampleFrequency_44_1Khz, AUDIO_SampleFrequency_48Khz, AUDIO_SampleFrequency_88_2Khz, AUDIO_SampleFrequency_96Khz, AUDIO_SampleFrequency_176_4Khz, AUDIO_SampleFrequency_192Khz} AUDIO_SampleFrequency;
#endif /* __WINCE_DEFINED_AUDIO_SAMPLEFREQUENCY */
#ifndef __WINCE_DEFINED_PAUDIO_SAMPLEFREQUENCY
#define __WINCE_DEFINED_PAUDIO_SAMPLEFREQUENCY
typedef AUDIO_SampleFrequency *PAUDIO_SampleFrequency, *LPAUDIO_SampleFrequency;
#endif /* __WINCE_DEFINED_PAUDIO_SAMPLEFREQUENCY */

/* STREAM_CreateLocalPlug_Response  [struct; ce-only] */
#ifndef __WINCE_DEFINED_STREAM_CREATELOCALPLUG_RESPONSE
#define __WINCE_DEFINED_STREAM_CREATELOCALPLUG_RESPONSE
typedef struct { HANDLE sclp_Plug; ULONG sclp_PlugNumber;} STREAM_CreateLocalPlug_Response;
#endif /* __WINCE_DEFINED_STREAM_CREATELOCALPLUG_RESPONSE */
#ifndef __WINCE_DEFINED_PSTREAM_CREATELOCALPLUG_RESPONSE
#define __WINCE_DEFINED_PSTREAM_CREATELOCALPLUG_RESPONSE
typedef STREAM_CreateLocalPlug_Response *PSTREAM_CreateLocalPlug_Response, *LPSTREAM_CreateLocalPlug_Response;
#endif /* __WINCE_DEFINED_PSTREAM_CREATELOCALPLUG_RESPONSE */

/* STREAM_DeleteLocalPlug_Request  [struct; ce-only] */
#ifndef __WINCE_DEFINED_STREAM_DELETELOCALPLUG_REQUEST
#define __WINCE_DEFINED_STREAM_DELETELOCALPLUG_REQUEST
typedef struct { HANDLE sdlp_Plug;} STREAM_DeleteLocalPlug_Request;
#endif /* __WINCE_DEFINED_STREAM_DELETELOCALPLUG_REQUEST */
#ifndef __WINCE_DEFINED_PSTREAM_DELETELOCALPLUG_REQUEST
#define __WINCE_DEFINED_PSTREAM_DELETELOCALPLUG_REQUEST
typedef STREAM_DeleteLocalPlug_Request *PSTREAM_DeleteLocalPlug_Request, *LPSTREAM_DeleteLocalPlug_Request;
#endif /* __WINCE_DEFINED_PSTREAM_DELETELOCALPLUG_REQUEST */

/* STREAM_DereferenceRemotePlug_Request  [struct; ce-only] */
#ifndef __WINCE_DEFINED_STREAM_DEREFERENCEREMOTEPLUG_REQUEST
#define __WINCE_DEFINED_STREAM_DEREFERENCEREMOTEPLUG_REQUEST
typedef struct { ULONG sdrp_Direction; ULONG sdrp_SubunitPlugID; ULONG sdrp_PlugNumber; PVOID sdrp_PlugToken;} STREAM_DereferenceRemotePlug_Request;
#endif /* __WINCE_DEFINED_STREAM_DEREFERENCEREMOTEPLUG_REQUEST */
#ifndef __WINCE_DEFINED_PSTREAM_DEREFERENCEREMOTEPLUG_REQUEST
#define __WINCE_DEFINED_PSTREAM_DEREFERENCEREMOTEPLUG_REQUEST
typedef STREAM_DereferenceRemotePlug_Request *PSTREAM_DereferenceRemotePlug_Request, *LPSTREAM_DereferenceRemotePlug_Request;
#endif /* __WINCE_DEFINED_PSTREAM_DEREFERENCEREMOTEPLUG_REQUEST */

/* STREAM_GetMediaSize_Response  [struct; ce-only] */
#ifndef __WINCE_DEFINED_STREAM_GETMEDIASIZE_RESPONSE
#define __WINCE_DEFINED_STREAM_GETMEDIASIZE_RESPONSE
typedef struct { ULONG sgms_PacketSize; ULONG sgms_FrameSize;} STREAM_GetMediaSize_Response;
#endif /* __WINCE_DEFINED_STREAM_GETMEDIASIZE_RESPONSE */
#ifndef __WINCE_DEFINED_PSTREAM_GETMEDIASIZE_RESPONSE
#define __WINCE_DEFINED_PSTREAM_GETMEDIASIZE_RESPONSE
typedef STREAM_GetMediaSize_Response *PSTREAM_GetMediaSize_Response, *LPSTREAM_GetMediaSize_Response;
#endif /* __WINCE_DEFINED_PSTREAM_GETMEDIASIZE_RESPONSE */

/* STREAM_GetRemotePlugHandle_Request  [struct; ce-only] */
#ifndef __WINCE_DEFINED_STREAM_GETREMOTEPLUGHANDLE_REQUEST
#define __WINCE_DEFINED_STREAM_GETREMOTEPLUGHANDLE_REQUEST
typedef struct { ULONG sgrph_PlugNumber; ULONG sgrph_PlugDirection;} STREAM_GetRemotePlugHandle_Request;
#endif /* __WINCE_DEFINED_STREAM_GETREMOTEPLUGHANDLE_REQUEST */
#ifndef __WINCE_DEFINED_PSTREAM_GETREMOTEPLUGHANDLE_REQUEST
#define __WINCE_DEFINED_PSTREAM_GETREMOTEPLUGHANDLE_REQUEST
typedef STREAM_GetRemotePlugHandle_Request *PSTREAM_GetRemotePlugHandle_Request, *LPSTREAM_GetRemotePlugHandle_Request;
#endif /* __WINCE_DEFINED_PSTREAM_GETREMOTEPLUGHANDLE_REQUEST */

/* STREAM_GetRemotePlugHandle_Response  [struct; ce-only] */
#ifndef __WINCE_DEFINED_STREAM_GETREMOTEPLUGHANDLE_RESPONSE
#define __WINCE_DEFINED_STREAM_GETREMOTEPLUGHANDLE_RESPONSE
typedef struct { HANDLE sgrph_Plug;} STREAM_GetRemotePlugHandle_Response;
#endif /* __WINCE_DEFINED_STREAM_GETREMOTEPLUGHANDLE_RESPONSE */
#ifndef __WINCE_DEFINED_PSTREAM_GETREMOTEPLUGHANDLE_RESPONSE
#define __WINCE_DEFINED_PSTREAM_GETREMOTEPLUGHANDLE_RESPONSE
typedef STREAM_GetRemotePlugHandle_Response *PSTREAM_GetRemotePlugHandle_Response, *LPSTREAM_GetRemotePlugHandle_Response;
#endif /* __WINCE_DEFINED_PSTREAM_GETREMOTEPLUGHANDLE_RESPONSE */

/* STREAM_LocateRemotePlug_Request  [struct; ce-only] */
#ifndef __WINCE_DEFINED_STREAM_LOCATEREMOTEPLUG_REQUEST
#define __WINCE_DEFINED_STREAM_LOCATEREMOTEPLUG_REQUEST
typedef struct { ULONG slrp_MediaType; ULONG slrp_Direction; ULONG slrp_SubunitPlugID;} STREAM_LocateRemotePlug_Request;
#endif /* __WINCE_DEFINED_STREAM_LOCATEREMOTEPLUG_REQUEST */
#ifndef __WINCE_DEFINED_PSTREAM_LOCATEREMOTEPLUG_REQUEST
#define __WINCE_DEFINED_PSTREAM_LOCATEREMOTEPLUG_REQUEST
typedef STREAM_LocateRemotePlug_Request *PSTREAM_LocateRemotePlug_Request, *LPSTREAM_LocateRemotePlug_Request;
#endif /* __WINCE_DEFINED_PSTREAM_LOCATEREMOTEPLUG_REQUEST */

/* STREAM_LocateRemotePlug_Response  [struct; ce-only] */
#ifndef __WINCE_DEFINED_STREAM_LOCATEREMOTEPLUG_RESPONSE
#define __WINCE_DEFINED_STREAM_LOCATEREMOTEPLUG_RESPONSE
typedef struct { ULONG slrp_PlugNumber; PVOID slrp_PlugToken;} STREAM_LocateRemotePlug_Response;
#endif /* __WINCE_DEFINED_STREAM_LOCATEREMOTEPLUG_RESPONSE */
#ifndef __WINCE_DEFINED_PSTREAM_LOCATEREMOTEPLUG_RESPONSE
#define __WINCE_DEFINED_PSTREAM_LOCATEREMOTEPLUG_RESPONSE
typedef STREAM_LocateRemotePlug_Response *PSTREAM_LocateRemotePlug_Response, *LPSTREAM_LocateRemotePlug_Response;
#endif /* __WINCE_DEFINED_PSTREAM_LOCATEREMOTEPLUG_RESPONSE */

/* STREAM_MediaType  [enum; ce-only] */
#ifndef __WINCE_DEFINED_STREAM_MEDIATYPE
#define __WINCE_DEFINED_STREAM_MEDIATYPE
typedef enum { STREAM_MediaType_MPEG = 0, STREAM_MediaType_MPEG_TimeShifted, STREAM_MediaType_DSS, STREAM_MediaType_DSS_TimeShifted, STREAM_MediaType_Audio_AM824, STREAM_MediaType_Audio_24x4Pack, STREAM_MediaType_Audio_32fp, STREAM_MediaType_DV_SD_625_50Hz, STREAM_MediaType_DV_SD_525_60Hz, STREAM_MediaType_DV_SDL_625_50Hz, STREAM_MediaType_DV_SDL_525_60Hz, STREAM_MediaType_DV_HD_1250_50Hz, STREAM_MediaType_DV_HD_1125_60Hz, STREAM_MediaType_Default=0xFFFF} STREAM_MediaType;
#endif /* __WINCE_DEFINED_STREAM_MEDIATYPE */
#ifndef __WINCE_DEFINED_PSTREAM_MEDIATYPE
#define __WINCE_DEFINED_PSTREAM_MEDIATYPE
typedef STREAM_MediaType *PSTREAM_MediaType, *LPSTREAM_MediaType;
#endif /* __WINCE_DEFINED_PSTREAM_MEDIATYPE */

/* STREAM_SetMediaSize_Request  [struct; ce-only] */
#ifndef __WINCE_DEFINED_STREAM_SETMEDIASIZE_REQUEST
#define __WINCE_DEFINED_STREAM_SETMEDIASIZE_REQUEST
typedef struct { STREAM_MediaType ssms_MediaType; ULONG ssms_FrameSize;} STREAM_SetMediaSize_Request;
#endif /* __WINCE_DEFINED_STREAM_SETMEDIASIZE_REQUEST */
#ifndef __WINCE_DEFINED_PSTREAM_SETMEDIASIZE_REQUEST
#define __WINCE_DEFINED_PSTREAM_SETMEDIASIZE_REQUEST
typedef STREAM_SetMediaSize_Request *PSTREAM_SetMediaSize_Request, *LPSTREAM_SetMediaSize_Request;
#endif /* __WINCE_DEFINED_PSTREAM_SETMEDIASIZE_REQUEST */

/* STREAM_StartReceiveSession_Request  [struct; ce-only] */
#ifndef __WINCE_DEFINED_STREAM_STARTRECEIVESESSION_REQUEST
#define __WINCE_DEFINED_STREAM_STARTRECEIVESESSION_REQUEST
typedef struct { HANDLE ssrs_LocalPlug; HANDLE ssrs_RemotePlug; STREAM_MediaType ssrs_MediaType; union { struct { ULONG ssrs_ClusterDimension; }; };} STREAM_StartReceiveSession_Request;
#endif /* __WINCE_DEFINED_STREAM_STARTRECEIVESESSION_REQUEST */
#ifndef __WINCE_DEFINED_PSTREAM_STARTRECEIVESESSION_REQUEST
#define __WINCE_DEFINED_PSTREAM_STARTRECEIVESESSION_REQUEST
typedef STREAM_StartReceiveSession_Request *PSTREAM_StartReceiveSession_Request, *LPSTREAM_StartReceiveSession_Request;
#endif /* __WINCE_DEFINED_PSTREAM_STARTRECEIVESESSION_REQUEST */

/* STREAM_StartTransmitSession_Request  [struct; ce-only] */
#ifndef __WINCE_DEFINED_STREAM_STARTTRANSMITSESSION_REQUEST
#define __WINCE_DEFINED_STREAM_STARTTRANSMITSESSION_REQUEST
typedef struct { HANDLE ssts_LocalPlug; HANDLE ssts_RemotePlug; STREAM_MediaType ssts_MediaType; union { ULONG ssts_MaximumThroughput; struct { ULONG ssts_SampleFrequency; ULONG ssts_ClusterDimension; }; };} STREAM_StartTransmitSession_Request;
#endif /* __WINCE_DEFINED_STREAM_STARTTRANSMITSESSION_REQUEST */
#ifndef __WINCE_DEFINED_PSTREAM_STARTTRANSMITSESSION_REQUEST
#define __WINCE_DEFINED_PSTREAM_STARTTRANSMITSESSION_REQUEST
typedef STREAM_StartTransmitSession_Request *PSTREAM_StartTransmitSession_Request, *LPSTREAM_StartTransmitSession_Request;
#endif /* __WINCE_DEFINED_PSTREAM_STARTTRANSMITSESSION_REQUEST */

/* STREAM_CreateLocalPlug_Request  [struct; ce-only] */
#ifndef __WINCE_DEFINED_STREAM_CREATELOCALPLUG_REQUEST
#define __WINCE_DEFINED_STREAM_CREATELOCALPLUG_REQUEST
typedef struct { ULONG sclp_PlugDirection; STREAM_MediaType sclp_MediaType; ULONG sclp_Direction; union { ULONG sclp_MaximumThroughput; struct { ULONG sclp_ClusterDimension; ULONG sclp_SampleFrequency; }; };} STREAM_CreateLocalPlug_Request;
#endif /* __WINCE_DEFINED_STREAM_CREATELOCALPLUG_REQUEST */
#ifndef __WINCE_DEFINED_PSTREAM_CREATELOCALPLUG_REQUEST
#define __WINCE_DEFINED_PSTREAM_CREATELOCALPLUG_REQUEST
typedef STREAM_CreateLocalPlug_Request *PSTREAM_CreateLocalPlug_Request, *LPSTREAM_CreateLocalPlug_Request;
#endif /* __WINCE_DEFINED_PSTREAM_CREATELOCALPLUG_REQUEST */

/* STREAM_GetMediaSize_Request  [struct; ce-only] */
#ifndef __WINCE_DEFINED_STREAM_GETMEDIASIZE_REQUEST
#define __WINCE_DEFINED_STREAM_GETMEDIASIZE_REQUEST
typedef struct { STREAM_MediaType sgms_MediaType;} STREAM_GetMediaSize_Request;
#endif /* __WINCE_DEFINED_STREAM_GETMEDIASIZE_REQUEST */
#ifndef __WINCE_DEFINED_PSTREAM_GETMEDIASIZE_REQUEST
#define __WINCE_DEFINED_PSTREAM_GETMEDIASIZE_REQUEST
typedef STREAM_GetMediaSize_Request *PSTREAM_GetMediaSize_Request, *LPSTREAM_GetMediaSize_Request;
#endif /* __WINCE_DEFINED_PSTREAM_GETMEDIASIZE_REQUEST */

#endif /* _AVC_STREAM_ */
