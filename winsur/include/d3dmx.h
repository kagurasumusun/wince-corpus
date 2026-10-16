/* d3dmx.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 65 declarations, 10 outlines, 0 base types, 0 extra macros, 6 extra decls
 */
#ifndef _D3DMX_
#define _D3DMX_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* D3DMXDivFxd  [macro; ce-only] */
#define D3DMXDivFxd( fxdA, fxdB ) ((FIXED) \
 (((_int64)(fxdA) << 16) / (_int64)(fxdB)))

/* D3DMXMATRIX  [struct; ce-only] */

/* D3DMXMATRIXFXD  [struct; ce-only] */

/* D3DMXMulFxd  [macro; ce-only] */
#define D3DMXMulFxd( fxdA, fxdB ) ((FIXED) \
 (((_int64)(fxdA) * (_int64)(fxdB)) >> 16))

/* D3DMXToDegree  [macro; ce-only] */

/* D3DMXToDegreeFxd  [macro; ce-only] */
#define D3DMXToDegreeFxd( radian ) \
 D3DMXMulFxd(radian, D3DMXDivFxd(D3DMXToFixed(180.0f), D3DMX_PI_FXD))

/* D3DMXToFixed  [macro; ce-only] */

/* D3DMXToFloat  [macro; ce-only] */

/* D3DMXToRadian  [macro; ce-only] */

/* D3DMXToRadianFxd  [macro; ce-only] */
#define D3DMXToRadianFxd( degree ) \
 D3DMXMulFxd(degree, D3DMXDivFxd(D3DMX_PI_FXD, D3DMXToFixed(180.0f)))

/* D3DMXVECTOR3  [struct; ce-only] */

/* D3DMXVECTOR3FXD  [struct; ce-only] */

/* D3DMXVECTOR4  [struct; ce-only] */

/* D3DMXVECTOR4FXD  [struct; ce-only] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* FIXED  [typedef, struct; shared] */
typedef int FIXED; // signed 15.16 fixed-point format

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* D3DMXCheckTextureRequirements  [function; ce-only; CE 6.0..699; D3dmx.lib] */
HRESULT WINAPI D3DMXCheckTextureRequirements(
 LPDIRECT3DMOBILEDEVICE pDevice,
 UINT* pWidth,
 UINT* pHeight,
 UINT* pNumMipLevels,
 DWORD Usage,
 D3DMFORMAT* pFormat,
 D3DMPOOL Pool
);

/* D3DMXCreateTexture  [function; ce-only; CE 6.0..699; D3dmx.lib] */
HRESULT WINAPI D3DMXCreateTexture(
 LPDIRECT3DMOBILEDEVICE pDevice,
 UINT Width,
 UINT Height,
 UINT MipLevels,
 DWORD Usage,
 D3DMFORMAT Format,
 D3DMPOOL Pool,
 LPDIRECT3DMOBILETEXTURE* ppTexture
);

/* D3DMXCreateTextureFromFileEx  [function; ce-only; CE 6.0..699; D3dmx.lib] */
HRESULT WINAPI D3DMXCreateTextureFromFileExW(
 LPDIRECT3DMOBILEDEVICE pDevice,
 LPCWSTR pSrcFile,
 UINT Width,
 UINT Height,
 UINT MipLevels,
 DWORD Usage,
 D3DMFORMAT Format,
 D3DMPOOL Pool,
 DWORD Filter,
 DWORD MipFilter,
 D3DMCOLOR ColorKey,
 D3DMXIMAGE_INFO* pSrcInfo,
 PALETTEENTRY* pPalette,
 LPDIRECT3DMOBILETEXTURE* ppTexture
);
#define D3DMXCreateTextureFromFileEx D3DMXCreateTextureFromFileExW

/* D3DMXCreateTextureFromResourceEx  [function; ce-only; CE 6.0..699; D3dmx.lib] */
HRESULT WINAPI D3DMXCreateTextureFromResourceExW(
 LPDIRECT3DMOBILEDEVICE pDevice,
 HMODULE hSrcModule,
 LPCWSTR pSrcResource,
 UINT Width,
 UINT Height,
 UINT MipLevels,
 DWORD Usage,
 D3DMFORMAT Format,
 D3DMPOOL Pool,
 DWORD Filter,
 DWORD MipFilter,
 D3DMCOLOR ColorKey,
 D3DMXIMAGE_INFO* pSrcInfo,
 PALETTEENTRY* pPalette,
 LPDIRECT3DMOBILETEXTURE* ppTexture
);
#define D3DMXCreateTextureFromResourceEx
D3DMXCreateTextureFromResourceExW

/* D3DMXLoadSurfaceFromFile  [function; ce-only; CE 6.0..699; D3dmx.lib] */
HRESULT WINAPI D3DMXLoadSurfaceFromFileW(
 LPDIRECT3DMOBILESURFACE pDestSurface,
 CONST PALETTEENTRY* pDestPalette,
 CONST RECT* pDestRect,
 LPCWSTR pSrcFile,
 CONST RECT* pSrcRect,
 DWORD Filter,
 D3DMCOLOR ColorKey,
 D3DMXIMAGE_INFO* pSrcInfo
);
#define D3DMXLoadSurfaceFromFile D3DMXLoadSurfaceFromFileW

/* D3DMXLoadSurfaceFromFileInMemory  [function; ce-only; CE 6.0..699; D3dmx.lib] */
HRESULT WINAPI D3DMXLoadSurfaceFromFileInMemory(
 LPDIRECT3DMOBILESURFACE pDestSurface,
 CONST PALETTEENTRY* pDestPalette,
 CONST RECT* pDestRect,
 LPCVOID pSrcData,
 UINT SrcDataSize,
 CONST RECT* pSrcRect,
 DWORD Filter,
 D3DMCOLOR ColorKey,
 D3DMXIMAGE_INFO* pSrcInfo
);

/* D3DMXLoadSurfaceFromResource  [function; ce-only; CE 6.0..699; D3dmx.lib] */
HRESULT WINAPI D3DMXLoadSurfaceFromResourceW(
 LPDIRECT3DMOBILESURFACE pDestSurface,
 CONST PALETTEENTRY* pDestPalette,
 CONST RECT* pDestRect,
 HMODULE hSrcModule,
 LPCWSTR pSrcResource,
 CONST RECT* pSrcRect,
 DWORD Filter,
 D3DMCOLOR ColorKey,
 D3DMXIMAGE_INFO* pSrcInfo
);
#define D3DMXLoadSurfaceFromResource D3DMXLoadSurfaceFromResourceW

/* D3DMXLoadSurfaceFromSurface  [function; ce-only; CE 6.0..699; D3dmx.lib] */
HRESULT WINAPI D3DMXLoadSurfaceFromSurface(
 LPDIRECT3DMOBILESURFACE pDestSurface,
 CONST PALETTEENTRY* pDestPalette,
 CONST RECT* pDestRect,
 LPDIRECT3DMOBILESURFACE pSrcSurface,
 CONST PALETTEENTRY* pSrcPalette,
 CONST RECT* pSrcRect,
 DWORD Filter,
 D3DMCOLOR ColorKey
);

/* D3DMXMatrixfDeterminant  [function; ce-only; CE 6.0..699; D3dmx.lib] */
FLOAT WINAPI D3DMXMatrixfDeterminant(
 CONST D3DMXMATRIX* pM
);

/* D3DMXMatrixfDeterminantFxd  [function; ce-only; CE 6.0..699; D3dmx.lib] */
FIXED WINAPI D3DMXMatrixfDeterminantFxd(
 CONST D3DMXMATRIXFXD* pM
);

/* D3DMXMatrixInverse  [function; ce-only; CE 6.0..699; D3dmx.lib] */
D3DMXMATRIX* WINAPI D3DMXMatrixInverse(
 D3DMXMATRIX* pOut,
 FLOAT* pDeterminant,
 CONST D3DMXMATRIX* pM
);

/* D3DMXMatrixInverseFxd  [function; ce-only; CE 6.0..699; D3dmx.lib] */
D3DMXMATRIXFXD* WINAPI D3DMXMatrixInverseFxd(
 D3DMXMATRIXFXD* pOut,
 FIXED* pDeterminant,
 CONST D3DMXMATRIXFXD* pM
);

/* D3DMXMatrixLookAtLH  [function; ce-only; CE 6.0..699; D3dmx.lib] */
D3DMXMATRIX* WINAPI D3DMXMatrixLookAtLH(
 D3DMXMATRIX* pOut,
 CONST D3DMXVECTOR3* pEye,
 CONST D3DMXVECTOR3* pAt,
 CONST D3DMXVECTOR3* pUp
);

/* D3DMXMatrixLookAtLHFxd  [function; ce-only; CE 6.0..699; D3dmx.lib] */
D3DMXMATRIXFXD* WINAPI D3DMXMatrixLookAtLHFxd(
 D3DMXMATRIXFXD* pOut,
 CONST D3DMXVECTOR3FXD* pEye,
 CONST D3DMXVECTOR3FXD* pAt,
 CONST D3DMXVECTOR3FXD* pUp
);

/* D3DMXMatrixMultiply  [function; ce-only; CE 6.0..699; D3dmx.lib] */
D3DMXMATRIX* WINAPI D3DMXMatrixMultiply(
 D3DMXMATRIX* pOut,
 CONST D3DMXMATRIX* pM1,
 CONST D3DMXMATRIX* pM2
);

/* D3DMXMatrixMultiplyFxd  [function; ce-only; CE 6.0..699; D3dmx.lib] */
D3DMXMATRIXFXD* WINAPI D3DMXMatrixMultiplyFxd(
 D3DMXMATRIXFXD* pOut,
 CONST D3DMXMATRIXFXD* pM1,
 CONST D3DMXMATRIXFXD* pM2
);

/* D3DMXMatrixOrthoOffCenterLH  [function; ce-only; CE 6.0..699; D3dmx.lib] */
D3DMXMATRIX* WINAPI D3DMXMatrixOrthoOffCenterLH(
 D3DMXMATRIX* pOut,
 FLOAT l,
 FLOAT r,
 FLOAT b,
 FLOAT t,
 FLOAT zn,
 FLOAT zf
);

/* D3DMXMatrixOrthoOffCenterLHFxd  [function; ce-only; CE 6.0..699; D3dmx.lib] */
D3DMXMATRIXFXD* WINAPI D3DMXMatrixOrthoOffCenterLHFxd(
 D3DMXMATRIXFXD* pOut,
 FIXED l,
 FIXED r,
 FIXED b,
 FIXED t,
 FIXED zn,
 FIXED zf
);

/* D3DMXMatrixPerspectiveFovLH  [function; ce-only; CE 6.0..699; D3dmx.lib] */
D3DMXMATRIX* WINAPI D3DMXMatrixPerspectiveFovLH(
 D3DMXMATRIX* pOut,
 FLOAT fovy,
 FLOAT Aspect,
 FLOAT zn,
 FLOAT zf
);

/* D3DMXMatrixPerspectiveFovLHFxd  [function; ce-only; CE 6.0..699; D3dmx.lib] */
D3DMXMATRIXFXD* WINAPI D3DMXMatrixPerspectiveFovLHFxd(
 D3DMXMATRIXFXD* pOut,
 FIXED fovy,
 FIXED Aspect,
 FIXED zn,
 FIXED zf
);

/* D3DMXMatrixPerspectiveOffCenterLH  [function; ce-only; CE 6.0..699; D3dmx.lib] */
D3DMXMATRIX* WINAPI D3DMXMatrixPerspectiveOffCenterLH(
 D3DMXMATRIX* pOut,
 FLOAT l,
 FLOAT r,
 FLOAT b,
 FLOAT t,
 FLOAT zn,
 FLOAT zf
);

/* D3DMXMatrixPerspectiveOffCenterLHFxd  [function; ce-only; CE 6.0..699; D3dmx.lib] */
D3DMXMATRIXFXD* WINAPI D3DMXMatrixPerspectiveOffCenterLHFxd(
 D3DMXMATRIXFXD* pOut,
 FIXED l,
 FIXED r,
 FIXED b,
 FIXED t,
 FIXED zn,
 FIXED zf
);

/* D3DMXMatrixRotationAxis  [function; ce-only; CE 6.0..699; D3dmx.lib] */
D3DMXMATRIX* WINAPI D3DMXMatrixRotationAxis(
 D3DMXMATRIX* pOut,
 CONST D3DMXVECTOR3* pV,
 FLOAT Angle
);

/* D3DMXMatrixRotationAxisFxd  [function; ce-only; CE 6.0..699; D3dmx.lib] */
D3DMXMATRIXFXD* WINAPI D3DMXMatrixRotationAxisFxd(
 D3DMXMATRIXFXD* pOut,
 CONST D3DMXVECTOR3FXD* pV,
 FIXED Angle
);

/* D3DMXMatrixRotationX  [function; ce-only; CE 6.0..699; D3dmx.lib] */
D3DMXMATRIX* WINAPI D3DMXMatrixRotationX(
 D3DMXMATRIX* pOut,
 FLOAT Angle
);

/* D3DMXMatrixRotationXFxd  [function; ce-only; CE 6.0..699; D3dmx.lib] */
D3DMXMATRIXFXD* WINAPI D3DMXMatrixRotationXFxd(
 D3DMXMATRIXFXD* pOut,
 FIXED Angle
);

/* D3DMXMatrixRotationY  [function; ce-only; CE 6.0..699; D3dmx.lib] */
D3DMXMATRIX* WINAPI D3DMXMatrixRotationY(
 D3DMXMATRIX* pOut,
 FLOAT Angle
);

/* D3DMXMatrixRotationYawPitchRoll  [function; ce-only; CE 6.0..699; D3dmx.lib] */
D3DMXMATRIX* WINAPI D3DMXMatrixRotationYawPitchRoll(
 D3DMXMATRIX* pOut,
 FLOAT Yaw,
 FLOAT Pitch,
 FLOAT Roll
);

/* D3DMXMatrixRotationYawPitchRollFxd  [function; ce-only; CE 6.0..699; D3dmx.lib] */
D3DMXMATRIXFXD* WINAPI D3DMXMatrixRotationYawPitchRollFxd(
 D3DMXMATRIXFXD* pOut,
 FIXED Yaw,
 FIXED Pitch,
 FIXED Roll
);

/* D3DMXMatrixRotationYFxd  [function; ce-only; CE 6.0..699; D3dmx.lib] */
D3DMXMATRIXFXD* WINAPI D3DMXMatrixRotationYFxd(
 D3DMXMATRIXFXD* pOut,
 FIXED Angle
);

/* D3DMXMatrixRotationZ  [function; ce-only; CE 6.0..699; D3dmx.lib] */
D3DMXMATRIX* WINAPI D3DMXMatrixRotationZ(
 D3DMXMATRIX* pOut,
 FLOAT Angle
);

/* D3DMXMatrixRotationZFxd  [function; ce-only; CE 6.0..699; D3dmx.lib] */
D3DMXMATRIXFXD* WINAPI D3DMXMatrixRotationZFxd(
 D3DMXMATRIXFXD* pOut,
 FIXED Angle
);

/* D3DMXMatrixScaling  [function; ce-only; CE 6.0..699; D3dmx.lib] */
D3DMXMATRIX* WINAPI D3DMXMatrixScaling(
 D3DMXMATRIX* pOut,
 FLOAT sx,
 FLOAT sy,
 FLOAT sz
);

/* D3DMXMatrixScalingFxd  [function; ce-only; CE 6.0..699; D3dmx.lib] */
D3DMXMATRIXFXD* WINAPI D3DMXMatrixScalingFxd(
 D3DMXMATRIXFXD* pOut,
 FIXED sx,
 FIXED sy,
 FIXED sz
);

/* D3DMXMatrixTranslation  [function; ce-only; CE 6.0..699; D3dmx.lib] */
D3DMXMATRIX* WINAPI D3DMXMatrixTranslation(
 D3DMXMATRIX* pOut,
 FLOAT x, 
 FLOAT y, 
 FLOAT z
);

/* D3DMXMatrixTranslationFxd  [function; ce-only; CE 6.0..699; D3dmx.lib] */
D3DMXMATRIXFXD* WINAPI D3DMXMatrixTranslationFxd(
 D3DMXMATRIXFXD* pOut,
 FIXED x,
 FIXED y,
 FIXED z
);

/* D3DMXMatrixTranspose  [function; ce-only; CE 6.0..699; D3dmx.lib] */
D3DMXMATRIX* WINAPI D3DMXMatrixTranspose(
 D3DMXMATRIX* pOut,
 CONST D3DMXMATRIX* pM
);

/* D3DMXMatrixTransposeFxd  [function; ce-only; CE 6.0..699; D3dmx.lib] */
D3DMXMATRIXFXD* WINAPI D3DMXMatrixTransposeFxd(
 D3DMXMATRIXFXD* pOut,
 CONST D3DMXMATRIXFXD* pM
);

/* D3DMXVec3Dot  [function; ce-only; CE 6.0..699] */
FLOAT D3DMXVec3Dot(
 CONST D3DMXVECTOR3* pV1,
 CONST D3DMXVECTOR3* pV2
);

/* D3DMXVec3DotFxd  [function; ce-only; CE 6.0..699] */
FIXED D3DMXVec3DotFxd(
 CONST D3DMXVECTOR3FXD* pV1,
 CONST D3DMXVECTOR3FXD* pV2
);

/* D3DMXVec3LengthFxd  [function; ce-only; CE 6.0..699] */
FIXED D3DMXVec3LengthFxd(
 CONST D3DMXVECTOR3FXD* pV
);

/* D3DMXVec3LengthSq  [function; ce-only; CE 6.0..699] */
FLOAT D3DMXVec3LengthSq(
 CONST D3DMXVECTOR3* pV
);

/* D3DMXVec3LengthSqFxd  [function; ce-only; CE 6.0..699] */
FIXED D3DMXVec3LengthSqFxd(
 CONST D3DMXVECTOR3FXD* pV
);

/* D3DMXVec3Normalize  [function; ce-only; CE 6.0..699; D3dmx.lib] */
D3DMXVECTOR3* WINAPI D3DMXVec3Normalize(
 D3DMXVECTOR3* pOut,
 CONST D3DMXVECTOR3* pV
);

/* D3DMXVec3NormalizeFxd  [function; ce-only; CE 6.0..699; D3dmx.lib] */
D3DMXVECTOR3FXD* WINAPI D3DMXVec3NormalizeFxd(
 D3DMXVECTOR3FXD* pOut,
 CONST D3DMXVECTOR3FXD* pV
);

/* D3DMXVec3Transform  [function; ce-only; CE 6.0..699; D3dmx.lib] */
D3DMXVECTOR4* WINAPI D3DMXVec3Transform(
 D3DMXVECTOR4* pOut,
 CONST D3DMXVECTOR3* pV,
 CONST D3DMXMATRIX* pM
);

/* D3DMXVec3TransformFxd  [function; ce-only; CE 6.0..699; D3dmx.lib] */
D3DMXVECTOR4FXD* WINAPI D3DMXVec3TransformFxd(
 D3DMXVECTOR4FXD* pOut,
 CONST D3DMXVECTOR3FXD* pV,
 CONST D3DMXMATRIXFXD* pM
);

/* D3DMXVec4Cross  [function; ce-only; CE 6.0..699; D3dmx.lib] */
D3DMXVECTOR4* WINAPI D3DMXVec4Cross(
 D3DMXVECTOR4* pOut,
 CONST D3DMXVECTOR4* pV1,
 CONST D3DMXVECTOR4* pV2,
 CONST D3DMXVECTOR4* pV3
);

/* D3DMXVec4CrossFxd  [function; ce-only; CE 6.0..699; D3dmx.lib] */
D3DMXVECTOR4FXD* WINAPI D3DMXVec4CrossFxd(
 D3DMXVECTOR4FXD* pOut,
 CONST D3DMXVECTOR4FXD* pV1,
 CONST D3DMXVECTOR4FXD* pV2,
 CONST D3DMXVECTOR4FXD* pV3
);

/* D3DMXVec4Dot  [function; ce-only; CE 6.0..699] */
FLOAT D3DMXVec4Dot(
 CONST D3DMXVECTOR4* pV1,
 CONST D3DMXVECTOR4* pV2
);

/* D3DMXVec4DotFxd  [function; ce-only; CE 6.0..699] */
FIXED D3DMXVec4DotFxd(
 CONST D3DMXVECTOR4FXD* pV1,
 CONST D3DMXVECTOR4FXD* pV2
);

/* D3DMXVec4Length  [function; ce-only; CE 6.0..699] */
FLOAT D3DMXVec4Length(
 CONST D3DMXVECTOR4* pV
);

/* D3DMXVec4LengthFxd  [function; ce-only; CE 6.0..699] */
FIXED D3DMXVec4LengthFxd(
 CONST D3DMXVECTOR4FXD* pV
);

/* D3DMXVec4LengthSq  [function; ce-only; CE 6.0..699] */
FLOAT D3DMXVec4LengthSq(
 CONST D3DMXVECTOR4* pV
);

/* D3DMXVec4LengthSqFxd  [function; ce-only; CE 6.0..699] */
FIXED D3DMXVec4LengthSqFxd(
 CONST D3DMXVECTOR4FXD* pV
);

/* D3DMXVec4Normalize  [function; ce-only; CE 6.0..699; D3dmx.lib] */
D3DMXVECTOR4* WINAPI D3DMXVec4Normalize(
 D3DMXVECTOR4* pOut,
 CONST D3DMXVECTOR4* pV
);

/* D3DMXVec4NormalizeFxd  [function; ce-only; CE 6.0..699; D3dmx.lib] */
D3DMXVECTOR4FXD* WINAPI D3DMXVec4NormalizeFxd(
 D3DMXVECTOR4FXD* pOut,
 CONST D3DMXVECTOR4FXD* pV
);

/* D3DMXVec4Transform  [function; ce-only; CE 6.0..699; D3dmx.lib] */
D3DMXVECTOR4* WINAPI D3DMXVec4Transform(
 D3DMXVECTOR4* pOut,
 CONST D3DMXVECTOR4* pV,
 CONST D3DMXMATRIX* pM
);

/* D3DMXVec4TransformFxd  [function; ce-only; CE 6.0..699; D3dmx.lib] */
D3DMXVECTOR4FXD* WINAPI D3DMXVec4TransformFxd(
 D3DMXVECTOR4FXD* pOut,
 CONST D3DMXVECTOR4FXD* pV,
 CONST D3DMXMATRIXFXD* pM
);
#endif /* _WIN32_WCE */

#endif /* _D3DMX_ */
