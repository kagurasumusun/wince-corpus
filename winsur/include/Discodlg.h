/* Discodlg.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 0 declarations, 0 outlines, 0 base types, 0 extra macros, 69 extra decls
 */
#ifndef _DISCODLG_
#define _DISCODLG_


/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT CreateVirtualChannels( BSTR channelNames );
HRESULT GetVirtualChannelOptions( BSTR ChanName, LONG* pChanOptions );
HRESULT NotifyRedirectDeviceChange( WPARAM wParam, LPARAM lParam );
VOID OnConfirmClose(  VARIANT_BOOL* pfAllowClose  );
VOID OnConnected();
VOID OnConnecting();
VOID OnDisconnected(  long discReason  );
VOID OnFatalError(  long errorCode  );
VOID OnIdleTimeoutNotification();
VOID OnLoginComplete();
VOID OnRequestContainerMinimize();
VOID OnWarning(  long warningCode  );
HRESULT RequestClose( ControlCloseStatus* pCloseStatus );
HRESULT ResetPassword();
HRESULT SendKeys( LONG numKeys, VARIANT_BOOL* pbArrayKeyUp, LONG* plKeyData );
HRESULT SendOnVirtualChannel( BSTR ChanName, BSTR ChanData );
HRESULT SetVirtualChannelOptions( BSTR chanName, LONG chanOptions );
HRESULT get_AdvancedSettings( IMsTscAdvancedSettings** ppAdvancedSettings );
HRESULT get_AdvancedSettings2( IMsRdpClientAdvancedSettings *ppAdvSettings) ;
HRESULT get_BinaryPassword( BSTR* pBinaryPassword );
HRESULT get_BinarySalt( BSTR* pSalt );
HRESULT get_BitmapPeristence( long* pBitmapPersistence );
HRESULT get_CipherStrength( LONG* pCipherStrength );
get_ColorDepth(  LONG *pcolorDepth );
HRESULT get_Compress( long* pCompress );
HRESULT get_Connected( short* pIsConnected );
HRESULT get_ConnectingText( BSTR* pConnectingText );
HRESULT get_ContainerHandledFullScreen( BOOL* pContainerHandledFullScreen );
HRESULT get_DesktopHeight( LONG* pVal );
HRESULT get_DesktopWidth( LONG* pVal );
HRESULT get_DisableRdpdr( BOOL* pDisableRdpdr );
HRESULT get_DisconnectedText( BSTR* DisconnectedText );
HRESULT get_Domain( BSTR* pDomain );
HRESULT get_ExtendedDisconnectReason( ExtendedDisconnectReasonCode* pExtendedDisconnectReason );
HRESULT get_HorizontalScrollBarVisible( BOOL* pfHScrollVisible );
HRESULT get_KeyboardHookMode( LONG *pkeyboardHookMode );
HRESULT get_PortablePassword( BSTR* pPortablePass );
HRESULT get_PortableSalt( BSTR* pPortableSalt );
HRESULT get_SecuredSettings2( IMsTscSecuredSettings** ppSecuredSettings );
HRESULT get_Server( BSTR* Server );
HRESULT get_StartProgram( BSTR* pStartProgram );
HRESULT get_UserName( BSTR* pUserName );
HRESULT get_VerticalScrollBarVisible( BOOL* pfVScrollVisible );
HRESULT get_WorkDir( BSTR* pWorkDir );
HRESULT get_allowBackgroundInput( long* pallowBackgroundInput );
HRESULT put_AudioRedirectionMode( LONG audioRedirectionMode );
HRESULT put_BinaryPassword( BSTR newPassword );
HRESULT put_BinarySalt( BSTR newSalt );
HRESULT put_BitmapPersistence( long bitmapPeristence );
HRESULT put_ClearTextPassword( BSTR newClearTextPass );
HRESULT put_ColorDepth( LONG colorDepth) ;
HRESULT put_Compress( long compress );
HRESULT put_ConnectingText( BSTR connectingText );
HRESULT put_ContainerHandledFullScreen( BOOL containerHandledFullScreen );
HRESULT put_DisableRdpdr( BOOL DisableRdpdr );
HRESULT put_DisconnectedText( BSTR disconnectText );
HRESULT put_Domain( BSTR domainProperty );
HRESULT put_IconFile( BSTR IconFile );
HRESULT put_IconIndex( LONG IconIndex );
HRESULT put_KeyBoardLayoutStr( BSTR KeyBoardLayoutStr );
HRESULT put_KeyboardHookMode( LONG keyboardHookMode );
HRESULT put_PluginDlls( BSTR pluginList );
HRESULT put_PortablePassword( BSTR newPortablePassVal );
HRESULT put_PortableSalt( BSTR newPortableSalt );
HRESULT put_Server( BSTR serverProperty );
HRESULT put_StartProgram( BSTR programName );
HRESULT put_UserName( BSTR userName );
HRESULT put_WorkDir( BSTR workingDir );
HRESULT put_allowBackgroundInput( long allowBackgroundInput );

#endif /* _DISCODLG_ */
