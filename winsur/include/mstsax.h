/* mstsax.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 8 constants, 98 declarations, 0 outlines, 0 base types, 0 extra macros, 94 extra decls
 */
#ifndef _MSTSAX_
#define _MSTSAX_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */
#define TS_PERF_DISABLE_CURSOR_SHADOW 0x00000020
#define TS_PERF_DISABLE_CURSORSETTINGS 0x00000040
#define TS_PERF_DISABLE_FULLWINDOWDRAG 0x00000002
#define TS_PERF_DISABLE_MENUANIMATIONS 0x00000004
#define TS_PERF_DISABLE_NOTHING 0x00000000
#define TS_PERF_DISABLE_THEMING 0x00000008
#define TS_PERF_DISABLE_WALLPAPER 0x00000001
#define TS_PERF_ENABLE_ENHANCED_GRAPHICS 0x00000010
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* IMsRdpClientAdvancedSettings::get_AcceleratorPassthrough  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT get_AcceleratorPassthrough( 
 LONG *pacceleratorPassthrough
);

/* IMsRdpClientAdvancedSettings::get_BitmapCacheSize  [function; ce-only; CE 6.0..699; Mstsax.lib] */
get_BitmapCacheSize( 
 LONG *pbitmapCacheSize
);

/* IMsRdpClientAdvancedSettings::get_BitmapPersistence  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT get_BitmapPersistence( 
 LONG *pbitmapPersistence
);

/* IMsRdpClientAdvancedSettings::get_BitmapVirtualCache16BppSize  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT get_BitmapVirtualCache16BppSize( 
 LONG *pBitmapVirtualCache16BppSize
);

/* IMsRdpClientAdvancedSettings::get_BitmapVirtualCache24BppSize  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT put_BitmapVirtualCache24BppSize(
 LONG bitmapVirtualCache24BppSize
);

/* IMsRdpClientAdvancedSettings::get_BitmapVirtualCacheSize  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT get_BitmapVirtualCacheSize( 
 LONG *pbitmapVirtualCacheSize
);

/* IMsRdpClientAdvancedSettings::get_DedicatedTerminal  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT get_DedicatedTerminal( 
 LONG *pdedicatedTerminal
);

/* IMsRdpClientAdvancedSettings::get_DisableCtrlAltDel  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT get_DisableCtrlAltDel( 
 LONG *pdisableCtrlAltDel
);

/* IMsRdpClientAdvancedSettings::get_DisplayConnectionBar  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT get_DisplayConnectionBar( 
 VARIANT_BOOL *pDisplayConnectionBar
);

/* IMsRdpClientAdvancedSettings::get_DoubleClickDetect  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT STDMETHODCALLTYPE get_DoubleClickDetect( 
 LONG *pdoubleClickDetect
);

/* IMsRdpClientAdvancedSettings::get_EnableMouse  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT STDMETHODCALLTYPE get_EnableMouse( 
 LONG *penableMouse
);

/* IMsRdpClientAdvancedSettings::get_EnableWindowsKey  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT STDMETHODCALLTYPE get_EnableWindowsKey( 
 LONG *penableWindowsKey
);

/* IMsRdpClientAdvancedSettings::get_GrabFocusOnConnect  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT get_GrabFocusOnConnect( 
 VARIANT_BOOL *pfGrabFocusOnConnect
);

/* IMsRdpClientAdvancedSettings::get_HotKeyAltEsc  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT get_HotKeyCtrlEsc( 
 LONG *photKeyCtrlEsc
);

/* IMsRdpClientAdvancedSettings::get_HotKeyAltShiftTab  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT get_HotKeyAltShiftTab( 
 LONG *photKeyAltShiftTab
);

/* IMsRdpClientAdvancedSettings::get_HotKeyAltSpace  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT get_HotKeyAltSpace( 
 LONG *photKeyAltSpace
);

/* IMsRdpClientAdvancedSettings::get_HotKeyAltTab  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT STDMETHODCALLTYPE get_HotKeyAltTab( 
 LONG *photKeyAltTab
);

/* IMsRdpClientAdvancedSettings::get_HotKeyCtrlAltDel  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT STDMETHODCALLTYPE get_HotKeyCtrlAltDel( 
 LONG *photKeyCtrlAltDel
);

/* IMsRdpClientAdvancedSettings::get_HotKeyCtrlEsc  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT get_HotKeyCtrlEsc( 
 LONG *photKeyCtrlEsc
);

/* IMsRdpClientAdvancedSettings::get_HotKeyFullScreen  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT get_HotKeyFullScreen( 
 LONG *photKeyFullScreen
);

/* IMsRdpClientAdvancedSettings::get_InputEventsAtOnce  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT get_InputEventsAtOnce( 
 LONG *pinputEventsAtOnce
);

/* IMsRdpClientAdvancedSettings::get_KeepAliveInterval  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT get_keepAliveInterval( 
 LONG *pkeepAliveInterval
);

/* IMsRdpClientAdvancedSettings::get_KeyboardFunctionKey  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT get_KeyboardFunctionKey( 
 LONG *pkeyboardFunctionKey
);

/* IMsRdpClientAdvancedSettings::get_KeyboardSubType  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT get_KeyboardSubType( 
 LONG *pkeyboardSubType
);

/* IMsRdpClientAdvancedSettings::get_KeyboardType  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT get_KeyboardType( 
 LONG *pkeyboardType
);

/* IMsRdpClientAdvancedSettings::get_MaxEventCount  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT get_maxEventCount( 
 LONG *pmaxEventCount
);

/* IMsRdpClientAdvancedSettings::get_MaximizeShell  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT get_MaximizeShell( 
 LONG *pmaximizeShell
);

/* IMsRdpClientAdvancedSettings::get_MinInputSendInterval  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT get_minInputSendInterval( 
 LONG *pminInputSendInterval
);

/* IMsRdpClientAdvancedSettings::get_MinutesToIdleTimeout  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT get_MinutesToIdleTimeout( 
 LONG *pminutesToIdleTimeout
);

/* IMsRdpClientAdvancedSettings::get_NumBitmapCaches  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT get_NumBitmapCaches( 
 LONG *pnumBitmapCaches
);

/* IMsRdpClientAdvancedSettings::get_OrderDrawThreshold  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT get_orderDrawThreshold( 
 LONG *porderDrawThreshold
);

/* IMsRdpClientAdvancedSettings::get_OverallConnectionTimeout  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT get_overallConnectionTimeout( 
 LONG *poverallConnectionTimeout
);

/* IMsRdpClientAdvancedSettings::get_PerformanceFlags  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT get_PerformanceFlags( 
 LONG *pDisableList
);

/* IMsRdpClientAdvancedSettings::get_PinConnectionBar  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT get_PinConnectionBar( 
 VARIANT_BOOL *pPinConnectionBar
);

/* IMsRdpClientAdvancedSettings::get_RdpdrClipCleanTempDirString  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT get_RdpdrClipCleanTempDirString( 
 BSTR *clipCleanTempDirString
);

/* IMsRdpClientAdvancedSettings::get_RdpdrClipPasteInfoString  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT get_RdpdrClipPasteInfoString( 
 BSTR *clipPasteInfoString
);

/* IMsRdpClientAdvancedSettings::get_RdpdrLocalPrintingDocName  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT get_RdpdrLocalPrintingDocName( 
 BSTR *pLocalPrintingDocName
);

/* IMsRdpClientAdvancedSettings::get_RDPPort  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT get_RDPPort( 
 LONG *prdpPort
);

/* IMsRdpClientAdvancedSettings::get_RedirectPorts  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT get_RedirectPorts( 
 VARIANT_BOOL *pRedirectPorts
);

/* IMsRdpClientAdvancedSettings::get_RedirectPrinters  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT get_RedirectPrinters( 
 VARIANT_BOOL *pRedirectPrinters
);

/* IMsRdpClientAdvancedSettings::get_RedirectSmartCards  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT get_RedirectSmartCards( 
 VARIANT_BOOL *pRedirectSmartCards
);

/* IMsRdpClientAdvancedSettings::get_ScaleBitmapCachesByBPP  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT get_ScaleBitmapCachesByBPP( 
 LONG *pbScale
);

/* IMsRdpClientAdvancedSettings::get_ShadowBitmap  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT get_ShadowBitmap( 
 LONG *pshadowBitmap
);

/* IMsRdpClientAdvancedSettings::get_ShutdownTimeout  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT get_shutdownTimeout( 
 LONG *pshutdownTimeout
);

/* IMsRdpClientAdvancedSettings::get_SingleConnectionTimeout  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT get_singleConnectionTimeout( 
 LONG *psingleConnectionTimeout
);

/* IMsRdpClientAdvancedSettings::get_SmartSizing  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT get_SmartSizing( 
 VARIANT_BOOL *pfSmartSizing
);

/* IMsRdpClientAdvancedSettings::get_SmoothScroll  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT get_SmoothScroll( 
 LONG *psmoothScroll
);

/* IMsRdpClientAdvancedSettings::put_AcceleratorPassthrough  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT put_AcceleratorPassthrough( 
 LONG acceleratorPassthrough
);

/* IMsRdpClientAdvancedSettings::put_BitmapCacheSize  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT put_BitmapCacheSize( 
 LONG bitmapCacheSize
);

/* IMsRdpClientAdvancedSettings::put_BitmapPersistence  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT put_BitmapPersistence( 
 LONG bitmapPeristence
);

/* IMsRdpClientAdvancedSettings::put_BitmapVirtualCache16BppSize  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT put_BitmapVirtualCache16BppSize( 
 LONG bitmapVirtualCache16BppSize
);

/* IMsRdpClientAdvancedSettings::put_BitmapVirtualCache24BppSize  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT put_BitmapVirtualCache24BppSize( 
 LONG bitmapVirtualCache24BppSize
);

/* IMsRdpClientAdvancedSettings::put_BitmapVirtualCacheSize  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT put_BitmapVirtualCacheSize( 
 LONG bitmapVirtualCacheSize
);

/* IMsRdpClientAdvancedSettings::put_ClearTextPassword  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT put_ClearTextPassword( 
 BSTR clearTextPassword
);

/* IMsRdpClientAdvancedSettings::put_ConnectToServerConsole  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT put_ConnectToServerConsole( 
 VARIANT_BOOL connectToServerConsole
);

/* IMsRdpClientAdvancedSettings::put_ConnectWithEndpoint  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT put_ConnectWithEndpoint( 
 VARIANT *ConnectEndpoint
);

/* IMsRdpClientAdvancedSettings::put_DedicatedTerminal  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT put_DedicatedTerminal( 
 LONG dedicatedTerminal
);

/* IMsRdpClientAdvancedSettings::put_DisableCtrlAltDel  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT put_DisableCtrlAltDel( 
 LONG disableCtrlAltDel
);

/* IMsRdpClientAdvancedSettings::put_DisplayConnectionBar  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT put_DisplayConnectionBar( 
 VARIANT_BOOL fDisplayConnectionBar
);

/* IMsRdpClientAdvancedSettings::put_DoubleClickDetect  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT put_DoubleClickDetect( 
 LONG doubleClickDetect
);

/* IMsRdpClientAdvancedSettings::put_EnableMouse  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT put_EnableMouse( 
 LONG enableMouse
);

/* IMsRdpClientAdvancedSettings::put_EnableWindowsKey  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT put_EnableWindowsKey( 
 LONG enableWindowsKey
);

/* IMsRdpClientAdvancedSettings::put_GrabFocusOnConnect  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT put_GrabFocusOnConnect( 
 VARIANT_BOOL fGrabFocusOnConnect
);

/* IMsRdpClientAdvancedSettings::put_HotKeyAltEsc  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT put_HotKeyAltEsc( 
 LONG hotKeyAltEsc
);

/* IMsRdpClientAdvancedSettings::put_HotKeyAltShiftTab  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT put_HotKeyAltShiftTab( 
 LONG hotKeyAltShiftTab
);

/* IMsRdpClientAdvancedSettings::put_HotKeyAltSpace  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT put_HotKeyAltSpace( 
 LONG hotKeyAltSpace
);

/* IMsRdpClientAdvancedSettings::put_HotKeyAltTab  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT put_HotKeyAltTab( 
 LONG hotKeyAltTab
);

/* IMsRdpClientAdvancedSettings::put_HotKeyCtrlAltDel  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT put_HotKeyCtrlAltDel( 
 LONG hotKeyCtrlAltDel
);

/* IMsRdpClientAdvancedSettings::put_HotKeyCtrlEsc  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT put_HotKeyCtrlEsc( 
 LONG hotKeyCtrlEsc
);

/* IMsRdpClientAdvancedSettings::put_HotKeyFullScreen  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT put_HotKeyFullScreen( 
 LONG hotKeyFullScreen
);

/* IMsRdpClientAdvancedSettings::put_InputEventsAtOnce  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT put_InputEventsAtOnce( 
 LONG inputEventsAtOnce
);

/* IMsRdpClientAdvancedSettings::put_KeepAliveInterval  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT put_keepAliveInterval( 
 LONG keepAliveInterval
);

/* IMsRdpClientAdvancedSettings::put_KeyboardFunctionKey  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT put_KeyboardFunctionKey( 
 LONG keyboardFunctionKey
);

/* IMsRdpClientAdvancedSettings::put_KeyboardSubType  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT put_KeyboardSubType( 
 LONG keyboardSubType
);

/* IMsRdpClientAdvancedSettings::put_KeyboardType  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT put_KeyboardType( 
 LONG keyboardType
);

/* IMsRdpClientAdvancedSettings::put_MaxEventCount  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT STDMETHODCALLTYPE put_maxEventCount( 
 LONG maxEventCount
);

/* IMsRdpClientAdvancedSettings::put_MaximizeShell  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT put_MaximizeShell( 
 LONG maximizeShell
);

/* IMsRdpClientAdvancedSettings::put_MinInputSendInterval  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT put_minInputSendInterval( 
 LONG minInputSendInterval
);

/* IMsRdpClientAdvancedSettings::put_MinutesToIdleTimeout  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT put_MinutesToIdleTimeout( 
 LONG minutesToIdleTimeout
);

/* IMsRdpClientAdvancedSettings::put_NumBitmapCaches  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT put_NumBitmapCaches( 
 LONG numBitmapCaches
);

/* IMsRdpClientAdvancedSettings::put_OrderDrawThreshold  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT put_orderDrawThreshold( 
 LONG orderDrawThreshold
);

/* IMsRdpClientAdvancedSettings::put_OverallConnectionTimeout  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT put_overallConnectionTimeout( 
 LONG overallConnectionTimeout
);

/* IMsRdpClientAdvancedSettings::put_PerformanceFlags  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT put_PerformanceFlags( 
 LONG DisableList
);

/* IMsRdpClientAdvancedSettings::put_PersistCacheDirectory  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT put_PersistCacheDirectory( 
 BSTR PersistCacheDirectory
);

/* IMsRdpClientAdvancedSettings::put_PinConnectionBar  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT put_PinConnectionBar( 
 VARIANT_BOOL fPinConnectionBar
);

/* IMsRdpClientAdvancedSettings::put_RdpdrClipCleanTempDirString  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT put_RdpdrClipCleanTempDirString( 
 BSTR clipCleanTempDirString
);

/* IMsRdpClientAdvancedSettings::put_RdpdrClipPasteInfoString  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT put_RdpdrClipPasteInfoString( 
 BSTR clipPasteInfoString
);

/* IMsRdpClientAdvancedSettings::put_RdpdrLocalPrintingDocName  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT put_RdpdrLocalPrintingDocName( 
 BSTR localPrintingDocName
);

/* IMsRdpClientAdvancedSettings::put_RDPPort  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT put_RDPPort( 
 LONG rdpPort
);

/* IMsRdpClientAdvancedSettings::put_RedirectPorts  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT put_RedirectPorts( 
 VARIANT_BOOL redirectPorts
);

/* IMsRdpClientAdvancedSettings::put_RedirectPrinters  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT put_RedirectPrinters( 
 VARIANT_BOOL redirectPrinters
);

/* IMsRdpClientAdvancedSettings::put_RedirectSmartCards  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT put_RedirectSmartCards( 
 VARIANT_BOOL redirectSmartCards
);

/* IMsRdpClientAdvancedSettings::put_ScaleBitmapCachesByBPP  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT STDMETHODCALLTYPE put_ScaleBitmapCachesByBPP( 
 LONG bScale
);

/* IMsRdpClientAdvancedSettings::put_ShadowBitmap  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT put_ShadowBitmap( 
 LONG shadowBitmap
);

/* IMsRdpClientAdvancedSettings::put_ShutdownTimeout  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT put_shutdownTimeout( 
 LONG shutdownTimeout
);

/* IMsRdpClientAdvancedSettings::put_SingleConnectionTimeout  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT put_singleConnectionTimeout( 
 LONG singleConnectionTimeout
);

/* IMsRdpClientAdvancedSettings::put_SmartSizing  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT put_SmartSizing( 
 VARIANT_BOOL fSmartSizing
);

/* IMsRdpClientAdvancedSettings::put_SmoothScroll  [function; ce-only; CE 6.0..699; Mstsax.lib] */
HRESULT put_SmoothScroll( 
 LONG smoothScroll
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT get_AcceleratorPassthrough( LONG *pacceleratorPassthrough );
get_BitmapCacheSize(  LONG *pbitmapCacheSize );
HRESULT get_BitmapPersistence( LONG *pbitmapPersistence );
HRESULT get_BitmapVirtualCache16BppSize( LONG *pBitmapVirtualCache16BppSize );
HRESULT get_BitmapVirtualCacheSize( LONG *pbitmapVirtualCacheSize );
HRESULT get_DedicatedTerminal( LONG *pdedicatedTerminal );
HRESULT get_DisableCtrlAltDel( LONG *pdisableCtrlAltDel );
HRESULT get_DisplayConnectionBar( VARIANT_BOOL *pDisplayConnectionBar );
HRESULT STDMETHODCALLTYPE get_DoubleClickDetect(  LONG *pdoubleClickDetect );
HRESULT STDMETHODCALLTYPE get_EnableMouse(  LONG *penableMouse );
HRESULT STDMETHODCALLTYPE get_EnableWindowsKey(  LONG *penableWindowsKey );
HRESULT get_GrabFocusOnConnect( VARIANT_BOOL *pfGrabFocusOnConnect );
HRESULT get_HotKeyAltShiftTab( LONG *photKeyAltShiftTab );
HRESULT get_HotKeyAltSpace( LONG *photKeyAltSpace );
HRESULT STDMETHODCALLTYPE get_HotKeyAltTab(  LONG *photKeyAltTab );
HRESULT STDMETHODCALLTYPE get_HotKeyCtrlAltDel(  LONG *photKeyCtrlAltDel );
HRESULT get_HotKeyCtrlEsc( LONG *photKeyCtrlEsc );
HRESULT get_HotKeyFullScreen( LONG *photKeyFullScreen );
HRESULT get_InputEventsAtOnce( LONG *pinputEventsAtOnce );
HRESULT get_KeyboardFunctionKey( LONG *pkeyboardFunctionKey );
HRESULT get_KeyboardSubType( LONG *pkeyboardSubType );
HRESULT get_KeyboardType( LONG *pkeyboardType );
HRESULT get_MaximizeShell( LONG *pmaximizeShell );
HRESULT get_MinutesToIdleTimeout( LONG *pminutesToIdleTimeout );
HRESULT get_NumBitmapCaches( LONG *pnumBitmapCaches );
HRESULT get_PerformanceFlags( LONG *pDisableList );
HRESULT get_PinConnectionBar( VARIANT_BOOL *pPinConnectionBar );
HRESULT get_RDPPort( LONG *prdpPort );
HRESULT get_RdpdrClipCleanTempDirString( BSTR *clipCleanTempDirString );
HRESULT get_RdpdrClipPasteInfoString( BSTR *clipPasteInfoString );
HRESULT get_RdpdrLocalPrintingDocName( BSTR *pLocalPrintingDocName );
HRESULT get_RedirectPorts( VARIANT_BOOL *pRedirectPorts );
HRESULT get_RedirectPrinters( VARIANT_BOOL *pRedirectPrinters );
HRESULT get_RedirectSmartCards( VARIANT_BOOL *pRedirectSmartCards );
HRESULT get_ScaleBitmapCachesByBPP( LONG *pbScale );
HRESULT get_ShadowBitmap( LONG *pshadowBitmap );
HRESULT get_SmartSizing( VARIANT_BOOL *pfSmartSizing );
HRESULT get_SmoothScroll( LONG *psmoothScroll );
HRESULT get_keepAliveInterval( LONG *pkeepAliveInterval );
HRESULT get_maxEventCount( LONG *pmaxEventCount );
HRESULT get_minInputSendInterval( LONG *pminInputSendInterval );
HRESULT get_orderDrawThreshold( LONG *porderDrawThreshold );
HRESULT get_overallConnectionTimeout( LONG *poverallConnectionTimeout );
HRESULT get_shutdownTimeout( LONG *pshutdownTimeout );
HRESULT get_singleConnectionTimeout( LONG *psingleConnectionTimeout );
HRESULT put_AcceleratorPassthrough( LONG acceleratorPassthrough );
HRESULT put_BitmapCacheSize( LONG bitmapCacheSize );
HRESULT put_BitmapVirtualCache16BppSize( LONG bitmapVirtualCache16BppSize );
HRESULT put_BitmapVirtualCache24BppSize( LONG bitmapVirtualCache24BppSize );
HRESULT put_BitmapVirtualCacheSize( LONG bitmapVirtualCacheSize );
HRESULT put_ConnectToServerConsole( VARIANT_BOOL connectToServerConsole );
HRESULT put_ConnectWithEndpoint( VARIANT *ConnectEndpoint );
HRESULT put_DedicatedTerminal( LONG dedicatedTerminal );
HRESULT put_DisableCtrlAltDel( LONG disableCtrlAltDel );
HRESULT put_DisplayConnectionBar( VARIANT_BOOL fDisplayConnectionBar );
HRESULT put_DoubleClickDetect( LONG doubleClickDetect );
HRESULT put_EnableMouse( LONG enableMouse );
HRESULT put_EnableWindowsKey( LONG enableWindowsKey );
HRESULT put_GrabFocusOnConnect( VARIANT_BOOL fGrabFocusOnConnect );
HRESULT put_HotKeyAltEsc( LONG hotKeyAltEsc );
HRESULT put_HotKeyAltShiftTab( LONG hotKeyAltShiftTab );
HRESULT put_HotKeyAltSpace( LONG hotKeyAltSpace );
HRESULT put_HotKeyAltTab( LONG hotKeyAltTab );
HRESULT put_HotKeyCtrlAltDel( LONG hotKeyCtrlAltDel );
HRESULT put_HotKeyCtrlEsc( LONG hotKeyCtrlEsc );
HRESULT put_HotKeyFullScreen( LONG hotKeyFullScreen );
HRESULT put_InputEventsAtOnce( LONG inputEventsAtOnce );
HRESULT put_KeyboardFunctionKey( LONG keyboardFunctionKey );
HRESULT put_KeyboardSubType( LONG keyboardSubType );
HRESULT put_KeyboardType( LONG keyboardType );
HRESULT put_MaximizeShell( LONG maximizeShell );
HRESULT put_MinutesToIdleTimeout( LONG minutesToIdleTimeout );
HRESULT put_NumBitmapCaches( LONG numBitmapCaches );
HRESULT put_PerformanceFlags( LONG DisableList );
HRESULT put_PersistCacheDirectory( BSTR PersistCacheDirectory );
HRESULT put_PinConnectionBar( VARIANT_BOOL fPinConnectionBar );
HRESULT put_RDPPort( LONG rdpPort );
HRESULT put_RdpdrClipCleanTempDirString( BSTR clipCleanTempDirString );
HRESULT put_RdpdrClipPasteInfoString( BSTR clipPasteInfoString );
HRESULT put_RdpdrLocalPrintingDocName( BSTR localPrintingDocName );
HRESULT put_RedirectPorts( VARIANT_BOOL redirectPorts );
HRESULT put_RedirectPrinters( VARIANT_BOOL redirectPrinters );
HRESULT put_RedirectSmartCards( VARIANT_BOOL redirectSmartCards );
HRESULT STDMETHODCALLTYPE put_ScaleBitmapCachesByBPP(  LONG bScale );
HRESULT put_ShadowBitmap( LONG shadowBitmap );
HRESULT put_SmartSizing( VARIANT_BOOL fSmartSizing );
HRESULT put_SmoothScroll( LONG smoothScroll );
HRESULT put_keepAliveInterval( LONG keepAliveInterval );
HRESULT STDMETHODCALLTYPE put_maxEventCount(  LONG maxEventCount );
HRESULT put_minInputSendInterval( LONG minInputSendInterval );
HRESULT put_orderDrawThreshold( LONG orderDrawThreshold );
HRESULT put_overallConnectionTimeout( LONG overallConnectionTimeout );
HRESULT put_shutdownTimeout( LONG shutdownTimeout );
HRESULT put_singleConnectionTimeout( LONG singleConnectionTimeout );

#endif /* _MSTSAX_ */
