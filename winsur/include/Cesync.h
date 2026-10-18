/* Cesync.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 18 constants, 12 declarations, 1 outlines, 0 base types, 0 extra macros, 4 extra decls
 */
#ifndef _CESYNC_
#define _CESYNC_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define FO_DONE_ONE_VOL 0x00000002
#define FO_MORE_VOLUME 0x00000001
#define RSF_AUTO_COMBINE 0x00000200
#define RSF_COMBINE 0x00000008
#define RSF_CONFLICT_OBJECT 0x00000001
#define RSF_DISCARDED_OBJ 0x00000080
#define RSF_DUPLICATED_OBJECT 0x00000004
#define RSF_NEW_OBJECT 0x00000002
#define RSF_NEW_VOLUME 0x00000100
#define RSF_RESERVED1 0x00100000
#define RSF_RESERVED2 0x00200000
#define RSF_RESERVED3 0x00400000
#define RSF_RESERVED4 0x00800000
#define RSF_SYNC_DESKTOP_ONLY 0x00000020
#define RSF_SYNC_DEVICE_ONLY 0x00000010
#define RSF_UPDATED_HANDLE 0x00000040
#define SCF_SIMULATE_RTS 0x00000002
#define SCF_SINGLE_THREAD 0x00000001

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* REPLSETUP  [struct; ce-only] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* HREPLFLD  [struct; ce-only] */
#ifndef __WINCE_DEFINED_HREPLFLD
#define __WINCE_DEFINED_HREPLFLD
typedef struct _REPLFLD FAR* HREPLFLD;
#endif /* __WINCE_DEFINED_HREPLFLD */
#ifndef __WINCE_DEFINED_PHREPLFLD
#define __WINCE_DEFINED_PHREPLFLD
typedef HREPLFLD *PHREPLFLD, *LPHREPLFLD;
#endif /* __WINCE_DEFINED_PHREPLFLD */

/* HREPLITEM  [struct; ce-only] */
#ifndef __WINCE_DEFINED_HREPLITEM
#define __WINCE_DEFINED_HREPLITEM
typedef struct _REPLITEM FAR* HREPLITEM;
#endif /* __WINCE_DEFINED_HREPLITEM */
#ifndef __WINCE_DEFINED_PHREPLITEM
#define __WINCE_DEFINED_PHREPLITEM
typedef HREPLITEM *PHREPLITEM, *LPHREPLITEM;
#endif /* __WINCE_DEFINED_PHREPLITEM */

/* HREPLOBJ  [struct; ce-only] */
#ifndef __WINCE_DEFINED_HREPLOBJ
#define __WINCE_DEFINED_HREPLOBJ
typedef struct _REPLOBJ FAR* HREPLOBJ;
#endif /* __WINCE_DEFINED_HREPLOBJ */
#ifndef __WINCE_DEFINED_PHREPLOBJ
#define __WINCE_DEFINED_PHREPLOBJ
typedef HREPLOBJ *PHREPLOBJ, *LPHREPLOBJ;
#endif /* __WINCE_DEFINED_PHREPLOBJ */

/* ReplDialogs  [enum; ce-only] */
#ifndef __WINCE_DEFINED_REPLDIALOGS
#define __WINCE_DEFINED_REPLDIALOGS
enum ReplDialogs {
 OPTIONS_DIALOG
};
#endif /* __WINCE_DEFINED_REPLDIALOGS */

/* STOREINFO  [struct; ce-only] */
#ifndef __WINCE_DEFINED_TAGSTOREINFO
#define __WINCE_DEFINED_TAGSTOREINFO
#ifndef __WINCE_DEFINED_STOREINFO
#define __WINCE_DEFINED_STOREINFO
#ifndef __WINCE_DEFINED_PSTOREINFO
#define __WINCE_DEFINED_PSTOREINFO
typedef struct tagStoreInfo {
 UINT cbStruct;
 UINT uFlags;
 TCHAR szProgId[ 256 ];
 TCHAR szStoreDesc[ 200 ];
 UINT uTimerRes;
 UINT cbMaxStoreId;
 UINT cbStoreId;
 LPBYTE lpbStoreId;
} STOREINFO, *PSTOREINFO;
#endif /* __WINCE_DEFINED_PSTOREINFO */
#endif /* __WINCE_DEFINED_STOREINFO */
#endif /* __WINCE_DEFINED_TAGSTOREINFO */

/* OPTIONS_DIALOG  [extra enum] */
#ifndef __WINCE_DEFINED_REPLDIALOGS
#define __WINCE_DEFINED_REPLDIALOGS
#ifndef __WINCE_DEFINED_OPTIONS_DIALOG
#define __WINCE_DEFINED_OPTIONS_DIALOG
enum ReplDialogs {OPTIONS_DIALOG };
#endif /* __WINCE_DEFINED_OPTIONS_DIALOG */
#endif /* __WINCE_DEFINED_REPLDIALOGS */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
BOOL GetObjTypeInfo (POBJTYPEINFO pObjTypeInfo);
BOOL ObjectNotify(POBJNOTIFY pNotify);

#endif /* _CESYNC_ */
