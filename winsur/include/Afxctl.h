/* Afxctl.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 0 declarations, 0 outlines, 0 base types, 0 extra macros, 132 extra decls
 */
#ifndef _AFXCTL_
#define _AFXCTL_


/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
OLE_COLOR AmbientBackColor( );
LPFONTDISP AmbientFont( );
OLE_COLOR AmbientForeColor( );
BOOL AmbientShowGrabHandles( );
BOOL AmbientShowHatching( );
short AmbientTextAlign( );
BOOL AmbientUIDead( );
BOOL AmbientUserMode( );
void BoundPropertyChanged( DISPID dispid );
BOOL BoundPropertyRequestEdit( DISPID dispid )
COlePropertyPage( UINT idDlg, UINT idCaption );
BOOL ClipCaretRect( LPRECT lpRect );
void ControlInfoChanged( );
void DoClick( );
void DoSuperclassPaint( CDC* pDC, const CRect& rcBounds );
void DrawContent( CDC* pDC, CRect& rc );
void EnableSimpleFrame( );
BOOL ExchangeExtent( CPropExchange* pPX );
void ExchangeStockProps( CPropExchange* pPX );
void FireClick( );
void FireDblClick( );
void FireError( SCODE scode, LPCTSTR lpszDescription, UINT nHelpID = 0 );
void FireKeyDown( USHORT* pnChar, short nShiftState );
void FireKeyPress( USHORT* pnChar );
void FireKeyUp( USHORT* pnChar, short nShiftState );
void FireMouseDown( short nButton, short nShiftState, OLE_XPOS_PIXELS x, OLE_YPOS_PIXEL y );
void FireMouseMove( short nButton, short nShiftState, OLE_XPOS_PIXELS x, OLE_YPOS_PIXELS y );
void FireMouseUp( short nButton, short nShiftState, OLE_XPOS_PIXELS x, OLE_YPOS_PIXELS y );
void FireReadyStateChange( );
short GetAppearance ( );
OLE_COLOR GetBackColor( );
short GetBorderStyle( );
void GetControlSize( int* pcx, int* pcy );
BOOL GetControlStatus( UINT nID );
BOOL GetEnabled( );
LPFONTDISP GetFont( );
LPFONTDISP GetFontDispatch( );
HFONT GetFontHandle( );
void GetFontTextMetrics( LPTEXTMETRIC lptm, CFontHolder& fontHolder );
OLE_COLOR GetForeColor( );
OLE_HANDLE GetHwnd( );
void GetNotSupported( );
LPPROPERTYPAGESITE GetPageSite( );
long GetReadyState( );
BOOL GetRectInContainer( LPRECT lpRect );
void GetStockTextMetrics( LPTEXTMETRIC lptm );
void IgnoreApply( UINT nID );
void InitializeIIDs( const IID* piidPrimary, const IID* piidEvents );
void InternalSetReadyState( long lNewReadyState );
BOOL IsConvertingVBX( );
BOOL IsOptimizedDraw( );
void PostModalDialog( );
void PreModalDialog( );
void RecreateControlWindow( );
void ResetStockProps( );
void ResetVersion( DWORD dwVersionDefault );
void SerializeExtent( CArchive& ar );
void SerializeStockProps( CArchive& ar );
void SetAppearance ( short sAppearance );
void SetBackColor( OLE_COLOR dwBackColor );
void SetBorderStyle( short sBorderStyle );
BOOL SetControlSize( int cx, int cy );
BOOL SetControlStatus( UINT nID, BOOL IsDirty );
void SetDialogResource( HGLOBAL hDialog );
void SetEnabled( BOOL bEnabled );
void SetForeColor( OLE_COLOR dwForeColor );
void SetInitialSize( int cx, int cy );
void SetNotPermitted( );
void SetNotSupported( );
void SetPageName( LPCTSTR lpszPageName );
void ThrowError( SCODE sc, UINT nDescriptionID, UINT nHelpID = -1 );
BOOL WillAmbientsBeValidDuringLoad( );

#endif /* _AFXCTL_ */
