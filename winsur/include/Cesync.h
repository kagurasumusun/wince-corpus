/* Cesync.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 14 constants, 58 declarations, 0 outlines, 0 base types, 0 extra macros, 42 extra decls
 */
#ifndef _CESYNC_
#define _CESYNC_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
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

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 2.11..2.12, 3.0..399, 5.0..699 */

/* CONFINFO  [struct; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699] */
typedef struct tagConfInfo{
 UINT cbStruct;
 HREPLFLD hFolder;
 HREPLITEM hLocalItem;
 HREPLITEM hRemoteItem;
 char szLocalName[MAX_OBJTYPE_NAME];
 char szLocalDesc[512];
 char szRemoteName[MAX_OBJTYPE_NAME];
 char szRemoteDesc[512];
} CONFINFO, *PCONFINFO;

/* DEVINFO  [struct; shared; CE 2.11..2.12, 3.0..399, 5.0..699] */
typedef struct tagDevInfo {
 DWORD pid;
 char szName[MAX_PATH];
 char szType[80];
 char szPath[MAX_PATH];
} DEVINFO, *PDEVINFO;

/* HREPLFLD  [struct; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699] */
typedef struct _REPLFLD FAR* HREPLFLD;

/* HREPLITEM  [struct; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699] */
typedef struct _REPLITEM FAR* HREPLITEM;

/* HREPLOBJ  [struct; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699] */
typedef struct _REPLOBJ FAR* HREPLOBJ;
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 2.11..2.12, 3.0..699 */

/* OBJNOTIFY  [struct; ce-only; CE 2.11..2.12, 3.0..699] */
typedef struct tagObjNotify {
 UINT cbStruct;
 OBJTYPENAME szObjType[MAX_OBJTYPE_NAME];
 UINT uFlags;
 UINT uPartnerBit;
 CEOID oidObject;
 CEOIDINFO oidInfo;
 UINT cOidChg;
 UINT cOidDel;
 UINT* poid;
} OBJNOTIFY, *POBJNOTIFY;

/* OBJTYPEINFO  [struct; ce-only; CE 2.11..2.12, 3.0..699] */
typedef struct tagObjTypeInfo {
 UINT cbStruct;
 OBJTYPENAMEW szObjType;
 UINT uFlags;
 WCHAR szName[80];
 UINT cObjects;
 UINT cbAllObj;
 FILETIME ftLastModified;
} OBJTPYEINFO, *POBJTYPEINFO;

/* OBJUIDATA  [struct; ce-only; CE 2.11..2.12, 3.0..699] */
typedef struct tagObjUIData {
 UINT cbStruct;
 HICON hIconLarge;
 HICON hIconSmall;
 char szName[MAX_PATH];
 char szSyncText[MAX_PATH];
 char szTypeText[80];
 char szPlTypeText[80];
} OBJUIDATA, *POBJUIDATA;

/* REPLSETUP  [struct; ce-only; CE 2.11..2.12, 3.0..699] */
typedef struct tagReplSetup {
 UINT cbStruct;
 BOOL fRead;
 DWORD dwFlags;
 HRESULT hr;
 OBJTYPENAME szObjType;
 IReplNotify * pNotify;
 DWORD oid;
 DWORD oidNew;
 IReplStore * pStore;
 HREPLFLD hFolder;
 HREPLITEM hItem;
 LPBYTE lpbVolumeID;
 UINT cbVolumeID;
} REPLSETUP, * PREPLSETUP;

/* STOREINFO  [struct; ce-only; CE 2.11..2.12, 3.0..699] */
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
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* FINDOBJINFO  [struct; ce-only; CE 5.0..699] */
typedef struct tagFindObjInfo {
 UINT uFlags;
 OBJTYPENAME szObjType;
 UINT * poid;
 UINT cUnChg;
 UINT cChg;
 LPBYTE lpbVolumeID;
 UINT cbVolumeID;
 LPVOID lpvUser;
} FINDOBJINFO, *PFINDOBJINFO;

/* ReplDialogs  [enum; ce-only; CE 5.0..699] */
enum ReplDialogs {
 OPTIONS_DIALOG
};

/* SDREQUEST  [struct; ce-only; CE 5.0..699] */
typedef struct SDREQUEST {
 OBJTYPENAME szObjType;
 BOOL fSet;
 UINT uCode;
 LPBYTE lpbData;
 UINT cbData;
} SDREQUEST, *PSDREQUEST;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE < 200) || (_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 1.0..199, 2.11..2.12, 3.0..399, 5.0..699 */

/* ReportStatus  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..399, 5.0..699; Coredll.lib] */
BOOL (*PREPORTSTATUS)(
 LPWSTR lpszObjType,
 UINT uCode,
 UINT uParam 
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE < 200) || (_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 1.0..199, 2.11..2.12, 3.0..699 */

/* IEnumReplItem::Clone  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib] */
HRESULT Clone(
 IEnumReplItem FAR* FAR* ppEnum
);

/* IEnumReplItem::Next  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib] */
HRESULT Next(
 unsigned long celt,
 HREPLITEM* phItem,
 unsigned long FAR* pCeltFetched
);

/* IEnumReplItem::Skip  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib] */
HRESULT Skip(
 unsigned long celt
);

/* IReplNotify::GetWindow  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib] */
HWND GetWindow(
 UINT uFlags
);

/* IReplNotify::OnItemCompleted  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib] */
HRESULT OnObjectCompleted(
 PREPLSETUP pSetup
);

/* IReplNotify::OnItemNotify  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib] */
HRESULT OnItemNotify(
 UINT uCode,
 LPSTR lpszProgId,
 LPSTR lpszObjType,
 HREPLITEM hItem,
 ULONG ulFlags
);

/* IReplNotify::QueryDevice  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib] */
void QueryDevice(
 UINT uCode,
 LPVOID* ppvData
);

/* IReplNotify::SetStatusText  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib] */
HRESULT SetStatusText(
 LPSTR lpszText
);

/* IReplObjHandler::DeleteObj  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib] */
HRESULT DeleteObj(
 PREPLSETUP pSetup
);

/* IReplObjHandler::GetPacket  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib] */
HRESULT GetPacket(
 LPBYTE* lppbData,
 DWORD* pcbData,
 DWORD cbRecommend
);

/* IReplObjHandler::Reset  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib] */
HRESULT Reset(
 PREPLSETUP pSetup
);

/* IReplObjHandler::SetPacket  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib] */
HRESULT SetPacket(
 LPBYTE lpbData,
 DWORD cbData
);

/* IReplObjHandler::Setup  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib] */
HRESULT Setup(
 PREPLSETUP pSetup
);

/* IReplStore::ActivateDialog  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib] */
HRESULT ActivateDialog(
 UINT uDlg,
 HWND hwndParent,
 HREPLFLD hFolder,
 IEnumReplItem* penum
);

/* IReplStore::BytesToObject  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib] */
HREPLOBJ BytesToObject(
 LPBYTE lpb,
 UINT cb
);

/* IReplStore::CompareItem  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib] */
int CompareItem(
 HREPLITEM hItem1,
 HREPLITEM hItem2
);

/* IReplStore::CompareStoreIDs  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib] */
HRESULT CompareStoreIDs(
 LPBYTE lpbID1,
 UINT cbID1,
 LPBYTE lpbID2,
 UINT cbID2
);

/* IReplStore::CopyObject  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib] */
BOOL CopyObject(
 HREPLOBJ hObjSrc,
 HREPLOBJ hObjDst
);

/* IReplStore::FindFirstItem  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib] */
HRESULT FindFirstItem(
 HREPLFLD hFolder,
 HREPLITEM* phItem,
 BOOL* pfExist
);

/* IReplStore::FindItemClose  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib] */
HRESULT FindItemClose(
 HREPLFLD hFolder
);

/* IReplStore::FindNextItem  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib] */
HRESULT FindNextItem(
 HREPLFLD hFolder,
 HREPLITEM* phItem,
 BOOL* pfExist
);

/* IReplStore::FreeObject  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib] */
void FreeObject(
 HREPLOBJ hObject
);

/* IReplStore::GetConflictInfo  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib] */
HRESULT GetConflictInfo(
 PCONFINFO pConfInfo
);

/* IReplStore::GetFolderInfo  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib] */
HRESULT GetFolderInfo(
 LPSTR lpszName,
 HREPLFLD* phFolder,
 IUnknown** ppObjHandler
);

/* IReplStore::GetObjTypeUIData  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib] */
HRESULT GetObjTypeUIData(
 HREPLFLD hFolder,
 POBJUIDATA pData
);

/* IReplStore::GetStoreInfo  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib] */
HRESULT GetStoreInfo(
 PSTOREINFO pInfo
);

/* IReplStore::Initialize  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib] */
HRESULT Initialize(
 IReplNotify* pReplNotify,
 UINT uFlags
);

/* IReplStore::IsFolderChanged  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib] */
HRESULT IsFolderChanged(
 HREPLFLD hFolder,
 BOOL* pfChanged
);

/* IReplStore::IsItemChanged  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib] */
BOOL IsItemChanged(
 HREPLFLD hFolder,
 HREPLITEM hItem,
 HREPLITEM hItemComp
);

/* IReplStore::IsItemReplicated  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib] */
BOOL IsItemReplicated(
 HREPLIFLD hFolder,
 HREPLITEM hItem
);

/* IReplStore::IsValidObject  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib] */
HRESULT IsValidObject(
 HREPLFLD hFolder,
 HREPLITEM hItem,
 UINT uFlags
);

/* IReplStore::ObjectToBytes  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib] */
UINT ObjectToBytes(
 HREPLOBJ hObject,
 LPBYTE lpb
);

/* IReplStore::RemoveDuplicates  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib] */
HRESULT RemoveDuplicates(
 LPSTR lpszObjType,
 UINT uFlags
);

/* IReplStore::ReportStatus  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib, Store.dll, store.dll] */
HRESULT ReportStatus(
 HREPLFLD hFolder,
 HREPLITEM hItem,
 UINT uStatus,
 UINT uParam
);

/* IReplStore::UpdateItem  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib] */
void UpdateItem(
 HREPLFLD hFolder,
 HREPLITEM hItemDst,
 HREPLITEM hItemSrc
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE < 200) || (_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 1.0..199, 3.0..699 */

/* InitObjType  [function; ce-only; CE 1.0..199, 3.0..699; Coredll.lib, coredll.lib] */
BOOL (*PINITOBJPROC)(
 LPWSTR lpszObjType,
 IReplObjHandler** ppObjHandler,
 UINT uPartnerBit
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE < 200) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 1.0..199, 5.0..699 */

/* GetObjTypeInfo  [function; ce-only; CE 1.0..199, 5.0..699] */
BOOL (*PGETOBJTYPEINFO)(
 POBJTYPEINFO pInfo
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 2.11..2.12, 3.0..699 */

/* IEnumReplItem::GetFolderHandle  [function; ce-only; CE 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib] */
hHREPLFLD GetFolderHandle( );

/* IEnumReplItem::Reset  [function; ce-only; CE 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib] */
HRESULT Reset();
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* FindObjects  [function; ce-only; CE 5.0..699] */
HRESULT (*PFINDOBJECTS)(
 PFINDOBJINFO pInfo
);

/* SyncData  [function; ce-only; CE 5.0..699] */
HRESULT (*PSYNCDATA)(
 PSDREQUEST psd 
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* DoOptionsDialog  [function; ce-only; CE 6.0..699] */
HRESULT DoOptionsDialog (
 HWND hwndParent, 
 LPCSTR lpszObjType, 
 IReplNotify* pntfy
);

/* OnSSPDisable  [function; ce-only; CE 6.0..699] */
HRESULT
 WINAPI
 OnSSPDisable
 (
 HWND
 hwndParent
 );

/* OnSSPEnable  [function; ce-only; CE 6.0..699] */
HRESULT
 WINAPI
 OnSSPEnable
 (
 HWND
 hwndParent
 );
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* enum */
enum ReplDialogs {OPTIONS_DIALOG };

/* struct */
typedef struct tagConfInfo{UINTcbStruct;HREPLFLDhFolder;HREPLITEMhLocalItem;HREPLITEMhRemoteItem;charszLocalName[MAX_OBJTYPE_NAME];
charszLocalDesc[512];
charszRemoteName[MAX_OBJTYPE_NAME];
charszRemoteDesc[512];
} CONFINFO, *PCONFINFO;
typedef struct tagDevInfo {DWORD pid;
char szName[MAX_PATH];
char szType[80];
char szPath[MAX_PATH];
} DEVINFO, *PDEVINFO;
typedef struct tagFindObjInfo { UINTuFlags; OBJTYPENAMEszObjType; UINT *poid; UINTcUnChg; UINTcChg; LPBYTElpbVolumeID; UINTcbVolumeID; LPVOIDlpvUser;} FINDOBJINFO, *PFINDOBJINFO;
typedef struct tagObjNotify {UINTcbStruct;OBJTYPENAMEszObjType[MAX_OBJTYPE_NAME];UINTuFlags;UINTuPartnerBit;CEOIDoidObject;CEOIDINFOoidInfo;UINTcOidChg;UINTcOidDel;UINT* poid;} OBJNOTIFY, *POBJNOTIFY;
typedef struct tagObjTypeInfo {UINT cbStruct;OBJTYPENAMEW szObjType;UINT uFlags;WCHAR szName[80];UINT cObjects;UINT cbAllObj;FILETIME ftLastModified;} OBJTPYEINFO, *POBJTYPEINFO;
typedef struct tagObjUIData {UINT cbStruct;HICON hIconLarge;HICONhIconSmall;charszName[MAX_PATH];charszSyncText[MAX_PATH];charszTypeText[80];charszPlTypeText[80];} OBJUIDATA, *POBJUIDATA;
typedef struct tagReplSetup { UINT cbStruct; BOOL fRead; DWORD dwFlags; HRESULT hr; OBJTYPENAME szObjType; IReplNotify * pNotify; DWORD oid; DWORD oidNew; IReplStore * pStore; HREPLFLD hFolder; HREPLITEM hItem; LPBYTE lpbVolumeID; UINT cbVolumeID;} REPLSETUP, * PREPLSETUP;
typedef struct SDREQUEST { OBJTYPENAMEszObjType; BOOLfSet; UINTuCode; LPBYTElpbData; UINTcbData;} SDREQUEST, *PSDREQUEST;
typedef struct tagStoreInfo {
  UINT cbStruct;
  UINT uFlags;
  TCHAR szProgId[256];
  TCHAR szStoreDesc[200];
  UINT uTimerRes;
  UINT cbMaxStoreId;
  UINT cbStoreId;
  LPBYTE lpbStoreId;
} STOREINFO, *PSTOREINFO;

/* function */
HRESULT ActivateDialog( UINT uDlg, HWND hwndParent, HREPLFLD hFolder, IEnumReplItem *penum);
HREPLOBJ BytesToObject(  LPBYTE lpb,  UINT cb);
HRESULT Clone( IEnumReplItem FAR *FAR *ppEnum);
int CompareItem( HREPLITEM hItem1, HREPLITEM hItem2);
HRESULT CompareStoreIDs( LPBYTE lpbID1, UINT cbID1, LPBYTE lpbID2, UINT cbID2);
BOOL CopyObject( HREPLOBJ hObjSrc, HREPLOBJ hObjDst);
HRESULT DeleteObj( PREPLSETUP pSetup);
HRESULT FindFirstItem( HREPLFLD hFolder, HREPLITEM *phItem, BOOL *pfExist);
HRESULT FindItemClose( HREPLFLD hFolder);
HRESULT FindNextItem( HREPLFLD hFolder, HREPLITEM *phItem, BOOL *pfExist);
void FreeObject( HREPLOBJ hObject);
HRESULT GetConflictInfo( PCONFINFO pConfInfo);
hHREPLFLD GetFolderHandle ( );
HRESULT GetFolderInfo( LPSTR lpszName, HREPLFLD *phFolder, IUnknown **ppObjHandler);
HRESULT GetObjTypeUIData( HREPLFLD hFolder, POBJUIDATA pData);
HRESULT GetPacket( LPBYTE *lppbData, DWORD *pcbData, DWORD cbRecommend);
HRESULT IsFolderChanged( HREPLFLD hFolder, BOOL *pfChanged);
BOOL IsItemChanged( HREPLFLD hFolder, HREPLITEM hItem, HREPLITEM hItemComp);
BOOL IsItemReplicated( HREPLIFLD hFolder, HREPLITEM hItem);
HRESULT IsValidObject( HREPLFLD hFolder, HREPLITEM hItem, UINT uFlags);
HRESULT Next( unsigned long celt, HREPLITEM *phItem, unsigned long FAR *pCeltFetched);
UINT ObjectToBytes( HREPLOBJ hObject, LPBYTE lpb);
HRESULT OnItemNotify( UINT uCode, LPSTR lpszProgId, LPSTR lpszObjType, HREPLITEM hItem, ULONG ulFlags);
HRESULT OnObjectCompleted( PREPLSETUP pSetup);
void QueryDevice( UINT uCode, LPVOID *ppvData);
HRESULT RemoveDuplicates( LPSTR lpszObjType, UINT uFlags);
HRESULT Reset();
HRESULT SetPacket( LPBYTE lpbData, DWORD cbData);
HRESULT SetStatusText ( LPSTR lpszText);
HRESULT Setup( PREPLSETUP pSetup);
HRESULT Skip( unsigned long celt);
void UpdateItem( HREPLFLD hFolder, HREPLITEM hItemDst, HREPLITEM hItemSrc);

#endif /* _CESYNC_ */
