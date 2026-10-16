/* sdcardddk.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 8 constants, 39 declarations, 4 outlines, 0 base types, 0 extra macros, 14 extra decls
 */
#ifndef _SDCARDDDK_
#define _SDCARDDDK_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define SD_INFO_REGISTER_OCR 0
#define SD_IO_FUNCTION_ENABLE 0
#define SDCardBeginSelectDeselect 4
#define SDCardDeselected 3
#define SDCardDeselectRequest 5
#define SDCardEjected 1
#define SDCardSelected 2
#define SDCardSelectRequest 6

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* SD_COMMAND_RESPONSE  [struct; ce-only] */

/* SD_HOST_ALLOC_FREE_DMA_BUFFER  [struct; ce-only] */

/* SD_PARSED_REGISTER_CSD  [struct; ce-only] */

/* SDCARD_CLIENT_REGISTRATION_INFO  [struct; ce-only] */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* SDAllocateFromMemList  [function; ce-only; CE 5.0..699; Sdcardlib.lib, sdcardlib.lib] */
PVOID SDAllocateFromMemList(
 SD_MEMORY_LIST_HANDLE hList
);

/* SDBusRequest  [function; ce-only; CE 5.0..699; Sdcardlib.lib, sdcardlib.lib] */
SD_API_STATUS SDBusRequest( 
 SD_DEVICE_HANDLE hHandle,
 UCHAR Command,
 ULONG Argument,
 SD_TRANSFER_CLASS TransferClass,
 SD_RESPONSE_TYPE ResponseType,
 ULONG NumBlocks,
 ULONG BlockSize,
 PUCHAR pBuffer,
 PSD_BUS_REQUEST_CALLBACK pCallback,
 DWORD RequestParam,
 PSD_BUS_REQUEST *ppRequest,
 DWORD Flags
);

/* SDCardInfoQuery  [function; ce-only; CE 5.0..699; Sdcardlib.lib, sdcardlib.lib] */
SD_API_STATUS SDCardInfoQuery(
 SD_DEVICE_HANDLE hHandle,
 SD_INFO_TYPE InfoType,
 PVOID pCardInfo,
 ULONG StructureSize
);

/* SDCreateMemoryList  [function; ce-only; CE 5.0..699; Sdcardlib.lib, sdcardlib.lib] */
SD_MEMORY_LIST_HANDLE SDCreateMemoryList(
 ULONG Tag,
 ULONG Depth,
 ULONG EntrySize
);

/* SDDeleteMemList  [function; ce-only; CE 5.0..699; Sdcardlib.lib, sdcardlib.lib] */
VOID SDDeleteMemList(
 SD_MEMORY_LIST_HANDLE hList
);

/* SDFreeBusRequest  [function; ce-only; CE 5.0..699; Sdcardlib.lib, sdcardlib.lib] */
VOID SDFreeBusRequest(
 PSD_BUS_REQUEST pRequest
);

/* SDFreeToMemList  [function; ce-only; CE 5.0..699; Sdcardlib.lib, sdcardlib.lib] */
VOID SDFreeToMemList(
 SD_MEMORY_LIST_HANDLE hList,
 PVOID pMemory
);

/* SDGetDeviceHandle  [function; ce-only; CE 5.0..699; Sdcardlib.lib, sdcardlib.lib] */
SD_DEVICE_HANDLE SDGetDeviceHandle(
 DWORD InitContext,
 PWCHAR* ppRegPath
);

/* SDGetTuple  [function; ce-only; CE 5.0..699; Sdcardlib.lib, sdcardlib.lib] */
SD_API_STATUS SDGetTuple(
 SD_DEVICE_HANDLE hDevice,
 UCHAR TupleCode,
 PUCHAR pBuffer,
 PULONG pBufferSize,
 BOOL CommonCIS
);

/* SDIOConnectInterrupt  [function; ce-only; CE 5.0..699; Sdcardlib.lib, sdcardlib.lib] */
SD_API_STATUS SDIOConnectInterrupt(
 SD_DEVICE_HANDLE hDevice,
 PSD_INTERRUPT_CALLBACK pIsrFunction
);

/* SDIODisconnectInterrupt  [function; ce-only; CE 5.0..699; Sdcardlib.lib, sdcardlib.lib] */
VOID SDIODisconnectInterrupt(
 SD_DEVICE_HANDLE hDevice
);

/* SDOutputBuffer  [function; ce-only; CE 5.0..699; Sdcardlib.lib, sdcardlib.lib] */
VOID SDOutputBuffer(
 PVOID pBuffer,
 ULONG BufferSize
);

/* SDRegisterClient  [function; ce-only; CE 5.0..699; Sdcardlib.lib, sdcardlib.lib] */
SD_API_STATUS SDRegisterClient(
 SD_DEVICE_HANDLE hDevice,
 PVOID pDeviceContext,
 PSDCARD_CLIENT_REGISTRATION_INFO pInfo
);

/* SDSetCardFeature  [function; ce-only; CE 5.0..699; Sdcardlib.lib, sdcardlib.lib] */
SD_API_STATUS SDSetCardFeature(
 SD_DEVICE_HANDLE hDevice,
 SD_SET_FEATURE_TYPE CardFeature,
 PVOID pCardInfo,
 ULONG StructureSize
);

/* SDSynchronousBusRequest  [function; ce-only; CE 5.0..699; Sdcardlib.lib, sdcardlib.lib] */
SD_API_STATUS SDSynchronousBusRequest(
 SD_DEVICE_HANDLE hHandle, 
 UCHAR Command,
 DWORD Argument,
 SD_TRANSFER_CLASS TransferClass,
 SD_RESPONSE_TYPE ResponseType,
 PSD_COMMAND_RESPONSE pResponse,
 ULONG NumBlocks,
 ULONG BlockSize,
 PUCHAR pBuffer,
 DWORD Flags
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* SDBusRequestEx  [function; ce-only; CE 6.0..699; sdcardlib.lib] */
SD_API_STATUS SDBusRequestEx( 
 SD_DEVICE_HANDLE hDevice,
 UCHAR Command,
 ULONG Argument,
 SD_TRANSFER_CLASS TransferClass,
 SD_RESPONSE_TYPE ResponseType,
 ULONG NumBlocks,
 ULONG BlockSize,
 PUCHAR pBuffer,
 PSD_BUS_REQUEST_CALLBACK pCallback,
 DWORD RequestParam,
 PSD_BUS_REQUEST *ppRequest,
 DWORD Flags,
 DWORD cbSize,
 PPHYS_BUFF_LIST pPhysBuffList
);

/* SDBusRequestResponse  [function; ce-only; CE 6.0..699; sdcardlib.lib] */
SD_API_STATUS SDBusRequestResponse(
 PSD_BUS_REQUEST pRequest,
 PSD_COMMAND_RESPONSE pCommandResp
);

/* SDSynchronousBusRequestEx  [function; ce-only; CE 6.0..699; sdcardlib.lib] */
SD_API_STATUS SDSynchronousBusRequestEx(
 SD_DEVICE_HANDLE hDevice, 
 UCHAR Command,
 DWORD Argument,
 SD_TRANSFER_CLASS TransferClass,
 SD_RESPONSE_TYPE ResponseType,
 PSD_COMMAND_RESPONSE pResponse,
 ULONG NumBlocks,
 ULONG BlockSize,
 PUCHAR pBuffer,
 DWORD Flags,
 DWORD cbSize,
 PPHYS_BUFF_LIST pPhysBuffList
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* typedef */
typedef union{
  struct{
    ULONG sd4Bit:1;
    ULONG sdHighSpeed:1;
    ULONG :28;
    ULONG sdWriteProtected:1;
    ULONG sdHighCapacity:1;
  }bit;
  ULONG uInterfaceMode;
}SD_INTERFACE_MODE_EX, *PSD_INTERFACE_MODE_EX;

/* enum */
typedef enum _SDCARD_DEVICE_TYPE {Device_Unknown,
Device_MMC,
Device_SD_Memory,
Device_SD_IO,
Device_SD_Combo} SDCARD_DEVICE_TYPE, *PSDCARD_DEVICE_TYPE;
typedef enum {SD_FS_FAT_PARTITION_TABLE, SD_FS_FAT_NO_PARTITION_TABLE, SD_FS_UNIVERSAL, SD_FS_OTHER} SD_FS_TYPE, *PSD_FS_TYPE;
typedef enum _SD_RESPONSE_TYPE {NoResponse,
ResponseR1,
ResponseR1b,
ResponseR2,
ResponseR3,
ResponseR4,
ResponseR5,
ResponseR6} SD_RESPONSE_TYPE, *PSD_RESPONSE_TYPE;
typedef enum {
  SD_IO_FUNCTION_ENABLE = 0,
  SD_IO_FUNCTION_DISABLE,
  SD_IO_FUNCTION_SET_BLOCK_SIZE,
  SD_SET_DATA_TRANSFER_CLOCKS,
  SD_SET_CARD_INTERFACE,
  SD_SET_CLOCK_STATE_DURING_IDLE,
  SD_IS_SOFT_BLOCK_AVAILABLE,
  SD_SOFT_BLOCK_FORCE_UTILIZATION,
  SD_SOFT_BLOCK_DEFAULT_UTILIZATON,
  SD_CARD_SELECT_REQUEST,
  SD_CARD_DESELECT_REQUEST,
  SD_CARD_FORCE_RESET,
  SD_IS_FAST_PATH_AVAILABLE,
  SD_FAST_PATH_DISABLE,
  SD_FAST_PATH_ENABLE,
  SD_IO_FUNCTION_HIGH_POWER,
  SD_IO_FUNCTION_LOW_POWER,
  SD_INFO_POWER_CONTROL_STATE,
  SD_SET_CARD_INTERFACE_EX,
  SD_SET_SWITCH_FUNCTION,
  SD_DMA_ALLOC_PHYS_MEM,
  SD_DMA_FREE_PHYS_MEM
} SD_SET_FEATURE_TYPE, *PSD_SET_FEATURE_TYPE;
typedef enum _SD_SLOT_EVENT_TYPE{
  SDCardEjected = 1,
  SDCardSelected = 2,
  SDCardDeselected = 3,
  SDCardBeginSelectDeselect = 4,
  SDCardDeselectRequest = 5,
  SDCardSelectRequest = 6
} SD_SLOT_EVENT_TYPE, *PSD_SLOT_EVENT_TYPE;

/* struct */
typedef struct _FUNCTION_POWER_STATE{
  BOOL fPowerControlSupport;
  BOOL fPowerControlEnabled;
  BOOL fFunctionEnabled;
  BOOL fSupportsPowerSelect;
  BOOL fLowPower;
  DWORD OperatingVoltage;
  USHORT CurrentDrawNow;
  INT EnableDelta;
  INT SelectDelta;
}FUNCTION_POWER_STATE, *PFUNCTION_POWER_STATE;
typedef struct __PHYS_BUFF_LIST{ PHYSICAL_ADDRESS PhysAddr; UINT32 PhysLen; }PHYS_BUFF_LIST, *PPHYS_BUFF_LIST;
typedef struct _SDIO_CARD_INFO {UCHARFunctionNumber;
UCHAR DeviceCode;
DWORD CISPointer;
DWORD CSAPointer;
UCHAR CardCapability;
} SDIO_CARD_INFO, *PSDIO_CARD_INFO;
typedef struct _SD_CARD_INTERFACE_EX{
  SD_INTERFACE_MODE_EX InterfaceModeEx;
  ULONG ClockRate;
  ULONG Reserved[6];
}SD_CARD_INTERFACE_EX, *PSD_CARD_INTERFACE_EX;
typedef struct _SD_CARD_SWITCH_FUNCTION{
  DWORD dwSelectedFunction;
  DWORD dwMaxCurrentAllowed;
  DWORD dwTimeOut;
  BYTE clientData[512/8];
}SD_CARD_SWITCH_FUNCTION, *PSD_CARD_SWITCH_FUNCTION;
typedef struct _SD_COMMAND_RESPONSE {SD_RESPONSE_TYPEResponseType; UCHARResponseBuffer[SDCARD_RESPONSE_BUFFER_BYTES];} SD_COMMAND_RESPONSE, *PSD_COMMAND_RESPONSE;
typedef struct _SD_HOST_BLOCK_CAPABILITY {USHORTReadBlockSize;
USHORTWriteBlockSize;
USHORTReadBlocks;
USHORTWriteBlocks;
} SD_HOST_BLOCK_CAPABILITY, *PSD_HOST_BLOCK_CAPABILITY;

#endif /* _SDCARDDDK_ */
