/* Cchannel.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 16 declarations, 0 outlines, 0 base types, 0 extra macros, 10 extra decls
 */
#ifndef _CCHANNEL_
#define _CCHANNEL_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* CHANNEL_ENTRY_POINTS  [struct; shared; CE 4.0..699] */
typedef struct tagCHANNEL_ENTRY_POINTS {
 DWORD cbSize;
 DWORD protocolVersion;
 PVIRTUALCHANNELINIT pVirtualChannelInit;
 PVIRTUALCHANNELOPEN pVirtualChannelOpen;
 PVIRTUALCHANNELCLOSE pVirtualChannelClose;
 PVIRTUALCHANNELWRITE pVirtualChannelWrite;
} CHANNEL_ENTRY_POINTS, *PCHANNEL_ENTRY_POINTS;

/* VirtualChannelInit  [typedef, function, callback; shared; CE 4.0..699] */
typedef UINT VCAPITYPE VIRTUALCHANNELINIT(
 LPVOID FAR * ppInitHandle,
 PCHANNEL_DEF pChannel,
 INT channelCount,
 ULONG versionRequested,
 PCHANNEL_INIT_EVENT_FN pChannelInitEventProc
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */

/* CHANNEL_ENTRY_POINTS_EX  [struct; ce-only; CE 5.0..599] */
typedef struct tagCHANNEL_ENTRY_POINTS_EX 
{ 
 DWORD cbSize; 
 DWORD protocolVersion; 
 PVIRTUALCHANNELINITEX pVirtualChannelInitEx; 
 PVIRTUALCHANNELOPENEX pVirtualChannelOpenEx; 
 PVIRTUALCHANNELCLOSEEX pVirtualChannelCloseEx; 
 PVIRTUALCHANNELWRITEEX pVirtualChannelWriteEx; 
} CHANNEL_ENTRY_POINTS_EX, FAR * PCHANNEL_ENTRY_POINTS_EX;

/* VirtualChannelCloseEx  [typedef; ce-only; CE 5.0..599] */
typedef UINT VCAPITYPE VIRTUALCHANNELCLOSEEX( 
 LPVOID pInitHandle, 
 DWORD openHandle 
);

/* VirtualChannelEntryEx  [typedef; ce-only; CE 5.0..599] */
typedef BOOL VCAPITYPE VIRTUALCHANNELENTRYEX( 
 PCHANNEL_ENTRY_POINTS_EX pEntryPointsEx, 
 PVOID pInitHandle 
);

/* VirtualChannelInitEventEx  [typedef; ce-only; CE 5.0..599] */
typedef VOID VCAPITYPE VirtualChannelInitEventEx(LPVOID lpUserParam,LPVOID pInitHandle,UINT event,LPVOID pData,UINT dataLength);

/* VirtualChannelInitEx  [typedef; ce-only; CE 5.0..599] */
typedef UINT VCAPITYPE VIRTUALCHANNELINITEX( 
 LPVOID lpUserParam, 
 LPVOID pInitHandle, 
 PCHANNEL_DEF pChannel, 
 INT channelCount, 
 ULONG versionRequested, 
 PCHANNEL_INIT_EVENT_EX_FN pChannelInitEventProcEx 
);

/* VirtualChannelOpenEx  [typedef; ce-only; CE 5.0..599] */
typedef UINT VCAPITYPE VIRTUALCHANNELOPENEX( 
 LPVOID pInitHandle, 
 LPDWORD pOpenHandle, 
 PCHAR pChannelName, 
 PCHANNEL_OPEN_EVENT_EX_FN pChannelOpenEventProcEx 
);

/* VirtualChannelWriteEx  [typedef; ce-only; CE 5.0..599] */
typedef UINT VCAPITYPE VIRTUALCHANNELWRITEEX( 
 LPVOID pInitHandle, 
 DWORD openHandle, 
 LPVOID pData, 
 ULONG dataLength, 
 LPVOID pUserData 
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* VirtualChannelClose  [function, callback; shared; CE 4.0..699] */
UINT VCAPITYPE VirtualChannelClose(
 DWORD openHandle
);

/* VirtualChannelEntry  [function, callback; shared; CE 4.0..699] */
BOOL VCAPITYPE VirtualChannelEntry(
 PCHANNEL_ENTRY_POINTS pEntryPoints
);

/* VirtualChannelInitEvent  [function; ce-only; CE 4.0..699] */
VOID VCAPITYPE VirtualChannelInitEvent(
 LPVOID pInitHandle,
 UINT event,
 LPVOID pData,
 UINT dataLength
);

/* VirtualChannelOpen  [function, callback; shared; CE 4.0..699] */
UINT VCAPITYPE VirtualChannelOpen(
 LPVOID pInitHandle,
 LPDWORD pOpenHandle,
 PCHAR pChannelName,
 PCHANNEL_OPEN_EVENT_FN pChannelOpenEventProc
);

/* VirtualChannelOpenEvent  [function; ce-only; CE 4.0..699] */
VOID VCAPITYPE VirtualChannelOpenEvent(
 DWORD openHandle,
 UINT event,
 LPVOID pData,
 UINT32 dataLength,
 UINT32 totalLength,
 UINT32 dataFlags
);

/* VirtualChannelWrite  [function, callback; shared; CE 4.0..699] */
UINT VCAPITYPE VirtualChannelWrite(
 DWORD openHandle,
 LPVOID pData,
 ULONG dataLength,
 LPVOID pUserData
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */

/* VirtualChannelOpenEventEx  [function; ce-only; CE 5.0..599] */
VOID VCAPITYPE VirtualChannelOpenEventEx(LPVOID lpUserParam,DWORD openHandle,UINT event,LPVOID pData,UINT32 dataLength,UINT32 totalLength,UINT32dataFlags);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* typedef */
typedef UINT VCAPITYPE VIRTUALCHANNELINIT(LPVOID FAR * ppInitHandle,PCHANNEL_DEF pChannel,INT channelCount,ULONGversionRequested,PCHANNEL_INIT_EVENT_FNpChannelInitEventProc);
typedef VOID VCAPITYPE VirtualChannelInitEventEx(LPVOID lpUserParam,LPVOID pInitHandle,UINT event,LPVOID pData,UINT dataLength);
typedef UINT VCAPITYPE VIRTUALCHANNELCLOSEEX(LPVOID pInitHandle,DWORD openHandle);
typedef UINT VCAPITYPE VIRTUALCHANNELINIT( LPVOID FAR * ppInitHandle, PCHANNEL_DEF pChannel, INT channelCount, ULONG versionRequested, PCHANNEL_INIT_EVENT_FN pChannelInitEventProc );
typedef UINT VCAPITYPE VIRTUALCHANNELINITEX(LPVOID lpUserParam,LPVOID pInitHandle,PCHANNEL_DEF pChannel,INT channelCount,ULONG versionRequested,PCHANNEL_INIT_EVENT_EX_FN pChannelInitEventProcEx);
typedef UINT VCAPITYPE VIRTUALCHANNELOPENEX( LPVOID pInitHandle, LPDWORD pOpenHandle, PCHAR pChannelName, PCHANNEL_OPEN_EVENT_EX_FN pChannelOpenEventProcEx);
typedef BOOL VCAPITYPE VIRTUALCHANNELENTRYEX(PCHANNEL_ENTRY_POINTS_EX pEntryPointsEx,PVOID pInitHandle);
typedef UINT VCAPITYPE VIRTUALCHANNELWRITEEX( LPVOID pInitHandle, DWORD openHandle, LPVOID pData, ULONG dataLength, LPVOID pUserData);

/* struct */
typedef struct tagCHANNEL_ENTRY_POINTS {DWORDcbSize;DWORDprotocolVersion;PVIRTUALCHANNELINITpVirtualChannelInit;PVIRTUALCHANNELOPENpVirtualChannelOpen;PVIRTUALCHANNELCLOSEpVirtualChannelClose;PVIRTUALCHANNELWRITEpVirtualChannelWrite;} CHANNEL_ENTRY_POINTS, *PCHANNEL_ENTRY_POINTS;
typedef struct tagCHANNEL_ENTRY_POINTS_EX { DWORD cbSize; DWORD protocolVersion; PVIRTUALCHANNELINITEX pVirtualChannelInitEx; PVIRTUALCHANNELOPENEX pVirtualChannelOpenEx; PVIRTUALCHANNELCLOSEEX pVirtualChannelCloseEx; PVIRTUALCHANNELWRITEEX pVirtualChannelWriteEx;} CHANNEL_ENTRY_POINTS_EX, FAR * PCHANNEL_ENTRY_POINTS_EX;

#endif /* _CCHANNEL_ */
