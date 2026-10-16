/* Altcom.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 2 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _ALTCOM_
#define _ALTCOM_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 200 && _WIN32_WCE < 210)) /* CE 2.0..209 */

/* IProvideClassInfo2Impl::GetClassInfo  [function; ce-only; CE 2.0..209] */
HRESULT GetClassInfo( ITypeInfo** pptinfo );

/* IProvideClassInfo2Impl::GetGUID  [function; ce-only; CE 2.0..209] */
HRESULT GetGUID( DWORD dwGuidKind, GUID* pGUID );
#endif /* _WIN32_WCE */

#endif /* _ALTCOM_ */
