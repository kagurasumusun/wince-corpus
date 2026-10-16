/* Ddgpe.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 2 constants, 52 declarations, 0 outlines, 0 base types, 0 extra macros, 8 extra decls
 */
#ifndef _DDGPE_
#define _DDGPE_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400)) /* CE 3.0..399 */
#define ddgpePixelFormat_1bpp 0
#define ddgpePixelFormat_CustomFormat 0x1000
#endif /* _WIN32_WCE */

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 3.0..399, 5.0..699 */

/* GPEModeEx  [struct, macro; ce-only; CE 3.0..399, 5.0..699; Ddgpe.lib] */
#define GPEMODEEX_VERSION0(0)
#define GPEMODEEX_CURRENTVERSION(GPEMODEEX_VERSION0)
 struct GPEModeEx {
 GPEMode modeInfo; 
 DDGPEStandardHeader; 
 EDDGPEPixelFormat ePixelFormat; 
 DWORD dwPixelFourCC; 
 DWORD dwPixelFormatData; 
 LONG lPitch; 
 DWORD dwFlags; 
 DWORD dwRBitMask; 
 DWORD dwGBitMask; 
 DWORD dwBBitMask; 
 DWORD dwAlphaBitMask 
};
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 3.0..699 */

/* DDGPEAllocSurfaceData  [struct, macro; ce-only; CE 3.0..699; Ddgpe.lib] */
#define DDGPEALLOCSURFACEDATA_VERSION0(0)
#define DDGPEALLOCSURFACEDATA_CURRENTVERSION 
(DDGPEBLTPARMS_VERSION0)
struct DDGPEAllocSurfaceData{
 DDGPEStandardHeader; 
 DWORD dwCreateFlags; 
 int nWidth; 
 int nHeight; 
 int nStride; 
 int nSurfaceFlags; 
 unsigned char* pBits; 
 EGPEFormat gpeFormat; 
 EDDGPEPixelFormat* ddgpePixelFormat 
}

/* DDGPEBltParams  [struct, macro; ce-only; CE 3.0..699; Ddgpe.lib] */
#define DDGPEBLTPARMS_VERSION0(0)
#define DDGPEBLTPARMS_CURRENTVERSION(DDGPEBLTPARMS_VERSION0)
 struct DDGPEBltParms {
 GPEBltParms gpeBltParms; 
 DDGPEStandardHeader 
};

/* DDGPEStandardHeader  [macro; ce-only; CE 3.0..699; Ddgpe.lib] */
#define DDGPEStandardHeader\ 
DWORD dwSize;\ 
DWORD dwDriverSignature;\ 
DWORD dwVersion;\ 
DWORD dwReserved0;\ 
DWORD dwReserved1;\ 
DWORD dwReserved2;\ 
DWORDdwReserved3
#endif /* _WIN32_WCE */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 3.0..399, 5.0..699 */

/* EDDGPEPixelFormat  [enum; ce-only; CE 3.0..399, 5.0..699; Ddgpe.lib] */
typedef enum EDDGPEPixelFormat{
 ddgpePixelFormat_1bpp = 0,
 ddgpePixelFormat_2bpp, 
 ddgpePixelFormat_4bpp, 
 ddgpePixelFormat_8bpp, 
 ddgpePixelFormat_565, 
 ddgpePixelFormat_5551, 
 ddgpePixelFormat_4444, 
 ddgpePixelFormat_5550, 
 ddgpePixelFormat_8880, 
 ddgpePixelFormat_8888, 
 ddgpePixelFormat_YUYV422, 
 ddgpePixelFormat_UYVY422,
 ddgpePixelFormat_YV12,
 // some generic types
 // Use dwPixelFormatData in conjunction with this info
 ddgpePixelFormat_15bppGeneric, 
 ddgpePixelFormat_16bppGeneric, 
 ddgpePixelFormat_24bppGeneric, 
 ddgpePixelFormat_32bppGeneric, 
 ddgpePixelFormat_UnknownFormat,
 // you can assign custom formats starting with this value
 ddgpePixelFormat_CustomFormat = 0x1000
};
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 3.0..699 */

/* DDGPEDriverData  [struct; ce-only; CE 3.0..699; Ddgpe.lib] */
typedef struct DDGPEDriverData {
 DDGPEStandardHeader;
 DWORD dwDriverFlag
} DDGPEDriverData;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* DDGPE::AllocSurface  [function; ce-only; CE 4.0..699; Ddgpe.lib] */
// Surface memory allocation
virtual SCODE AllocSurface(
 DDGPESurf** ppSurf,
 int width,
 int height,
 EGPEFormat format,
 int surfaceFlags
)=0;
virtual SCODE AllocSurface(
 DDGPESurf** ppSurf,
 int width,
 int height,
 EGPEFormat format,
 EDDGPEPixelFormat pixelFormat,
 int surfaceFlags
);
virtual SCODE AllocSurface(
 DDGPESurf** ppSurf,
 DDGPEAllocSurfaceData* pddgpeAllocSurfaceData 
);

/* DDGPE::AllocVideoSurface  [function; ce-only; CE 4.0..699; Ddgpe.lib] */
virtual SCODE AllocVideoSurface(
 DDGPESurf** ppSurf,
 int width,
 int height,
 EGPEFormat format,
 EDDGPEPixelFormat pixelFormat,
 unsigned long* pOffsetInVideoMemory
);
virtual SCODE AllocVideoSurface(
 LPDDRAWI_DDRAWSURFACE_LCL lpDDSurface,
 int width,
 int height,
 EGPEFormat format,
 EDDGPEPixelFormat pixelFormat,
 unsigned long* pOffsetInVideoMemory
);
virtual SCODE AllocVideoSurface(
 DDGPESurf** ppSurf,
 DDGPEAllocSurfaceData* pddgpeAllocSurfaceData,
 unsigned long* pOffsetInVideoMemory
);
virtual SCODE AllocVideoSurface(
 LPDDRAWI_DDRAWSURFACE_LCL lpDDSurface,
 DDGPEAllocSurfaceData* pddgpeAllocSurfaceData,
 unsigned long* pOffsetInVideoMemory 
);

/* DDGPE::BltExpanded  [function; ce-only; CE 4.0..699; Ddgpe.lib] */
virtual SCODE BltExpanded(
 DDGPESurf* pDst,
 DDGPESurf* pSrc, 
 DDGPESurf* pPattern, 
 DDGPESurf* pMask, 
 CLIPOBJ* pco, 
 XLATEOBJ* pxlo, 
 CONST RECT* prclDst, 
 CONST RECT* prclSrc, 
 ULONG solidColor, 
 ULONG bltFlags, 
 ULONG rop4
);
virtual SCODE BltExpanded(
 DDGPESurf* pDst, 
 DDGPESurf* pSrc, 
 DDGPESurf* pPattern, 
 CONST RECT* prclDst, 
 CONST RECT* prclSrc, 
 ULONG solidColor, 
 ULONG bltFlags, 
 ULONG rop4 
);

/* DDGPE::BltPrepare  [function; ce-only; CE 4.0..699; Ddgpe.lib] */
virtual void BltPrepare(
 DDGPEBltParms* pddgpeBltParms
);

/* DDGPESurf::AlignedWidth  [function; ce-only; CE 4.0..699; Ddgpe.lib] */
virtual DWORD AlignedWidth();

/* DDGPESurf::Bpp  [function; ce-only; CE 4.0..699; Ddgpe.lib] */
virtual DWORD Bpp();

/* DDGPESurf::ColorKey  [function; ce-only; CE 4.0..699; Ddgpe.lib] */
virtual DWORD ColorKey();

/* DDGPESurf::ColorKeyHigh  [function; ce-only; CE 4.0..699; Ddgpe.lib] */
virtual DWORD ColorKeyHigh();

/* DDGPESurf::ColorKeyLow  [function; ce-only; CE 4.0..699; Ddgpe.lib] */
virtual DWORD ColorKeyLow();

/* DDGPESurf::ColorKeyMask  [function; ce-only; CE 4.0..699; Ddgpe.lib] */
virtual DWORD ColorKeyMask();

/* DDGPESurf::GetDriverGUID  [function; ce-only; CE 4.0..699; Ddgpe.lib] */
virtual GUID GetDriverGUID();

/* DDGPESurf::SetDriverData  [function; ce-only; CE 4.0..699; Ddgpe.lib] */
virtual void SetDriverData(
 DDGPEDriverData* pDriverData 
);

/* DDGPESurf::SetDriverGUID  [function; ce-only; CE 4.0..699; Ddgpe.lib] */
virtual void SetDriverGUID(
 GUID guidDriverGUID 
);

/* SurfaceHeap::Address  [function; ce-only; CE 4.0..699; Ddgpe.lib] */
ADDRESS Address();

/* SurfaceHeap::Alloc  [function; ce-only; CE 4.0..699; Ddgpe.lib] */
SurfaceHeap* Alloc(
 DWORD size 
);

/* SurfaceHeap::Available  [function; ce-only; CE 4.0..699; Ddgpe.lib] */
DWORD Available();
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* DDGPE::DetectMode  [function; ce-only; CE 5.0..699; Ddgpe.lib] */
virtual SCODE DetectMode(
 DWORD* dwModeID, 
 DWORD dwWidth, 
 DWORD dwHeight, 
 EGPEFormat format, 
 EDDGPEPixelFormat pixelFormat, 
 DDPIXELFORMAT* pDDPF = NULL 
);

/* DDGPE::DetectPixelFormat  [function; ce-only; CE 5.0..699; Ddgpe.lib] */
virtual SCODE DetectPixelFormat(
 DWORD dwCaps, 
 DDPIXELFORMAT* pDDPF, 
 EGPEFormat* pFormat, 
 EDDGPEPixelFormat* pPixelFormat 
);

/* DDGPE::GetDriverGUID  [function; ce-only; CE 5.0..699; Ddgpe.lib] */
virtual GUID GetDriverGUID();

/* DDGPE::GetModeInfoEx  [function; ce-only; CE 5.0..699; Ddgpe.lib] */
virtual SCODE GetModeInfoEx(
 GPEModeEx* pModeEx,
 int modeNo 
);

/* DDGPE::GetPhysicalModeId  [function; ce-only; CE 5.0..699; Ddgpe.lib] */
virtual DWORD GetPhysicalModeId();

/* DDGPE::InDisplay  [function; ce-only; CE 5.0..699; Ddgpe.lib] */
virtual int InDisplay();

/* DDGPE::PerformBlt  [function; ce-only; CE 5.0..699; Ddgpe.lib] */
virtual SCODE PerformBlt(
 DDGPEBltParms* pddgpeBltParms 
);

/* DDGPE::SetDriverData  [function; ce-only; CE 5.0..699; Ddgpe.lib] */
virtual void SetDriverData(
 DDGPEDriverData* pDriverData 
);

/* DDGPE::SetDriverGUID  [function; ce-only; CE 5.0..699; Ddgpe.lib] */
virtual void SetDriverGUID (
 GUID guidDriverGUID 
);

/* DDGPE::SetMode  [function; ce-only; CE 5.0..699; Ddgpe.lib] */
virtual SCODE SetMode(
 int modeNo,
 HPALETTE* pPalette,
 BOOL bChangeGDISurfaceMode 
);

/* DDGPE::SetVisibleSurface  [function; ce-only; CE 5.0..699; Ddgpe.lib] */
virtual void SetVisibleSurface(
 GPESurf* pSurf,
 BOOL bWaitForVBlank = FALSE
);
virtual void SetVisibleSurface(
 GPESurf* pSurf,
 DWORD dwData,
 BOOL bWaitForVBlank = FALSE 
);

/* DDGPE::WrapSurface  [function; ce-only; CE 5.0..699; Ddgpe.lib] */
virtual SCODE WrapSurface(
 LPDDRAWI_DDRAWSURFACE_LCL lpDDSurface, 
 int width, 
 int height, 
 EGPEFormat format, 
 EDDGPEPixelFormat pixelFormat, 
 int stride, 
 int surfaceFlags
);
virtual SCODE WrapSurface(
 DDGPESurf** ppSurf, 
 int width, 
 int height, 
 EGPEFormat format, 
 EDDGPEPixelFormat pixelFormat, 
 unsigned char* pBits, 
 int stride
);
virtual SCODE WrapSurface(
 LPDDRAWI_DDRAWSURFACE_LCL lpDDSurface, 
 int width, 
 int height, 
 EGPEFormat format, 
 EDDGPEPixelFormat pixelFormat, 
 unsigned char* pBits, 
 int stride
);
virtual SCODE WrapSurface(
 DDGPESurf** ppSurf, 
 DDGPEAllocSurfaceData* pddgpeAllocSurfaceData
);
virtual SCODE WrapSurface(
 LPDDRAWI_DDRAWSURFACE_LCL lpDDSurface, 
 DDGPEAllocSurfaceData* pddgpeAllocSurfaceData 
);

/* DDGPESurf::DeleteSurface  [function; ce-only; CE 5.0..699; Ddgpe.lib] */
static void DeleteSurface(
 LPDDRAWI_DDRAWSURFACE_LCL lpDDSurface 
);

/* DDGPESurf::GetDirectDrawSurface  [function; ce-only; CE 5.0..699; Ddgpe.lib] */
virtual LPDDRAWI_DDRAWSURFACE_LCL GetDirectDrawSurface();

/* DDGPESurf::HasAlpha  [function; ce-only; CE 5.0..699; Ddgpe.lib] */
virtual BOOL HasAlpha();

/* DDGPESurf::Init  [function; ce-only; CE 5.0..699; Ddgpe.lib] */
virtual void Init(
 int width, 
 int height, 
 void* pBits, 
 int stride, 
 EGPEFormat format, 
 EDDGPEPixelFormat pixelFormat 
);

/* DDGPESurf::PixelFormat  [function; ce-only; CE 5.0..699; Ddgpe.lib] */
virtual EDDGPEPixelFormat PixelFormat();

/* DDGPESurf::SetColorKey  [function; ce-only; CE 5.0..699; Ddgpe.lib] */
virtual void SetColorKey(
 DWORD dwColorKey 
);

/* DDGPESurf::SetColorKeyHigh  [function; ce-only; CE 5.0..699; Ddgpe.lib] */
virtual void SetColorKeyHigh(
 DWORD dwColorKey 
);

/* DDGPESurf::SetColorKeyLow  [function; ce-only; CE 5.0..699; Ddgpe.lib] */
virtual void SetColorKeyLow(
 DWORD dwColorKey 
);

/* DDGPESurf::SetColorKeyMask  [function; ce-only; CE 5.0..699; Ddgpe.lib] */
virtual void SetColorKeyMask(
 DWORD dwColorKeyMask 
);

/* DDGPESurf::SetDDGPESurf  [function; ce-only; CE 5.0..699; Ddgpe.lib] */
virtual void SetDDGPESurf(
 LPDDRAWI_DDRAWSURFACE_LCL lpDDSurface 
);

/* DDGPESurf::SetDirectDrawSurface  [function; ce-only; CE 5.0..699; Ddgpe.lib] */
virtual void SetDirectDrawSurface(
 LPDDRAWI_DDRAWSURFACE_LCL lpDDSurface 
);

/* SurfaceHeap::Free  [function; ce-only; CE 5.0..699; Ddgpe.lib] */
void Free();

/* SurfaceHeap::NodeSize  [?; ce-only; CE 5.0..699; Ddgpe.lib] */
DWORD NodeSize(void};

/* SurfaceHeap::Size  [function; ce-only; CE 5.0..699; Ddgpe.lib] */
DWORD Size();
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* DDGPE::AllocBackBuffer  [function; ce-only; CE 6.0..699; Ddgpe.lib] */
virtual SCODE AllocBackBuffer(
 LPDDRAWI_DDRAWSURFACE_LCL lpDDSurface
);

/* DDGPESurf::SetOverlay  [function; ce-only; CE 6.0..699; Ddgpe.lib] */
void SetOverlay();

/* DDGPESurf::SetRotation  [function; ce-only; CE 6.0..699; Ddgpe.lib] */
void SetRotation(
 int width,
 int height,
 int iRotate
);

/* DDGPESurf::SurfaceSize  [function; ce-only; CE 6.0..699; Ddgpe.lib] */
virtual int SurfaceSize();
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* enum */
enum EDDGPEPixelFormat
{
  ddgpePixelFormat_1bpp = 0,
  ddgpePixelFormat_2bpp,
  ddgpePixelFormat_4bpp,
  ddgpePixelFormat_8bpp,
  ddgpePixelFormat_565,
  ddgpePixelFormat_5551,
  ddgpePixelFormat_4444,
  ddgpePixelFormat_5550,
  ddgpePixelFormat_8880,
  ddgpePixelFormat_8888,
  ddgpePixelFormat_YUYV422,
  ddgpePixelFormat_UYVY422,
  ddgpePixelFormat_15bppGeneric,
  ddgpePixelFormat_16bppGeneric,
  ddgpePixelFormat_24bppGeneric,
  ddgpePixelFormat_32bppGeneric,
  ddgpePixelFormat_UnknownFormat,
  ddgpePixelFormat_CustomFormat = 0x1000
};

/* struct */
#define DDGPEALLOCSURFACEDATA_VERSION0(0)
#define DDGPEALLOCSURFACEDATA_CURRENTVERSION \
(DDGPEBLTPARMS_VERSION0)
struct DDGPEAllocSurfaceData
{
  DDGPEStandardHeader;
  DWORD dwCreateFlags;
  int nWidth;
  int nHeight;
  int nStride;
  int nSurfaceFlags;
  unsigned char *pBits;
  EGPEFormat gpeFormat;
  EDDGPEPixelFormat *ddgpePixelFormat;
};
#define GPEMODEEX_VERSION0(0)
#define GPEMODEEX_CURRENTVERSION(GPEMODEEX_VERSION0)
struct GPEModeEx
{
  GPEMode modeInfo;
  DDGPEStandardHeader;
  EDDGPEPixelFormat ePixelFormat;
  DWORD dwPixelFourCC
  DWORD dwPixelFormatData;
  LONG lPitch;
  DWORD dwFlags;
  DWORD dwRBitMask;
  DWORD dwGBitMask;
  DWORD dwBBitMask;
  DWORD dwAlphaBitMask;
};

/* function */
virtual SCODE AllocBackBuffer( LPDDRAWI_DDRAWSURFACE_LCL lpDDSurface );
virtual LPDDRAWI_DDRAWSURFACE_LCL GetDirectDrawSurface(void);
void SetOverlay();
void SetRotation( int width, int height, int iRotate );
int SurfaceSize();

#endif /* _DDGPE_ */
