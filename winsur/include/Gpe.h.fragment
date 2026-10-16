/* Gpe.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 14 declarations, 0 outlines, 0 base types, 0 extra macros, 10 extra decls
 */
#ifndef _GPE_
#define _GPE_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 3.0..699 */

/* GPEBltParms  [struct; ce-only; CE 3.0..699] */
struct GPEBltParms {
 SCODE (GPE::* pBlt)(GPEBltParms* );
 GPESurf* pDst;
 GPESurf* pSrc;
 GPESurf* pMask;
 GPESurf* pBrush;
 RECTL* prclDst;
 RECTL* prclSrc;
 RECTL* prclClip;
 COLOR solidColor;
 unsigned long bltFlags;
 ROP4 rop4;
 RECTL* prclMask;
 POINTL* pptlBrush;
 int xPositive;
 int yPositive;
 unsigned long* pLookup; 
 unsigned long (ColorConverter::* pConvert)(unsigned long);
 ColorConverter* pColorConverter;
 int iMode;
 BLENDFUNCTION blendFunction;
 GenBltSignature bltSig;
};

/* GPELineParms  [struct; ce-only; CE 3.0..699] */
struct GPELineParms {
 SCODE (GPE::* pLine)(GPELineParms* );
 long xStart;
 long yStart;
 int cPels;
 unsigned long dM;
 unsigned long dN;
 long llGamma;
 int iDir;
 unsigned long style;
 int styleState;
 GPESurf* pDst;
 COLOR solidColor;
 RECTL* prclClip;
 unsigned short mix;
};
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* GPEMode  [struct; ce-only; CE 5.0..699] */
struct GPEMode {
 int modeId;
 int width;
 int height;
 int Bpp;
 int frequency;
 EGPEFormat format;
};
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 200 && _WIN32_WCE < 210) || (_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 2.0..209, 2.11..2.12, 3.0..699 */

/* GPE::AllocSurface  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Gpe_lib.lib] */
SCODE GPE::AllocSurface( 
 GPESurf** ppSurf, 
 int width, 
 int height, 
 EGPEFormat format, 
 int surfaceFlags 
);

/* GPE::GetModeInfo  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Gpe_lib.lib] */
virtual SCODE GetModeInfo( 
 GPEMode* pMode, 
 int modeNo 
);

/* GPE::MovePointer  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Gpe_lib.lib] */
SCODE GPE::MovePointer( 
 int x, 
 int y 
);

/* GPE::NumModes  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Gpe_lib.lib] */
virtual int NumModes();

/* GPE::SetMode  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Gpe_lib.lib] */
virtual SCODE SetMode( 
 int modeID,
 HPALLETE* palette
);

/* GPE::SetPointerShape  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Gpe_lib.lib] */
SCODE GPE::SetPointerShape( 
 GPESurf* pMask, 
 GPESurf* pColorSurf, 
 int xHot, 
 int yHot, 
 int cx, 
 int cy 
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* GetGPE  [function; ce-only; CE 4.0..699; Gpe_lib.lib] */
GPE* GetGPE(void);

/* GPEEnableDriver  [function; ce-only; CE 4.0..699; Gpe_lib.lib] */
BOOL APIENTRY GPEEnableDriver(
 ULONG iEngineVersion,
 ULONG cj,
 DRVENABLEDATA* pded,
 PENGCALLBACKS pEngCallbacks
);

/* GPESurf::GPESurf  [function; ce-only; CE 4.0..699; Gpe_lib.lib] */
GPESurf::GPESurf(
 int width,
 int height,
 EGPEFormat format
);

/* GPESurf::Init  [function; ce-only; CE 4.0..699; Gpe_lib.lib] */
void GPESurf::Init(
 int width,
 int height,
 void* pBits,
 int stride,
 EGPEFormat format
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* ContrastControl  [function; ce-only; CE 6.0..699; Gpe_lib.lib] */
BOOL ContrastControl(
 ULONG cmd,
 ULONG * pValue
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
struct GPEBltParms {SCODE (GPE::* pBlt)(GPEBltParms* );GPESurf* pDst;GPESurf* pSrc;GPESurf* pMask;GPESurf* pBrush;RECTL* prclDst;RECTL* prclSrc;RECTL* prclClip;COLOR solidColor;unsigned long bltFlags;ROP4 rop4;RECTL* prclMask;POINTL* pptlBrush;int xPositive;int yPositive;unsigned long* pLookup;unsigned long (ColorConverter::* pConvert)(unsigned long);ColorConverter* pColorConverter; int iMode; BLENDFUNCTION blendFunction; GenBltSignature bltSig;};
struct GPEMode {int modeId;int width;int height;int Bpp;int frequency;EGPEFormat format;};
struct GPELineParms {
  SCODE (GPE::*pLine)(GPELineParms *);
  long xStart;
  long yStart;
  int cPels;
  unsigned long dM;
  unsigned long dN;
  long llGamma;
  int iDir;
  unsigned long style;
  int styleState;
  GPESurf *pDst;
  COLOR solidColor;
  RECTL *prclClip;
  unsigned short mix;
};
struct GPEBltParms {
  SCODE (GPE::*pBlt)(GPEBltParms *);
  GPESurf *pDst;
  GPESurf *pSrc;
  GPESurf *pMask;
  GPESurf *pBrush;
  RECTL *prclDst;
  RECTL *prclSrc;
  RECTL *prclClip;
  COLOR solidColor;
  unsigned long bltFlags;
  ROP4 rop4;
  RECTL *prclMask;
  POINTL *pptlBrush;
  int xPositive;
  int yPositive;
  unsigned long *pLookup;
  unsigned long (ColorConverter::*pConvert)(unsigned long);
  ColorConverter *pColorConverter;
};
struct GPELineParms {SCODE(GPE::* pLine)(GPELineParms* );long xStart;long yStart;int cPels;unsigned long dM;unsigned long dN;long llGamma;int iDir;unsigned long style;int styleState;GPESurf* pDst;COLOR solidColor;RECTL* prclClip;unsigned shortmix; };

/* function */
SCODE GPE::AllocSurface(  GPESurf **ppSurf,  int width,  int height,  EGPEFormat format,  int surfaceFlags );
GPESurf::GPESurf( int width, int height, EGPEFormat format);
SCODE GPE::MovePointer(  int x,  int y );
int NumModes();
SCODE GPE::SetPointerShape(  GPESurf *pMask,  GPESurf *pColorSurf,  int xHot,  int yHot,  int cx,  int cy );

#endif /* _GPE_ */
