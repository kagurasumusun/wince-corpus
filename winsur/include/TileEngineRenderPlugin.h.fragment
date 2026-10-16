/* TileEngineRenderPlugin.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 4 declarations, 0 outlines, 0 base types, 0 extra macros, 2 extra decls
 */
#ifndef _TILEENGINERENDERPLUGIN_
#define _TILEENGINERENDERPLUGIN_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* ITileEngineGraphicsDevice::Create16BppTexture  [function; ce-only; CE 6.0..699; TileEngineRenderPlugin.lib] */
HRESULT Create16BppTexture(
 int fRenderTarget, 
 UINT nWidth, 
 UINT nHeight, 
 int fKeepsystemMemory, 
 ICustomSurface** ppSurface
)

/* ITileEngineGraphicsDevice::Lock  [function; ce-only; CE 6.0..699; TileEngineRenderPlugin.lib] */
HRESULT Lock();

/* ITileEngineGraphicsDevice::OnWindowUpdate  [function; ce-only; CE 6.0..699; TileEngineRenderPlugin.lib] */
void OnWindowUpdate();

/* ITileEngineGraphicsDevice::Unlock  [function; ce-only; CE 6.0..699; TileEngineRenderPlugin.lib] */
HRESULT Unlock();
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT Create16BppTexture( int fRenderTarget,  UINT nWidth,  UINT nHeight,  int fKeepsystemMemory,  ICustomSurface** ppSurface )
void OnWindowUpdate();

#endif /* _TILEENGINERENDERPLUGIN_ */
