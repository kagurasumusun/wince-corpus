/* Bt_ddi.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 31 constants, 11 declarations, 2 outlines, 0 base types, 0 extra macros, 2 extra decls
 */
#ifndef _BT_DDI_
#define _BT_DDI_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define BT_AVDTP_STATE_DISCONNECTED 0
#define BT_AVDTP_STATE_STREAMING 2
#define BT_AVDTP_STATE_SUSPENDED 1
#define BTH_HCI_IOCTL_GET_BASEBAND_CONNECTIONS 0x00000013
#define BTH_HCI_IOCTL_GET_BASEBAND_HANDLES 0x00000010
#define BTH_HCI_IOCTL_GET_BD_FOR_HANDLE 0x00000001
#define BTH_HCI_IOCTL_GET_COMMANDSIZE 0x0000000b
#define BTH_HCI_IOCTL_GET_ERRORS 0x00000009
#define BTH_HCI_IOCTL_GET_FLOW 0x0000000a
#define BTH_HCI_IOCTL_GET_HANDLE_FOR_BD 0x00000002
#define BTH_HCI_IOCTL_GET_HANDLE_MODE 0x00000011
#define BTH_HCI_IOCTL_GET_HARDWARE_STATUS 0x00000014
#define BTH_HCI_IOCTL_GET_INQUIRY 0x00000006
#define BTH_HCI_IOCTL_GET_LAST_INQUIRY_DATA 0x0000000f
#define BTH_HCI_IOCTL_GET_LOOPBACK 0x00000008
#define BTH_HCI_IOCTL_GET_NUM_ONDEVICE 0x00000004
#define BTH_HCI_IOCTL_GET_NUM_PENDING 0x00000005
#define BTH_HCI_IOCTL_GET_NUM_UNSENT 0x00000003
#define BTH_HCI_IOCTL_GET_PERIODIC_INQUIRY 0x00000007
#define BTH_HCI_IOCTL_GET_REMOTE_COD 0x00000015
#define BTH_HCI_IOCTL_GET_SCO_PARAMETERS 0x00000012
#define BTH_HCI_IOCTL_GET_UNDER_TEST 0x0000000e
#define BTH_HCI_IOCTL_HANDLE_AUTHENTICATED 0x0000000c
#define BTH_HCI_IOCTL_HANDLE_ENCRYPTED 0x0000000d
#define BTH_MARKER_ADDRESS 2
#define BTH_MARKER_CONNECTION 1
#define BTH_MARKER_NONE 0
#define BTH_STACK_IOCTL_GET_CONNECTED 0x80000001
#define WODM_PARAM_CLOSE_A2DP 0
#define WODM_PARAM_OPEN_A2DP 1
#define WODM_PARAM_OPENASYNC_A2DP 2

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* BD_ADDR  [struct; ce-only] */

/* HCIEventContext  [typedef; ce-only] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* ControllerEvent  [struct; ce-only] */
#ifndef __WINCE_DEFINED__CONTROLLER_EVENT_PACKET
#define __WINCE_DEFINED__CONTROLLER_EVENT_PACKET
#ifndef __WINCE_DEFINED_CONTROLLEREVENT
#define __WINCE_DEFINED_CONTROLLEREVENT
typedef struct _controller_event_packet {
 int cSize;
 unsigned char* pData;
} ControllerEvent;
#endif /* __WINCE_DEFINED_CONTROLLEREVENT */
#endif /* __WINCE_DEFINED__CONTROLLER_EVENT_PACKET */
#ifndef __WINCE_DEFINED_PCONTROLLEREVENT
#define __WINCE_DEFINED_PCONTROLLEREVENT
typedef ControllerEvent *PControllerEvent, *LPControllerEvent;
#endif /* __WINCE_DEFINED_PCONTROLLEREVENT */

/* HCI_Buffer_Size  [struct; ce-only] */
#ifndef __WINCE_DEFINED__HOST_BUFFER_SIZE
#define __WINCE_DEFINED__HOST_BUFFER_SIZE
#ifndef __WINCE_DEFINED_HCI_BUFFER_SIZE
#define __WINCE_DEFINED_HCI_BUFFER_SIZE
typedef struct _host_buffer_size {
 unsigned short ACL_Data_Packet_Length;
 unsigned char SCO_Data_Packet_Length;
 unsigned short Total_Num_ACL_Data_Packets;
 unsigned short Total_Num_SCO_Data_Packets;
} HCI_Buffer_Size;
#endif /* __WINCE_DEFINED_HCI_BUFFER_SIZE */
#endif /* __WINCE_DEFINED__HOST_BUFFER_SIZE */
#ifndef __WINCE_DEFINED_PHCI_BUFFER_SIZE
#define __WINCE_DEFINED_PHCI_BUFFER_SIZE
typedef HCI_Buffer_Size *PHCI_Buffer_Size, *LPHCI_Buffer_Size;
#endif /* __WINCE_DEFINED_PHCI_BUFFER_SIZE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x400 && _WIN32_WCE < 0x700)) /* CE 4.0..699 */

/* HCI_DataPacketDown_Out  [callback; ce-only; CE 4.0..699; Btd.lib] */
#ifndef __WINCE_DEFINED_HCI_DATAPACKETDOWN_OUT
#define __WINCE_DEFINED_HCI_DATAPACKETDOWN_OUT
typedef int (*HCI_DataPacketDown_Out)(void* pCallContext,
 int iError);
#endif /* __WINCE_DEFINED_HCI_DATAPACKETDOWN_OUT */
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x400 && _WIN32_WCE < 0x700)) /* CE 4.0..699 */

/* HCI_CloseDeviceContext  [function; ce-only; CE 4.0..699; Btd.lib] */
int HCI_CloseDeviceContext(HANDLE hDeviceContext);
#endif /* _WIN32_WCE */

#endif /* _BT_DDI_ */
