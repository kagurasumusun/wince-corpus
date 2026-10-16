/* Windbase.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 7 constants, 45 declarations, 15 outlines, 0 base types, 0 extra macros, 4 extra decls
 */
#ifndef _WINDBASE_
#define _WINDBASE_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define CEDB_NOCOMPRESS 0x00010000
#define CEDB_VALIDCREATE 0x0017
#define CEDB_VALIDDBFLAGS 0x0010
#define CEDB_VALIDMODTIME 0x0008
#define CEDB_VALIDNAME 0x0001
#define CEDB_VALIDSORTSPEC 0x0004
#define CEDB_VALIDTYPE 0x0002

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* CEDBASEINFOEX  [struct; ce-only; Coredll.lib, coredll.lib] */

/* CEVT_AUTO_I4  [typedef; ce-only; heuristic-prefix] */

/* CEVT_AUTO_I8  [typedef; ce-only; heuristic-prefix] */

/* CEVT_BLOB  [typedef; ce-only; heuristic-prefix] */

/* CEVT_BOOL  [typedef; ce-only; heuristic-prefix] */

/* CEVT_FILETIME  [typedef; ce-only; heuristic-prefix] */

/* CEVT_I2  [typedef; ce-only; heuristic-prefix] */

/* CEVT_I4  [typedef; ce-only; heuristic-prefix] */

/* CEVT_LPWSTR  [typedef; ce-only; heuristic-prefix] */

/* CEVT_R8  [typedef; ce-only; heuristic-prefix] */

/* CEVT_RECID  [typedef; ce-only; heuristic-prefix] */

/* CEVT_STREAM  [typedef; ce-only; heuristic-prefix] */

/* CEVT_UI2  [typedef; ce-only; heuristic-prefix] */

/* CEVT_UI4  [typedef; ce-only; heuristic-prefix] */

/* SORTORDERSPECEX  [struct; ce-only; Coredll.lib, coredll.lib] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* CENOTIFYREQUEST  [struct; ce-only] */
typedef struct _CENOTIFYREQUEST {
 DWORD dwSize;
 HWND hwnd; 
 DWORD dwFlags;
 HANDLE hHeap;
 DWORD dwParam;
} CENOTIFYREQUEST;

/* CEPROPSPEC  [struct; ce-only; Coredll.lib, coredll.lib] */
typedef struct CEPROPSPEC {
 WORD wVersion;
 CEPROPID propid;
 DWORD dwFlags;
 LPWSTR pwszPropName;
 DWORD cchPropName;
} CEPROPSPEC;

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* CeCreateDatabaseEx2  [function; ce-only; CE 4.0..699; Coredll.lib, coredll.lib] */
CEOID CeCreateDatabaseEx2( 
 PCEGUID pguid, 
 CEDBASEINFOEX* pInfo
);

/* CeGetDBInformationByHandle  [function; ce-only; CE 4.0..699; Coredll.lib, coredll.lib] */
BOOL CeGetDBInformationByHandle(
 HANDLE hDbase, 
 LPBY_HANDLE_DB_INFORMATION lpDBInfo 
);

/* CeOidGetInfoEx2  [function; ce-only; CE 4.0..699; Coredll.lib, coredll.lib] */
BOOL CeOidGetInfoEx2(
 PCEGUID pGuid,
 CEOID oid,
 CEOIDINFO* poidInfo
);

/* CeOpenDatabaseEx2  [function; ce-only; CE 4.0..699; Coredll.lib, coredll.lib] */
HANDLE CeOpenDatabaseEx2( 
 PCEGUID pguid, 
 PCEOID poid,
 LPWSTR lpszName, 
 SORTORDERSPECEX* psort, 
 DWORD dwFlags,
 CENOTIFYREQUEST* pRequest
);

/* CeSeekDatabaseEx  [function; ce-only; CE 4.0..699; Coredll.lib, coredll.lib] */
CEOID CeSeekDatabaseEx(
 HANDLE hDatabase,
 DWORD dwSeekType, 
 DWORD dwValue, 
 WORD wNumVals,
 LPDWORD lpdwIndex
);

/* CeSetDatabaseInfoEx2  [function; ce-only; CE 4.0..699; Coredll.lib, coredll.lib] */
BOOL CeSetDatabaseInfoEx2( 
 PCEGUID pguid, 
 CEOID oidDbase,
 CEDBASEINFOEX* pNewInfo
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* CeAddDatabaseProps  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
BOOL CeAddDatabaseProps(
 PCEGUID pGuid,
 CEOID oidDb,
 DWORD cProps,
 CEPROPSPEC* prgProps
);

/* CeBeginTransaction  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
BOOL CeBeginTransaction(
 HANDLE hSession,
 CEDBISOLATIONLEVEL isoLevel
);

/* CeCreateDatabaseWithProps  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
CEOID CeCreateDatabaseWithProps(
 PCEGUID pGuid,
 CEDBASEINFOEX* pInfo,
 DWORD cProps,
 CEPROPSPEC* prgProps
);

/* CeCreateSession  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
HANDLE CeCreateSession(
 CEGUID* pGuid
);

/* CeEndTransaction  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
BOOL CeEndTransaction(
 HANDLE hSession,
 BOOL fCommit
);

/* CeGetDatabaseProps  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
BOOL CeGetDatabaseProps (
 HANDLE hDatabase,
 LPWORD lpcPropID,
 CEPROPID* prgPropID,
 CEPROPSPEC* prgProps
);

/* CeGetDatabaseSession  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
HANDLE CeGetDatabaseSession(
 HANDLE hDatabase
);

/* CeOpenDatabaseInSession  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
HANDLE CeOpenDatabaseInSession(
 HANDLE hSession,
 PCEGUID pGuid,
 PCEOID poid,
 LPWSTR lpwszName,
 SORTORDERSPECEX* pSort,
 DWORD dwFlags,
 CENOTIFYREQUEST* pRequest
);

/* CeOpenStream  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
HANDLE CeOpenStream(
 HANDLE hDatabase,
 CEPROPID propid,
 DWORD dwMode
);

/* CeRemoveDatabaseProps  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
BOOL CeRemoveDatabaseProps(
 PCEGUID pGuid,
 CEOID oidDb,
 DWORD cProps,
 CEPROPID* prgProps
);

/* CeSetSessionOption  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
BOOL CeSetSessionOption(
 HANDLE hSession,
 ULONG ulOptionId,
 DWORD dwValue
);

/* CeStreamRead  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
BOOL CeStreamRead(
 HANDLE hStream,
 LPBYTE lprgbBuffer,
 DWORD cbRead,
 LPDWORD lpcbRead
);

/* CeStreamSaveChanges  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
BOOL CeStreamSaveChanges(
 HANDLE hStream
);

/* CeStreamSeek  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
BOOL CeStreamSeek(
 HANDLE hStream,
 DWORD cbMove,
 DWORD dwOrigin,
 LPDWORD lpcbNewOffset
);

/* CeStreamSetSize  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
BOOL CeStreamSetSize(
 HANDLE hStream,
 DWORD cbSize
);

/* CeStreamWrite  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
BOOL CeStreamWrite(
 HANDLE hStream,
 LPBYTE lprgbBuffer,
 DWORD cbWrite,
 LPDWORD lpcbWritten
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* CeAddSyncPartner  [function; ce-only; CE 6.0..699; coredll.lib] */
BOOL CeAddSyncPartner(
 PCEGUID pVolGuid,
 PCEGUID pSyncPartnerGuid,
 LPCWSTR pwszFriendlyName,
 LPCWSTR pwszFullName 
);

/* CeAttachCustomTrackingData  [function; ce-only; CE 6.0..699; coredll.lib] */
BOOL CeAttachCustomTrackingData(
 HANDLE hChangeEnum,
 CEOID oidChangeRecord,
 BYTE* rgbData,
 DWORD ccb
);

/* CeBeginSyncSession  [function; ce-only; CE 6.0..699; coredll.lib] */
BOOL CeBeginSyncSession(
 HANDLE hSession,
 PCEGUID pSyncPartnerGuid,
 CEDBGEN genFrom,
 CEDBGEN genTo,
 DWORD dwFlags,
 CEDBGEN* pGenCur
);

/* CeEndSyncSession  [function; ce-only; CE 6.0..699; coredll.lib] */
BOOL CeEndSyncSession(
 HANDLE hSession,
 DWORD dwOutcome
);

/* CeFindNextChangedRecord  [function; ce-only; CE 6.0..699; coredll.lib] */
CEOID CeFindNextChangedRecord(
 HANDLE hChangeEnum
);

/* CeGetChangedRecordCnt  [function; ce-only; CE 6.0..699; coredll.lib] */
BOOL CeGetChangedRecordCnt(
 HANDLE hSession,
 CEOID oidDB,
 DWORD* pdwCnt
);

/* CeGetChangedRecords  [function; ce-only; CE 6.0..699; coredll.lib] */
HANDLE CeGetChangedRecords(
 HANDLE hSession,
 CEOID oidDB,
 DWORD dwChangeType
);

/* CeGetCustomTrackingData  [function; ce-only; CE 6.0..699; coredll.lib] */
BOOL CeGetCustomTrackingData(
 HANDLE hChangeEnum,
 CEOID oidChangeRecord,
 BYTE* rgbData,
 DWORD* pccb
);

/* CeGetPropChangeInfo  [function; ce-only; CE 6.0..699; coredll.lib] */
BOOL CeGetPropChangeInfo(
 HANDLE hChangeEnum,
 CEOID oidChangeRecord,
 CEPROPID propid,
 BOOL* pfPropChanged
);

/* CeGetRecordChangeInfo  [function; ce-only; CE 6.0..699; coredll.lib] */
BOOL CeGetRecordChangeInfo(
 HANDLE hChangeEnum,
 CEOID oidChangeRecord,
 CECHANGEINFO* pInfo
);

/* CeMarkRecord  [function; ce-only; CE 6.0..699; coredll.lib] */
BOOL CeMarkRecord(
 HANDLE hChangeEnum,
 CEOID oidChangeRecord,
 BOOL fChanged
);

/* CePurgeTrackingData  [function; ce-only; CE 6.0..699; coredll.lib] */
BOOL CePurgeTrackingData(
 PCEGUID pVolGuid,
 PCEGUID pSyncPartnerGuid,
 SYSTEMTIME* pstThreshold
);

/* CePurgeTrackingGenerations  [function; ce-only; CE 6.0..699; coredll.lib] */
BOOL CePurgeTrackingGenerations(
 PCEGUID pVolGuid,
 PCEGUID pSyncPartnerGuid,
 CEDBGEN genThreshold
);

/* CeRemoveDatabaseTracking  [function; ce-only; CE 6.0..699; coredll.lib] */
BOOL CeRemoveDatabaseTracking(
 PCEGUID pVolGuid,
 PCEGUID pSyncPartnerGuid,
 CEOID oid,
);

/* CeRemoveSyncPartner  [function; ce-only; CE 6.0..699; coredll.lib] */
BOOL CeRemoveSyncPartner(
PCEGUID pVolGuid,
PCEGUID pSyncPartnerGuid,
);

/* CeTrackDatabase  [function; ce-only; CE 6.0..699; coredll.lib] */
BOOL CeTrackDatabase(
 PCEGUID pVolGuid,
 PCEGUID pSyncPartnerGuid,
 CEOID oid,
 DWORD dwTrackingFlags
);

/* CeTrackProperty  [function; ce-only; CE 6.0..699; coredll.lib] */
BOOL CeTrackProperty(
 PCEGUID pVolGuid,
 CEOID oidDB,
 CEPROPID propid,
 BOOL fTrack
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct CESORTORDERSPECEX { WORD wVersion; WORD wNumProps; WORD wKeyFlags; WORD wReserved; CEPROPID rgPropID[CEDB_MAXSORTPROP]; DWROD rgdwFlags[CEDB_MAXSORTPROP]; } CESORTORDERSPECEX;
typedef struct _BY_HANDLE_DB_INFORMATION {
  WORD wVersion;
  CEGUID guidVol;
  CEOID oidDbase;
  CEDBASEINFOEX infDatabase;
} BY_HANDLE_DB_INFORMATION, *LPBY_HANDLE_DB_INFORMATION;

/* function */
CEOIDCeSeekDatabaseEx(HANDLE hDatabase,DWORDdwSeekType, DWORDdwValue, WORD wNumVals,LPDWORDlpdwIndex);

#endif /* _WINDBASE_ */
