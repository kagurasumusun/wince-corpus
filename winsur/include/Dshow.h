/* Dshow.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 12 constants, 45 declarations, 3 outlines, 0 base types, 0 extra macros, 66 extra decls
 */
#ifndef _DSHOW_
#define _DSHOW_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define AM_VIDEO_FLAG_FIELD1 0x0001
#define AM_VIDEO_FLAG_FIELD1FIRST 0x0004
#define AM_VIDEO_FLAG_FIELD2 0x0002
#define AM_VIDEO_FLAG_FIELD_MASK 0x0003
#define AM_VIDEO_FLAG_INTERLEAVED_FRAME 0x0000
#define AM_VIDEO_FLAG_REPEAT_FIELD 0x0040
#define AM_VIDEO_FLAG_WEAVE 0x0008
#define KSPROPERTY_CAMERACONTROL_FLAGS_ABSOLUTE 0x0000L
#define KSPROPERTY_CAMERACONTROL_FLAGS_AUTO 0x0001L
#define KSPROPERTY_CAMERACONTROL_FLAGS_MANUAL 0x0002L
#define KSPROPERTY_CAMERACONTROL_FLAGS_RELATIVE 0x0010L
#define MAXLONGLONG 0x7FFFFFFFFFFFFFFF

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* _AM_FILTER_MISC_FLAGS  [enum; shared; entity-headers] */
#ifndef __WINCE_DEFINED__AM_FILTER_MISC_FLAGS
#define __WINCE_DEFINED__AM_FILTER_MISC_FLAGS
typedef enum _AM_FILTER_MISC_FLAGS {
 AM_FILTER_MISC_FLAGS_IS_RENDERER = 0x00000001,
 AM_FILTER_MISC_FLAGS_IS_SOURCE = 0x00000002,
 AM_FILTER_MISC_FLAG_NO_CAPTURE_PAUSE = 0x00000004
};
#endif /* __WINCE_DEFINED__AM_FILTER_MISC_FLAGS */

/* ALLOCATOR_PROPERTIES  [struct, typedef; shared] */
#ifndef __WINCE_DEFINED__ALLOCATORPROPERTIES
#define __WINCE_DEFINED__ALLOCATORPROPERTIES
#ifndef __WINCE_DEFINED_ALLOCATOR_PROPERTIES
#define __WINCE_DEFINED_ALLOCATOR_PROPERTIES
typedef struct _AllocatorProperties {
 long cBuffers;
 long cbBuffer;
 long cbAlign;
 long cbPrefix;
} ALLOCATOR_PROPERTIES;
#endif /* __WINCE_DEFINED_ALLOCATOR_PROPERTIES */
#endif /* __WINCE_DEFINED__ALLOCATORPROPERTIES */
#ifndef __WINCE_DEFINED_PALLOCATOR_PROPERTIES
#define __WINCE_DEFINED_PALLOCATOR_PROPERTIES
typedef ALLOCATOR_PROPERTIES *PALLOCATOR_PROPERTIES, *LPALLOCATOR_PROPERTIES;
#endif /* __WINCE_DEFINED_PALLOCATOR_PROPERTIES */

/* AM_FILESINK_FLAGS  [enum; ce-only; heuristic-prefix] */
#ifndef __WINCE_DEFINED_AM_FILESINK_FLAGS
#define __WINCE_DEFINED_AM_FILESINK_FLAGS
typedef enum {
 AM_FILE_OVERWRITE = 0x00000001,
} AM_FILESINK_FLAGS;
#endif /* __WINCE_DEFINED_AM_FILESINK_FLAGS */
#ifndef __WINCE_DEFINED_PAM_FILESINK_FLAGS
#define __WINCE_DEFINED_PAM_FILESINK_FLAGS
typedef AM_FILESINK_FLAGS *PAM_FILESINK_FLAGS, *LPAM_FILESINK_FLAGS;
#endif /* __WINCE_DEFINED_PAM_FILESINK_FLAGS */

/* AM_STREAM_INFO_FLAGS  [enum, typedef; shared; entity-headers] */
#ifndef __WINCE_DEFINED_AM_STREAM_INFO_FLAGS
#define __WINCE_DEFINED_AM_STREAM_INFO_FLAGS
typedef enum {
 AM_STREAM_INFO_START_DEFINED = 0x00000001,
 AM_STREAM_INFO_STOP_DEFINED = 0x00000002,
 AM_STREAM_INFO_DISCARDING = 0x00000004,
 AM_STREAM_INFO_STOP_SEND_EXTRA = 0x00000010
} AM_STREAM_INFO_FLAGS;
#endif /* __WINCE_DEFINED_AM_STREAM_INFO_FLAGS */
#ifndef __WINCE_DEFINED_PAM_STREAM_INFO_FLAGS
#define __WINCE_DEFINED_PAM_STREAM_INFO_FLAGS
typedef AM_STREAM_INFO_FLAGS *PAM_STREAM_INFO_FLAGS, *LPAM_STREAM_INFO_FLAGS;
#endif /* __WINCE_DEFINED_PAM_STREAM_INFO_FLAGS */

/* AM_VIDEO_RENDERER_MODE  [enum; ce-only; heuristic-prefix] */
#ifndef __WINCE_DEFINED_AM_VIDEO_RENDERER_MODE
#define __WINCE_DEFINED_AM_VIDEO_RENDERER_MODE
typedef enum {
 AM_VIDEO_RENDERER_MODE_DDRAW,
 AM_VIDEO_RENDERER_MODE_GDI
} AM_VIDEO_RENDERER_MODE;
#endif /* __WINCE_DEFINED_AM_VIDEO_RENDERER_MODE */
#ifndef __WINCE_DEFINED_PAM_VIDEO_RENDERER_MODE
#define __WINCE_DEFINED_PAM_VIDEO_RENDERER_MODE
typedef AM_VIDEO_RENDERER_MODE *PAM_VIDEO_RENDERER_MODE, *LPAM_VIDEO_RENDERER_MODE;
#endif /* __WINCE_DEFINED_PAM_VIDEO_RENDERER_MODE */

/* AMVPSIZE  [struct, typedef; shared] */
#ifndef __WINCE_DEFINED__AMVPSIZE
#define __WINCE_DEFINED__AMVPSIZE
#ifndef __WINCE_DEFINED_AMVPSIZE
#define __WINCE_DEFINED_AMVPSIZE
#ifndef __WINCE_DEFINED_LPAMVPSIZE
#define __WINCE_DEFINED_LPAMVPSIZE
typedef struct _AMVPSIZE{
 DWORD dwWidth;
 DWORD dwHeight;
} AMVPSIZE, *LPAMVPSIZE;
#endif /* __WINCE_DEFINED_LPAMVPSIZE */
#endif /* __WINCE_DEFINED_AMVPSIZE */
#endif /* __WINCE_DEFINED__AMVPSIZE */

/* AnalogVideoStandard  [enum, typedef; shared; entity-headers] */
#ifndef __WINCE_DEFINED_ANALOGVIDEOSTANDARD
#define __WINCE_DEFINED_ANALOGVIDEOSTANDARD
typedef enum {
 AnalogVideo_None = 0x00000000,
 AnalogVideo_NTSC_M = 0x00000001,
 AnalogVideo_NTSC_M_J = 0x00000002,
 AnalogVideo_NTSC_433 = 0x00000004,
 AnalogVideo_PAL_B = 0x00000010,
 AnalogVideo_PAL_D = 0x00000020,
 AnalogVideo_PAL_H = 0x00000080,
 AnalogVideo_PAL_I = 0x00000100,
 AnalogVideo_PAL_M = 0x00000200,
 AnalogVideo_PAL_N = 0x00000400,
 AnalogVideo_PAL_60 = 0x00000800,
 AnalogVideo_SECAM_B = 0x00001000,
 AnalogVideo_SECAM_D = 0x00002000,
 AnalogVideo_SECAM_G = 0x00004000,
 AnalogVideo_SECAM_H = 0x00008000,
 AnalogVideo_SECAM_K = 0x00010000,
 AnalogVideo_SECAM_K1 = 0x00020000,
 AnalogVideo_SECAM_L = 0x00040000,
 AnalogVideo_SECAM_L1 = 0x00080000,
} AnalogVideoStandard;
#endif /* __WINCE_DEFINED_ANALOGVIDEOSTANDARD */
#ifndef __WINCE_DEFINED_PANALOGVIDEOSTANDARD
#define __WINCE_DEFINED_PANALOGVIDEOSTANDARD
typedef AnalogVideoStandard *PAnalogVideoStandard, *LPAnalogVideoStandard;
#endif /* __WINCE_DEFINED_PANALOGVIDEOSTANDARD */

/* CameraControlFlags  [enum; shared; entity-headers] */
#ifndef __WINCE_DEFINED_CAMERACONTROLFLAGS
#define __WINCE_DEFINED_CAMERACONTROLFLAGS
typedef enum{
 CameraControl_Flags_Auto = 0x0001,
 CameraControl_Flags_Manual = 0x0002
} CameraControlFlags;
#endif /* __WINCE_DEFINED_CAMERACONTROLFLAGS */
#ifndef __WINCE_DEFINED_PCAMERACONTROLFLAGS
#define __WINCE_DEFINED_PCAMERACONTROLFLAGS
typedef CameraControlFlags *PCameraControlFlags, *LPCameraControlFlags;
#endif /* __WINCE_DEFINED_PCAMERACONTROLFLAGS */

/* CameraControlProperty  [enum; shared; entity-headers] */
#ifndef __WINCE_DEFINED_CAMERACONTROLPROPERTY
#define __WINCE_DEFINED_CAMERACONTROLPROPERTY
typedef enum {
 CameraControl_Pan,
 CameraControl_Tilt,
 CameraControl_Roll,
 CameraControl_Zoom,
 CameraControl_Exposure,
 CameraControl_Iris,
 CameraControl_Focus,
 CameraControl_Flash
} CameraControlProperty;
#endif /* __WINCE_DEFINED_CAMERACONTROLPROPERTY */
#ifndef __WINCE_DEFINED_PCAMERACONTROLPROPERTY
#define __WINCE_DEFINED_PCAMERACONTROLPROPERTY
typedef CameraControlProperty *PCameraControlProperty, *LPCameraControlProperty;
#endif /* __WINCE_DEFINED_PCAMERACONTROLPROPERTY */

/* COLORKEY  [struct, typedef, function; shared] */
#ifndef __WINCE_DEFINED_TAGCOLORKEY
#define __WINCE_DEFINED_TAGCOLORKEY
#ifndef __WINCE_DEFINED_COLORKEY
#define __WINCE_DEFINED_COLORKEY
typedef struct tagCOLORKEY{
 DWORD KeyType;
 DWORD PaletteIndex;
 COLORREF LowColorValue;
 COLORREF HighColorValue;
} COLORKEY;
#endif /* __WINCE_DEFINED_COLORKEY */
#endif /* __WINCE_DEFINED_TAGCOLORKEY */
#ifndef __WINCE_DEFINED_PCOLORKEY
#define __WINCE_DEFINED_PCOLORKEY
typedef COLORKEY *PCOLORKEY, *LPCOLORKEY;
#endif /* __WINCE_DEFINED_PCOLORKEY */

/* CompressionCaps  [enum; shared; entity-headers] */
#ifndef __WINCE_DEFINED_COMPRESSIONCAPS
#define __WINCE_DEFINED_COMPRESSIONCAPS
typedef enum {
 CompressionCaps_CanQuality = 0x01,
 CompressionCaps_CanCrunch = 0x02,
 CompressionCaps_CanKeyFrame = 0x04,
 CompressionCaps_CanBFrame = 0x08,
 CompressionCaps_CanWindow = 0x10
} CompressionCaps;
#endif /* __WINCE_DEFINED_COMPRESSIONCAPS */
#ifndef __WINCE_DEFINED_PCOMPRESSIONCAPS
#define __WINCE_DEFINED_PCOMPRESSIONCAPS
typedef CompressionCaps *PCompressionCaps, *LPCompressionCaps;
#endif /* __WINCE_DEFINED_PCOMPRESSIONCAPS */

/* FILTER_INFO  [struct, typedef; shared] */
#ifndef __WINCE_DEFINED__FILTERINFO
#define __WINCE_DEFINED__FILTERINFO
#ifndef __WINCE_DEFINED_FILTER_INFO
#define __WINCE_DEFINED_FILTER_INFO
typedef struct _FilterInfo{
 WCHAR achName[128];
 IFilterGraph __RPC_FAR* pGraph;
} FILTER_INFO;
#endif /* __WINCE_DEFINED_FILTER_INFO */
#endif /* __WINCE_DEFINED__FILTERINFO */
#ifndef __WINCE_DEFINED_PFILTER_INFO
#define __WINCE_DEFINED_PFILTER_INFO
typedef FILTER_INFO *PFILTER_INFO, *LPFILTER_INFO;
#endif /* __WINCE_DEFINED_PFILTER_INFO */

/* FILTER_STATE  [enum, typedef; shared; entity-headers] */
#ifndef __WINCE_DEFINED__FILTERSTATE
#define __WINCE_DEFINED__FILTERSTATE
#ifndef __WINCE_DEFINED_FILTER_STATE
#define __WINCE_DEFINED_FILTER_STATE
typedef enum _FilterState {
 State_Stopped = 0,
 State_Paused = State_Stopped + 1,
 State_Running = State_Paused + 1
} FILTER_STATE;
#endif /* __WINCE_DEFINED_FILTER_STATE */
#endif /* __WINCE_DEFINED__FILTERSTATE */
#ifndef __WINCE_DEFINED_PFILTER_STATE
#define __WINCE_DEFINED_PFILTER_STATE
typedef FILTER_STATE *PFILTER_STATE, *LPFILTER_STATE;
#endif /* __WINCE_DEFINED_PFILTER_STATE */

/* PIN_DIRECTION  [enum, typedef; shared; entity-headers] */
#ifndef __WINCE_DEFINED__PINDIRECTION
#define __WINCE_DEFINED__PINDIRECTION
#ifndef __WINCE_DEFINED_PIN_DIRECTION
#define __WINCE_DEFINED_PIN_DIRECTION
typedef enum _PinDirection {
 PINDIR_INPUT,
 PINDIR_OUTPUT
} PIN_DIRECTION;
#endif /* __WINCE_DEFINED_PIN_DIRECTION */
#endif /* __WINCE_DEFINED__PINDIRECTION */
#ifndef __WINCE_DEFINED_PPIN_DIRECTION
#define __WINCE_DEFINED_PPIN_DIRECTION
typedef PIN_DIRECTION *PPIN_DIRECTION, *LPPIN_DIRECTION;
#endif /* __WINCE_DEFINED_PPIN_DIRECTION */

/* POSITION  [struct, typedef; ce-only] */
#ifndef __WINCE_DEFINED___POSITION
#define __WINCE_DEFINED___POSITION
#ifndef __WINCE_DEFINED_POSITION
#define __WINCE_DEFINED_POSITION
struct __POSITION { int unused; };
typedef __POSITION* POSITION;
#endif /* __WINCE_DEFINED_POSITION */
#endif /* __WINCE_DEFINED___POSITION */

/* QualityMessageType  [enum, typedef; shared; entity-headers] */
#ifndef __WINCE_DEFINED_QUALITYMESSAGETYPE
#define __WINCE_DEFINED_QUALITYMESSAGETYPE
typedef enum {
 Famine,
 Flood
} QualityMessageType;
#endif /* __WINCE_DEFINED_QUALITYMESSAGETYPE */
#ifndef __WINCE_DEFINED_PQUALITYMESSAGETYPE
#define __WINCE_DEFINED_PQUALITYMESSAGETYPE
typedef QualityMessageType *PQualityMessageType, *LPQualityMessageType;
#endif /* __WINCE_DEFINED_PQUALITYMESSAGETYPE */

/* TIMECODE  [struct, typedef; shared] */
#ifndef __WINCE_DEFINED_TAGTIMECODE
#define __WINCE_DEFINED_TAGTIMECODE
#ifndef __WINCE_DEFINED_TIMECODE
#define __WINCE_DEFINED_TIMECODE
typedef struct tagTIMECODE {
 WORD wFrameRate;
 WORD wFrameFract;
 WORD dwFrames;
}TIMECODE;
#endif /* __WINCE_DEFINED_TIMECODE */
#endif /* __WINCE_DEFINED_TAGTIMECODE */
#ifndef __WINCE_DEFINED_PTIMECODE
#define __WINCE_DEFINED_PTIMECODE
typedef TIMECODE *PTIMECODE, *LPTIMECODE;
#endif /* __WINCE_DEFINED_PTIMECODE */

/* TIMECODE_SAMPLE  [struct, typedef; shared] */
#ifndef __WINCE_DEFINED_TAGTIMECODE_SAMPLE
#define __WINCE_DEFINED_TAGTIMECODE_SAMPLE
#ifndef __WINCE_DEFINED_TIMECODE_SAMPLE
#define __WINCE_DEFINED_TIMECODE_SAMPLE
typedef struct tagTIMECODE_SAMPLE {
 LONGLONG qwTick;
 TIMECODE timecode;
 DWORD dwUser;
 DWORD dwFlags;
} TIMECODE_SAMPLE;
#endif /* __WINCE_DEFINED_TIMECODE_SAMPLE */
#endif /* __WINCE_DEFINED_TAGTIMECODE_SAMPLE */
#ifndef __WINCE_DEFINED_PTIMECODE_SAMPLE
#define __WINCE_DEFINED_PTIMECODE_SAMPLE
typedef TIMECODE_SAMPLE *PTIMECODE_SAMPLE, *LPTIMECODE_SAMPLE;
#endif /* __WINCE_DEFINED_PTIMECODE_SAMPLE */

/* VideoControlFlags  [enum; shared; entity-headers] */
#ifndef __WINCE_DEFINED_TAGVIDEOCONTROLFLAGS
#define __WINCE_DEFINED_TAGVIDEOCONTROLFLAGS
#ifndef __WINCE_DEFINED_VIDEOCONTROLFLAGS
#define __WINCE_DEFINED_VIDEOCONTROLFLAGS
typedef enum tagVideoControlFlags {
 VideoControlFlag_FlipHorizontal = 0x0001,
 VideoControlFlag_FlipVertical = 0x0002,
 VideoControlFlag_ExternalTriggerEnable = 0x0004,
 VideoControlFlag_Trigger = 0x0008
} VideoControlFlags;
#endif /* __WINCE_DEFINED_VIDEOCONTROLFLAGS */
#endif /* __WINCE_DEFINED_TAGVIDEOCONTROLFLAGS */
#ifndef __WINCE_DEFINED_PVIDEOCONTROLFLAGS
#define __WINCE_DEFINED_PVIDEOCONTROLFLAGS
typedef VideoControlFlags *PVideoControlFlags, *LPVideoControlFlags;
#endif /* __WINCE_DEFINED_PVIDEOCONTROLFLAGS */

/* VideoProcAmpFlags  [enum; shared; entity-headers] */
#ifndef __WINCE_DEFINED_TAGVIDEOPROCAMPFLAGS
#define __WINCE_DEFINED_TAGVIDEOPROCAMPFLAGS
#ifndef __WINCE_DEFINED_VIDEOPROCAMPFLAGS
#define __WINCE_DEFINED_VIDEOPROCAMPFLAGS
typedef enum tagVideoProcAmpFlags {
 VideoProcAmp_Flags_Auto = 0x0001,
 VideoProcAmp_Flags_Manual = 0x0002,
} VideoProcAmpFlags;
#endif /* __WINCE_DEFINED_VIDEOPROCAMPFLAGS */
#endif /* __WINCE_DEFINED_TAGVIDEOPROCAMPFLAGS */
#ifndef __WINCE_DEFINED_PVIDEOPROCAMPFLAGS
#define __WINCE_DEFINED_PVIDEOPROCAMPFLAGS
typedef VideoProcAmpFlags *PVideoProcAmpFlags, *LPVideoProcAmpFlags;
#endif /* __WINCE_DEFINED_PVIDEOPROCAMPFLAGS */

/* VideoProcAmpProperty  [enum; shared; entity-headers] */
#ifndef __WINCE_DEFINED_TAGVIDEOPROCAMPPROPERTY
#define __WINCE_DEFINED_TAGVIDEOPROCAMPPROPERTY
#ifndef __WINCE_DEFINED_VIDEOPROCAMPPROPERTY
#define __WINCE_DEFINED_VIDEOPROCAMPPROPERTY
typedef enum tagVideoProcAmpProperty {
 VideoProcAmp_Brightness,
 VideoProcAmp_Contrast,
 VideoProcAmp_Hue,
 VideoProcAmp_Saturation,
 VideoProcAmp_Sharpness,
 VideoProcAmp_Gamma,
 VideoProcAmp_ColorEnable,
 VideoProcAmp_WhiteBalance,
 VideoProcAmp_BacklightCompensation,
 VideoProcAmp_Gain
} VideoProcAmpProperty;
#endif /* __WINCE_DEFINED_VIDEOPROCAMPPROPERTY */
#endif /* __WINCE_DEFINED_TAGVIDEOPROCAMPPROPERTY */
#ifndef __WINCE_DEFINED_PVIDEOPROCAMPPROPERTY
#define __WINCE_DEFINED_PVIDEOPROCAMPPROPERTY
typedef VideoProcAmpProperty *PVideoProcAmpProperty, *LPVideoProcAmpProperty;
#endif /* __WINCE_DEFINED_PVIDEOPROCAMPPROPERTY */

/* AM_MEDIA_TYPE  [struct, typedef; shared] */
/* DERIVED member outline -- documented order, types/offsets not stated */
/*   majortype */
/*   subtype */
/*   bFixedSizeSamples */
/*   bTemporalCompression */
/*   lSampleSize */
/*   formattype */
/*   pUnk */
/*   cbFormat */
/*   pbFormat */

/* PIN_INFO  [struct, typedef; shared] */
/* DERIVED member outline -- documented order, types/offsets not stated */
/*   pFilter */
/*   dir */
/*   achName */

/* REGFILTER2  [struct, typedef; shared] */
/* DERIVED member outline -- documented order, types/offsets not stated */
/*   dwVersion */
/*   dwMerit */
/*   cPins */
/*   rgPins */
/*   cPins2 */
/*   rgPins2 */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x300 && _WIN32_WCE < 0x400)) /* CE 3.0..399 */

/* IAMDevMem  [function; ce-only; CE 3.0..399; heuristic-prefix] */
HRESULT QueryWriteSync();
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT AddSourceFilter(LPCWSTR lpwstrFileName, LPCWSTR lpwstrFilterName, IbaseFilter **ppFilter);
HRESULT AutoTune(long lChannel, long *plFoundSignal);
HRESULT ChannelMinMax(long *lChannelMin, long *lChannelMax);
HRESULT CheckMemory(const BYTE *pBuffer);
DWORD ColorKey (void);
HRESULT Enable(long lIndex, DWORD dwFlags);
HRESULT GetAllocatorProperties(ALLOCATOR_PROPERTIES* pprop);
HRESULT GetAvailableModes(long *plModes);
HRESULT GetAverageFrameSize(long* plAverageSize);
HRESULT GetDefaultColorKey(COLORKEY *pColorKey);
HRESULT GetDevId(DWORD *pdwDevId);
HRESULT GetDroppedInfo(long lSize, long* plArray, long* plNumCopied);
LONG GetMiscFlags(void);
HRESULT GetNumDropped(long* plDropped);
HRESULT GetNumNotDropped(long* plNotDropped);
HRESULT GetNumberOfCapabilities(int* piCount, int* piSize);
HRESULT GetRange(long Property, long* pMin, long* pMax, long* pSteppingDelta, long* pDefault, long* pCapsFlags);
HRESULT GetStreamCaps(int iIndex, AM_MEDIA_TYPE** pmt, BYTE* pSCC);
HRESULT Length(LONGLONG* pTotal, LONGLONG* pAvailable);
HRESULT Logout(void);
HRESULT NotifyGraphChange();
HRESULT OnColorKeyChange(COLORKEY *pColorKey);
HRESULT OnPaletteChange(DWORD dwColors, const PALETTEENTRY *pPalette);
HRESULT OnPositionChange(const RECT *pSourceRect, const RECT *pDestinationRect);
HRESULT OverrideFrameSize(long FrameNumber, long Size);
HRESULT OverrideKeyFrame(long FrameNumber);
HRESULT QueryVersion(LONG *pVersion);
HRESULT RenderFile(LPCWSTR lpwstrFile, LPCWSTR lpwstrPlayList);
HRESULT SetDefaultSyncSource(void);
HRESULT SetLogFile(HANDLE hFile);
HRESULT SignalPresent(long *plSignalStrength);
HRESULT StoreAutoTune(void);
HRESULT SuggestAllocatorProperties(const ALLOCATOR_PROPERTIES* pprop);
HRESULT SyncRead(LONGLONG llPosition, LONG lLength, BYTE* pBuffer);
HRESULT WriteSync();
HRESULT get_AudioFrequency(long *lFreq);
HRESULT get_AvailableTVFormats(long *lAnalogVideoStandard);
HRESULT get_Channel (long *plChannel, long *plVideoSubChannel, long *plAudioSubChannel);
HRESULT get_ConnectInput (long *plIndex);
HRESULT get_CountryCode(long *plCountryCode);
HRESULT get_InputType (long lIndex, TunerInputType *pInputType);
HRESULT get_NumInputConnections(long *plNumInputConnections);
HRESULT get_PFramesPerKeyFrame(long* pPFramesPerKeyFrame);
HRESULT get_Quality(double* pQuality);
HRESULT get_TVFormat(long *plAnalogVideoStandard);
HRESULT get_TuningSpace(long *plTuningSpace);
HRESULT get_VideoFrequency(long *lFreq);
HRESULT put_Channel(long lChannel, long lVideoSubChannel, long lAudioSubChannel);
HRESULT put_ConnectInput(long lIndex);
HRESULT put_CountryCode(long lCountryCode);
HRESULT put_InputType(long lIndex, TunerInputType InputType);
HRESULT put_KeyFrameRate(long KeyFrameRate);
HRESULT put_PFramesPerKeyFrame(long PFramesPerKeyFrame);
HRESULT put_Quality(double Quality);
HRESULT put_TuningSpace(long lTuningSpace);

#endif /* _DSHOW_ */
