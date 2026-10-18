/* Dvdnav.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 0 declarations, 4 outlines, 0 base types, 0 extra macros, 33 extra decls
 */
#ifndef _DVDNAV_
#define _DVDNAV_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* DVDUserGOPData  [struct; ce-only] */

/* EDDVDPlaybackState  [enum; ce-only] */

/* EDVDNavException  [enum; ce-only] */

/* EDVDSParamEvent  [enum; ce-only] */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT BackwardScan(double dblSpeed);
HRESULT ButonSelectAndActivate(BYTE byteButtonNumber);
HRESULT ButtonActivate(void);
HRESULT ButtonSelect(BYTE byteDirection);
HRESULT ButtonSelectDirect(BYTE byteButtonNumber);
HRESULT ChangeAngel(BYTE byteAngleNumber);
HRESULT ChangeAudioStream(BYTE byteStreamNumber);
HRESULT ChangeSubPictureStream(BYTE streamNumber, BOOL bDisplayFlag);
HRESULT ForwardScan(double dblSpeed);
HRESULT ManuLanguageSelect(USHORT uhLanguageCode);
HRESULT MenuCall(BYTE byteMenu_ID);
HRESULT OnDiskReadError(DWORD osCode);
HRESULT ParentalCountrySelect(USHORT uhCountryCode);
HRESULT ParentalLevelSelect(BYTE byteLevel);
HRESULT PartPlay(BYTE byteTitleNumber, USHORT uhPartOfTheTitle);
HRESULT ProgramSearch(BYTE byteProgramType);
HRESULT Resume(void);
HRESULT StillOff(void);
HRESULT TimePlay(USHORT uhPartOfTheTitle);
HRESULT TimeSearch(UINT uiBCDTime);
HRESULT TitlePlay(BYTE byteTitleNumber);
HRESULT UseRenderer(WCHAR* pszRendererName);
HRESULT VideoPresentationModeChange(USHORT uhVideoMode);

#endif /* _DVDNAV_ */
