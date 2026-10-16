/* Keybddr.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 23 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _KEYBDDR_
#define _KEYBDDR_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* PFN_KEYBD_DRIVER_GET_INFO  [callback; ce-only; CE 5.0..699; LayoutManager.lib, layoutmanager.lib] */
typedef BOOL (*PFN_KEYBD_DRIVER_GET_INFO)(
 INT iKeybdId,
 INT iIndex,
 LPVOID lpOutput
);

/* PFN_KEYBD_DRIVER_POWER_HANDLER  [callback; ce-only; CE 5.0..699; LayoutManager.lib, layoutmanager.lib] */
typedef void (*PFN_KEYBD_DRIVER_POWER_HANDLER)(
 BOOL bOff
);

/* PFN_KEYBD_DRIVER_SET_MODE  [callback; ce-only; CE 5.0..699; LayoutManager.lib, layoutmanager.lib] */
typedef BOOL (*PFN_KEYBD_DRIVER_SET_MODE)(
 INT iKeybdId,
 INT iIndex,
 LPVOID lpInput
);

/* PFN_LAYOUT_MGR_GET_KEYBOARD_LAYOUT_NAME  [callback; ce-only; CE 5.0..699; LayoutManager.lib, layoutmanager.lib] */
typedef BOOL (*PFN_LAYOUT_MGR_GET_KEYBOARD_LAYOUT_NAME)(
 WCHAR *pNameBuf
);

/* PFN_LAYOUT_MGR_GET_KEYBOARD_TYPE  [callback; ce-only; CE 5.0..699; LayoutManager.lib, layoutmanager.lib] */
typedef int (*PFN_LAYOUT_MGR_GET_KEYBOARD_TYPE)(
 int nTypeFlag
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 500)) /* CE 2.11..2.12, 3.0..499 */

/* KeybdDriverGetInfo  [function; ce-only; CE 2.11..2.12, 3.0..499; LayoutManager.lib] */
BOOL KeybdDriverGetInfo(
 INT iKeybdId,
 INT iIndex,
 LPVOID lpOutput 
);

/* KeybdDriverInitialize  [function; ce-only; CE 2.11..2.12, 3.0..499; LayoutManager.lib] */
void KeybdDriverInitialize(
 PFN_KEYBD_EVENT_CALLBACK pfnKeybdEventCallback 
);

/* KeybdDriverInitStates  [function; ce-only; CE 2.11..2.12, 3.0..499; LayoutManager.lib] */
BOOL KeybdDriverInitStates(
 INT iKeybdId,
 KEY_STATE KeyState,
 void* pKeybdDeviceToUnicodeState 
);

/* KeybdDriverPowerHandler  [function; ce-only; CE 2.11..2.12, 3.0..499; LayoutManager.lib] */
void KeybdDriverPowerHandler(
 BOOL bOff 
);

/* KeybdDriverSetMode  [function; ce-only; CE 2.11..2.12, 3.0..499; LayoutManager.lib] */
BOOL KeybdDriverSetMode(
 INT iKeybdId,
 INT iIndex,
 LPVOID lpInput 
);

/* KeybdDriverVKeyToUnicode  [function; ce-only; CE 2.11..2.12, 3.0..499; LayoutManager.lib] */
UINT32 KeybdDriverVKeyToUnicode(
 UINT32 VirtualKey,
 KEY_STATE_FLAGS KeyEvent,
 KEY_STATE KeyState,
 void* pKeybdDriverToUnicodeState,
 UINT32 cBufferSize,
 UINT32* pcCharacters,
 KEY_STATE_FLAGS* pShiftStateBuffer,
 UINT32* pCharacterBuffer 
);

/* KeybdEventCallback  [function; ce-only; CE 2.11..2.12, 3.0..499; LayoutManager.lib] */
void KeybdEventCallback(
 UINT32 VirtualKey,
 KEY_STATE_FLAGS KeyEvent 
);
#endif /* _WIN32_WCE */

#endif /* _KEYBDDR_ */
