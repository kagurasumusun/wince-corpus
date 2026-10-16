/* Unknwn.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 3 declarations, 1 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _UNKNWN_
#define _UNKNWN_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 2.11..2.12, 3.0..399, 5.0..599 */

/* IUnknown  [interface; shared; CE 2.11..2.12, 3.0..399, 5.0..599; Ole32.lib, Uuid.lib] */
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 2.11..2.12, 3.0..699 */

/* IUnknown::AddRef  [function; shared; CE 2.11..2.12, 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
ULONG AddRef(void);

/* IUnknown::QueryInterface  [function; shared; CE 2.11..2.12, 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT QueryInterface( 
 REFIID iid, 
 void** ppvObject
);

/* IUnknown::Release  [function; shared; CE 2.11..2.12, 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
ULONG Release(void);
#endif /* _WIN32_WCE */

#endif /* _UNKNWN_ */
