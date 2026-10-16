/* Bt_ddi.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 3 constants, 13 declarations, 0 outlines, 0 base types, 0 extra macros, 5 extra decls
 */
#ifndef _BT_DDI_
#define _BT_DDI_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define WODM_PARAM_CLOSE_A2DP 0
#define WODM_PARAM_OPEN_A2DP 1
#define WODM_PARAM_OPENASYNC_A2DP 2

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* BD_ADDR  [struct; ce-only; CE 4.0..699] */
#pragma pack(push, 1)
 typedef struct __bd_addr {
 union {
 struct {
 unsigned int LAP : 24; 
 unsigned int UAP : 8; 
 };
 unsigned int SAP; 
 };
 unsigned short NAP; 
 } BD_ADDR;
#pragma pack(pop)
#endif /* _WIN32_WCE */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* ControllerEvent  [struct; ce-only; CE 4.0..699] */
typedef struct _controller_event_packet {
 int cSize;
 unsigned char* pData;
} ControllerEvent;

/* HCI_Buffer_Size  [struct; ce-only; CE 4.0..699] */
typedef struct _host_buffer_size {
 unsigned short ACL_Data_Packet_Length;
 unsigned char SCO_Data_Packet_Length;
 unsigned short Total_Num_ACL_Data_Packets;
 unsigned short Total_Num_SCO_Data_Packets;
} HCI_Buffer_Size;

/* HCI_DataPacketDown_In  [callback; ce-only; CE 4.0..699; Btd.lib] */
typedef int (*HCI_DataPacketDown_In)(
 HANDLE hDeviceContext,
 void* pCallContext,
 unsigned short connection_handle,
 BD_BUFFER* pBuffer
);

/* HCI_DataPacketDown_Out  [callback; ce-only; CE 4.0..699; Btd.lib] */
typedef int (*HCI_DataPacketDown_Out)(
 void* pCallContext,
 int iError
);

/* HCI_DataPacketUp  [callback; ce-only; CE 4.0..699; Btd.lib] */
typedef int (*HCI_DataPacketUp)(
 void* pUserContext,
 unsigned short connection_handle,
 BD_BUFFER* pBuffer
);

/* HCI_DataPacketUpAclUnbuffered  [callback; ce-only; CE 4.0..699; Btd.lib] */
typedef int (*HCI_DataPacketUpAclUnbuffered)(
 void* pUserContext,
 unsigned short connection_handle,
 unsigned char boundary,
 unsigned char broadcast,
 BD_BUFFER* pBuffer
);

/* HCIEventContext  [typedef; ce-only; CE 4.0..699] */
typedef union _event_context {
 HCI_Buffer_Size Host_Buffer;
 ControllerEvent Event; 
} HCIEventContext;

/* InquiryResultBuffer  [struct; ce-only; CE 4.0..699] */
struct InquiryResultBuffer {
 DWORD dwTick; 
 BD_ADDR ba;
 unsigned char page_scan_repetition_mode;
 unsigned char page_scan_period_mode;
 unsigned char page_scan_mode;
 unsigned int class_of_device;
 unsigned short clock_offset;
};

/* PacketMarker  [struct; ce-only; CE 4.0..699] */
typedef struct _packet_marker {
 unsigned int fMarker;
 union {
 BD_ADDR ba;
 unsigned short connection_handle;
 };
} PacketMarker;
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* BASEBAND_CONNECTION_DATA  [struct; ce-only; CE 5.0..699] */
typedef struct _BASEBAND_CONNECTION_DATA
{
 USHORT hConnection;
 BD_ADDR baAddress;
 int cDataPacketsPending;
 UINT fLinkType : 1;
 UINT fEncrypted : 1;
 UINT fAuthenticated : 1;
 UINT fMode : 3;
} BASEBAND_CONNECTION_DATA, *PBASEBAND_CONNECTION_DATA;
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* BT_AVDTP_STATE_CHANGE  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD dwSize; 
 BT_ADDR bta; 
 DWORD dwState;
} BT_AVDTP_STATE_CHANGE, *PBT_AVDTP_STATE_CHANGE;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* HCI_CloseDeviceContext  [function; ce-only; CE 4.0..699; Btd.lib] */
int HCI_CloseDeviceContext(
 HANDLE hDeviceContext
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* typedef */
typedef union _event_context { HCI_Buffer_Size Host_Buffer;

/* struct */
typedef struct _BASEBAND_CONNECTION_DATA{ USHORT hConnection; BD_ADDR baAddress; int cDataPacketsPending; UINT fLinkType : 1; UINT fEncrypted : 1; UINT fAuthenticated : 1; UINT fMode : 3;} BASEBAND_CONNECTION_DATA, *PBASEBAND_CONNECTION_DATA;
typedef struct __bd_addr { union { struct { unsigned int LAP : 24; unsigned int UAP : 8; };
struct InquiryResultBuffer {DWORD dwTick;BD_ADDR ba;unsigned charpage_scan_repetition_mode;unsigned charpage_scan_period_mode;unsigned charpage_scan_mode;unsigned int class_of_device;unsigned short clock_offset;};
#pragma pack(push, 1)
typedef struct __bd_addr {
  union {
    struct {
      unsigned int LAP : 24;
      unsigned int UAP : 8;
    };
    unsigned int SAP;
  };
  unsigned short NAP;
} BD_ADDR;
#pragma pack(pop);

#endif /* _BT_DDI_ */
