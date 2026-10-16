/* Package.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 7 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _PACKAGE_
#define _PACKAGE_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 420 && _WIN32_WCE < 600)) /* CE 4.2..599 */

/* IPMPackage::AddCPUFiles  [function; ce-only; CE 4.2..599] */
HRESULT AddCPUFiles( 
 BSTR bstrFullPath, 
 BSTR bstrKeyName, 
 BSTR bsOSIdOrName, 
 VARIANT vtLocaleId, 
 VARIANT vtFlags 
);

/* IPMPackage::AddFile  [function; ce-only; CE 4.2..599] */
HRESULT AddFile( 
 BSTR bstrFullPath, 
 BSTR bstrKeyName, 
 IPMCPU* piPMCPU, 
 IPMOS* piPMOS, 
 long dwLocaleId, 
 long dwFlags, 
 IPMPackageFile** ppiPMPackageFile 
);

/* IPMPackage::DeleteFile  [function; ce-only; CE 4.2..599] */
HRESULT DeleteFile(BSTR bstrFullPath,BSTR bstrKeyName);

/* IPMPackage::EnumFiles  [function; ce-only; CE 4.2..599] */
HRESULT EnumFiles(IEnumVariant** ppiEnumFiles);

/* IPMPackage::GetFile  [function; ce-only; CE 4.2..599] */
HRESULT GetFile( 
 BSTR bstrFullPath, 
 BSTR bstrKeyName, 
 IPMPackageFile** ppiPMPackageFile 
);

/* IPMPackage::Id  [function; ce-only; CE 4.2..599] */
HRESULT Id(BSTR* pbstrPackageId);

/* IPMPackage::Name  [function; ce-only; CE 4.2..599] */
HRESULT Name(BSTR* pbstrPackageName);
#endif /* _WIN32_WCE */

#endif /* _PACKAGE_ */
