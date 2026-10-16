/* Os.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 5 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _OS_
#define _OS_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 420 && _WIN32_WCE < 600)) /* CE 4.2..599 */

/* IPMOS::Id  [function; ce-only; CE 4.2..599] */
HRESULT Id(BSTR* pbstrGuid);

/* IPMOS::MajorVersion  [function; ce-only; CE 4.2..599] */
HRESULT MajorVersion(int* pwMajor);

/* IPMOS::MinorVersion  [function; ce-only; CE 4.2..599] */
HRESULT MinorVersion(int* pwMinor);

/* IPMOS::Name  [function; ce-only; CE 4.2..599] */
HRESULT Name(BSTR bstrName);

/* IPMOS::TypeId  [function; ce-only; CE 4.2..599] */
HRESULT TypeId(BSTR* pbstrTypeId);
#endif /* _WIN32_WCE */

#endif /* _OS_ */
