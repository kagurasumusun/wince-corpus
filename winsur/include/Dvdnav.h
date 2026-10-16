/* Dvdnav.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 48 declarations, 0 outlines, 0 base types, 0 extra macros, 38 extra decls
 */
#ifndef _DVDNAV_
#define _DVDNAV_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* DVDUserGOPData  [struct; ce-only; CE 4.0..699] */
typedef struct {
 UINT8 userData[9+64*3];
} DVDUserGOPData;

/* EDDVDPlaybackState  [enum; ce-only; CE 4.0..699] */
typedef enum {
 DVD_STOPPED,
 DVD_PAUSED,
 DVD_STILLED,
 DVD_NORMAL_PLAY,
 DVD_FORWARD_SCAN,
 DVD_FORWARD_SLOW,
 DVD_FORWARD_SINGLE,
 DVD_BACKWARD_SCAN,
 DVD_BACKWARD_SLOW,
 DVD_BACKWARD_SINGLE
} EDDVDPlaybackState;

/* EDVDNavException  [enum; ce-only; CE 4.0..699] */
typedef enum {
 InsufficientParentalLevel,
 FatalNavigationError
} EDVDNavException;
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* EDVDSParamEvent  [enum; ce-only; CE 5.0..699] */
typedef enum {
 InitialAccess,
 TitlePartTimePlay,
 MenuCallToVmgmDom,
 MenuCallToVtsmDom
} EDVDSParamEvent;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* IDVDNavigationManager::ButtonSelectDirect  [function; ce-only; CE 4.0..699; Ddvdids.lib] */
HRESULT ButtonSelectDirect(
 BYTE byteButtonNumber
);

/* IDVDNavigationManager::GetGParameter  [function; ce-only; CE 4.0..699; Ddvdids.lib] */
HRESULT GetGParameter(
 UINT8 no,
 UINT16* pValue,
 BOOL* pbCounterMode
);

/* IDVDNavigationManager::GetPlaybackState  [function; ce-only; CE 4.0..699; Ddvdids.lib] */
HRESULT GetPlaybackState(
 EDDVDPlaybackState* peState
);

/* IDVDNavigationManager::GetScanCaps  [function; ce-only; CE 4.0..699; Ddvdids.lib] */
HRESULT GetScanCaps(
 UINT16* pMask
);

/* IDVDNavigationManager::GetSParameter  [function; ce-only; CE 4.0..699; Ddvdids.lib] */
HRESULT GetSParameter(
 UINT8 no,
 UINT16* pValue
);

/* IDVDNavigationManager::SetSParameter  [function; ce-only; CE 4.0..699; Ddvdids.lib] */
HRESULT SetSParameter(
 UINT8 no,
 UINT16 wValue
);

/* IDVDNavigationManager::SetVolume  [function; ce-only; CE 4.0..699; Ddvdids.lib] */
HRESULT SetVolume(
 IDVDVideoVolume* pVolume
);

/* IDVDNavigationManger::UseRenderer  [function; ce-only; CE 4.0..699; Ddvdids.lib] */
HRESULT UseRenderer(
 WCHAR* pszRendererName
);

/* IDVDNavigatorSink::ConfirmTemporaryParentalLevel  [function; ce-only; CE 4.0..699; Ddvdids.lib] */
HRESULT ConfirmTemporaryParentalLevel(
 UINT8 requestedLevel
);

/* IDVDNavigatorSink::OnDiskReadError  [function; ce-only; CE 4.0..699; Ddvdids.lib] */
HRESULT OnDiskReadError(
 DWORD osCode
);

/* IDVDNavigatorSink::OnGOPUserData  [function; ce-only; CE 4.0..699; Ddvdids.lib] */
HRESULT OnGOPUserData(
 DVDUserGOPData* pData
);

/* IDVDNavigatorSink::OnGPRMChange  [function; ce-only; CE 4.0..699; Ddvdids.lib] */
HRESULT OnGPRMChange(
 UINT8 no,
 UINT16 wValue,
 BOOL bCounter
);

/* IDVDNavigatorSink::OnNavigationException  [function; ce-only; CE 4.0..699; Ddvdids.lib] */
HRESULT OnNavigationException(
 EDVDNavException excCode
);

/* IDVDNavigatorSink::OnNewCell  [function; ce-only; CE 4.0..699; Ddvdids.lib] */
HRESULT OnNewCell(
 UINT8 cellNo
);

/* IDVDNavigatorSink::OnNewProgram  [function; ce-only; CE 4.0..699; Ddvdids.lib] */
HRESULT OnNewProgram(
 UINT8 progNo
);

/* IDVDNavigatorSink::OnNewProgramChain  [function; ce-only; CE 4.0..699; Ddvdids.lib] */
HRESULT OnNewProgramChain(
 IDVDProgramChain* pChain
);

/* IDVDNavigatorSink::OnPlaybackStateChange  [function; ce-only; CE 4.0..699; Ddvdids.lib] */
HRESULT OnPlaybackStateChange(
 EDDVDPlaybackState eState
);

/* IDVDNavigatorSink::OnSPRMChange  [function; ce-only; CE 4.0..699; Ddvdids.lib] */
HRESULT OnSPRMChange(
 UINT8 no,
 UINT16 wValue
);

/* IDVDNavigatorSink::OnUOPChange  [function; ce-only; CE 4.0..699; Ddvdids.lib] */
HRESULT OnUOPChange(
 UINT32 newUOPMask
);

/* IDVDUserOperation::BackwardScan  [function; ce-only; CE 4.0..699; Ddvdids.lib] */
HRESULT BackwardScan(
 double dblSpeed
);

/* IDVDUserOperation::ButtonActivate  [function; ce-only; CE 4.0..699; Ddvdids.lib] */
HRESULT ButtonActivate(void);

/* IDVDUserOperation::ButtonSelect  [function; ce-only; CE 4.0..699; Ddvdids.lib] */
HRESULT ButtonSelect(
 BYTE byteDirection
);

/* IDVDUserOperation::ButtonSelectAndActivate  [function; ce-only; CE 4.0..699; Ddvdids.lib] */
HRESULT ButonSelectAndActivate(
 BYTE byteButtonNumber
);

/* IDVDUserOperation::ChangeAngle  [function; ce-only; CE 4.0..699; Ddvdids.lib] */
HRESULT ChangeAngel(
 BYTE byteAngleNumber 
);

/* IDVDUserOperation::ChangeAudioStream  [function; ce-only; CE 4.0..699; Ddvdids.lib] */
HRESULT ChangeAudioStream(
 BYTE byteStreamNumber
);

/* IDVDUserOperation::ChangeSubPictureStream  [function; ce-only; CE 4.0..699; Ddvdids.lib] */
HRESULT ChangeSubPictureStream(
 BYTE streamNumber,
 BOOL bDisplayFlag
);

/* IDVDUserOperation::ForwardScan  [function; ce-only; CE 4.0..699; Ddvdids.lib] */
HRESULT ForwardScan(
 double dblSpeed
);

/* IDVDUserOperation::GoUp  [function; ce-only; CE 4.0..699; Ddvdids.lib] */
HRESULT ForwardScan(void);

/* IDVDUserOperation::MenuCall  [function; ce-only; CE 4.0..699; Ddvdids.lib] */
HRESULT MenuCall(
 BYTE byteMenu_ID
);

/* IDVDUserOperation::MenuLanguageSelect  [function; ce-only; CE 4.0..699; Ddvdids.lib] */
HRESULT ManuLanguageSelect(
 USHORT uhLanguageCode 
);

/* IDVDUserOperation::ParentalCountrySelect  [function; ce-only; CE 4.0..699; Ddvdids.lib] */
HRESULT ParentalCountrySelect(
 USHORT uhCountryCode 
);

/* IDVDUserOperation::ParentalLevelSelect  [function; ce-only; CE 4.0..699; Ddvdids.lib] */
HRESULT ParentalLevelSelect(
 BYTE byteLevel
);

/* IDVDUserOperation::PartPlay  [function; ce-only; CE 4.0..699; Ddvdids.lib] */
HRESULT PartPlay(
 BYTE byteTitleNumber,
 USHORT uhPartOfTheTitle
);

/* IDVDUserOperation::Pause  [function; ce-only; CE 4.0..699; Ddvdids.lib] */
HRESULT Pause(
 BOOL bOnOff
);

/* IDVDUserOperation::ProgramSearch  [function; ce-only; CE 4.0..699; Ddvdids.lib] */
HRESULT ProgramSearch(
 BYTE byteProgramType
);

/* IDVDUserOperation::PTTSearch  [function; ce-only; CE 4.0..699; Ddvdids.lib] */
HRESULT TimePlay(
 USHORT uhPartOfTheTitle 
);

/* IDVDUserOperation::Resume  [function; ce-only; CE 4.0..699; Ddvdids.lib] */
HRESULT Resume(void);

/* IDVDUserOperation::StillOff  [function; ce-only; CE 4.0..699; Ddvdids.lib] */
HRESULT StillOff(void);

/* IDVDUserOperation::Stop  [function; ce-only; CE 4.0..699; Ddvdids.lib] */
HRESULT Stop(void);

/* IDVDUserOperation::TimePlay  [function; ce-only; CE 4.0..699; Ddvdids.lib] */
HRESULT TimePlay(
 BYTE byteTitleNumber,
 UINT uiBCDTime
);

/* IDVDUserOperation::TimeSearch  [function; ce-only; CE 4.0..699; Ddvdids.lib] */
HRESULT TimeSearch(
 UINT uiBCDTime
);

/* IDVDUserOperation::TitlePlay  [function; ce-only; CE 4.0..699; Ddvdids.lib] */
HRESULT TitlePlay(
 BYTE byteTitleNumber
);

/* IDVDUserOperation::VideoPresentationModeChange  [function; ce-only; CE 4.0..699; Ddvdids.lib] */
HRESULT VideoPresentationModeChange(
 USHORT uhVideoMode
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* IDVDNavigatorSink::InitializeSystemParameters  [function; ce-only; CE 5.0..699; Ddvdids.lib] */
HRESULT InitializeSystemParameters(
 EDVDSParamEvent eventCode
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT BackwardScan( double dblSpeed );
HRESULT ButonSelectAndActivate( BYTE byteButtonNumber );
HRESULT ButtonActivate(void);
HRESULT ButtonSelect( BYTE byteDirection );
HRESULT ButtonSelectDirect( BYTE byteButtonNumber );
HRESULT ChangeAngel( BYTE byteAngleNumber );
HRESULT ChangeAudioStream( BYTE byteStreamNumber );
HRESULT ChangeSubPictureStream( BYTE streamNumber, BOOL bDisplayFlag );
HRESULT ConfirmTemporaryParentalLevel( UINT8 requestedLevel );
HRESULT ForwardScan( double dblSpeed );
HRESULT GetGParameter( UINT8 no, UINT16* pValue, BOOL* pbCounterMode );
HRESULT GetPlaybackState( EDDVDPlaybackState* peState );
HRESULT GetSParameter( UINT8 no, UINT16* pValue );
HRESULT GetScanCaps( UINT16* pMask );
HRESULT InitializeSystemParameters( EDVDSParamEvent eventCode);
HRESULT ManuLanguageSelect( USHORT uhLanguageCode );
HRESULT MenuCall( BYTE byteMenu_ID );
HRESULT OnDiskReadError( DWORD osCode );
HRESULT OnGOPUserData( DVDUserGOPData* pData );
HRESULT OnGPRMChange( UINT8 no, UINT16 wValue, BOOL bCounter );
HRESULT OnNavigationException( EDVDNavException excCode );
HRESULT OnNewCell( UINT8 cellNo );
HRESULT OnNewProgram( UINT8 progNo );
HRESULT OnNewProgramChain( IDVDProgramChain* pChain );
HRESULT OnSPRMChange( UINT8 no, UINT16 wValue );
HRESULT OnUOPChange( UINT32 newUOPMask );
HRESULT ParentalCountrySelect( USHORT uhCountryCode );
HRESULT ParentalLevelSelect( BYTE byteLevel );
HRESULT PartPlay( BYTE byteTitleNumber, USHORT uhPartOfTheTitle );
HRESULT ProgramSearch( BYTE byteProgramType );
HRESULT Resume(void);
HRESULT SetSParameter( UINT8 no, UINT16 wValue );
HRESULT StillOff(void);
HRESULT TimePlay( USHORT uhPartOfTheTitle );
HRESULT TimeSearch( UINT uiBCDTime );
HRESULT TitlePlay( BYTE byteTitleNumber );
HRESULT UseRenderer( WCHAR* pszRendererName );
HRESULT VideoPresentationModeChange( USHORT uhVideoMode );

#endif /* _DVDNAV_ */
