/* oal_kitl.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 7 constants, 43 declarations, 0 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _OAL_KITL_
#define _OAL_KITL_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define OAL_KITL_FLAGS_DHCP 0x0004
#define OAL_KITL_FLAGS_ENABLED 0x0001
#define OAL_KITL_FLAGS_EXTNAME 0x0020
#define OAL_KITL_FLAGS_PASSIVE 0x0002
#define OAL_KITL_FLAGS_POLL 0x0010
#define OAL_KITL_FLAGS_VMINI 0x0008
#define OAL_KITL_TYPE_NONE 0

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* OAL_KITLETH_DEINIT  [callback; ce-only; CE 5.0..699] */
typedef BOOL (*OAL_KITLETH_DEINIT)();

/* OAL_KITLETH_DISABLE_INTS  [callback; ce-only; CE 5.0..699] */
typedef VOID (*OAL_KITLETH_DISABLE_INTS)();

/* OAL_KITLETH_ENABLE_INTS  [callback; ce-only; CE 5.0..699] */
typedef VOID (*OAL_KITLETH_ENABLE_INTS)();

/* OAL_KITLETH_POWER_OFF  [callback; ce-only; CE 5.0..699] */
typedef VOID (*OAL_KITLETH_POWER_OFF)();

/* OAL_KITLETH_POWER_ON  [callback; ce-only; CE 5.0..699] */
typedef VOID (*OAL_KITLETH_POWER_ON)();

/* OAL_KITLSERIAL_DEINIT  [callback; ce-only; CE 5.0..699] */
typedef VOID (*OAL_KITLSERIAL_DEINIT)();

/* OAL_KITLSERIAL_DISABLE_INTS  [callback; ce-only; CE 5.0..699] */
typedef VOID (*OAL_KITLSERIAL_DISABLE_INTS)();

/* OAL_KITLSERIAL_ENABLE_INTS  [callback; ce-only; CE 5.0..699] */
typedef VOID (*OAL_KITLSERIAL_ENABLE_INTS)();

/* OAL_KITLSERIAL_FLOW_CONTROL  [callback; ce-only; CE 5.0..699] */
typedef VOID (*OAL_KITLSERIAL_FLOW_CONTROL) (
 BOOL fOn
);

/* OAL_KITLSERIAL_POWER_OFF  [callback; ce-only; CE 5.0..699] */
typedef VOID (*OAL_KITLSERIAL_POWER_OFF)();

/* OAL_KITLSERIAL_POWER_ON  [callback; ce-only; CE 5.0..699] */
typedef VOID (*OAL_KITLSERIAL_POWER_ON)();
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */

/* OALKitlStart  [function; ce-only; CE 5.0..599] */
BOOL OALKitlStart();
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* OALIoCtlVBridge  [function; ce-only; CE 5.0..699] */
BOOL OALIoCtlVBridge(
 UINT32 code,
 VOID *pInpBuffer,
 UINT32 inpSize,
 VOID *pOutBuffer,
 UINT32 outSize,
 UINT32 *pOutSize
);

/* OALKitlCreateName  [function; ce-only; CE 5.0..699] */
VOID OALKitlCreateName(
 LPSTR szPrefix,
 UINT16 mac[3],
 LPSTR szBuffer
);

/* OALKitlDeviceName  [function; ce-only; CE 5.0..699] */
LPCWSTR OALKitlDeviceName(
 DEVICE_LOCATION *pDevLoc,
 OAL_KITL_DEVICE *pDevices
);

/* OALKitlDeviceType  [function; ce-only; CE 5.0..699] */
OAL_KITL_TYPE OALKitlDeviceType(
 DEVICE_LOCATION *pDevLoc,
 OAL_KITL_DEVICE *pDevices
);

/* OALKitlGetDevLoc  [function; ce-only; CE 5.0..699] */
BOOL OALKitlGetDevLoc(
 DEVICE_LOCATION *pDevLoc
);

/* OALKitlInit  [function; ce-only; CE 5.0..699; OAL_Kitl.lib] */
BOOL OALKitlInit(
 LPCSTR deviceId,
 OAL_KITL_ARGS *pArgs,
 OAL_KITL_DEVICE *pDevice
);

/* OALKitlInitRegistry  [function; ce-only; CE 5.0..699] */
VOID OALKitlInitRegistry();

/* OALKitlIPtoString  [function; ce-only; CE 5.0..699] */
LPWSTR OALKitlIPtoString(
 UINT32 ip4
);

/* OALKitlMACtoString  [function; ce-only; CE 5.0..699] */
LPWSTR OALKitlMACtoString(
 UINT16 mac[]
);

/* OALKitlPowerOff  [function; ce-only; CE 5.0..699] */
VOID OALKitlPowerOff();

/* OALKitlPowerOn  [function; ce-only; CE 5.0..699] */
VOID OALKitlPowerOn();

/* OALKitlStringToIP  [function; ce-only; CE 5.0..699] */
UINT32 OALKitlStringToIP(
 LPCWSTR szIP
);

/* OALKitlStringToMAC  [function; ce-only; CE 5.0..699] */
BOOL OALKitlStringToMAC(
 LPCWSTR szMAC,
 UINT16 mac[]
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* OEMKitlStartup  [function; ce-only; CE 6.0..699; OAL_Kitl.lib] */
BOOL OEMKitlStartup(void);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* callback */
typedef UINT16 (*OAL_KITLETH_GET_FRAME)( UINT8 *pData, UINT16 *pSize);

#endif /* _OAL_KITL_ */
