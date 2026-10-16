/* Replfilt.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 24 declarations, 2 outlines, 0 base types, 0 extra macros, 8 extra decls
 */
#ifndef _REPLFILT_
#define _REPLFILT_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE < 200) || (_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 1.0..199, 3.0..399, 5.0..599 */

/* IPegasusFileFilter  [interface; ce-only; CE 1.0..199, 3.0..399, 5.0..599; Coredll.lib] */

/* IPegasusFileFilterSite  [interface; ce-only; CE 1.0..199, 3.0..399, 5.0..599; Coredll.lib] */
#endif /* _WIN32_WCE */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 2.11..2.12, 3.0..399, 5.0..699 */

/* CFF_CONVERTOPTIONS  [struct; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699] */
typedef struct tagCFF_CONVERTOPTIONS {
 ULONG cbSize;
 BOOL bNoModalUI;
} CFF_CONVERTOPTIONS;

/* CFF_DESTINATIONFILE  [struct; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699] */
typedef struct tagCFF_DESTINATIONFILE {
 TCHAR szFullpath[_MAX_PATH];
 TCHAR szPath[_MAX_PATH];
 TCHAR szFilename[_MAX_FNAME];
 TCHAR szExtension[_MAX_FNAME];
} CFF_DESTINATIONFILE;

/* CFF_SOURCEFILE  [struct; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699] */
typedef struct tagCFF_SOURCEFILE {
 TCHAR szFullpath[_MAX_PATH];
 TCHAR szPath[_MAX_PATH];
 TCHAR szFilename[_MAX_FNAME];
 TCHAR szExtension[_MAX_EXT];
 DWORD cbSize;
 FILETIME ftCreated;
 FILETIME ftModified;
} CFF_SOURCEFILE;
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 2.11..2.12, 3.0..699 */

/* PFF_CONVERTINFO  [struct; ce-only; CE 2.11..2.12, 3.0..699] */
typedef struct tagPFF_CONVERTINFO {
 BOOL bImport;
 HWND hwndParent;
 BOOL bYesToAll;
 IPegasusFileFilterSite* pffs;
} PFF_CONVERTINFO;

/* PFF_DESTINATIONFILE  [struct; ce-only; CE 2.11..2.12, 3.0..699] */
typedef struct tagPFF_DESTINATIONFILE {
 TCHAR szFullpath[_MAX_PATH];
 TCHAR szPath[_MAX_PATH];
 TCHAR szFilename[_MAX_FNAME];
 TCHAR szExtension[_MAX_EXT];
} PFF_DESTINATIONFILE;

/* PFF_SOURCEFILE  [struct; ce-only; CE 2.11..2.12, 3.0..699] */
typedef struct tagPFF_SOURCEFILE {
 TCHAR szFullpath[_MAX_PATH];
 TCHAR szPath[_MAX_PATH];
 TCHAR szFilename[_MAX_FNAME];
 TCHAR szExtension[_MAX_EXT];
 DWORD cbSize;
 FILETIME ftCreated;
 FILETIME ftModified;
} PFF_SOURCEFILE;
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 3.0..399, 5.0..699 */

/* CFF_CONVERTINFO  [struct; ce-only; CE 3.0..399, 5.0..699] */
typedef struct tagCFF_CONVERTINFO {
 BOOL bImport;
 HWND hwndParent;
 BOOL bYesToAll;
 ICeFileFilterSite* pffs;
} CFF_CONVERTINFO;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE < 200) || (_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 1.0..199, 2.11..2.12, 3.0..399, 5.0..699 */

/* ICeFileFilter::FilterOptions  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
STDMETHODIMP ICeFileFilter::FilterOptions(
 HWND hwndParent
);

/* ICeFileFilter::FormatMessage  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
STDMETHOD(FormatMessage)(
 THIS_ DWORD dwFlags,
 DWORD dwMessageId,
 DWORD dwLanguageId,
 LPTSTR lpBuffer,
 DWORD nSize,
 va_list* Arguments,
 DWORD* pcb
) PURE;

/* ICeFileFilter::NextConvertFile  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
STDMETHODIMP ICeFileFilter::NextConvertFile(
 int nConversion,
 PFF_CONVERTINFO* pci,
 PFF_SOURCEFILE* psf,
 PFF_DESTINATIONFILE* pdf,
 volatile BOOL* pbCancel,
 PR_ERROR* perr
);

/* ICeFileFilterOptions::SetFilterOptions  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
HRESULT ICeFileFilterOptions::SetFilterOptions(
 CFF_CONVERTOPTIONS* pco
);

/* ICeFileFilterSite::CloseDestinationFile  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
STDMETHODIMP ICeFileFilterSite::CloseDestinationFile(
 BOOL bKeepFile,
 LPUNKNOWN pObj
);

/* ICeFileFilterSite::OpenDestinationFile  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
STDMETHODIMP ICeFileFilterSite::OpenDestinationFile(
 int nHowToOpenFile,
 LPCSTR pszFullpath,
 LPVOID* ppObj
);

/* ICeFileFilterSite::OpenSourceFile  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
STDMETHODIMP ICeFileFilterSite::OpenSourceFile(
 int nHowToOpenFile,
 LPVOID* ppObj
);

/* ICeFileFilterSite::ReportLoss  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
STDMETHODIMP ICeFileFilterSite::ReportLoss(
 DWORD dw,
 LPCTSTR psz,
 va_list* Arguments
);

/* ICeFileFilterSite::ReportProgress  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
STDMETHODIMP ICeFileFilterSite::ReportProgress(
 UINT nPercent
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE < 200) || (_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 1.0..199, 2.11..2.12, 3.0..699 */

/* IPegasusFileFilter::FilterOptions  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib] */
STDMETHODIMP IPegasusFileFilter::FilterOptions(
 HWND hwndParent
);

/* IPegasusFileFilter::FormatMessage  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib] */
STDMETHOD(FormatMessage)(
 THIS_ DWORD dwFlags,
 DWORD dwMessageId,
 DWORD dwLanguageId,
 LPTSTR lpBuffer,
 DWORD nSize,
 va_list* Arguments,
 DWORD* pcb
) PURE;

/* IPegasusFileFilter::NextConvertFile  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib] */
STDMETHODIMP IPegasusFileFilter::NextConvertFile(
 int nConversion,
 PFF_CONVERTINFO* pci,
 PFF_SOURCEFILE* psf,
 PFF_DESTINATIONFILE* pdf,
 volatile BOOL* pbCancel,
 PR_ERROR* perr
);

/* IPegasusFileFilterSite::CloseDestinationFile  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib] */
STDMETHODIMP IPegasusFileFilterSite::CloseDestinationFile(
 BOOL bKeepFile,
 LPUNKNOWN pObj
);

/* IPegasusFileFilterSite::OpenDestinationFile  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib] */
STDMETHODIMP IPegasusFileFilterSite::OpenDestinationFile(
 int nHowToOpenFile,
 LPCSTR pszFullpath,
 LPVOID* ppObj
);

/* IPegasusFileFilterSite::OpenSourceFile  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib] */
STDMETHODIMP IPegasusFileFilterSite::OpenSourceFile(
 int nHowToOpenFile,
 LPVOID* ppObj
);

/* IPegasusFileFilterSite::ReportLoss  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib] */
STDMETHODIMP IPegasusFileFilterSite::ReportLoss(
 DWORD dw,
 LPCTSTR psz,
 va_list* Arguments
);

/* IPegasusFileFilterSite::ReportProgress  [function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib] */
STDMETHODIMP IPegasusFileFilterSite::ReportProgress(
 UINT nPercent
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
STDMETHODIMP ICeFileFilterSite::CloseDestinationFile(  BOOL bKeepFile,  LPUNKNOWN pObj);
STDMETHODIMP ICeFileFilter::FilterOptions(  HWND hwndParent);
STDMETHODIMP ICeFileFilter::NextConvertFile(  int nConversion,  PFF_CONVERTINFO *pci,  PFF_SOURCEFILE *psf,  PFF_DESTINATIONFILE *pdf,  volatile BOOL *pbCancel,  PR_ERROR *perr);
STDMETHODIMP ICeFileFilterSite::OpenDestinationFile(  int nHowToOpenFile,  LPCSTR pszFullpath,  LPVOID *ppObj);
STDMETHODIMP ICeFileFilterSite::OpenSourceFile(  int nHowToOpenFile,  LPVOID *ppObj);
STDMETHODIMP ICeFileFilterSite::ReportLoss(  DWORD dw,  LPCTSTR psz,  va_list *Arguments);
STDMETHOD(FormatMessage) (  THIS_ DWORD dwFlags,  DWORD dwMessageId,  DWORD dwLanguageId,  LPTSTR lpBuffer,  DWORD nSize,  va_list *Arguments,  DWORD *pcb) PURE;
HRESULT ICeFileFilterOptions::SetFilterOptions(  CFF_CONVERTOPTIONS *pco);

#endif /* _REPLFILT_ */
