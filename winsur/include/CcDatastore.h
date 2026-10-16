/* CcDatastore.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 0 declarations, 0 outlines, 0 base types, 0 extra macros, 19 extra decls
 */
#ifndef _CCDATASTORE_
#define _CCDATASTORE_


/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT ClearServiceMap( BSTRin_bstrServiceCategoryID);
HRESULT EnumerateObjects( ICcCollection**out_ppiCollection);
HRESULT FindObject( BSTRin_bstrNameOrID,ICcObject**out_ppiObject);
HRESULT RegisterRefreshEvent( BSTRin_bstrEventName);
HRESULT SetOSImage( BSTRin_bstrOSImage);
HRESULT SetServiceMap( BSTRin_bstrServiceCategoryID, BSTRin_bstrServiceInfoID);
HRESULT get_DeviceContainer( ICcDeviceContainer**out_ppiDC);
HRESULT get_FileContainer( ICcFileContainer**out_ppiFileContainer);
HRESULT get_FormFactorContainer( ICcFormFactorContainer** out_ppiFC);
HRESULT get_OSImageContainer( ICcOSImageContainer**out_ppiOC);
HRESULT get_PackageContainer( ICcPackageContainer** out_ppiPC);
HRESULT get_PackageTypeContainer( [out, retval] ICcPackageTypeContainer**out_ppiPTC);
HRESULT get_PlatformContainer( ICcPlatformContainer**out_ppiPC);
HRESULT get_ProjectContainer( ICcProjectContainer** out_ppiPC);
HRESULT get_PropertyContainer( ICcPropertyContainer**out_ppiSCC);
HRESULT get_ServiceCategoryContainer( ICcServiceCategoryContainer** out_ppiSCC);
HRESULT put_SupportedPlatform( [in] BSTRin_bstrSupportedPlatform);

#endif /* _CCDATASTORE_ */
