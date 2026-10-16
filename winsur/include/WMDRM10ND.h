/* WMDRM10ND.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 1 declarations, 0 outlines, 0 base types, 0 extra macros, 2 extra decls
 */
#ifndef _WMDRM10ND_
#define _WMDRM10ND_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* DRM_ND_Init  [function; ce-only; CE 5.0..699; cardea_wince.lib, wmdrm10nd.lib] */
HRESULT DRM_API DRM_ND_Init(void);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
long DRM_ND_DeregisterFromService ( BSTR sServerUDN, );
long DRM_ND_RegisterWithService ( BSTR sOurUDN, BSTR sServerUDN, IUPnPService *pService );

#endif /* _WMDRM10ND_ */
