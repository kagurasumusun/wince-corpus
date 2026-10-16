/* wmp.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 0 declarations, 0 outlines, 0 base types, 0 extra macros, 67 extra decls
 */
#ifndef _WMP_
#define _WMP_


/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
void AudioLanguageChange( long LangID );
void Click( short nButton, short nShiftState, long fX, long fY );
void CurrentItemChange( IDispatch* pdispMedia );
void CurrentPlaylistChange( WMPPlaylistChangeEventType change );
void DoubleClick( short nButton, short nShiftState, long fX, long fY );
void Error();
void KeyDown( short nKeyCode, short nShiftState );
void KeyPress( short nKeyAscii );
void KeyUp( short nKeyCode, short nShiftState );
void MarkerHit( long MarkerNum );
void MouseDown( short nButton, short nShiftState, long fX, long fY );
void MouseMove( short nButton, short nShiftState, long fX, long fY );
void MouseUp( short nButton, short nShiftState, long fX, long fY );
void NewStream();
void OpenStateChange( long NewState );
void PlayStateChange( long NewState );
void PositionChange( double oldPosition, double newPosition );
void StatusChange();
HRESULT get_URL( BSTR* pbstrURL );
HRESULT get_attributeCount( long* plCount );
HRESULT get_attributeName( long lIndex, BSTR* pbstrAttributeName );
HRESULT get_autoStart( VARIANT_BOOL* pfAutoStart );
HRESULT get_balance( long* plBalance );
HRESULT get_controls( IWMPControls** ppControl );
HRESULT get_count( long* plCount );
HRESULT get_currentItem( IWMPMedia** ppIWMPMedia );
HRESULT get_currentMedia( IWMPMedia** ppMedia );
HRESULT get_currentPlaylist( IWMPPlaylist** ppPL );
HRESULT get_currentPosition( double* pdCurrentPosition );
HRESULT get_currentPositionString( BSTR* pbstrCurrentPosition );
HRESULT get_currentPositionTimecode( BSTR* bstrTimecode );
HRESULT get_defaultAudioLanguage( long* plLangID );
HRESULT get_duration( double* pDuration );
HRESULT get_durationString( BSTR* pbstrDuration );
HRESULT get_enableContextMenu( VARIANT_BOOL* pbEnableContextMenu );
HRESULT get_enableErrorDialogs( VARIANT_BOOL* pfEnableErrorDialogs );
HRESULT get_enabled( VARIANT_BOOL* pbEnabled );
HRESULT get_error( IWMPError** ppError );
HRESULT get_errorCount( long* plNumErrors );
HRESULT get_errorDescription( BSTR* pbstrDescription );
HRESULT get_fullScreen( VARIANT_BOOL* pbFullScreen );
HRESULT get_imageSourceHeight( long* pHeight );
HRESULT get_imageSourceWidth( long* pWidth );
HRESULT get_isAvailable( BSTR bstrItem, VARIANT_BOOL* pIsAvailable );
HRESULT get_isIdentical( IWMPMedia* pIWMPMedia, VARIANT_BOOL* pvbool );
HRESULT get_item( long dwIndex, IWMPErrorItem** ppErrorItem );
HRESULT get_mute( VARIANT_BOOL* pfMute );
HRESULT get_openState( WMPOpenState* pwmpos );
HRESULT get_playState( WMPPlayState* pwmpps );
HRESULT get_settings( IWMPSettings** ppSettings );
HRESULT get_sourceURL( BSTR* pbstrSourceURL );
HRESULT get_uiMode( BSTR* pbstrMode );
HRESULT get_versionInfo( BSTR* pbstrVersionInfo );
HRESULT get_volume( long* plVolume );
HRESULT put_URL( BSTR bstrURL );
HRESULT put_autoStart( VARIANT_BOOL fAutoStart );
HRESULT put_balance( long lBalance );
HRESULT put_currentItem( IWMPMedia* pIWMPMedia );
HRESULT put_currentMedia( IWMPMedia* pMedia );
HRESULT put_currentPosition( double dCurrentPosition );
HRESULT put_enableContextMenu( VARIANT_BOOL bEnableContextMenu );
HRESULT put_enableErrorDialogs( VARIANT_BOOL fEnableErrorDialogs );
HRESULT put_enabled( VARIANT_BOOL bEnabled );
HRESULT put_fullScreen( VARIANT_BOOL bFullScreen );
HRESULT put_mute( VARIANT_BOOL fMute );
HRESULT put_uiMode( BSTR bstrMode );
HRESULT put_volume( long lVolume );

#endif /* _WMP_ */
