/* D3dmddk.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 63 declarations, 0 outlines, 0 base types, 0 extra macros, 24 extra decls
 */
#ifndef _D3DMDDK_
#define _D3DMDDK_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* D3DM_CLEAR  [struct; ce-only; CE 5.0..699] */
typedef struct _D3DM_CLEAR {
 DWORD Flags; 
 DWORD FillColor;
 float FillDepth;
 DWORD FillStencil;
 DWORD NumRects;
 RECT Rects[1];
} D3DM_CLEAR, * LPD3DM_CLEAR;

/* D3DM_COLORFILL  [struct; ce-only; CE 5.0..699] */
typedef struct _D3DM_COLORFILL {
 D3DMCOLOR Color;
 ULONG SurfaceId;
 RECT Rect;
} D3DM_COLORFILL, * LPD3DM_COLORFILL;

/* D3DM_COMMAND  [struct; ce-only; CE 5.0..699] */
typedef struct _D3DM_COMMAND {
 BYTE nCommand;
 BYTE nReserved;
 WORD nCount;
} D3DM_COMMAND, *LPD3DM_COMMAND;

/* D3DM_COPYRECT  [struct; ce-only; CE 5.0..699] */
typedef struct _D3DM_COPYRECT {
 ULONG SourceSurf;
 RECT SourceRect;
 ULONG DestSurf;
 POINT DestPoint;
} D3DM_COPYRECT, * LPD3DM_COPYRECT;

/* D3DM_CreateContext  [callback; ce-only; CE 5.0..699] */
typedef DWORD (*D3DM_CREATECONTEXT_PTR)(D3DM_CREATECONTEXT_DATA *);

/* D3DM_CREATECONTEXT_DATA  [struct; ce-only; CE 5.0..699] */
typedef struct _D3DM_CREATECONTEXT_DATA {
 ULONG nContextId;
 HRESULT rval;
} D3DM_CREATECONTEXT_DATA;

/* D3DM_CREATECONTEXT_PTR  [callback; ce-only; CE 5.0..699] */
typedef DWORD (*D3DM_CREATECONTEXT_PTR)(D3DM_CREATECONTEXT_DATA *);

/* D3DM_CREATELIGHT  [struct; ce-only; CE 5.0..699] */
typedef struct _D3DM_CREATELIGHT {
 DWORD Index;
} D3DM_CREATELIGHT, * LPD3DM_CREATELIGHT;

/* D3DM_CREATEPALETTE  [struct; ce-only; CE 5.0..699] */
typedef struct _D3DM_CREATEPALETTE {
 DWORD Index;
} D3DM_CREATEPALETTE, * LPD3DM_CREATEPALETTE;

/* D3DM_CreateSurface  [callback; ce-only; CE 5.0..699] */
typedef DWORD (*D3DM_CREATESURFACE_PTR)(D3DM_CREATESURFACE_DATA *);

/* D3DM_CREATESURFACE_DATA  [struct; ce-only; CE 5.0..699] */
typedef struct _D3DM_CREATESURFACE_DATA {
 D3DMRESOURCETYPE SurfaceType;
 union {
 D3DMSURFACE_DESC SurfaceDesc;
 D3DMVERTEXBUFFER_DESC VertexDesc;
 D3DMINDEXBUFFER_DESC IndexDesc;
 D3DMTEXTURE_DESC TextureDesc;
 }; 
 ULONG nContextId;
 ULONG nSurfaceId;
 HRESULT rval;
} D3DM_CREATESURFACE_DATA;

/* D3DM_CREATESURFACE_PTR  [callback; ce-only; CE 5.0..699] */
typedef DWORD (*D3DM_CREATESURFACE_PTR)(D3DM_CREATESURFACE_DATA *);

/* D3DM_DestroyContext  [callback; ce-only; CE 5.0..699] */
typedef DWORD (*D3DM_DESTROYCONTEXT_PTR)(D3DM_DESTROYCONTEXT_DATA *);

/* D3DM_DESTROYCONTEXT_DATA  [struct; ce-only; CE 5.0..699] */
typedef struct _D3DM_DESTROYCONTEXT_DATA {
 ULONG nContextId;
 HRESULT rval;
} D3DM_DESTROYCONTEXT_DATA;

/* D3DM_DESTROYCONTEXT_PTR  [callback; ce-only; CE 5.0..699] */
typedef DWORD (*D3DM_DESTROYCONTEXT_PTR)(D3DM_DESTROYCONTEXT_DATA *);

/* D3DM_DestroySurface  [callback; ce-only; CE 5.0..699] */
typedef DWORD (*D3DM_DESTROYSURFACE_PTR)(D3DM_DESTROYSURFACE_DATA *);

/* D3DM_DESTROYSURFACE_DATA  [struct; ce-only; CE 5.0..699] */
typedef struct _D3DM_DESTROYSURFACE_DATA {
 ULONG nSurfaceId;
 HRESULT rval;
} D3DM_DESTROYSURFACE_DATA;

/* D3DM_DESTROYSURFACE_PTR  [callback; ce-only; CE 5.0..699] */
typedef DWORD (*D3DM_DESTROYSURFACE_PTR)(D3DM_DESTROYSURFACE_DATA *);

/* D3DM_DRAWINDEXEDPRIMITIVE  [struct; ce-only; CE 5.0..699] */
typedef struct _D3DM_DRAWINDEXEDPRIMITIVE {
 D3DMPRIMITIVETYPE PrimType;
 DWORD MinIndex;
 DWORD NumVertices;
 DWORD StartIndexOffset;
 DWORD PrimitiveCount;
 INT BaseVertexIndex;
} D3DM_DRAWINDEXEDPRIMITIVE, * LPD3DM_DRAWINDEXEDPRIMITIVE;

/* D3DM_DrawPrimitive  [callback, struct; ce-only; CE 5.0..699] */
typedef DWORD (*D3DM_DRAWPRIMITIVE_PTR)(D3DM_DRAWPRIMITIVE_DATA *);

/* D3DM_DRAWPRIMITIVE_DATA  [struct; ce-only; CE 5.0..699] */
typedef struct _D3DM_DRAWPRIMITIVE_DATA {
 ULONG nContextId;
 LPVOID pCommands;
 ULONG nStartOffset;
 ULONG nEndOffset;
 HRESULT rval;
} D3DM_DRAWPRIMITIVE_DATA;

/* D3DM_DRAWPRIMITIVE_PTR  [callback; ce-only; CE 5.0..699] */
typedef DWORD (*D3DM_DRAWPRIMITIVE_PTR)(D3DM_DRAWPRIMITIVE_DATA *);

/* D3DM_GetAdapterInfo  [callback; ce-only; CE 5.0..699] */
typedef DWORD (*D3DM_GETADAPTERINFO_PTR)(D3DM_GETADAPTERINFO_DATA *);

/* D3DM_GETADAPTERINFO_DATA  [struct; ce-only; CE 5.0..699] */
typedef struct _D3DM_GETADAPTERINFO_DATA {
 D3DMADAPTER_IDENTIFIER* pIdentifier;
 D3DMCAPS* pCaps;
 ULONG cDisplayMode;
 D3DMDISPLAYMODE* pDisplayMode;
 ULONG nCurrentMode;
 ULONG nFormat;
 D3DMDEVICEFORMAT* pFormat;
 ULONG nMultisample;
 D3DMMULTISAMPLE_TYPE* pMultisample;
 ULONG nProfile;
 D3DMPROFILE* pProfile;
 ULONG cTotalVRam;
 ULONG cCurrentVRam;
 HRESULT rval;
} D3DM_GETADAPTERINFO_DATA;

/* D3DM_GETADAPTERINFO_PTR  [callback; ce-only; CE 5.0..699] */
typedef DWORD (*D3DM_GETADAPTERINFO_PTR)(D3DM_GETADAPTERINFO_DATA *);

/* D3DM_GetInfo  [callback; ce-only; CE 5.0..699] */
typedef DWORD (*D3DM_GETINFO_PTR)(D3DM_GETINFO_DATA *);

/* D3DM_GETINFO_DATA  [struct; ce-only; CE 5.0..699] */
typedef struct _D3DM_GETINFO_DATA {
 ULONG nContextId;
 DWORD DevInfoId;
 void* pDevInfoStruct;
 DWORD DevInfoStructSize;
 HRESULT rval;
} D3DM_GETINFO_DATA;

/* D3DM_GETINFO_PTR  [callback; ce-only; CE 5.0..699] */
typedef DWORD (*D3DM_GETINFO_PTR)(D3DM_GETINFO_DATA *);

/* D3DM_INDEXBUFFER  [struct; ce-only; CE 5.0..699] */
typedef struct _D3DM_INDEXBUFFER {
 ULONG BufferId;
 DWORD Stride;
} D3DM_INDEXBUFFER, * LPD3DM_INDEXBUFFER;

/* D3DM_Initialize  [callback; ce-only; CE 5.0..699] */
typedef DWORD (*D3DM_INITIALIZE_PTR)(D3DM_INITIALIZE_DATA *);

/* D3DM_INITIALIZE_DATA  [struct; ce-only; CE 5.0..699] */
typedef struct _D3DM_INITIALIZE_DATA {
 D3DM_GETADAPTERINFO_PTR pGetAdapterInfo;
 D3DM_CREATECONTEXT_PTR pCreateContext;
 D3DM_DESTROYCONTEXT_PTR pDestroyContext;
 D3DM_CREATESURFACE_PTR pCreateSurface;
 D3DM_DESTROYSURFACE_PTR pDestroySurface;
 D3DM_LOCKSURFACE_PTR pLockSurface;
 D3DM_UNLOCKSURFACE_PTR pUnlockSurface;
 D3DM_DRAWPRIMITIVE_PTR pDrawPrimitive;
 D3DM_VALIDATEDEVICE_PTR pValidateDevice;
 D3DM_GETINFO_PTR pGetInfo;
 D3DM_RESOURCEMANAGER_PTR pResourceManager;
} D3DM_INITIALIZE_DATA;

/* D3DM_LockSurface  [callback; ce-only; CE 5.0..699] */
typedef DWORD (*D3DM_LOCKSURFACE_PTR)(D3DM_LOCKSURFACE_DATA *);

/* D3DM_LOCKSURFACE_DATA  [struct; ce-only; CE 5.0..699] */
typedef struct _D3DM_LOCKSURFACE_DATA {
 RECT Rect;
 D3DMLOCKED_RECT LockedRect;
 ULONG nSurfaceId;
 ULONG Flags;
 HRESULT rval;
} D3DM_LOCKSURFACE_DATA;

/* D3DM_LOCKSURFACE_PTR  [callback; ce-only; CE 5.0..699] */
typedef DWORD (*D3DM_LOCKSURFACE_PTR)(D3DM_LOCKSURFACE_DATA *);

/* D3DM_MATERIAL  [struct; ce-only; CE 5.0..699] */
typedef struct _D3DM_MATERIAL {
 D3DMMATERIAL Material;
 D3DMFORMAT Format;
} D3DM_MATERIAL, * LPD3DM_MATERIAL;

/* D3DM_OPERATION  [enum; ce-only; CE 5.0..699] */
typedef enum _D3DM_OPERATION {
 D3DMOP_BEGINSCENE,
 D3DMOP_ENDSCENE,
 D3DMOP_PRESENT,
 D3DMOP_COPYRECT,
 D3DMOP_CLEAR,
 D3DMOP_RENDERTARGET,
 D3DMOP_RENDERSTATE,
 D3DMOP_TRANSFORM,
 D3DMOP_VIEWPORT,
 D3DMOP_MATERIAL,
 D3DMOP_CREATELIGHT,
 D3DMOP_SETLIGHT,
 D3DMOP_TEXTURESTAGESTATE,
 D3DMOP_CREATEPALETTE,
 D3DMOP_SETPALETTE,
 D3DMOP_PROCESSVERTICES,
 D3DMOP_DRAWPRIMITIVE,
 D3DMOP_DRAWINDEXEDPRIMITIVE,
 D3DMOP_VERTEXBUFFER,
 D3DMOP_INDEXBUFFER,
 D3DMOP_COLORFILL,
 D3DMOP_STRETCHRECT
} D3DM_OPERATION;

/* D3DM_PRESENT  [struct; ce-only; CE 5.0..699] */
typedef struct _D3DM_PRESENT {
 ULONG PresentSurface;
 RECT SourceRect;
 RECT DestinationRect;
 DWORD NumClippingRects;
 RECT ClippingRects[1];
} D3DM_PRESENT, * LPD3DM_PRESENT;

/* D3DM_PROCESSVERTICES  [struct; ce-only; CE 5.0..699] */
typedef struct _D3DM_PROCESSVERTICES {
 DWORD SrcStartIndex;
 DWORD DestIndex;
 DWORD VertexCount;
 ULONG DestBufferId;
 DWORD Flags;
} D3DM_PROCESSVERTICES, * LPD3DM_PROCESSVERTICES;

/* D3DM_RENDERSTATE  [struct; ce-only; CE 5.0..699] */
typedef struct _D3DM_RENDERSTATE {
 D3DMRENDERSTATETYPE RenderState;
 D3DMVALUE Value;
} D3DM_RENDERSTATE, *LPD3DM_RENDERSTATE;

/* D3DM_RENDERTARGET  [struct; ce-only; CE 5.0..699] */
typedef struct _D3DM_RENDERTARGET {
 ULONG RenderTarget;
 ULONG ZBuffer;
} D3DM_RENDERTARGET, * LPD3DM_RENDERTARGET;

/* D3DM_ResourceManager  [callback; ce-only; CE 5.0..699] */
typedef DWORD (*D3DM_RESOURCEMANAGER_PTR)(D3DM_RESOURCEMANAGER_DATA *);

/* D3DM_RESOURCEMANAGER_ACTION  [enum; ce-only; CE 5.0..699] */
typedef enum _D3DM_RESOURCEMANAGER_ACTION {
 D3DM_RESACTION_DISCARD_BYTES = 0,
 D3DM_RESACTION_SET_PRIORITY = 1,
 D3DM_RESACTION_PRELOAD = 2,
 D3DM_RESACTION_FORCE_ULONG = 0xFFFFFFFF, // force 32-bit size enum
} D3DM_RESOURCEMANAGER_ACTION;

/* D3DM_RESOURCEMANAGER_DATA  [struct; ce-only; CE 5.0..699] */
typedef struct _D3DM_RESOURCEMANAGER_DATA {
 D3DM_RESOURCEMANAGER_ACTION Action;
 ULONG nContextId;
 ULONG nDiscardBytes;
 ULONG nSurfaceId;
 ULONG nNewPriority;
 HRESULT rval;
} D3DM_RESOURCEMANAGER_DATA;

/* D3DM_RESOURCEMANAGER_PTR  [callback; ce-only; CE 5.0..699] */
typedef DWORD (*D3DM_RESOURCEMANAGER_PTR)(D3DM_RESOURCEMANAGER_DATA *);

/* D3DM_SETLIGHT  [struct; ce-only; CE 5.0..699] */
typedef struct _D3DM_SETLIGHT {
 DWORD Index;
 D3DM_SETLIGHT_DATATYPE DataType;
} D3DM_SETLIGHT, * LPD3DM_SETLIGHT;

/* D3DM_SETLIGHT_DATATYPE  [enum; ce-only; CE 5.0..699] */
typedef enum _D3DM_SETLIGHT_DATATYPE {
 D3DM_SETLIGHT_ENABLE = 0,
 D3DM_SETLIGHT_DISABLE = 1,
 D3DM_SETLIGHT_DATA_ENABLE = 2,
 D3DM_SETLIGHT_DATA_DISABLE = 3,
} D3DM_SETLIGHT_DATATYPE;

/* D3DM_SETLIGHT_WITHDATA  [struct; ce-only; CE 5.0..699] */
typedef struct _D3DM_SETLIGHT_WITHDATA {
 DWORD Index;
 D3DM_SETLIGHT_DATATYPE DataType;
 D3DMLIGHT Data;
 D3DMFORMAT Format;
} D3DM_SETLIGHT_WITHDATA, * LPD3DM_SETLIGHT_WITHDATA;

/* D3DM_SETPALETTE  [struct; ce-only; CE 5.0..699] */
typedef struct _D3DM_SETPALETTE {
 DWORD Index;
 D3DM_SETPALETTE_DATATYPE DataType;
} D3DM_SETPALETTE, *LPD3DM_SETPALETTE;

/* D3DM_SETPALETTE_DATATYPE  [enum; ce-only; CE 5.0..699] */
typedef enum _D3DM_SETPALETTE_DATATYPE {
 D3DM_SETPALETTE_SETACTIVE = 0,
 D3DM_SETPALETTE_SETENTRIES = 1,
} D3DM_SETPALETTE_DATATYPE;

/* D3DM_SETPALETTE_WITHENTRIES  [struct; ce-only; CE 5.0..699] */
typedef struct _D3DM_SETPALETTE_WITHENTRIES {
 DWORD Index;
 D3DM_SETPALETTE_DATATYPE DataType;
 PALETTEENTRY Entries[256];
} D3DM_SETPALETTE_WITHENTRIES, *LPD3DM_SETPALETTE_WITHENTRIES;

/* D3DM_STRETCHRECT  [struct; ce-only; CE 5.0..699] */
typedef struct _D3DM_STRETCHRECT {
 ULONG SourceId;
 RECT SourceRect;
 ULONG DestId;
 RECT DestRect;
 D3DMTEXTUREFILTERTYPE Filter;
} D3DM_STRETCHRECT, * LPD3DM_STRETCHRECT;

/* D3DM_TEXTURESTAGESTATE  [struct; ce-only; CE 5.0..699] */
typedef struct _D3DM_TEXTURESTAGESTATE {
 WORD Stage;
 WORD State;
 DWORD Value;
} D3DM_TEXTURESTAGESTATE, * LPD3DM_TEXTURESTAGESTATE;

/* D3DM_TRANSFORM  [struct; ce-only; CE 5.0..699] */
typedef struct _D3DM_TRANSFORM {
 D3DMTRANSFORMSTATETYPE TransformType;
 D3DMMATRIX Matrix;
 D3DMFORMAT Format;
} D3DM_TRANSFORM, * LPD3DM_TRANSFORM;

/* D3DM_UnlockSurface  [callback; ce-only; CE 5.0..699] */
typedef DWORD (*D3DM_UNLOCKSURFACE_PTR)(D3DM_UNLOCKSURFACE_DATA *);

/* D3DM_UNLOCKSURFACE_DATA  [struct; ce-only; CE 5.0..699] */
typedef struct _D3DM_UNLOCKSURFACE_DATA {
 ULONG nSurfaceId;
 HRESULT rval;
} D3DM_UNLOCKSURFACE_DATA;

/* D3DM_UNLOCKSURFACE_PTR  [callback; ce-only; CE 5.0..699] */
typedef DWORD (*D3DM_UNLOCKSURFACE_PTR)(D3DM_UNLOCKSURFACE_DATA *);

/* D3DM_ValidateDevice  [callback; ce-only; CE 5.0..699] */
typedef DWORD (*D3DM_VALIDATEDEVICE_PTR)(D3DM_VALIDATEDEVICE_DATA *);

/* D3DM_VALIDATEDEVICE_DATA  [struct; ce-only; CE 5.0..699] */
typedef struct _D3DM_VALIDATEDEVICE_DATA {
 ULONG nContextId;
 DWORD NumPasses;
 HRESULT rval;
} D3DM_VALIDATEDEVICE_DATA;

/* D3DM_VALIDATEDEVICE_PTR  [callback; ce-only; CE 5.0..699] */
typedef DWORD (*D3DM_VALIDATEDEVICE_PTR)(D3DM_VALIDATEDEVICE_DATA *);

/* D3DM_VERTEXBUFFER  [struct; ce-only; CE 5.0..699] */
typedef struct _D3DM_VERTEXBUFFER {
 DWORD StreamIndex;
 ULONG BufferId;
 DWORD Stride;
} D3DM_VERTEXBUFFER, * LPD3DM_VERTEXBUFFER;

/* D3DM_VIEWPORT  [struct; ce-only; CE 5.0..699] */
typedef struct _D3DM_VIEWPORT {
 D3DMVIEWPORT Viewport;
} D3DM_VIEWPORT, * LPD3DM_VIEWPORT;

/* D3DMDEVICEFORMAT  [struct; ce-only; CE 5.0..699] */
typedef struct _D3DMDEVICEFORMAT {
 D3DMFORMAT Format;
 ULONG TypeFlags;
 ULONG Usage;
} D3DMDEVICEFORMAT;

/* D3DMTEXTURE_DESC  [struct; ce-only; CE 5.0..699] */
typedef struct _D3DMTEXTURE_DESC {
 D3DMFORMAT Format;
 D3DMRESOURCETYPE Type;
 ULONG Usage;
 D3DMPOOL Pool;
 UINT Size;
 D3DMMULTISAMPLE_TYPE MultiSampleType;
 UINT Width;
 UINT Height;
 ULONG Level;
 ULONG TotalLevels;
} D3DMTEXTURE_DESC;
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct _D3DM_CLEAR { DWORD Flags; DWORD FillColor; float FillDepth; DWORD FillStencil; DWORD NumRects; RECT Rects[1];} D3DM_CLEAR, * LPD3DM_CLEAR;
typedef struct _D3DM_COLORFILL { D3DMCOLOR Color; ULONG SurfaceId; RECT Rect;} D3DM_COLORFILL, * LPD3DM_COLORFILL;
typedef struct _D3DM_COMMAND { BYTE nCommand; BYTE nReserved; WORD nCount;} D3DM_COMMAND, *LPD3DM_COMMAND;
typedef struct _D3DM_COPYRECT { ULONG SourceSurf; RECT SourceRect; ULONG DestSurf; POINT DestPoint;} D3DM_COPYRECT, * LPD3DM_COPYRECT;
typedef struct _D3DM_CREATELIGHT { DWORD Index;} D3DM_CREATELIGHT, * LPD3DM_CREATELIGHT;
typedef struct _D3DM_CREATEPALETTE { DWORD Index;} D3DM_CREATEPALETTE, * LPD3DM_CREATEPALETTE;
typedef struct _D3DM_DRAWINDEXEDPRIMITIVE { D3DMPRIMITIVETYPE PrimType; DWORD MinIndex; DWORD NumVertices; DWORD StartIndexOffset; DWORD PrimitiveCount; INT BaseVertexIndex;} D3DM_DRAWINDEXEDPRIMITIVE, * LPD3DM_DRAWINDEXEDPRIMITIVE;
typedef struct _D3DM_DRAWPRIMITIVE { D3DMPRIMITIVETYPE PrimType; DWORD StartVertex; DWORD PrimitiveCount;} D3DM_DRAWPRIMITIVE, * LPD3DM_DRAWPRIMITIVE;
typedef struct _D3DM_INDEXBUFFER { ULONG BufferId; DWORD Stride;} D3DM_INDEXBUFFER, * LPD3DM_INDEXBUFFER;
typedef struct _D3DM_MATERIAL { D3DMMATERIAL Material; D3DMFORMAT Format;} D3DM_MATERIAL, * LPD3DM_MATERIAL;
typedef struct _D3DM_PRESENT { ULONG PresentSurface; RECT SourceRect; RECT DestinationRect; DWORD NumClippingRects; RECT ClippingRects[1];} D3DM_PRESENT, * LPD3DM_PRESENT;
typedef struct _D3DM_PROCESSVERTICES { DWORD SrcStartIndex; DWORD DestIndex; DWORD VertexCount; ULONG DestBufferId; DWORD Flags;} D3DM_PROCESSVERTICES, * LPD3DM_PROCESSVERTICES;
typedef struct _D3DM_RENDERSTATE { D3DMRENDERSTATETYPE RenderState; D3DMVALUE Value;} D3DM_RENDERSTATE, *LPD3DM_RENDERSTATE;
typedef struct _D3DM_RENDERTARGET { ULONG RenderTarget; ULONG ZBuffer;} D3DM_RENDERTARGET, * LPD3DM_RENDERTARGET;
typedef struct _D3DM_SETLIGHT { DWORD Index; D3DM_SETLIGHT_DATATYPE DataType;} D3DM_SETLIGHT, * LPD3DM_SETLIGHT;
typedef struct _D3DM_SETLIGHT_WITHDATA { DWORD Index; D3DM_SETLIGHT_DATATYPE DataType; D3DMLIGHT Data; D3DMFORMAT Format;} D3DM_SETLIGHT_WITHDATA, * LPD3DM_SETLIGHT_WITHDATA;
typedef struct _D3DM_SETPALETTE { DWORD Index; D3DM_SETPALETTE_DATATYPE DataType;} D3DM_SETPALETTE, *LPD3DM_SETPALETTE;
typedef struct _D3DM_SETPALETTE_WITHENTRIES { DWORD Index; D3DM_SETPALETTE_DATATYPE DataType; PALETTEENTRY Entries[256];} D3DM_SETPALETTE_WITHENTRIES, *LPD3DM_SETPALETTE_WITHENTRIES;
typedef struct _D3DM_STRETCHRECT { ULONG SourceId; RECT SourceRect; ULONG DestId; RECT DestRect; D3DMTEXTUREFILTERTYPE Filter;} D3DM_STRETCHRECT, * LPD3DM_STRETCHRECT;
typedef struct _D3DM_TEXTURESTAGESTATE { WORD Stage; WORD State; DWORD Value;} D3DM_TEXTURESTAGESTATE, * LPD3DM_TEXTURESTAGESTATE;
typedef struct _D3DM_TRANSFORM { D3DMTRANSFORMSTATETYPE TransformType; D3DMMATRIX Matrix; D3DMFORMAT Format;} D3DM_TRANSFORM, * LPD3DM_TRANSFORM;
typedef struct _D3DM_VERTEXBUFFER { DWORD StreamIndex; ULONG BufferId; DWORD Stride;} D3DM_VERTEXBUFFER, * LPD3DM_VERTEXBUFFER;
typedef struct _D3DM_VIEWPORT { D3DMVIEWPORT Viewport;} D3DM_VIEWPORT, * LPD3DM_VIEWPORT;
typedef struct _D3DM_CREATESURFACE_DATA { D3DMRESOURCETYPE SurfaceType; union { D3DMSURFACE_DESC SurfaceDesc; D3DMVERTEXBUFFER_DESC VertexDesc; D3DMINDEXBUFFER_DESC IndexDesc; D3DMTEXTURE_DESC TextureDesc; };

#endif /* _D3DMDDK_ */
