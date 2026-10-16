/* D3d8.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 10 declarations, 0 outlines, 0 base types, 0 extra macros, 27 extra decls
 */
#ifndef _D3D8_
#define _D3D8_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 500)) /* CE 4.0..499 */

/* Direct3DCreate8  [function; ce-only; CE 4.0..499; D3d8.lib] */
IDirect3D8* Direct3DCreate8(
 UINT SDKVersion
);
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
