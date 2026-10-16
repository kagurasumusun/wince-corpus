/* Propinfo.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 3 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _PROPINFO_
#define _PROPINFO_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 420 && _WIN32_WCE < 600)) /* CE 4.2..599 */

/* IPMPropInfo::Name  [function; ce-only; CE 4.2..599] */
HRESULT Name(BSTR bstrName);

/* IPMPropInfo::Type  [function; ce-only; CE 4.2..599] */
HRESULT Type(long dwType);

/* IPMPropInfo::Value  [function; ce-only; CE 4.2..599] */
HRESULT Value(VARIANT dwValue);
#endif /* _WIN32_WCE */

#endif /* _PROPINFO_ */
