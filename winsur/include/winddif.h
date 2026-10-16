/* winddif.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 5 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _WINDDIF_
#define _WINDDIF_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* FD_DEVICEMETRICS  [struct; shared; CE 6.0..699] */
typedef struct _FD_DEVICEMETRICS {
 FLONG flRealizedType;
 POINTE pteBase;
 POINTE pteSide;
 LONG lD;
 FIX fxMaxAscender;
 FIX fxMaxDescender;
 POINTL ptlUnderline1;
 POINTL ptlStrikeout;
 POINTL ptlULThickness;
 POINTL ptlSOThickness;
 ULONG cxMax;
 ULONG cyMax;
 ULONG cjGlyphMax;
 FD_XFORM fdxQuantized;
 LONG lNonLinearExtLeading;
 LONG lNonLinearIntLeading;
 LONG lNonLinearMaxCharWidth;
 LONG lNonLinearAvgCharWidth;
 LONG lMinA;
 LONG lMinC;
 LONG lMinD;
 LONG alReserved[1];
} FD_DEVICEMETRICS, *PFD_DEVICEMETRICS;

/* FONTOBJ  [struct; shared; CE 6.0..699] */
typedef struct _FONTOBJ {
 ULONG iUniq;
 ULONG iFace;
 ULONG cxMax;
 FLONG flFontType;
 ULONG_PTR iTTUniq;
 ULONG_PTR iFile;
 SIZE sizLogResPpi;
 ULONG ulStyleSize;
 PVOID pvConsumer;
 PVOID pvProducer;} FONTOBJ;

/* GLYPHBITS  [struct; shared; CE 6.0..699] */
typedef struct _GLYPHBITS {
 POINTL ptlOrigin;
 SIZEL sizlBitmap;
 BYTE aj[1];
} GLYPHBITS;

/* GLYPHDATA  [struct; shared; CE 6.0..699] */
typedef struct _GLYPHDATA {
 GLYPHDEF gdf;
 HGLYPH hg;
 FIX fxD;
 FIX fxA;
 FIX fxAB;
 FIX fxInkTop;
 FIX fxInkBottom;
 RECTL rclInk;
 POINTQF ptqD;
} GLYPHDATA;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* DrvTextOut  [function; shared; CE 6.0..699] */
BOOL DrvTextOut(
 SURFOBJ *pso,
 STROBJ *pstro,
 FONTOBJ *pfo,
 CLIPOBJ *pco,
 RECTL *prclExtra,
 RECTL *prclOpaque,
 BRUSHOBJ *pboFore,
 BRUSHOBJ *pboOpaque,
 POINTL *pptlOrg,
 MIX mix
);
#endif /* _WIN32_WCE */

#endif /* _WINDDIF_ */
