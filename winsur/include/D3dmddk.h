/* D3dmddk.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 63 declarations, 0 outlines, 0 base types, 0 extra macros, 23 extra decls
 */
#ifndef _D3DMDDK_
#define _D3DMDDK_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* D3DM_CREATECONTEXT_DATA  [struct; ce-only] */
typedef struct _D3DM_CREATECONTEXT_DATA {
 ULONG nContextId;
 HRESULT rval;
} D3DM_CREATECONTEXT_DATA;

/* D3DM_DESTROYCONTEXT_DATA  [struct; ce-only] */
typedef struct _D3DM_DESTROYCONTEXT_DATA {
 ULONG nContextId;
 HRESULT rval;
} D3DM_DESTROYCONTEXT_DATA;

/* D3DM_DESTROYSURFACE_DATA  [struct; ce-only] */
typedef struct _D3DM_DESTROYSURFACE_DATA {
 ULONG nSurfaceId;
 HRESULT rval;
} D3DM_DESTROYSURFACE_DATA;

/* D3DM_DRAWPRIMITIVE_DATA  [struct; ce-only] */
typedef struct _D3DM_DRAWPRIMITIVE_DATA {
 ULONG nContextId;
 LPVOID pCommands;
 ULONG nStartOffset;
 ULONG nEndOffset;
 HRESULT rval;
} D3DM_DRAWPRIMITIVE_DATA;

/* D3DM_GETINFO_DATA  [struct; ce-only] */
typedef struct _D3DM_GETINFO_DATA {
 ULONG nContextId;
 DWORD DevInfoId;
 void* pDevInfoStruct;
 DWORD DevInfoStructSize;
 HRESULT rval;
} D3DM_GETINFO_DATA;

/* D3DM_UNLOCKSURFACE_DATA  [struct; ce-only] */
typedef struct _D3DM_UNLOCKSURFACE_DATA {
 ULONG nSurfaceId;
 HRESULT rval;
} D3DM_UNLOCKSURFACE_DATA;

/* D3DM_VALIDATEDEVICE_DATA  [struct; ce-only] */
typedef struct _D3DM_VALIDATEDEVICE_DATA {
 ULONG nContextId;
 DWORD NumPasses;
 HRESULT rval;
} D3DM_VALIDATEDEVICE_DATA;

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x500 && _WIN32_WCE < 0x700)) /* CE 5.0..699 */

/* D3DM_CREATECONTEXT_PTR  [callback; ce-only; CE 5.0..699] */
typedef DWORD (*D3DM_CREATECONTEXT_PTR)(D3DM_CREATECONTEXT_DATA *);

/* D3DM_DESTROYCONTEXT_PTR  [callback; ce-only; CE 5.0..699] */
typedef DWORD (*D3DM_DESTROYCONTEXT_PTR)(D3DM_DESTROYCONTEXT_DATA *);

/* D3DM_DESTROYSURFACE_PTR  [callback; ce-only; CE 5.0..699] */
typedef DWORD (*D3DM_DESTROYSURFACE_PTR)(D3DM_DESTROYSURFACE_DATA *);

/* D3DM_DRAWPRIMITIVE_PTR  [callback; ce-only; CE 5.0..699] */
typedef DWORD (*D3DM_DRAWPRIMITIVE_PTR)(D3DM_DRAWPRIMITIVE_DATA *);

/* D3DM_GETINFO_PTR  [callback; ce-only; CE 5.0..699] */
typedef DWORD (*D3DM_GETINFO_PTR)(D3DM_GETINFO_DATA *);

/* D3DM_UNLOCKSURFACE_PTR  [callback; ce-only; CE 5.0..699] */
typedef DWORD (*D3DM_UNLOCKSURFACE_PTR)(D3DM_UNLOCKSURFACE_DATA *);

/* D3DM_VALIDATEDEVICE_PTR  [callback; ce-only; CE 5.0..699] */
typedef DWORD (*D3DM_VALIDATEDEVICE_PTR)(D3DM_VALIDATEDEVICE_DATA *);
#endif /* _WIN32_WCE */


/* D3DM_DrawPrimitive  [callback, struct; ce-only] */
typedef DWORD (*D3DM_DRAWPRIMITIVE_PTR)(D3DM_DRAWPRIMITIVE_DATA *);

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x500 && _WIN32_WCE < 0x700)) /* CE 5.0..699 */

/* D3DM_CreateContext  [callback; ce-only; CE 5.0..699] */
typedef DWORD (*D3DM_CREATECONTEXT_PTR)(D3DM_CREATECONTEXT_DATA *);

/* D3DM_DestroyContext  [callback; ce-only; CE 5.0..699] */
typedef DWORD (*D3DM_DESTROYCONTEXT_PTR)(D3DM_DESTROYCONTEXT_DATA *);

/* D3DM_DestroySurface  [callback; ce-only; CE 5.0..699] */
typedef DWORD (*D3DM_DESTROYSURFACE_PTR)(D3DM_DESTROYSURFACE_DATA *);

/* D3DM_GetInfo  [callback; ce-only; CE 5.0..699] */
typedef DWORD (*D3DM_GETINFO_PTR)(D3DM_GETINFO_DATA *);

/* D3DM_UnlockSurface  [callback; ce-only; CE 5.0..699] */
typedef DWORD (*D3DM_UNLOCKSURFACE_PTR)(D3DM_UNLOCKSURFACE_DATA *);

/* D3DM_ValidateDevice  [callback; ce-only; CE 5.0..699] */
typedef DWORD (*D3DM_VALIDATEDEVICE_PTR)(D3DM_VALIDATEDEVICE_DATA *);
#endif /* _WIN32_WCE */

/* LPD3DM_CLEAR  [extra struct] */
typedef struct _D3DM_CLEAR { DWORD Flags; DWORD FillColor; float FillDepth; DWORD FillStencil; DWORD NumRects; RECT Rects[1];} D3DM_CLEAR, * LPD3DM_CLEAR;

/* LPD3DM_COLORFILL  [extra struct] */
typedef struct _D3DM_COLORFILL { D3DMCOLOR Color; ULONG SurfaceId; RECT Rect;} D3DM_COLORFILL, * LPD3DM_COLORFILL;

/* LPD3DM_COMMAND  [extra struct] */
typedef struct _D3DM_COMMAND { BYTE nCommand; BYTE nReserved; WORD nCount;} D3DM_COMMAND, *LPD3DM_COMMAND;

/* LPD3DM_COPYRECT  [extra struct] */
typedef struct _D3DM_COPYRECT { ULONG SourceSurf; RECT SourceRect; ULONG DestSurf; POINT DestPoint;} D3DM_COPYRECT, * LPD3DM_COPYRECT;

/* LPD3DM_CREATELIGHT  [extra struct] */
typedef struct _D3DM_CREATELIGHT { DWORD Index;} D3DM_CREATELIGHT, * LPD3DM_CREATELIGHT;

/* LPD3DM_CREATEPALETTE  [extra struct] */
typedef struct _D3DM_CREATEPALETTE { DWORD Index;} D3DM_CREATEPALETTE, * LPD3DM_CREATEPALETTE;

/* LPD3DM_DRAWINDEXEDPRIMITIVE  [extra struct] */
typedef struct _D3DM_DRAWINDEXEDPRIMITIVE { D3DMPRIMITIVETYPE PrimType; DWORD MinIndex; DWORD NumVertices; DWORD StartIndexOffset; DWORD PrimitiveCount; INT BaseVertexIndex;} D3DM_DRAWINDEXEDPRIMITIVE, * LPD3DM_DRAWINDEXEDPRIMITIVE;

/* LPD3DM_DRAWPRIMITIVE  [extra struct] */
typedef struct _D3DM_DRAWPRIMITIVE { D3DMPRIMITIVETYPE PrimType; DWORD StartVertex; DWORD PrimitiveCount;} D3DM_DRAWPRIMITIVE, * LPD3DM_DRAWPRIMITIVE;

/* LPD3DM_INDEXBUFFER  [extra struct] */
typedef struct _D3DM_INDEXBUFFER { ULONG BufferId; DWORD Stride;} D3DM_INDEXBUFFER, * LPD3DM_INDEXBUFFER;

/* LPD3DM_MATERIAL  [extra struct] */
typedef struct _D3DM_MATERIAL { D3DMMATERIAL Material; D3DMFORMAT Format;} D3DM_MATERIAL, * LPD3DM_MATERIAL;

/* LPD3DM_PRESENT  [extra struct] */
typedef struct _D3DM_PRESENT { ULONG PresentSurface; RECT SourceRect; RECT DestinationRect; DWORD NumClippingRects; RECT ClippingRects[1];} D3DM_PRESENT, * LPD3DM_PRESENT;

/* LPD3DM_PROCESSVERTICES  [extra struct] */
typedef struct _D3DM_PROCESSVERTICES { DWORD SrcStartIndex; DWORD DestIndex; DWORD VertexCount; ULONG DestBufferId; DWORD Flags;} D3DM_PROCESSVERTICES, * LPD3DM_PROCESSVERTICES;

/* LPD3DM_RENDERSTATE  [extra struct] */
typedef struct _D3DM_RENDERSTATE { D3DMRENDERSTATETYPE RenderState; D3DMVALUE Value;} D3DM_RENDERSTATE, *LPD3DM_RENDERSTATE;

/* LPD3DM_RENDERTARGET  [extra struct] */
typedef struct _D3DM_RENDERTARGET { ULONG RenderTarget; ULONG ZBuffer;} D3DM_RENDERTARGET, * LPD3DM_RENDERTARGET;

/* LPD3DM_SETLIGHT  [extra struct] */
typedef struct _D3DM_SETLIGHT { DWORD Index; D3DM_SETLIGHT_DATATYPE DataType;} D3DM_SETLIGHT, * LPD3DM_SETLIGHT;

/* LPD3DM_SETLIGHT_WITHDATA  [extra struct] */
typedef struct _D3DM_SETLIGHT_WITHDATA { DWORD Index; D3DM_SETLIGHT_DATATYPE DataType; D3DMLIGHT Data; D3DMFORMAT Format;} D3DM_SETLIGHT_WITHDATA, * LPD3DM_SETLIGHT_WITHDATA;

/* LPD3DM_SETPALETTE  [extra struct] */
typedef struct _D3DM_SETPALETTE { DWORD Index; D3DM_SETPALETTE_DATATYPE DataType;} D3DM_SETPALETTE, *LPD3DM_SETPALETTE;

/* LPD3DM_SETPALETTE_WITHENTRIES  [extra struct] */
typedef struct _D3DM_SETPALETTE_WITHENTRIES { DWORD Index; D3DM_SETPALETTE_DATATYPE DataType; PALETTEENTRY Entries[256];} D3DM_SETPALETTE_WITHENTRIES, *LPD3DM_SETPALETTE_WITHENTRIES;

/* LPD3DM_STRETCHRECT  [extra struct] */
typedef struct _D3DM_STRETCHRECT { ULONG SourceId; RECT SourceRect; ULONG DestId; RECT DestRect; D3DMTEXTUREFILTERTYPE Filter;} D3DM_STRETCHRECT, * LPD3DM_STRETCHRECT;

/* LPD3DM_TEXTURESTAGESTATE  [extra struct] */
typedef struct _D3DM_TEXTURESTAGESTATE { WORD Stage; WORD State; DWORD Value;} D3DM_TEXTURESTAGESTATE, * LPD3DM_TEXTURESTAGESTATE;

/* LPD3DM_TRANSFORM  [extra struct] */
typedef struct _D3DM_TRANSFORM { D3DMTRANSFORMSTATETYPE TransformType; D3DMMATRIX Matrix; D3DMFORMAT Format;} D3DM_TRANSFORM, * LPD3DM_TRANSFORM;

/* LPD3DM_VERTEXBUFFER  [extra struct] */
typedef struct _D3DM_VERTEXBUFFER { DWORD StreamIndex; ULONG BufferId; DWORD Stride;} D3DM_VERTEXBUFFER, * LPD3DM_VERTEXBUFFER;

/* LPD3DM_VIEWPORT  [extra struct] */
typedef struct _D3DM_VIEWPORT { D3DMVIEWPORT Viewport;} D3DM_VIEWPORT, * LPD3DM_VIEWPORT;

#endif /* _D3DMDDK_ */
