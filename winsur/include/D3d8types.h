/* D3d8types.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 43 declarations, 0 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _D3D8TYPES_
#define _D3D8TYPES_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* D3DFVF_TEXCOORDSIZEn  [macro; ce-only] */
#define D3DFVF_TEXCOORDSIZE1(CoordIndex) (D3DFVF_TEXTUREFORMAT1 << \
 (CoordIndex*2 + 16))
#define D3DFVF_TEXCOORDSIZE2(CoordIndex) (D3DFVF_TEXTUREFORMAT2)
#define D3DFVF_TEXCOORDSIZE3(CoordIndex) (D3DFVF_TEXTUREFORMAT3 << \
 (CoordIndex*2 + 16))
#define D3DFVF_TEXCOORDSIZE4(CoordIndex) (D3DFVF_TEXTUREFORMAT4 << \
 (CoordIndex*2 + 16))

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* D3DGAMMARAMP  [struct; ce-only] */
typedef struct _D3DGAMMARAMP {
 WORD red [256];
 WORD green[256];
 WORD blue [256];
} D3DGAMMARAMP;

/* D3DLINEPATTERN  [struct; ce-only] */
typedef struct _D3DLINEPATTERN {
 WORD wRepeatFactor;
 WORD wLinePattern;
} D3DLINEPATTERN;

/* D3DLOCKED_RECT  [struct; ce-only] */
typedef struct _D3DLOCKED_RECT {
 INT Pitch;
 void* pBits;
} D3DLOCKED_RECT;

/* D3DMATRIX  [struct; ce-only] */
typedef struct _D3DMATRIX {
 union {
 struct {
 float _11, _12, _13, _14;
 float _21, _22, _23, _24;
 float _31, _32, _33, _34;
 float _41, _42, _43, _44;
 };
 float m[4][4];
 };
} D3DMATRIX;

/* D3DRANGE  [struct; ce-only] */
typedef struct _D3DRANGE {
 UINT Offset;
 UINT Size;
} D3DRANGE;

/* D3DRASTER_STATUS  [struct; ce-only] */
typedef struct _D3DRASTER_STATUS {
 BOOL InVBlank;
 UINT ScanLine;
} D3DRASTER_STATUS;

/* D3DRECT  [struct; ce-only] */
typedef struct _D3DRECT {
 LONG x1;
 LONG y1;
 LONG x2;
 LONG y2;
} D3DRECT;

/* D3DVECTOR  [struct; ce-only] */
typedef struct _D3DVECTOR {
 float x;
 float y;
 float z;
} D3DVECTOR;

/* D3DVIEWPORT8  [struct; ce-only] */
typedef struct _D3DVIEWPORT8 {
 DWORD X;
 DWORD Y;
 DWORD Width;
 DWORD Height;
 float MinZ;
 float MaxZ;
} D3DVIEWPORT8;

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 500)) /* CE 4.0..499 */

/* D3DCOLOR_COLORVALUE  [function; ce-only; CE 4.0..499] */
D3DCOLOR_COLORVALUE(r,g,b,a) \
D3DCOLOR_RGBA((DWORD)((r)*255.f),(DWORD)((g)*255.f),(DWORD)((b)*255.f),(D
ORD)((a)*255.f)
)
#endif /* _WIN32_WCE */

#endif /* _D3D8TYPES_ */
