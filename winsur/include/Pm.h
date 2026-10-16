/* Pm.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 16 constants, 16 declarations, 0 outlines, 0 base types, 0 extra macros, 13 extra decls
 */
#ifndef _PM_
#define _PM_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define D0 0
#define DX 176
#define PBT_RESUME 2
#define POWER_FORCE (DWORD)(0x00001000)
#define POWER_NAME (DWORD)(0x00000001)
#define POWER_STATE_BOOT (DWORD)(0x00080000)
#define POWER_STATE_CRITICAL (DWORD)(0x00040000)
#define POWER_STATE_IDLE (DWORD)(0x00100000)
#define POWER_STATE_OFF (DWORD)(0x00020000)
#define POWER_STATE_ON (DWORD)(0x00010000)
#define POWER_STATE_PASSWORD (DWORD)(0x10000000)
#define POWER_STATE_RESET (DWORD)(0x00800000)
#define POWER_STATE_SUSPEND (DWORD)(0x00200000)
#define POWER_STATE_UNATTENDED (DWORD)(0x00400000)
#define POWER_STATE_USERIDLE (DWORD)(0x01000000)
#define PwrDeviceUnspecified -1

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* DevicePowerNotify  [function; ce-only; CE 4.0..699; Coredll.lib] */
DWORD DevicePowerNotify(
 PVOID pvDevice,
 CEDEVICE_POWER_STATE DeviceState,
 DWORD Flags
);

/* GetDevicePower  [function; ce-only; CE 4.0..699; Coredll.lib] */
DWORD GetDevicePower(
 PVOID pvDevice,
 DWORD dwDeviceFlags,
 PCEDEVICE_POWER_STATE pDeviceState
);

/* GetSystemPowerState  [function; ce-only; CE 4.0..699; Coredll.lib] */
DWORD GetSystemPowerState(
 LPWSTR pBuffer,
 DWORD Length,
 PDWORD pFlags
);

/* RegisterPowerRelationship  [function; ce-only; CE 4.0..699; Coredll.lib] */
HANDLE RegisterPowerRelationship(
 PVOID pvParent,
 PVOID pvChild,
 PPOWER_CAPABILITIES pCaps,
 DWORD Flags
);

/* ReleasePowerRelationship  [function; ce-only; CE 4.0..699; Coredll.lib] */
DWORD ReleasePowerRelationship(
 HANDLE h
);

/* ReleasePowerRequirement  [function; ce-only; CE 4.0..699; Coredll.lib] */
DWORD ReleasePowerRequirement(
 HANDLE hPowerReq
);

/* RequestPowerNotifications  [function; ce-only; CE 4.0..699; Coredll.lib] */
HANDLE RequestPowerNotifications(
 HANDLE hMsgQ,
 DWORD Flags
);

/* SetDevicePower  [function; ce-only; CE 4.0..699; Coredll.lib] */
DWORD SetDevicePower(
 PVOID pvDevice,
 DWORD dwDeviceFlags,
 CEDEVICE_POWER_STATE DeviceState
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* SetPowerRequirement  [function; ce-only; CE 5.0..699; Coredll.lib] */
HANDLE SetPowerRequirement(
 PVOID pvDevice,
 CEDEVICE_POWER_STATE DeviceState,
 ULONG DeviceFlags,
 PVOID pvSystemState,
 ULONG StateFlags
);

/* SetSystemPowerState  [function; shared; CE 5.0..699; Coredll.lib] */
DWORD SetSystemPowerState(
 LPCWSTR psState,
 DWORD StateFlags,
 DWORD Options
);

/* StopPowerNotifications  [function; ce-only; CE 5.0..699; Coredll.lib] */
DWORD StopPowerNotifications(
 HANDLE h
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* enum */
typedef enum _CEDEVICE_POWER_STATE {PwrDeviceUnspecified = -1,D0 = 0,D1,D2,D3,D4,PwrDeviceMaximum} CEDEVICE_POWER_STATE, *PCEDEVICE_POWER_STATE;

/* struct */
typedef struct {
  DWORD dwSize;
  BT_ADDR bta;
  DWORD dwState;
} BT_AVDTP_STATE_CHANGE, *PBT_AVDTP_STATE_CHANGE;
typedef struct { DWORD dwSize;
USHORT hConnection;
BT_ADDR bta;
UCHAR ucLinkType;
UCHAR ucEncryptMode;
} BT_CONNECT_EVENT, *PBT_CONNECT_EVENT;
typedef struct {
  DWORD dwSize;
  USHORT hConnection;
  UCHAR ucReason;
} BT_DISCONNECT_EVENT, *PBT_DISCONNECT_EVENT;
typedef struct {
  DWORD dwSize;
  BT_ADDR bta;
  UCHAR link_key[16];
  UCHAR key_type;
} BT_LINK_KEY_EVENT, *PBT_LINK_KEY_EVENT;
typedef struct {
  DWORD dwSize;
  USHORT hConnection;
  BT_ADDR bta;
  BYTE bMode;
  USHORT usInterval;
} BT_MODE_CHANGE_EVENT, *PBT_MODE_CHANGE_EVENT;
typedef struct {
  DWORD dwSize;
  BT_ADDR bta;
  UINT fRole : 1;
} BT_ROLE_SWITCH_EVENT, *PBT_ROLE_SWITCH_EVENT;
typedef struct {
  DWORD dwSize;
  BT_ADDR btAddr;
  GUID uuidService;
} BT_SERVICE_REQUEST, *PBT_SERVICE_REQUEST;
typedef struct _POWER_BROADCAST {DWORD Message;DWORD Flags;DWORD Length;WCHAR SystemPowerState[1];} POWER_BROADCAST, *PPOWER_BROADCAST;
typedef struct _POWER_BROADCAST_POWER_INFO {DWORD dwBatteryLifeTime;DWORD dwBatteryFullLifeTime;DWORD dwBackupBatteryLifeTime;DWORD dwBackupBatteryFullLifeTime; BYTE bACLineStatus; BYTE bBatteryFlag; BYTE bBatteryLifePercent; BYTE bBackupBatteryFlag; BYTE bBackupBatteryLifePercent;} POWER_BROADCAST_POWER_INFO, *PPOWER_BROADCAST_POWER_INFO;
typedef struct _POWER_CAPABILITIES {UCHAR DeviceDx;UCHAR WakeFromDx;UCHAR InrushDx;DWORD Power[5];DWORD Latency[5];DWORD Flags;} POWER_CAPABILITIES, *PPOWER_CAPABILITIES;
typedef struct _POWER_RELATIONSHIP {HANDLE hParent;LPCWSTR pwsParent; HANDLE hChild;LPCWSTR pwsChild;} POWER_RELATIONSHIP, *PPOWER_RELATIONSHIP;

#endif /* _PM_ */
