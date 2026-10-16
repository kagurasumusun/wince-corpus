/* Ole2.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 18 constants, 16 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _OLE2_
#define _OLE2_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define DATA_E_FORMATETC DV_E_FORMATETC
#define E_DRAW VIEW_E_DRAW
#define EMBDHLP_CREATENOW 0x00000000L
#define EMBDHLP_DELAYCREATE 0x00010000L
#define EMBDHLP_INPROC_HANDLER 0x0000L
#define EMBDHLP_INPROC_SERVER 0x0001L
#define OLEIVERB_DISCARDUNDOSTATE -6
#define OLEIVERB_HIDE -3
#define OLEIVERB_INPLACEACTIVATE -5
#define OLEIVERB_OPEN -2
#define OLEIVERB_PRIMARY (0L)
#define OLEIVERB_SHOW -1
#define OLEIVERB_UIACTIVATE -4
#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */
#define OLEGETMONIKER_FORCEASSIGN 2
#define OLEGETMONIKER_ONLYIFTHERE 1
#define OLEGETMONIKER_TEMPFORUSER 4
#define OLEGETMONIKER_UNASSIGN 3
#define OLELINKBIND_EVENIFCLASSDIFF 1
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 2.11..2.12, 3.0..699 */

/* CreateOleAdviseHolder  [function; shared; CE 2.11..2.12, 3.0..699; Ole232.lib, ole232.lib, Ole32.lib, ole32.lib] */
WINOLEAPI CreateOleAdviseHolder(
 IOleAdviseHolder FAR* FAR* ppOAHolder
);

/* OleCreate  [function; shared; CE 2.11..2.12, 3.0..699; Ole232.lib, ole232.lib, Ole32.lib, ole32.lib] */
WINOLEAPI OleCreate( 
 REFCLSID rclsid, 
 REFIID riid, 
 DWORD renderopt, 
 FORMATETC* pFormatEtc, 
 IOleClientSite* pClientSite, 
 IStorage* pStg, 
 void** ppvObject
);

/* OleDraw  [function; shared; CE 2.11..2.12, 3.0..699; Ole232.lib, ole232.lib, Ole32.lib, ole32.lib] */
WINOLEAPI OleDraw( 
 IUnknown* pUnk, 
 DWORD dwAspect, 
 HDC hdcDraw, 
 LPCRECT lprcBounds 
);

/* OleIsRunning  [function; shared; CE 2.11..2.12, 3.0..699; Ole232.lib, ole232.lib, Ole32.lib, ole32.lib] */
BOOL OleIsRunning(
 LPOLEOBJECT pObject
);

/* OleRun  [function; shared; CE 2.11..2.12, 3.0..699; Ole232.lib, ole232.lib, Ole32.lib, ole32.lib] */
WINOLEAPI OleRun(
 LPUNKNOWN pUnknown
);

/* OleSave  [function; shared; CE 2.11..2.12, 3.0..699; Ole232.lib, ole232.lib, Ole32.lib, ole32.lib] */
WINOLEAPI OleSave( 
 IPersistStorage* pPS, 
 IStorage* pStg, 
 BOOL fSameAsLoad
);

/* OleSetContainedObject  [function; shared; CE 2.11..2.12, 3.0..699; Ole232.lib, ole232.lib, Ole32.lib, ole32.lib] */
WINOLEAPI OleSetContainedObject( 
 LPUNKNOWN pUnk, 
 BOOL fContained
);

/* OleSetMenuDescriptor  [function; shared; CE 2.11..2.12, 3.0..699; Ole232.lib, ole232.lib, Ole32.lib, ole32.lib] */
WINOLEAPI OleSetMenuDescriptor( 
 HOLEMENU holemenu, 
 HWND hwndFrame, 
 HWND hwndActiveObject, 
 LPOLEINPLACEFRAME lpFrame, 
 LPOLEINPLACEACTIVEOBJECT lpActiveObj 
);

/* ReadClassStg  [function; shared; CE 2.11..2.12, 3.0..699; Ole232.lib, ole232.lib, Ole32.lib, ole32.lib] */
WINOLEAPI ReadClassStg( 
 IStorage* pStg,
 CLSID* pclsid 
);

/* ReadClassStm  [function; shared; CE 2.11..2.12, 3.0..699; Ole232.lib, ole232.lib, Ole32.lib, ole32.lib] */
WINOLEAPI ReadClassStm(
 IStream* pStm,
 CLSID* pclsid 
);

/* ReleaseStgMedium  [function; shared; CE 2.11..2.12, 3.0..699; ole232.lib, Ole32.lib, ole32.lib] */
void ReleaseStgMedium( 
 STGMEDIUM* pmedium
);

/* WriteClassStg  [function; shared; CE 2.11..2.12, 3.0..699; Ole232.lib, ole232.lib, Ole32.lib, ole32.lib] */
WINOLEAPI WriteClassStg(
 IStorage* pStg,
 REFCLSID rclsid 
);

/* WriteClassStm  [function; shared; CE 2.11..2.12, 3.0..699; Ole232.lib, ole232.lib, Ole32.lib, ole32.lib] */
WINOLEAPI WriteClassStm(
 IStream* pStm,
 REFCLSID rclsid
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 3.0..699 */

/* GetHGlobalFromStream  [function; shared; CE 3.0..699; Ole232.lib, Ole32.lib, ole32.lib] */
WINOLEAPI GetHGlobalFromStream(
 IStream* pstm,
 HGLOBAL* phglobal
);

/* OleLoadFromStream  [function; shared; CE 3.0..699; Ole232.lib, Ole32.lib, ole32.lib] */
WINOLEAPI OleLoadFromStream(
 IStream* pStm,
 REFIID iidInterface,
 void** ppvObj
);

/* OleSaveToStream  [function; shared; CE 3.0..699; Ole232.lib, Ole32.lib, ole32.lib] */
WINOLEAPI OleSaveToStream(
 IPersistStream* pPStm,
 IStream* pStm 
);
#endif /* _WIN32_WCE */

#endif /* _OLE2_ */
