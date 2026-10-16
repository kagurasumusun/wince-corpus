/* Winddi.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 52 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _WINDDI_
#define _WINDDI_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 200 && _WIN32_WCE < 210) || (_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 2.0..209, 2.11..2.12, 3.0..699 */

/* DrvCopyBits  [function; shared; CE 2.0..209, 2.11..2.12, 3.0..699; Ddi_ati_lib.lib, Ddi_flat_lib.lib, Ddi_gx_lib.lib, Ddi_mq200_lib.lib, Ddi_nop_lib.lib, Ddi_perm3_lib.lib, Ddi_rflat_lib.lib, Ddi_rgx_lib.lib, Ddi_tvia5_lib.lib] */
BOOL DrvCopyBits(
 SURFOBJ* psoDst,
 SURFOBJ* psoSrc,
 CLIPOBJ* pco,
 XLATEOBJ* pxlo,
 RECTL* prclDst,
 POINTL* pptlSrc 
);

/* DrvDisablePDEV  [function; shared; CE 2.0..209, 2.11..2.12, 3.0..699; Ddi_ati_lib.lib, Ddi_flat_lib.lib, Ddi_gx_lib.lib, Ddi_mq200_lib.lib, Ddi_nop_lib.lib, Ddi_perm3_lib.lib, Ddi_rflat_lib.lib, Ddi_rgx_lib.lib, Ddi_tvia5_lib.lib] */
VOID DrvDisablePDEV(
 DHPDEV dhpdev 
);

/* DrvDisableSurface  [function; shared; CE 2.0..209, 2.11..2.12, 3.0..699; Ddi_ati_lib.lib, Ddi_flat_lib.lib, Ddi_gx_lib.lib, Ddi_mq200_lib.lib, Ddi_nop_lib.lib, Ddi_perm3_lib.lib, Ddi_rflat_lib.lib, Ddi_rgx_lib.lib, Ddi_tvia5_lib.lib] */
VOID DrvDisableSurface(
 DHPDEV dhpdev 
);

/* DrvEnableDriver  [function; shared; CE 2.0..209, 2.11..2.12, 3.0..699; Ddi_ati_lib.lib, Ddi_flat_lib.lib, Ddi_gx_lib.lib, Ddi_mq200_lib.lib, Ddi_nop_lib.lib, Ddi_perm3_lib.lib, Ddi_rflat_lib.lib, Ddi_rgx_lib.lib, Ddi_tvia5_lib.lib] */
BOOL APIENTRY DrvEnableDriver(
 ULONG iEngineVersion,
 ULONG cj,
 DRVENABLEDATA* pded,
 PENGCALLBACKS pEngCallbacks
);

/* DrvEnableSurface  [function; shared; CE 2.0..209, 2.11..2.12, 3.0..699; Ddi_ati_lib.lib, Ddi_flat_lib.lib, Ddi_gx_lib.lib, Ddi_mq200_lib.lib, Ddi_nop_lib.lib, Ddi_perm3_lib.lib, Ddi_rflat_lib.lib, Ddi_rgx_lib.lib, Ddi_tvia5_lib.lib] */
HSURF DrvEnableSurface(
 DHPDEV dhpdev 
);

/* DrvEndDoc  [function; shared; CE 2.0..209, 2.11..2.12, 3.0..699] */
BOOL DrvEndDoc(
 SURFOBJ* pso,
 FLONG fl 
);

/* DrvGetModes  [function; shared; CE 2.0..209, 2.11..2.12, 3.0..699; Ddi_ati_lib.lib, Ddi_flat_lib.lib, Ddi_gx_lib.lib, Ddi_mq200_lib.lib, Ddi_nop_lib.lib, Ddi_perm3_lib.lib, Ddi_rflat_lib.lib, Ddi_rgx_lib.lib, Ddi_tvia5_lib.lib] */
ULONG DrvGetModes(
 HANDLE hDriver,
 ULONG cjSize,
 DEVMODEW* pdm 
);

/* DrvStartDoc  [function; shared; CE 2.0..209, 2.11..2.12, 3.0..699] */
BOOL DrvStartDoc(
 SURFOBJ* pso,
 PWSTR pwszDocName,
 DWORD dwJobId 
);

/* DrvStartPage  [function; shared; CE 2.0..209, 2.11..2.12, 3.0..699] */
BOOL DrvStartPage(
 SURFOBJ* pso 
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 3.0..699 */

/* DrvEnablePDEV  [function; shared; CE 3.0..699; Ddi_ati_lib.lib, Ddi_flat_lib.lib, Ddi_gx_lib.lib, Ddi_mq200_lib.lib, Ddi_nop_lib.lib, Ddi_perm3_lib.lib, Ddi_rflat_lib.lib, Ddi_rgx_lib.lib, Ddi_tvia5_lib.lib] */
DHPDEV APIENTRY DrvEnablePDEV(
 DEVMODEW* pdm,
 LPWSTR pwszLogAddress,
 ULONG cPat,
 HSURF* phsurfPatterns,
 ULONG cjCaps,
 ULONG* pdevcaps,
 ULONG cjDevInfo,
 DEVINFO* pdi,
 HDEV hdev,
 LPWSTR pwszDeviceName,
 HANDLE hDriver 
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* DisplayInit  [function; ce-only; CE 4.0..699; Ddi_ati_lib.lib, Ddi_flat_lib.lib, Ddi_gx_lib.lib, Ddi_mq200_lib.lib, Ddi_nop_lib.lib, Ddi_perm3_lib.lib, Ddi_rflat_lib.lib, Ddi_rgx_lib.lib, Ddi_tvia5_lib.lib] */
BOOL APIENTRY DisplayInit(
 LPCTSTR pszInstance, 
 DWORD dwNumMonitors
);

/* DrvAnyBlt  [function; ce-only; CE 4.0..699; Ddi_ati_lib.lib, Ddi_flat_lib.lib, Ddi_gx_lib.lib, Ddi_mq200_lib.lib, Ddi_nop_lib.lib, Ddi_perm3_lib.lib, Ddi_rflat_lib.lib, Ddi_rgx_lib.lib, Ddi_tvia5_lib.lib] */
BOOL DrvAnyBlt(
 SURFOBJ* psoDst,
 SURFOBJ* psoSrc,
 SURFOBJ* psoMask,
 CLIPOBJ* pco,
 XLATEOBJ* pxlo,
 POINTL* pptlHTOrg,
 RECTL* prclDst,
 POINTL* pptlSrc,
 POINTL* pptlMask,
 BRUSHOBJ* pbo,
 POINTL* pptlBrush,
 ROP4 rop4,
 ULONG iMode,
 ULONG bltFlags
);

/* DrvBitBlt  [function; shared; CE 4.0..699; Ddi_ati_lib.lib, Ddi_flat_lib.lib, Ddi_gx_lib.lib, Ddi_mq200_lib.lib, Ddi_nop_lib.lib, Ddi_perm3_lib.lib, Ddi_rflat_lib.lib, Ddi_rgx_lib.lib, Ddi_tvia5_lib.lib] */
BOOL DrvBitBlt(
 SURFOBJ* psoTrg,
 SURFOBJ* psoSrc,
 SURFOBJ* psoMask,
 CLIPOBJ* pco,
 XLATEOBJ* pxlo,
 RECTL* prclTrg,
 POINTL* pptlSrc,
 POINTL* pptlMask,
 BRUSHOBJ* pbo,
 POINTL* pptlBrush,
 ROP4 rop4
);

/* DrvCreateDeviceBitmap  [function; shared; CE 4.0..699; Ddi_ati_lib.lib, Ddi_flat_lib.lib, Ddi_gx_lib.lib, Ddi_mq200_lib.lib, Ddi_nop_lib.lib, Ddi_perm3_lib.lib, Ddi_rflat_lib.lib, Ddi_rgx_lib.lib, Ddi_tvia5_lib.lib] */
HBITMAP DrvCreateDeviceBitmap(
 DHPDEV dhpdev,
 SIZEL sizl,
 ULONG iFormat
);

/* DrvDeleteDeviceBitmap  [function; shared; CE 4.0..699; Ddi_ati_lib.lib, Ddi_flat_lib.lib, Ddi_gx_lib.lib, Ddi_mq200_lib.lib, Ddi_nop_lib.lib, Ddi_perm3_lib.lib, Ddi_rflat_lib.lib, Ddi_rgx_lib.lib, Ddi_tvia5_lib.lib] */
VOID DrvDeleteDeviceBitmap(
 DHSURF dhsurf
);

/* DrvDisableDriver  [function; shared; CE 4.0..699; Ddi_ati_lib.lib, Ddi_flat_lib.lib, Ddi_gx_lib.lib, Ddi_mq200_lib.lib, Ddi_nop_lib.lib, Ddi_perm3_lib.lib, Ddi_rflat_lib.lib, Ddi_rgx_lib.lib, Ddi_tvia5_lib.lib] */
VOID DrvDisableDriver(VOID);

/* DrvEscape  [function; shared; CE 4.0..699; Ddi_ati_lib.lib, Ddi_flat_lib.lib, Ddi_gx_lib.lib, Ddi_mq200_lib.lib, Ddi_nop_lib.lib, Ddi_perm3_lib.lib, Ddi_rflat_lib.lib, Ddi_rgx_lib.lib, Ddi_tvia5_lib.lib] */
ULONG DrvEscape(
 DHPDEV dhpdev,
 SURFOBJ* pso,
 ULONG iEsc,
 ULONG cjIn,
 PVOID pvIn,
 ULONG cjOut,
 PVOID pvOut
);

/* DrvFillPath  [function; shared; CE 4.0..699; Ddi_ati_lib.lib, Ddi_flat_lib.lib, Ddi_gx_lib.lib, Ddi_mq200_lib.lib, Ddi_nop_lib.lib, Ddi_perm3_lib.lib, Ddi_rflat_lib.lib, Ddi_rgx_lib.lib, Ddi_tvia5_lib.lib] */
BOOL DrvFillPath(
 SURFOBJ* pso,
 PATHOBJ* ppo,
 CLIPOBJ* pco,
 BRUSHOBJ* pbo,
 POINTL* pptlBrushOrg,
 MIX mix,
 FLONG flOptions
);

/* DrvGetMasks  [function; ce-only; CE 4.0..699; Ddi_ati_lib.lib, Ddi_flat_lib.lib, Ddi_gx_lib.lib, Ddi_mq200_lib.lib, Ddi_nop_lib.lib, Ddi_perm3_lib.lib, Ddi_rflat_lib.lib, Ddi_rgx_lib.lib, Ddi_tvia5_lib.lib] */
ULONG * DrvGetMasks (
 DHPDEV dhpdev
);

/* DrvGradientFill  [function; shared; CE 4.0..699; Ddi_ati_lib.lib, Ddi_flat_lib.lib, Ddi_gx_lib.lib, Ddi_mq200_lib.lib, Ddi_nop_lib.lib, Ddi_perm3_lib.lib, Ddi_rflat_lib.lib, Ddi_rgx_lib.lib, Ddi_tvia5_lib.lib] */
BOOL DrvGradientFill(
 SURFOBJ* pso,
 CLIPOBJ* pco,
 XLATEOBJ* pxlo,
 TRIVERTEX* pVertex,
 ULONG nVertex,
 PVOID pMesh,
 ULONG nMesh,
 RECTL* prclExtents,
 POINTL* pptlDitherOrg, 
 ULONG ulMode
);

/* DrvMovePointer  [function; shared; CE 4.0..699; Ddi_ati_lib.lib, Ddi_flat_lib.lib, Ddi_gx_lib.lib, Ddi_mq200_lib.lib, Ddi_nop_lib.lib, Ddi_perm3_lib.lib, Ddi_rflat_lib.lib, Ddi_rgx_lib.lib, Ddi_tvia5_lib.lib] */
VOID DrvMovePointer(
 SURFOBJ* pso,
 LONG x,
 LONG y,
 RECTL* prcl
);

/* DrvPaint  [function; shared; CE 4.0..699; Ddi_ati_lib.lib, Ddi_flat_lib.lib, Ddi_gx_lib.lib, Ddi_mq200_lib.lib, Ddi_nop_lib.lib, Ddi_perm3_lib.lib, Ddi_rflat_lib.lib, Ddi_rgx_lib.lib, Ddi_tvia5_lib.lib] */
BOOL DrvPaint(
 SURFOBJ* pso,
 CLIPOBJ* pco,
 BRUSHOBJ* pbo,
 POINTL* pptlBrushOrg,
 MIX mix
);

/* DrvPowerHandler  [function; ce-only; CE 4.0..699; Ddi_ati_lib.lib, Ddi_flat_lib.lib, Ddi_gx_lib.lib, Ddi_mq200_lib.lib, Ddi_nop_lib.lib, Ddi_perm3_lib.lib, Ddi_rflat_lib.lib, Ddi_rgx_lib.lib, Ddi_tvia5_lib.lib] */
VOID DrvPowerHandler(
 DHPDEV dhpdev,
 BOOL bOff,
);

/* DrvRealizeBrush  [function; shared; CE 4.0..699; Ddi_ati_lib.lib, Ddi_flat_lib.lib, Ddi_gx_lib.lib, Ddi_mq200_lib.lib, Ddi_nop_lib.lib, Ddi_perm3_lib.lib, Ddi_rflat_lib.lib, Ddi_rgx_lib.lib, Ddi_tvia5_lib.lib] */
BOOL DrvRealizeBrush(
 BRUSHOBJ* pbo,
 SURFOBJ* psoTarget,
 SURFOBJ* psoPattern,
 SURFOBJ* psoMask,
 XLATEOBJ* pxlo,
 ULONG iHatch
);

/* DrvRealizeColor  [function; ce-only; CE 4.0..699; Ddi_ati_lib.lib, Ddi_flat_lib.lib, Ddi_gx_lib.lib, Ddi_mq200_lib.lib, Ddi_nop_lib.lib, Ddi_perm3_lib.lib, Ddi_rflat_lib.lib, Ddi_rgx_lib.lib, Ddi_tvia5_lib.lib] */
ULONG DrvRealizeColor(
 USHORT iDstType,
 ULONG cEntries,
 ULONG* pPalette,
 ULONG rgbColor
);

/* DrvSetPalette  [function; shared; CE 4.0..699; Ddi_ati_lib.lib, Ddi_flat_lib.lib, Ddi_gx_lib.lib, Ddi_mq200_lib.lib, Ddi_nop_lib.lib, Ddi_perm3_lib.lib, Ddi_rflat_lib.lib, Ddi_rgx_lib.lib, Ddi_tvia5_lib.lib] */
BOOL DrvSetPalette(
 DHPDEV dhpdev,
 PALOBJ* ppalo,
 FLONG fl,
 ULONG iStart,
 ULONG cColors
);

/* DrvSetPointerShape  [function; shared; CE 4.0..699; Ddi_ati_lib.lib, Ddi_flat_lib.lib, Ddi_gx_lib.lib, Ddi_mq200_lib.lib, Ddi_nop_lib.lib, Ddi_perm3_lib.lib, Ddi_rflat_lib.lib, Ddi_rgx_lib.lib, Ddi_tvia5_lib.lib] */
ULONG DrvSetPointerShape(
 SURFOBJ* pso,
 SURFOBJ* psoMask,
 SURFOBJ* psoColor,
 XLATEOBJ* pxlo,
 LONG xHot,
 LONG yHot,
 LONG x,
 LONG y,
 RECTL* prcl,
 FLONG fl
);

/* DrvStrokePath  [function; shared; CE 4.0..699; Ddi_ati_lib.lib, Ddi_flat_lib.lib, Ddi_gx_lib.lib, Ddi_mq200_lib.lib, Ddi_nop_lib.lib, Ddi_perm3_lib.lib, Ddi_rflat_lib.lib, Ddi_rgx_lib.lib, Ddi_tvia5_lib.lib] */
BOOL DrvStrokePath(
 SURFOBJ* pso,
 PATHOBJ* ppo,
 CLIPOBJ* pco,
 XFORMOBJ* pxo,
 BRUSHOBJ* pbo,
 POINTL* pptlBrushOrg,
 LINEATTRS* plineattrs,
 MIX mix
);

/* DrvTransparentBlt  [function; shared; CE 4.0..699; Ddi_ati_lib.lib, Ddi_flat_lib.lib, Ddi_gx_lib.lib, Ddi_mq200_lib.lib, Ddi_nop_lib.lib, Ddi_perm3_lib.lib, Ddi_rflat_lib.lib, Ddi_rgx_lib.lib, Ddi_tvia5_lib.lib] */
BOOL DrvTransparentBlt(
 SURFOBJ* psoDst,
 SURFOBJ* psoSrc,
 CLIPOBJ* pco,
 XLATEOBJ* pxlo,
 RECTL* prclDst,
 RECTL* prclSrc,
 ULONG iTransColor 
);

/* DrvUnrealizeColor  [function; ce-only; CE 4.0..699; Ddi_ati_lib.lib, Ddi_flat_lib.lib, Ddi_gx_lib.lib, Ddi_mq200_lib.lib, Ddi_nop_lib.lib, Ddi_perm3_lib.lib, Ddi_rflat_lib.lib, Ddi_rgx_lib.lib, Ddi_tvia5_lib.lib] */
ULONG APIENTRY DrvUnrealizeColor(
 USHORT iSrcType,
 ULONG cEntries,
 ULONG* pPalette,
 ULONG iRealizedColor
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* BRUSHOBJ_pvAllocRbrush  [function; shared; CE 5.0..699; Ddi_ati_lib.lib, Ddi_flat_lib.lib, Ddi_gx_lib.lib, Ddi_mq200_lib.lib, Ddi_nop_lib.lib, Ddi_rflat_lib.lib, Ddi_rgx_lib.lib, Ddi_tvia5_lib.lib] */
PVOID BRUSHOBJ_pvAllocRbrush(
 BRUSHOBJ* pbo,
 ULONG cj
);

/* BRUSHOBJ_pvGetRbrush  [function; shared; CE 5.0..699; Ddi_ati_lib.lib, Ddi_flat_lib.lib, Ddi_gx_lib.lib, Ddi_mq200_lib.lib, Ddi_nop_lib.lib, Ddi_rflat_lib.lib, Ddi_rgx_lib.lib, Ddi_tvia5_lib.lib] */
PVOID BRUSHOBJ_pvGetRbrush(
 BRUSHOBJ* pbo,
);

/* CLIPOBJ_bEnum  [function; shared; CE 5.0..699; Ddi_ati_lib.lib, Ddi_flat_lib.lib, Ddi_gx_lib.lib, Ddi_mq200_lib.lib, Ddi_nop_lib.lib, Ddi_rflat_lib.lib, Ddi_rgx_lib.lib, Ddi_tvia5_lib.lib] */
BOOL CLIPOBJ_bEnum(
 CLIPOBJ* pco,
 ULONG cj,
 ULONG* pv
);

/* CLIPOBJ_cEnumStart  [function; shared; CE 5.0..699; Ddi_ati_lib.lib, Ddi_flat_lib.lib, Ddi_gx_lib.lib, Ddi_mq200_lib.lib, Ddi_nop_lib.lib, Ddi_rflat_lib.lib, Ddi_rgx_lib.lib, Ddi_tvia5_lib.lib] */
ULONG CLIPOBJ_cEnumStart(
 IN CLIPOBJ* pco,
 BOOL bAll,
 ULONG iType,
 ULONG iDirection,
 ULONG cLimit
);

/* EngCreateDeviceBitmap  [function; shared; CE 5.0..699; Ddi_ati_lib.lib, Ddi_flat_lib.lib, Ddi_gx_lib.lib, Ddi_mq200_lib.lib, Ddi_nop_lib.lib, Ddi_rflat_lib.lib, Ddi_rgx_lib.lib, Ddi_tvia5_lib.lib] */
HBITMAP EngCreateDeviceBitmap(
 DHSURF dhsurf,
 SIZEL sizl,
 ULONG iFormatCompat
);

/* EngCreateDeviceSurface  [function; shared; CE 5.0..699; Ddi_ati_lib.lib, Ddi_flat_lib.lib, Ddi_gx_lib.lib, Ddi_mq200_lib.lib, Ddi_nop_lib.lib, Ddi_rflat_lib.lib, Ddi_rgx_lib.lib, Ddi_tvia5_lib.lib] */
HSURF EngCreateDeviceSurface(
 DHSURF dhsurf,
 SIZEL sizl,
 ULONG iFormatCompat
);

/* EngCreatePalette  [function; shared; CE 5.0..699; Ddi_ati_lib.lib, Ddi_flat_lib.lib, Ddi_gx_lib.lib, Ddi_mq200_lib.lib, Ddi_nop_lib.lib, Ddi_rflat_lib.lib, Ddi_rgx_lib.lib, Ddi_tvia5_lib.lib] */
HPALETTE EngCreatePalette(
 ULONG iMode,
 ULONG cColors,
 ULONG* pulColors,
 FLONG flRed,
 FLONG flGreen,
 FLONG flBlue
);

/* EngDeleteSurface  [function; shared; CE 5.0..699; Ddi_ati_lib.lib, Ddi_flat_lib.lib, Ddi_gx_lib.lib, Ddi_mq200_lib.lib, Ddi_nop_lib.lib, Ddi_rflat_lib.lib, Ddi_rgx_lib.lib, Ddi_tvia5_lib.lib] */
BOOL EngDeleteSurface(
 HSURF hsurf
);

/* PALOBJ_cGetColors  [function; shared; CE 5.0..699; Ddi_ati_lib.lib, Ddi_flat_lib.lib, Ddi_gx_lib.lib, Ddi_mq200_lib.lib, Ddi_nop_lib.lib, Ddi_rflat_lib.lib, Ddi_rgx_lib.lib, Ddi_tvia5_lib.lib] */
ULONG PALOBJ_cGetColors(
 PALOBJ* ppalo,
 ULONG iStart,
 ULONG cColors,
 ULONG* pulColors
);

/* PATHOBJ_bEnum  [function; shared; CE 5.0..699; Ddi_ati_lib.lib, Ddi_flat_lib.lib, Ddi_gx_lib.lib, Ddi_mq200_lib.lib, Ddi_nop_lib.lib, Ddi_rflat_lib.lib, Ddi_rgx_lib.lib, Ddi_tvia5_lib.lib] */
BOOL PATHOBJ_bEnum(
 PATHOBJ* ppo,
 PATHDATA* ppd
);

/* PATHOBJ_vEnumStart  [function; shared; CE 5.0..699; Ddi_ati_lib.lib, Ddi_flat_lib.lib, Ddi_gx_lib.lib, Ddi_mq200_lib.lib, Ddi_nop_lib.lib, Ddi_rflat_lib.lib, Ddi_rgx_lib.lib, Ddi_tvia5_lib.lib] */
VOID PATHOBJ_vEnumStart(
 PATHOBJ* ppo
);

/* PATHOBJ_vGetBounds  [function; shared; CE 5.0..699; Ddi_ati_lib.lib, Ddi_flat_lib.lib, Ddi_gx_lib.lib, Ddi_mq200_lib.lib, Ddi_nop_lib.lib, Ddi_rflat_lib.lib, Ddi_rgx_lib.lib, Ddi_tvia5_lib.lib] */
VOID PATHOBJ_vGetBounds(
 PATHOBJ* ppo,
 PRECTFX prectfx
);

/* XLATEOBJ_cGetPalette  [function; shared; CE 5.0..699; Ddi_ati_lib.lib, Ddi_flat_lib.lib, Ddi_gx_lib.lib, Ddi_mq200_lib.lib, Ddi_nop_lib.lib, Ddi_rflat_lib.lib, Ddi_rgx_lib.lib, Ddi_tvia5_lib.lib] */
ULONG XLATEOBJ_cGetPalette(
 XLATEOBJ* pxlo,
 ULONG iPal,
 ULONG cPal,
 ULONG* pPal
);
#endif /* _WIN32_WCE */

#endif /* _WINDDI_ */
