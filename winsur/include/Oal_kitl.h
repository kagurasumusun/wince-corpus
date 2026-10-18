/* Oal_kitl.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 28 declarations, 0 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _OAL_KITL_
#define _OAL_KITL_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* OAL_KITL_FLAGS  [enum; ce-only] */
#ifndef __WINCE_DEFINED_OAL_KITL_FLAGS
#define __WINCE_DEFINED_OAL_KITL_FLAGS
typedef enum {
 OAL_KITL_FLAGS_ENABLED = 0x0001,
 OAL_KITL_FLAGS_PASSIVE = 0x0002,
 OAL_KITL_FLAGS_DHCP = 0x0004,
 OAL_KITL_FLAGS_VMINI = 0x0008,
 OAL_KITL_FLAGS_POLL = 0x0010,
 OAL_KITL_FLAGS_EXTNAME = 0x0020
} OAL_KITL_FLAGS;
#endif /* __WINCE_DEFINED_OAL_KITL_FLAGS */
#ifndef __WINCE_DEFINED_POAL_KITL_FLAGS
#define __WINCE_DEFINED_POAL_KITL_FLAGS
typedef OAL_KITL_FLAGS *POAL_KITL_FLAGS, *LPOAL_KITL_FLAGS;
#endif /* __WINCE_DEFINED_POAL_KITL_FLAGS */

/* OAL_KITL_TYPE  [enum; ce-only] */
#ifndef __WINCE_DEFINED_OAL_KITL_TYPE
#define __WINCE_DEFINED_OAL_KITL_TYPE
typedef enum {
 OAL_KITL_TYPE_NONE = 0,
 OAL_KITL_TYPE_SERIAL,
 OAL_KITL_TYPE_ETH,
 OAL_KITL_TYPE_FLASH
} OAL_KITL_TYPE;
#endif /* __WINCE_DEFINED_OAL_KITL_TYPE */
#ifndef __WINCE_DEFINED_POAL_KITL_TYPE
#define __WINCE_DEFINED_POAL_KITL_TYPE
typedef OAL_KITL_TYPE *POAL_KITL_TYPE, *LPOAL_KITL_TYPE;
#endif /* __WINCE_DEFINED_POAL_KITL_TYPE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x500 && _WIN32_WCE < 0x700)) /* CE 5.0..699 */

/* OAL_KITLETH_DEINIT  [callback; ce-only; CE 5.0..699] */
#ifndef __WINCE_DEFINED_OAL_KITLETH_DEINIT
#define __WINCE_DEFINED_OAL_KITLETH_DEINIT
typedef BOOL (*OAL_KITLETH_DEINIT)();
#endif /* __WINCE_DEFINED_OAL_KITLETH_DEINIT */

/* OAL_KITLETH_DISABLE_INTS  [callback; ce-only; CE 5.0..699] */
#ifndef __WINCE_DEFINED_OAL_KITLETH_DISABLE_INTS
#define __WINCE_DEFINED_OAL_KITLETH_DISABLE_INTS
typedef VOID (*OAL_KITLETH_DISABLE_INTS)();
#endif /* __WINCE_DEFINED_OAL_KITLETH_DISABLE_INTS */

/* OAL_KITLETH_ENABLE_INTS  [callback; ce-only; CE 5.0..699] */
#ifndef __WINCE_DEFINED_OAL_KITLETH_ENABLE_INTS
#define __WINCE_DEFINED_OAL_KITLETH_ENABLE_INTS
typedef VOID (*OAL_KITLETH_ENABLE_INTS)();
#endif /* __WINCE_DEFINED_OAL_KITLETH_ENABLE_INTS */

/* OAL_KITLETH_POWER_OFF  [callback; ce-only; CE 5.0..699] */
#ifndef __WINCE_DEFINED_OAL_KITLETH_POWER_OFF
#define __WINCE_DEFINED_OAL_KITLETH_POWER_OFF
typedef VOID (*OAL_KITLETH_POWER_OFF)();
#endif /* __WINCE_DEFINED_OAL_KITLETH_POWER_OFF */

/* OAL_KITLETH_POWER_ON  [callback; ce-only; CE 5.0..699] */
#ifndef __WINCE_DEFINED_OAL_KITLETH_POWER_ON
#define __WINCE_DEFINED_OAL_KITLETH_POWER_ON
typedef VOID (*OAL_KITLETH_POWER_ON)();
#endif /* __WINCE_DEFINED_OAL_KITLETH_POWER_ON */

/* OAL_KITLSERIAL_DEINIT  [callback; ce-only; CE 5.0..699] */
#ifndef __WINCE_DEFINED_OAL_KITLSERIAL_DEINIT
#define __WINCE_DEFINED_OAL_KITLSERIAL_DEINIT
typedef VOID (*OAL_KITLSERIAL_DEINIT)();
#endif /* __WINCE_DEFINED_OAL_KITLSERIAL_DEINIT */

/* OAL_KITLSERIAL_DISABLE_INTS  [callback; ce-only; CE 5.0..699] */
#ifndef __WINCE_DEFINED_OAL_KITLSERIAL_DISABLE_INTS
#define __WINCE_DEFINED_OAL_KITLSERIAL_DISABLE_INTS
typedef VOID (*OAL_KITLSERIAL_DISABLE_INTS)();
#endif /* __WINCE_DEFINED_OAL_KITLSERIAL_DISABLE_INTS */

/* OAL_KITLSERIAL_ENABLE_INTS  [callback; ce-only; CE 5.0..699] */
#ifndef __WINCE_DEFINED_OAL_KITLSERIAL_ENABLE_INTS
#define __WINCE_DEFINED_OAL_KITLSERIAL_ENABLE_INTS
typedef VOID (*OAL_KITLSERIAL_ENABLE_INTS)();
#endif /* __WINCE_DEFINED_OAL_KITLSERIAL_ENABLE_INTS */

/* OAL_KITLSERIAL_FLOW_CONTROL  [callback; ce-only; CE 5.0..699] */
#ifndef __WINCE_DEFINED_OAL_KITLSERIAL_FLOW_CONTROL
#define __WINCE_DEFINED_OAL_KITLSERIAL_FLOW_CONTROL
typedef VOID (*OAL_KITLSERIAL_FLOW_CONTROL) (BOOL fOn);
#endif /* __WINCE_DEFINED_OAL_KITLSERIAL_FLOW_CONTROL */

/* OAL_KITLSERIAL_POWER_OFF  [callback; ce-only; CE 5.0..699] */
#ifndef __WINCE_DEFINED_OAL_KITLSERIAL_POWER_OFF
#define __WINCE_DEFINED_OAL_KITLSERIAL_POWER_OFF
typedef VOID (*OAL_KITLSERIAL_POWER_OFF)();
#endif /* __WINCE_DEFINED_OAL_KITLSERIAL_POWER_OFF */

/* OAL_KITLSERIAL_POWER_ON  [callback; ce-only; CE 5.0..699] */
#ifndef __WINCE_DEFINED_OAL_KITLSERIAL_POWER_ON
#define __WINCE_DEFINED_OAL_KITLSERIAL_POWER_ON
typedef VOID (*OAL_KITLSERIAL_POWER_ON)();
#endif /* __WINCE_DEFINED_OAL_KITLSERIAL_POWER_ON */
#endif /* _WIN32_WCE */

#endif /* _OAL_KITL_ */
