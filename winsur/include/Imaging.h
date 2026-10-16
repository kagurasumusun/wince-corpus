/* Imaging.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 4 constants, 14 declarations, 0 outlines, 0 base types, 0 extra macros, 65 extra decls
 */
#ifndef _IMAGING_
#define _IMAGING_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* MAKEARGB  [macro; ce-only] */
#define ALPHA_SHIFT 24
#define RED_SHIFT 16
#define GREEN_SHIFT 8
#define BLUE_SHIFT 0
#define ALPHA_MASK ((ARGB) 0xff << ALPHA_SHIFT)
#define MAKEARGB(a, r, g, b) \
 (((ARGB) ((a) & 0xff) << ALPHA_SHIFT)| \
 ((ARGB) ((r) & 0xff) << RED_SHIFT) | \
 ((ARGB) ((g) & 0xff) << GREEN_SHIFT)| \
 ((ARGB) ((b) & 0xff) << BLUE_SHIFT))

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* ARGB  [typedef; ce-only] */
typedef DWORD ARGB;

/* BufferDisposalFlag  [enum; ce-only] */
enum BufferDisposalFlag {
 BufferDisposalFlagNone,
 BufferDisposalFlagGlobalFree,
 BufferDisposalFlagCoTaskMemFree,
 BufferDisposalFlagUnmapView
};

/* ColorPalette  [struct, typedef; shared] */
typedef struct tagColorPalette {
 UINT Flags;
 UINT Count;
 ARGB Entries[1];
} ColorPalette;

/* DecoderInitFlag  [enum; ce-only] */
enum DecoderInitFlag {
 DecoderInitFlagNone = 0,
 DecoderInitFlagNoBlock = 0x0001,
 DecoderInitFlagBuiltIn1st = 0x0002
};

/* EncoderParameterValueType  [enum; shared] */
enum EncoderParameterValueType {
 EncoderParameterValueTypeByte = 1,
 EncoderParameterValueTypeASCII = 2,
 EncoderParameterValueTypeShort = 3,
 EncoderParameterValueTypeLong = 4,
 EncoderParameterValueTypeRational = 5,
 EncoderParameterValueTypeLongRange = 6,
 EncoderParameterValueTypeUndefined = 7,
 EncoderParameterValueTypeRationalRange = 8
};

/* EncoderValue  [enum; shared] */
enum EncoderValue {
 EncoderValueColorTypeCMYK,
 EncoderValueColorTypeYCCK,
 EncoderValueCompressionLZW,
 EncoderValueCompressionCCITT3,
 EncoderValueCompressionCCITT4,
 EncoderValueCompressionRle,
 EncoderValueCompressionNone,
 EncoderValueScanMethodInterlaced,
 EncoderValueScanMethodNonInterlaced,
 EncoderValueVersionGif87,
 EncoderValueVersionGif89,
 EncoderValueRenderProgressive,
 EncoderValueRenderNonProgressive,
 EncoderValueTransformRotate90,
 EncoderValueTransformRotate180,
 EncoderValueTransformRotate270,
 EncoderValueTransformFlipHorizontal,
 EncoderValueTransformFlipVertical,
 EncoderValueMultiFrame,
 EncoderValueLastFrame,
 EncoderValueFlush,
 EncoderValueFrameDimensionTime,
 EncoderValueFrameDimensionResolution,
 EncoderValueFrameDimensionPage
};

/* ImageCodecFlags  [enum; shared] */
enum ImageCodecFlags {
 ImageCodecFlagsEncoder = 0x00000001,
 ImageCodecFlagsDecoder = 0x00000002,
 ImageCodecFlagsSupportBitmap = 0x00000004,
 ImageCodecFlagsSupportVector = 0x00000008,
 ImageCodecFlagsSeekableEncode = 0x00000010,
 ImageCodecFlagsBlockingDecode = 0x00000020,
 ImageCodecFlagsBuiltin = 0x00010000,
 ImageCodecFlagsSystem = 0x00020000,
 ImageCodecFlagsUser = 0x00040000
};

/* ImageFlags  [enum; shared] */
enum ImageFlags {
 ImageFlagsNone = 0,
 ImageFlagsScalable = 0x0001,
 ImageFlagsHasAlpha = 0x0002,
 ImageFlagsHasTranslucent = 0x0004,
 ImageFlagsPartiallyScalable = 0x0008,
 ImageFlagsColorSpaceRGB = 0x0010,
 ImageFlagsColorSpaceCMYK = 0x0020,
 ImageFlagsColorSpaceGRAY = 0x0040,
 ImageFlagsColorSpaceYCBCR = 0x0080,
 ImageFlagsColorSpaceYCCK = 0x0100,
 ImageFlagsHasRealDPI = 0x1000,
 ImageFlagsHasRealPixelSize = 0x2000,
 ImageFlagsReadOnly = 0x00010000,
 ImageFlagsCaching = 0x00020000,
 ImageFlagsValid = 0x00030000
};

/* ImageLockMode  [enum; shared] */
enum ImageLockMode {
 ImageLockModeRead = 0x0001,
 ImageLockModeWrite = 0x0002,
 ImageLockModeUserInputBuf = 0x0004
};

/* InterpolationHint  [enum; ce-only] */
enum InterpolationHint {
 InterpolationHintDefault,
 InterpolationHintNearestNeighbor,
 InterpolationHintBilinear,
 InterpolationHintAveraging,
 InterpolationHintBicubic
};

/* PixelFormat  [typedef, function; ce-only] */
typedef INT PixelFormat;

/* PixelFormatID  [typedef; ce-only] */
typedef PixelFormat PixelFormatID;

/* SinkFlags  [enum; ce-only] */
enum SinkFlags {
 SinkFlagsScalable = ImageFlagsScalable,
 SinkFlagsHasAlpha = ImageFlagsHasAlpha,
 SinkFlagsPartiallyScalable = ImageFlagsPartiallyScalable,
 SinkFlagsTopDown = 0x00010000,
 SinkFlagsBottomUp = 0x00020000,
 SinkFlagsFullWidth = 0x00040000,
 SinkFlagsMultipass = 0x00080000,
 SinkFlagsComposite = 0x00100000,
 SinkFlagsWantProps = 0x00200000
};

/* x0002  [extra enum] */
enum DecoderInitFlag { DecoderInitFlagNone = 0, DecoderInitFlagNoBlock = 0x0001, DecoderInitFlagBuiltIn1st = 0x0002};

/* EncoderValueFrameDimensionPage  [extra enum] */
enum EncoderValue { EncoderValueColorTypeCMYK, EncoderValueColorTypeYCCK, EncoderValueCompressionLZW, EncoderValueCompressionCCITT3, EncoderValueCompressionCCITT4, EncoderValueCompressionRle, EncoderValueCompressionNone, EncoderValueScanMethodInterlaced, EncoderValueScanMethodNonInterlaced, EncoderValueVersionGif87, EncoderValueVersionGif89, EncoderValueRenderProgressive, EncoderValueRenderNonProgressive, EncoderValueTransformRotate90, EncoderValueTransformRotate180, EncoderValueTransformRotate270, EncoderValueTransformFlipHorizontal, EncoderValueTransformFlipVertical, EncoderValueMultiFrame, EncoderValueLastFrame, EncoderValueFlush, EncoderValueFrameDimensionTime, EncoderValueFrameDimensionResolution, EncoderValueFrameDimensionPage};

/* InterpolationHintBicubic  [extra enum] */
enum InterpolationHint { InterpolationHintDefault, InterpolationHintNearestNeighbor, InterpolationHintBilinear, InterpolationHintAveraging, InterpolationHintBicubic};

/* x00200000  [extra enum] */
enum SinkFlags { SinkFlagsScalable = ImageFlagsScalable, SinkFlagsHasAlpha = ImageFlagsHasAlpha, SinkFlagsPartiallyScalable = ImageFlagsPartiallyScalable, SinkFlagsTopDown = 0x00010000, SinkFlagsBottomUp = 0x00020000, SinkFlagsFullWidth = 0x00040000, SinkFlagsMultipass = 0x00080000, SinkFlagsComposite = 0x00100000, SinkFlagsWantProps = 0x00200000};

/* BufferDisposalFlagUnmapView  [extra enum] */
enum BufferDisposalFlag { BufferDisposalFlagNone, BufferDisposalFlagGlobalFree, BufferDisposalFlagCoTaskMemFree, BufferDisposalFlagUnmapView};

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT AdjustBrightness( FLOAT percent );
HRESULT AdjustContrast( FLOAT shadow, FLOAT highlight );
HRESULT AdjustGamma( FLOAT gamma );
HRESULT CreateImageDecoder( IStream* stream, DecoderInitFlag flags, IImageDecoder** decoder );
HRESULT CreateImageFromBuffer( const VOID* buf, UINT size, BufferDisposalFlag disposalFlag, IImage** image );
HRESULT CreateImageFromFile( const WCHAR* filename, IImage** image );
HRESULT CreateImageFromStream( IStream* stream, IImage** image );
HRESULT CreateNewBitmap( UINT width, UINT height, PixelFormatID pixelFormat, IBitmapImage** bitmap );
HRESULT Decode();
HRESULT EndDecode( HRESULT statusCode );
HRESULT EndSink( HRESULT statusCode );
HRESULT GetAllPropertyItems( UINT totalBufferSize, UINT numProperties, PropertyItem* allItems );
HRESULT GetEncodeSink( IImageSink** sink );
HRESULT GetEncoderParameterList( UINT size, EncoderParameters* Params );
HRESULT GetEncoderParameterListSize( UINT* size );
HRESULT GetFrameDimensionsCount( UINT* count );
HRESULT GetImageInfo( ImageInfo* imageInfo );
HRESULT GetInstalledDecoders( UINT* count, ImageCodecInfo** decoders );
HRESULT GetInstalledEncoders( UINT* count, ImageCodecInfo** encoders );
HRESULT GetPhysicalDimension( SIZE* size );
HRESULT GetPropertyBuffer( UINT uiTotalBufferSize, PropertyItem** ppBuffer );
HRESULT GetPropertyCount( UINT* numOfProperty );
HRESULT GetPropertySize( UINT* totalBufferSize, UINT* numProperties );
HRESULT InitDecoder( IStream* stream, DecoderInitFlag flags );
HRESULT InitEncoder( IStream* stream );
HRESULT InstallImageCodec( const ImageCodecInfo* codecInfo );
HRESULT LockBits( const RECT* rect, UINT flags, PixelFormatID pixelFormat, BitmapData* lockedBitmapData );
HRESULT NeedRawProperty();
HRESULT NeedTransform( UINT* rotation );
HRESULT PushIntoSink( IImageSink* sink );
HRESULT PushPixelData( const RECT* rect, const BitmapData* bitmapData, BOOL lastPass );
HRESULT PushPropertyItems( UINT numOfItems, UINT uiTotalBufferSize, PropertyItem* item );
HRESULT PushRawData( const VOID* buffer, UINT bufsize );
HRESULT PushRawInfo( void* info );
HRESULT ReleasePixelDataBuffer( const BitmapData* bitmapData );
HRESULT Resize( UINT newWidth, UINT newHeight, PixelFormatID pixelFormat, InterpolationHint hints, IBitmapImage** outbmp );
HRESULT Rotate( FLOAT angle, InterpolationHint hints, IBitmapImage** outbmp );
HRESULT SetEncoderParameters( const EncoderParameters* Param );
HRESULT SetImageFlags( UINT flags );
HRESULT SetPropertyItem( PropertyItem item );
HRESULT TerminateDecoder();
HRESULT TerminateEncoder();
HRESULT UninstallImageCodec( const WCHAR* codecName, UINT flags );
HRESULT UnlockBits( const BitmapData* lockedBitmapData );

#endif /* _IMAGING_ */
