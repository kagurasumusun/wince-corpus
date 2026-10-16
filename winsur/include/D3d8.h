/* D3d8.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 10 declarations, 0 outlines, 0 base types, 0 extra macros, 26 extra decls
 */
#ifndef _D3D8_
#define _D3D8_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x400 && _WIN32_WCE < 0x500)) /* CE 4.0..499 */

/* Direct3DCreate8  [function; ce-only; CE 4.0..499; D3d8.lib] */
IDirect3D8* Direct3DCreate8(
 UINT SDKVersion
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT ApplyStateBlock( DWORD Token );
HRESULT BeginStateBlock();
HRESULT CaptureStateBlock( DWORD Token );
HRESULT DeleteStateBlock( DWORD Token );
HRESULT EndStateBlock( DWORD* pToken );
UINT GetAvailableTextureMem();
HRESULT GetClipPlane( DWORD Index, float* pPlane );
HRESULT GetVertexShader( DWORD* pHandle );
HRESULT SetClipPlane( DWORD Index, CONST float* pPlane );

#endif /* _D3D8_ */
