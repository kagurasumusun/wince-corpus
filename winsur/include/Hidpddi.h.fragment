/* Hidpddi.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 2 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _HIDPDDI_
#define _HIDPDDI_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* HidP_FreeCollectionDescription  [function; ce-only; CE 4.0..699; Hidparse_lib.lib] */
void HidP_FreeCollectionDescription(
 PHIDP_DEVICE_DESC DeviceDescription
);

/* HidP_GetCollectionDescription  [function; ce-only; CE 4.0..699; Hidparse_lib.lib] */
NTSTATUS HidP_GetCollectionDescription(
 PHIDP_REPORT_DESCRIPTOR ReportDesc,
 ULONG DescLength,
 POOL_TYPE PoolType,
 PHIDP_DEVICE_DESC DeviceDescription
);
#endif /* _WIN32_WCE */

#endif /* _HIDPDDI_ */
