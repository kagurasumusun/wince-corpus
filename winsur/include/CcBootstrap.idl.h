/* CcBootstrap.idl -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 6 constants, 6 declarations, 0 outlines, 0 base types, 0 extra macros, 2 extra decls
 */
#ifndef _CCBOOTSTRAP_IDL_
#define _CCBOOTSTRAP_IDL_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define KTS_DEFAULT 0
#define KTS_ETHER 1
#define KTS_NONE 63
#define KTS_PASSIVE_MODE 0x40
#define KTS_SERIAL 2
#define KTS_USB 3

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* ICcBootstrap::DeviceInfo  [enum; ce-only; CE 5.0..699] */
enum DeviceInfo {
 SYSTEM_INFO_PROCESSOR_ARCHITECTURE,
 SYSTEM_INFO_PAGE_SIZE,
 SYSTEM_INFO_ACTIVE_PROCESSOR_MASK,
 SYSTEM_INFO_NUMBER_OF_PROCESSORS,
 SYSTEM_INFO_PROCESSOR_TYPE,
 SYSTEM_INFO_ALLOCATION_GRANULARITY,
 SYSTEM_INFO_PROCESSOR_LEVEL,
 SYSTEM_INFO_PROCESSOR_REVISION,
 SYSTEM_INFO_QUERY_INSTRUCTION_SET,
 OSVERSIONINFO_MAJOR_VERSION,
 OSVERSIONINFO_MINOR_VERSION,
 OSVERSIONINFO_BUILD_NUMBER,
 OSVERSIONINFO_PLATFORM_ID
};
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* ICcBootStrap::Download  [function; ce-only; CE 5.0..699] */
HRESULT Download(
 DWORD dwTimeout,
 VARIANT_BOOL bAsync,
 LPCOLESTR wszSrcFullPath,
 LPCOLESTR wszDestFullPath,
 VARIANT_BOOL bOverwrite,
 DWORD* pdwCookieId
);

/* ICcBootStrap::GetDeviceInfo  [function; ce-only; CE 5.0..699] */
HRESULT GetDeviceInfo(
 DeviceInfo diRequested,
 DWORD* pdwPropertyValue
);

/* ICcBootStrap::GetFile  [function; ce-only; CE 5.0..699] */
HRESULT GetFile(
 DWORD dwTimeout,
 LPCOLESTR wszSrcFullPath,
 LPCOLESTR wszDestFullPath,
 VARIANT_BOOL bOverwrite
);

/* ICcBootStrap::GetFileInfo  [function; ce-only; CE 5.0..699] */
HRESULT GetFileInfo(
 LPCOLESTR wszDeviceFile,
 FileInfo* pFileInfo
);

/* ICcBootStrap::Launch  [function; ce-only; CE 5.0..699] */
HRESULT Launch(
 BSTR bstrCommand,
 LPCOLESTR bstrArguments,
 DWORD dwLaunchFlags
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* enum */
enum DeviceInfo { SYSTEM_INFO_PROCESSOR_ARCHITECTURE, SYSTME_INFO_PAGE_SIZE, SYSTEM_INFO_ACTIVE_PROCESSOR_MASK, SYSTEM_INFO_NUMBER_OF_PROCESSORS, SYSTEM_INFO_PROCESSOR_TYPE, SYSTEM_INFO_ALLOCATION_GRANULARITY, SYSTEM_INFO_PROCESSOR_LEVEL, SYSTEM_INFO_PROCESSOR_REVISION, SYSTEM_INFO_QUERY_INSTRUCTION_SET, OSVERSIONINFO_MAJOR_VERSION, OSVERSIONINFO_MINOR_VERSION, OSVERSIONINFO_BUILD_NUMBER, OSVERSIONINFO_PLATFORM_ID};

/* function */
HRESULT Download( DWORDdwTimeout, VARIANT_BOOLbAsync, LPCOLESTRwszSrcFullPath, LPCOLESTRwszDestFullPath, VARIANT_BOOLbOverwrite, DWORD*pdwCookieId);

#endif /* _CCBOOTSTRAP_IDL_ */
