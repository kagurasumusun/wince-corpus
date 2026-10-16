/* D3dmtypes.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 1 constants, 46 declarations, 1 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _D3DMTYPES_
#define _D3DMTYPES_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define MAX_DEVICE_IDENTIFIER_STRING 512

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* D3DMADAPTER_IDENTIFIER  [struct, typedef; ce-only] */

/* D3DMCOLOR_ARGB  [macro; ce-only] */
#define D3DMCOLOR_ARGB(a,r,g,b) \
 ((D3DMCOLOR)((((a)&0xff)<<24)|(((r)&0xff)<<16)| \
 (((g)&0xff)<<8)|((b)&0xff)))

/* D3DMFVF_TEXCOORDFIXED  [macro; ce-only] */
#define D3DMFVF_TEXCOORDFIXED(CoordIndex) \
 (D3DMFVF_TEXCOORDFORMAT_FIXED << (CoordIndex*2 + 24))

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* D3DMCLIPSTATUS  [struct, typedef; ce-only] */
typedef struct _D3DMCLIPSTATUS {
 ULONG ClipUnion;
 ULONG ClipIntersection;
} D3DMCLIPSTATUS;

/* D3DMCOLOR  [typedef; ce-only] */
typedef ULONG D3DMCOLOR;

/* D3DMLOCKED_RECT  [struct, typedef; ce-only] */
typedef struct _D3DMLOCKED_RECT {
 INT Pitch;
 void* pBits;
} D3DMLOCKED_RECT;

/* D3DMVALUE  [typedef; ce-only] */
typedef signed int D3DMVALUE;

/* D3DMVECTOR  [struct, typedef; ce-only] */
typedef struct _D3DMVECTOR {
 D3DMVALUE x;
 D3DMVALUE y;
 D3DMVALUE z;
} D3DMVECTOR;

/* D3DMVIEWPORT  [struct, typedef; ce-only] */
typedef struct _D3DMVIEWPORT {
 ULONG X;
 ULONG Y;
 ULONG Width;
 ULONG Height;
 float MinZ;
 float MaxZ;
} D3DMVIEWPORT;

/* D3DMCOLORVALUE  [struct, typedef; ce-only] */
typedef struct _D3DMCOLORVALUE {
 D3DMVALUE r;
 D3DMVALUE g;
 D3DMVALUE b;
 D3DMVALUE a;
} D3DMCOLORVALUE;

/* D3DMMATERIAL  [struct, typedef; ce-only] */
typedef struct _D3DMMATERIAL {
 D3DMCOLORVALUE Diffuse;
 D3DMCOLORVALUE Ambient;
 D3DMCOLORVALUE Specular;
 float Power;
} D3DMMATERIAL;

/* D3DMMATRIX  [struct, typedef; ce-only] */
typedef struct _D3DMMATRIX {
 union {
 struct {
 D3DMVALUE _11, _12, _13, _14;
 D3DMVALUE _21, _22, _23, _24;
 D3DMVALUE _31, _32, _33, _34;
 D3DMVALUE _41, _42, _43, _44;
 };
 D3DMVALUE m[4][4];
 };
} D3DMMATRIX;

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* D3DM_MAKE_D3DMVALUE  [function; ce-only; CE 5.0..699] */
inline D3DMVALUE D3DM_MAKE_D3DMVALUE(D3DMVALUE Value);
inline D3DMVALUE D3DM_MAKE_D3DMVALUE(float Value);
inline D3DMVALUE D3DM_MAKE_D3DMVALUE(unsigned int Value);
inline D3DMVALUE D3DM_MAKE_D3DMVALUE(double Value);
#endif /* _WIN32_WCE */

#endif /* _D3DMTYPES_ */
