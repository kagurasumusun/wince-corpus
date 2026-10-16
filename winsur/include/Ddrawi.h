/* Ddrawi.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 80 declarations, 47 outlines, 0 base types, 0 extra macros, 17 extra decls
 */
#ifndef _DDRAWI_
#define _DDRAWI_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* DDHAL_ADDATTACHEDSURFACEDATA  [struct, typedef; ce-only] */

/* DDHAL_BLTDATA  [struct, typedef; ce-only] */

/* DDHAL_CANCREATEVPORTDATA  [struct, typedef; ce-only] */

/* DDHAL_CREATEPALETTEDATA  [struct; ce-only] */

/* DDHAL_CREATEVPORTDATA  [struct, typedef; ce-only] */

/* DDHAL_DDMISCELLANEOUS2CALLBACKS  [struct; ce-only] */

/* DDHAL_DDPALETTECALLBACKS  [struct; ce-only] */

/* DDHAL_DDVIDEOPORTCALLBACKS  [struct; ce-only] */

/* DDHAL_DESTROYDRIVERDATA  [struct; ce-only] */

/* DDHAL_DESTROYPALETTEDATA  [struct, typedef; ce-only] */

/* DDHAL_DESTROYVPORTDATA  [struct, typedef; ce-only] */

/* DDHAL_FLIPTOGDISURFACEDATA  [struct; ce-only] */

/* DDHAL_FLIPVPORTDATA  [struct, typedef; ce-only] */

/* DDHAL_GETHEAPALIGNMENTDATA  [struct; ce-only] */

/* DDHAL_GETVPORTBANDWIDTHDATA  [struct, typedef; ce-only] */

/* DDHAL_GETVPORTCONNECTDATA  [struct, typedef; ce-only] */

/* DDHAL_GETVPORTFIELDDATA  [struct, typedef; ce-only] */

/* DDHAL_GETVPORTFLIPSTATUSDATA  [struct, typedef; ce-only] */

/* DDHAL_GETVPORTINPUTFORMATDATA  [struct, typedef; ce-only] */

/* DDHAL_GETVPORTLINEDATA  [struct, typedef; ce-only] */

/* DDHAL_GETVPORTOUTPUTFORMATDATA  [struct, typedef; ce-only] */

/* DDHAL_GETVPORTSIGNALDATA  [struct, typedef; ce-only] */

/* DDHAL_SETCLIPLISTDATA  [struct, typedef; ce-only] */

/* DDHAL_SETENTRIESDATA  [struct, typedef; ce-only] */

/* DDHAL_SETEXCLUSIVEMODEDATA  [struct; ce-only] */

/* DDHAL_SETMODEDATA  [struct; ce-only] */

/* DDHAL_SETPALETTEDATA  [struct, typedef; ce-only] */

/* DDHAL_UPDATENONLOCALHEAPDATA  [struct; ce-only] */

/* DDHAL_UPDATEVPORTDATA  [struct, typedef; ce-only] */

/* DDHAL_VPORTCOLORDATA  [struct, typedef; ce-only] */

/* DDHAL_WAITFORVPORTSYNCDATA  [struct, typedef; ce-only] */

/* DDNONLOCALVIDMEMCAPS  [struct, typedef; ce-only] */

/* DDRAWI_DDRAWCLIPPER_INT  [struct; ce-only] */

/* DDRAWI_DDRAWCLIPPER_LCL  [struct; ce-only] */

/* DDRAWI_DDRAWPALETTE_GBL  [struct, typedef; ce-only] */

/* DDRAWI_DDRAWPALETTE_INT  [struct, typedef; ce-only] */

/* DDRAWI_DDRAWPALETTE_LCL  [struct, typedef; ce-only] */

/* DDRAWI_DDRAWSURFACE_GBL  [struct, typedef; ce-only] */

/* DDRAWI_DDRAWSURFACE_GBL_MORE  [struct, typedef; ce-only] */

/* DDRAWI_DDRAWSURFACE_INT  [struct, typedef; ce-only] */

/* DDRAWI_DDRAWSURFACE_MORE  [struct, typedef; ce-only] */

/* DDRAWI_DDVIDEOPORT_INT  [struct, typedef; ce-only] */

/* DDRAWI_DDVIDEOPORT_LCL  [struct, typedef; ce-only] */

/* DDRAWI_DIRECTDRAW_GBL  [struct; ce-only] */

/* DDRAWI_DIRECTDRAW_INT  [struct; ce-only] */

/* DDRAWI_DIRECTDRAW_LCL  [struct; ce-only] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* DDCORECAPS  [struct, typedef; shared] */
/* DERIVED member outline -- documented order, types/offsets not stated */
/*   dwSize */
/*   dwCaps */
/*   dwCaps2 */
/*   dwCKeyCaps */
/*   dwFXCaps */
/*   dwFXAlphaCaps */
/*   dwPalCaps */
/*   dwSVCaps */
/*   dwAlphaBltConstBitDepths */
/*   dwAlphaBltPixelBitDepths */
/*   dwAlphaBltSurfaceBitDepths */
/*   dwAlphaOverlayConstBitDepths */
/*   dwAlphaOverlayPixelBitDepths */
/*   dwAlphaOverlaySurfaceBitDepths */
/*   dwZBufferBitDepths */
/*   dwVidMemTotal */
/*   dwVidMemFree */
/*   dwMaxVisibleOverlays */
/*   dwCurrVisibleOverlays */
/*   dwNumFourCCCodes */
/*   dwAlignBoundarySrc */
/*   dwAlignSizeSrc */
/*   dwAlignBoundaryDest */
/*   dwAlignSizeDest */
/*   dwAlignStrideAlign */
/*   dwRops */
/*   ddsCaps */
/*   dwMinOverlayStretch */
/*   dwMaxOverlayStretch */
/*   dwMinLiveVideoStretch */
/*   dwMaxLiveVideoStretch */
/*   dwMinHwCodecStretch */
/*   dwMaxHwCodecStretch */
/*   dwReserved1 */
/*   dwReserved2 */
/*   dwReserved3 */
/*   dwSVBCaps */
/*   dwSVBCKeyCaps */
/*   dwSVBFXCaps */
/*   dwSVBRops */
/*   dwVSBCaps */
/*   dwVSBCKeyCaps */
/*   dwVSBFXCaps */
/*   dwVSBRops */
/*   dwSSBCaps */
/*   dwSSBCKeyCaps */
/*   dwSSBFXCaps */
/*   dwSSBRops */
/*   dwMaxVideoPorts */
/*   dwCurrVideoPorts */
/*   dwSVBCaps2 */

#endif /* _DDRAWI_ */
