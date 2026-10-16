/* D3d8.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 131 declarations, 0 outlines, 0 base types, 0 extra macros, 27 extra decls
 */
#ifndef _D3D8_
#define _D3D8_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 500)) /* CE 4.0..499 */

/* IDirect3D8  [struct; ce-only; CE 4.0..499; D3d8.lib] */
typedef struct IDirect3D8 *LPDIRECT3D8, *PDIRECT3D8;

/* IDirect3DBaseTexture8  [struct; ce-only; CE 4.0..499; D3d8.lib] */
typedef struct IDirect3DBaseTexture8 *LPDIRECT3DBASETEXTURE8, *PDIRECT3DBASETEXTURE8;

/* IDirect3DDevice8  [struct; ce-only; CE 4.0..499; D3d8.lib] */
typedef struct IDirect3DDevice8 *LPDIRECT3DDEVICE8, *PDIRECT3DDEVICE8;

/* IDirect3DIndexBuffer8  [struct; ce-only; CE 4.0..499; D3d8.lib] */
typedef struct IDirect3DIndexBuffer8 *LPDIRECT3DINDEXBUFFER8, *PDIRECT3DINDEXBUFFER8;

/* IDirect3DResource8  [struct; ce-only; CE 4.0..499; D3d8.lib] */
typedef struct IDirect3DResource8 *LPDIRECT3DRESOURCE8, *PDIRECT3DRESOURCE8;

/* IDirect3DSurface8  [struct; ce-only; CE 4.0..499; D3d8.lib] */
typedef struct IDirect3DSurface8 *LPDIRECT3DSURFACE8, *PDIRECT3DSURFACE8;

/* IDirect3DSwapChain8  [struct; ce-only; CE 4.0..499; D3d8.lib] */
typedef struct IDirect3DSwapChain8 *LPDIRECT3DSWAPCHAIN8, *PDIRECT3DSWAPCHAIN8;

/* IDirect3DTexture8  [struct; ce-only; CE 4.0..499; D3d8.lib] */
typedef struct IDirect3DTexture8 *LPDIRECT3DTEXTURE8, *PDIRECT3DTEXTURE8;

/* IDirect3DVertexBuffer8  [struct; ce-only; CE 4.0..499; D3d8.lib] */
typedef struct IDirect3DVertexBuffer8 *LPDIRECT3DVERTEXBUFFER8, *PDIRECT3DVERTEXBUFFER8;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 500)) /* CE 4.0..499 */

/* Direct3DCreate8  [function; ce-only; CE 4.0..499; D3d8.lib] */
IDirect3D8* Direct3DCreate8(
 UINT SDKVersion
);

/* IDirect3D8::CheckDepthStencilMatch  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT CheckDepthStencilMatch(
 UINT Adapter,
 D3DDEVTYPE DeviceType,
 D3DFORMAT AdapterFormat,
 D3DFORMAT RenderTargetFormat,
 D3DFORMAT DepthStencilFormat
);

/* IDirect3D8::CheckDeviceFormat  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT CheckDeviceFormat(
 UINT Adapter,
 D3DDEVTYPE DeviceType,
 D3DFORMAT AdapterFormat,
 DWORD Usage,
 D3DRESOURCETYPE RType,
 D3DFORMAT CheckFormat
);

/* IDirect3D8::CheckDeviceMultiSampleType  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT CheckDeviceMultiSampleType(
 UINT Adapter,
 D3DDEVTYPE DeviceType,
 D3DFORMAT SurfaceFormat,
 BOOL Windowed,
 D3DMULTISAMPLE_TYPE MultiSampleType
);

/* IDirect3D8::CheckDeviceType  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT CheckDeviceType(
 UINT Adapter,
 D3DDEVTYPE CheckType,
 D3DFORMAT DisplayFormat,
 D3DFORMAT BackBufferFormat,
 BOOL Windowed
);

/* IDirect3D8::CreateDevice  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT CreateDevice(
 UINT Adapter,
 D3DDEVTYPE DeviceType,
 HWND hFocusWindow,
 DWORD BehaviorFlags,
 D3DPRESENT_PARAMETERS* pPresentationParameters,
 IDirect3DDevice8** ppReturnedDeviceInterface
);

/* IDirect3D8::EnumAdapterModes  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT EnumAdapterModes(
 UINT Adapter,
 UINT Mode,
 D3DDISPLAYMODE* pMode
);

/* IDirect3D8::GetAdapterCount  [function; ce-only; CE 4.0..499; D3d8.lib] */
UINT GetAdapterCount();

/* IDirect3D8::GetAdapterDisplayMode  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT GetAdapterDisplayMode(
 UINT Adapter,
 D3DDISPLAYMODE* pMode
);

/* IDirect3D8::GetAdapterIdentifier  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT GetAdapterIdentifier(
 UINT Adapter,
 DWORD Flags,
 D3DADAPTER_IDENTIFIER8* pIdentifier
);

/* IDirect3D8::GetAdapterModeCount  [function; ce-only; CE 4.0..499; D3d8.lib] */
UINT GetAdapterModeCount(
 UINT Adapter
);

/* IDirect3D8::GetAdapterMonitor  [function; ce-only; CE 4.0..499; D3d8.lib] */
HMONITOR GetAdapterMonitor(
 UINT Adapter
);

/* IDirect3D8::GetDeviceCaps  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT GetDeviceCaps(
 UINT Adapter,
 D3DDEVTYPE DeviceType,
 D3DCAPS8* pCaps
);

/* IDirect3D8::RegisterSoftwareDevice  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT RegisterSoftwareDevice(
 void* pInitializeFunction
);

/* IDirect3DBaseTexture8::GetLevelCount  [function; ce-only; CE 4.0..499; D3d8.lib] */
DWORD GetLevelCount();

/* IDirect3DBaseTexture8::GetLOD  [function; ce-only; CE 4.0..499; D3d8.lib] */
DWORD GetLOD();

/* IDirect3DBaseTexture8::SetLOD  [function; ce-only; CE 4.0..499; D3d8.lib] */
DWORD SetLOD(
 DWORD LODNew
);

/* IDirect3DDevice8::ApplyStateBlock  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT ApplyStateBlock(
 DWORD Token
);

/* IDirect3DDevice8::BeginScene  [function; ce-only; CE 4.0..499; D3d8.lib] */
RESULT BeginScene();

/* IDirect3DDevice8::BeginStateBlock  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT BeginStateBlock();

/* IDirect3DDevice8::CaptureStateBlock  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT CaptureStateBlock(
 DWORD Token
);

/* IDirect3DDevice8::Clear  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT Clear(
 DWORD Count,
 CONST D3DRECT* pRects,
 DWORD Flags,
 D3DCOLOR Color,
 float Z,
 DWORD Stencil
);

/* IDirect3DDevice8::CopyRects  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT CopyRects(
 IDirect3DSurface8* pSourceSurface,
 CONST RECT* pSourceRectsArray,
 UINT cRects,
 IDirect3DSurface8* pDestinationSurface,
 CONST POINT* pDestPointsArray
);

/* IDirect3DDevice8::CreateAdditionalSwapChain  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT CreateAdditionalSwapChain(
 D3DPRESENT_PARAMETERS* pPresentationParameters,
 IDirect3DSwapChain8** ppSwapChain
);

/* IDirect3DDevice8::CreateDepthStencilSurface  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT CreateDepthStencilSurface(
 UINT Width,
 UINT Height,
 D3DFORMAT Format,
 D3DMULTISAMPLE_TYPE MultiSample,
 IDirect3DSurface8** ppSurface
);

/* IDirect3DDevice8::CreateImageSurface  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT CreateImageSurface(
 UINT Width,
 UINT Height,
 D3DFORMAT Format,
 IDirect3DSurface8** ppSurface
);

/* IDirect3DDevice8::CreateIndexBuffer  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT CreateIndexBuffer(
 UINT Length,
 DWORD Usage,
 D3DFORMAT Format,
 D3DPOOL Pool,
 IDirect3DIndexBuffer8** ppIndexBuffer
);

/* IDirect3DDevice8::CreateRenderTarget  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT CreateRenderTarget(
 UINT Width,
 UINT Height,
 D3DFORMAT Format,
 D3DMULTISAMPLE_TYPE MultiSample,
 BOOL Lockable,
 IDirect3DSurface8** ppSurface
);

/* IDirect3DDevice8::CreateStateBlock  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT CreateStateBlock(
 D3DSTATEBLOCKTYPE Type,
 DWORD* pToken
);

/* IDirect3DDevice8::CreateTexture  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT CreateTexture(
 UINT Width,
 UINT Height,
 UINT Levels,
 DWORD Usage,
 D3DFORMAT Format,
 D3DPOOL Pool,
 IDirect3DTexture8** ppTexture
);

/* IDirect3DDevice8::CreateVertexBuffer  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT CreateVertexBuffer(
 UINT Length,
 DWORD Usage,
 DWORD FVF,
 D3DPOOL Pool,
 IDirect3DVertexBuffer8** ppVertexBuffer
);

/* IDirect3DDevice8::DeleteStateBlock  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT DeleteStateBlock(
 DWORD Token
);

/* IDirect3DDevice8::DrawIndexedPrimitive  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT DrawIndexedPrimitive(
 D3DPRIMITIVETYPE Type,
 UINT MinIndex,
 UINT NumVertices,
 UINT StartIndex,
 UINT PrimitiveCount
);

/* IDirect3DDevice8::DrawIndexedPrimitiveUP  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT DrawIndexedPrimitiveUP(
 D3DPRIMITIVETYPE PrimitiveType,
 UINT MinIndex,
 UINT NumVertices,
 UINT PrimitiveCount,
 CONST void* pIndexData,
 D3DFORMAT IndexDataFormat,
 CONST void* pVertexStreamZeroData,
 UINT VertexStreamZeroStride
);

/* IDirect3DDevice8::DrawPrimitive  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT DrawPrimitive(
 D3DPRIMITIVETYPE PrimitiveType,
 UINT StartVertex,
 UINT PrimitiveCount
);

/* IDirect3DDevice8::DrawPrimitiveUP  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT DrawPrimitiveUP(
 D3DPRIMITIVETYPE PrimitiveType,
 UINT PrimitiveCount,
 CONST void* pVertexStreamZeroData,
 UINT VertexStreamZeroStride
);

/* IDirect3DDevice8::EndScene  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT EndScene();

/* IDirect3DDevice8::EndStateBlock  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT EndStateBlock(
 DWORD* pToken
);

/* IDirect3DDevice8::GetAvailableTextureMem  [function; ce-only; CE 4.0..499; D3d8.lib] */
UINT GetAvailableTextureMem();

/* IDirect3DDevice8::GetBackBuffer  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT GetBackBuffer(
 UINT BackBuffer,
 D3DBACKBUFFER_TYPE Type,
 IDirect3DSurface8** ppBackBuffer
);

/* IDirect3DDevice8::GetClipPlane  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT GetClipPlane(
 DWORD Index,
 float* pPlane
);

/* IDirect3DDevice8::GetClipStatus  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT GetClipStatus(
 D3DCLIPSTATUS8* pClipStatus
);

/* IDirect3DDevice8::GetCreationParameters  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT GetCreationParameters(
 D3DDEVICE_CREATION_PARAMETERS* pParameters
);

/* IDirect3DDevice8::GetCurrentTexturePalette  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT GetCurrentTexturePalette(
 UINT* pPaletteNumber
);

/* IDirect3DDevice8::GetDepthStencilSurface  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT GetDepthStencilSurface(
 IDirect3DSurface8** ppZStencilSurface
);

/* IDirect3DDevice8::GetDeviceCaps  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT GetDeviceCaps(
 D3DCAPS8* pCaps
);

/* IDirect3DDevice8::GetDirect3D  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT GetDirect3D(
 IDirect3D8** ppD3D8
);

/* IDirect3DDevice8::GetDisplayMode  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT GetDisplayMode(
 D3DDISPLAYMODE* pMode
);

/* IDirect3DDevice8::GetFrontBuffer  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT GetFrontBuffer(
 IDirect3DSurface8* pDestSurface
);

/* IDirect3DDevice8::GetGammaRamp  [function; ce-only; CE 4.0..499; D3d8.lib] */
void GetGammaRamp(
 D3DGAMMARAMP* pRamp
);

/* IDirect3DDevice8::GetIndices  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT GetIndices(
 IDirect3DIndexBuffer8** ppIndexData,
 UINT* pBaseVertexIndex
);

/* IDirect3DDevice8::GetInfo  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT GetInfo(
 DWORD DevInfoID,
 VOID* pDevInfoStruct,
 DWORD DevInfoStructSize
);

/* IDirect3DDevice8::GetLight  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT GetLight(
 DWORD Index,
 D3DLIGHT8* pLight
);

/* IDirect3DDevice8::GetLightEnable  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT GetLightEnable(
 DWORD Index,
 BOOL* pEnable
);

/* IDirect3DDevice8::GetMaterial  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT GetMaterial(
 D3DMATERIAL8* pMaterial
);

/* IDirect3DDevice8::GetPaletteEntries  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT GetPaletteEntries(
 UINT PaletteNumber,
 PALETTEENTRY* pEntries
);

/* IDirect3DDevice8::GetRasterStatus  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT GetRasterStatus(
 D3DRASTER_STATUS* pRasterStatus
);

/* IDirect3DDevice8::GetRenderState  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT GetRenderState(
 D3DRENDERSTATETYPE State,
 DWORD* pValue
);

/* IDirect3DDevice8::GetRenderTarget  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT GetRenderTarget(
 IDirect3DSurface8** ppRenderTarget
);

/* IDirect3DDevice8::GetStreamSource  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT GetStreamSource(
 UINT StreamNumber,
 IDirect3DVertexBuffer8** ppStreamData,
 UINT* pStride
);

/* IDirect3DDevice8::GetTexture  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT GetTexture(
 DWORD Stage,
 IDirect3DBaseTexture8** ppTexture
);

/* IDirect3DDevice8::GetTextureStageState  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT GetTextureStageState(
 DWORD Stage,
 D3DTEXTURESTAGESTATETYPE Type,
 DWORD* pValue
);

/* IDirect3DDevice8::GetTransform  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT GetTransform(
 D3DTRANSFORMSTATETYPE State,
 D3DMATRIX* pMatrix
);

/* IDirect3DDevice8::GetVertexShader  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT GetVertexShader(
 DWORD* pHandle
);

/* IDirect3DDevice8::GetViewport  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT GetViewport(
 D3DVIEWPORT8* pViewport
);

/* IDirect3DDevice8::LightEnable  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT LightEnable(
 DWORD LightIndex,
 BOOL bEnable
);

/* IDirect3DDevice8::MultiplyTransform  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT MultiplyTransform(
 D3DTRANSFORMSTATETYPE State,
 CONST D3DMATRIX* pMatrix
);

/* IDirect3DDevice8::Present  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT Present(
 CONST RECT* pSourceRect,
 CONST RECT* pDestRect,
 HWND hDestWindowOverride,
 CONST RGNDATA* pDirtyRegion
);

/* IDirect3DDevice8::ProcessVertices  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT ProcessVertices(
 UINT SrcStartIndex,
 UINT DestIndex,
 UINT VertexCount,
 IDirect3DVertexBuffer8* pDestBuffer,
 DWORD Flags
);

/* IDirect3DDevice8::Reset  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT Reset(
 D3DPRESENT_PARAMETERS* pPresentationParameters
);

/* IDirect3DDevice8::ResourceManagerDiscardBytes  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT ResourceManagerDiscardBytes(
 DWORD Bytes
);

/* IDirect3DDevice8::SetClipPlane  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT SetClipPlane(
 DWORD Index,
 CONST float* pPlane
);

/* IDirect3DDevice8::SetClipStatus  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT SetClipStatus(
 CONST D3DCLIPSTATUS8* pClipStatus
);

/* IDirect3DDevice8::SetCurrentTexturePalette  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT SetCurrentTexturePalette(
 UINT PaletteNumber
);

/* IDirect3DDevice8::SetCursorPosition  [function; ce-only; CE 4.0..499; D3d8.lib] */
void SetCursorPosition(
 UINT XScreenSpace,
 UINT YScreenSpace,
 DWORD Flags
);

/* IDirect3DDevice8::SetCursorProperties  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT SetCursorProperties(
 UINT XHotSpot,
 UINT YHotSpot,
 IDirect3DSurface8* pCursorBitmap
);

/* IDirect3DDevice8::SetGammaRamp  [function; ce-only; CE 4.0..499; D3d8.lib] */
void SetGammaRamp(
 DWORD Flags,
 CONST D3DGAMMARAMP* pRamp
);

/* IDirect3DDevice8::SetIndices  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT SetIndices(
 IDirect3DIndexBuffer8* pIndexData,
 UINT BaseVertexIndex
);

/* IDirect3DDevice8::SetLight  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT SetLight(
 DWORD Index,
 CONST D3DLIGHT8* pLight
);

/* IDirect3DDevice8::SetMaterial  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT SetMaterial(
 CONST D3DMATERIAL8* pMaterial
);

/* IDirect3DDevice8::SetPaletteEntries  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT SetPaletteEntries(
 UINT PaletteNumber,
 CONST PALETTEENTRY* pEntries
);

/* IDirect3DDevice8::SetRenderState  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT SetRenderState(
 D3DRENDERSTATETYPE State,
 DWORD Value
);

/* IDirect3DDevice8::SetRenderTarget  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT SetRenderTarget(
 IDirect3DSurface8* pRenderTarget,
 IDirect3DSurface8* pNewZStencil
);

/* IDirect3DDevice8::SetStreamSource  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT SetStreamSource(
 UINT StreamNumber,
 IDirect3DVertexBuffer8* pStreamData,
 UINT Stride
);

/* IDirect3DDevice8::SetTexture  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT SetTexture(
 DWORD Stage,
 IDirect3DBaseTexture8* pTexture
);

/* IDirect3DDevice8::SetTextureStageState  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT SetTextureStageState(
 DWORD Stage,
 D3DTEXTURESTAGESTATETYPE Type,
 DWORD Value
);

/* IDirect3DDevice8::SetTransform  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT SetTransform(
 D3DTRANSFORMSTATETYPE State,
 CONST D3DMATRIX* pMatrix
);

/* IDirect3DDevice8::SetVertexShader  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT SetVertexShader(
 DWORD Handle
);

/* IDirect3DDevice8::SetViewport  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT SetViewport(
 CONST D3DVIEWPORT8* pViewport
);

/* IDirect3DDevice8::ShowCursor  [function; ce-only; CE 4.0..499; D3d8.lib] */
BOOL ShowCursor(
 BOOL bShow
);

/* IDirect3DDevice8::TestCooperativeLevel  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT TestCooperativeLevel();

/* IDirect3DDevice8::UpdateTexture  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT UpdateTexture(
 IDirect3DBaseTexture8* pSourceTexture,
 IDirect3DBaseTexture8* pDestinationTexture
);

/* IDirect3DDevice8::ValidateDevice  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT ValidateDevice(
 DWORD* pNumPasses
);

/* IDirect3DIndexBuffer8::GetDesc  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT GetDesc(
D3DINDEXBUFFER_DESC *pDesc
);

/* IDirect3DIndexBuffer8::Lock  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT Lock(
 UINT OffsetToLock,
 UINT SizeToLock,
 BYTE** ppbData,
 DWORD Flags
);

/* IDirect3DIndexBuffer8::Unlock  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT Unlock();

/* IDirect3DResource8::FreePrivateData  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT FreePrivateData(
 REFGUID refguid
);

/* IDirect3DResource8::GetDevice  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT GetDevice(
 IDirect3DDevice8** ppDevice
);

/* IDirect3DResource8::GetPriority  [function; ce-only; CE 4.0..499; D3d8.lib] */
DWORD GetPriority();

/* IDirect3DResource8::GetPrivateData  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT GetPrivateData(
 REFGUID refguid,
 void* pData,
 DWORD* pSizeOfData
);

/* IDirect3DResource8::GetType  [function; ce-only; CE 4.0..499; D3d8.lib] */
D3DRESOURCETYPE GetType();

/* IDirect3DResource8::PreLoad  [function; ce-only; CE 4.0..499; D3d8.lib] */
void PreLoad();

/* IDirect3DResource8::SetPriority  [function; ce-only; CE 4.0..499; D3d8.lib] */
DWORD SetPriority(
 DWORD PriorityNew
);

/* IDirect3DResource8::SetPrivateData  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT SetPrivateData(
 REFGUID refguid,
 CONST void* pData,
 DWORD SizeOfData,
 DWORD Flags
);

/* IDirect3DSurface8::FreePrivateData  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT FreePrivateData(
 REFGUID refguid
);

/* IDirect3DSurface8::GetContainer  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT GetContainer(
 REFIID riid,
 void** ppContainer
);

/* IDirect3DSurface8::GetDesc  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT GetDesc(
 D3DSURFACE_DESC* pDesc
);

/* IDirect3DSurface8::GetDevice  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT GetDevice(
 IDirect3DDevice8** ppDevice
);

/* IDirect3DSurface8::GetPrivateData  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT GetPrivateData(
 REFGUID refguid,
 void* pData,
 DWORD* pSizeOfData
);

/* IDirect3DSurface8::LockRect  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT LockRect(
 D3DLOCKED_RECT* pLockedRect,
 CONST RECT* pRect,
 DWORD Flags
);

/* IDirect3DSurface8::SetPrivateData  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT SetPrivateData(
 REFGUID refguid,
 void* pData,
 DWORD SizeOfData,
 DWORD Flags
);

/* IDirect3DSurface8::UnlockRect  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT UnlockRect();

/* IDirect3DSwapChain8::GetBackBuffer  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT GetBackBuffer(
 UINT BackBuffer,
 D3DBACKBUFFER_TYPE Type,
 IDirect3DSurface8** ppBackBuffer
);

/* IDirect3DSwapChain8::Present  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT Present(
 CONST RECT* pSourceRect,
 CONST RECT* pDestRect,
 HWND hDestWindowOverride,
 CONST RGNDATA* pDirtyRegion
);

/* IDirect3DTexture8::AddDirtyRect  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT AddDirtyRect(
 CONST RECT* pDirtyRect
);

/* IDirect3DTexture8::GetLevelDesc  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT GetLevelDesc(
 UINT Level,
 D3DSURFACE_DESC* pDesc
);

/* IDirect3DTexture8::GetSurfaceLevel  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT GetSurfaceLevel(
 UINT Level,
 Direct3DSurface8** ppSurfaceLevel
);

/* IDirect3DTexture8::LockRect  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT LockRect(
 UINT Level,
 D3DLOCKED_RECT* pLockedRect,
 CONST RECT* pRect,
 DWORD Flags
);

/* IDirect3DTexture8::UnlockRect  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT UnlockRect(
 UINT Level
);

/* IDirect3DVertexBuffer8::GetDesc  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT GetDesc(
 D3DVERTEXBUFFER_DESC* pDesc
);

/* IDirect3DVertexBuffer8::Lock  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT Lock(
 UINT OffsetToLock,
 UINT SizeToLock,
 BYTE** ppbData,
 DWORD Flags
);

/* IDirect3DVertexBuffer8::Unlock  [function; ce-only; CE 4.0..499; D3d8.lib] */
HRESULT Unlock();
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct IDirect3D8 *LPDIRECT3D8, *PDIRECT3D8;
typedef struct IDirect3DBaseTexture8 *LPDIRECT3DBASETEXTURE8, *PDIRECT3DBASETEXTURE8;
typedef struct IDirect3DDevice8 *LPDIRECT3DDEVICE8, *PDIRECT3DDEVICE8;
typedef struct IDirect3DIndexBuffer8 *LPDIRECT3DINDEXBUFFER8, *PDIRECT3DINDEXBUFFER8;
typedef struct IDirect3DResource8 *LPDIRECT3DRESOURCE8, *PDIRECT3DRESOURCE8;
typedef struct IDirect3DSurface8 *LPDIRECT3DSURFACE8, *PDIRECT3DSURFACE8;
typedef struct IDirect3DSwapChain8 *LPDIRECT3DSWAPCHAIN8, *PDIRECT3DSWAPCHAIN8;
typedef struct IDirect3DTexture8 *LPDIRECT3DTEXTURE8, *PDIRECT3DTEXTURE8;
typedef struct IDirect3DVertexBuffer8 *LPDIRECT3DVERTEXBUFFER8, *PDIRECT3DVERTEXBUFFER8;

/* function */
HRESULT ApplyStateBlock( DWORD Token );
HRESULT BeginStateBlock();
HRESULT CaptureStateBlock( DWORD Token );
HRESULT CreateStateBlock( D3DSTATEBLOCKTYPE Type, DWORD* pToken );
HRESULT DeleteStateBlock( DWORD Token );
HRESULT DrawIndexedPrimitiveUP( D3DPRIMITIVETYPE PrimitiveType, UINT MinIndex, UINT NumVertices, UINT PrimitiveCount, CONST void* pIndexData, D3DFORMAT IndexDataFormat, CONST void* pVertexStreamZeroData, UINT VertexStreamZeroStride );
HRESULT DrawPrimitiveUP( D3DPRIMITIVETYPE PrimitiveType, UINT PrimitiveCount, CONST void* pVertexStreamZeroData, UINT VertexStreamZeroStride );
HRESULT EndStateBlock( DWORD* pToken );
HMONITOR GetAdapterMonitor( UINT Adapter );
UINT GetAvailableTextureMem();
HRESULT GetClipPlane( DWORD Index, float* pPlane );
void GetGammaRamp( D3DGAMMARAMP* pRamp );
HRESULT GetRasterStatus( D3DRASTER_STATUS* pRasterStatus );
HRESULT GetVertexShader( DWORD* pHandle );
HRESULT MultiplyTransform( D3DTRANSFORMSTATETYPE State, CONST D3DMATRIX* pMatrix );
HRESULT SetClipPlane( DWORD Index, CONST float* pPlane );
void SetGammaRamp( DWORD Flags, CONST D3DGAMMARAMP* pRamp );
HRESULT SetVertexShader( DWORD Handle );

#endif /* _D3D8_ */
