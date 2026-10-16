/* csmedia.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 11 constants, 23 declarations, 4 outlines, 0 base types, 0 extra macros, 18 extra decls
 */
#ifndef _CSMEDIA_
#define _CSMEDIA_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define CS_CompressionCaps_CanBFrame 8
#define CS_CompressionCaps_CanCrunch 2
#define CS_CompressionCaps_CanKeyFrame 4
#define CS_CompressionCaps_CanQuality 1
#define CS_CompressionCaps_CanWindow 0x10
#define CS_Obsolete_VideoControlFlag_ExternalTriggerEnable 0x0010
#define CS_Obsolete_VideoControlFlag_Trigger 0x0020
#define CS_VideoControlFlag_ExternalTriggerEnable 0x0004
#define CS_VideoControlFlag_FlipHorizontal 0x0001
#define CS_VideoControlFlag_FlipVertical 0x0002
#define CS_VideoControlFlag_Trigger 0x0008

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* CS_FRAME_INFO  [struct; ce-only] */

/* CS_VIDEO_STREAM_CONFIG_CAPS  [struct; ce-only] */

/* CSPROPERTY_DROPPEDFRAMES_CURRENT_S  [struct; ce-only] */

/* CSPROPERTY_VIDEOCONTROL_ACTUAL_FRAME_RATE_S  [struct; ce-only] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* CS_CompressionCaps  [enum; ce-only] */
typedef enum {
 CS_CompressionCaps_CanQuality = 1,
 CS_CompressionCaps_CanCrunch = 2,
 CS_CompressionCaps_CanKeyFrame = 4,
 CS_CompressionCaps_CanBFrame = 8,
 CS_CompressionCaps_CanWindow = 0x10,
} CS_CompressionCaps;

/* CS_VideoControlFlags  [enum; ce-only] */
typedef enum {
 CS_VideoControlFlag_FlipHorizontal = 0x0001,
 CS_VideoControlFlag_FlipVertical = 0x0002,
 CS_Obsolete_VideoControlFlag_ExternalTriggerEnable = 0x0010,
 CS_Obsolete_VideoControlFlag_Trigger = 0x0020,
 CS_VideoControlFlag_ExternalTriggerEnable = 0x0004,
 CS_VideoControlFlag_Trigger = 0x0008,
} CS_VideoControlFlags;

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct {
  CSPROPERTY Property;
  LONG Value;
  ULONG Flags;
  ULONG Capabilities;
} CSPROPERTY_CAMERACONTROL_S, *PCSPROPERTY_CAMERACONTROL_S;
typedef struct {
  CSPROPERTY Property;
  ULONG StreamIndex;
  LONG DefaultKeyFrameRate;
  LONG DefaultPFrameRate;
  LONG DefaultQuality;
  LONG NumberOfQualitySettings;
  LONG Capabilities;
} CSPROPERTY_VIDEOCOMPRESSION_GETINFO_S,
*PCSPROPERTY_VIDEOCOMPRESSION_GETINFO_S;
typedef struct {
  CSPROPERTY Property;
  ULONG StreamIndex;
  LONG Value;
} CSPROPERTY_VIDEOCOMPRESSION_S, *PCSPROPERTY_VIDEOCOMPRESSION_S;
typedef struct {
  CSPROPERTY Property;
  ULONG StreamIndex;
  ULONG VideoControlCaps;
} CSPROPERTY_VIDEOCONTROL_CAPS_S, *PCSPROPERTY_VIDEOCONTROL_CAPS_S;
typedef struct {
  CSPROPERTY Property;
  ULONG StreamIndex;
  ULONG RangeIndex;
  SIZE Dimensions;
} CSPROPERTY_VIDEOCONTROL_FRAME_RATES_S, *PCSPROPERTY_VIDEOCONTROL_FRAME_RATES_S;
typedef struct {
  CSPROPERTY Property;
  ULONG StreamIndex;
  LONG Mode;
} CSPROPERTY_VIDEOCONTROL_MODE_S, *PCSPROPERTY_VIDEOCONTROL_MODE_S;
typedef struct {
  CSPROPERTY Property;
  LONG Value;
  ULONG Flags;
  ULONG Capabilities;
} CSPROPERTY_VIDEOPROCAMP_S, *PCSPROPERTY_VIDEOPROCAMP_S;
typedef struct {
  ULONG DesiredCount;
  ULONG ActualCount;
  LPVOID pBuffers;
} CSSTREAM_ALLOCATOR, * PCSSTREAM_ALLOCATOR;
typedef struct tagCS_BITMAPINFOHEADER{
  DWORD biSize;
  LONG biWidth;
  LONG biHeight;
  WORD biPlanes;
  WORD biBitCount;
  DWORD biCompression;
  DWORD biSizeImage;
  LONG biXPelsPerMeter;
  LONG biYPelsPerMeter;
  DWORD biClrUsed;
  DWORD biClrImportant;
} CS_BITMAPINFOHEADER, *PCS_BITMAPINFOHEADER;
typedef struct tagCS_DATARANGE_VIDEO {
  CSDATARANGE DataRange;
  BOOL bFixedSizeSamples;
  BOOL bTemporalCompression;
  DWORD StreamDescriptionFlags;
  DWORD MemoryAllocationFlags;
  CS_VIDEO_STREAM_CONFIG_CAPS ConfigCaps;
  CS_VIDEOINFOHEADER VideoInfoHeader;
} CS_DATARANGE_VIDEO, *PCS_DATARANGE_VIDEO;
typedef struct tagCS_DATARANGE_VIDEO2 {
  CSDATARANGE DataRange;
  BOOL bFixedSizeSamples;
  BOOL bTemporalCompression;
  DWORD StreamDescriptionFlags;
  DWORD MemoryAllocationFlags;
  CS_VIDEO_STREAM_CONFIG_CAPS ConfigCaps;
  CS_VIDEOINFOHEADER2 VideoInfoHeader;
} CS_DATARANGE_VIDEO2, *PCS_DATARANGE_VIDEO2;
typedef struct tagCS_MPEG1VIDEOINFO {
  CS_VIDEOINFOHEADER hdr;
  DWORD dwStartTimeCode;
  DWORD cbSequenceHeader;
  BYTE bSequenceHeader[1];
} CS_MPEG1VIDEOINFO , *PCS_MPEG1VIDEOINFO;
typedef struct tagCS_RGBQUAD {
  BYTE rgbBlue;
  BYTE rgbGreen;
  BYTE rgbRed;
  BYTE rgbReserved;
} CS_RGBQUAD, *PCS_RGBQUAD;
typedef struct tag_CS_TRUECOLORINFO { DWORD dwBitMasks[CS_iMASK_COLORS]; CS_RGBQUAD bmiColors[CS_iPALETTE_COLORS]; } CS_TRUECOLORINFO, *PCS_TRUECOLORINFO;
typedef struct tagCS_VIDEOINFOHEADER {
  RECT rcSource;
  RECT rcTarget;
  DWORD dwBitRate;
  DWORD dwBitErrorRate;
  REFERENCE_TIME AvgTimePerFrame;
  CS_BITMAPINFOHEADER bmiHeader;
  union {
    DWORD dwBitMasks[CS_iMASK_COLORS];
    CS_TRUECOLORINFO TrueColorInfo;
  };
} CS_VIDEOINFOHEADER, *PCS_VIDEOINFOHEADER;
typedef struct tagCS_VIDEOINFOHEADER2 {
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
  CS_BITMAPINFOHEADER bmiHeader;
  union {
    DWORD dwBitMasks[CS_iMASK_COLORS];
    CS_TRUECOLORINFO TrueColorInfo;
  };
} CS_VIDEOINFOHEADER2, *PCS_VIDEOINFOHEADER2;

#endif /* _CSMEDIA_ */
