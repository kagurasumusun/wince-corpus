/* wmp.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 93 declarations, 0 outlines, 0 base types, 0 extra macros, 67 extra decls
 */
#ifndef _WMP_
#define _WMP_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* IWMPControls3::get_currentPositionTimecode  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT get_currentPositionTimecode( BSTR* bstrTimecode );

/* IWMPControls3::getLanguageName  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT getLanguageName(
 long lLangID,
 BSTR* pbstrLangName
);

/* IWMPControls3::put_currentPositionTimecode  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT get_currentPositionTimecode( BSTR* bstrTimecode );

/* IWMPControls::fastForward  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT fastForward();

/* IWMPControls::fastReverse  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT fastReverse();

/* IWMPControls::get_currentItem  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT get_currentItem( IWMPMedia** ppIWMPMedia );

/* IWMPControls::get_currentPosition  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT get_currentPosition( double* pdCurrentPosition );

/* IWMPControls::get_currentPositionString  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT get_currentPositionString( BSTR* pbstrCurrentPosition );

/* IWMPControls::get_isAvailable  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT get_isAvailable( BSTR bstrItem, VARIANT_BOOL* pIsAvailable );

/* IWMPControls::next  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT next();

/* IWMPControls::pause  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT pause();

/* IWMPControls::play  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT play();

/* IWMPControls::playItem  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT playItem( IWMPMedia* pIWMPMedia );

/* IWMPControls::previous  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT previous();

/* IWMPControls::put_currentItem  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT put_currentItem( IWMPMedia* pIWMPMedia );

/* IWMPControls::put_currentPosition  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT put_currentPosition( double dCurrentPosition );

/* IWMPControls::stop  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT stop();

/* IWMPCore::close  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT close();

/* IWMPCore::get_controls  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT get_controls( IWMPControls** ppControl );

/* IWMPCore::get_currentMedia  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT get_currentMedia( IWMPMedia** ppMedia );

/* IWMPCore::get_currentPlaylist  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT get_currentPlaylist( IWMPPlaylist** ppPL );

/* IWMPCore::get_error  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT get_error( IWMPError** ppError );

/* IWMPCore::get_openState  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT get_openState( WMPOpenState* pwmpos );

/* IWMPCore::get_playState  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT get_playState( WMPPlayState* pwmpps );

/* IWMPCore::get_settings  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT get_settings( IWMPSettings** ppSettings );

/* IWMPCore::get_status  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT get_status( BSTR* pbstrStatus );

/* IWMPCore::get_URL  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT get_URL( BSTR* pbstrURL );

/* IWMPCore::get_versionInfo  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT get_versionInfo( BSTR* pbstrVersionInfo );

/* IWMPCore::put_currentMedia  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT put_currentMedia( IWMPMedia* pMedia );

/* IWMPCore::put_URL  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT put_URL( BSTR bstrURL );

/* IWMPError::clearErrorQueue  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT clearErrorQueue();

/* IWMPError::get_errorCount  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT get_errorCount( long* plNumErrors );

/* IWMPError::get_item  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT get_item( long dwIndex, IWMPErrorItem** ppErrorItem );

/* IWMPErrorItem::get_errorCode  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT get_errorCode( long* phr );

/* IWMPErrorItem::get_errorDescription  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT get_errorDescription( BSTR* pbstrDescription );

/* IWMPEvents::AudioLanguageChange  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
void AudioLanguageChange( long LangID );

/* IWMPEvents::Buffering  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
void Buffering( VARIANT_BOOL Start );

/* IWMPEvents::Click  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
void Click( short nButton, short nShiftState, long fX, long fY );

/* IWMPEvents::CurrentItemChange  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
void CurrentItemChange( IDispatch* pdispMedia );

/* IWMPEvents::CurrentPlaylistChange  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
void CurrentPlaylistChange( WMPPlaylistChangeEventType change );

/* IWMPEvents::Disconnect  [function; shared; CE 6.0..699; entity-headers] */
void Disconnect( long Result );

/* IWMPEvents::DoubleClick  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
void DoubleClick( short nButton, short nShiftState, long fX, long fY );

/* IWMPEvents::EndOfStream  [function; shared; CE 6.0..699; entity-headers] */
void EndOfStream( long Result );

/* IWMPEvents::Error  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
void Error();

/* IWMPEvents::KeyDown  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
void KeyDown( short nKeyCode, short nShiftState );

/* IWMPEvents::KeyPress  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
void KeyPress( short nKeyAscii );

/* IWMPEvents::KeyUp  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
void KeyUp( short nKeyCode, short nShiftState );

/* IWMPEvents::MarkerHit  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
void MarkerHit( long MarkerNum );

/* IWMPEvents::MouseDown  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
void MouseDown( short nButton, short nShiftState, long fX, long fY );

/* IWMPEvents::MouseMove  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
void MouseMove( short nButton, short nShiftState, long fX, long fY );

/* IWMPEvents::MouseUp  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
void MouseUp(
 short nButton,
 short nShiftState,
 long fX,
 long fY
);

/* IWMPEvents::NewStream  [function; shared; CE 6.0..699; entity-headers] */
void NewStream();

/* IWMPEvents::OpenStateChange  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
void OpenStateChange( long NewState );

/* IWMPEvents::PlayStateChange  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
void PlayStateChange( long NewState );

/* IWMPEvents::PositionChange  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
void PositionChange( double oldPosition, double newPosition );

/* IWMPEvents::StatusChange  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
void StatusChange();

/* IWMPMedia::get_attributeCount  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT get_attributeCount( long* plCount );

/* IWMPMedia::get_duration  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT get_duration( double* pDuration );

/* IWMPMedia::get_durationString  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT get_durationString( BSTR* pbstrDuration );

/* IWMPMedia::get_imageSourceHeight  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT get_imageSourceHeight( long* pHeight );

/* IWMPMedia::get_imageSourceWidth  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT get_imageSourceWidth( long* pWidth );

/* IWMPMedia::get_isIdentical  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT get_isIdentical( IWMPMedia* pIWMPMedia, VARIANT_BOOL* pvbool );

/* IWMPMedia::get_name  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT get_name( BSTR* pbstrName );

/* IWMPMedia::get_sourceURL  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT get_sourceURL( BSTR* pbstrSourceURL );

/* IWMPMedia::getAttributeName  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT getAttributeName( long lIndex, BSTR* pbstrItemName );

/* IWMPMedia::getItemInfo  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT getItemInfo(
 BSTR bstrItemName,
 BSTR* pbstrVal
);

/* IWMPPlayer::get_enableContextMenu  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT get_enableContextMenu( VARIANT_BOOL* pbEnableContextMenu );

/* IWMPPlayer::get_enabled  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT get_enabled( VARIANT_BOOL* pbEnabled );

/* IWMPPlayer::get_fullScreen  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT get_fullScreen( VARIANT_BOOL* pbFullScreen );

/* IWMPPlayer::get_uiMode  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT get_uiMode( BSTR* pbstrMode );

/* IWMPPlayer::put_enableContextMenu  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT put_enableContextMenu( VARIANT_BOOL bEnableContextMenu );

/* IWMPPlayer::put_enabled  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT put_enabled( VARIANT_BOOL bEnabled );

/* IWMPPlayer::put_fullScreen  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT put_fullScreen( VARIANT_BOOL bFullScreen );

/* IWMPPlayer::put_uiMode  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT put_uiMode( BSTR bstrMode );

/* IWMPPlaylist::get_attributeCount  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT get_attributeCount( long* plCount );

/* IWMPPlaylist::get_attributeName  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT get_attributeName( long lIndex, BSTR* pbstrAttributeName );

/* IWMPPlaylist::get_count  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT get_count( long* plCount );

/* IWMPPlaylist::get_isIdentical  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT get_isIdentical( IWMPPlaylist* pIWMPPlaylist, VARIANT_BOOL* pvbool );

/* IWMPPlaylist::get_item  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT get_item( long lIndex, IWMPMedia** ppIWMPMedia );

/* IWMPPlaylist::get_name  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT get_name( BSTR* pbstrName );

/* IWMPPlaylist::getItemInfo  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT getItemInfo( BSTR bstrName, BSTR* pbstrVal );

/* IWMPSettings2::get_defaultAudioLanguage  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT get_defaultAudioLanguage( long* plLangID );

/* IWMPSettings::get_autoStart  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT get_autoStart( VARIANT_BOOL* pfAutoStart );

/* IWMPSettings::get_balance  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT get_balance( long* plBalance );

/* IWMPSettings::get_enableErrorDialogs  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT get_enableErrorDialogs( VARIANT_BOOL* pfEnableErrorDialogs );

/* IWMPSettings::get_isAvailable  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT get_isAvailable( BSTR bstrItem, VARIANT_BOOL* pIsAvailable );

/* IWMPSettings::get_mute  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT get_mute( VARIANT_BOOL* pfMute );

/* IWMPSettings::get_volume  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT get_volume( long* plVolume );

/* IWMPSettings::put_autoStart  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT put_autoStart( VARIANT_BOOL fAutoStart );

/* IWMPSettings::put_balance  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT put_balance( long lBalance );

/* IWMPSettings::put_enableErrorDialogs  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT put_enableErrorDialogs( VARIANT_BOOL fEnableErrorDialogs );

/* IWMPSettings::put_mute  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT put_mute( VARIANT_BOOL fMute );

/* IWMPSettings::put_volume  [function; shared; CE 6.0..699; Wmp.dll; entity-headers; lib:win32-reference] */
HRESULT put_volume( long lVolume );
#endif /* _WIN32_WCE */

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
