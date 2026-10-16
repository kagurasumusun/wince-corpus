/* Comcat.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 3 constants, 0 declarations, 2 outlines, 0 base types, 0 extra macros, 10 extra decls
 */
#ifndef _COMCAT_
#define _COMCAT_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define CATID_NULL GUID_NULL
#define LPENUMCATID LPENUMGUID
#define LPENUMCLSID LPENUMGUID

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */

/* ICatInformation  [interface; shared; CE 5.0..599; Ole32.lib, Uuid.lib] */

/* ICatRegister  [interface; shared; CE 5.0..599; Ole32.lib, Uuid.lib] */
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT EnumCategories( LCID lcid, IEnumCATEGORYINFO** ppenumCatInfo );
HRESULT EnumClassesOfCategories( ULONG cImplemented, CATID rgcatidImpl, ULONG cRequired, CATID rgcatidReq, IEnumCLSID** ppenumCLSID );
HRESULT EnumImplCategoriesOfClass( REFCLSID rclsid, IEnumCATID** ppenumCATD );
HRESULT EnumReqCategoriesOfClass( REFCLSID rclsid, IEnumCATID** ppenumCATD );
HRESULT GetCategoryDesc( REFCATID rcatid, LCID lcid, PWCHAR* ppszDesc );
HRESULT IsClassOfCategories( REFCLSID rclsid, ULONG cImplemented, CATID rgcatidImpl[], ULONG cRequired, CATID rgcatidReq[] );
HRESULT RegisterCategories( ULONG cCategories, CATEGORYINFO rgCategoryInfo[] );
HRESULT UnRegisterCategories( ULONG cCategories, CATID rgcatid[] );
HRESULT UnRegisterClassImplCategories( REFCLSID rclsid, ULONG cCategories, CATID rgcatid[] );
HRESULT UnRegisterClassReqCategories( REFCLSID rclsid, ULONG cCategories, CATID rgcatid[] );

#endif /* _COMCAT_ */
