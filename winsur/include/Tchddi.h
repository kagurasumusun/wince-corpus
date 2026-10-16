/* Tchddi.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 6 constants, 15 declarations, 0 outlines, 0 base types, 0 extra macros, 5 extra decls
 */
#ifndef _TCHDDI_
#define _TCHDDI_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 500)) /* CE 4.0..499 */
#define TouchSampleDownFlag 0x02
#define TouchSampleIgnore 0x10
#define TouchSampleIsCalibratedFlag 0x04
#define TouchSampleMouse 0x40000000
#define TouchSamplePreviousDownFlag 0x08
#define TouchSampleValidFlag 0x01
#endif /* _WIN32_WCE */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* enumTouchPanelSampleFlags  [enum; ce-only; CE 4.0..699] */
enum enumTouchPanelSampleFlags {
 TouchSampleValidFlag = 0x01,
 TouchSampleDownFlag = 0x02,
 TouchSampleIsCalibratedFlag = 0x04,
 TouchSamplePreviousDownFlag = 0x08,
 TouchSampleIgnore = 0x10,
 TouchSampleMouse = 0x40000000
};
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* TOUCH_PANEL_SAMPLE_FLAGS  [typedef; ce-only; CE 5.0..699] */
typedef UINT32 TOUCH_PANEL_SAMPLE_FLAGS, *PTOUCH_PANEL_SAMPLE_FLAGS;

/* TPDC_CALIBRATION_POINT  [struct; ce-only; CE 5.0..699] */
struct TPDC_CALIBRATION_POINT {
 INT PointNumber;
 INT cDisplayWidth;
 INT cDisplayHeight;
 INT CalibrationX;
 INT CalibrationY;
};

/* TPDC_CALIBRATION_POINT_COUNT  [struct; ce-only; CE 5.0..699] */
struct TPDC_CALIBRATION_POINT_COUNT {
 DDI_TOUCH_PANEL_CALIBRATION_FLAGS flags;
 INT cCalibrationPoints;
};

/* TPDC_SAMPLE_RATE  [struct; ce-only; CE 5.0..699] */
struct TPDC_SAMPLE_RATE {
 INT SamplesPerSecondLow;
 INT SamplesPerSecondHigh;
 INT CurrentSampleRateSetting; 
};
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 2.11..2.12, 3.0..399, 5.0..699 */

/* TouchPanelCalibrateAPoint  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Tchmain.lib] */
VOID TouchPanelCalibrateAPoint(
 INT32 UncalX,
 INT32 UncalY,
 INT32* pCalX,
 INT32* pCalY 
);

/* TouchPanelDisable  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Tchmain.lib] */
VOID TouchPanelDisable(void);

/* TouchPanelEnable  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Tchmain.lib] */
BOOL TouchPanelEnable(
 PFN_TOUCH_PANEL_CALLBACK pfnCallback
);

/* TouchPanelGetDeviceCaps  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Tchmain.lib] */
BOOL TouchPanelGetDeviceCaps(
 INT iIndex,
 LPVOID lpOutput 
);

/* TouchPanelPowerHandler  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Tchmain.lib] */
VOID TouchPanelPowerHandler(
 BOOL bOff
);

/* TouchPanelReadCalibrationAbort  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Tchmain.lib] */
VOID TouchPanelReadCalibrationAbort(void);

/* TouchPanelReadCalibrationPoint  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Tchmain.lib] */
BOOL TouchPanelReadCalibrationPoint(
 INT* pRawX,
 INT* pRawY 
);

/* TouchPanelSetCalibration  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Tchmain.lib] */
VOID TouchPanelSetCalibration(
 INT32 cCalibrationPoints,
 INT32* pScreenXBuffer,
 INT32* pScreenYBuffer,
 INT32* pUncalXBuffer,
 INT32* pUncalYBuffer 
);

/* TouchPanelSetMode  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Tchmain.lib] */
BOOL TouchPanelSetMode(
 INT iIndex,
 LPVOID lpInput 
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* TouchPanelInitializeCursor  [function; ce-only; CE 5.0..699; Tchmain.lib] */
BOOL TouchPanelInitializeCursor(
 PFN_DISP_DRIVER_MOVE_CURSOR
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* typedef */
typedef UINT32 TOUCH_PANEL_SAMPLE_FLAGS, *PTOUCH_PANEL_SAMPLE_FLAGS;

/* enum */
enum enumTouchPanelSampleFlags {TouchSampleValidFlag = 0x01,TouchSampleDownFlag = 0x02,TouchSampleIsCalibratedFlag = 0x04,TouchSamplePreviousDownFlag = 0x08,TouchSampleIgnore = 0x10,TouchSampleMouse = 0x40000000};

/* struct */
struct TPDC_CALIBRATION_POINT {INT PointNumber;INT cDisplayWidth;INT cDisplayHeight;INT CalibrationX;INT CalibrationY;};
struct TPDC_SAMPLE_RATE {INT SamplesPerSecondLow;INT SamplesPerSecondHigh;INT CurrentSampleRateSetting; };
struct TPDC_CALIBRATION_POINT_COUNT {DDI_TOUCH_PANEL_CALIBRATION_FLAGS flags;INT cCalibrationPoints;};

#endif /* _TCHDDI_ */
