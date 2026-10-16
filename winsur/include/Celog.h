/* Celog.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 37 constants, 98 declarations, 1 outlines, 0 base types, 0 extra macros, 74 extra decls
 */
#ifndef _CELOG_
#define _CELOG_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define BOOT_TIME_DEV_ACTIVATE 20
#define BOOT_TIME_DEV_FINISHED 21
#define BOOT_TIME_FS_DB_INITIALIZED 14
#define BOOT_TIME_FS_FILES_INITIALIZED 12
#define BOOT_TIME_FS_INITED 10
#define BOOT_TIME_FS_LAUNCH 15
#define BOOT_TIME_FS_OBJ_STORE_INITIALIZED 11
#define BOOT_TIME_FS_REG_INITIALIZED 13
#define BOOT_TIME_GWES_FINISHED 30
#define BOOT_TIME_LAUNCHING_FS 01
#define BOOT_TIME_SYSTEM_STARTED 40
#define CEL_FlushMapAtomic 2
#define CEL_FlushMapGather 4
#define CEL_FlushMapSimple 1
#define CEL_INVALID_MAPFLUSH 0
#define CEL_ValidateFile 3
#define CELZONE_ALWAYSON 0x40000000
#define CELZONE_BOOT_TIME 0x00010000
#define CELZONE_CRITSECT 0x00000100
#define CELZONE_DEBUG 0x00800000
#define CELZONE_DEMANDPAGE 0x00000010
#define CELZONE_HEAP 0x00000800
#define CELZONE_INTERRUPT 0x00000001
#define CELZONE_KCALL 0x00400000
#define CELZONE_LOADER 0x00004000
#define CELZONE_MEMTRACKING 0x00008000
#define CELZONE_MIGRATE 0x00000004
#define CELZONE_MISC 0x80000000
#define CELZONE_PRIORITYINV 0x00000080
#define CELZONE_PROCESS 0x00000040
#define CELZONE_RESCHEDULE 0x00000002
#define CELZONE_RESERVED1 0x20000000
#define CELZONE_RESERVED2 0x10000000
#define CELZONE_SYNCH 0x00000200
#define CELZONE_THREAD 0x00000020
#define CELZONE_TLB 0x00000008
#define CELZONE_VIRTMEM 0x00001000

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* CEL_EXTRA_PROCESS_INFO  [struct; ce-only] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* CEL_MAPFILE_VIEW_CLOSE  [struct; ce-only] */
typedef struct __CEL_MAPFILE_VIEW_CLOSE { 
 HANDLE hMap;
 LPVOID lpBaseAddress;
} CEL_MAPFILE_VIEW_CLOSE, *CEL_MAPFILE_VIEW_CLOSE;

/* CEL_MAPFILE_VIEW_OPEN  [struct; ce-only] */
typedef struct __CEL_MAPFILE_VIEW_OPEN { 
 HANDLE hMap;
 HANDLE hProcess;
 DWORD dwDesiredAccess;
 DWORD dwFileOffset;
 DWORD dwLen;
 LPVOID lpBaseAddress;
} CEL_MAPFILE_VIEW_OPEN, *CEL_MAPFILE_VIEW_OPEN;

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400)) /* CE 3.0..399 */

/* CeLogInit  [function; ce-only; CE 3.0..399] */
void CeLogInit (void);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 3.0..399, 5.0..699 */

/* CeLogData  [function; ce-only; CE 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
void CeLogData(
 BOOL fTimeStamp, 
 WORD wID, 
 PVOID pData, 
 WORD wLen, 
 DWORD dwZoneUser, 
 DWORD dwZoneCE, 
 WORD wFlag, 
 BOOL fFlagged 
);

/* CeLogReSync  [function; ce-only; CE 3.0..399, 5.0..699; Coredll.lib, coredll.dll, coredll.lib] */
BOOL CeLogReSync (void);

/* CeLogSetZones  [function; ce-only; CE 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
void CeLogSetZones(
 DWORD dwZoneUser, 
 DWORD dwZoneCE, 
 DWORD dwZoneProcess 
);

/* OEMCertifyModule  [function; ce-only; CE 3.0..399, 5.0..699; Nk.lib; heuristic-prefix] */
DWORD OEMCertifyModule(
 LPBYTE lpData, 
 DWORD cbData 
);

/* OEMCertifyModuleInit  [function; ce-only; CE 3.0..399, 5.0..699; Nk.lib; heuristic-prefix] */
BOOL OEMCertifyModuleInit( 
 LPTSTR lpModuleName 
);

/* OEMIdle  [function; ce-only; CE 3.0..399, 5.0..699; Nk.lib, OEMMain.lib, OEMMain_StaticKITL.lib; heuristic-prefix] */
void OEMIdle(
 DWORD dwIdleParam 
);

/* OEMInterruptHandler  [function; ce-only; CE 3.0..399, 5.0..699; Nk.lib, OEMMain.lib, OEMMain_StaticKITL.lib; heuristic-prefix] */
int OEMInterruptHandler(
 unsigned int ra 
);

/* OEMInterruptHandlerFIQ  [function; ce-only; CE 3.0..399, 5.0..699; Nk.lib, OEMMain.lib, OEMMain_StaticKITL.lib; heuristic-prefix] */
void OEMInterruptHandlerFIQ (void);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 600)) /* CE 3.0..599 */

/* CeLogThreadMigrate  [function; ce-only; CE 3.0..599; Coredll.lib] */
void CeLogThreadMigrate( 
 HANDLE hProcess, 
 DWORD dwReserved 
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 3.0..699 */

/* CeLogInterrupt  [function; ce-only; CE 3.0..699; Coredll.lib, coredll.lib] */
void CeLogInterrupt(
 DWORD dwlogvalue
);

/* OEMNMIHandler  [function; ce-only; CE 3.0..699; Nk.lib, OEMMain.lib, OEMMain_StaticKITL.lib; heuristic-prefix] */
If defined (x86)
void OEMNMIHandler (void);
#elif defined (SHx)
DWORD OEMNMIHandler (void);
#endif

/* PerfCountSinceTick  [function; ce-only; CE 3.0..699; Nk.lib; heuristic-prefix] */
DWORD PerfCountSinceTick (void);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* CeLogQueryZones  [function; ce-only; CE 4.0..699; Coredll.lib, coredll.lib; heuristic-prefix] */
BOOL CeLogQueryZones(
 LPDWORD lpdwZoneUser,
 LPDWORD lpdwZoneCE,
 LPDWORD ldpwZoneProcess
);

/* InitClock  [function; ce-only; CE 4.0..699; Nk.lib, OEMMain.lib, OEMMain_StaticKITL.lib; heuristic-prefix] */
void InitClock (void);

/* lpNKHaltSystem  [function; ce-only; CE 4.0..699; Nk.lib, OEMMain.lib, OEMMain_StaticKITL.lib; heuristic-prefix] */
extern void (*lpNKHaltSystem)(void);

/* OEMDataAbortHandler  [function; ce-only; CE 4.0..699; Nk.lib, OEMMain.lib, OEMMain_StaticKITL.lib; heuristic-prefix] */
void OEMDataAbortHandler(void);

/* OEMHandleVFPException  [function; ce-only; CE 4.0..699; Nk.lib, OEMMain.lib, OEMMain_StaticKITL.lib; heuristic-prefix] */
BOOL OEMHandleVFPException(
 EXCEPTION_RECORD* er,
 PCONTEXT pctx
);

/* OEMRestoreCoProcRegister  [function; ce-only; CE 4.0..699; Nk.lib, OEMMain.lib, OEMMain_StaticKITL.lib; heuristic-prefix] */
void OEMRestoreCoProcRegister(
 LPBYTE pArea
);

/* OEMRestoreVFPCtrlRegs  [function; ce-only; CE 4.0..699; Nk.lib, OEMMain.lib, OEMMain_StaticKITL.lib; heuristic-prefix] */
void OEMRestoreVFPCtrlRegs(
 LPDWORD lpExtra,
 int nMaxRegs
);

/* OEMSaveCoProcRegister  [function; ce-only; CE 4.0..699; Nk.lib, OEMMain.lib, OEMMain_StaticKITL.lib; heuristic-prefix] */
void OEMSaveCoProcRegister(
 LPBYTE pArea
);

/* OEMSaveVFPCtrlRegs  [function; ce-only; CE 4.0..699; Nk.lib, OEMMain.lib, OEMMain_StaticKITL.lib; heuristic-prefix] */
void OEMSaveVFPCtrlRegs(
 LPDWORD lpExtra,
 int nMaxRegs
);

/* pNotifyForceCleanboot  [function; ce-only; CE 4.0..699; Nk.lib, OEMMain.lib, OEMMain_StaticKITL.lib; heuristic-prefix] */
void pNotifyForceCleanboot(
 DWORD dwReserved1,
 DWORD dwReserved2,
 DWORD dwReserved3,
 DWORD dwReserved4
);

/* pOEMCalcFSPages  [function; ce-only; CE 4.0..699; Nk.lib, OEMMain.lib, OEMMain_StaticKITL.lib; heuristic-prefix] */
DWORD (*pOEMCalcFSPages)(
 DWORD dwMemPages,
 DWORD dwDefaultFSPages
);

/* StartUp  [function; ce-only; CE 4.0..699; Nk.lib; heuristic-prefix] */
void StartUp(void);

/* TLBClear  [function; ce-only; CE 4.0..699; Nk.lib, Nkstub.lib; heuristic-prefix] */
void TLBClear(void);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* CeLogGetZones  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
BOOL CeLogGetZones(
 LPDWORD lpdwZoneUser, 
 LPDWORD lpdwZoneCE, 
 LPDWORD lpdwZoneProcess,
 LPDWORD lpdwAvailableZones 
);

/* CeLogMsg  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
void CeLogMsg(
 WCHAR* format [, argument]
);

/* OEMInitCoProcRegisterSavedArea  [function; ce-only; CE 5.0..699; Nk.lib, OEMMain.lib, OEMMain_StaticKITL.lib; heuristic-prefix] */
void OEMInitCoProcRegisterSavedArea( 
 LPBYTE pArea
);

/* OEMIntrOccurs  [function; ce-only; CE 5.0..699; Nk.lib; heuristic-prefix] */
DWORD OEMIntrOccurs( 
 DWORD dwSysIntr 
);

/* OEMReschedule  [function; ce-only; CE 5.0..699; Nk.lib; heuristic-prefix] */
void OEMReschedule( 
 DWORD dwThrdId, 
 DWORD dwPrio, 
 DWORD dwQuantum, 
 DWORD dwFlags 
);

/* pfnOEMIntrOccurs  [function; ce-only; CE 5.0..699; Nk.lib; heuristic-prefix] */
DWORD (*pfnOEMIntrOccurs)( 
 DWORD dwSysIntr 
);

/* pfnOEMReschedule  [function; ce-only; CE 5.0..699; Nk.lib; heuristic-prefix] */
void (*pfnOEMReschedule)( 
 DWORD dwThrdId, 
 DWORD dwPrio, 
 DWORD dwQuantum, 
 DWORD dwFlags 
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* typedef */
typedef __CEL_INT_DATA {DWORDdwTimeStamp;WORDwSysIntr;WORDwNestingLevel;} CEL_INT_DATA, *PCEL_INT_DATA;
typedef __CEL_MODULE_FREE {HANDLEhProcess;HANDLEhModule;} CEL_MODULE_FREE, *PCEL_MODULE_FREE;
typedef __CEL_MODULE_LOAD {HANDLEhProcess;HANDLEhModule;DWORD dwBase;WCHARszName[0];} CEL_MODULE_LOAD, *PCEL_MODULE_LOAD;
typedef __CEL_MUTEX_RELEASE {HANDLEhMutex;} CEL_MUTEX_RELEASE, *PCEL_MUTEX_RELEASE;
typedef __CEL_SYSTEM_INVERT {HANDLEhThread;intnPriority;} CEL_SYSTEM_INVERT, *PCEL_SYSTEM_INVERT;
typedef __CEL_SYSTEM_PAGE {DWORDdwAddress;DWORDfReadWrite:1;DWORDfEndPageIn:1; DWORD fSuccess: 1 DWORDdwReserved: 29 } CEL_SYSTEM_PAGE, *PCEL_SYSTEM_PAGE;
typedef __CEL_SYSTEM_TLB {DWORDdwCount;} CEL_SYSTEM_TLB, *PCEL_SYSTEM_TLB;
typedef __CEL_THREAD_MIGRATE {HANDLEhProcess;DWORDdwReserved;} CEL_THREAD_MIGRATE, *PCEL_THREAD_MIGRATE;
typedef __CEL_THREAD_PRIORITY {HANDLEhThread;intnPriority;} CEL_THREAD_PRIORITY, *PCEL_THREAD_PRIORITY;
typedef __CEL_THREAD_QUANTUM {HANDLEhThread;DWORDdwQuantum;} CEL_THREAD_QUANTUM, *PCEL_THREAD_QUANTUM;

/* struct */
typedef struct _CEL_BOOT_TIME { DWORD dwAction; WCHAR szName[0]; } CEL_BOOT_TIME, *PCEL_BOOT_TIME;
typedef struct __CEL_DEBUG_MSG {DWORDpid;DWORDtid;WCHAR szMessage[0]; } CEL_CEL_DEBUG_MSG, *PCEL_CEL_DEBUG_MSG;
typedef struct __CEL_CRITSEC_DELETE {HANDLEhCS;} CEL_CRITSEC_DELETE, *PCEL_CRITSEC_DELETE;
typedef struct __CEL_CRITSEC_ENTER {HANDLEhCS;HANDLEhOwnerThread;}CEL_CRITSEC_ENTER, *PCEL_CRITSEC_ENTER;
typedef struct __CEL_CRITSEC_INIT {HANDLEhCS;}CEL_CRITSEC_INIT, *PCEL_CRITSEC_INIT;
typedef struct __CEL_CRITSEC_LEAVE {HANDLEhCS;HANDLEhOwnerThread;} CEL_CRITSEC_LEAVE, *PCEL_CRITSEC_LEAVE;
typedef struct __CEL_DATA_LOSS {DWORDdwBytes;} CEL_DATA_LOSS, *PCEL_DATA_LOSS;
typedef struct __CEL_EVENT_CREATE {HANDLEhEvent;DWORDfManual:1;DWORDfInitialState:1;DWORDfCreate:1;DWORDdwReserved:29;WCHARszName[0];} CEL_EVENT1, *PCEL_EVENT1;
typedef struct __CEL_EVENT_CLOSE {HANDLEhEvent;} CEL_EVENT_CLOSE, *PCEL_EVENT_CLOSE;
typedef struct __CEL_EVENT_DELETE {HANDLEhEvent;} CEL_EVENT_DELETE, *PCEL_EVENT_DELETE;
typedef struct __CEL_EVENT_PULSE {HANDLEhEvent;} CEL_EVENT_PULSE, *PCEL_EVENT_PULSE;
typedef struct __CEL_EVENT_RESET {HANDLEhEvent;} CEL_EVENT_RESET, *PCEL_EVENT_RESET;
typedef struct __CEL_EVENT_SET {HANDLEhEvent;} CEL_EVENT_SET, *PCEL_EVENT_SET;
typedef struct __CEL_EXTRA_MODULE_INFO {HANDLEhModule;DWORDdwVMLen;DWORDdwModuleFlags;DWORDdwOID;WCHARszFullPath[0];} CEL_EXTRA_MODULE_INFO, *PCEL_EXTRA_MODULE_INFO;
typedef struct __CEL_EXTRA_PROCESS_INFO {HANDLEhProcess; DWORD dwCodeBaseDWORDdwVMLen;DWORDdwOID;WCHARszFullPath[0];} CEL_EXTRA_PROCESS_INFO, *PCEL_EXTRA_PROCESS_INFO;
typedef struct __CEL_HEAP_ALLOC {HANDLEhHeap;DWORDdwFlags;DWORDdwBytes;DWORDlpMem;DWORD dwTID;DWORD dwPID;DWORD dwCallerPID;DWORD adwStackTrace[0];} CEL_HEAP_ALLOC, *PCEL_HEAP_ALLOC;
typedef struct __CEL_HEAP_CREATE {DWORDdwOptions;DWORDdwInitSize;DWORDdwMaxSize;HANDLEhHeap;DWORD dwTID;DWORD dwPID;} CEL_HEAP_CREATE, *PCEL_HEAP_CREATE;
typedef struct __CEL_HEAP_DESTROY {HANDLEhHeap;DWORD dwTID;DWORD dwPID;} CEL_HEAP_DESTROY, *PCEL_HEAP_DESTROY;
typedef struct __CEL_HEAP_FREE {HANDLEhHeap;DWORDdwFlags;DWORDlpMem;DWORD dwTID;DWORD dwPID;DWORD dwCallerPID;DWORD adwStackTrace[0];} CEL_HEAP_FREE, *PCEL_HEAP_FREE;
typedef struct __CEL_HEAP_REALLOC {HANDLEhHeap;DWORDdwFlags;DWORDdwBytes;DWORDlpMemOld;DWORDlpMem;DWORD dwTID;DWORD dwPID;DWORD dwCallerPID;DWORD adwStackTrace[0];} CEL_HEAP_REALLOC, *PCEL_HEAP_REALLOC;
typedef struct __CEL_INTERRUPTS {DWORDdwDiscarded;CEL_INT_DATAIntData[0];} CEL_INTERRUPTS, *PCEL_INTERRUPTS;
typedef struct __CEL_LOG_MARKER {DWORDdwFrequency;DWORDdwDefaultQuantum;DWORDdwVersion;} CEL_LOG_MARKER, *PCEL_LOG_MARKER;
typedef struct __CEL_MAPFILE_CREATE {HANDLEhMap; DWORD flProtect;
DWORD dwMapFlags;
DWORD dwMaxSize;
WCHAR szName[0];
} CEL_MAPFILE_CREATE, *PCEL_MAPFILE_CREATE;
typedef struct __CEL_MAPFILE_DESTROY {HANDLEhMap; } CEL_MAPFILE_DESTROY , *PCEL_MAPFILE_DESTROY ;
typedef struct __CEL_MAPFILE_FLUSH {LPVOIDlpBaseAddress; DWORD dwLen; WORD wFlushFlags; WORD wNumPages; } CEL_MAPFILE_FLUSH, *PCEL_MAPFILE_FLUSH;
typedef struct __CEL_MEMTRACK_BASELINE {DWORDdwReserved; } CEL_MEMTRACK_BASELINE, *PCEL_MEMTRACK_BASELINE;
typedef struct __CEL_MODULE_REFERENCES {HANDLEhModule;CEL_PROCESS_REFCOUNTref[1];} CEL_MODULE_REFERENCES, *PCEL_MODULE_REFERENCES;
typedef struct __CEL_MUTEX_CLOSE {HANDLEhMutex;} CEL_MUTEX_CLOSE, *PCEL_MUTEX_CLOSE;
typedef struct __CEL_MUTEX_CREATE {HANDLEhMutex;WCHARszName[0];} CEL_MUTEX_CREATE, *PCEL_MUTEX_CREATE;
typedef struct __CEL_MUTEX_DELETE {HANDLEhMutex;} CEL_MUTEX_DELETE, *PCEL_MUTEX_DELETE;
typedef struct __CEL_PROCESS_CLOSE {HANDLEhProcess;} CEL_PROCESS_CLOSE, *PCEL_PROCESS_CLOSE;
typedef struct __CEL_PROCESS_CREATE {HANDLEhProcess;DWORD dwVMBase;WCHARszName[0];} CEL_PROCESS_CREATE, *PCEL_PROCESS_CREATE;
typedef struct __CEL_PROCESS_DELETE {HANDLEhProcess;} CEL_PROCESS_DELETE, *PCEL_PROCESS_DELETE;
typedef struct __CEL_PROCESS_REFCOUNT {HANDLEhProcess;DWORDdwRefCount} CEL_PROCESS_REFCOUNT, *PCEL_PROCESS_REFCOUNT;
typedef struct __CEL_PROCESS_TERMINATE {HANDLEhProcess;} CEL_PROCESS_TERMINATE, *PCEL_PROCESS_TERMINATE;
typedef struct __CEL_SEM_CLOSE {HANDLEhSem;} CEL_SEM_CLOSE, *PCEL_SEM_CLOSE;
typedef struct __CEL_SEM_CREATE {HANDLEhSem;DWORDdwInitCount;DWORDdwMaxCount;WCHARszName[0];} CEL_SEM_CREATE, *PCEL_SEM_CREATE;
typedef struct __CEL_SEM_DELETE {HANDLEhSem;} CEL_SEM_DELETE, *PCEL_SEM_DELETE;
typedef struct __CEL_SEM_RELEASE {HANDLEhSem;DWORDdwReleaseCount;DWORDdwPreviousCount;} CEL_SEM_RELEASE, *PCEL_SEM_RELEASE;
typedef struct __CEL_SLEEP {DWORDdwTimeout;} CEL_SLEEP, *PCEL_SLEEP;
typedef struct __CEL_THREAD_CLOSE {HANDLEhThread;} CEL_THREAD_CLOSE, *PCEL_THREAD_CLOSE;
typedef struct __CEL_THREAD_CREATE {HANDLEhThread;HANDLEhProcess;HANDLE hModule;DWORD dwStartAddr;intnPriority;WCHARszName[0];} CEL_THREAD_CREATE, *PCEL_THREAD_CREATE;
typedef struct __CEL_THREAD_DELETE {HANDLEhThread;} CEL_THREAD_DELETE, *PCEL_THREAD_DELETE;
typedef struct __CEL_THREAD_RESUME {HANDLEhThread; } CEL_THREAD_RESUME, *PCEL_THREAD_RESUME;
typedef struct __CEL_THREAD_SUSPEND {HANDLEhThread; } CEL_THREAD_SUSPEND, *PCEL_THREAD_SUSPEND;
typedef struct __CEL_THREAD_SWITCH {HANDLEhThread;} CEL_THREAD_SWITCH, *PCEL_THREAD_SWITCH;
typedef struct __CEL_THREAD_TERMINATE {HANDLEhThread;} CEL_THREAD_TERMINATE, *PCEL_THREAD_TERMINATE;
typedef struct __CEL_VIRTUAL_ALLOC {DWORDdwResult;DWORDdwAddress;DWORDdwSize;DWORD dwType;DWORDdwProtect;BYTEbReserved[0];} CEL_VIRTUAL_ALLOC, *PCEL_VIRTUAL_ALLOC;
typedef struct __CEL_VIRTUAL_COPY {DWORDdwDest;DWORDdwSource;DWORDdwSize;DWORDdwProtect;} CEL_VIRTUAL_COPY, *PCEL_VIRTUAL_COPY;
typedef struct __CEL_VIRTUAL_FREE {DWORDdwAddress;DWORDdwSize;DWORDdwType;BYTEbReserved[0];} CEL_VIRTUAL_FREE, *PCEL_VIRTUAL_FREE;
typedef struct __CEL_WAIT_MULTI {DWORDdwTimeout;DWORDfWaitAll:1;DWORDdwReserved:31;HANDLEhHandles[0];} CEL_WAIT_MULTI, *PCEL_WAIT_MULTI;
typedef struct __MAPHEADER {DWORDdwBufSize;LPBYTEpWrite;LPBYTEpRead;BOOLfSetEvent;BYTEbReserved;DWORDdwLostBytes;} MAPHEADER, *PMAPHEADER;

#endif /* _CELOG_ */
