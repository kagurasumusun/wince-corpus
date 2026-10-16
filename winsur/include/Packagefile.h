/* Packagefile.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 12 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _PACKAGEFILE_
#define _PACKAGEFILE_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 420 && _WIN32_WCE < 600)) /* CE 4.2..599 */

/* IPMPackageFile::Architecture  [function; ce-only; CE 4.2..599] */
HRESULT Architecture(int* pwArchitecture);

/* IPMPackageFile::CpuNum  [function; ce-only; CE 4.2..599] */
HRESULT CpuNum(long* pdwCpuNum);

/* IPMPackageFile::Flags  [function; ce-only; CE 4.2..599] */
HRESULT Flags(long* pdwFlags);

/* IPMPackageFile::KeyName  [function; ce-only; CE 4.2..599] */
HRESULT KeyName(BSTR* pbstrName);

/* IPMPackageFile::Level  [function; ce-only; CE 4.2..599] */
HRESULT Level(long* pdwLevel);

/* IPMPackageFile::Locale  [function; ce-only; CE 4.2..599] */
HRESULT Locale(long* pdwLocale);

/* IPMPackageFile::MajorVersion  [function; ce-only; CE 4.2..599] */
HRESULT MajorVersion(int* pwMajor);

/* IPMPackageFile::MinorVersion  [function; ce-only; CE 4.2..599] */
HRESULT MinorVersion(int* pwMinor);

/* IPMPackageFile::Name  [function; ce-only; CE 4.2..599] */
HRESULT Name(BSTR* pbstrFileName);

/* IPMPackageFile::PageSize  [function; ce-only; CE 4.2..599] */
HRESULT PageSize(long* pdwPageSize);

/* IPMPackageFile::Type  [function; ce-only; CE 4.2..599] */
HRESULT Type(long* pdwType);

/* IPMPackageFile::TypeId  [function; ce-only; CE 4.2..599] */
HRESULT TypeId(BSTR* pbstrTypeId);
#endif /* _WIN32_WCE */

#endif /* _PACKAGEFILE_ */
