/* D3dm.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 26 constants, 0 declarations, 0 outlines, 0 base types, 13 extra macros, 55 extra decls
 */
#ifndef _D3DM_
#define _D3DM_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define _FACD3DM 0x877
#define D3DMCREATE_MULTITHREADED 0x00000004
#define D3DMCURRENT_DISPLAY_MODE 0x00EFFFFF
#define D3DMERR_ALREADYLOCKED MAKE_D3DMHRESULT(2158)
#define D3DMERR_CONFLICTINGRENDERSTATE MAKE_D3DMHRESULT(2081)
#define D3DMERR_CONFLICTINGTEXTUREFILTER MAKE_D3DMHRESULT(2078)
#define D3DMERR_CONFLICTINGTEXTUREPALETTE MAKE_D3DMHRESULT(2086)
#define D3DMERR_DEVICELOST MAKE_D3DMHRESULT(2152)
#define D3DMERR_DEVICENOTRESET MAKE_D3DMHRESULT(2153)
#define D3DMERR_DRIVERINTERNALERROR MAKE_D3DMHRESULT(2087)
#define D3DMERR_DRIVERINVALIDCALL MAKE_D3DMHRESULT(2157)
#define D3DMERR_DRIVERUNSUPPORTED MAKE_D3DMHRESULT(2088)
#define D3DMERR_INVALIDCALL MAKE_D3DMHRESULT(2156)
#define D3DMERR_INVALIDDEVICE MAKE_D3DMHRESULT(2155)
#define D3DMERR_MEMORYPOOLEMPTY MAKE_D3DMHRESULT(380)
#define D3DMERR_MOREDATA MAKE_D3DMHRESULT(2151)
#define D3DMERR_NOTAVAILABLE MAKE_D3DMHRESULT(2154)
#define D3DMERR_NOTFOUND MAKE_D3DMHRESULT(2150)
#define D3DMERR_TOOMANYOPERATIONS MAKE_D3DMHRESULT(2077)
#define D3DMERR_UNSUPPORTEDALPHAARG MAKE_D3DMHRESULT(2076)
#define D3DMERR_UNSUPPORTEDALPHAOPERATION MAKE_D3DMHRESULT(2075)
#define D3DMERR_UNSUPPORTEDCOLORARG MAKE_D3DMHRESULT(2074)
#define D3DMERR_UNSUPPORTEDCOLOROPERATION MAKE_D3DMHRESULT(2073)
#define D3DMERR_UNSUPPORTEDFACTORVALUE MAKE_D3DMHRESULT(2079)
#define D3DMERR_UNSUPPORTEDTEXTUREFILTER MAKE_D3DMHRESULT(2082)
#define D3DMERR_WRONGTEXTUREFORMAT MAKE_D3DMHRESULT(2072)

/* ==================================================================
 * macros -- supplementary #define from CE pages
 * ================================================================ */
#define D3DMXINLINE inline
#define D3DM_DLL_ENTRY TEXT("D3DM_Initialize")

#define D3DFVF_TEXCOORDSIZE2(CoordIndex) (D3DFVF_TEXTUREFORMAT2)
#define D3DMCOLOR_RGBA(r,g,b,a) D3DMCOLOR_ARGB(a,r,g,b)
#define D3DMCOLOR_XRGB(r,g,b) D3DMCOLOR_ARGB(0xff,r,g,b)
#define D3DMFVF_TEXCOORDFLOAT(CoordIndex) (D3DMFVF_TEXCOORDFORMAT_FLOAT)
#define D3DMFVF_TEXCOORDSIZE2(CoordIndex) (D3DMFVF_TEXCOORDCOUNT2)
#define D3DMX_1BYPI((FLOAT) 0.318309886f)
#define D3DMX_1BYPI_FXD((FIXED) (0.318309886f * 65536.0f))
#define D3DMX_PI((FLOAT) 3.141592654f)
#define D3DMX_PI_FXD((FIXED) (3.141592654f * 65536.0f))
#define D3DM_MAKE_RSVALUE(Value) (*(ULONG *)(&(Value)))
#define D3DX_PI((FLOAT) 3.141592654f)

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT AddDirtyRect(CONST RECT* pDirtyRect);
HRESULT BeginScene();
HRESULT EndScene();
UINT GetAdapterCount();
UINT GetAdapterModeCount(UINT Adapter);
HRESULT GetCurrentTexturePalette(UINT* PaletteNumber);
DWORD GetLOD();
DWORD GetLevelCount();
HRESULT GetLightEnable(DWORD Index, BOOL* pEnable);
DWORD GetPriority();
HRESULT LightEnable(DWORD Index, BOOL Enable);
void PreLoad();
HRESULT RegisterSoftwareDevice(VOID* pInitializeFunction);
HRESULT ResourceManagerDiscardBytes(DWORD Bytes);
HRESULT SetCurrentTexturePalette(UINT PaletteNumber);
DWORD SetPriority(DWORD PriorityNew);
HRESULT UnlockRect();
HRESULT ValidateDevice(DWORD* pNumPasses);

#endif /* _D3DM_ */
