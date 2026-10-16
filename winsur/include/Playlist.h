/* Playlist.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 0 declarations, 0 outlines, 0 base types, 0 extra macros, 15 extra decls
 */
#ifndef _PLAYLIST_
#define _PLAYLIST_


/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT GetFlags( DWORD* pdwFlags );
HRESULT GetItem( DWORD dwItemIndex, IAMPlayListItem** ppItem );
HRESULT GetItemCount( DWORD* pdwItems );
HRESULT GetLinkURL( BSTR* pbstrURL );
HRESULT GetNamedEvent( WCHAR pwszEventName, DWORD dwItemIndex, IAMPlayListItem** ppItem, DWORD* pdwFlags );
HRESULT GetRepeatInfo( DWORD* pdwRepeatCount, DWORD* pdwRepeatStart, DWORD* pdwRepeatEnd );
HRESULT GetScanDuration( DWORD dwSourceIndex, REFERENCE_TIME* prtScanDuration );
HRESULT GetSourceCount( DWORD* pdwSources );
HRESULT GetSourceDuration( DWORD dwSourceIndex, REFERENCE_TIME* prtDuration );
HRESULT GetSourceEndMarker( DWORD dwSourceIndex, DWORD* pdwMarker );
HRESULT GetSourceEndMarkerName( DWORD dwSourceIndex, BSTR* pbstrEndMarker );
HRESULT GetSourceStart( DWORD dwSourceIndex, REFERENCE_TIME* prtStart );
HRESULT GetSourceStartMarker( DWORD dwSourceIndex, DWORD* pdwMarker );
HRESULT GetSourceStartMarkerName( DWORD dwSourceIndex, BSTR* pbstrStartMarker );
RESULT GetSourceURL(  DWORD dwSourceIndex,  BSTR* pbstrURL  );

#endif /* _PLAYLIST_ */
