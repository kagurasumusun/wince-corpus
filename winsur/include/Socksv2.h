/* Socksv2.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 10 declarations, 2 outlines, 0 base types, 0 extra macros, 5 extra decls
 */
#ifndef _SOCKSV2_
#define _SOCKSV2_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* SS_SOCKET_INFO  [struct; ce-only] */

/* SS_SOCKET_SERVICE  [struct; ce-only] */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* SS_GetPowerEntry  [function; ce-only; CE 5.0..699; Pcc_serv.dll] */
STATUS (*SS_GetPowerEntry)(
 HANDLE hSocket,
 PDWORD pdwNumOfEntry,
 PSS_POWER_ENTRY pPowerEntry
);

/* SS_GetSocket  [function; ce-only; CE 5.0..699; Pcc_serv.dll] */
STATUS (*SS_GetSocket)(
 HANDLE hSocket,
 PSS_SOCKET_STATE pSocketState
);

/* SS_InquireSocket  [function; ce-only; CE 5.0..699; Pcc_serv.dll] */
STATUS (*SS_InquireSocket)(
 HANDLE hSocket,
 PSS_SOCKET_INFO pSocketInfo
);

/* SS_ResetSocket  [function; ce-only; CE 5.0..699; Pcc_serv.dll] */
STATUS (*SS_ResetSocket)(
 HANDLE hSocket
);

/* SS_SetSocket  [function; ce-only; CE 5.0..699; Pcc_serv.dll] */
STATUS (*SS_SetSocket)(
 HANDLE hSocket,
 PSS_SOCKET_STATE pSocketState
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct SS_POWER_ENTRY{UINT8uPowerLevel; UINT8fSupply; } SS_POWER_ENTRY, *PSS_POWER_ENTRY;
typedef struct SS_SOCKET_INFO{DWORDdwSocketCaps;
DWORDdwSocketIntrCaps;
DWORDdwSocketRptCaps;
DWORDdwSocketIndCaps;
DWORDdwNumOfPowerEntry;
DWORDdwNumOfWindows;
DWORDdwBusType;
DWORDdwBusNumber;
BYTEbArrayIrqRouting[IRQ_ROUTINGTABLE_SIZE];
} SS_SOCKET_INFO, *PSS_SOCKET_INFO;
typedef struct SS_SOCKETSTATE{DWORDdwEventMask;
DWORDdwEventChanged;
DWORDdwEventStatus;
DWORDdwInterfaceType;
DWORDdwInterruptStatus;
UINT8flREQRouting;
UINT8fVcc;
UINT8uVpp1;
UINT8uVpp2;
} SS_SOCKET_STATE, *PSS_SOCKET_STATE;
typedef struct SS_WINDOW_INFO{HANDLEhSocket;
UINT16fWindowCaps;
UINT16fMemoryCaps;
UINT16fIOCaps;
UINT16Reserved;
UINT32uMemFirstByte;
UINT32uMemLastByte;
UINT32uMemMinSize;
UINT32uMemMaxSize;
UINT32uMemGranularity;
UINT32uMemBase;
UINT32uMemOffset;
UINT32uIOFirstByte;
UINT32uIOLastByte;
UINT32uIOMinSize;
UINT32uIOMaxSize;
UINT32uIOGranularity;
UINT8uAddressLines;
UINT8fSlowest;
UINT8fFastest;
UINT8Reserved2;
} SS_WINDOW_INFO, *PSS_WINDOW_INFO;
typedef struct SS_WINDOW_STATE{HANDLEhSocket;
UINT16fState;
UINT8fSpeed;
UINT8Reserved;
UINT32uSize;
UINT32uBase;
UINT32uOffset;
} SS_WINDOW_STATE, *PSS_WINDOW_STATE;

#endif /* _SOCKSV2_ */
