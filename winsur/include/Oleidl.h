/* Oleidl.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 7 constants, 7 declarations, 10 outlines, 0 base types, 0 extra macros, 34 extra decls
 */
#ifndef _OLEIDL_
#define _OLEIDL_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define MK_ALT 32
#define OLEIVERB_DISCARDUNDOSTATE -6
#define OLEIVERB_HIDE -3
#define OLEIVERB_INPLACEACTIVATE -5
#define OLEIVERB_OPEN -2
#define OLEIVERB_SHOW -1
#define OLEIVERB_UIACTIVATE -4

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x300 && _WIN32_WCE < 0x400) || (_WIN32_WCE >= 0x500 && _WIN32_WCE < 0x600)) /* CE 3.0..399, 5.0..599 */

/* IOleAdviseHolder  [interface; shared; CE 3.0..399, 5.0..599; Oleaut32.lib, Uuid.lib] */

/* IOleClientSite  [interface; shared; CE 3.0..399, 5.0..599; Oleaut32.lib, Uuid.lib] */

/* IOleObject  [interface; shared; CE 3.0..399, 5.0..599; Oleaut32.lib, Uuid.lib] */

/* IParseDisplayName  [interface; shared; CE 3.0..399, 5.0..599; Ole32.lib, Uuid.lib] */

/* IViewObject  [interface; shared; CE 3.0..399, 5.0..599; Oleaut32.lib, Uuid.lib] */
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x500 && _WIN32_WCE < 0x600)) /* CE 5.0..599 */

/* IEnumOLEVERB  [interface; shared; CE 5.0..599; Ole32.lib, Uuid.lib] */

/* IOleItemContainer  [interface; shared; CE 5.0..599; Ole32.lib, Uuid.lib] */

/* IOleLink  [interface; shared; CE 5.0..599; Ole32.lib, Uuid.lib] */

/* IViewObject2  [interface; shared; CE 5.0..599; Ole32.lib, Uuid.lib] */
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x500 && _WIN32_WCE < 0x700)) /* CE 5.0..699 */

/* IOleContainer::EnumObjects  [interface, function; shared; CE 5.0..699] */
#endif /* _WIN32_WCE */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* OLEGETMONIKER  [enum; shared] */
#ifndef __WINCE_DEFINED_TAGOLEGETMONIKER
#define __WINCE_DEFINED_TAGOLEGETMONIKER
typedef enum tagOLEGETMONIKER {
 OLEGETMONIKER_ONLYIFTHERE = 1,
 OLEGETMONIKER_FORCEASSIGN = 2,
 OLEGETMONIKER_UNASSIGN = 3,
 OLEGETMONIKER_TEMPFORUSER = 4
} OLEGETMONIKER;
#endif /* __WINCE_DEFINED_TAGOLEGETMONIKER */
#ifndef __WINCE_DEFINED_POLEGETMONIKER
#define __WINCE_DEFINED_POLEGETMONIKER
typedef OLEGETMONIKER *POLEGETMONIKER, *LPOLEGETMONIKER;
#endif /* __WINCE_DEFINED_POLEGETMONIKER */

/* OLELINKBIND  [enum; shared] */
#ifndef __WINCE_DEFINED_TAGOLELINKBIND
#define __WINCE_DEFINED_TAGOLELINKBIND
typedef enum tagOLELINKBIND {
 OLELINKBIND_EVENIFCLASSDIFF = 1,
} OLELINKBIND;
#endif /* __WINCE_DEFINED_TAGOLELINKBIND */
#ifndef __WINCE_DEFINED_POLELINKBIND
#define __WINCE_DEFINED_POLELINKBIND
typedef OLELINKBIND *POLELINKBIND, *LPOLELINKBIND;
#endif /* __WINCE_DEFINED_POLELINKBIND */

/* OLEUPDATE  [enum; shared] */
#ifndef __WINCE_DEFINED_TAGOLEUPDATE
#define __WINCE_DEFINED_TAGOLEUPDATE
typedef enum tagOLEUPDATE {
 OLEUPDATE_ALWAYS = 1,
 OLEUPDATE_ONCALL = 3
} OLEUPDATE;
typedef OLEUPDATE *LPOLEUPDATE;
#endif /* __WINCE_DEFINED_TAGOLEUPDATE */

/* OLEVERB  [struct; shared] */
#ifndef __WINCE_DEFINED_TAGOLEVERB
#define __WINCE_DEFINED_TAGOLEVERB
typedef struct tagOLEVERB {
 LONG lVerb;
 LPWSTR lpszVerbName;
 DWORD fuFlags;
 DWORD grfAttribs;
} OLEVERB, *LPOLEVERB;
#endif /* __WINCE_DEFINED_TAGOLEVERB */

/* OLEVERBATTRIB  [enum; shared] */
#ifndef __WINCE_DEFINED_TAGOLEVERBATTRIB
#define __WINCE_DEFINED_TAGOLEVERBATTRIB
typedef enum tagOLEVERBATTRIB {
 OLEVERBATTRIB_NEVERDIRTIES = 1,
 OLEVERBATTRIB_ONCONTAINERMENU = 2
} OLEVERBATTRIB;
#endif /* __WINCE_DEFINED_TAGOLEVERBATTRIB */
#ifndef __WINCE_DEFINED_POLEVERBATTRIB
#define __WINCE_DEFINED_POLEVERBATTRIB
typedef OLEVERBATTRIB *POLEVERBATTRIB, *LPOLEVERBATTRIB;
#endif /* __WINCE_DEFINED_POLEVERBATTRIB */

/* OLEWHICHMK  [enum; shared] */
#ifndef __WINCE_DEFINED_TAGOLEWHICHMK
#define __WINCE_DEFINED_TAGOLEWHICHMK
typedef enum tagOLEWHICHMK {
 OLEWHICHMK_CONTAINER = 1,
 OLEWHICHMK_OBJREL = 2,
 OLEWHICHMK_OBJFULL = 3
} OLEWHICHMK;
#endif /* __WINCE_DEFINED_TAGOLEWHICHMK */
#ifndef __WINCE_DEFINED_POLEWHICHMK
#define __WINCE_DEFINED_POLEWHICHMK
typedef OLEWHICHMK *POLEWHICHMK, *LPOLEWHICHMK;
#endif /* __WINCE_DEFINED_POLEWHICHMK */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT BindIfRunning(void);
HRESULT CanInPlaceActivate();
HRESULT ContextSensitiveHelp(BOOL fEnterMode);
HRESULT DragLeave(void);
HRESULT Freeze(DWORD dwAspect, LONG lindex, void *pvAspect, DWORD *pdwFreeze);
HRESULT GetMiscStatus(DWORD dwAspect, DWORD *pdwStatus);
HRESULT GetUpdateOptions(DWORD* pdwUpdateOpt);
HRESULT IsUpToDate();
HRESULT OnInPlaceActivate();
HRESULT OnInPlaceDeactivate();
HRESULT OnPosRectChange(LPCRECT lprcPosRect);
HRESULT OnShowWindow(BOOL fShow);
HRESULT OnUIDeactivate(BOOL fUndoable);
HRESULT RequestNewObjectLayout();
HRESULT RequestNewObjectlayout();
HRESULT SaveObject(void);
HRESULT SendOnClose();
HRESULT SendOnSave();
HRESULT SetUpdateOptions(DWORD dwUpdateOpt);
HRESULT ShowObject();
HRESULT UnbindSource(void);
HRESULT Unfreeze(DWORD dwFreeze);
HRESULT Update();

#endif /* _OLEIDL_ */
