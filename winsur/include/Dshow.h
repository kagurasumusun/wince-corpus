/* Dshow.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 77 constants, 385 declarations, 2 outlines, 0 base types, 0 extra macros, 104 extra decls
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
#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400)) /* CE 3.0..399 */
#define AM_SAMPLE_DATADISCONTINUITY 0x04
#define AM_SAMPLE_ENDOFSTREAM 0x200
#define AM_SAMPLE_FLUSH_ON_PAUSE 0x80
#define AM_SAMPLE_PREROLL 0x02
#define AM_SAMPLE_STOPVALID 0x100
#define AM_SAMPLE_TIMEDISCONTINUITY 0x40
#define AM_SAMPLE_TIMEVALID 0x10
#define AM_SAMPLE_TYPECHANGED 0x08
#define AM_STREAM_CONTROL 1
#define AM_STREAM_INFO_DISCARDING 0x00000004
#define AM_STREAM_INFO_START_DEFINED 0x00000001
#define AM_STREAM_INFO_STOP_DEFINED 0x00000002
#define AM_STREAM_INFO_STOP_SEND_EXTRA 0x00000010
#define AM_STREAM_MEDIA 0
#define AnalogVideo_None 0x00000000
#define AnalogVideo_NTSC_433 0x00000004
#define AnalogVideo_NTSC_M 0x00000001
#define AnalogVideo_NTSC_M_J 0x00000002
#define AnalogVideo_PAL_60 0x00000800
#define AnalogVideo_PAL_B 0x00000010
#define AnalogVideo_PAL_D 0x00000020
#define AnalogVideo_PAL_H 0x00000080
#define AnalogVideo_PAL_I 0x00000100
#define AnalogVideo_PAL_M 0x00000200
#define AnalogVideo_PAL_N 0x00000400
#define AnalogVideo_SECAM_B 0x00001000
#define AnalogVideo_SECAM_D 0x00002000
#define AnalogVideo_SECAM_G 0x00004000
#define AnalogVideo_SECAM_H 0x00008000
#define AnalogVideo_SECAM_K 0x00010000
#define AnalogVideo_SECAM_K1 0x00020000
#define AnalogVideo_SECAM_L 0x00040000
#define AnalogVideo_SECAM_L1 0x00080000
#define MERIT_DO_NOT_USE 0x200000
#define MERIT_HW_COMPRESSOR 0x100050
#define MERIT_NORMAL 0x600000
#define MERIT_PREFERRED 0x800000
#define MERIT_SW_COMPRESSOR 0x100000
#define MERIT_UNLIKELY 0x400000
#endif /* _WIN32_WCE */
#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */
#define AM_SAMPLE_SPLICEPOINT 0x01
#define MAXLONGLONG 0x7FFFFFFFFFFFFFFF
#define State_Stopped 0
#endif /* _WIN32_WCE */
#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */
#define AM_EXSEEK_BUFFERING 32
#define AM_EXSEEK_CANSCAN 2
#define AM_EXSEEK_CANSEEK 1
#define AM_EXSEEK_MARKERSEEK 4
#define AM_EXSEEK_NOSTANDARDREPAINT 16
#define AM_EXSEEK_SCANWITHOUTCLOCK 8
#define AM_EXSEEK_SENDS_VIDEOFRAMEREADY 64
#define AM_FILE_OVERWRITE 0x00000001
#define AM_FILTER_MISC_FLAG_NO_CAPTURE_PAUSE 0x00000004
#define AM_FILTER_MISC_FLAGS_IS_RENDERER 0x00000001
#define AM_FILTER_MISC_FLAGS_IS_SOURCE 0x00000002
#define CameraControl_Flags_Auto 0x0001
#define CameraControl_Flags_Manual 0x0002
#define CompressionCaps_CanBFrame 0x08
#define CompressionCaps_CanCrunch 0x02
#define CompressionCaps_CanKeyFrame 0x04
#define CompressionCaps_CanQuality 0x01
#define CompressionCaps_CanWindow 0x10
#define VideoControlFlag_ExternalTriggerEnable 0x0004
#define VideoControlFlag_FlipHorizontal 0x0001
#define VideoControlFlag_FlipVertical 0x0002
#define VideoControlFlag_Trigger 0x0008
#define VideoProcAmp_Flags_Auto 0x0001
#define VideoProcAmp_Flags_Manual 0x0002
#endif /* _WIN32_WCE */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 3.0..399, 5.0..599 */

/* REG_PINFLAG  [typedef; ce-only; CE 3.0..399, 5.0..599] */
enum 
{ 
 REG_PINFLAG_B_ZERO = 0x1, 
 REG_PINFLAG_B_RENDERER = 0x2, 
 REG_PINFLAG_B_MANY = 0x4, 
 REG_PINFLAG_B_OUTPUT = 0x8 
} REG_PINFLAG;

/* REGFILTER2  [struct, typedef; shared; CE 3.0..399, 5.0..599] */
typedef struct 
{ 
 DWORD dwVersion; 
 DWORD dwMerit; 
 /* unnamed union */ 
 [switch_is(dwVersion)] [switch_type(DWORD)] union 
 { 
 [case(1)] 
 struct 
 { 
 ULONG cPins; 
 [size_is(cPins)] const REGFILTERPINS *rgPins; 
 }; 
 [case(2)] 
 struct 
 { 
 ULONG cPins2; 
 [size_is(cPins2)] const REGFILTERPINS2 *rgPins2; 
 }; 
 [default] 
 ; 
 } ; 
} REGFILTER2;

/* REGFILTERPINS2  [struct, typedef; shared; CE 3.0..399, 5.0..599] */
typedef struct { 
 DWORD dwFlags; 
 UINT cInstances; 
 UINT nMediaTypes; 
 const REGPINTYPES* lpMediaType; 
 UINT nMediums; 
 const REGPINMEDIUM* lpMedium; 
 const CLSID* clsPinCategory; 
} REGFILTERPINS2;

/* REGPINMEDIUM  [struct, typedef; shared; CE 3.0..399, 5.0..599] */
typedef struct{ 
 CLSID clsMedium; 
 DWORD dw1; 
 DWORD dw2; 
} REGPINMEDIUM;
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 3.0..399, 5.0..699 */

/* ALLOCATOR_PROPERTIES  [struct, typedef; shared; CE 3.0..399, 5.0..699] */
typedef struct _AllocatorProperties {
 long cBuffers;
 long cbBuffer;
 long cbAlign;
 long cbPrefix;
} ALLOCATOR_PROPERTIES;

/* AM_MEDIA_TYPE  [struct, typedef; shared; CE 3.0..399, 5.0..699] */
typedef struct _MediaType{
 GUID majortype;
 GUID subtype;
 BOOL bFixedSizeSamples;
 BOOL bTemporalCompression;
 ULONG lSampleSize;
 GUID formattype;
 IUnknown* pUnk;
 ULONG cbFormat;
 /* [size_is] */ BYTE __RPC_FAR* pbFormat;
} AM_MEDIA_TYPE;

/* AM_SAMPLE2_PROPERTIES  [struct, typedef; shared; CE 3.0..399, 5.0..699] */
typedef struct tagAM_SAMPLE2_PROPERTIES {
 DWORD cbData;
 DWORD dwTypeSpecificFlags;
 DWORD dwSampleFlags;
 LONG lActual;
 REFERENCE_TIME tStart;
 REFERENCE_TIME tStop;
 DWORD dwStreamId;
 AM_MEDIA_TYPE* pMediaType;
 BYTE* pbBuffer;
 LONG cbBuffer;
} AM_SAMPLE2_PROPERTIES;

/* AM_SAMPLE_PROPERTY_FLAGS  [enum, typedef; ce-only; CE 3.0..399, 5.0..699; heuristic-prefix] */
enum tagAM_SAMPLE_PROPERTY_FLAGS { 
 AM_SAMPLE_SPLICEPOINT = 0x01, 
 AM_SAMPLE_PREROLL = 0x02, 
 AM_SAMPLE_DATADISCONTINUITY = 0x04, 
 AM_SAMPLE_TYPECHANGED = 0x08, 
 AM_SAMPLE_TIMEVALID = 0x10, 
 AM_SAMPLE_TIMEDISCONTINUITY = 0x40, 
 AM_SAMPLE_FLUSH_ON_PAUSE = 0x80, 
 AM_SAMPLE_STOPVALID = 0x100, 
 AM_SAMPLE_ENDOFSTREAM = 0x200, 
 AM_STREAM_MEDIA = 0, 
 AM_STREAM_CONTROL = 1 
};

/* AM_STREAM_INFO  [struct, typedef; shared; CE 3.0..399, 5.0..699] */
typedef struct {
 REFERENCE_TIME tStart;
 REFERENCE_TIME tStop;
 DWORD dwStartCookie;
 DWORD dwStopCookie;
 DWORD dwFlags;
} AM_STREAM_INFO;

/* AM_STREAM_INFO_FLAGS  [enum, typedef; shared; CE 3.0..399, 5.0..699; entity-headers] */
typedef enum {
 AM_STREAM_INFO_START_DEFINED = 0x00000001,
 AM_STREAM_INFO_STOP_DEFINED = 0x00000002,
 AM_STREAM_INFO_DISCARDING = 0x00000004,
 AM_STREAM_INFO_STOP_SEND_EXTRA = 0x00000010
} AM_STREAM_INFO_FLAGS;

/* AMOVIESETUP_FILTER  [struct, typedef; ce-only; CE 3.0..399, 5.0..699] */
typedef struct _AMOVIESETUP_FILTER{
 const CLSID* clsID;
 LPWSTR strName;
 DWORD dwMerit;
 UINT nPins;
 LPAMOVIESETUP_PIN lpPin;
} AMOVIESETUP_FILTER

/* AMOVIESETUP_MEDIATYPE  [struct, typedef; ce-only; CE 3.0..399, 5.0..699] */
typedef struct _AMOVIESETUP_MEDIATYPE{
 const CLSID* clsMajorType;
 const CLSID* clsMinorType;
} AMOVIESETUP_MEDIATYPE;

/* AMOVIESETUP_PIN  [struct, typedef; ce-only; CE 3.0..399, 5.0..699] */
typedef struct _AMOVIESETUP_PIN{
 LPWSTR strName;
 BOOL bRendered;
 BOOL bOutput;
 BOOL bZero;
 BOOL bMany;
 const CLSID* clsConnectsToFilter;
 LPWSTR strConnectsToPin;
 UINT nMediaTypes;
 LPAMOVIESETUP_MEDIATYPE lpMediaType;
} AMOVIESETUP_PIN;

/* AMVPDATAINFO  [struct, typedef; shared; CE 3.0..399, 5.0..699] */
typedef struct _AMVPDATAINFO{
 DWORD dwSize; 
 DWORD dwMicrosecondsPerField; 
 AMVPDIMINFO amvpDimInfo; 
 DWORD dwPictAspectRatioX;
 DWORD dwPictAspectRatioY;
 BOOL bEnableDoubleClock;
 BOOL bEnableVACT;
 BOOL bDataIsInterlaced;
 LONG lHalfLinesOdd;
 BOOL bFieldPolarityInverted;
 DWORD dwNumLinesInVREF;
 LONG lHalfLinesEven;
 DWORD dwReserved1;
} AMVPDATAINFO, *LPAMVPDATAINFO;

/* AMVPSIZE  [struct, typedef; shared; CE 3.0..399, 5.0..699] */
typedef struct _AMVPSIZE{
 DWORD dwWidth;
 DWORD dwHeight;
} AMVPSIZE, *LPAMVPSIZE;

/* AnalogVideoStandard  [enum, typedef; shared; CE 3.0..399, 5.0..699; entity-headers] */
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

/* AUDIO_STREAM_CONFIG_CAPS  [struct, typedef; shared; CE 3.0..399, 5.0..699] */
typedef struct _AUDIO_STREAM_CONFIG_CAPS {
 GUID guid;
 ULONG MinimumChannels;
 ULONG MaximumChannels;
 ULONG ChannelsGranularity;
 ULONG MinimumBitsPerSample;
 ULONG MaximumBitsPerSample;
 ULONG BitsPerSampleGranularity;
 ULONG MinimumSampleFrequency;
 ULONG MaximumSampleFrequency;
 ULONG SampleFrequencyGranularity;
} AUDIO_STREAM_CONFIG_CAPS;

/* COLORKEY  [struct, typedef, function; shared; CE 3.0..399, 5.0..699] */
typedef struct tagCOLORKEY{
 DWORD KeyType;
 DWORD PaletteIndex;
 COLORREF LowColorValue;
 COLORREF HighColorValue;
} COLORKEY;

/* DIBDATA  [struct, typedef; ce-only; CE 3.0..399, 5.0..699] */
typedef struct tagDIBDATA {
 LONG PaletteVersion;
 DIBSECTION DibSection; 
 HBITMAP hBitmap; 
 HANDLE hMapping;
 BYTE* pBase;
} DIBDATA;

/* FILTER_INFO  [struct, typedef; shared; CE 3.0..399, 5.0..699] */
typedef struct _FilterInfo{
 WCHAR achName[128];
 IFilterGraph __RPC_FAR* pGraph;
} FILTER_INFO;

/* FILTER_STATE  [enum, typedef; shared; CE 3.0..399, 5.0..699; entity-headers] */
typedef enum _FilterState {
 State_Stopped = 0,
 State_Paused = State_Stopped + 1,
 State_Running = State_Paused + 1
} FILTER_STATE;

/* MPEG1VIDEOINFO  [struct, typedef; shared; CE 3.0..399, 5.0..699] */
typedef struct tagMPEG1VIDEOINFO {
 VIDEOINFOHEADER hdr;
 DWORD dwStartTimeCode;
 DWORD cbSequenceHeader;
 BYTE bSequenceHeader[1];
} MPEG1VIDEOINFO;

/* MPEG2VIDEOINFO  [struct, typedef; shared; CE 3.0..399, 5.0..699] */
typedef struct tagMPEG2VIDEOINFO {
 VIDEOINFOHEADER2 hdr;
 DWORD dwStartTimeCode;
 DWORD cbSequenceHeader;
 DWORD dwProfile;
 DWORD dwLevel;
 DWORD dwFlags;
 DWORD dwSequenceHeader[1];
} MPEG2VIDEOINFO;

/* PIN_DIRECTION  [enum, typedef; shared; CE 3.0..399, 5.0..699; entity-headers] */
typedef enum _PinDirection {
 PINDIR_INPUT,
 PINDIR_OUTPUT
} PIN_DIRECTION;

/* PIN_INFO  [struct, typedef; shared; CE 3.0..399, 5.0..699] */
typedef struct _PinInfo {
 IBaseFilter* pFilter;
 PIN_DIRECTION dir;
 WCHAR achName[128];
} PIN_INFO;

/* POSITION  [struct, typedef; ce-only; CE 3.0..399, 5.0..699] */
struct __POSITION { int unused; };
typedef __POSITION* POSITION;

/* Quality  [struct, typedef; shared; CE 3.0..399, 5.0..699] */
typedef struct{
 QualityMessageType Type;
 long Proportion;
 REFERENCE_TIME Late;
 REFERENCE_TIME TimeStamp;
} Quality;

/* QualityMessageType  [enum, typedef; shared; CE 3.0..399, 5.0..699; entity-headers] */
typedef enum {
 Famine,
 Flood
} QualityMessageType;

/* REGFILTER  [struct, typedef; ce-only; CE 3.0..399, 5.0..699] */
typedef struct {
 CLSID Clsid;
 LPWSTR Name;
} REGFILTER;

/* REGFILTERPINS  [struct, typedef; shared; CE 3.0..399, 5.0..699] */
typedef struct{
 LPWSTR strName;
 BOOL bRendered;
 BOOL bOutput;
 BOOL bZero;
 BOOL bMany;
 const CLSID* clsConnectsToFilter;
 const WCHAR* strConnectsToPin;
 UINT nMediaTypes;
 const REGPINTYPES* lpMediaType;
} REGFILTERPINS;

/* REGPINTYPES  [struct, typedef; shared; CE 3.0..399, 5.0..699] */
typedef struct{
 const CLSID* clsMajorType;
 const CLSID* clsMinorType;
} REGPINTYPES;

/* TIMECODE  [struct, typedef; shared; CE 3.0..399, 5.0..699] */
typedef struct tagTIMECODE {
 WORD wFrameRate;
 WORD wFrameFract;
 WORD dwFrames;
}TIMECODE;

/* TIMECODE_SAMPLE  [struct, typedef; shared; CE 3.0..399, 5.0..699] */
/* DERIVED member outline -- documented order, types/offsets not stated */
/*   qwTick */
/*   timecode */
/*   dwUser */
/*   dwFlags */

/* TRUECOLORINFO  [struct, typedef; shared; CE 3.0..399, 5.0..699] */
typedef struct tag_TRUECOLORINFO {
 DWORD dwBitMasks[iMASK_COLORS];
 RGBQUAD bmiColors[iPALETTE_COLORS];
} TRUECOLORINFO;

/* VIDEO_STREAM_CONFIG_CAPS  [struct, typedef; shared; CE 3.0..399, 5.0..699] */
/* DERIVED member outline -- documented order, types/offsets not stated */
/*   guid */
/*   VideoStandard */
/*   InputSize */
/*   MinCroppingSize */
/*   MaxCroppingSize */
/*   CropGranularityX */
/*   CropGranularityY */
/*   CropAlignX */
/*   CropAlignY */
/*   MinOutputSize */
/*   MaxOutputSize */
/*   OutputGranularityX */
/*   OutputGranularityY */
/*   StretchTapsX */
/*   StretchTapsY */
/*   ShrinkTapsX */
/*   ShrinkTapsY */
/*   MinFrameInterval */
/*   MaxFrameInterval */
/*   MinBitsPerSecond */
/*   MaxBitsPerSecond */

/* VIDEOINFO  [struct, typedef; shared; CE 3.0..399, 5.0..699] */
typedef struct tagVIDEOINFO {
 RECT rcSource,
 RECT rcTarget,
 DWORD dwBitRate,
 DWORD dwBitErrorRate,
 REFERENCE_TIME AvgTimePerFrame;
 BITMAPINFOHEADER bmiHeader;
 union {
 RGBQUAD bmiColors[iPALETTE_COLORS];
 DWORD dwBitMasks[iMASK_COLORS];
 TRUECOLORINFO TrueColorInfo;
 };
} VIDEOINFO;

/* VIDEOINFOHEADER  [struct, typedef; shared; CE 3.0..399, 5.0..699] */
typedef struct tagVIDEOINFOHEADER {
 RECT rcSource;
 RECT rcTarget;
 DWORD dwBitRate;
 DWORD dwBitErrorRate;
 REFERENCE_TIME AvgTimePerFrame;
 BITMAPINFOHEADER bmiHeader;
} VIDEOINFOHEADER;

/* VIDEOINFOHEADER2  [struct, typedef; shared; CE 3.0..399, 5.0..699] */
typedef struct tagVIDEOINFOHEADER2 {
 RECT rcSource;
 RECT rcTarget;
 DWORD dwBitRate;
 DWORD dwBitErrorRate;
 REFERENCE_TIME AvgTimePerFrame;
 DWORD dwInterlaceFlags;
 DWORD dwCopyProtectFlags;
 DWORD dwPictAspectRatioX;
 DWORD dwPictAspectRatioY; 
 DWORD dwReserved1;
 DWORD dwReserved2;
 BITMAPINFOHEADER bmiHeader;
} VIDEOINFOHEADER2;
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* _AM_FILTER_MISC_FLAGS  [enum; shared; CE 6.0..699; entity-headers] */
typedef enum _AM_FILTER_MISC_FLAGS {
 AM_FILTER_MISC_FLAGS_IS_RENDERER = 0x00000001,
 AM_FILTER_MISC_FLAGS_IS_SOURCE = 0x00000002,
 AM_FILTER_MISC_FLAG_NO_CAPTURE_PAUSE = 0x00000004
};

/* AM_FILESINK_FLAGS  [enum; ce-only; CE 6.0..699; heuristic-prefix] */
typedef enum {
 AM_FILE_OVERWRITE = 0x00000001,
} AM_FILESINK_FLAGS;

/* AM_VIDEO_RENDERER_MODE  [enum; ce-only; CE 6.0..699; heuristic-prefix] */
typedef enum {
 AM_VIDEO_RENDERER_MODE_DDRAW,
 AM_VIDEO_RENDERER_MODE_GDI
} AM_VIDEO_RENDERER_MODE;

/* CameraControlFlags  [enum; shared; CE 6.0..699; entity-headers] */
typedef enum{
 CameraControl_Flags_Auto = 0x0001,
 CameraControl_Flags_Manual = 0x0002
} CameraControlFlags;

/* CameraControlProperty  [enum; shared; CE 6.0..699; entity-headers] */
typedef enum {
 CameraControl_Pan,
 CameraControl_Tilt,
 CameraControl_Roll,
 CameraControl_Zoom,
 CameraControl_Exposure,
 CameraControl_Iris,
 CameraControl_Focus
 CameraControl_Flash
} CameraControlProperty;

/* CompressionCaps  [enum; shared; CE 6.0..699; entity-headers] */
typedef enum {
 CompressionCaps_CanQuality = 0x01,
 CompressionCaps_CanCrunch = 0x02,
 CompressionCaps_CanKeyFrame = 0x04,
 CompressionCaps_CanBFrame = 0x08,
 CompressionCaps_CanWindow = 0x10
} CompressionCaps;

/* StructEncoderParameter  [struct; ce-only; CE 6.0..699] */
typedef struct {
 GUID Guid;
 ULONG NumberOfValues;
 ULONG Type;
 void* Value;
} StructEncoderParameter;

/* VideoControlFlags  [enum; shared; CE 6.0..699; entity-headers] */
typedef enum tagVideoControlFlags {
 VideoControlFlag_FlipHorizontal = 0x0001,
 VideoControlFlag_FlipVertical = 0x0002,
 VideoControlFlag_ExternalTriggerEnable = 0x0004,
 VideoControlFlag_Trigger = 0x0008
} VideoControlFlags;

/* VideoProcAmpFlags  [enum; shared; CE 6.0..699; entity-headers] */
typedef enum tagVideoProcAmpFlags {
 VideoProcAmp_Flags_Auto = 0x0001,
 VideoProcAmp_Flags_Manual = 0x0002,
} VideoProcAmpFlags;

/* VideoProcAmpProperty  [enum; shared; CE 6.0..699; entity-headers] */
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
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400)) /* CE 3.0..399 */

/* IAMDevMem  [function; ce-only; CE 3.0..399; heuristic-prefix] */
HRESULT QueryWriteSync( );

/* IFilterGraph2::AddSourceFilterForMoniker  [function; shared; CE 3.0..399; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT AddSourceFilterForMoniker( 
IMoniker *pMoniker, 
IBindCtx *pCtx, 
LPCWSTR lpcwstrFilterName, 
IBaseFilter **ppFilter);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 3.0..399, 5.0..599 */

/* IFilterMapper2::CreateCategory  [function; shared; CE 3.0..399, 5.0..599; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT CreateCategory( 
 REFCLSID clsidCategory, 
 DWORD dwCategoryMerit, 
 LPCWSTR Description 
);

/* IFilterMapper2::EnumMatchingFilters  [function; shared; CE 3.0..399, 5.0..599; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT EnumMatchingFilters( 
 IEnumMoniker** ppEnum, 
 DWORD dwFlags, 
 BOOL bExactMatch, 
 DWORD dwMerit, 
 BOOL bInputNeeded, 
 DWORD cInputTypes, 
 const GUID* pInputTypes, 
 const REGPINMEDIUM* pMedIn, 
 const CLSID* pPinCategoryIn, 
 BOOL bRender, 
 BOOL bOutputNeeded, 
 DWORD cOutputTypes, 
 const GUID* pOutputTypes, 
 const REGPINMEDIUM* pMedOut, 
 const CLSID* pPinCategoryOut 
);

/* IFilterMapper2::RegisterFilter  [function; shared; CE 3.0..399, 5.0..599; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT RegisterFilter( 
 REFCLSID clsidFilter, 
 LPCWSTR Name, 
 IMoniker** ppMoniker, 
 const CLSID* pclsidCategory, 
 const OLECHAR* szInstance, 
 const REGFILTER2* prf2 
);

/* IFilterMapper2::UnregisterFilter  [function; shared; CE 3.0..399, 5.0..599; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT UnregisterFilter( 
 const CLSID* pclsidCategory, 
 const OLECHAR* szInstance, 
 REFCLSID Filter 
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 3.0..399, 5.0..699 */

/* IAMDevMemoryAllocator::Alloc  [function; shared; CE 3.0..399, 5.0..699; entity-headers] */
HRESULT Alloc(
 BYTE** ppBuffer,
 DWORD* pdwcbBuffer
);

/* IAMDevMemoryAllocator::CheckMemory  [function; shared; CE 3.0..399, 5.0..699; entity-headers] */
HRESULT CheckMemory(
 const BYTE* pBuffer
);

/* IAMDevMemoryAllocator::Free  [function; shared; CE 3.0..399, 5.0..699; entity-headers] */
HRESULT Free(
 BYTE* pBuffer
);

/* IAMDevMemoryAllocator::GetDevMemoryObject  [function; shared; CE 3.0..399, 5.0..699; entity-headers] */
HRESULT GetDevMemoryObject(
 IUnknown** ppUnkInnner,
 IUnknown* pUnkOuter
);

/* IAMDevMemoryAllocator::GetInfo  [function; shared; CE 3.0..399, 5.0..699; entity-headers] */
HRESULT GetInfo(
 DWORD* pdwcbTotalFree,
 DWORD* pdwcbLargestFree,
 DWORD* pdwcbTotalMemory,
 DWORD* pdwcbMinimumChunk
);

/* IAMDevMemoryControl::GetDevId  [function; shared; CE 3.0..399, 5.0..699; entity-headers] */
HRESULT GetDevId(
 DWORD* pdwDevId
);

/* IAMDevMemoryControl::WriteSync  [function; shared; CE 3.0..399, 5.0..699; entity-headers] */
HRESULT WriteSync( );

/* IAMovieSetup::Register  [function; shared; CE 3.0..399, 5.0..699; entity-headers] */
HRESULT Register( );

/* IAMovieSetup::Unregister  [function; shared; CE 3.0..399, 5.0..699; entity-headers] */
HRESULT Unregister( );

/* IAMStreamControl::GetInfo  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetInfo(
 AM_STREAM_INFO* pInfo
);

/* IAMStreamControl::StartAt  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT StartAt(
 const REFERENCE_TIME* ptStart,
 DWORD dwCookie
);

/* IAMStreamControl::StopAt  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT StopAt(
 const REFERENCE_TIME* ptStop,
 BOOL bSendExtra,
 DWORD dwCookie
);

/* IAMStreamSelect::Count  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT Count(
 DWORD* pcStreams
);

/* IAMStreamSelect::Enable  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT Enable(
 long lIndex,
 DWORD dwFlags
);

/* IAMStreamSelect::Info  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT Info(
 long lIndex,
 AM_MEDIA_TYPE** ppmt,
 DWORD* pdwFlags,
 LCID* plcid,
 DWORD* pdwGroup,
 WCHAR** ppszName,
 IUnknown** ppObject,
 IUnknown** ppUnk 
);

/* IAsyncReader::BeginFlush  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT BeginFlush( );

/* IAsyncReader::EndFlush  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT EndFlush( );

/* IAsyncReader::Request  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT Request(
 IMediaSample* pSample,
 DWORD dwUser 
);

/* IAsyncReader::RequestAllocator  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT RequestAllocator(
 IMemAllocator* pPreferred,
 ALLOCATOR_PROPERTIES* pProps,
 IMemAllocator** ppActual
);

/* IAsyncReader::SyncReadAligned  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT SyncReadAligned(
 IMediaSample* pSample
);

/* IAsyncReader::WaitForNext  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT WaitForNext(
 DWORD dwTimeout,
 IMediaSample** ppSample,
 DWORD* pdwUser 
);

/* IBaseFilter::EnumPins  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT EnumPins(
 IEnumPins** ppEnum
);

/* IBaseFilter::FindPin  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT FindPin(
 LPCWSTR Id,
 IPin** ppPin
);

/* IBaseFilter::JoinFilterGraph  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT JoinFilterGraph(
 IFilterGraph* pGraph,
 LPCWSTR pName
);

/* IBaseFilter::QueryFilterInfo  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT QueryFilterInfo(
 FILTER_INFO* pInfo
);

/* IBaseFilter::QueryVendorInfo  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT QueryVendorInfo(
 LPWSTR* pVendorInfo
);

/* IBasicAudio::get_Balance  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT get_Balance(
 long* plBalance
);

/* IBasicAudio::get_Volume  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT get_Volume(
 long* plVolume
);

/* IBasicAudio::put_Balance  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT put_Balance(
 long lBalance
);

/* IBasicAudio::put_Volume  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT put_Volume(
 long lVolume
);

/* IBasicVideo::get_AvgTimePerFrame  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT get_AvgTimePerFrame(
 REFTIME* pAvgTimePerFrame
);

/* IBasicVideo::get_BitErrorRate  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT get_BitErrorRate(
 long* pBitErrorRate 
);

/* IBasicVideo::get_BitRate  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT get_BitRate(
 long* pBitRate
);

/* IBasicVideo::get_DestinationHeight  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT get_DestinationHeight(
 long* pDestinationHeight
);

/* IBasicVideo::get_DestinationLeft  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT get_DestinationLeft(
 long* pDestinationLeft
);

/* IBasicVideo::get_DestinationTop  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT get_DestinationTop(
 long* pDestinationTop
);

/* IBasicVideo::get_DestinationWidth  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT get_DestinationWidth(
 long* pDestinationWidth
);

/* IBasicVideo::get_SourceHeight  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT get_SourceHeight(
 long* pSourceHeight
);

/* IBasicVideo::get_SourceLeft  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT get_SourceLeft(
 long* pSourceLeft
);

/* IBasicVideo::get_SourceTop  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT get_SourceTop(
 long* pSourceTop
);

/* IBasicVideo::get_SourceWidth  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT get_SourceWidth(
 long* pSourceWidth
);

/* IBasicVideo::get_VideoHeight  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT get_VideoHeight(
 long* pVideoHeight
);

/* IBasicVideo::get_VideoWidth  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT get_VideoWidth(
 long* pVideoWidth
);

/* IBasicVideo::GetCurrentImage  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetCurrentImage(
 long* pBufferSize,
 long* pDIBImage
);

/* IBasicVideo::GetDestinationPosition  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetDestinationPosition(
 long* pLeft,
 long* pTop,
 long* pWidth,
 long* pHeight
);

/* IBasicVideo::GetSourcePosition  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetSourcePosition(
 long* pLeft,
 long* pTop,
 long* pWidth,
 long* pHeight
);

/* IBasicVideo::GetVideoPaletteEntries  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetVideoPaletteEntries(
 long StartIndex,
 long Entries,
 long* pRetrieved,
 long* pPalette
);

/* IBasicVideo::GetVideoSize  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetVideoSize(
 long* pWidth,
 long* pHeight
);

/* IBasicVideo::IsUsingDefaultDestination  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT IsUsingDefaultDestination( );

/* IBasicVideo::IsUsingDefaultSource  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT IsUsingDefaultSource( );

/* IBasicVideo::put_DestinationHeight  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT put_DestinationHeight(
 long DestinationHeight
);

/* IBasicVideo::put_DestinationLeft  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT put_DestinationLeft(
 long DestinationLeft
);

/* IBasicVideo::put_DestinationTop  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT put_DestinationTop(
 long DestinationTop
);

/* IBasicVideo::put_DestinationWidth  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT put_DestinationWidth(
 long DestinationWidth
);

/* IBasicVideo::put_SourceHeight  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT put_SourceHeight(
 long SourceHeight
);

/* IBasicVideo::put_SourceLeft  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT put_SourceLeft(
 long SourceLeft
);

/* IBasicVideo::put_SourceTop  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT put_SourceTop(
 long SourceTop
);

/* IBasicVideo::put_SourceWidth  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT put_SourceWidth(
 long SourceWidth
);

/* IBasicVideo::SetDefaultDestinationPosition  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT SetDefaultDestinationPosition( );

/* IBasicVideo::SetDefaultSourcePosition  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT SetDefaultSourcePosition( );

/* IBasicVideo::SetDestinationPosition  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT SetDestinationPosition(
 long Left,
 long Top,
 long Width,
 long Height
);

/* IBasicVideo::SetSourcePosition  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT SetSourcePosition(
 long Left,
 long Top,
 long Width,
 long Height
);

/* IDirectDrawVideo::CanUseOverlayStretch  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT CanUseOverlayStretch(
 long* UseOverlayStretch
);

/* IDirectDrawVideo::CanUseScanLine  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT CanUseScanLine(
 long* UseScanLine
);

/* IDirectDrawVideo::GetCaps  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetCaps(
 DDCAPS* pCaps
);

/* IDirectDrawVideo::GetDirectDraw  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetDirectDraw(
 LPDIRECTDRAW* ppDirectDraw
);

/* IDirectDrawVideo::GetEmulatedCaps  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetEmulatedCaps(
 DDCAPS* pCaps
);

/* IDirectDrawVideo::GetFourCCCodes  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetFourCCCodes(
 DWORD* pCount,
 DWORD* pCodes
);

/* IDirectDrawVideo::GetSurfaceDesc  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetSurfaceDesc( 
 DDSURFACEDESC* pSurfaceDesc
);

/* IDirectDrawVideo::GetSurfaceType  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetSurfaceType(
 DWORD* pSurfaceType
);

/* IDirectDrawVideo::GetSwitches  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetSwitches(
 DWORD* pSwitches
);

/* IDirectDrawVideo::SetDefault  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT SetDefault( );

/* IDirectDrawVideo::SetDirectDraw  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT SetDirectDraw(
 LPDIRECTDRAW pDirectDraw 
);

/* IDirectDrawVideo::SetSwitches  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT SetSwitches(
 DWORD pSwitches
);

/* IDirectDrawVideo::UseOverlayStretch  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT UseOverlayStretch(
 long UseOverlayStretch
);

/* IDirectDrawVideo::UseScanLine  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT UseScanLine(
 long UseScanLine
);

/* IDirectDrawVideo::UseWhenFullScreen  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT UseWhenFullScreen(
 long UseWhenFullScreen
);

/* IDirectDrawVideo::WillUseFullScreen  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT WillUseFullScreen(
 long* UseWhenFullScreen
);

/* IDistributorNotify::NotifyGraphChange  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT NotifyGraphChange( );

/* IDistributorNotify::Pause  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT Pause( );

/* IDistributorNotify::Run  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT Run(
 REFERENCE_TIME tStart
);

/* IDistributorNotify::SetSyncSource  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT SetSyncSource(
 IReferenceClock* pClock
);

/* IDistributorNotify::Stop  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT Stop( );

/* IEnumFilters::Clone  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT Clone(
 IEnumFilters** ppEnum
);

/* IEnumFilters::Next  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT Next(
 ULONG cFilters,
 IBaseFilter** ppFilter,
 ULONG* pcFetched
);

/* IEnumFilters::Reset  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT Reset( );

/* IEnumFilters::Skip  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT Skip(
 ULONG cFilter
);

/* IEnumMediaTypes::Clone  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT Clone(
 IEnumMediaTypes** ppEnum
);

/* IEnumMediaTypes::Next  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT Next(
 ULONG cMediaTypes,
 AM_MEDIA_TYPE** ppMediaTypes,
 ULONG* pcFetched
);

/* IEnumMediaTypes::Reset  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT Reset( );

/* IEnumMediaTypes::Skip  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT Skip(
 ULONG cMediaTypes
);

/* IEnumPins::Clone  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT Clone(
 IEnumPins** ppEnum
);

/* IEnumPins::Next  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT Next(
 ULONG cPins,
 IPin** ppPins,
 ULONG* pcFetched
);

/* IEnumPins::Reset  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT Reset( );

/* IEnumPins::Skip  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT Skip(
 ULONG cPins
);

/* IEnumRegFilters::Clone  [function; shared; CE 3.0..399, 5.0..699; entity-headers] */
HRESULT Clone(
 IEnumRegFilters** ppEnum
);

/* IEnumRegFilters::Next  [function; shared; CE 3.0..399, 5.0..699; entity-headers] */
HRESULT Next(
 ULONG cFilters,
 REGFILTER** apRegFilter,
 ULONG* pcFetched
);

/* IEnumRegFilters::Reset  [function; shared; CE 3.0..399, 5.0..699; entity-headers] */
HRESULT Reset( );

/* IEnumRegFilters::Skip  [function; shared; CE 3.0..399, 5.0..699; entity-headers] */
HRESULT Skip(
 ULONG celt
);

/* IFileSourceFilter::GetCurfile  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetCurfile(
 LPOLESTR* ppszFileName,
 AM_MEDIA_TYPE* pmt
);

/* IFileSourceFilter::Load  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT Load(
 LPCOLESTR pszFileName,
 const AM_MEDIA_TYPE* pmt
);

/* IFilterGraph2::ReconnectEx  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT ReconnectEx(
 IPin* ppin,
 const AM_MEDIA_TYPE* pmt
);

/* IFilterGraph::AddFilter  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT AddFilter(
 IBaseFilter* pFilter,
 LPCWSTR pName
);

/* IFilterGraph::ConnectDirect  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT ConnectDirect(
 IPin* ppinOut,
 IPin* ppinIn,
 const AM_MEDIA_TYPE* pmt
);

/* IFilterGraph::Disconnect  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT Disconnect(
 IPin* ppin
);

/* IFilterGraph::EnumFilters  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT EnumFilters(
 IEnumFilters** ppEnum
);

/* IFilterGraph::FindFilterByName  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT FindFilterByName(
 LPCWSTR pName,
 IBaseFilter** ppFilter
);

/* IFilterGraph::Reconnect  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT Reconnect(
 IPin* ppin
);

/* IFilterGraph::RemoveFilter  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT RemoveFilter(
 IBaseFilter* pFilter
);

/* IFilterGraph::SetDefaultSyncSource  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT SetDefaultSyncSource(void);

/* IFilterMapper::EnumMatchingFilters  [function; shared; CE 3.0..399, 5.0..699; entity-headers] */
HRESULT EnumMatchingFilters(
 IEnumRegFilters** ppEnum,
 DWORD dwMerit,
 BOOL bInputNeeded,
 CLSID clsInMaj,
 CLSID clsInSub,
 BOOL bRender,
 BOOL bOutputNeeded,
 CLSID clsOutMaj,
 CLSID clsOutSub
);

/* IFilterMapper::RegisterFilter  [function; shared; CE 3.0..399, 5.0..699; entity-headers] */
HRESULT RegisterFilter(
 CLSID clsid,
 LPCWSTR Name,
 DWORD dwMerit
);

/* IFilterMapper::RegisterFilterInstance  [function; shared; CE 3.0..399, 5.0..699; entity-headers] */
HRESULT RegisterFilterInstance(
 CLSID clsid,
 LPCWSTR Name,
 CLSID* MRId
);

/* IFilterMapper::RegisterPin  [function; shared; CE 3.0..399, 5.0..699; entity-headers] */
HRESULT RegisterPin(
 CLSID Filter,
 LPCWSTR Name,
 BOOL bRendered,
 BOOL bOutput,
 BOOL bZero,
 BOOL bMany,
 CLSID ConnectsToFilter,
 LPWSTR ConnectsToPin
);

/* IFilterMapper::RegisterPinType  [function; shared; CE 3.0..399, 5.0..699; entity-headers] */
HRESULT RegisterPinType(
 CLSID clsFilter,
 LPCWSTR strName,
 CLSID clsMajorType,
 CCLSID clsSubType
);

/* IFilterMapper::UnregisterFilter  [function; shared; CE 3.0..399, 5.0..699; entity-headers] */
HRESULT UnregisterFilter(
 CLSID Filter
);

/* IFilterMapper::UnregisterFilterInstance  [function; shared; CE 3.0..399, 5.0..699; entity-headers] */
HRESULT UnregisterFilterInstance(
 CLSID MRId
);

/* IFilterMapper::UnregisterPin  [function; shared; CE 3.0..399, 5.0..699; entity-headers] */
HRESULT UnregisterPin(
 CLSID Filter,
 LPCWSTR Name
);

/* IGraphBuilder::AddSourceFilter  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT AddSourceFilter(
 LPCWSTR lpwstrFileName,
 LPCWSTR lpwstrFilterName,
 IbaseFilter** ppFilter 
);

/* IGraphBuilder::Connect  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT Connect(
 IPin* ppinOut,
 IPin* ppinIn
);

/* IGraphBuilder::Render  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT Render(
 IPin* ppinOut
);

/* IGraphBuilder::RenderFile  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT RenderFile(
 LPCWSTR lpwstrFile,
 LPCWSTR lpwstrPlayList
);

/* IGraphBuilder::SetLogFile  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT SetLogFile(
 HANDLE hFile
);

/* IGraphVersion::QueryVersion  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT QueryVersion(
 LONG* pVersion
);

/* IMediaControl::AddSourceFilter  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT AddSourceFilter(
 BSTR strFilename,
 IDispatch** ppUnk
);

/* IMediaControl::GetState  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetState(
 LONG msTimeout,
 OAFilterState* pfs
);

/* IMediaControl::Pause  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT Pause( );

/* IMediaControl::RenderFile  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT RenderFile(
 BSTR strFilename
);

/* IMediaControl::Run  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT Run( );

/* IMediaControl::Stop  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT Stop( );

/* IMediaControl::StopWhenReady  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT StopWhenReady( );

/* IMediaEvent::CancelDefaultHandling  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT CancelDefaultHandling(
 long lEvCode
);

/* IMediaEvent::FreeEventParams  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT FreeEventParams(
 long lEventCode,
 long lParam1,
 long lParam2
);

/* IMediaEvent::GetEvent  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetEvent(
 long* lEventCode,
 long* lParam1,
 long* lParam2,
 long msTimeout
);

/* IMediaEvent::GetEventHandle  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetEventHandle(
 OAEVENT* hEvent
);

/* IMediaEvent::RestoreDefaultHandling  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT RestoreDefaultHandling(
 long lEvCode
);

/* IMediaEvent::WaitForCompletion  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT WaitForCompletion(
 long msTimeout,
 long* pEvCode
);

/* IMediaEventEx::GetNotifyFlags  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetNotifyFlags(
 long* lplNoNotifyFlags
);

/* IMediaEventEx::SetNotifyFlags  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT SetNotifyFlags(
 long lNoNotifyFlags
);

/* IMediaEventEx::SetNotifyWindow  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT SetNotifyWindow(
 OAHWND hwnd,
 long lMsg,
 long lInstanceData
);

/* IMediaEventSink::Notify  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT Notify(
 long EventCode,
 long EventParam1,
 long EventParam2
);

/* IMediaFilter::GetState  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetState(
 DWORD dwMilliSecsTimeout,
 FILTER_STATE* State
);

/* IMediaFilter::GetSyncSource  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetSyncSource(
 IReferenceClock** pClock
);

/* IMediaFilter::Pause  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT Pause(void);

/* IMediaFilter::Run  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT Run(
 REFERENCE_TIME tStart
);

/* IMediaFilter::SetSyncSource  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT SetSyncSource(
 IReferenceClock* pClock
);

/* IMediaFilter::Stop  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT Stop(void);

/* IMediaPosition::CanSeekBackward  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT CanSeekBackward(
 LONG* pCanSeekBackward
);

/* IMediaPosition::CanSeekForward  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT CanSeekForward(
 LONG* pCanSeekForward
);

/* IMediaPosition::get_CurrentPosition  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT get_CurrentPosition(
 REFTIME* pllTime
);

/* IMediaPosition::get_Duration  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT get_Duration(
 REFTIME* plength
);

/* IMediaPosition::get_PrerollTime  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT get_PrerollTime(
 REFTIME* pllTime
);

/* IMediaPosition::get_Rate  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT get_Rate(
 double* pdRate
);

/* IMediaPosition::get_StopTime  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT get_StopTime(
 REFTIME* pllTime
);

/* IMediaPosition::put_CurrentPosition  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT put_CurrentPosition(
 REFTIME llTime
);

/* IMediaPosition::put_PrerollTime  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT put_PrerollTime(
 REFTIME llTime
);

/* IMediaPosition::put_Rate  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT put_Rate(
 double dRate
);

/* IMediaPosition::put_StopTime  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT put_StopTime(
 REFTIME llTime
);

/* IMediaSample2::GetProperties  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetProperties(
 DWORD cbProperties,
 BYTE* pbProperties
);

/* IMediaSample2::SetProperties  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT SetProperties(
 DWORD cbProperties,
 const BYTE* pbProperties
);

/* IMediaSample::GetMediaType  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetMediaType(
 AM_MEDIA_TYPE** ppMediaType
);

/* IMediaSample::GetPointer  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetPointer(
 BYTE** ppBuffer
);

/* IMediaSample::GetSize  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetSize(void);

/* IMediaSample::GetTime  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetTime(
 REFERENCE_TIME* pTimeStart,
 REFERENCE_TIME* pTimeEnd
);

/* IMediaSample::IsDiscontinuity  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT IsDiscontinuity(void);

/* IMediaSample::IsPreroll  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT IsPreroll(void);

/* IMediaSample::IsSyncPoint  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT IsSyncPoint(void);

/* IMediaSample::SetActualDataLength  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT SetActualDataLength(
 long lLen
);

/* IMediaSample::SetDiscontinuity  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT SetDiscontinuity(
 BOOL bIsDiscontinuity
);

/* IMediaSample::SetMediaType  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT SetMediaType(
 AM_MEDIA_TYPE* pMediaType
);

/* IMediaSample::SetPreroll  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT SetPreroll(
 BOOL bIsPreroll
);

/* IMediaSample::SetSyncPoint  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT SetSyncPoint(
 BOOL bIsSyncPoint
);

/* IMediaSample::SetTime  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT SetTime(
 REFERENCE_TIME* pTimeStart,
 REFERENCE_TIME* pTimeEnd
);

/* IMediaSeeking::GetCapabilities  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetCapabilities(
 DWORD* pCapabilities
);

/* IMediaSeeking::GetRate  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetRate(
 double* dRate
);

/* IMediaSeeking::GetTimeFormat  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetTimeFormat(
 GUID* pFormat
);

/* IMediaSeeking::IsFormatSupported  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT IsFormatSupported(
 const GUID* pFormat
);

/* IMediaSeeking::IsUsingTimeFormat  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT IsUsingTimeFormat(
 const GUID* pFormat
);

/* IMediaSeeking::QueryPreferredFormat  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT QueryPreferredFormat(
 GUID* pFormat
);

/* IMediaSeeking::SetRate  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT SetRate(
 double dRate
);

/* IMediaSeeking::SetTimeFormat  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT SetTimeFormat(
 const GUID* pFormat
);

/* IMemAllocator::Commit  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT Commit(void);

/* IMemAllocator::Decommit  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT Decommit(void);

/* IMemAllocator::GetBuffer  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetBuffer(
 IMediaSample** ppBuffer,
 REFERENCE_TIME* pStartTime,
 REFERENCE_TIME* pEndTime,
 DWORD dwFlags
);

/* IMemAllocator::GetProperties  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetProperties(
 ALLOCATOR_PROPERTIES* pProps
);

/* IMemAllocator::ReleaseBuffer  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT ReleaseBuffer(
 IMediaSample* pBuffer
);

/* IMemAllocator::SetProperties  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT SetProperties(
 ALLOCATOR_PROPERTIES* pRequest,
 ALLOCATOR_PROPERTIES* pActual
);

/* IMemInputPin::GetAllocator  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetAllocator(
 IMemAllocator** ppAllocator
);

/* IMemInputPin::GetAllocatorRequirements  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetAllocatorRequirements(
 ALLOCATOR_PROPERTIES* pProps
);

/* IMemInputPin::NotifyAllocator  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT NotifyAllocator(
 IMemAllocator* pAllocator,
 BOOL bReadOnly
);

/* IMemInputPin::Receive  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT Receive(
 IMediaSample* pSample
);

/* IMemInputPin::ReceiveCanBlock  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT ReceiveCanBlock(void);

/* IMemInputPin::ReceiveMultiple  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT ReceiveMultiple(
 IMediaSample** pSamples,
 long nSamples,
 long* nSamplesProcessed
);

/* IOverlay::Advise  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT Advise(
 IOverlayNotify* pOverlayNotify,
 DWORD dwInterests
);

/* IOverlay::GetClipList  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetClipList(
 RECT* pSourceRect,
 RECT* pDestinationRect,
 RGNDATA** ppRgnData
);

/* IOverlay::GetColorKey  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetColorKey(
 COLORKEY* pColorKey
);

/* IOverlay::GetDefaultColorKey  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetDefaultColorKey(
 COLORKEY* pColorKey
);

/* IOverlay::GetPalette  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetPalette(
 DWORD* pdwColors,
 PALETTEENTRY** ppPalette
);

/* IOverlay::GetVideoPosition  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetVideoPosition(
 RECT* pSourceRect,
 RECT* pDestinationRect
);

/* IOverlay::GetWindowHandle  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetWindowHandle(
 HWND* pHwnd
);

/* IOverlay::SetColorKey  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT SetColorKey(
 COLORKEY* pColorKey
);

/* IOverlay::SetPalette  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT SetPalette(
 DWORD dwColors,
 PALETTEENTRY* pPalette
);

/* IOverlay::Unadvise  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT Unadvise( );

/* IOverlayNotify::OnClipChange  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT OnClipChange(
 RECT* pSourceRect,
 RECT* pDestinationRect,
 RGNDATA* pRgnData
);

/* IOverlayNotify::OnColorKeyChange  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT OnColorKeyChange(
 COLORKEY* pColorKey
);

/* IOverlayNotify::OnPaletteChange  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT OnPaletteChange(
 DWORD dwColors,
 const PALETTEENTRY* pPalette
);

/* IOverlayNotify::OnPositionChange  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT OnPositionChange(
 const RECT* pSourceRect,
 const RECT* pDestinationRect
);

/* IPin::BeginFlush  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT BeginFlush(void);

/* IPin::Connect  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT Connect(
 IPin* pReceivePin,
 const AM_MEDIA_TYPE* pmt
);

/* IPin::ConnectedTo  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT ConnectedTo(
 IPin** ppPin
);

/* IPin::ConnectionMediaType  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT ConnectionMediaType(
 AM_MEDIA_TYPE* pmt
);

/* IPin::Disconnect  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT Disconnect(void);

/* IPin::EndFlush  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT EndFlush(void);

/* IPin::EndOfStream  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT EndOfStream(void);

/* IPin::EnumMediaTypes  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT EnumMediaTypes(
 IEnumMediaTypes** ppEnum
);

/* IPin::NewSegment  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT NewSegment(
 REFERENCE_TIME tStart,
 REFERENCE_TIME tStop,
 double dRate
);

/* IPin::QueryAccept  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT QueryAccept(
 const AM_MEDIA_TYPE* pmt
);

/* IPin::QueryDirection  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT QueryDirection(
 PIN_DIRECTION* pPinDir
);

/* IPin::QueryId  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT QueryId(
 LPWSTR* Id
);

/* IPin::QueryInternalConnections  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT QueryInternalConnections(
 IPin** apPin,
 ULONG* nPin
);

/* IPin::QueryPinInfo  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT QueryPinInfo(
 PIN_INFO* pInfo
);

/* IPin::ReceiveConnection  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT ReceiveConnection(
 IPin* pConnector,
 AM_MEDIA_TYPE* pmt
);

/* IQualityControl::Notify  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT Notify(
 IBaseFilter* pSelf,
 Quality q
);

/* IQualityControl::SetSink  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT SetSink(
 IQualityControl* piqc
);

/* IQualProp::get_AvgFrameRate  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT get_AvgFrameRate(
 int* piAvgFrameRate
) PURE;

/* IQualProp::get_AvgSyncOffset  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT get_AvgSyncOffset(
 int* piAvg
);

/* IQualProp::get_DevSyncOffset  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT get_DevSyncOffset(
 int* piDev
);

/* IQualProp::get_FramesDrawn  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT get_FramesDrawn(
 int* pcFramesDrawn
);

/* IQualProp::get_FramesDroppedInRenderer  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT get_FramesDroppedInRenderer(
 int* pcFrames
);

/* IQualProp::get_Jitter  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT get_Jitter(
 int* piJitter
);

/* IReferenceClock::AdviseTime  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT AdviseTime(
 REFERENCE_TIME rtBaseTime,
 REFERENCE_TIME rtStreamTime,
 HEVENT hEvent,
 DWORD* pdwAdviseCookie
);

/* IReferenceClock::GetTime  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetTime(
 REFERENCE_TIME* pTime
);

/* IReferenceClock::Unadvise  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT Unadvise(
 DWORD dwAdviseCookie
);

/* ISeekingPassThru::Init  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT Init(
 BOOL bSupportRendering,
 IPin* pPin
);

/* IVideoWindow::get_AutoShow  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT get_AutoShow(
 long* AutoShow
);

/* IVideoWindow::get_BackgroundPalette  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT get_BackgroundPalette(
 long* pBackgroundPalette
);

/* IVideoWindow::get_BorderColor  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT get_BorderColor(
 long* pColor
);

/* IVideoWindow::get_Caption  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT get_Caption(
 BSTR* strCaption
);

/* IVideoWindow::get_FullScreenMode  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT get_FullScreenMode(
 long* FullScreenMode
);

/* IVideoWindow::get_Height  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT get_Height(
 long* pHeight
);

/* IVideoWindow::get_Left  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT get_Left(
 long* pLeft
);

/* IVideoWindow::get_MessageDrain  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT get_MessageDrain(
 OAHWND* Drain
);

/* IVideoWindow::get_Owner  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT get_Owner(
 OAHWND* pOwner
);

/* IVideoWindow::get_Top  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT get_Top(
 long* pTop
);

/* IVideoWindow::get_Visible  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT get_Visible(
 long* pVisible
);

/* IVideoWindow::get_Width  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT get_Width(
 long* pWidth
);

/* IVideoWindow::get_WindowState  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT get_WindowState(
 long* WindowState
);

/* IVideoWindow::get_WindowStyle  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT get_WindowStyle(
 long* pWindowStyle
);

/* IVideoWindow::get_WindowStyleEx  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT get_WindowStyleEx(
 long* pWindowStyleEx
);

/* IVideoWindow::GetMaxIdealImageSize  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetMaxIdealImageSize(
 long* pWidth,
 long* pHeight
);

/* IVideoWindow::GetMinIdealImageSize  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetMinIdealImageSize(
 long* pWidth,
 long* pHeight
);

/* IVideoWindow::GetRestorePosition  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetRestorePosition(
 long* pLeft,
 long* pTop,
 long* pWidth,
 long* pHeight 
);

/* IVideoWindow::GetWindowPosition  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetWindowPosition(
 long* pLeft,
 long* pTop,
 long* pWidth,
 long* pHeight
);

/* IVideoWindow::HideCursor  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT HideCursor(
 long HideCursor
);

/* IVideoWindow::IsCursorHidden  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT IsCursorHidden(
 long* CursorHidden
);

/* IVideoWindow::NotifyOwnerMessage  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT NotifyOwnerMessage(
 long hwnd,
 long uMsg,
 long wParam,
 long lParam
);

/* IVideoWindow::put_AutoShow  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT put_AutoShow(
 long AutoShow
);

/* IVideoWindow::put_BackgroundPalette  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT put_BackgroundPalette(
 long BackgroundPalette
);

/* IVideoWindow::put_BorderColor  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT put_BorderColor(
 long Color
);

/* IVideoWindow::put_Caption  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT put_Caption(
 BSTR strCaption
);

/* IVideoWindow::put_FullScreenMode  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT put_FullScreenMode(
 long FullScreenMode
);

/* IVideoWindow::put_Height  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT put_Height(
 long Height
);

/* IVideoWIndow::put_Left  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT put_Left(
 long Left
);

/* IVideoWindow::put_MessageDrain  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT put_MessageDrain(
 OAHWND Drain
);

/* IVideoWindow::put_Owner  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT put_Owner(
 OAHWND Owner
);

/* IVideoWindow::put_Top  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT put_Top(
 long Top
);

/* IVideoWindow::put_Visible  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT put_Visible(
 long Visible
);

/* IVideoWindow::put_Width  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT put_Width(
 long Width
);

/* IVideoWindow::put_WindowState  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT put_WindowState(
 long WindowState
);

/* IVideoWindow::put_WindowStyle  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT put_WindowStyle(
 long WindowStyle
);

/* IVideoWindow::put_WindowStyleEx  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT put_WindowStyleEx(
 long pWindowStyleEx
);

/* IVideoWindow::SetWindowForeground  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT SetWindowForeground(
 long Focus
);

/* IVideoWindow::SetWindowPosition  [function; shared; CE 3.0..399, 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT SetWindowPosition(
 long Left,
 long Top,
 long Width,
 long Height
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 3.0..399, 6.0..699 */

/* IMediaSeeking::CheckCapabilities  [function; shared; CE 3.0..399, 6.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT CheckCapabilities(
 DWORD* pCapabilities
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* IAMDevMemoryControl::QueryWriteSync  [function; shared; CE 5.0..699; entity-headers] */
HRESULT QueryWriteSync( );

/* IAMDroppedFrames::GetAverageFrameSize  [function; shared; CE 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetAverageFrameSize(
 long* plAverageSize
);

/* IAMDroppedFrames::GetDroppedInfo  [function; shared; CE 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetDroppedInfo(
 long lSize,
 long* plArray,
 long* plNumCopied
);

/* IAMDroppedFrames::GetNumDropped  [function; shared; CE 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetNumDropped(
 long* plDropped
);

/* IAMDroppedFrames::GetNumNotDropped  [function; shared; CE 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetNumNotDropped(
 long* plNotDropped
);

/* IAMMediaContent::get_AuthorName  [function; shared; CE 5.0..699] */
HRESULT get_AuthorName(
 BSTR* pbstrAuthorName
);

/* IAMMediaContent::get_BaseURL  [function; shared; CE 5.0..699] */
HRESULT get_BaseURL(
 BSTR* pbstrBaseURL
);

/* IAMMediaContent::get_Copyright  [function; shared; CE 5.0..699] */
HRESULT get_Copyright(
 BSTR* pbstrCopyright
);

/* IAMMediaContent::get_Description  [function; shared; CE 5.0..699] */
HRESULT get_Description(
 BSTR* pbstrDescription
);

/* IAMMediaContent::get_LogoIconURL  [function; shared; CE 5.0..699] */
HRESULT get_LogoIconURL(
 BSTR* pbstrLogoURL
);

/* IAMMediaContent::get_LogoURL  [function; shared; CE 5.0..699] */
HRESULT get_LogoURL(
 BSTR* pbstrLogoURL
);

/* IAMMediaContent::get_MoreInfoBannerImage  [function; shared; CE 5.0..699] */
HRESULT get_MoreInfoBannerImage(
 BSTR* pbstrMoreInfoBannerImage
);

/* IAMMediaContent::get_MoreInfoBannerURL  [function; shared; CE 5.0..699] */
HRESULT get_MoreInfoBannerURL(
 BSTR* pbstrMoreInfoBannerURL
);

/* IAMMediaContent::get_MoreInfoText  [function; shared; CE 5.0..699] */
HRESULT get_MoreInfoText(
 BSTR* pbstrMoreInfoText
);

/* IAMMediaContent::get_MoreInfoURL  [function; shared; CE 5.0..699] */
HRESULT get_MoreInfoURL(
 BSTR* pbstrMoreInfoURL
);

/* IAMMediaContent::get_Rating  [function; shared; CE 5.0..699] */
HRESULT get_Rating(
 BSTR* pbstrRating
);

/* IAMMediaContent::get_Title  [function; shared; CE 5.0..699] */
HRESULT get_Title(
 BSTR* pbstrTitle
);

/* IAMMediaContent::get_WatermarkURL  [function; shared; CE 5.0..699] */
HRESULT get_WatermarkURL(
 BSTR* pbstrWatermarkURL
);

/* IAMMediaContentEx::MediaParameter  [function; ce-only; CE 5.0..699; heuristic-prefix] */
HRESULT MediaParameter(
 long EntryNum,
 BSTR bstrName,
 BSTR* pbstrValue
);

/* IAMMediaContentEx::MediaParameterName  [function; ce-only; CE 5.0..699; heuristic-prefix] */
HRESULT MediaParameterName(
 long EntryNum,
 long Index,
 BSTR* pbstrName
);

/* IAMMediaContentEx::PlaylistCount  [function; ce-only; CE 5.0..699; heuristic-prefix] */
HRESULT PlaylistCount(
 long* pNumberEntries
);

/* IAMStreamConfig::GetFormat  [function; shared; CE 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetFormat(
 AM_MEDIA_TYPE** pmt
);

/* IAMStreamConfig::GetNumberOfCapabilities  [function; shared; CE 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetNumberOfCapabilities(
 int* piCount,
 int* piSize
);

/* IAMStreamConfig::GetStreamCaps  [function; shared; CE 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetStreamCaps(
 int iIndex,
 AM_MEDIA_TYPE** pmt,
 BYTE* pSCC
);

/* IAMStreamConfig::SetFormat  [function; shared; CE 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT SetFormat(
 AM_MEDIA_TYPE* pmt
);

/* IReferenceClock::AdvisePeriodic  [function; shared; CE 5.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT AdvisePeriodic(
 REFERENCE_TIME rtStartTime,
 REFERENCE_TIME rtPeriodTime,
 HSEMAPHORE hSemaphore,
 DWORD* pdwAdviseCookie
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* IAMBufferNegotiation::GetAllocatorProperties  [function; shared; CE 6.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetAllocatorProperties(
 ALLOCATOR_PROPERTIES* pprop
);

/* IAMBufferNegotiation::SuggestAllocatorProperties  [function; shared; CE 6.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT SuggestAllocatorProperties(
 const ALLOCATOR_PROPERTIES* pprop
);

/* IAMCameraControl::Get  [function; shared; CE 6.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT Get (
 long Property,
 long* lValue,
 long* Flags
);

/* IAMCameraControl::GetRange  [function; shared; CE 6.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetRange (
 long property,
 long* pMin,
 long* pMax,
 long* pSteppingDelta,
 long* pDefault,
 long* pCapsFlags
);

/* IAMCameraControl::Set  [function; shared; CE 6.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT Set (
 long Property,
 long lValue,
 long Flags
);

/* IAMFilterMiscFlags::GetMiscFlags  [function; shared; CE 6.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
ULONG GetMiscFlags(void);

/* IAMVideoCompression::get_PFramesPerKeyFrame  [function; shared; CE 6.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT get_PFramesPerKeyFrame(
 long* pPFramesPerKeyFrame
);

/* IAMVideoCompression::get_Quality  [function; shared; CE 6.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT get_Quality(
 double* pQuality
);

/* IAMVideoCompression::GetInfo  [function; shared; CE 6.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetInfo(
 WCHAR* pszVersion,
 int* pcbVersion,
 LPWSTR pszDescription,
 int* pcbDescription,
 long* pDefaultKeyFrameRate,
 long* pDefaultPFramesPerKey,
 double* pDefaultQuality,
 long* pCapabilities
) PURE;

/* IAMVideoCompression::OverrideFrameSize  [function; shared; CE 6.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT OverrideFrameSize(
 long FrameNumber,
 long Size
);

/* IAMVideoCompression::OverrideKeyFrame  [function; shared; CE 6.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT OverrideKeyFrame(
 long FrameNumber
);

/* IAMVideoCompression::put_KeyFrameRate  [function; shared; CE 6.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT put_KeyFrameRate(
 long KeyFrameRate
);

/* IAMVideoCompression::put_PFramesPerKeyFrame  [function; shared; CE 6.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT put_PFramesPerKeyFrame(
 long PFramesPerKeyFrame
);

/* IAMVideoCompression::put_Quality  [function; shared; CE 6.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT put_Quality(
 double Quality
);

/* IAMVideoControl::GetCaps  [function; shared; CE 6.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetCaps (
 IPin* pPin,
 long* pCapsFlags
);

/* IAMVideoControl::GetMode  [function; shared; CE 6.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetMode (
 IPin* pPin,
 long* Mode
);

/* IAMVideoControl::SetMode  [function; shared; CE 6.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT SetMode (
 IPin* pPin,
 long Mode
);

/* IAMVideoProcAmp::Get  [function; shared; CE 6.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT Get(
 long Property,
 long* lValue,
 long* Flags
);

/* IAMVideoProcAmp::GetRange  [function; shared; CE 6.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetRange(
 long Property,
 long* pMin,
 long* pMax,
 long* pSteppingDelta,
 long* pDefault,
 long* pCapsFlags
);

/* IAMVideoProcAmp::Set  [function; shared; CE 6.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT Set(
 long Property,
 long lValue,
 long Flags
);

/* IAMVideoRendererMode::GetMode  [function; ce-only; CE 6.0..699; heuristic-prefix] */
HRESULT GetMode(
 DWORD* pdwMode
);

/* IAMVideoRendererMode::SetMode  [function; ce-only; CE 6.0..699; heuristic-prefix] */
HRESULT SetMode(
 DWORD dwMode
);

/* ICaptureGraphBuilder2::ControlStream  [function; shared; CE 6.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT ControlStream(
 const GUID* pCategory,
 const GUID* pType,
 IBaseFilter* pFilter,
 REFERENCE_TIME* pstart,
 REFERENCE_TIME* pstop,
 WORD wStartCookie,
 WORD wStopCookie
);

/* ICaptureGraphBuilder2::FindInterface  [function; shared; CE 6.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT FindInterface(
 const GUID* pCategory,
 const GUID* pType,
 IBaseFilter* pf,
 REFIID riid,
 void** ppint
);

/* ICaptureGraphBuilder2::FindPin  [function; shared; CE 6.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT FindPin(
 IUnknown* pSource,
 PIN_DIRECTION pindir,
 const GUID* pCategory,
 const GUID* pType,
 BOOL fUnconnected,
 int num,
 IPin** ppPin
);

/* ICaptureGraphBuilder2::GetFiltergraph  [function; shared; CE 6.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetFiltergraph(
 IGraphBuilder** ppfg
);

/* ICaptureGraphBuilder2::RenderStream  [function; shared; CE 6.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT RenderStream(
 const GUID* pCategory,
 const GUID* pType,
 IUnknown* pSource,
 IBaseFilter* pIntermediate,
 IBaseFilter* pSink
);

/* ICaptureGraphBuilder2::SetFiltergraph  [function; shared; CE 6.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT SetFiltergraph(
 IGraphBuilder* pfg
);

/* ICaptureGraphBuilder2::SetOutputFileName  [function; shared; CE 6.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT SetOutputFileName(
 const GUID* pType,
 LPCOLESTR lpwstrFile,
 IBaseFilter** ppf,
 IFileSinkFilter** pSink
);

/* IFileSinkFilter2::GetMode  [function; shared; CE 6.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetMode(
 DWORD* dwFlags
);

/* IFileSinkFilter2::SetMode  [function; shared; CE 6.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT SetMode(
 DWORD dwFlags
);

/* IFileSinkFilter::GetCurFile  [function; shared; CE 6.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT GetCurFile(
 LPOLESTR* ppszFileName,
 AM_MEDIA_TYPE* pmt
);

/* IFileSinkFilter::SetFileName  [function; shared; CE 6.0..699; Strmiids.lib; entity-headers; lib:win32-reference] */
HRESULT SetFileName(
 LPCOLESTR pszFileName,
 const AM_MEDIA_TYPE* pmt
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct _AMVPDATAINFO{DWORD dwSize; DWORD dwMicrosecondsPerField; AMVPDIMINFO amvpDimInfo; DWORD dwPictAspectRatioX;DWORD dwPictAspectRatioY;BOOL bEnableDoubleClock;BOOL bEnableVACT;BOOL bDataIsInterlaced;LONG lHalfLinesOdd;BOOL bFieldPolarityInverted;DWORD dwNumLinesInVREF;LONG lHalfLinesEven;DWORD dwReserved1;} AMVPDATAINFO, *LPAMVPDATAINFO;
typedef struct _AMVPSIZE{DWORD dwWidth;DWORD dwHeight;} AMVPSIZE, *LPAMVPSIZE;

/* function */
HRESULT AddFilter( IBaseFilter *pFilter, LPCWSTR pName);
HRESULT AddSourceFilter( LPCWSTR lpwstrFileName, LPCWSTR lpwstrFilterName, IbaseFilter **ppFilter );
HRESULT AddSourceFilterForMoniker( IMoniker *pMoniker, IBindCtx *pCtx, LPCWSTR lpcwstrFilterName, IBaseFilter **ppFilter);
HRESULT AutoTune( long lChannel, long *plFoundSignal);
HRESULT ChannelMinMax( long *lChannelMin, long *lChannelMax);
HRESULT CheckMemory( const BYTE *pBuffer);
DWORD ColorKey (void );
HRESULT ConnectDirect( IPin *ppinOut, IPin *ppinIn, const AM_MEDIA_TYPE *pmt);
HRESULT ControlStream( const GUID* pCategory, const GUID* pType, IBaseFilter* pFilter, REFERENCE_TIME* pstart, REFERENCE_TIME* pstop, WORD wStartCookie, WORD wStopCookie );
HRESULT CreateCategory( REFCLSID clsidCategory, DWORD dwCategoryMerit, LPCWSTR Description);
HRESULT Enable( long lIndex, DWORD dwFlags);
HRESULT EnumFilters( IEnumFilters **ppEnum);
HRESULT EnumMatchingFilters( IEnumMoniker **ppEnum, DWORD dwFlags, BOOL bExactMatch, DWORD dwMerit, BOOL bInputNeeded, DWORD cInputTypes, const GUID *pInputTypes, const REGPINMEDIUM *pMedIn, const CLSID *pPinCategoryIn, BOOL bRender, BOOL bOutputNeeded, DWORD cOutputTypes, const GUID *pOutputTypes, const REGPINMEDIUM *pMedOut, const CLSID *pPinCategoryOut);
HRESULT FindFilterByName( LPCWSTR pName, IBaseFilter **ppFilter);
HRESULT GetAllocatorProperties( ALLOCATOR_PROPERTIES* pprop );
HRESULT GetAvailableModes( long *plModes);
HRESULT GetAverageFrameSize( long* plAverageSize);
HRESULT GetCurfile( LPOLESTR *ppszFileName, AM_MEDIA_TYPE *pmt);
HRESULT GetDefaultColorKey( COLORKEY *pColorKey);
HRESULT GetDevId( DWORD *pdwDevId);
HRESULT GetDevMemoryObject( IUnknown **ppUnkInnner, IUnknown *pUnkOuter);
HRESULT GetDroppedInfo( long lSize, long* plArray, long* plNumCopied);
HRESULT GetFiltergraph( IGraphBuilder** ppfg );
LONG GetMiscFlags(void);
HRESULT GetMode ( IPin* pPin, long* Mode );
HRESULT GetNumDropped( long* plDropped);
HRESULT GetNumNotDropped( long* plNotDropped);
HRESULT GetNumberOfCapabilities( int* piCount, int* piSize );
HRESULT GetRange( long Property, long* pMin, long* pMax, long* pSteppingDelta, long* pDefault, long* pCapsFlags );
HRESULT GetStreamCaps( int iIndex, AM_MEDIA_TYPE** pmt, BYTE* pSCC );
HRESULT GetVideoPosition( [out] RECT *pSourceRect, [out] RECT *pDestinationRect);
HRESULT Info( long lIndex, AM_MEDIA_TYPE **ppmt, DWORD *pdwFlags, LCID *plcid, DWORD *pdwGroup, WCHAR **ppszName, IUnknown **ppObject, IUnknown **ppUnk );
HRESULT Logout(void);
HRESULT NotifyGraphChange( );
HRESULT OnClipChange( RECT *pSourceRect, RECT *pDestinationRect, RGNDATA *pRgnData);
HRESULT OnColorKeyChange( COLORKEY *pColorKey);
HRESULT OnPaletteChange( DWORD dwColors, const PALETTEENTRY *pPalette);
HRESULT OnPositionChange( const RECT *pSourceRect, const RECT *pDestinationRect);
HRESULT OverrideFrameSize( long FrameNumber, long Size );
HRESULT OverrideKeyFrame( long FrameNumber );
HRESULT QueryVersion( LONG *pVersion);
HRESULT Reconnect( IPin *ppin);
HRESULT ReconnectEx( IPin *ppin, const AM_MEDIA_TYPE *pmt);
HRESULT RegisterFilter( REFCLSID clsidFilter, LPCWSTR Name, IMoniker **ppMoniker, const CLSID *pclsidCategory, const OLECHAR *szInstance, const REGFILTER2 *prf2);
HRESULT RegisterFilterInstance( CLSID clsid, LPCWSTR Name, CLSID *MRId);
HRESULT RegisterNotificationCallBack( IAMTunerNotification *pNotify, long lEvents);
HRESULT RegisterPin( CLSID Filter, LPCWSTR Name, BOOL bRendered, BOOL bOutput, BOOL bZero, BOOL bMany, CLSID ConnectsToFilter, LPWSTR ConnectsToPin);
HRESULT RegisterPinType( CLSID clsFilter, LPCWSTR strName, CLSID clsMajorType, CCLSID clsSubType);
HRESULT RemoveFilter( IBaseFilter *pFilter);
HRESULT RenderFile( LPCWSTR lpwstrFile, LPCWSTR lpwstrPlayList);
HRESULT RenderStream( const GUID* pCategory, const GUID* pType, IUnknown* pSource, IBaseFilter* pIntermediate, IBaseFilter* pSink );
HRESULT Request( IMediaSample* pSample, DWORD dwUser );
HRESULT RequestAllocator( IMemAllocator* pPreferred, ALLOCATOR_PROPERTIES* pProps, IMemAllocator ** ppActual);
HRESULT SetDefaultSyncSource(void);
HRESULT SetFileName( LPCOLESTR pszFileName, const AM_MEDIA_TYPE* pmt );
HRESULT SetFiltergraph( IGraphBuilder* pfg );
HRESULT SetLogFile( HANDLE hFile);
HRESULT SetOutputFileName( const GUID* pType, LPCOLESTR lpwstrFile, IBaseFilter** ppf, IFileSinkFilter** pSink );
HRESULT SignalPresent( long *plSignalStrength);
HRESULT StartAt( const REFERENCE_TIME *ptStart, DWORD dwCookie);
HRESULT StoreAutoTune(void);
HRESULT SuggestAllocatorProperties( const ALLOCATOR_PROPERTIES* pprop );
HRESULT SyncReadAligned( IMediaSample *pSample);
HRESULT UnRegisterNotificationCallBack( IAMTunerNotification *pNotify);
HRESULT UnregisterFilter( const CLSID *pclsidCategory, const OLECHAR *szInstance, REFCLSID Filter);
HRESULT UnregisterFilterInstance( CLSID MRId);
HRESULT UnregisterPin( CLSID Filter, LPCWSTR Name);
HRESULT WriteSync( );
HRESULT get_AudioFrequency( long *lFreq);
HRESULT get_AuthorName( BSTR* pbstrAuthorName );
HRESULT get_AvailableTVFormats( long *lAnalogVideoStandard);
HRESULT get_BaseURL( BSTR* pbstrBaseURL );
HRESULT get_Channel ( long *plChannel, long *plVideoSubChannel, long *plAudioSubChannel);
HRESULT get_ConnectInput ( long *plIndex);
HRESULT get_Copyright( BSTR* pbstrCopyright );
HRESULT get_CountryCode( long *plCountryCode);
HRESULT get_Description( BSTR* pbstrDescription );
HRESULT get_InputType ( long lIndex, TunerInputType *pInputType);
HRESULT get_LogoIconURL( BSTR* pbstrLogoURL );
HRESULT get_LogoURL( BSTR* pbstrLogoURL );
HRESULT get_Mode( AMTunerModeType *plMode);
HRESULT get_MoreInfoBannerImage( BSTR* pbstrMoreInfoBannerImage );
HRESULT get_MoreInfoBannerURL( BSTR* pbstrMoreInfoBannerURL );
HRESULT get_MoreInfoText( BSTR* pbstrMoreInfoText );
HRESULT get_MoreInfoURL( BSTR* pbstrMoreInfoURL );
HRESULT get_NumInputConnections( long *plNumInputConnections);
HRESULT get_PFramesPerKeyFrame( long* pPFramesPerKeyFrame );
HRESULT get_Quality( double* pQuality );
HRESULT get_Rating( BSTR* pbstrRating );
HRESULT get_TVFormat( long *plAnalogVideoStandard);
HRESULT get_TuningSpace( long *plTuningSpace);
HRESULT get_VideoFrequency( long *lFreq);
HRESULT get_WatermarkURL( BSTR* pbstrWatermarkURL );
HRESULT put_Channel( long lChannel, long lVideoSubChannel, long lAudioSubChannel);
HRESULT put_ConnectInput( long lIndex);
HRESULT put_CountryCode( long lCountryCode);
HRESULT put_InputType( long lIndex, TunerInputType InputType);
HRESULT put_KeyFrameRate( long KeyFrameRate );
HRESULT put_Mode( AMTunerModeType lMode);
HRESULT put_PFramesPerKeyFrame( long PFramesPerKeyFrame );
HRESULT put_Quality( double Quality );
HRESULT put_TuningSpace( long lTuningSpace);

#endif /* _DSHOW_ */
