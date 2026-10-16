/* D3dx8tex.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 10 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _D3DX8TEX_
#define _D3DX8TEX_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 500)) /* CE 4.0..499 */

/* D3DXIMAGE_INFO  [struct; ce-only; CE 4.0..499] */
typedef struct _D3DXIMAGE_INFO {
 UINT Width;
 UINT Height;
 UINT Depth;
 UINT MipLevels;
 D3DFORMAT Format;
} D3DXIMAGE_INFO;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 500)) /* CE 4.0..499 */

/* D3DXCheckTextureRequirements  [function; ce-only; CE 4.0..499; D3dx8.lib] */
HRESULT D3DXCheckTextureRequirements(
 LPDIRECT3DDEVICE8 pDevice,
 UINT* pWidth,
 UINT* pHeight,
 UINT* pNumMipLevels,
 DWORD Usage,
 D3DFORMAT* pFormat,
 D3DPOOL Pool
);

/* D3DXCreateTexture  [function; ce-only; CE 4.0..499; D3dx8.lib] */
HRESULT D3DXCreateTexture(
 LPDIRECT3DDEVICE8 pDevice,
 UINT Width,
 UINT Height,
 UINT MipLevels,
 DWORD Usage,
 D3DFORMAT Format,
 D3DPOOL Pool,
 LPDIRECT3DTEXTURE8* ppTexture
);

/* D3DXCreateTextureFromFileEx  [function; ce-only; CE 4.0..499; D3dx8.lib] */
HRESULT D3DXCreateTextureFromFileEx(
 LPDIRECT3DDEVICE8 pDevice,
 LPCWSTR pSrcFile,
 UINT Width,
 UINT Height,
 UINT MipLevels,
 DWORD Usage,
 D3DFORMAT Format,
 D3DPOOL Pool,
 DWORD Filter,
 DWORD MipFilter,
 D3DCOLOR ColorKey,
 D3DXIMAGE_INFO* pSrcInfo,
 PALETTEENTRY* pPalette,
 LPDIRECT3DTEXTURE8* ppTexture
);

/* D3DXFilterTexture  [function; ce-only; CE 4.0..499; D3dx8.lib] */
HRESULT D3DXFilterTexture(
 LPDIRECT3DTEXTURE8 pTexture,
 CONST PALETTEENTRY* pPalette,
 UINT SrcLevel,
 DWORD MipFilter
);

/* D3DXLoadSurfaceFromFile  [function; ce-only; CE 4.0..499; D3dx8.lib] */
HRESULT D3DXLoadSurfaceFromFile(
 LPDIRECT3DSURFACE8 pDestSurface,
 CONST PALETTEENTRY* pDestPalette,
 CONST RECT* pDestRect,
 LPCWSTR pSrcFile,
 CONST RECT* pSrcRect,
 DWORD Filter,
 D3DCOLOR ColorKey,
 D3DXIMAGE_INFO* pSrcInfo
);

/* D3DXLoadSurfaceFromFileInMemory  [function; ce-only; CE 4.0..499; D3dx8.lib] */
HRESULT D3DXLoadSurfaceFromFileInMemory(
 LPDIRECT3DSURFACE8 pDestSurface,
 CONST PALETTEENTRY* pDestPalette,
 CONST RECT* pDestRect,
 LPCVOID pSrcData,
 UINT SrcData,
 CONST RECT* pSrcRect,
 DWORD Filter,
 D3DCOLOR ColorKey,
 D3DXIMAGE_INFO* pSrcInfo
);

/* D3DXLoadSurfaceFromMemory  [function; ce-only; CE 4.0..499; D3dx8.lib] */
HRESULT D3DXLoadSurfaceFromMemory(
 LPDIRECT3DSURFACE8 pDestSurface,
 CONST PALETTEENTRY* pDestPalette,
 CONST RECT* pDestRect,
 LPCVOID pSrcMemory,
 D3DFORMAT SrcFormat,
 UINT SrcPitch,
 CONST PALETTEENTRY* pSrcPalette,
 CONST RECT* pSrcRect,
 DWORD Filter,
 D3DCOLOR ColorKey
);

/* D3DXLoadSurfaceFromResource  [function; ce-only; CE 4.0..499; D3dx8.lib] */
HRESULT D3DXLoadSurfaceFromResource(
 LPDIRECT3DSURFACE8 pDestSurface,
 CONST PALETTEENTRY* pDestPalette,
 CONST RECT* pDestRect,
 HMODULE hSrcModule,
 LPCWSTR pSrcResource,
 CONST RECT* pSrcRect,
 DWORD Filter,
 D3DCOLOR ColorKey,
 D3DXIMAGE_INFO* pSrcInfo
);

/* D3DXLoadSurfaceFromSurface  [function; ce-only; CE 4.0..499; D3dx8.lib] */
HRESULT D3DXLoadSurfaceFromSurface(
 LPDIRECT3DSURFACE8 pDestSurface,
 CONST PALETTEENTRY* pDestPalette,
 CONST RECT* pDestRect,
 LPDIRECT3DSURFACE8 pSrcSurface,
 CONST PALETTEENTRY* pSrcPalette,
 CONST RECT* pSrcRect,
 DWORD Filter,
 D3DCOLOR ColorKey
);
#endif /* _WIN32_WCE */

#endif /* _D3DX8TEX_ */
