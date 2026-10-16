/* Playlist.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 16 declarations, 0 outlines, 0 base types, 0 extra macros, 15 extra decls
 */
#ifndef _PLAYLIST_
#define _PLAYLIST_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* IAMPlayList::GetFlags  [function; ce-only; CE 5.0..699] */
HRESULT GetFlags(
 DWORD* pdwFlags
);

/* IAMPlayList::GetItem  [function; ce-only; CE 5.0..699] */
HRESULT GetItem(
 DWORD dwItemIndex,
 IAMPlayListItem** ppItem
);

/* IAMPlayList::GetItemCount  [function; ce-only; CE 5.0..699] */
HRESULT GetItemCount(
 DWORD* pdwItems
);

/* IAMPlayList::GetNamedEvent  [function; ce-only; CE 5.0..699] */
HRESULT GetNamedEvent(
 WCHAR pwszEventName,
 DWORD dwItemIndex,
 IAMPlayListItem** ppItem,
 DWORD* pdwFlags
);

/* IAMPlayList::GetRepeatInfo  [function; ce-only; CE 5.0..699] */
HRESULT GetRepeatInfo(
 DWORD* pdwRepeatCount,
 DWORD* pdwRepeatStart,
 DWORD* pdwRepeatEnd
);

/* IAMPlayListItem::GetFlags  [function; ce-only; CE 5.0..699] */
HRESULT GetFlags(
 DWORD* pdwFlags
);

/* IAMPlayListItem::GetLinkURL  [function; ce-only; CE 5.0..699] */
HRESULT GetLinkURL(
 BSTR* pbstrURL
);

/* IAMPlayListItem::GetScanDuration  [function; ce-only; CE 5.0..699] */
HRESULT GetScanDuration(
 DWORD dwSourceIndex,
 REFERENCE_TIME* prtScanDuration
);

/* IAMPlayListItem::GetSourceCount  [function; ce-only; CE 5.0..699] */
HRESULT GetSourceCount(
 DWORD* pdwSources
);

/* IAMPlayListItem::GetSourceDuration  [function; ce-only; CE 5.0..699] */
HRESULT GetSourceDuration(
 DWORD dwSourceIndex,
 REFERENCE_TIME* prtDuration
);

/* IAMPlayListItem::GetSourceEndMarker  [function; ce-only; CE 5.0..699] */
HRESULT GetSourceEndMarker(
 DWORD dwSourceIndex,
 DWORD* pdwMarker
);

/* IAMPlayListItem::GetSourceEndMarkerName  [function; ce-only; CE 5.0..699] */
HRESULT GetSourceEndMarkerName(
 DWORD dwSourceIndex,
 BSTR* pbstrEndMarker
);

/* IAMPlayListItem::GetSourceStart  [function; ce-only; CE 5.0..699] */
HRESULT GetSourceStart(
 DWORD dwSourceIndex,
 REFERENCE_TIME* prtStart
);

/* IAMPlayListItem::GetSourceStartMarker  [function; ce-only; CE 5.0..699] */
HRESULT GetSourceStartMarker(
 DWORD dwSourceIndex,
 DWORD* pdwMarker
);

/* IAMPlayListItem::GetSourceStartMarkerName  [function; ce-only; CE 5.0..699] */
HRESULT GetSourceStartMarkerName(
 DWORD dwSourceIndex,
 BSTR* pbstrStartMarker
);

/* IAMPlayListItem::GetSourceURL  [function; ce-only; CE 5.0..699] */
RESULT GetSourceURL(
 DWORD dwSourceIndex,
 BSTR* pbstrURL
);
#endif /* _WIN32_WCE */

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
