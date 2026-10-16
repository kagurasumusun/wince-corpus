/* Sockserv.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 4 constants, 18 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _SOCKSERV_
#define _SOCKSERV_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 500)) /* CE 4.0..499 */
#define WIN_CAP_ATTRIBUTE 0x02
#define WIN_CAP_COMMON 0x01
#define WIN_CAP_IO 0x04
#define WIN_CAP_WAIT 0x80
#endif /* _WIN32_WCE */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 500)) /* CE 2.11..2.12, 3.0..499 */

/* PDCARD_ADAPTER_INFO  [struct; ce-only; CE 2.11..2.12, 3.0..499] */
typedef struct {
 UINT32 uMemGranularity;
 UINT8 fAdapterCaps;
 UINT8 uCacheLine;
 UINT16 uPowerEntries;
} PDCARD_ADAPTER_INFO;

/* PDCARD_POWER_ENTRY  [struct; ce-only; CE 2.11..2.12, 3.0..499] */
typedef struct {
 UINT8 uPowerLevel;
 UINT8 fSupply;
} PDCARD_POWER_ENTRY;

/* PDCARD_SOCKET_STATE  [struct; ce-only; CE 2.11..2.12, 3.0..499] */
typedef struct {
 UINT8 fSocketCaps;
 UINT8 fInterruptEvents;
 UINT8 fNotifyEvents;
 UINT8 fControlCaps;
 UINT8 fInterfaceType;
 UINT8 fIREQRouting;
 UINT8 fVcc;
 UINT8 uVpp1;
 UINT8 uVpp2;
} PDCARD_SOCKET_STATE;

/* PDCARD_WINDOW_INFO  [struct; ce-only; CE 2.11..2.12, 3.0..499] */
typedef struct {
 UINT16 fSockets;
 UINT16 fWindowCaps;
 UINT16 fMemoryCaps;
 UINT16 fIOCaps;
 UINT32 uMemFirstByte;
 UINT32 uMemLastByte;
 UINT32 uMemMinSize;
 UINT32 uMemMaxSize;
 UINT32 uMemGranularity;
 UINT32 uMemBase;
 UINT32 uMemOffset;
 UINT32 uIOFirstByte;
 UINT32 uIOLastByte;
 UINT32 uIOMinSize;
 UINT32 uIOMaxSize;
 UINT32 uIOGranularity;
 UINT8 uAddressLines;
 UINT8 fSlowest;
 UINT8 fFastest;
} PDCARD_WINDOW_INFO;

/* PDCARD_WINDOW_STATE  [struct; ce-only; CE 2.11..2.12, 3.0..499] */
typedef struct {
 UINT16 uSocket;
 UINT8 fState;
 UINT8 fSpeed;
 UINT32 uSize;
 UINT32 uBase;
 UINT32 uOffset;
} PDCARD_WINDOW_STATE;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 500)) /* CE 2.11..2.12, 3.0..499 */

/* PDCardGetAdapter  [function; ce-only; CE 2.11..2.12, 3.0..499; Cardserv.lib] */
STATUS PDCardGetAdapter(
 UINT32 uSocket,
 PPDCARD_ADAPTER_STATE pState 
);

/* PDCardGetSocket  [function; ce-only; CE 2.11..2.12, 3.0..499; Cardserv.lib] */
STATUS PDCardGetSocket(
 UINT32 uSocket,
 PPDCARD_SOCKET_STATE pState 
);

/* PDCardGetWindow  [function; ce-only; CE 2.11..2.12, 3.0..499; Cardserv.lib] */
STATUS PDCardGetWindow(
 UINT32 uWindow,
 PPDCARD_WINDOW_STATE pWindowState 
);

/* PDCardInquireAdapter  [function; ce-only; CE 2.11..2.12, 3.0..499; Cardserv.lib] */
STATUS PDCardInquireAdapter(
 PPDCARD_ADAPTER_INFO pAdapterInfo 
);

/* PDCardInquireWindow  [function; ce-only; CE 2.11..2.12, 3.0..499; Cardserv.lib] */
STATUS PDCardInquireWindow(
 UINT32 uWindow,
 PPDCARD_WINDOW_INFO pWinInfo 
);

/* PDCardReadAttrByte  [function; ce-only; CE 2.11..2.12, 3.0..499; Cardserv.lib] */
UINT8 PDCardReadAttrByte(
 PVOID pCardMem,
 UINT32 uOffset 
);

/* PDCardReadCmnByte  [function; ce-only; CE 2.11..2.12, 3.0..499; Cardserv.lib] */
UINT8 PDCardReadCmnByte(
 PVOID pCardMem, 
 UINT32 uOffset
);

/* PDCardResetSocket  [function; ce-only; CE 2.11..2.12, 3.0..499; Cardserv.lib] */
STATUS PDCardResetSocket(
 UINT32 uSocket 
);

/* PDCardSetAdapter  [function; ce-only; CE 2.11..2.12, 3.0..499; Cardserv.lib] */
STATUS PDCardSetAdapter(
 UINT32 uSocket,
 PPDCARD_ADAPTER_STATE pState 
);

/* PDCardSetSocket  [function; ce-only; CE 2.11..2.12, 3.0..499; Cardserv.lib] */
STATUS PDCardSetSocket(
 UINT32 uSocket,
 PPDCARD_SOCKET_STATE pState 
);

/* PDCardSetWindow  [function; ce-only; CE 2.11..2.12, 3.0..499; Cardserv.lib] */
STATUS PDCardSetWindow(
 UINT32 uWindow,
 PPDCARD_WINDOW_STATE pWindowState 
);

/* PDCardWriteAttrByte  [function; ce-only; CE 2.11..2.12, 3.0..499; Cardserv.lib] */
VOID PDCardWriteAttrByte(
 PVOID pCardMem,
 UINT32 uOffset,
 UINT8 uByte 
);

/* PDCardWriteCmnByte  [function; ce-only; CE 2.11..2.12, 3.0..499; Cardserv.lib] */
VOID PDCardWriteCmnByte(
 PVOID pCardMem,
 UINT32 uOffset,
 UINT8 uByte 
);
#endif /* _WIN32_WCE */

#endif /* _SOCKSERV_ */
