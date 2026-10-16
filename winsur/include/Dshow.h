/* Dshow.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 77 constants, 49 declarations, 3 outlines, 0 base types, 0 extra macros, 104 extra decls
 */
#ifndef _DSHOW_
#define _DSHOW_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
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
#define AM_SAMPLE_DATADISCONTINUITY 0x04
#define AM_SAMPLE_ENDOFSTREAM 0x200
#define AM_SAMPLE_FLUSH_ON_PAUSE 0x80
#define AM_SAMPLE_PREROLL 0x02
#define AM_SAMPLE_SPLICEPOINT 0x01
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
#define AM_VIDEO_FLAG_FIELD1 0x0001
#define AM_VIDEO_FLAG_FIELD1FIRST 0x0004
#define AM_VIDEO_FLAG_FIELD2 0x0002
#define AM_VIDEO_FLAG_FIELD_MASK 0x0003
#define AM_VIDEO_FLAG_INTERLEAVED_FRAME 0x0000
#define AM_VIDEO_FLAG_REPEAT_FIELD 0x0040
#define AM_VIDEO_FLAG_WEAVE 0x0008
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
#define CameraControl_Flags_Auto 0x0001
#define CameraControl_Flags_Manual 0x0002
#define CompressionCaps_CanBFrame 0x08
#define CompressionCaps_CanCrunch 0x02
#define CompressionCaps_CanKeyFrame 0x04
#define CompressionCaps_CanQuality 0x01
#define CompressionCaps_CanWindow 0x10
#define KSPROPERTY_CAMERACONTROL_FLAGS_ABSOLUTE 0x0000L
#define KSPROPERTY_CAMERACONTROL_FLAGS_AUTO 0x0001L
#define KSPROPERTY_CAMERACONTROL_FLAGS_MANUAL 0x0002L
#define KSPROPERTY_CAMERACONTROL_FLAGS_RELATIVE 0x0010L
#define MAXLONGLONG 0x7FFFFFFFFFFFFFFF
#define MERIT_DO_NOT_USE 0x200000
#define MERIT_HW_COMPRESSOR 0x100050
#define MERIT_NORMAL 0x600000
#define MERIT_PREFERRED 0x800000
#define MERIT_SW_COMPRESSOR 0x100000
#define MERIT_UNLIKELY 0x400000
#define State_Stopped 0
#define VideoControlFlag_ExternalTriggerEnable 0x0004
#define VideoControlFlag_FlipHorizontal 0x0001
#define VideoControlFlag_FlipVertical 0x0002
#define VideoControlFlag_Trigger 0x0008
#define VideoProcAmp_Flags_Auto 0x0001
#define VideoProcAmp_Flags_Manual 0x0002

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* ALLOCATOR_PROPERTIES  [struct, typedef; shared] */
typedef struct _AllocatorProperties {
 long cBuffers;
 long cbBuffer;
 long cbAlign;
 long cbPrefix;
} ALLOCATOR_PROPERTIES;

/* AnalogVideoStandard  [enum, typedef; shared; entity-headers] */
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

/* CameraControlFlags  [enum; shared; entity-headers] */
typedef enum{
 CameraControl_Flags_Auto = 0x0001,
 CameraControl_Flags_Manual = 0x0002
} CameraControlFlags;

/* CameraControlProperty  [enum; shared; entity-headers] */
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

/* COLORKEY  [struct, typedef, function; shared] */
typedef struct tagCOLORKEY{
 DWORD KeyType;
 DWORD PaletteIndex;
 COLORREF LowColorValue;
 COLORREF HighColorValue;
} COLORKEY;

/* CompressionCaps  [enum; shared; entity-headers] */
typedef enum {
 CompressionCaps_CanQuality = 0x01,
 CompressionCaps_CanCrunch = 0x02,
 CompressionCaps_CanKeyFrame = 0x04,
 CompressionCaps_CanBFrame = 0x08,
 CompressionCaps_CanWindow = 0x10
} CompressionCaps;

/* FILTER_INFO  [struct, typedef; shared] */
typedef struct _FilterInfo{
 WCHAR achName[128];
 IFilterGraph __RPC_FAR* pGraph;
} FILTER_INFO;

/* FILTER_STATE  [enum, typedef; shared; entity-headers] */
typedef enum _FilterState {
 State_Stopped = 0,
 State_Paused = State_Stopped + 1,
 State_Running = State_Paused + 1
} FILTER_STATE;

/* MPEG2Level  [enum, typedef; ce-only; heuristic-prefix] */
enum MPEG2Level {
 MPEG2Level_Low = 1,
 MPEG2Level_Main,
 MPEG2Level_High1440,
 MPEG2Level_High
};

/* MPEG2Profile  [enum, typedef; ce-only; heuristic-prefix] */
enum MPEG2Profile {
 MPEG2Profile_Simple = 1,
 MPEG2Profile_Main,
 MPEG2Profile_SNRScalable,
 MPEG2Profile_SpatiallyScalable,
 MPEG2Profile_High
};

/* POSITION  [struct, typedef; ce-only] */
struct __POSITION { int unused; };
typedef __POSITION* POSITION;

/* QualityMessageType  [enum, typedef; shared; entity-headers] */
typedef enum {
 Famine,
 Flood
} QualityMessageType;

/* TIMECODE  [struct, typedef; shared] */
typedef struct tagTIMECODE {
 WORD wFrameRate;
 WORD wFrameFract;
 WORD dwFrames;
}TIMECODE;

/* VideoControlFlags  [enum; shared; entity-headers] */
typedef enum tagVideoControlFlags {
 VideoControlFlag_FlipHorizontal = 0x0001,
 VideoControlFlag_FlipVertical = 0x0002,
 VideoControlFlag_ExternalTriggerEnable = 0x0004,
 VideoControlFlag_Trigger = 0x0008
} VideoControlFlags;

/* VideoProcAmpFlags  [enum; shared; entity-headers] */
typedef enum tagVideoProcAmpFlags {
 VideoProcAmp_Flags_Auto = 0x0001,
 VideoProcAmp_Flags_Manual = 0x0002,
} VideoProcAmpFlags;

/* VideoProcAmpProperty  [enum; shared; entity-headers] */
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

/* TIMECODE_SAMPLE  [struct, typedef; shared] */
/* DERIVED member outline -- documented order, types/offsets not stated */
/*   qwTick */
/*   timecode */
/*   dwUser */
/*   dwFlags */

/* VIDEO_STREAM_CONFIG_CAPS  [struct, typedef; shared] */
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

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400)) /* CE 3.0..399 */

/* IAMDevMem  [function; ce-only; CE 3.0..399; heuristic-prefix] */
HRESULT QueryWriteSync( );
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
