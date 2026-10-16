/* sms.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 80 constants, 31 declarations, 5 outlines, 0 base types, 0 extra macros, 11 extra decls
 */
#ifndef _SMS_
#define _SMS_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define SMS_E_BADPARAM 0x0208
#define SMS_E_BUFFERTOOSMALL 0x0102
#define SMS_E_DESTINATION 0x020b
#define SMS_E_DESTINATIONOUTOFSVC 0x0106
#define SMS_E_DESTINATIONUNSUPPORTED 0x020c
#define SMS_E_FDNRESTRICT 0x0110
#define SMS_E_INVALIDADDRESS 0x0107
#define SMS_E_INVALIDDATA 0x0101
#define SMS_E_INVALIDPROTOCOL 0x0001
#define SMS_E_MISC 0x0200
#define SMS_E_MOBILE 0x0205
#define SMS_E_MOBILEUNSUPPORTED 0x0207
#define SMS_E_MSGBARREDBYOPERATOR 0x0108
#define SMS_E_MSGCALLBARRED 0x0109
#define SMS_E_NETWORK 0x0204
#define SMS_E_NETWORKACCESS 0x0203
#define SMS_E_NETWORKUNSUPPORTED 0x0206
#define SMS_E_NOSCSUBSCRIPTION 0x010a
#define SMS_E_PASSWORD 0x0201
#define SMS_E_PROVIDERSPECIFICBUFFERWRONGSIZE 0x0103
#define SMS_E_RADIOUNAVAILABLE 0x020d
#define SMS_E_RECEIVEHANDLEALREADYOPEN 0x0105
#define SMS_E_REGISTRATIONEXISTS 0x0002
#define SMS_E_SCBUSY 0x010b
#define SMS_E_SIM 0x0202
#define SMS_E_SMSC 0x020a
#define SMS_E_STORAGE 0x0209
#define SMS_E_SVCNOTSUBSCRIBED 0x010c
#define SMS_E_TIMEUNAVAILABLE 0x0104
#define SMS_E_TOOMUCHDATA 0x0100
#define SMS_E_UNASSIGNEDNUMBER 0x010d
#define SMS_E_UNIDENTIFIEDSUBCRIBER 0x010f
#define SMS_E_UNKNOWNSCADDRESS 0x010e
#define SMS_MAX_ADDRESS_LENGTH 256
#define SMS_MSGPROTOCOL_DEPERSONALIZATION 0x00000025
#define SMS_MSGPROTOCOL_EMAIL 0x00000012
#define SMS_MSGPROTOCOL_ERMES 0x00000007
#define SMS_MSGPROTOCOL_GSMSTATION 0x0000001a
#define SMS_MSGPROTOCOL_IMPLICIT 0x00000002
#define SMS_MSGPROTOCOL_ME_DOWNLOAD 0x00000024
#define SMS_MSGPROTOCOL_MSGHANDLING 0x00000010
#define SMS_MSGPROTOCOL_PAGING 0x00000008
#define SMS_MSGPROTOCOL_RETURNCALL 0x00000023
#define SMS_MSGPROTOCOL_RSM_TYPE1 0x0000001c
#define SMS_MSGPROTOCOL_RSM_TYPE2 0x0000001d
#define SMS_MSGPROTOCOL_RSM_TYPE3 0x0000001e
#define SMS_MSGPROTOCOL_RSM_TYPE4 0x0000001f
#define SMS_MSGPROTOCOL_RSM_TYPE5 0x00000020
#define SMS_MSGPROTOCOL_RSM_TYPE6 0x00000021
#define SMS_MSGPROTOCOL_RSM_TYPE7 0x00000022
#define SMS_MSGPROTOCOL_SCSPECIFIC1 0x00000013
#define SMS_MSGPROTOCOL_SCSPECIFIC2 0x00000014
#define SMS_MSGPROTOCOL_SCSPECIFIC3 0x00000015
#define SMS_MSGPROTOCOL_SCSPECIFIC4 0x00000016
#define SMS_MSGPROTOCOL_SCSPECIFIC5 0x00000017
#define SMS_MSGPROTOCOL_SCSPECIFIC6 0x00000018
#define SMS_MSGPROTOCOL_SCSPECIFIC7 0x00000019
#define SMS_MSGPROTOCOL_SIM_DOWNLOAD 0x00000026
#define SMS_MSGPROTOCOL_SM_TYPE0 0x0000001b
#define SMS_MSGPROTOCOL_SMETOSME 0x00000001
#define SMS_MSGPROTOCOL_TELEFAX_GROUP3 0x00000004
#define SMS_MSGPROTOCOL_TELEFAX_GROUP4 0x00000005
#define SMS_MSGPROTOCOL_TELETEX 0x0000000a
#define SMS_MSGPROTOCOL_TELETEX_CSPDN 0x0000000c
#define SMS_MSGPROTOCOL_TELETEX_ISDN 0x0000000e
#define SMS_MSGPROTOCOL_TELETEX_PSPDN 0x0000000b
#define SMS_MSGPROTOCOL_TELETEX_PSTN 0x0000000d
#define SMS_MSGPROTOCOL_TELEX 0x00000003
#define SMS_MSGPROTOCOL_UCI 0x0000000f
#define SMS_MSGPROTOCOL_UNKNOWN 0x00000000
#define SMS_MSGPROTOCOL_VIDEOTEX 0x00000009
#define SMS_MSGPROTOCOL_VOICEPHONE 0x00000006
#define SMS_MSGPROTOCOL_X400 0x00000011
#define SMS_S_NOSUCHREGISTRATION 0x0003
#define TEXTPSEXTPARM_ALL 0x00000003
#define TEXTPSEXTPARM_CALLBACK 0x00000001
#define TEXTPSEXTPARM_NONE 0x00000000
#define TEXTPSEXTPARM_PRIORITY 0x00000002
#define TEXTPSPRI_NONE 0
#define TEXTPSPRI_NORMAL 1

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* RAW_PROVIDER_SPECIFIC_DATA  [struct; ce-only] */

/* SMS_ADDRESS  [struct; ce-only] */

/* SMSREGISTRATIONDATA  [struct; ce-only] */

/* TEXT_PROVIDER_SPECIFIC_DATA  [struct; ce-only] */

/* TEXT_PROVIDER_SPECIFIC_PRIORITY_TYPE  [enum; ce-only] */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x600 && _WIN32_WCE < 0x700)) /* CE 6.0..699 */

/* SmsClearMessageNotification  [function; ce-only; CE 6.0..699; sms.lib] */
HRESULT SmsClearMessageNotification (
const LPCTSTR tszProtocolName
);

/* SmsGetTime  [function; ce-only; CE 6.0..699; sms.lib] */
HRESULT SmsGetTime (
 const SYSTEMTIME* ptsCurrentTime,
 const DWORD* pdwErrorMargin);
#endif /* _WIN32_WCE */

#endif /* _SMS_ */
