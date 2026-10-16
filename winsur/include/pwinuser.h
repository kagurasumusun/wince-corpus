/* pwinuser.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 18 constants, 28 declarations, 1 outlines, 0 base types, 0 extra macros, 2 extra decls
 */
#ifndef _PWINUSER_
#define _PWINUSER_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define GID_BEGIN 1
#define GID_END 2
#define GID_PAN 4
#define GID_PRESSANDTAP 7
#define GID_ROTATE 5
#define GID_TWOFINGERTAP 6
#define GID_ZOOM 3
#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */
#define ARG_SCROLL_DOWN 1
#define ARG_SCROLL_LEFT 2
#define ARG_SCROLL_NONE 0
#define ARG_SCROLL_RIGHT 4
#define ARG_SCROLL_UP 3
#define GF_BEGIN 0x00000001
#define GF_END 0x00000004
#define GF_INERTIA 0x00000002
#define GID_MAX 63
#define TGF_SCOPE_PROCESS 1
#define TGF_SCOPE_WINDOW 0
#endif /* _WIN32_WCE */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* GET_FOREGROUND_INFO  [struct; ce-only; CE 5.0..699] */
typedef struct tagGetForegroundInfo {
 HWND hwndActive;
 HWND hwndFocus;
 HWND hwndMenu;
 HWND hwndKeyboardDest;
 DWORD fdwConversion;
 DWORD fdwSentence;
 BOOL fOpen;
 DWORD dwCompStrLen;
 HKL KeyboardLayoutHandle;
} GET_FOREGROUND_INFO;
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* ANIMATEMESSAGEINFO  [struct; ce-only; CE 6.0..699] */
typedef struct tagANIMATEMESSAGEINFO {
 size_t cbSize;
 DWORD dwAnimationID;
 int nVPixelPosition;
 int nHPixelPosition;
} ANIMATEMESSAGEINFO

/* GESTUREINFO  [struct; shared; CE 6.0..699] */
/* DERIVED member outline -- documented order, types/offsets not stated */
/*   cbSize */
/*   dwFlags */
/*   dwID */
/*   hwndTarget */
/*   ptsLocation */
/*   dwInstanceID */
/*   dwSequenceID */
/*   ullArguments */
/*   cbExtraArgs */

/* GESTUREMETRICS  [struct; ce-only; CE 6.0..699] */
typedef struct tagGESTUREMETRICS {
 UINT cbSize;
 DWORD dwID;
 DWORD dwTimeout;
 DWORD dwDistanceTolerance; 
 DWORD dwAngularTolerance;
 DWORD dwExtraInfo;
} GESTUREMETRICS, *LPGESTUREMETRICS;

/* WAGINFO  [struct; ce-only; CE 6.0..699] */
typedef struct tagWAGI {
 size_t cbSize;
 DWORD dwFlags;
 UINT nOwnerAnimateMessage;
 UINT nAnimateStatusMessage;
 HBRUSH hExtentBrush;
 UINT nItemHeight;
 UINT nItemWidth;
 BYTE bHorizontalExtent;
 BYTE bVerticalExtent;
} WAGINFO

/* XRGestureEventArgs  [struct; ce-only; CE 6.0..699] */
struct XRGestureEventArgs : XREventArgs
{
 BOOL Handled;
 HWND hWnd;
 GESTUREINFO GestureInfo;
};
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE < 200) || (_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 1.0..199, 4.0..699 */

/* BatteryNotifyOfTimeChange  [function; ce-only; CE 1.0..199, 4.0..699; Coredll.lib, coredll.lib] */
void WINAPI BatteryNotifyOfTimeChange(
 BOOL fForward,
 FILETIME *pftDelta
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 3.0..399, 5.0..699 */

/* NotifyWinUserSystem  [function; ce-only; CE 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
void NotifyWinUserSystem(
 UINT uEvent
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 3.0..699 */

/* BatteryGetLifeTimeInfo  [function; ce-only; CE 3.0..699; Coredll.lib, coredll.lib] */
void BatteryGetLifeTimeInfo( 
 LPSYSTEMTIME pstLastChange, 
 DWORD* pcmsCpuUsage, 
 DWORD* pcmsPreviousCpuUsage 
);

/* RegisterTaskBar  [function; ce-only; CE 3.0..699; coredll.lib] */
BOOL RegisterTaskBar( 
 HWND hwndTaskbar 
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* GwesPowerOffSystem  [function; ce-only; CE 4.0..699; Coredll.lib, coredll.lib] */
void GwesPowerOffSystem(void);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* GetAsyncShiftFlags  [function; ce-only; CE 5.0..699; Kbdui.lib] */
KEY_STATE_FLAGS GetAsyncShiftFlags(
 UINT VKey
);

/* GetForegroundInfo  [function; ce-only; CE 5.0..699] */
BOOL WINAPI GetForegroundInfo(
 GET_FOREGROUND_INFO* pgfi
);

/* GetForegroundKeyboardLayoutHandle  [function; ce-only; CE 5.0..699] */
HKL GetForegroundKeyboardLayoutHandle( void );

/* GetForegroundKeyboardTarget  [function; ce-only; CE 5.0..699] */
HWND GetForegroundKeyboardTarget(void);

/* ImmGetConversionStatusForeground  [function; ce-only; CE 5.0..699] */
BOOL WINAPI ImmGetConversionStatusForeground(
 DWORD* pfdwConversion,
 DWORD* pfdwSentence
);

/* KeybdGetDeviceInfo  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
BOOL KeybdGetDeviceInfo(
 INT iIndex,
 LPVOID lpOutput 
);

/* RegisterDesktop  [function; ce-only; CE 5.0..699] */
BOOL RegisterDesktop( 
 HWND hwndDesktop
);

/* RegisterTaskBarEx  [function; ce-only; CE 5.0..699] */
BOOL RegisterTaskBarEx( 
 HWND hwndTaskbar,
 BOOL bTaskBarOnTop
);

/* TouchCalibrate  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
BOOL WINAPI TouchCalibrate(void);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* CloseGestureInfoHandle  [function; shared; CE 6.0..699; TouchGesture.lib] */
BOOL CloseGestureInfoHandle (
 HGESTUREINFO hGestureInfo
);

/* Gesture  [function; ce-only; CE 6.0..699; TouchGesture.lib] */
BOOL WINAPI Gesture(
 HWND hwnd,
 const GESTUREINFO* pGestureInfo,
 const BYTE* pExtraArguments
);

/* GetAnimateMessageInfo  [function; ce-only; CE 6.0..699] */
BOOL GetAnimateMessageInfo(
 HWND hWnd, 
 WPARAM wParam, 
 LPARAM lParam, 
 LPANIMATEMESSAGEINFO pAnimateMessageInfo
);

/* GetGestureExtraArguments  [function; ce-only; CE 6.0..699; TouchGesture.lib] */
BOOL GetGestureExtraArguments (
 HGESTUREINFO hGestureInfo,
 UNIT cbExtraArguments,
 PBYTE pExtraArguments
);

/* GetGestureInfo  [function; shared; CE 6.0..699; TouchGesture.lib] */
BOOL GetGestureInfo(
 HGESTUREINFO hGestureInfo
 PGESTUREINFO pGestureInfo
);

/* GetWindowAutoGesture  [function; ce-only; CE 6.0..699] */
BOOL GetWindowAutoGesture(
 HWND hWnd, 
 LPWAGINFO lpAutoGestureInfo
);

/* QueryGestures  [function; ce-only; CE 6.0..699; TouchGesture.lib] */
BOOL QueryGestures (
 HWND hwnd,
 UINT uScope,
 PULONGLONG pullFlags
);

/* RegisterGesture  [function; ce-only; CE 6.0..699; TouchGesture.lib] */
BOOL RegisterGesture (
 LPCWSTR pszName,
 PDWORD_PTR pdwID
);

/* SetWindowAutoGesture  [function; ce-only; CE 6.0..699] */
BOOL SetWindowAutoGesture(
 HWND hWnd, 
 LPWAGINFO lpAutoGestureInfo
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
struct XRGestureEventArgs : XREventArgs
{
  BOOL Handled;
  HWND hWnd;
  GESTUREINFO GestureInfo;
};
typedef struct tagGESTUREMETRICS {
  UINT cbSize;
  DWORD dwID;
  DWORD dwTimeout;
  DWORD dwDistanceTolerance;
  DWORD dwAngularTolerance;
  DWORD dwExtraInfo;
} GESTUREMETRICS, *LPGESTUREMETRICS;

#endif /* _PWINUSER_ */
