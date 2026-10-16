/* Bt_hcip.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 10 constants, 12 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _BT_HCIP_
#define _BT_HCIP_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define COMMAND_PACKET 1
#define DATA_PACKET_ACL 2
#define DATA_PACKET_SCO 3
#define ETYPE_FINISH 5
#define HCI_FLAGS_NOLOCALNAME 0x00000002
#define HCI_FLAGS_NORESET 0x00000001
#define HCI_FLAGS_NOROLESWITCH 0x00000004
#define HCI_HARDWARE_VERSION_V_1_0_A 0
#define HCI_HARDWARE_VERSION_V_1_0_B 1
#define HCI_HARDWARE_VERSION_V_1_1 2

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* HCI_EVENT  [enum; ce-only; CE 4.0..699] */
enum HCI_EVENT {
 DEVICE_UP,
 DEVICE_DOWN,
 DEVICE_ERROR
};

/* HCI_PARAMETERS  [struct; ce-only; CE 4.0..699] */
typedef struct __hci_parameters {
 unsigned int uiSize;
 unsigned int fInterfaceVersion;
 int iMaxSizeRead;
 int iMaxSizeWrite;
 int iReadBufferHeader;
 int iReadBufferTrailer;
 int iWriteBufferHeader;
 int iWriteBufferTrailer;
 int uiFlags;
 int fHardwareVersion;
 unsigned int uiResetDelay;
 unsigned int uiWriteTimeout;
 unsigned int uiDriftFactor;
 int iScoWriteLowNumPackets;
 int iScoWriteNumPackets;
 int iScoWritePacketSize;
 int iScoSampleSize;
} HCI_PARAMETERS;

/* HCI_SetCallback  [callback; ce-only; CE 4.0..699; Btd.lib] */
typedef int (*HCI_TransportCallback)(HCI_EVENT eEvent, void* pEvent);
 int HCI_SetCallback(
 HCI_TransportCallback pfCallback
);

/* HCI_TYPE  [enum; ce-only; CE 4.0..699] */
enum HCI_TYPE {
 COMMAND_PACKET = 1,
 DATA_PACKET_ACL = 2,
 DATA_PACKET_SCO = 3,
 EVENT_PACKET = 4,
 ETYPE_FINISH = 5
};
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* HCI_CloseConnection  [function; ce-only; CE 4.0..699; Btd.lib] */
void HCI_CloseConnection(void);

/* HCI_EstablishDeviceContext  [function; ce-only; CE 4.0..699; Btd.lib] */
Int HCI_EstablishDeviceContext(
 Void* pUserContext,
 UINT uiControl,
 BD_ADDR* pba,
 UINT class_of_device,
 UCHAR link_type,
 HCI_EVENT_INDICATION* pInd,
 HCI_CALLBACKS* pCall,
 HCI_INTERFACE* pInt,
 int* pcDataHeaders,
 int* pcDataTrailers,
 HANDLE* phDeviceContext
);

/* HCI_OpenConnection  [function; ce-only; CE 4.0..699; Btd.lib] */
int HCI_OpenConnection(void);

/* HCI_ReadHciParameters  [function; ce-only; CE 4.0..699; Btd.lib] */
int HCI_ReadHciParameters(
 HCI_PARAMETERS* pParms
);

/* HCI_ReadPacket  [function; ce-only; CE 4.0..699; Btd.lib] */
int HCI_ReadPacket(
 HCI_TYPE* peType, 
 BD_BUFFER* pInBuffer
);

/* HCI_StartHardware  [function; ce-only; CE 4.0..699; Btd.lib] */
int HCI_StartHardware(void);

/* HCI_StopHardware  [function; ce-only; CE 4.0..699; Btd.lib] */
int HCI_StopHardware(void);

/* HCI_WritePacket  [function; ce-only; CE 4.0..699; Btd.lib] */
int HCI_WritePacket(
 HCI_TYPE eType, 
 BD_BUFFER* pOutBuffer
);
#endif /* _WIN32_WCE */

#endif /* _BT_HCIP_ */
