/* oal_kitl.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 43 declarations, 0 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _OAL_KITL_
#define _OAL_KITL_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x500 && _WIN32_WCE < 0x700)) /* CE 5.0..699 */

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

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x500 && _WIN32_WCE < 0x600)) /* CE 5.0..599 */

/* OALKitlStart  [function; ce-only; CE 5.0..599] */
BOOL OALKitlStart();
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x500 && _WIN32_WCE < 0x700)) /* CE 5.0..699 */

/* OALKitlInitRegistry  [function; ce-only; CE 5.0..699] */
VOID OALKitlInitRegistry();

/* OALKitlPowerOff  [function; ce-only; CE 5.0..699] */
VOID OALKitlPowerOff();

/* OALKitlPowerOn  [function; ce-only; CE 5.0..699] */
VOID OALKitlPowerOn();
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x600 && _WIN32_WCE < 0x700)) /* CE 6.0..699 */

/* OEMKitlStartup  [function; ce-only; CE 6.0..699; OAL_Kitl.lib] */
BOOL OEMKitlStartup(void);
#endif /* _WIN32_WCE */

#endif /* _OAL_KITL_ */
