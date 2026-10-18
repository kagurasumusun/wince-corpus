/* ExtraDefines.h -- supplementary macro definitions
 * 46 unassigned macros
 * (0 function-like, 46 object-like)
 */
#ifndef _EXTRADEFINES_H_
#define _EXTRADEFINES_H_

#define DMA_AUTO_INIT 0x10 // Auto initialization mode
#define FRAMEBUFFER_PHYSADDR 0xdc000000 // Physical address of the frame buffer
#define FRAMEBUFFER_SIZE 0x00400000 // 4M of frame buffer
#define HARDWARE_TIME_SET_PROBLEM 1 __int64 RealTimeBias;
#define HT_AFSVOLUME 16 // file system volume handle type
#define HT_APISET 6 // kernel API set handle type
#define HT_CRITSEC 12 // Critical section
#define HT_DBFILE 9 // open database handle type
#define HT_DBFIND 10 // database find handle type
#define HT_EVENT 4 // Event handle type
#define HT_FILE 7 // open file handle type
#define HT_FIND 8 // FindFirst handle type
#define HT_FSMAP 14 // mapped files
#define HT_MUTEX 5 // Mutex handle type
#define HT_SEMAPHORE 13 // Semaphore handle type
#define HT_SOCKET 11 // WinSock open socket handle type
#define HT_WNETENUM 15 // Net Resource Enumeration
#define IDC_FONTLIST 1000 // Control identifier of the list box
#define LDRFL_ADDR_VALID 0x0002 // Set if EdbgAddr member is valid.
#define LDRFL_JUMPIMG 0x0004 // If set, do not communicate with Eshell
#define LDRFL_USE_EDBG 0x0001 // Set to attempt to use debug Ethernet.
#define MBX_BYTE_MSG_SIZE 8 // 2 DWORDS
#define MBX_DWORD_MSG_SIZE 2 // 2 DWORDS
#define MEMORY_MAPPED_FILE_SIZE 0x10000 // 1 Mb
#define MONITOR_AREA 0x0000 // Use entire area of screen.
#define MONITOR_CENTER 0x0001 // Center rectangle on screen.
#define MONITOR_CLIP 0x0000 // Clip rectangle to screen.
#define MONITOR_WORKAREA 0x0002 // Use work area of screen.
#define PROTECTION_LEVEL_DEFAULT 20 /* default level */
#define PROTECTION_LEVEL_RESTRICTED 10 /* for Intranet apps */
#define PROTECTION_LEVEL_UNRESTRICTED 30 /* for peer-to-peer apps */
#define READ_TRANSFER 0x01 // Read from the device.
#define SH_COMM 83 // Communications not COM
#define SH_CPROG 88 // Handle to the specified API set
#define SH_DEVMGR_APIS 86 // File system device manager
#define SH_FILESYS_APIS 84 // File system APIS
#define SH_WNET 82 // WNet APIs for network redirector
#define UNIMDM_OPT_BAUDRATE 1 // use CBR_* values from Winbase.h
#define UNIMDM_OPT_DIALMOD 9 // dial modifier (dwValue is a LPCWSTR)
#define UNIMDM_OPT_MDMOPTIONS 6 // use MDM_* values from Mcx.h
#define UNIMDM_OPT_PARITY 3 // use values from Winbase.h
#define UNIMDM_OPT_STOPBITS 4 // use values from Winbase.h
#define UNIMDM_OPT_TERMOPTIONS 8 // use NETUI_LCD_TRMOPT_* values from Netui.h
#define UNIMDM_OPT_TIMEOUT 7 // call setup fail timer in seconds
#define UNIMDM_OPT_WAITBONG 5 // Seconds to wait for prompt tone
#define WRITE_TRANSFER 0x02 // Write to the device.
#endif /* _EXTRADEFINES_H_ */
