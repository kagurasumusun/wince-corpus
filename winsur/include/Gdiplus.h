/* Gdiplus.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 0 declarations, 0 outlines, 0 base types, 0 extra macros, 6 extra decls
 */
#ifndef _GDIPLUS_
#define _GDIPLUS_


/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* enum */
enum ImageFlags { ImageFlagsNone = 0, ImageFlagsScalable = 0x0001, ImageFlagsHasAlpha = 0x0002, ImageFlagsHasTranslucent = 0x0004, ImageFlagsPartiallyScalable = 0x0008, ImageFlagsColorSpaceRGB = 0x0010, ImageFlagsColorSpaceCMYK = 0x0020, ImageFlagsColorSpaceGRAY = 0x0040, ImageFlagsColorSpaceYCBCR = 0x0080, ImageFlagsColorSpaceYCCK = 0x0100, ImageFlagsHasRealDPI = 0x1000, ImageFlagsHasRealPixelSize = 0x2000, ImageFlagsReadOnly = 0x00010000, ImageFlagsCaching = 0x00020000, ImageFlagsValid = 0x00030000};
enum ImageLockMode { ImageLockModeRead = 0x0001, ImageLockModeWrite = 0x0002, ImageLockModeUserInputBuf = 0x0004};
enum ImageCodecFlags { ImageCodecFlagsEncoder = 0x00000001, ImageCodecFlagsDecoder = 0x00000002, ImageCodecFlagsSupportBitmap = 0x00000004, ImageCodecFlagsSupportVector = 0x00000008, ImageCodecFlagsSeekableEncode = 0x00000010, ImageCodecFlagsBlockingDecode = 0x00000020, ImageCodecFlagsBuiltin = 0x00010000, ImageCodecFlagsSystem = 0x00020000, ImageCodecFlagsUser = 0x00040000};

/* function */
class EncoderParameters { public: UINT Count; EncoderParameter Parameter[1];};
class BitmapData {
  public:
  UINT Width;
  UINT Height;
  INT Stride;
  PixelFormat PixelFormat;
  VOID* Scan0;
  UINT_PTR Reserved;
};
class ImageCodecInfo {
  public:
  CLSID Clsid;
  GUID FormatID;
  const WCHAR* CodecName;
  const WCHAR* DllName;
  const WCHAR* FormatDescription;
  const WCHAR* FilenameExtension;
  const WCHAR* MimeType;
  DWORD Flags;
  DWORD Version;
  DWORD SigCount;
  DWORD SigSize;
  const BYTE* SigPattern;
  const BYTE* SigMask;
};

#endif /* _GDIPLUS_ */
