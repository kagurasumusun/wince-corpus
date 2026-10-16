/* Download.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 5 declarations, 0 outlines, 0 base types, 0 extra macros, 5 extra decls
 */
#ifndef _DOWNLOAD_
#define _DOWNLOAD_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 420 && _WIN32_WCE < 600)) /* CE 4.2..599 */

/* _IDownloadProgress::OnProgressNotify  [function; ce-only; CE 4.2..599] */
HRESULT OnProgressNotify(DWORD dwCurrentSize,DWORD dwTotalSize);

/* IDownload::DownloadImage  [function; ce-only; CE 4.2..599] */
HRESULT DownloadImage(LPCOLESTR pszImagePath,DWORD dwRebootTimeout);

/* IDownload::JumpToImage  [function; ce-only; CE 4.2..599] */
HRESULT JumpToImage(DWORD dwJumpFlags);

/* IDownload::StopDownloadImage  [function; ce-only; CE 4.2..599] */
HRESULT StopDownloadImage();

/* IDownload::StopJumpToImage  [function; ce-only; CE 4.2..599] */
HRESULT StopJumpToImage();
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT DownloadImage( LPCOLESTR pszImagePath, DWORD dwRebootTimeout );
HRESULT JumpToImage( DWORD dwJumpFlags );
HRESULT OnProgressNotify( DWORD dwCurrentSize, DWORD dwTotalSize );
HRESULT StopDownloadImage();
HRESULT StopJumpToImage();

#endif /* _DOWNLOAD_ */
