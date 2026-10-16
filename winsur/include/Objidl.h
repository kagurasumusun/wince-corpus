/* Objidl.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 60 constants, 204 declarations, 30 outlines, 0 base types, 0 extra macros, 101 extra decls
 */
#ifndef _OBJIDL_
#define _OBJIDL_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define COLE_DEFAULT_AUTHINFO (
#define COLE_DEFAULT_PRINCIPAL (
#define PIDDSI_BYTECOUNT 0x00000004
#define PIDDSI_CATEGORY 0x00000002
#define PIDDSI_COMPANY 0x0000000F
#define PIDDSI_DOCPARTS 0x0000000D
#define PIDDSI_HEADINGPAIR 0x0000000C
#define PIDDSI_HIDDENCOUNT 0x00000009
#define PIDDSI_LINECOUNT 0x00000005
#define PIDDSI_LINKSDIRTY 0x00000010
#define PIDDSI_MANAGER 0x0000000E
#define PIDDSI_MMCLIPCOUNT 0x0000000A
#define PIDDSI_NOTECOUNT 0x00000008
#define PIDDSI_PARCOUNT 0x00000006
#define PIDDSI_PRESFORMAT 0x00000003
#define PIDDSI_SCALE 0x0000000B
#define PIDDSI_SLIDECOUNT 0x00000007
#define PIDSI_APPNAME 0x00000012
#define PIDSI_AUTHOR 0x00000004
#define PIDSI_CHARCOUNT 0x00000010
#define PIDSI_COMMENTS 0x00000006
#define PIDSI_CREATE_DTM 0x0000000C
#define PIDSI_DOC_SECURITY 0x00000013
#define PIDSI_EDITTIME 0x0000000A
#define PIDSI_KEYWORDS 0x00000005
#define PIDSI_LASTAUTHOR 0x00000008
#define PIDSI_LASTPRINTED 0x0000000B
#define PIDSI_LASTSAVE_DTM 0x0000000D
#define PIDSI_PAGECOUNT 0x0000000E
#define PIDSI_REVNUMBER 0x00000009
#define PIDSI_SUBJECT 0x00000003
#define PIDSI_TEMPLATE 0x00000007
#define PIDSI_THUMBNAIL 0x00000011
#define PIDSI_TITLE 0x00000002
#define PIDSI_WORDCOUNT 0x0000000F
#define PRSPEC_INVALID 0xFFFFFFFF
#define PRSPEC_LPWSTR 0x00000000
#define PRSPEC_PROPID 0x00000001
#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400)) /* CE 3.0..399 */
#define DVASPECT_CONTENT 1
#define DVASPECT_DOCPRINT 8
#define DVASPECT_ICON 4
#define DVASPECT_THUMBNAIL 2
#define EXTCONN_STRONG 0x0001
#define TYMED_FILE 2
#define TYMED_HGLOBAL 1
#define TYMED_ISTORAGE 8
#define TYMED_ISTREAM 4
#define TYMED_NULL 0
#endif /* _WIN32_WCE */
#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */
#define ADVF_DATAONSTOP 64
#define ADVF_NODATA 1
#define ADVF_ONLYONCE 4
#define ADVF_PRIMEFIRST 2
#define ADVFCACHE_FORCEBUILTIN 16
#define ADVFCACHE_NOHANDLER 8
#define ADVFCACHE_ONSAVE 32
#define DATADIR_GET 1
#define DATADIR_SET 2
#define DVASPECT_OPAQUE 16
#define DVASPECT_TRANSPARENT 32
#define MKRREDUCE_ALL 0
#endif /* _WIN32_WCE */

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 3.0..399, 5.0..599 */

/* IAdviseSink  [interface; shared; CE 3.0..399, 5.0..599; Oleaut32.lib, Uuid.lib] */

/* IClassActivator  [interface; shared; CE 3.0..399, 5.0..599; Ole32.lib, Uuid.lib] */

/* IClientSecurity  [interface; shared; CE 3.0..399, 5.0..599; Ole32.lib, Uuid.lib] */

/* IExternalConnection  [interface; shared; CE 3.0..399, 5.0..599; Ole32.lib, Uuid.lib] */

/* IFillLockBytes  [interface; shared; CE 3.0..399, 5.0..599; Ole32.lib, Uuid.lib] */

/* ILockBytes  [interface; shared; CE 3.0..399, 5.0..599; Ole32.lib, Uuid.lib] */

/* IMarshal  [interface; shared; CE 3.0..399, 5.0..599; Ole32.lib, Uuid.lib] */

/* IMessageFilter  [interface; shared; CE 3.0..399, 5.0..599; Ole32.lib, Uuid.lib] */

/* IMoniker  [interface; shared; CE 3.0..399, 5.0..599; Ole32.lib, Uuid.lib] */

/* IMultiQI  [interface; shared; CE 3.0..399, 5.0..599; Ole32.lib, Uuid.lib] */

/* IPersist  [interface; shared; CE 3.0..399, 5.0..599; Ole32.lib, Uuid.lib] */

/* IPersistFile  [interface; shared; CE 3.0..399, 5.0..599; Ole32.lib, Uuid.lib] */

/* IPersistStorage  [interface; shared; CE 3.0..399, 5.0..599; Ole32.lib, Uuid.lib] */

/* IRootStorage  [interface; shared; CE 3.0..399, 5.0..599; Ole32.lib, Uuid.lib] */

/* IROTData  [interface; shared; CE 3.0..399, 5.0..599; Ole32.lib, Uuid.lib] */

/* IRunnableObject  [interface; shared; CE 3.0..399, 5.0..599; Ole32.lib, Uuid.lib] */

/* IRunningObjectTable  [function, interface; shared; CE 3.0..399, 5.0..599; Ole32.lib, Uuid.lib] */

/* ISequentialStream  [interface; shared; CE 3.0..399, 5.0..599; Ole32.lib, Uuid.lib] */

/* IServerSecurity  [interface; shared; CE 3.0..399, 5.0..599; Ole32.lib, Uuid.lib] */

/* IStdMarshalInfo  [interface; shared; CE 3.0..399, 5.0..599; Ole32.lib, Uuid.lib] */

/* IStorage  [interface; shared; CE 3.0..399, 5.0..599; Ole32.lib, Uuid.lib] */

/* IStream  [interface; shared; CE 3.0..399, 5.0..599; Ole32.lib, Uuid.lib] */
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */

/* IBindCtx  [interface; shared; CE 5.0..599; Ole32.lib, Uuid.lib] */

/* IDataObject  [interface; shared; CE 5.0..599; Ole32.lib, Uuid.lib] */

/* IEnumFORMATETC  [interface; shared; CE 5.0..599; Ole32.lib, Uuid.lib] */

/* IMalloc  [interface; shared; CE 5.0..599; Ole32.lib] */

/* IMallocSpy  [interface; shared; CE 5.0..599; Ole32.lib] */

/* IPersistStream  [interface; shared; CE 5.0..599; Ole32.lib, Uuid.lib] */

/* IProgressNotify  [interface; shared; CE 5.0..599; Ole32.lib, Uuid.lib] */
#endif /* _WIN32_WCE */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 2.11..2.12, 3.0..699 */

/* DVTARGETDEVICE  [struct; shared; CE 2.11..2.12, 3.0..699] */
typedef struct tagDVTARGETDEVICE{
 DWORD tdSize;
 WORD tdDriverNameOffset;
 WORD tdDeviceNameOffset;
 WORD tdPortNameOffset;
 WORD tdExtDevmodeOffset;
 BYTE tdData;
} DVTARGETDEVICE;

/* FORMATETC  [struct; shared; CE 2.11..2.12, 3.0..699] */
typedef struct FARSTRUCT tagFORMATETC {
 unsigned long cfFormat;
 DVTARGETDEVICE* ptd;
 unsigned long dwAspect;
 long lindex;
 unsigned long tymed;
} FORMATETC, *LPFORMATETC;

/* STATSTG  [struct; shared; CE 2.11..2.12, 3.0..699] */
typedef struct tagSTATSTG {
 LPOLESTR pwcsName; 
 DWORD type;
 ULARGE_INTEGER cbSize; 
 FILETIME mtime; 
 FILETIME ctime; 
 FILETIME atime; 
 DWORD grfMode; 
 DWORD grfLocksSupported; 
 CLSID clsid; 
 DWORD grfStateBits; 
 DWORD reserved; 
} STATSTG;

/* STGMEDIUM  [struct; ce-only; CE 2.11..2.12, 3.0..699] */
typedef struct tagSTGMEDIUM {
 unsigned long tymed;
 union {
 HBITMAP hBitmap;
 HMETAFILEPICT hMetaFilePict;
 HENHMETAFILE hEnhMetaFile;
 HGLOBAL hGlobal;
 LPOLESTR lpszFileName;
 Istream* pstm;
 IStorage* pstg;
 }u;
 IUnknown* pUnkForRelease; 
} uSTGMEDIUM;

/* TYMED  [enum; shared; CE 2.11..2.12, 3.0..699] */
typedef enum tagTYMED {
 TYMED_HGLOBAL = 1,
 TYMED_FILE = 2,
 TYMED_ISTREAM = 4,
 TYMED_ISTORAGE = 8,
 TYMED_NULL = 0,
} TYMED;
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 3.0..399, 5.0..599 */

/* IEnumMoniker  [function, interface; shared; CE 3.0..399, 5.0..599; Ole32.lib, Uuid.lib] */
HRESULT Next( 
 ULONG celt, 
 IMoniker_com_IMoniker *rgelt, 
 ULONG *pceltFetched 
); 
HRESULT Skip( 
 ULONG celt 
); 
HRESULT Reset(void) 
HRESULT Clone( 
 IEnumMoniker **ppenum 
);

/* IEnumSTATDATA  [function, interface; shared; CE 3.0..399, 5.0..599; Ole32.lib, Uuid.lib] */
HRESULT Next( 
 ULONG celt, 
 STATDATA * rgelt, 
 ULONG * pceltFetched 
); 
HRESULT Skip( 
 ULONG celt 
); 
HRESULT Reset(void) 
HRESULT Clone( 
 IEnumSTATDATA ** ppenum 
);

/* IEnumSTATSTG  [function, interface; shared; CE 3.0..399, 5.0..599; Ole32.lib, Uuid.lib] */
HRESULT Next( 
 ULONG celt, 
 STATSTG * rgelt, 
 ULONG * pceltFetched 
); 
HRESULT Skip( 
 ULONG celt 
); 
HRESULT Reset(void) 
HRESULT Clone( 
 IEnumSTATSTG ** ppenum 
);

/* IEnumString  [function, interface; shared; CE 3.0..399, 5.0..599; Ole32.lib, Uuid.lib] */
HRESULT Next( 
ULONG celt, 
LPOLESTR *rgelt, 
ULONG *pceltFetched ); 
HRESULT Skip( 
ULONG celt ); 
HRESULT Reset(void) 
HRESULT Clone( 
IEnumString **ppenum );
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 3.0..699 */

/* BIND_OPTS  [struct; shared; CE 3.0..699] */
typedef struct tagBIND_OPTS {
 DWORD cbStruct; 
 DWORD grfFlags; 
 DWORD grfMode; 
 DWORD dwTickCountDeadline; 
} BIND_OPTS, *LPBIND_OPTS;

/* BIND_OPTS2  [struct; ce-only; CE 3.0..699] */
typedef struct tagBIND_OPTS2 {
 DWORD cbStruct;
 DWORD grfFlags;
 DWORD grfMode;
 DWORD dwTickCountDeadline;
 DWORD dwTrackFlags;
 DWORD dwClassContext;
 LCID locale;
 COSERVERINFO* pServerInfo;
} BIND_OPTS2, *LPBIND_OPTS2;
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* ADVF  [enum; shared; CE 4.0..699] */
typedef enum tagADVF { 
 ADVF_NODATA = 1, 
 ADVF_PRIMEFIRST = 2, 
 ADVF_ONLYONCE = 4, 
 ADVFCACHE_NOHANDLER = 8, 
 ADVFCACHE_FORCEBUILTIN = 16, 
 ADVFCACHE_ONSAVE = 32, 
 ADVF_DATAONSTOP = 64 
} ADVF;

/* DATADIR  [enum; shared; CE 4.0..699] */
typedef enum tagDATADIR { 
 DATADIR_GET = 1, 
 DATADIR_SET = 2 
} DATADIR;

/* IEnumUnknown  [function, interface; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Next(
 ULONG celt, 
 IUnknown** rgelt, 
 ULONG* pceltFetched 
);
HRESULT Skip(
 ULONG celt 
);
HRESULT Reset(void)
HRESULT Clone(
 IEnumUnknown** ppenum
);

/* INTERFACEINFO  [struct; shared; CE 4.0..699] */
/* DERIVED member outline -- documented order, types/offsets not stated */
/*   pUnk */
/*   iid */
/*   wMethod */

/* MKRREDUCE  [enum; shared; CE 4.0..699] */
typedef enum tagMKRREDUCE { 
 MKRREDUCE_ONE = 3<<16, 
 MKRREDUCE_TOUSER = 2<<16, 
 MKRREDUCE_THROUGHUSER = 1<<16, 
 MKRREDUCE_ALL = 0 
} MKRREDUCE;

/* MKSYS  [enum; shared; CE 4.0..699] */
typedef enum tagMKSYS { 
 MKSYS_NONE = 0,
 MKSYS_GENERICCOMPOSITE = 1,
 MKSYS_FILEMONIKER = 2,
 MKSYS_ANTIMONIKER = 3,
 MKSYS_ITEMMONIKER = 4,
 MKSYS_POINTERMONIKER = 5,
 MKSYS_CLASSMONIKER = 7,
 MKSYS_OBJREFMONIKER = 8,
 MKSYS_SESSIONMONIKER = 9
} MKSYS;

/* MULTI_QI  [struct; shared; CE 4.0..699] */
typedef struct _MULTI_QI {
 const IID* pIID; 
 IUnknown* pItf; 
 HRESULT hr; 
} MULTI_QI;

/* SOLE_AUTHENTICATION_SERVICE  [struct; shared; CE 4.0..699] */
typedef struct tagSOLE_AUTHENTICATION_SERVICE {
 DWORD dwAuthnSvc; 
 DWORD dwAuthzSvc; 
 OLECHAR* pPrincipalName; 
 HRESULT hr; 
} SOLE_AUTHENTICATION_SERVICE;
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */

/* IGlobalInterfaceTable  [function, interface; shared; CE 5.0..599; Ole32.lib, Uuid.lib] */
CoCreateInstance(CLSID_StdGlobalInterfaceTable, 
 NULL, 
 CLSCTX_INPROC_SERVER, 
 IID_IGlobalInterfaceTable, 
 (void **)&gpGIT)
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 2.11..2.12, 3.0..399, 5.0..699 */

/* IPersist::GetClassID  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT GetClassID( 
 CLSID* pClassID
);

/* IPersistStorage::HandsOffStorage  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT HandsOfStorage(void);

/* IPersistStorage::InitNew  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT InitNew( 
 IStorage* pStg
);

/* IPersistStorage::IsDirty  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT IsDirty(void);

/* IPersistStorage::Load  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Load( 
 IStorage* pStg
);

/* IPersistStorage::Save  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Save( 
 IStorage* pStgSave, 
 BOOL fSameAsLoad
);

/* IPersistStorage::SaveCompleted  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT SaveCompleted( 
 IStorage* pStgNew
);

/* IRootStorage::SwitchToFile  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT SwitchTofFile( 
 LPOLESTR pszFile 
);

/* IStorage::Commit  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Commit( 
 DWORD grfCommitFlags 
);

/* IStorage::CopyTo  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT CopyTo( 
 DWORD ciidExclude, 
 IID const* rgiidExclude, 
 SNB snbExclude, 
 IStorage* pstgDest 
);

/* IStorage::CreateStorage  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT CreateStorage( 
 const WCHAR* pwcsName, 
 DWORD grfMode, 
 DWORD reserved1, 
 DWORD reserved2, 
 IStorage** ppstg 
);

/* IStorage::CreateStream  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT CreateStream( 
 const WCHAR* pwcsName, 
 DWORD grfMode, 
 DWORD reserved1, 
 DWORD* reserved2, 
 IStream* ppstm 
);

/* IStorage::DestroyElement  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT DestroyElement( 
 WCHAR* pwcsName 
);

/* IStorage::EnumElements  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT EnumElement( 
 DWORD reserved1, 
 void* reserved2, 
 DWORD reserved3, 
 IEnumSTATSTG** ppenum 
);

/* IStorage::MoveElementTo  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT MoveElementTo( 
 const WCHAR* pwcsName, 
 IStorage* pstgDest, 
 LPWSTR pwcsNewName, 
 DWORD grfFlags 
);

/* IStorage::OpenStorage  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT OpenStorage( 
 const WCHAR* pwcsName, 
 IStorage* pstgPriority, 
 DWORD grfMode, 
 SNB snbExclude, 
 DWORD reserved, 
 IStorage** ppstg 
);

/* IStorage::OpenStream  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT OpenStream( 
 const WCHAR* pwcsName, 
 void* reserved1, 
 DWORD grfMode, 
 DWORD reserved2, 
 IStream** ppstm 
);

/* IStorage::RenameElement  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT RenameElement( 
 const WCHAR* pwcsOldName, 
 const WCHAR* pwcsNewName 
);

/* IStorage::Revert  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Revert(void);

/* IStorage::SetClass  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT SetClass( 
 REFCLSID clsid 
);

/* IStorage::SetElementTimes  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT SetElementTimes( 
 const WCHAR* pwcsName, 
 FILETIME const* pctime, 
 FILETIME const* patime, 
 FILETIME const* pmtime 
);

/* IStorage::SetStateBits  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT SetStateBits( 
 DWORD grfStateBits, 
 DWORD grfMask 
);

/* IStorage::Stat  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Stat( 
 STATSTG* pstatstg, 
 DWORD grfStatFlag 
);

/* IStream::Clone  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Clone( 
 IStream** ppstm 
);

/* IStream::Commit  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Commit( 
 DWORD grfCommitFlags 
);

/* IStream::CopyTo  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT CopyTo( 
 IStream* pstm, 
 ULARGE_INTEGER cb, 
 ULARGE_INTEGER* pcbRead, 
 ULARGE_INTEGER* pcbWritten 
);

/* IStream::LockRegion  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT LockRegion( 
 LARGE_INTEGER libOffset, 
 LARGE_INTEGER cb, 
 DWORD dwLockType 
);

/* IStream::Read  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Read( 
 void* pv, 
 ULONG cb, 
 ULONG* pcbRead 
);

/* IStream::Revert  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Revert(void);

/* IStream::Seek  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Seek( 
 ULARGE_INTEGER dlibMove, 
 DWORD dwOrigin, 
 ULARGE_INTEGER plibNewPosition 
);

/* IStream::SetSize  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT SetSize( 
 ULARGE_INTEGER libNewSize 
);

/* IStream::Stat  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Stat( 
 STATSTG* pstatstg, 
 DWORD grfStatFlag 
);

/* IStream::UnlockRegion  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT UnlockRegion( 
 ULARGE_INTEGER libOffset, 
 ULARGE_INTEGER cb, 
 DWORD dwLockType 
);

/* IStream::Write  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Write( 
 void const* pv, 
 ULONG cb,
 ULONG* pcbWritten 
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 2.11..2.12, 3.0..699 */

/* IAdviseSink::OnClose  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
void OnClose();

/* IAdviseSink::OnDataChange  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
void OnDataChange( 
 FORMATETC* pFormatetc, 
 STGMEDIUM* pStgmed
);

/* IAdviseSink::OnRename  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
void OnRename( 
 IMoniker* pmk
);

/* IAdviseSink::OnSave  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
void OnSave();

/* IAdviseSink::OnViewChange  [function; shared; CE 2.11..2.12, 3.0..699; Oleaut32.lib, oleaut32.lib, Uuid.lib, uuid.lib] */
void OnViewChange( 
 DWORD dwAspect, 
 LONG lindex
);

/* IEnumSTATDATA::Clone  [function; shared; CE 2.11..2.12, 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Clone( 
 Ienum<ELT_T>** ppenum
);

/* IEnumSTATDATA::Next  [function; shared; CE 2.11..2.12, 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Next( 
 ULONG celt, 
 ELT_T[ ] rgelt, 
 ULONG* pceltFetched
);

/* IEnumSTATDATA::Reset  [function; shared; CE 2.11..2.12, 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Reset(void);

/* IEnumSTATDATA::Skip  [function; shared; CE 2.11..2.12, 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESUTL Skip( 
 ULONG celt
);

/* IEnumSTATSTG::Clone  [function; shared; CE 2.11..2.12, 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Clone( 
 Ienum<ELT_T>** ppenum
);

/* IEnumSTATSTG::Next  [function; shared; CE 2.11..2.12, 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Next( 
 ULONG celt, 
 ELT_T[ ] rgelt, 
 ULONG* pceltFetched
);

/* IEnumSTATSTG::Reset  [function; shared; CE 2.11..2.12, 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Reset(void);

/* IEnumSTATSTG::Skip  [function; shared; CE 2.11..2.12, 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESUTL Skip( 
 ULONG celt
);

/* ILockBytes::Flush  [function; shared; CE 2.11..2.12, 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Flush(void);

/* ILockBytes::LockRegion  [function; shared; CE 2.11..2.12, 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT LockRegion( 
 ULARGE_INTEGER libOffset, 
 ULARGE_INTEGER cb, 
 DWORD dwLockType 
);

/* ILockBytes::ReadAt  [function; shared; CE 2.11..2.12, 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT ReadAt( 
 ULARGE_INTEGER ulOffset, 
 void* pv, 
 ULONG cb, 
 ULONG* pcbRead 
);

/* ILockBytes::SetSize  [function; shared; CE 2.11..2.12, 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT SetSize( 
 ULARGE_INTEGER cb 
);

/* ILockBytes::Stat  [function; shared; CE 2.11..2.12, 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Stat( 
 STATSTG* pstatstg, 
 DWORD grfStatFlag 
);

/* ILockBytes::UnlockRegion  [function; shared; CE 2.11..2.12, 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT UnlockRegion( 
 ULARGE_INTEGER libOffset, 
 ULARGE_INTEGER cb, 
 DWORD dwLockType 
);

/* ILockBytes::WriteAt  [function; shared; CE 2.11..2.12, 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT WriteAt( 
 ULARGE_INTEGER ulOffset, 
 void const* pv, 
 ULONG cb, 
 ULONG* pcbWritten 
);

/* IMoniker::BindToObject  [function; shared; CE 2.11..2.12, 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT BindToObject( 
 IBindCtx* pbc, 
 IMoniker* pmkToLeft, 
 REFIID riidResult, 
 void** ppvResult
);

/* IMoniker::BindToStorage  [function; shared; CE 2.11..2.12, 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT BindToStorage( 
 IBindCtx* pbc, 
 IMoniker* pmkToLeft, 
 REFIID riid, 
 void** ppvObj
);

/* IMoniker::CommonPrefixWith  [function; shared; CE 2.11..2.12, 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT CommonPrefixWith( 
 IMoniker* pmkOther, 
 IMoniker** ppmkPrefix
);

/* IMoniker::ComposeWith  [function; shared; CE 2.11..2.12, 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT ComposeWith( 
 IMoniker* pmkRight, 
 BOOL fOnlyIfNotGeneric, 
 IMoniker** ppmkComposite
);

/* IMoniker::Enum  [function; shared; CE 2.11..2.12, 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Enum( 
 BOOL fForward, 
 IEnumMoniker** ppenumMoniker
);

/* IMoniker::GetDisplayName  [function; shared; CE 2.11..2.12, 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT GetDisplayName( 
 IBindCtx* pbc, 
 IMoniker* pmkToLeft, 
 LPOlESTR* ppszDisplayName
);

/* IMoniker::GetTimeOfLastChange  [function; shared; CE 2.11..2.12, 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT GetTimeOfLastChange( 
 IBindCtx* pbc, 
 IMoniker* pmkToLeft, 
 FILETIME* pFileTime
);

/* IMoniker::Hash  [function; shared; CE 2.11..2.12, 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Hash( 
 DWORD* pdwHash
);

/* IMoniker::Inverse  [function; shared; CE 2.11..2.12, 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Inverse( 
 IMoniker** ppmk
);

/* IMoniker::IsEqual  [function; shared; CE 2.11..2.12, 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT IsEqual( 
 IMoniker* pmkOtherMoniker
);

/* IMoniker::IsRunning  [function; shared; CE 2.11..2.12, 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT IsRunning( 
 IBindCtx* pbc, 
 IMoniker* pmkToLeft, 
 IMoniker* pmkNewlyRunning
);

/* IMoniker::IsSystemMoniker  [function; shared; CE 2.11..2.12, 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT IsSystemMoniker( 
 DWORD* pdwMksys
);

/* IMoniker::ParseDisplayName  [function; shared; CE 2.11..2.12, 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT ParseDisplayName( 
 IBindCtx* pbc, 
 IMoniker* pmkToLeft, 
 LPOLESTR* pszDisplayName, 
 ULONG* pchEaten, 
 IMoniker** ppmkOut
);

/* IMoniker::Reduce  [function; shared; CE 2.11..2.12, 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Reduce( 
 IBindCtx* pbc, 
 DWORD dwReduceHowFar, 
 IMoniker** ppmkToLeft,
 IMoniker** ppmkReduced
);

/* IMoniker::RelativePathTo  [function; shared; CE 2.11..2.12, 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT RelativePathTo( 
 IMoniker* pmkOther, 
 IMoniker** ppmkRelPath
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 3.0..399, 5.0..699 */

/* IPersistFile::Load  [function; shared; CE 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Load(
 LPCOLESTR pszFileName,
 DWORD dwMode 
);

/* IPersistFile::Save  [function; shared; CE 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Save(
 LPCOLESTR pszFileName,
 BOOL fRemember 
);

/* IPersistFile::SaveCompleted  [function; shared; CE 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT SaveCompleted(
 LPCOLESTR pszFileName 
);

/* IROTData::GetComparisonData  [function; shared; CE 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT GetComparisonData(
 byte* pbData,
 ULONG cbMax,
 ULONG* pcbData 
);

/* IRunnableObject::GetRunningClass  [function; shared; CE 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT GetRunningClass(
 LPCLSID lpClsid 
);

/* IRunnableObject::IsRunning  [function; shared; CE 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
BOOL IsRunning();

/* IRunnableObject::LockRunning  [function; shared; CE 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT LockRunning(
 BOOL fLock,
 BOOL fLastUnlockCloses 
);

/* IRunnableObject::Run  [function; shared; CE 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Run(
 LPBC lpbc 
);

/* IRunnableObject::SetContainedObject  [function; shared; CE 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT SetContainedObject(
 BOOL fContained 
);

/* IRunningObjectTable::EnumRunning  [function; shared; CE 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT EnumRunning(
 IEnumMoniker** ppenumMoniker 
);

/* IRunningObjectTable::GetObject  [function; shared; CE 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT GetObject(
 IMoniker* pmkObjectName,
 IUnknown** ppunkObject 
);

/* IRunningObjectTable::GetTimeOfLastChange  [function; shared; CE 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT GetTimeOfLastChange(
 IMoniker* pmkObjectName,
 FILETIME* pfiletime 
);

/* IRunningObjectTable::IsRunning  [function; shared; CE 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT IsRunning(
 IMoniker* pmkObjectName 
);

/* IRunningObjectTable::NoteChangeTime  [function; shared; CE 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT NoteChangeTime(
 DWORD dwRegister,
 FILETIME* pfiletime 
);

/* IRunningObjectTable::Register  [function; shared; CE 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Register(
 DWORD grfFlags,
 IUnknown* punkObject,
 IMoniker* pmkObjectName,
 DWORD* pdwRegister 
);

/* IRunningObjectTable::Revoke  [function; shared; CE 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Revoke(
 DWORD dwRegister 
);

/* ISequentialStream::Read  [function; shared; CE 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Read(
 void* pv,
 ULONG cb,
 ULONG* pcbRead 
);

/* ISequentialStream::Write  [function; shared; CE 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Write(
 void const* pv,
 ULONG cb,
 ULONG* pcbWritten 
);

/* IServerSecurity::ImpersonateClient  [function; shared; CE 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT ImpersonateClient( )

/* IServerSecurity::IsImpersonating  [function; shared; CE 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
BOOL IsImpersonating( )

/* IServerSecurity::QueryBlanket  [function; shared; CE 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT QueryBlanket(
 DWORD* pAuthnSvc,
 DWORD* pAuthzSvc,
 OLECHAR** pServerPrincName,
 DWORD* pAuthnLevel,
 DWORD* pImpLevel,
 RPC_AUTHZ_HANDLE* pPrivs,
 DWORD* pCapabilities 
);

/* IServerSecurity::RevertToSelf  [function; shared; CE 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT RevertToSelf( )

/* IStdMarshalInfo::GetClassForHandler  [function; shared; CE 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT GetClassForHandler(
 DWORD dwDestContext,
 void* pvDestContext,
 CLSID* pClsid 
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 3.0..699 */

/* IClassActivator::GetClassObject  [function; shared; CE 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT GetClassObject(
 REFCLSID* pClassID,
 DWORD dwClsContext,
 LCID locale,
 REFIID riid,
 void** ppv 
);

/* IClientSecurity::CopyProxy  [function; shared; CE 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT CopyProxy(
 IUnknown* pProxy,
 IUnknown** ppCopy 
);

/* IClientSecurity::QueryBlanket  [function; shared; CE 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT QueryBlanket(
 IUnknown* pProxy,
 DWORD* pAuthnSvc,
 DWORD* pAuthzSvc,
 OLECHAR** pServerPrincName,
 DWORD* pAuthnLevel,
 DWORD* pImpLevel,
 RPC_AUTH_IDENTITY_HANDLE* pAuthInfo, 
 DWORD* pCapabilities 
);

/* IClientSecurity::SetBlanket  [function; shared; CE 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT SetBlanket(
 IUnknown* pProxy,
 DWORD dwAuthnSvc,
 DWORD dwAuthzSvc,
 OLECHAR* pServerPrincName,
 DWORD dwAuthnLevel,
 DWORD dwImpLevel,
 RPC_AUTH_IDENTITY_HANDLE pAuthInfo,
 DWORD dwCapabilities 
);

/* IExternalConnection::AddConnection  [function; shared; CE 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT AddConnection(
 DWORD exconn,
 DWORD dwreserved 
);

/* IExternalConnection::ReleaseConnection  [function; shared; CE 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT ReleaseConnection(
 DWORD extconn,
 DWORD dwreserved,
 BOOL fLastReleaseCloses 
);

/* IFillLockBytes::FillAppend  [function; shared; CE 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT FillAppend(
 void const* pv,
 ULONG cb,
 ULONG* pcbWritten 
);

/* IFillLockBytes::FillAt  [function; shared; CE 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT FillAt(
 ULARGE_INTEGER uIOffset,
 void const* pv,
 ULONG cb,
 ULONG* pcbWritten 
);

/* IFillLockBytes::SetFillSize  [function; shared; CE 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT SetFillSize(
 ULARGE_INTEGER uISize 
);

/* IFillLockBytes::Terminate  [function; shared; CE 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Terminate(
 BOOL bCanceled 
);

/* IMarshal::DisconnectObject  [function; shared; CE 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT DisconnectObject(
 DWORD dwReserved 
);

/* IMarshal::GetMarshalSizeMax  [function; shared; CE 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT GetMarshalSizeMax(
 REFIID riid,
 void* pv,
 DWORD dwDestContext,
 void* pvDestContext,
 DWORD mshlflags,
 ULONG* pSize 
);

/* IMarshal::GetUnmarshalClass  [function; shared; CE 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT GetUnmarshalClass(
 REFIID riid,
 void* pv,
 DWORD dwDestContext,
 void* pvDestContext,
 DWORD mshlflags,
 CLSID* pCid 
);

/* IMarshal::MarshalInterface  [function; shared; CE 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT MarshalInterface(
 IStream* pStm,
 REFIID riid,
 void* pv,
 DWORD dwDestContext,
 void* pvDestContext,
 DWORD mshlflags 
);

/* IMarshal::ReleaseMarshalData  [function; shared; CE 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT ReleaseMarshalData(
 IStream* pStm 
);

/* IMarshal::UnmarshalInterface  [function; shared; CE 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT UnmarshalInterface(
 IStream* pStm,
 REFIID riid,
 void** ppv 
);

/* IMessageFilter::HandleInComingCall  [function; shared; CE 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
DWORD HandleInComingCall(
 DWORD dwCallType,
 HTASK threadIDCaller,
 DWORD dwTickCount,
 LPINTERFACEINFO lpInterfaceInfo 
);

/* IMessageFilter::MessagePending  [function; shared; CE 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
DWORD MessagePending(
 HTASK threadIDCallee,
 DWORD dwTickCount,
 DWORD dwPendingType 
);

/* IMessageFilter::RetryRejectedCall  [function; shared; CE 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
DWORD RetryRejectedCall(
 HTASK threadIDCallee,
 DWORD dwTickCount,
 DWORD dwRejectType 
);

/* IMultiQI::QueryMultipleInterfaces  [function; shared; CE 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT QueryMultipleInterfaces(
 ULONG cMQIs,
 MULTI_QI* pMQIs 
);

/* IPersistFile::GetCurFile  [function; shared; CE 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT GetCurFile(
 LPOLESTR* ppszFileName 
);

/* IPersistFile::IsDirty  [function; shared; CE 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT IsDirty(void);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* IBindCtx::EnumObjectParam  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib] */
HRESULT EnumObjectParam(
 IEnumString** ppenum
);

/* IBindCtx::GetBindOptions  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT GetBindOptions(
 BIND_OPTS* pbindopts
);

/* IBindCtx::GetObjectParam  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT GetObjectParam(
 LPOLESTR pszKey,
 IUnknown** ppunk
);

/* IBindCtx::GetRunningObjectTable  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT GetRunningObjectTable(
 IRunningObjectTable** pprot
);

/* IBindCtx::RegisterObjectBound  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT RegisterObjectBound(
 IUnknown* punk
);

/* IBindCtx::RegisterObjectParam  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT RegisterObjectParam(
 LPOLESTR pszKey,
 IUnknown* punk
);

/* IBindCtx::ReleaseBoundObjects  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT ReleaseBoundObjects(void);

/* IBindCtx::RevokeObjectBound  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT RevokeObjectBound(
 IUnknown* punk
);

/* IBindCtx::RevokeObjectParam  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT RevokeObjectParam(
 LPOLESTR pszKey
);

/* IBindCtx::SetBindOptions  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT SetBindOptions(
 BIND_OPTS* pbindopts
);

/* IDataObject::DAdvise  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT DAdvise(
 FORMATETC* pFormatetc,
 DWORD advf,
 IAdviseSink* pAdvSink,
 DWORD* pdwConnection
);

/* IDataObject::DUnadvise  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT DUnadvise(
 DWORD dwConnection
);

/* IDataObject::EnumDAdvise  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT EnumDAdvise(
 IEnumSTATDATA** ppenumAdvise
);

/* IDataObject::EnumFormatEtc  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT EnumFormatEtc(
 DWORD dwDirection, 
 IEnumFORMATETC** ppenumFormatetc
);

/* IDataObject::GetCanonicalFormatEtc  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT GetCanonicalFormatEtc(
 FORMATETC* pFormatetcIn,
 FORMATETC* pFormatetcOut
);

/* IDataObject::GetData  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT GetData(
 FORMATETC* pFormatetc,
 STGMEDIUM* pmedium
);

/* IDataObject::GetDataHere  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT GetDataHere(
 FORMATETC* pFormatetc,
 STGMEDIUM* pmedium
);

/* IDataObject::QueryGetData  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT QueryGetData(
 FORMATETC* pFormatetc
);

/* IDataObject::SetData  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT SetData(
 FORMATETC* pFormatetc,
 STGMEDIUM* pmedium,
 BOOL fRelease
);

/* IEnumFORMATETC::Clone  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Clone(
 IEnumFORMATETC** ppenum
);

/* IEnumFORMATETC::Next  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Next(
 ULONG celt,
 FORMATETC* rgelt,
 ULONG* pceltFetched
);

/* IEnumFORMATETC::Reset  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Reset(void);

/* IEnumFORMATETC::Skip  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Skip(
 ULONG celt
);

/* IEnumMoniker::Clone  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Clone(
 IEnumMoniker** ppenum 
);

/* IEnumMoniker::Next  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Next(
 ULONG celt, 
 IMoniker_com_Imoniker* rgelt, 
 ULONG* pceltFetched 
);

/* IEnumMoniker::Reset  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Reset(void);

/* IEnumMoniker::Skip  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Skip(
 ULONG celt 
);

/* IEnumString::Clone  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Clone(
 IEnumString** ppenum 
);

/* IEnumString::Next  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Next(
 ULONG celt, 
 LPOLESTR* rgelt, 
 ULONG* pceltFetched 
);

/* IEnumString::Reset  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Reset(void);

/* IEnumString::Skip  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Skip(
 ULONG celt 
);

/* IGlobalInterfaceTable::GetInterfaceFromGlobal  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT GetInterfaceFromGlobal(
 DWORD dwCookie, 
 REFIID riid, 
 void** ppv 
);

/* IGlobalInterfaceTable::RegisterInterfaceInGlobal  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT RegisterInterfaceInGlobal(
 IUnknown* pUnk, 
 REFIID riid, 
 DWORD* pdwCookie
);

/* IGlobalInterfaceTable::RevokeInterfaceFromGlobal  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT RevokeInterfaceFromGlobal(
 DWORD dwCookie
);

/* IMalloc::Alloc  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib] */
void* Alloc(
 ULONG cb 
);

/* IMalloc::DidAlloc  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib] */
int DidAlloc(
 void* pv 
);

/* IMalloc::Free  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib] */
void Free(
 void* pv 
);

/* IMalloc::GetSize  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib] */
ULONG GetSize(
 void* pv 
);

/* IMalloc::HeapMinimize  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib] */
void HeapMinimize();

/* IMalloc::Realloc  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib] */
void* Realloc(
 void* pv, 
 ULONG cb 
);

/* IMallocSpy::PostAlloc  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib] */
void* PostAlloc(
 void* pActual 
);

/* IMallocSpy::PostDidAlloc  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib] */
int PostDidAlloc(
 void* pRequest, 
 BOOL fSpyed, 
 int fActual 
);

/* IMallocSpy::PostFree  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib] */
void PostFree(
 BOOL fSpyed 
);

/* IMallocSpy::PostGetSize  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib] */
ULONG PostGetSize(
 ULONG cbActual, 
 BOOL fSpyed 
);

/* IMallocSpy::PostHeapMinimize  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib] */
void PostHeapMinimize(void);

/* IMallocSpy::PostRealloc  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib] */
void* PostRealloc(
 void* pActual, 
 BOOL fSpyed 
);

/* IMallocSpy::PreAlloc  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib] */
ULONG PreAlloc(
 ULONG cbRequest 
);

/* IMallocSpy::PreDidAlloc  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib] */
void* PreDidAlloc(
 void* pRequest, 
 BOOL fSpyed 
);

/* IMallocSpy::PreFree  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib] */
void* PreFree(
 void* pRequest, 
 BOOL fSpyed 
);

/* IMallocSpy::PreGetSize  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib] */
void* PreGetSize(
 void* pRequest, 
 BOOL fSpyed 
);

/* IMallocSpy::PreHeapMinimize  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib] */
void PreHeapMinimize(void);

/* IMallocSpy::PreRealloc  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib] */
ULONG PreRealloc(
 void* pRequest, 
 ULONG cbRequest, 
 void** ppNewRequest, 
 BOOL fSpyed 
);

/* IOleItemContainer::GetObject  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib] */
HRESULT GetObject(
 LPOLESTR pszItem, 
 DWORD dwSpeedNeeded, 
 IBindCtx* pbc, 
 REFIID riid, 
 void** ppvObject 
);

/* IOleItemContainer::GetObjectStorage  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib] */
HRESULT GetObjectStorage(
 LPOLESTR pszItem, 
 IBindCtx* pbc, 
 REFIID riid, 
 void** ppvStorage 
);

/* IOleItemContainer::IsRunning  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib] */
HRESULT IsRunning(
 LPOLESTR pszItem 
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */

/* IEnumTravelLogEntry::Clone  [function; ce-only; CE 5.0..599; heuristic-prefix] */
HRESULT Clone( 
 IEnumTravelLogEntry **ppEnum 
);

/* IEnumTravelLogEntry::Next  [function; ce-only; CE 5.0..599; heuristic-prefix] */
HRESULT Next( 
 ULONG cElt, 
 ITravelLogEntry **rgElt, 
 ULONG *pcEltFetched 
);

/* IEnumTravelLogEntry::Reset  [function; ce-only; CE 5.0..599; heuristic-prefix] */
HRESULT Reset(VOID);

/* IEnumTravelLogEntry::Skip  [function; ce-only; CE 5.0..599; heuristic-prefix] */
HRESULT Skip( 
 ULONG cElt 
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* IPersistStream::GetSizeMax  [function; shared; CE 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT GetSizeMax(
 ULARGE_INTEGER* pcbSize 
);

/* IPersistStream::IsDirty  [function; shared; CE 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT IsDirty(void);

/* IPersistStream::Load  [function; shared; CE 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Load(
 IStream* pStm 
);

/* IPersistStream::Save  [function; shared; CE 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Save(
 IStream* pStm, 
 BOOL fClearDirty
);

/* IProgressNotify::OnProgress  [function; shared; CE 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT OnProgress(
 DWORD dwProgressCurrent, 
 DWORD dwProgressMaximum, 
 BOOL fAccurate, 
 BOOL fOwner 
);

/* IStreamBufferCapture::ConvertToTemporaryRecording  [function; ce-only; CE 5.0..699; heuristic-prefix] */
HRESULT ConvertToTemporaryRecording(
 LPCOLESTR pszFileName
);

/* IStreamBufferCapture::GetBoundToLiveToken  [function; ce-only; CE 5.0..699; heuristic-prefix] */
HRESULT GetBoundToLiveToken(
 LPOLESTR* ppszToken
);

/* IStreamBufferCapture::GetRecordingPath  [function; ce-only; CE 5.0..699; heuristic-prefix] */
HRESULT GetRecordingPath(
 LPOLESTR* ppszPath
);

/* IStreamBufferCapture::SetRecordingPath  [function; ce-only; CE 5.0..699; heuristic-prefix] */
HRESULT SetRecordingPath(
 LPCOLESTR pszPath
);

/* IStreamBufferPlayback::GetTunePolicy  [function; ce-only; CE 5.0..699; heuristic-prefix] */
HRESULT GetTunePolicy(
 STRMBUF_PLAYBACK_TUNE_POLICY* peStrmbufPlaybackTunePolicy
);

/* IStreamBufferPlayback::NotifyGraphIsConnected  [function; ce-only; CE 5.0..699; heuristic-prefix] */
HRESULT NotifyGraphIsConnected();

/* IStreamBufferPlayback::SetTunePolicy  [function; ce-only; CE 5.0..699; heuristic-prefix] */
HRESULT SetTunePolicy(
 STRMBUF_PLAYBACK_TUNE_POLICY eStrmbufPlaybackTunePolicy
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* typedef */
typedef STGMEDIUM *LPSTGMEDIUM;

/* struct */
typedef struct tagBIND_OPTS {DWORDcbStruct;DWORDgrfFlags;DWORDgrfMode;DWORDdwTickCountDeadline;} BIND_OPTS, *LPBIND_OPTS;
typedef struct tagBIND_OPTS2 {DWORDcbStruct;DWORDgrfFlags;DWORDgrfMode;DWORDdwTickCountDeadline;DWORDdwTrackFlags;DWORDdwClassContext;LCIDlocale;COSERVERINFO* pServerInfo;} BIND_OPTS2, *LPBIND_OPTS2;
typedef struct FARSTRUCT tagFORMATETC {unsigned long cfFormat;DVTARGETDEVICE* ptd;unsigned long dwAspect;long lindex;unsigned long tymed;} FORMATETC, *LPFORMATETC;
typedef struct tagSTGMEDIUM { DWORD tymed; [switch_type(DWORD), switch_is((DWORD) tymed)] union { [case(TYMED_GDI)] HBITMAPhBitmap; [case(TYMED_MFPICT)] HMETAFILEPICT hMetaFilePict; [case(TYMED_ENHMF)]HENHMETAFILE hEnhMetaFile; [case(TYMED_HGLOBAL)] HGLOBAL hGlobal; [case(TYMED_FILE)] LPWSTR lpszFileName; [case(TYMED_ISTREAM)] IStream* pstm; [case(TYMED_ISTORAGE)] IStorage* pstg; [default]; };
typedef struct tagSTGMEDIUM {unsigned long tymed;union {HBITMAP hBitmap;HMETAFILEPICT hMetaFilePict;HENHMETAFILE hEnhMetaFile;HGLOBAL hGlobal;LPOLESTR lpszFileName;Istream* pstm;IStorage* pstg;}u;IUnknown* pUnkForRelease; } uSTGMEDIUM;

/* function */
HRESULT AddConnection( DWORD exconn, DWORD dwreserved );
HRESULT Commit( DWORD grfCommitFlags );
HRESULT CopyProxy( IUnknown *pProxy, IUnknown **ppCopy );
HRESULT CopyTo( DWORD ciidExclude, IID const *rgiidExclude, SNB snbExclude, IStorage *pstgDest );
HRESULT CreateStorage( const WCHAR *pwcsName, DWORD grfMode, DWORD reserved1, DWORD reserved2, IStorage **ppstg );
HRESULT CreateStream( const WCHAR *pwcsName, DWORD grfMode, DWORD reserved1, DWORD *reserved2, IStream *ppstm );
HRESULT DAdvise( FORMATETC* pFormatetc, DWORD advf, IAdviseSink* pAdvSink, DWORD* pdwConnection );
HRESULT DUnadvise( DWORD dwConnection );
HRESULT DestroyElement( WCHAR *pwcsName );
int DidAlloc( void* pv );
HRESULT DisconnectObject( DWORD dwReserved );
HRESULT EnumDAdvise( IEnumSTATDATA** ppenumAdvise );
HRESULT EnumElement( DWORD reserved1, void *reserved2, DWORD reserved3, IEnumSTATSTG **ppenum );
HRESULT EnumFormatEtc( DWORD dwDirection, IEnumFORMATETC** ppenumFormatetc );
HRESULT EnumObjectParam( IEnumString** ppenum );
HRESULT EnumRunning( IEnumMoniker **ppenumMoniker );
HRESULT FillAppend( void const *pv, ULONG cb, ULONG *pcbWritten );
HRESULT FillAt( ULARGE_INTEGER uIOffset, void const *pv, ULONG cb, ULONG *pcbWritten );
HRESULT FreeSurrogate();
HRESULT GetBindOptions( BIND_OPTS* pbindopts );
HRESULT GetCanonicalFormatEtc( FORMATETC* pFormatetcIn, FORMATETC* pFormatetcOut );
HRESULT GetClassForHandler( DWORD dwDestContext, void *pvDestContext, CLSID *pClsid );
HRESULT GetClassID( CLSID *pClassID);
HRESULT GetClassObject( REFCLSID *pClassID, DWORD dwClsContext, LCID locale, REFIID riid, void **ppv );
HRESULT GetComparisonData( byte *pbData, ULONG cbMax, ULONG *pcbData );
HRESULT GetCurFile( LPOLESTR *ppszFileName );
HRESULT GetData( FORMATETC* pFormatetc, STGMEDIUM* pmedium );
HRESULT GetDataHere( FORMATETC* pFormatetc, STGMEDIUM* pmedium );
HRESULT GetInterfaceFromGlobal( DWORD dwCookie, REFIID riid, void** ppv );
HRESULT GetMarshalSizeMax( REFIID riid, void *pv, DWORD dwDestContext, void * pvDestContext, DWORD mshlflags, ULONG * pSize );
HRESULT GetRunningClass( LPCLSID lpClsid );
HRESULT GetUnmarshalClass( REFIID riid, void *pv, DWORD dwDestContext, void *pvDestContext, DWORD mshlflags, CLSID *pCid );
DWORD HandleInComingCall( DWORD dwCallType, HTASK threadIDCaller, DWORD dwTickCount, LPINTERFACEINFO lpInterfaceInfo );
HRESULT HandsOfStorage(void);
void HeapMinimize();
HRESULT ImpersonateClient( )
HRESULT InitNew( IStorage *pStg);
HRESULT IsDirty(void);
BOOL IsImpersonating( )
HRESULT Load( LPCOLESTR pszFileName, DWORD dwMode );
HRESULT LoadDllServer( REFCLSID Clsid );
HRESULT LockRunning( BOOL fLock, BOOL fLastUnlockCloses );
HRESULT MarshalInterface( IStream *pStm, REFIID riid, void *pv, DWORD dwDestContext, void *pvDestContext, DWORD mshlflags );
DWORD MessagePending( HTASK threadIDCallee, DWORD dwTickCount, DWORD dwPendingType );
HRESULT MoveElementTo( const WCHAR *pwcsName, IStorage *pstgDest, LPWSTR pwcsNewName, DWORD grfFlags );
HRESULT NoteChangeTime( DWORD dwRegister, FILETIME *pfiletime );
HRESULT OnProgress( DWORD dwProgressCurrent, DWORD dwProgressMaximum, BOOL fAccurate, BOOL fOwner );
HRESULT OpenStorage( const WCHAR *pwcsName, IStorage *pstgPriority, DWORD grfMode, SNB snbExclude, DWORD reserved, IStorage **ppstg );
HRESULT OpenStream( const WCHAR *pwcsName, void *reserved1, DWORD grfMode, DWORD reserved2, IStream **ppstm );
void* PostAlloc(  void* pActual  );
int PostDidAlloc( void* pRequest, BOOL fSpyed, int fActual );
void PostFree( BOOL fSpyed );
LONG PostGetSize( ULONG cbActual, BOOL fSpyed );
void PostHeapMinimize(void);
void* PostRealloc(  void* pActual,  BOOL fSpyed  );
LONG PreAlloc( ULONG cbRequest );
void* PreDidAlloc(  void* pRequest,  BOOL fSpyed  );
void* PreFree(  void* pRequest,  BOOL fSpyed  );
void* PreGetSize(  void* pRequest,  BOOL fSpyed  );
void PreHeapMinimize(void);
LONG PreRealloc( void* pRequest, ULONG cbRequest, void** ppNewRequest, BOOL fSpyed );
HRESULT QueryBlanket( IUnknown *pProxy, DWORD *pAuthnSvc, DWORD *pAuthzSvc, OLECHAR **pServerPrincName, DWORD *pAuthnLevel, DWORD *pImpLevel, RPC_AUTH_IDENTITY_HANDLE* pAuthInfo, DWORD *pCapabilities );
HRESULT QueryGetData( FORMATETC* pFormatetc );
HRESULT QueryMultipleInterfaces( ULONG cMQIs, MULTI_QI *pMQIs );
HRESULT Read( void *pv, ULONG cb, ULONG *pcbRead );
void* Realloc(  void* pv,  ULONG cb  );
HRESULT Register( DWORD grfFlags, IUnknown *punkObject, IMoniker *pmkObjectName, DWORD *pdwRegister );
HRESULT RegisterInterfaceInGlobal( IUnknown* pUnk, REFIID riid, DWORD* pdwCookie );
HRESULT RegisterObjectBound( IUnknown* punk );
HRESULT RegisterObjectParam( LPOLESTR pszKey, IUnknown* punk );
HRESULT ReleaseBoundObjects(void);
HRESULT ReleaseMarshalData( IStream *pStm );
HRESULT RenameElement( const WCHAR *pwcsOldName, const WCHAR *pwcsNewName );
DWORD RetryRejectedCall( HTASK threadIDCallee, DWORD dwTickCount, DWORD dwRejectType );
HRESULT Revert( void );
HRESULT RevertToSelf( )
HRESULT Revoke( DWORD dwRegister );
HRESULT RevokeInterfaceFromGlobal( DWORD dwCookie );
HRESULT RevokeObjectBound( IUnknown* punk );
HRESULT RevokeObjectParam( LPOLESTR pszKey );
HRESULT Run( LPBC lpbc );
HRESULT SaveCompleted( LPCOLESTR pszFileName );
HRESULT Seek( ULARGE_INTEGER dlibMove, DWORD dwOrigin, ULARGE_INTEGER plibNewPosition );
HRESULT SetBindOptions( BIND_OPTS* pbindopts );
HRESULT SetBlanket( IUnknown *pProxy, DWORD dwAuthnSvc, DWORD dwAuthzSvc, OLECHAR *pServerPrincName, DWORD dwAuthnLevel, DWORD dwImpLevel, RPC_AUTH_IDENTITY_HANDLE pAuthInfo, DWORD dwCapabilities );
HRESULT SetClass( REFCLSID clsid );
HRESULT SetContainedObject( BOOL fContained );
HRESULT SetData( FORMATETC* pFormatetc, STGMEDIUM* pmedium, BOOL fRelease );
HRESULT SetElementTimes( const WCHAR *pwcsName, FILETIME const *pctime, FILETIME const *patime, FILETIME const *pmtime );
HRESULT SetFillSize( ULARGE_INTEGER uISize );
HRESULT SetStateBits( DWORD grfStateBits, DWORD grfMask );
HRESULT SwitchTofFile( LPOLESTR pszFile );
HRESULT Terminate( BOOL bCanceled );
HRESULT UnmarshalInterface( IStream *pStm, REFIID riid, void **ppv );
HRESULT Write( void const *pv, ULONG cb, ULONG *pcbWritten );

#endif /* _OBJIDL_ */
