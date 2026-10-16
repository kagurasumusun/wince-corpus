/* Dvdata.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 48 constants, 16 declarations, 0 outlines, 0 base types, 0 extra macros, 99 extra decls
 */
#ifndef _DVDATA_
#define _DVDATA_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define DVD_CELL_CMD 2
#define DVD_MENU_ANGLE 4
#define DVD_MENU_AUDIO 3
#define DVD_MENU_PTT 5
#define DVD_MENU_ROOT 1
#define DVD_MENU_SUBPICTURE 2
#define DVD_MENU_TITLE 0
#define DVD_NAVSTATREQ_VOLUME_BIT 1
#define DVD_POST_CMD 1
#define DVD_PRE_CMD 0
#define DVD_PROGRAM_NEXT 1
#define DVD_PROGRAM_PREVIOUS 0
#define DVD_PROGRAM_TOP 2
#define DVD_SCANCAP_BACKWARD_SCAN 0x8
#define DVD_SCANCAP_BACKWARD_SINGLE 0x20
#define DVD_SCANCAP_BACKWARD_SLOW 0x10
#define DVD_SCANCAP_FORWARD_SCAN 0x1
#define DVD_SCANCAP_FORWARD_SINGLE 0x4
#define DVD_SCANCAP_FORWARD_SLOW 0x2
#define DVD_SELECT_LEFT 3
#define DVD_SELECT_LOWER 2
#define DVD_SELECT_RIGHT 1
#define DVD_SELECT_UPPER 0
#define DVD_SYSTEM_SPACE_BIT 1
#define GoUp_PGCN 2
#define Next_PGCN 0
#define Previous_PGCN 1
#define SPRM_AGLN 3
#define SPRM_ASTN 1
#define SPRM_CTY_CD 12
#define SPRM_HL_BTNN 8
#define SPRM_INI_LCD_AST 16
#define SPRM_INI_LCD_EXT_AST 17
#define SPRM_INI_LCD_EXT_SPST 19
#define SPRM_INI_LCD_SPST 18
#define SPRM_M_LCD 0
#define SPRM_NV_TMR 9
#define SPRM_NV_TMR_PGCN 10
#define SPRM_P_AMXMD 11
#define SPRM_P_CFG_AUDIO 15
#define SPRM_P_CFG_VIDEO 14
#define SPRM_PTL_LVL 13
#define SPRM_PTTN 7
#define SPRM_REGION 20
#define SPRM_SPSTN 2
#define SPRM_TT_PGCN 6
#define SPRM_TTN 4
#define SPRM_VTS_TTN 5

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct _structDVD_AUDIO_STREAM_ATTR {UINT16attr;UINT16reserved[3];} DVD_AUDIO_STREAM_ATTR, *PDVD_AUDIO_STREAM_ATTR;
typedef struct {UINT16 vob_id;UINT8 c_idn;UINT32 start;UINT32 end;} DVD_CELL_PIECE, *PDVD_CELL_PIECE;
typedef struct _structDVD_SUBPICTURE_STREAM_ATTR {UINT16modetype;UINT16specificCode;UINT16extension;} DVD_SUBPICTURE_STREAM_ATTR, *PDVD_SUBPICTURE_STREAM_ATTR;
typedef struct _structDVD_TEXT_ITEM {UINT8* pTextData;UINT8 itemCode;} DVD_TEXT_ITEM, *PDVD_TEXT_ITEM;
typedef struct _structDVD_TEXT_LANGUAGE_UNIT {UINT16 tdlc;UINT8 charset;} DVD_TEXT_LANGUAGE_UNIT, *PDVD_TEXT_LANGUAGE_UNIT;

/* function */
HRESULT ConvertParentalLevelToID( UINT8 level, UINT16 countryCode, UINT16 vtsn, UINT16* parentalID );
HRESULT EnumerateTextLanguageUnits( IEnumDVD_TEXT_LANGUAGE_UNIT** ppEnum );
HRESULT EnumerateTitleTextItems( DVD_TEXT_LANGUAGE_UNIT* pTLU, UINT8 title, IEnumDVD_TEXT_ITEM** ppEnum );
HRESULT GetAdjacentButton( UINT8 byteButton, UINT8 byteDir, UINT8* pbyteButtonNumber );
HRESULT GetAudioAttr( UINT nStreamNo, DVD_AUDIO_STREAM_ATTR* pAudioAttr );
HRESULT GetAudioCount( UINT8* pStreamCount );
HRESULT GetAudioGapInfo( UINT8 streamNo, UINT8 gapNo, UINT32* pMpegStart, UINT32* pMpegEnd );
HRESULT GetAudioMultichannelUseAttr( UINT8 nStreamNo, DVD_AUDIO_MU_ATTR* pMuse );
HRESULT GetAudioStreamSelector( UINT8 streamN, UINT16* pSelector );
HRESULT GetBlockAddress( UINT32* pLBN );
HRESULT GetButtonColorInfo( UINT8 byteButtonColor, UINT32* pSelectionColors, UINT32* pActionColors );
HRESULT GetButtonCommand( UINT8 byteButtonNumber, DVD_NAV_CMD* pCmd );
HRESULT GetButtonCount( UINT8* pbyteCount );
HRESULT GetButtonMode( UINT16* pMode );
HRESULT GetButtonOffset( UINT8* pByteOffset );
HRESULT GetButtonPositionInfo( UINT8 byteButton, UINT8* pbyteButtonColor, UINT8* pbyteActionMode, DVD_RECT* pArea );
HRESULT GetC_IDN( UINT8* pC_IDN );
HRESULT GetCategory( UINT16* pCat );
HRESULT GetCellPieceEnumerator( IEnumDVD_CELL_PIECE** ppEnumPieces UINT32* pPieceCount );
HRESULT GetCellPlaybackInfo( UINT8 cn, DVD_CELL_PLAYBACK* pInfo );
HRESULT GetCellPosition( UINT8 cn, UINT16* pVOB_ID, UINT8* pC_IDN );
HRESULT GetCellRelativeStartTime( UINT32* pBCDTime );
HRESULT GetContents( UINT32* pContents );
HRESULT GetControlInfo( IDVDStreaControlInfo** ppStream );
HRESULT GetDataSearchInfo( IDVDDataSearchInfo** ppDSI );
HRESULT GetDefaultActionButton( UINT8* pActionButton );
HRESULT GetDomain( UINT16 languageCode, IDVDDomain** ppDomain, UINT8* pExistFlag );
HRESULT GetEndSequencePTM( UINT32* pMpegTime );
HRESULT GetFirstPlay( IDVDDomain* ppDomain );
HRESULT GetHLIStatus( UINT16* pStatus );
HRESULT GetHighlightInfo( IDVDHighlightInfo** ppHLI );
HRESULT GetInterleavedUnitEndAddress( UINT32* pRLBN );
HRESULT GetLink( EPGCLinkType eType, UINT16* pgcn );
HRESULT GetNavCommand( ENavCmdArea area, UINT16 commandN, DVD_NAV_CMD* pCmd );
HRESULT GetNavCommandsCount( ENavCmdArea eArea, UINT16* pCount );
HRESULT GetNextInterleavedUnit( UINT32* pRLBN, UINT16* pLBSize );
HRESULT GetNonSeamlessAngleChangeAddress( UINT8 angle, UINT32* pRLBN );
HRESULT GetPGC( UINT16 pgcn, IDVDProgamChain* pPGC, UINT32* pPGCCat );
HRESULT GetPGCN ( UINT16* pPGCN );
HRESULT GetPOSCode( DVD_POS_CODE* pPOSCode );
HRESULT GetPTMs( UINT32* puiStart, UINT32* puiEnd, UINT32* puiSelectionEnd );
HRESULT GetPlaybackMode( EPGCPlaybackMode* pMode, UINT8* pRepeatCount, UINT8* pStillTime );
HRESULT GetPlaybackTime( UINT32* pbcdTime );
HRESULT GetPresentationTimes( UINT32* pMpegStart, UINT32* pMpegEnd );
HRESULT GetProgramEntryCell( UINT16 pgno, UINT8* pEntryCN );
HRESULT GetProviderID( DVD_PROVIDER_ID* pProvider );
HRESULT GetRecordingAudioInfo( UINT8 stream, DVD_ISRC* pAudio );
HRESULT GetRecordingSubpictureGroup( UINT8* pSelector );
HRESULT GetRecordingSubpictureInfo( UINT8 bin, DVD_ISRC* pSubInfo );
HRESULT GetRecordingVideoInfo( DVD_ISRC* pVideo );
HRESULT GetRefPictureAddress( UINT8 refNo, UINT32* pRLBN );
HRESULT GetSCRBase( UINT32* pSCR );
HRESULT GetSeamlessCategory( UINT16* pCat );
HRESULT GetSearmlessAngleChangeAddress( UINT8 angle, UINT32* pRLBN, UINT32* pLBSize );
HRESULT GetSpace( UINT8* pSpaceSet );
HRESULT GetSpecVersion( UINT16* pVersion );
HRESULT GetStreamAttributes( IDVDStreamAttributes** ppAttr );
HRESULT GetStreamingInfo( IDVDStreamControlInfo** pControlInfo );
HRESULT GetSubpictureAttr( UINT8 nStreamNo, DVD_SUBPICTURE_STREAM_ATTR* pSPAttr );
HRESULT GetSubpictureCount( UINT8* pStreamCount );
HRESULT GetSubpicturePalette( UINT32* pBuf );
HRESULT GetSubpictureStreamSelector( UINT8 streamN, UINT32* pSPSel );
HRESULT GetSyncAudioAddress( UINT8 streamN, UINT16* pRLBN );
HRESULT GetSyncSPAddress( UINT8 streamN, UINT32* pRLBN );
HRESULT GetTableHeader( UINT8* pTMU, UINT16* pnEntries );
HRESULT GetTextDataManager( IDVDTextManager** ppTxtMgr );
HRESULT GetTextItemsCount( DVD_TEXT_LANGUAGE_UNIT* pTLU, UINT8 title, UINT16* pCount );
HRESULT GetTimeMap( UINT16 pgcn, IDVDTimeMap** ppTimeMap );
HRESULT GetTitlePart( UINT16 ttu, UINT16 ptt, UINT16* pPgcn, UINT8* pPgn );
HRESULT GetTitleSet( UINT16* zbVtsn, IDVDTitleSet** ppTitleSet );
HRESULT GetTitleSetAttributes( UINT16 vtsn, UINT32** pVTSCategory, IDVDStreamAttributes** ppVideoAttr );
HRESULT GetTitleUnitInfo( UINT16* ttu, DVD_TITLE_SET_INFO* pTUInfo );
HRESULT GetTotalTitleUnitCount( UINT16* pTtuCount );
HRESULT GetTotalVOBUnit( UINT32* pVobus );
HRESULT GetTotalVideoObjects( UINT16* pTotalVobs, UINT32* pCellPieceCount );
HRESULT GetUnitEndAddress( UINT32* pRLBN );
HRESULT GetUnitStepAddress( UINT8 dir, INT16 stepIndex, UINT32* pAddress );
HRESULT GetUserOperationControlMask( UINT32* pmask );
HRESULT GetVOBFileID( UINT16* pFileID );
HRESULT GetVOBTablePtr( UINT32** ppVOBUAddressArray );
HRESULT GetVOBUAddress( UINT16 nEntryIndex, UINT32* pVobuRlbn );
HRESULT GetVOB_ID( UINT16* pVOB_ID );
HRESULT GetVTSN( UINT16* pVTSN );
HRESULT GetVideoAttr( UINT16* pVideoAttr );
HRESULT GetVideoTitleSetsCount( UINT16* pCount );
HRESULT GetVolumeSetInfo( UINT16* pVolumeSetSize UINT16* pVolumeNo UINT8* pSide );
HRESULT InitData( IDVDROM* pDisk );
HRESULT NotifyNewPCI();
HRESULT OpenVOB( UINT16 hVOB );
HRESULT ReadVOB( UINT16 hVOB, INT8* buf, UINT32 startBlock, UINT32 endBlock );
HRESULT ReaderLock(void);
HRESULT ReaderUnlock(void);
HRESULT ReleaseMem( HRESULT* bufptr );
HRESULT SetNavigationPack( UINT8* pPack );

#endif /* _DVDATA_ */
