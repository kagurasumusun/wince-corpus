/* Objidl.idl -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 2 constants, 3 declarations, 1 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _OBJIDL_IDL_
#define _OBJIDL_IDL_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400)) /* CE 3.0..399 */
#define BIND_JUSTTESTEXISTENCE 2
#define BIND_MAYBOTHERUSER 1
#endif /* _WIN32_WCE */

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */

/* ISurrogate  [interface; shared; CE 5.0..599; Ole32.lib, Uuid.lib] */
#endif /* _WIN32_WCE */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 3.0..699 */

/* BIND_FLAGS  [enum; shared; CE 3.0..699] */
typedef enum tagBIND_FLAGS {
 BIND_MAYBOTHERUSER = 1, 
 BIND_JUSTTESTEXISTENCE = 2, 
} BIND_FLAGS;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* ISurrogate::FreeSurrogate  [function; shared; CE 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT FreeSurrogate();

/* ISurrogate::LoadDllServer  [function; shared; CE 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT LoadDllServer(
 REFCLSID Clsid 
);
#endif /* _WIN32_WCE */

#endif /* _OBJIDL_IDL_ */
