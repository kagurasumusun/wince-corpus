/* Ddrawi.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 121 declarations, 6 outlines, 0 base types, 0 extra macros, 17 extra decls
 */
#ifndef _DDRAWI_
#define _DDRAWI_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* DDHAL_BLTDATA  [struct, typedef; ce-only] */

/* DDHAL_SETPALETTEDATA  [struct, typedef; ce-only] */

/* DDNONLOCALVIDMEMCAPS  [struct, typedef; ce-only] */

/* DDRAWI_DDRAWCLIPPER_LCL  [struct; ce-only] */

/* DDRAWI_DIRECTDRAW_GBL  [struct; ce-only] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* DDHAL_ADDATTACHEDSURFACEDATA  [struct, typedef; ce-only] */
typedef struct _DDHAL_ADDATTACHEDSURFACEDATA {LPDDRAWI_DIRECTDRAW_GBLlpDD;LPDDRAWI_DDRAWSURFACE_LCLlpDDSurface;LPDDRAWI_DDRAWSURFACE_LCLlpSurfAttached;HRESULTddRVal;LPDDHALSURFCB_ADDATTACHEDSURFACEAddAttachedSurface;} DDHAL_ADDATTACHEDSURFACEDATA;

/* DDHAL_CANCREATEVPORTDATA  [struct, typedef; ce-only] */
typedef struct _DDHAL_CANCREATEVPORTDATA {LPDDRAWI_DIRECTDRAW_LCLlpDD;LPDDVIDEOPORTDESClpDDVideoPortDesc;HRESULTddRVal;LPDDHALVPORTCB_CANCREATEVIDEOPORTCanCreateVideoPort;} DDHAL_CANCREATEVPORTDATA;

/* DDHAL_CREATEPALETTEDATA  [struct; ce-only] */
typedef struct _DDHAL_CREATEPALETTEDATA {LPDDRAWI_DIRECTDRAW_GBLlpDD;LPDDRAWI_DDRAWPALETTE_GBLlpDDPalette;LPPALETTEENTRYlpColorTable;HRESULTddRVal;LPDDHAL_CREATEPALETTECreatePalette;BOOLis_excl;} DDHAL_CREATEPALETTEDATA;

/* DDHAL_CREATEVPORTDATA  [struct, typedef; ce-only] */
typedef struct _DDHAL_CREATEVPORTDATA {LPDDRAWI_DIRECTDRAW_LCLlpDD;LPDDVIDEOPORTDESClpDDVideoPortDesc;LPDDRAWI_DDVIDEOPORT_LCLlpVideoPort;HRESULTddRVal;LPDDHALVPORTCB_CREATEVIDEOPORTCreateVideoPort;} DDHAL_CREATEVPORTDATA;

/* DDHAL_DESTROYDRIVERDATA  [struct; ce-only] */
typedef struct _DDHAL_DESTROYDRIVERDATA {LPDDRAWI_DIRECTDRAW_GBLlpDD;HRESULTddRVal;LPDDHAL_DESTROYDRIVERDestroyDriver;} DDHAL_DESTROYDRIVERDATA;

/* DDHAL_DESTROYPALETTEDATA  [struct, typedef; ce-only] */
typedef struct _DDHAL_DESTROYPALETTEDATA {LPDDRAWI_DIRECTDRAW_GBLlpDD;LPDDRAWI_DDRAWPALETTE_GBLlpDDPalette;HRESULTddRVal;LPDDHALSURFCB_DESTROYPALETTEDestroyPalette;} DDHAL_DESTROYPALETTEDATA;

/* DDHAL_DESTROYVPORTDATA  [struct, typedef; ce-only] */
typedef struct _DDHAL_DESTROYVPORTDATA {LPDDRAWI_DIRECTDRAW_LCLlpDD;LPDDRAWI_DDVIDEOPORT_LCLlpVideoPort;HRESULTddRVal;LPDDHALVPORTCB_DESTROYVPORTDestroyVideoPort;} DDHAL_DESTROYVPORTDATA;

/* DDHAL_FLIPTOGDISURFACEDATA  [struct; ce-only] */
typedef struct _DDHAL_FLIPTOGDISURFACEDATA {LPDDRAWI_DIRECTDRAW_GBLlpDD;DWORDdwToGDI;DWORD dwReserved;HRESULTddRVal;LPDDHAL_FLIPTOGDISURFACEFlipToGDISurface;} DDHAL_FLIPTOGDISURFACEDATA;

/* DDHAL_FLIPVPORTDATA  [struct, typedef; ce-only] */
typedef struct _DDHAL_FLIPVPORTDATA {LPDDRAWI_DIRECTDRAW_LCLlpDD;LPDDRAWI_DDVIDEOPORT_LCLlpVideoPort;LPDDRAWI_DDRAWSURFACE_LCLlpSurfCurr;LPDDRAWI_DDRAWSURFACE_LCLlpSurfTarg;HRESULTddRVal;LPDDHALVPORTCB_FLIPFlipVideoPort;} DDHAL_FLIPVPORTDATA;

/* DDHAL_GETHEAPALIGNMENTDATA  [struct; ce-only] */
typedef struct _DDHAL_GETHEAPALIGNMENTDATA {DWORDdwInstance;DWORDdwHeap;HRESULTddRVal;LPDDHAL_GETHEAPALIGNMENTGetHeapAlignment;HEAPALIGNMENTAlignment;} DDHAL_GETHEAPALIGNMENTDATA;

/* DDHAL_GETVPORTBANDWIDTHDATA  [struct, typedef; ce-only] */
typedef struct _DDHAL_GETVPORTBANDWIDTHDATA {LPDDRAWI_DIRECTDRAW_LCLlpDD;LPDDRAWI_DDVIDEOPORT_LCLlpVideoPort;LPDDPIXELFORMATlpddpfFormat;DWORDdwWidth;DWORDdwHeight;DWORDdwFlags;LPDDVIDEOPORTBANDWIDTHlpBandwidth;HRESULTddRVal;LPDDHALVPORTCB_GETBANDWIDTHGetVideoPortBandwidth;} DDHAL_GETVPORTBANDWIDTHDATA;

/* DDHAL_GETVPORTCONNECTDATA  [struct, typedef; ce-only] */
typedef struct _DDHAL_GETVPORTCONNECTDATA {LPDDRAWI_DIRECTDRAW_LCLlpDD;DWORDdwPortId;LPDDVIDEOPORTCONNECTlpConnect;DWORDdwNumEntries;HRESULTddRVal;LPDDHALVPORTCB_GETVPORTCONNECTGetVideoPortConnectInfo;} DDHAL_GETVPORTCONNECTDATA;

/* DDHAL_GETVPORTFIELDDATA  [struct, typedef; ce-only] */
typedef struct _DDHAL_GETVPORTFIELDDATA {LPDDRAWI_DIRECTDRAW_LCLlpDD;LPDDRAWI_DDVIDEOPORT_LCLlpVideoPort;BOOLbField;HRESULTddRVal;LPDDHALVPORTCB_GETFIELDGetVideoPortField;} DDHAL_GETVPORTFIELDDATA;

/* DDHAL_GETVPORTFLIPSTATUSDATA  [struct, typedef; ce-only] */
typedef struct _DDHAL_GETVPORTFLIPSTATUSDATA {LPDDRAWI_DIRECTDRAW_LCLlpDD;FLATPTRlpSurface;HRESULTddRVal;LPDDHALVPORTCB_GETFLIPSTATUSGetVideoPortFlipStatus;} DDHAL_GETVPORTFLIPSTATUSDATA;

/* DDHAL_GETVPORTINPUTFORMATDATA  [struct, typedef; ce-only] */
typedef struct _DDHAL_GETVPORTINPUTFORMATDATA {LPDDRAWI_DIRECTDRAW_LCLlpDD;LPDDRAWI_DDVIDEOPORT_LCLlpVideoPort;DWORDdwFlags;LPDDPIXELFORMATlpddpfFormat;DWORDdwNumFormats;HRESULTddRVal;LPDDHALVPORTCB_GETINPUTFORMATSGetVideoPortInputFormats;} DDHAL_GETVPORTINPUTFORMATDATA;

/* DDHAL_GETVPORTLINEDATA  [struct, typedef; ce-only] */
typedef struct _DDHAL_GETVPORTLINEDATA {LPDDRAWI_DIRECTDRAW_LCLlpDD;LPDDRAWI_DDVIDEOPORT_LCLlpVideoPort;DWORDdwLine;HRESULTddRVal;LPDDHALVPORTCB_GETLINEGetVideoPortLine;} DDHAL_GETVPORTLINEDATA;

/* DDHAL_GETVPORTOUTPUTFORMATDATA  [struct, typedef; ce-only] */
typedef struct _DDHAL_GETVPORTOUTPUTFORMATDATA {LPDDRAWI_DIRECTDRAW_LCLlpDD;LPDDRAWI_DDVIDEOPORT_LCLlpVideoPort;DWORDdwFlags;LPDDPIXELFORMATlpddpfInputFormat;LPDDPIXELFORMATlpddpfOutputFormats;DWORDdwNumFormats;HRESULTddRVal;LPDDHALVPORTCB_GETOUTPUTFORMATSGetVideoPortOutputFormats;} DDHAL_GETVPORTOUTPUTFORMATDATA;

/* DDHAL_GETVPORTSIGNALDATA  [struct, typedef; ce-only] */
typedef struct _DDHAL_GETVPORTSIGNALDATA {LPDDRAWI_DIRECTDRAW_LCLlpDD;LPDDRAWI_DDVIDEOPORT_LCLlpVideoPort;DWORDdwStatus;HRESULTddRVal;LPDDHALVPORTCB_GETSIGNALSTATUSGetVideoSignalStatus;} DDHAL_GETVPORTSIGNALDATA;

/* DDHAL_SETCLIPLISTDATA  [struct, typedef; ce-only] */
typedef struct _DDHAL_SETCLIPLISTDATA {LPDDRAWI_DIRECTDRAW_GBLlpDD;LPDDRAWI_DDRAWSURFACE_LCLlpDDSurface;HRESULTddRVal;LPDDHALSURFCB_SETCLIPLISTSetClipList;} DDHAL_SETCLIPLISTDATA;

/* DDHAL_SETENTRIESDATA  [struct, typedef; ce-only] */
typedef struct _DDHAL_SETENTRIESDATA {LPDDRAWI_DIRECTDRAW_GBLlpDD;LPDDRAWI_DDRAWPALETTE_GBLlpDDPalette;DWORDdwBase;DWORDdwNumEntries;LPPALETTEENTRYlpEntries;HRESULTddRVal;LPDDHALPALCB_SETENTRIESSetEntries;} DDHAL_SETENTRIESDATA;

/* DDHAL_SETEXCLUSIVEMODEDATA  [struct; ce-only] */
typedef struct _DDHAL_SETEXCLUSIVEMODEDATA {LPDDRAWI_DIRECTDRAW_GBLlpDD;DWORDdwEnterExcl;DWORDdwReserved;HRESULTddRVal;LPDDHAL_SETEXCLUSIVEMODESetExclusiveMode;} DDHAL_SETEXCLUSIVEMODEDATA;

/* DDHAL_SETMODEDATA  [struct; ce-only] */
typedef struct _DDHAL_SETMODEDATA {LPDDRAWI_DIRECTDRAW_GBLlpDD;DWORDdwModeIndex;HRESULTddRVal;LPDDHAL_SETMODESetMode;BOOLinexcl;BOOLuseRefreshRate;} DDHAL_SETMODEDATA;

/* DDHAL_UPDATENONLOCALHEAPDATA  [struct; ce-only] */
typedef struct _DDHAL_UPDATENONLOCALHEAPDATA {LPDDRAWI_DIRECTDRAW_GBLlpDD;DWORDdwHeap;FLATPTRfpGARTLin;FLATPTRfpGARTDev;DWORDdwReserved;HRESULTddRVal;LPDDHAL_UPDATENONLOCALHEAPUpdateNonLocalHeap;} DDHAL_UPDATENONLOCALHEAPDATA;

/* DDHAL_VPORTCOLORDATA  [struct, typedef; ce-only] */
typedef struct _DDHAL_VPORTCOLORDATA {LPDDRAWI_DIRECTDRAW_LCLlpDD;LPDDRAWI_DDVIDEOPORT_LCLlpVideoPort;DWORDdwFlags;LPDDCOLORCONTROLlpColorData;HRESULTddRVal;LPDDHALVPORTCB_COLORCONTROLColorControl;} DDHAL_VPORTCOLORDATA;

/* DDHAL_WAITFORVPORTSYNCDATA  [struct, typedef; ce-only] */
typedef struct _DDHAL_WAITFORVPORTSYNCDATA {LPDDRAWI_DIRECTDRAW_LCLlpDD;LPDDRAWI_DDVIDEOPORT_LCLlpVideoPort;DWORDdwFlags;DWORDdwLine;DWORDdwTimeOut;HRESULTddRVal;LPDDHALVPORTCB_WAITFORSYNCWaitForVideoPortSync;} DDHAL_WAITFORVPORTSYNCDATA;

/* DDRAWI_DDRAWCLIPPER_INT  [struct; ce-only] */
typedef struct _DDRAWI_DDRAWCLIPPER_INT {LPVOIDlpVtbl;LPDDRAWI_DDRAWCLIPPER_LCLlpLcl;LPDDRAWI_DDRAWDLIPPER_INTlpLink;DWORDdwIntRefCnt;} DDRAWI_DDRAWCLIPPER_INT;

/* DDRAWI_DDRAWPALETTE_GBL  [struct, typedef; ce-only] */
typedef struct _DDRAWI_DDRAWPALETTE_GBL {DWORDdwRefCnt;DWORDdwFlags;LPDDRAWI_DIRECTDRAW_LCLlpDD_lcl;DWORDdwProcessId;LPPALETTEENTRYlpColorTable;union{DWORDdwReserved1;HPALETTEhHELGDIPalette;};DWORDdwDriverReserved;DWORDdwContentsStamp;DWORDdwSaveStamp;} DDRAWI_DDRAWPALETTE_GBL;

/* DDRAWI_DDRAWPALETTE_INT  [struct, typedef; ce-only] */
typedef struct _DDRAWI_DDRAWPALETTE_INT {LPVOIDlpVtbl;LPDDRAWI_DDRAWPALETTE_LCLlpLcl;LPDDRAWI_DDRAWPALETTE_INTlpLink;DWORD dwIntRefCnt;} DDRAWI_DDRAWPALETTE_INT;

/* DDRAWI_DDRAWPALETTE_LCL  [struct, typedef; ce-only] */
typedef struct _DDRAWI_DDRAWPALETTE_LCL {DWORDlpPalMore;LPDDRAWI_DDRAWPALETTE_GBLlpGbl;ULONG_PTRdwUnused0;DWORDdwLocalRefCnt;IUnknownFAR* pUnkOuter;
 LPDDRAWI_DIRECTDRAW_LCLlpDD_lcl;ULONG_PTRdwReserved1;ULONG_PTRdwDDRAWReserved1;ULONG_PTRdwDDRAWReserved1;} DDRAWI_DDRAWPALETTE_LCL;

/* DDRAWI_DDRAWSURFACE_GBL  [struct, typedef; ce-only] */
typedef struct _DDRAWI_DDRAWSURFACE_GBL {DWORD dwRefCnt;DWORDdwGlobalFlags;union{LPACCESSRECTLISTlpRectList;DWORDdwBlockSizeY;};union{LPVMEMHEAPlpVidMemHeap;DWORDdwBlockSizeX;};union{LPDDRAWI_DIRECTDRAW_GBLlpDD;LPVOIDlpDDHandle;};FLATPTRfpVidMem;union{LONGlPitch;DWORDdwLinearSize;};WORDwHeight;WORDwWidth;DWORDdwUsageCount;ULONG_PTRdwReserved1;DDPIXELFORMATddpfSurface;} DDRAWI_DDRAWSURFACE_GBL;

/* DDRAWI_DDRAWSURFACE_GBL_MORE  [struct, typedef; ce-only] */
typedef struct _DDRAWI_DDRAWSURFACE_GBL_MORE {DWORDdwSize;union{DWORDdwPhysicalPageTable;FLATPTRfpPhysicalVidMem;};LPDWORDpPageTable;DWORDcPages;DWORDdwSavedDCContext;FLATPTRfpAliasedVidMem;ULONG_PTRdwDriverReserved;ULONG_PTRdwHELReserved;DWORDcPageUnlocks;DWORDhKernelSurface;DWORDdwKernelRefCnt;LPDDCOLORCONTROLlpColorInfo;FLATPTRfpNTAlias;DWORDdwContentsStamp;LPVOIDlpDDRAWReserved1;LPVOIDlpDDRAWReserved2;DWORDdwDDRAWReserved1;DWORDdwDDRAWReserved2;} DDRAWI_DDRAWSURFACE_GBL_MORE;

/* DDRAWI_DDRAWSURFACE_INT  [struct, typedef; ce-only] */
typedef struct _DDRAWI_DDRAWSURFACE_INT {LPVOIDlpVtbl;LPDDRAWI_DDRAWSURFACE_LCLlpLcl;LPDDRAWI_DDRAWSURFACE_INTlpLink;DWORDdwIntRefCnt;} DDRAWI_DDRAWSURFACE_INT;

/* DDRAWI_DDVIDEOPORT_INT  [struct, typedef; ce-only] */
typedef struct _DDRAWI_DDVIDEOPORT_INT {LPVOIDlpVtbl;LPDDRAWI_DDVIDEOPORT_LCLlpLcl;LPDDRAWI_DDVIDEOPORT_INTlpLink;DWORDdwIntRefCnt;DWORDdwFlags;} DDRAWI_DDVIDEOPORT_INT;

/* DDRAWI_DIRECTDRAW_INT  [struct; ce-only] */
typedef struct _DDRAWI_DIRECTDRAW_INT {LPVOIDlpVtbl;LPDDRAWI_DIRECTDRAW_LCLlpLcl;LPDDRAWI_DIRECTDRAW_INTlpLink;DWORDdwIntRefCnt;} DDRAWI_DIRECTDRAW_INT;

/* DDRAWI_DIRECTDRAW_LCL  [struct; ce-only] */
typedef struct _DDRAWI_DIRECTDRAW_LCL {DWORDlpDDMore;LPDDRAWI_DIRECTDRAW_GBLlpGbl;DWORDdwUnused0;DWORDdwLocalFlags;DWORDdwLocalRefCnt;DWORDdwProcessId;IUnknownFAR* pUnkOuter;DWORDdwObsolete1;ULONG_PTRhWnd;ULONG_PTRhDC;DWORDdwErrorMode;LPDDRAWI_DDRAWSURFACE_INTlpPrimary;LPDDRAWI_DDRAWSURFACE_INTlpCB;DWORDdwPreferredMode;HINSTANCEhD3DInstance;IUnknownFAR* pD3DIUnknown;LPDDHAL_CALLBACKSlpDDCB;DWORDhDDVxd;DWORDdwAppHackFlags;ULONG_PTRhFocusWnd;DWORDdwHotTracking;DWORDdwIMEState;ULONG_PTRhWndPopup;ULONG_PTRhDD;ULONG_PTRhGammaCalibrator;LPDDGAMMACALIBRATORPROClpGammaCalibrator;} DDRAWI_DIRECTDRAW_LCL;

/* DDCORECAPS  [struct, typedef; shared] */
/* DERIVED member outline -- documented order, types/offsets not stated */
/*   dwSize */
/*   dwCaps */
/*   dwCaps2 */
/*   dwCKeyCaps */
/*   dwFXCaps */
/*   dwFXAlphaCaps */
/*   dwPalCaps */
/*   dwSVCaps */
/*   dwAlphaBltConstBitDepths */
/*   dwAlphaBltPixelBitDepths */
/*   dwAlphaBltSurfaceBitDepths */
/*   dwAlphaOverlayConstBitDepths */
/*   dwAlphaOverlayPixelBitDepths */
/*   dwAlphaOverlaySurfaceBitDepths */
/*   dwZBufferBitDepths */
/*   dwVidMemTotal */
/*   dwVidMemFree */
/*   dwMaxVisibleOverlays */
/*   dwCurrVisibleOverlays */
/*   dwNumFourCCCodes */
/*   dwAlignBoundarySrc */
/*   dwAlignSizeSrc */
/*   dwAlignBoundaryDest */
/*   dwAlignSizeDest */
/*   dwAlignStrideAlign */
/*   dwRops */
/*   ddsCaps */
/*   dwMinOverlayStretch */
/*   dwMaxOverlayStretch */
/*   dwMinLiveVideoStretch */
/*   dwMaxLiveVideoStretch */
/*   dwMinHwCodecStretch */
/*   dwMaxHwCodecStretch */
/*   dwReserved1 */
/*   dwReserved2 */
/*   dwReserved3 */
/*   dwSVBCaps */
/*   dwSVBCKeyCaps */
/*   dwSVBFXCaps */
/*   dwSVBRops */
/*   dwVSBCaps */
/*   dwVSBCKeyCaps */
/*   dwVSBFXCaps */
/*   dwVSBRops */
/*   dwSSBCaps */
/*   dwSSBCKeyCaps */
/*   dwSSBFXCaps */
/*   dwSSBRops */
/*   dwMaxVideoPorts */
/*   dwCurrVideoPorts */
/*   dwSVBCaps2 */

/* LPATTACHLIST  [extra typedef] */
typedef ATTACHLIST FAR *LPATTACHLIST;

/* LPDBLNODE  [extra typedef] */
typedef DBLNODE FAR *LPDBLNODE;

/* LPDDCORECAPS  [extra typedef] */
typedef DDCORECAPS FAR* LPDDCORECAPS;

/* LPDDHALINFO  [extra typedef] */
typedef DDHALINFO FAR *LPDDHALINFO;

/* LPDDHALMODEINFO  [extra typedef] */
typedef DDHALMODEINFO FAR *LPDDHALMODEINFO;

/* LPDDHAL_DDCALLBACKS  [extra typedef] */
typedef DDHAL_DDCALLBACKS FAR *LPDDHAL_DDCALLBACKS;

/* LPDDHAL_DDCOLORCONTROLCALLBACKS  [extra typedef] */
typedef DDHAL_DDCOLORCONTROLCALLBACKS FAR *LPDDHAL_DDCOLORCONTROLCALLBACKS;

/* LPDDHAL_DDPALETTECALLBACKS  [extra typedef] */
typedef DDHAL_DDPALETTECALLBACKS FAR *LPDDHAL_DDPALETTECALLBACKS;

/* LPDDHAL_DDSURFACECALLBACKS  [extra typedef] */
typedef DDHAL_DDSURFACECALLBACKS FAR *LPDDHAL_DDSURFACECALLBACKS;

/* LPDDHAL_DDVIDEOPORTCALLBACKS  [extra typedef] */
typedef DDHAL_DDVIDEOPORTCALLBACKS FAR *LPDDHAL_DDVIDEOPORTCALLBACKS;

/* LPVIDMEM  [extra typedef] */
typedef VIDMEM FAR *LPVIDMEM;

/* LPVIDMEMINFO  [extra typedef] */
typedef VIDMEMINFO FAR *LPVIDMEMINFO;

/* LPDDHAL_DDMISCELLANEOUS2CALLBACKS  [extra struct] */
typedef struct _DDHAL_DDMISCELLANEOUS2CALLBACKS {
  DWORD dwSize;
  DWORD dwFlags;
  LPDDHAL_ALPHABLT AlphaBlt;
  LPDDHAL_SETSPRITEDISPLAYLIST SetSpriteDisplayList;
  LPDDHAL_RESIZE Resize;
} DDHAL_DDMISCELLANEOUS2CALLBACKS, *LPDDHAL_DDMISCELLANEOUS2CALLBACKS;

/* LPDDHAL_DDMISCELLANEOUSCALLBACKS  [extra struct] */
typedef struct _DDHAL_DDMISCELLANEOUSCALLBACKS
{
  DWORD dwSize;
  DWORD dwFlags;
  LPDDHAL_GETAVAILDRIVERMEMORY GetAvailDriverMemory;
  LPDDHAL_UPDATENONLOCALHEAP UpdateNonLocalHeap;
  LPDDHAL_GETHEAPALIGNMENT GetHeapAlignment;
  LPDDHALSURFCB_GETBLTSTATUS GetSysmemBltStatus;
} DDHAL_DDMISCELLANEOUSCALLBACKS, *LPDDHAL_DDMISCELLANEOUSCALLBACKS;

/* LPDDMORECAPS  [extra struct] */
typedef struct _DDMORECAPS
{
  DWORD dwSize;
  DWORD dwAlphaCaps;
  DWORD dwSVBAlphaCaps;
  DWORD dwVSBAlphaCaps;
  DWORD dwSSBAlphaCaps;
  DWORD dwFilterCaps;
  DWORD dwSVBFilterCaps;
  DWORD dwVSBFilterCaps;
  DWORD dwSSBFilterCaps;
  DWORD dwTransformCaps;
  DWORD dwSVBTransformCaps;
  DWORD dwVSBTransformCaps;
  DWORD dwSSBTransformCaps;
  DWORD dwBltAffineMinifyLimit;
  DWORD dwOverlayAffineMinifyLimit;
} DDMORECAPS, FAR *LPDDMORECAPS;
typedef struct _DDMORECAPS FAR *LPDDMORECAPS;

/* LPDDMORESURFACECAPS  [extra struct] */
typedef struct _DDMORESURFACECAPS
{
  DWORD dwSize;
  DDSCAPSEX ddsCapsMore;
  struct tagExtendedHeapRestrictions
  {
    DDSCAPSEX ddsCapsEx;
    DDSCAPSEX ddsCapsAlt;
  } ddsExtendedHeapRestrictions[1];
} DDMORESURFACECAPS, FAR * LPDDMORESURFACECAPS;

/* LPDDHAL_GAMMACONTROLDATA  [extra struct] */
typedef struct _DDHAL_GAMMACONTROLDATA {
  LPDDRAWI_DIRECTDRAW_GBL lpDD;
  LPDDRAWI_DDRAWSURFACE_LCL lpDDSurface;
  LPDDGAMMARAMP lpGammaData;
  DWORD dwFlags;
  HRESULT ddRVal;
} DDHAL_GAMMACONTROLDATA, * LPDDHAL_GAMMACONTROLDATA;

#endif /* _DDRAWI_ */
