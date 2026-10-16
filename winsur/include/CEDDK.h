/* CEDDK.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 2 constants, 47 declarations, 2 outlines, 0 base types, 0 extra macros, 3 extra decls
 */
#ifndef _CEDDK_
#define _CEDDK_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define ConfigurationSpaceUndefined -1
#define InterfaceTypeUndefined -1

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* DMA_ADAPTER_OBJECT  [struct; ce-only; CE 4.0..699] */

/* INTERFACE_TYPE  [enum; ce-only; CE 4.0..699] */
#endif /* _WIN32_WCE */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* BUS_DATA_TYPE  [enum; ce-only; CE 4.0..699] */
typedef enum _BUS_DATA_TYPE {
 ConfigurationSpaceUndefined = -1,
 Cmos,
 EisaConfiguration,
 Pos,
 CbusConfiguration,
 PCIConfiguration,
 VMEConfiguration,
 NuBusConfiguration,
 PCMCIAConfiguration,
 MPIConfiguration,
 MPSAConfiguration,
 PNPISAConfiguration,
 MaximumBusDataType
} BUS_DATA_TYPE, *PBUS_DATA_TYPE;

/* PCI_COMMON_CONFIG  [struct; ce-only; CE 4.0..699] */
typedef struct _PCI_COMMON_CONFIG {
 USHORT VendorID; 
 USHORT DeviceID; 
 USHORT Command; 
 USHORT Status;
 UCHAR RevisionID; 
 UCHAR ProgIf; 
 UCHAR SubClass; 
 UCHAR BaseClass; 
 UCHAR CacheLineSize; 
 UCHAR LatencyTimer; 
 UCHAR HeaderType; 
 UCHAR BIST; 
 union {
 struct _PCI_HEADER_TYPE_0 {
 ULONG BaseAddresses[PCI_TYPE0_ADDRESSES];
 ULONG CIS;
 USHORT SubVendorID;
 USHORT SubSystemID;
 ULONG ROMBaseAddress;
 ULONG Reserved2[2];
 UCHAR InterruptLine; 
 UCHAR InterruptPin; 
 UCHAR MinimumGrant; 
 UCHAR MaximumLatency; 
 } type0;
 struct _PCI_HEADER_TYPE_1 {
 ULONG BaseAddresses[PCI_TYPE1_ADDRESSES];
 UCHAR PrimaryBusNumber;
 UCHAR SecondaryBusNumber;
 UCHAR SubordinateBusNumber;
 UCHAR SecondaryLatencyTimer;
 UCHAR IOBase;
 UCHAR IOLimit;
 USHORT SecondaryStatus;
 USHORT MemoryBase;
 USHORT MemoryLimit;
 USHORT PrefetchableMemoryBase;
 USHORT PrefetchableMemoryLimit;
 ULONG PrefetchableMemoryBaseUpper32;
 ULONG PrefetchableMemoryLimitUpper32;
 USHORT IOBaseUpper;
 USHORT IOLimitUpper;
 ULONG Reserved2;
 ULONG ExpansionROMBase;
 UCHAR InterruptLine;
 UCHAR InterruptPin;
 USHORT BridgeControl;
 } type1;
 struct _PCI_HEADER_TYPE_2 {
 ULONG BaseAddress;
 UCHAR CapabilitiesPtr;
 UCHAR Reserved2;
 USHORT SecondaryStatus;
 UCHAR PrimaryBusNumber;
 UCHAR CardbusBusNumber;
 UCHAR SubordinateBusNumber;
 UCHAR CardbusLatencyTimer;
 ULONG MemoryBase0;
 ULONG MemoryLimit0;
 ULONG MemoryBase1;
 ULONG MemoryLimit1;
 USHORT IOBase0_LO;
 USHORT IOBase0_HI;
 USHORT IOLimit0_LO;
 USHORT IOLimit0_HI;
 USHORT IOBase1_LO;
 USHORT IOBase1_HI;
 USHORT IOLimit1_LO;
 USHORT IOLimit1_HI;
 UCHAR InterruptLine;
 UCHAR InterruptPin;
 USHORT BridgeControl;
 USHORT SubVendorID;
 USHORT SubSystemID;
 ULONG LegacyBaseAddress;
 UCHAR Reserved3[56];
 ULONG SystemControl;
 UCHAR MultiMediaControl;
 UCHAR GeneralStatus;
 UCHAR Reserved4[2];
 UCHAR GPIO0Control;
 UCHAR GPIO1Control;
 UCHAR GPIO2Control;
 UCHAR GPIO3Control;
 ULONG IRQMuxRouting;
 UCHAR RetryStatus;
 UCHAR CardControl;
 UCHAR DeviceControl;
 UCHAR Diagnostic;
 } type2;
 } u;
 UCHAR DeviceSpecific[108];
} PCI_COMMON_CONFIG , *PPCI_COMMON_CONFIG;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 3.0..399, 5.0..699 */

/* MmUnmapIoSpace  [function; ce-only; CE 3.0..399, 5.0..699; CEDDK.lib] */
VOID MmUnmapIoSpace( 
 PVOID BaseAddress, 
 ULONG NumberOfBytes 
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 3.0..699 */

/* HalGetBusData  [function; ce-only; CE 3.0..699; CEDDK.lib] */
ULONG HalGetBusData( 
 BUS_DATA_TYPE BusDataType, 
 ULONG BusNumber, 
 ULONG SlotNumber, 
 PVOID Buffer, 
 ULONG Length 
);

/* HalGetBusDataByOffset  [function; ce-only; CE 3.0..699; CEDDK.lib] */
ULONG HalGetBusDataByOffset( 
 BUS_DATA_TYPE BusDataType, 
 ULONG BusNumber, 
 ULONG SlotNumber, 
 PVOID Buffer, 
 ULONG Offset, 
 ULONG Length 
);

/* HalSetBusData  [function; ce-only; CE 3.0..699; CEDDK.lib] */
ULONG HalSetBusData( 
 BUS_DATA_TYPE BusDataType, 
 ULONG BusNumber, 
 ULONG SlotNumber, 
 PVOID Buffer, 
 ULONG Length 
);

/* HalSetBusDataByOffset  [function; ce-only; CE 3.0..699; CEDDK.lib] */
ULONG HalSetBusDataByOffset( 
 BUS_DATA_TYPE BusDataType, 
 ULONG BusNumber, 
 ULONG SlotNumber, 
 PVOID Buffer, 
 ULONG Offset, 
 ULONG Length 
);

/* READ_PORT_BUFFER_UCHAR  [function; ce-only; CE 3.0..699; CEDDK.lib] */
VOID READ_PORT_BUFFER_UCHAR(
 PUCHAR Port, 
 PUCHAR Buffer, 
 ULONG Count 
);

/* READ_PORT_BUFFER_ULONG  [function; ce-only; CE 3.0..699; CEDDK.lib] */
VOID READ_PORT_BUFFER_ULONG(
 PULONG Port, 
 PULONG Buffer, 
 ULONG Count 
);

/* READ_PORT_BUFFER_USHORT  [function; ce-only; CE 3.0..699; CEDDK.lib] */
VOID READ_PORT_BUFFER_USHORT(
 PUSHORT Port, 
 PUSHORT Buffer, 
 ULONG Count 
);

/* READ_PORT_UCHAR  [function; ce-only; CE 3.0..699; CEDDK.lib] */
UCHAR READ_PORT_UCHAR(
 PUCHAR Port 
);

/* READ_PORT_ULONG  [function; ce-only; CE 3.0..699; CEDDK.lib] */
ULONG READ_PORT_ULONG(
 PULONG Port 
);

/* READ_PORT_USHORT  [function; ce-only; CE 3.0..699; CEDDK.lib] */
USHORT READ_PORT_USHORT(
 PUSHORT Port 
);

/* READ_REGISTER_BUFFER_UCHAR  [function; ce-only; CE 3.0..699; CEDDK.lib] */
VOID READ_REGISTER_BUFFER_UCHAR(
 PUCHAR Register, 
 PUCHAR Buffer, 
 ULONG Count 
);

/* READ_REGISTER_BUFFER_ULONG  [function; ce-only; CE 3.0..699; CEDDK.lib] */
VOID READ_REGISTER_BUFFER_ULONG(
 PULONG Register, 
 PULONG Buffer, 
 ULONG Count 
);

/* READ_REGISTER_BUFFER_USHORT  [function; ce-only; CE 3.0..699; CEDDK.lib] */
VOID READ_REGISTER_BUFFER_USHORT(
 PUSHORT Register, 
 PUSHORT Buffer, 
 ULONG Count 
);

/* READ_REGISTER_UCHAR  [function; ce-only; CE 3.0..699; CEDDK.lib] */
UCHAR READ_REGISTER_UCHAR(
 PUCHAR Register 
);

/* READ_REGISTER_ULONG  [function; ce-only; CE 3.0..699; CEDDK.lib] */
ULONG READ_REGISTER_ULONG(
 PULONG Register 
);

/* READ_REGISTER_USHORT  [function; ce-only; CE 3.0..699; CEDDK.lib] */
USHORT READ_REGISTER_USHORT(
 PUSHORT Register 
);

/* WRITE_PORT_BUFFER_UCHAR  [function; ce-only; CE 3.0..699; CEDDK.lib] */
VOID WRITE_PORT_BUFFER_UCHAR(
 PUCHAR Port, 
 PUCHAR Buffer, 
 ULONG Count 
);

/* WRITE_PORT_BUFFER_ULONG  [function; ce-only; CE 3.0..699; CEDDK.lib] */
VOID WRITE_PORT_BUFFER_ULONG(
 PULONG Port, 
 PULONG Buffer, 
 ULONG Count 
);

/* WRITE_PORT_BUFFER_USHORT  [function; ce-only; CE 3.0..699; CEDDK.lib] */
VOID WRITE_PORT_BUFFER_ULONG(
 PULONG Port, 
 PULONG Buffer, 
 ULONG Count 
);

/* WRITE_PORT_UCHAR  [function; ce-only; CE 3.0..699; CEDDK.lib] */
VOID WRITE_PORT_UCHAR(
 PUCHAR Port, 
 UCHAR Value 
);

/* WRITE_PORT_ULONG  [function; ce-only; CE 3.0..699; CEDDK.lib] */
VOID WRITE_PORT_ULONG(
 PULONG Port, 
 ULONG Value 
);

/* WRITE_PORT_USHORT  [function; ce-only; CE 3.0..699; CEDDK.lib] */
VOID WRITE_PORT_USHORT(
 PUSHORT Port, 
 USHORT Value 
);

/* WRITE_REGISTER_BUFFER_UCHAR  [function; ce-only; CE 3.0..699; CEDDK.lib] */
VOID WRITE_REGISTER_BUFFER_UCHAR(
 PUCHAR Register, 
 PUCHAR Buffer, 
 ULONG Count 
);

/* WRITE_REGISTER_BUFFER_ULONG  [function; ce-only; CE 3.0..699; CEDDK.lib] */
VOID WRITE_REGISTER_BUFFER_ULONG(
 PULONG Register, 
 PULONG Buffer, 
 ULONG Count 
);

/* WRITE_REGISTER_BUFFER_USHORT  [function; ce-only; CE 3.0..699; CEDDK.lib] */
VOID WRITE_REGISTER_BUFFER_USHORT(
 PUSHORT Register, 
 PUSHORT Buffer, 
 ULONG Count 
);

/* WRITE_REGISTER_UCHAR  [function; ce-only; CE 3.0..699; CEDDK.lib] */
VOID WRITE_REGISTER_UCHAR(
 PUCHAR Register, 
 UCHAR Value 
);

/* WRITE_REGISTER_ULONG  [function; ce-only; CE 3.0..699; CEDDK.lib] */
VOID WRITE_REGISTER_ULONG(
 PULONG Register, 
 ULONG Value 
);

/* WRITE_REGISTER_USHORT  [function; ce-only; CE 3.0..699; CEDDK.lib] */
VOID WRITE_REGISTER_USHORT(
 PUSHORT Register, 
 USHORT Value 
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* BusIoControl  [function; ce-only; CE 5.0..699; CEDDK.lib] */
BOOL BusIoControl (
 HANDLE hBusAccess,
 DWORD dwIoControlCode, 
 LPVOID lpInBuffer, 
 DWORD nInBufferSize, 
 LPVOID lpOutBuffer, 
 DWORD nOutBufferSize, 
 LPDWORD lpBytesReturned, 
 LPOVERLAPPED lpOverlapped
);

/* CalibrateStallCounter  [function; ce-only; CE 5.0..699; CEDDK.lib] */
VOID CalibrateStallCounter(
 void 
);

/* CloseBusAccessHandle  [function; ce-only; CE 5.0..699; CEDDK.lib] */
VOID CloseBusAccessHandle (
 HANDLE hBusAccess
);

/* CreateBusAccessHandle  [function; ce-only; CE 5.0..699; CEDDK.lib] */
HANDLE CreateBusAccessHandle (
 LPCTSTR lpActiveRegPath
);

/* GetBusNamePrefix  [function; ce-only; CE 5.0..699; CEDDK.lib] */
BOOL GetBusNamePrefix (
 HANDLE hBusAccess,
 LPTSTR lpReturnStr,
 DWORD dwSizeInCharacters
);

/* GetChildDeviceRemoveState  [function; ce-only; CE 5.0..699; CEDDK.lib] */
BOOL GetChildDeviceRemoveState (
 HANDLE hBusAccess,
 PDWORD lpdChildDeviceState
);

/* GetDeviceConfigurationData  [function; ce-only; CE 5.0..699; CEDDK.lib] */
ULONG GetDeviceConfigurationData (
 HANDLE hBusAccess,
 DWORD dwSpace,
 DWORD BusNumber,
 DWORD SlotNumber,
 DWORD dwOffset,
 DWORD dwLength,
 PVOID pBuffer
);

/* GetDevicePowerState  [function; shared; CE 5.0..699; CEDDK.lib] */
BOOL GetDevicePowerState (
 HANDLE hBusAccess,
 PCEDEVICE_POWER_STATE pPowerState,
 PVOID pReserved
);

/* GetParentDeviceInfo  [function; ce-only; CE 5.0..699; CEDDK.lib] */
BOOL GetParentDeviceInfo (
 HANDLE hBusAccess,
 PDEVMGR_DEVICE_INFORMATION pDeviceInfo
);

/* SetDeviceConfigurationData  [function; ce-only; CE 5.0..699; CEDDK.lib] */
ULONG SetDeviceConfigurationData (
 HANDLE hBusAccess,
 DWORD dwSpace,
 DWORD BusNumber,
 DWORD SlotNumber,
 DWORD dwOffset,
 DWORD dwLength,
 PVOID pBuffer
);

/* SetDevicePowerState  [function; ce-only; CE 5.0..699; CEDDK.lib] */
BOOL SetDevicePowerState (
 HANDLE hBusAccess,
 CEDEVICE_POWER_STATE PowerState,
 PVOID pReserved
);

/* StallExecution  [function; ce-only; CE 5.0..699; CEDDK.lib] */
VOID StallExecution(
 DWORD dwMicroSec 
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* BusChildIoControl  [function; ce-only; CE 6.0..699; CEDDK.lib] */
BOOL BusChildIoControl(
 HANDLE hBusAccess,
 DWORD dwIoControlCode,
 LPVOID lpBuffer, 
 DWORD nBufferSize
) ;

/* CeDriverDuplicateCallerHandle  [function; ce-only; CE 6.0..699; CEDDK.lib] */
HANDLE CeDriverDuplicateCallerHandle(
 HANDLE DirectCallerHandle,
 DWORD dwDesiredAccess,
 BOOL bInheritHandle,
 DWORD dwOptions
);

/* CeDriverMapCallbackFunction  [function; ce-only; CE 6.0..699; CEDDK.lib] */
HANDLE CeDriverMapCallbackFunction(
 LPNOTIFY_CALLBACK_ROUTINE lpCallback
);

/* CeDriverPerformCallback  [function; ce-only; CE 6.0..699; CEDDK.lib] */
BOOL CeDriverPerformCallback(
 HANDLE hCallback,
 DWORD dwIoControlCode,
 LPVOID lpInBuf,
 DWORD nInBufSize,
 LPVOID lpOutBuf,
 DWORD nOutBufSize,
 LPDWORD lpBytesReturned,
 LPOVERLAPPED lpOverlapped
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* enum */
typedef enum _BUS_DATA_TYPE {ConfigurationSpaceUndefined = -1,Cmos,EisaConfiguration,Pos,CbusConfiguration,PCIConfiguration,VMEConfiguration,NuBusConfiguration,PCMCIAConfiguration,MPIConfiguration,MPSAConfiguration,PNPISAConfiguration,MaximumBusDataType} BUS_DATA_TYPE, *PBUS_DATA_TYPE;

/* struct */
typedef struct _PCI_COMMON_CONFIG {USHORT VendorID; USHORT DeviceID; USHORT Command; USHORT Status;UCHAR RevisionID; UCHAR ProgIf; UCHAR SubClass; UCHAR BaseClass; UCHAR CacheLineSize; UCHAR LatencyTimer; UCHAR HeaderType; UCHAR BIST; union { struct _PCI_HEADER_TYPE_0 { ULONG BaseAddresses[PCI_TYPE0_ADDRESSES]; ULONG CIS; USHORT SubVendorID;USHORT SubSystemID;ULONG ROMBaseAddress;ULONG Reserved2[2];UCHAR InterruptLine; UCHAR InterruptPin; UCHAR MinimumGrant; UCHAR MaximumLatency; } type0;struct _PCI_HEADER_TYPE_1 { ULONG BaseAddresses[PCI_TYPE1_ADDRESSES]; UCHAR PrimaryBusNumber; UCHAR SecondaryBusNumber; UCHAR SubordinateBusNumber;UCHAR SecondaryLatencyTimer; UCHAR IOBase; UCHAR IOLimit;USHORT SecondaryStatus; USHORT MemoryBase; USHORT MemoryLimit;USHORT PrefetchableMemoryBase; USHORT PrefetchableMemoryLimit; ULONG PrefetchableMemoryBaseUpper32;ULONG PrefetchableMemoryLimitUpper32; USHORT IOBaseUpper; USHORT IOLimitUpper;ULONG Reserved2; ULONG ExpansionROMBase; UCHAR InterruptLine;UCHAR InterruptPin; USHORT BridgeControl;} type1;struct _PCI_HEADER_TYPE_2 { ULONG BaseAddress; UCHAR CapabilitiesPtr;UCHAR Reserved2; USHORT SecondaryStatus; UCHAR PrimaryBusNumber;UCHAR CardbusBusNumber; UCHAR SubordinateBusNumber; UCHAR CardbusLatencyTimer;ULONG MemoryBase0; ULONG MemoryLimit0; ULONG MemoryBase1;ULONG MemoryLimit1; USHORT IOBase0_LO; USHORT IOBase0_HI; USHORT IOLimit0_LO;USHORT IOLimit0_HI; USHORT IOBase1_LO; USHORT IOBase1_HI;USHORT IOLimit1_LO; USHORT IOLimit1_HI; UCHAR InterruptLine;UCHAR InterruptPin; USHORT BridgeControl; USHORT SubVendorID;USHORT SubSystemID; ULONG LegacyBaseAddress; UCHAR Reserved3[56];ULONG SystemControl; UCHAR MultiMediaControl; UCHAR GeneralStatus;UCHAR Reserved4[2]; UCHAR GPIO0Control; UCHAR GPIO1Control;UCHAR GPIO2Control; UCHAR GPIO3Control; ULONG IRQMuxRouting;UCHAR RetryStatus; UCHAR CardControl; UCHAR DeviceControl;UCHAR Diagnostic;} type2;} u; UCHAR DeviceSpecific[108];} PCI_COMMON_CONFIG , *PPCI_COMMON_CONFIG;
typedef struct _PCI_COMMON_CONFIG {USHORT VendorID; USHORT DeviceID; USHORT Command; USHORT Status;UCHAR RevisionID; UCHAR ProgIf; UCHAR SubClass; UCHAR BaseClass; UCHAR CacheLineSize; UCHAR LatencyTimer; UCHAR HeaderType; UCHAR BIST; union { struct _PCI_HEADER_TYPE_0 { ULONG BaseAddresses[PCI_TYPE0_ADDRESSES]; ULONG CIS; USHORT SubVendorID;USHORT SubSystemID;ULONG ROMBaseAddress;ULONG Reserved2[2];UCHAR InterruptLine; UCHAR InterruptPin; UCHAR MinimumGrant; UCHAR MaximumLatency; } type0;

#endif /* _CEDDK_ */
