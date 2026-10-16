/* Cardserv.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 27 constants, 11 declarations, 0 outlines, 0 base types, 0 extra macros, 11 extra decls
 */
#ifndef _CARDSERV_
#define _CARDSERV_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define CE_BATTERY_DEAD 0x01
#define CE_BATTERY_LOW 0x02
#define CE_CARD_INSERTION 0x40
#define CE_CARD_LOCK 0x03
#define CE_CARD_READY 0x04
#define CE_CARD_REMOVAL 0x05
#define CE_CARD_RESET 0x11
#define CE_CARD_UNLOCK 0x06
#define CE_CLIENT_INFO 0x14
#define CE_EJECTION_COMPLETE 0x07
#define CE_EJECTION_REQUEST 0x08
#define CE_ERASE_COMPLETE 0x81
#define CE_EXCLUSIVE_COMPLETE 0x0D
#define CE_EXCLUSIVE_REQUEST 0x0E
#define CE_INSERTION_COMPLETE 0x09
#define CE_INSERTION_REQUEST 0x0A
#define CE_MTD_REQUEST 0x12
#define CE_PM_RESUME 0x0B
#define CE_PM_SUSPEND 0x0C
#define CE_REGISTRATION_COMPLETE 0x82
#define CE_RESET_COMPLETE 0x80
#define CE_RESET_PHYSICAL 0x0F
#define CE_RESET_REQUEST 0x10
#define CE_SS_UPDATED 0x16
#define CE_STATUS_CHANGE_INTERRUPT 0xFE
#define CE_TIMER_EXPIRED 0x15
#define CE_WRITE_PROTECT 0x17

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* CARD_CLIENT_HANDLE  [typedef; ce-only] */
typedef PVOID CARD_CLIENT_HANDLE;

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 200 && _WIN32_WCE < 210) || (_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 2.0..209, 2.11..2.12, 3.0..699 */

/* CardReleaseSocketMask  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Cardserv.lib] */
STATUS CardReleaseSocketMask(
 CARD_CLIENT_HANDLE hCardClient,
 CARD_SOCKET_HANDLE hSock 
);

/* CardRequestIRQ  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Cardserv.lib] */
STATUS CardRequestIRQ( 
CARD_CLIENT_HANDLE hCardClient 
CARD_SOCKET_HANDLE hSocket 
CARD_ISR ISRFunction 
UINT32 uISRContextData );

/* CardRequestSocketMask  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Cardserv.lib] */
STATUS CardRequestSocketMask(
 CARD_CLIENT_HANDLE hCardClient,
 CARD_SOCKET_HANDLE hSock,
 UINT16 fEventMask 
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* CardPowerOff  [function; ce-only; CE 4.0..699; Cardserv.lib] */
STATUS CardRequestConfiguration(
 CARD_CLIENT_HANDLE hCardClient,
 CARD_SOCKET_HANDLE hSock
);

/* CardPowerOn  [function; ce-only; CE 4.0..699; Cardserv.lib] */
STATUS CardRequestConfiguration(
 CARD_CLIENT_HANDLE hCardClient,
 CARD_SOCKET_HANDLE hSock
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct {
  CARD_SOCKET_HANDLE hSocket;
  UINT16 fAttributes;
  UINT8 fInterfaceType;
  UINT8 uVcc; UINT8 uVpp1;
  UINT8 uVpp2;
  UINT8 fRegisters;
  UINT8 uConfigReg;
  UINT8 uStatusReg;
  UINT8 uPinReg;
  UINT8 uCopyReg;
  UINT8 uExtendedStatus;
} CARD_CONFIG_INFO, *PCARD_CONFIG_INFO;
typedef struct {
  CARD_SOCKET_HANDLE hSocket;
  UINT16 fAttributes;
  UINT8 uDesiredTuple;
  UINT8 uTupleOffset;
  UINT16 fFlags;
  UINT32 uLinkOffset;
  UINT32 uCISOffset;
  UINT16 uBufLen;
  UINT16 uDataLen;
} CARD_DATA_PARMS, *PCARD_DATA_PARMS;
typedef struct {
  CARD_SOCKET_HANDLE hSocket;
  UINT16 fAttributes;
  UINT16 fEventMask;
} CARD_EVENT_MASK_PARMS, *PCARD_EVENT_MASK_PARMS;
typedef struct {
  UINT32 uClientData;
  UINT32 Parm1;
  UINT32 Parm2;
} CARD_EVENT_PARMS, *PCARD_EVENT_PARMS;
typedef struct {
  UINT16 fAttributes;
  UINT16 fEventMask;
  UINT32 uClientData;
} CARD_REGISTER_PARMS, *PCARD_REGISTER_PARMS;
typedef struct {  UINT8 uSocket;  UINT8 uFunction;  } CARD_SOCKET_HANDLE, *PCARD_SOCKET_HANDLE;
typedef struct {
  CARD_SOCKET_HANDLE hSocket;
  UINT16 fCardState;
  UINT16 fSocketState;
} CARD_STATUS, *PCARD_STATUS;
typedef struct {
  CARD_SOCKET_HANDLE hSocket;
  UINT16 fAttributes;
  UINT8 uDesiredTuple;
  UINT8 uReserved;
  UINT16 fFlags;
  UINT32 uLinkOffset;
  UINT32 uCISOffset;
  UINT8 uTupleCode;
  UINT8 uTupleLink;
} CARD_TUPLE_PARMS, *PCARD_TUPLE_PARMS;
typedef struct {
  CARD_SOCKET_HANDLE hSocket;
  UINT16 fAttributes;
  UINT32 uWindowSize;
  UINT8 fAccessSpeed;
} CARD_WINDOW_PARMS, *PCARD_WINDOW_PARMS;

/* callback */
typedef void  (*CARD_ISR)( UINT32 uISRContextData );

#endif /* _CARDSERV_ */
