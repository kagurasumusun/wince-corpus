/* XamlRuntime.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 125 constants, 839 declarations, 0 outlines, 0 base types, 0 extra macros, 518 extra decls
 */
#ifndef _XAMLRUNTIME_
#define _XAMLRUNTIME_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define VTYPE_BOOL 3
#define VTYPE_BSTR 7
#define VTYPE_COLOR 5
#define VTYPE_CORNER_RADIUS 13
#define VTYPE_FLOAT 1
#define VTYPE_GRIDLENGTH 12
#define VTYPE_INT 2
#define VTYPE_NONE 0
#define VTYPE_OBJECT 14
#define VTYPE_POINT 8
#define VTYPE_READONLY_STRING 6
#define VTYPE_RECT 9
#define VTYPE_SIZE 11
#define VTYPE_THICKNESS 10
#define VTYPE_UINT 4
#define XRAlignmentX_Center 1
#define XRAlignmentX_Left 0
#define XRAlignmentX_Right 2
#define XRAlignmentY_Bottom 2
#define XRAlignmentY_Center 1
#define XRAlignmentY_Top 0
#define XRBrushMappingMode_Absolute 0
#define XRBrushMappingMode_RelativeToBoundingBox 1
#define XRClickMode_Release 0
#define XRClockState_Active 0
#define XRClockState_Filling 1
#define XRClockState_Stopped 2
#define XRColorInterpolationMode_ScRgbLinearInterpolation 0
#define XRColorInterpolationMode_SRgbLinearInterpolation 1
#define XRCursor_Arrow 1
#define XRCursor_Default 0
#define XRCursor_Eraser 6
#define XRCursor_Hand 2
#define XRCursor_IBeam 4
#define XRCursor_None 9
#define XRCursor_SizeNS 7
#define XRCursor_SizeWE 8
#define XRCursor_Stylus 5
#define XRCursor_Wait 3
#define XRFillBehavior_HoldEnd 0
#define XRFillBehavior_Stop 1
#define XRFillRule_EvenOdd 0
#define XRFillRule_Nonzero 1
#define XRFontStretch_Condensed 3
#define XRFontStretch_Expanded 7
#define XRFontStretch_ExtraCondensed 2
#define XRFontStretch_ExtraExpanded 8
#define XRFontStretch_Medium 5
#define XRFontStretch_Normal 5
#define XRFontStretch_SemiCondensed 4
#define XRFontStretch_SemiExpanded 6
#define XRFontStretch_UltraCondensed 1
#define XRFontStretch_UltraExpanded 9
#define XRFontStyle_Italic 2
#define XRFontStyle_Normal 0
#define XRFontStyle_Oblique 1
#define XRFontWeight_Black 900
#define XRFontWeight_Bold 700
#define XRFontWeight_ExtraBlack 950
#define XRFontWeight_ExtraBold 800
#define XRFontWeight_ExtraLight 200
#define XRFontWeight_Light 300
#define XRFontWeight_Medium 500
#define XRFontWeight_Normal 400
#define XRFontWeight_SemiBold 600
#define XRFontWeight_Thin 100
#define XRGradientSpreadMethod_Pad 0
#define XRGradientSpreadMethod_Reflect 1
#define XRGradientSpreadMethod_Repeat 2
#define XRGridUnitType_Auto 0
#define XRGridUnitType_Pixel 1
#define XRGridUnitType_Star 2
#define XRHorizontalAlignment_Center 1
#define XRHorizontalAlignment_Left 0
#define XRHorizontalAlignment_Right 2
#define XRHorizontalAlignment_Stretch 3
#define XRKeyboardNavigationMode_Cycle 1
#define XRKeyboardNavigationMode_Local 0
#define XRKeyboardNavigationMode_Once 2
#define XRLineStackingStrategy_BlockLineHeight 1
#define XRLineStackingStrategy_MaxHeight 0
#define XROrientation_Horizontal 1
#define XROrientation_Vertical 0
#define XRPenLineCap_Flat 0
#define XRPenLineCap_Round 2
#define XRPenLineCap_Square 1
#define XRPenLineCap_Triangle 3
#define XRPenLineJoin_Bevel 1
#define XRPenLineJoin_Miter 0
#define XRPenLineJoin_Round 2
#define XRS_STRING 0
#define XRScrollBarVisibility_Disabled 0
#define XRScrollEventType_EndScroll 8
#define XRScrollEventType_First 6
#define XRScrollEventType_LargeDecrement 2
#define XRScrollEventType_LargeIncrement 3
#define XRScrollEventType_Last 7
#define XRScrollEventType_SmallDecrement 0
#define XRScrollEventType_SmallIncrement 1
#define XRScrollEventType_ThumbPosition 4
#define XRScrollEventType_ThumbTrack 5
#define XRStretch_Fill 1
#define XRStretch_None 0
#define XRStretch_Uniform 2
#define XRStretch_UniformToFill 3
#define XRStyleSimulations_BoldItalicSimulation 3
#define XRStyleSimulations_BoldSimulation 1
#define XRStyleSimulations_ItalicSimulation 2
#define XRStyleSimulations_None 0
#define XRSweepDirection_Clockwise 1
#define XRSweepDirection_Counterclockwise 0
#define XRTextAlignment_Center 0
#define XRTextAlignment_Left 1
#define XRTextAlignment_Right 2
#define XRTextDecorationType_None 0
#define XRTextDecorationType_Underline 1
#define XRTextWrapping_NoWrap 1
#define XRTextWrapping_Wrap 2
#define XRThreeState_Unchecked 0
#define XRVerticalAlignment_Bottom 2
#define XRVerticalAlignment_Center 1
#define XRVerticalAlignment_Stretch 3
#define XRVerticalAlignment_Top 0
#define XRVisibility_Collapsed 1
#define XRVisibility_Visible 0

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* PFN_CREATE_CONTROL  [typedef; ce-only; CE 6.0..699] */
typedef HRESULT (CALLBACK *PFN_CREATE_CONTROL)(
 IXRDependencyObject *pExistingAXDO,
 IXRDependencyObject** pNewAXDO
);

/* PFN_PROPERTY_CHANGE  [typedef; ce-only; CE 6.0..699] */
typedef void (CALLBACK* PFN_PROPERTY_CHANGE)(
 IXRDependencyObject* pControl, 
 XRValue* pOldValue, 
 XRValue* pNewValue
);

/* PFN_TYPE_CONVERTER  [typedef; ce-only; CE 6.0..699] */
typedef HRESULT (CALLBACK* PFN_TYPE_CONVERTER)(
 XRValue *pValIn, 
 XRValue *pValOut
);

/* VALUE_TYPE  [enum; ce-only; CE 6.0..699] */
enum VALUE_TYPE
{
 VTYPE_NONE = 0,
 VTYPE_FLOAT = 1,
 VTYPE_INT = 2,
 VTYPE_BOOL = 3,
 VTYPE_UINT = 4,
 VTYPE_COLOR = 5,
 VTYPE_READONLY_STRING = 6,
 VTYPE_BSTR = 7
 VTYPE_POINT = 8,
 VTYPE_RECT = 9,
 VTYPE_THICKNESS = 10,
 VTYPE_SIZE = 11,
 VTYPE_GRIDLENGTH = 12,
 VTYPE_CORNER_RADIUS = 13,
 VTYPE_OBJECT = 14
};

/* XRAlignmentX  [enum; ce-only; CE 6.0..699] */
enum XRAlignmentX{
 XRAlignmentX_Left=0,
 XRAlignmentX_Center=1,
 XRAlignmentX_Right=2
};

/* XRAlignmentY  [enum; ce-only; CE 6.0..699] */
enum XRAlignmentY{
 XRAlignmentY_Top=0,
 XRAlignmentY_Center=1,
 XRAlignmentY_Bottom=2
};

/* XRBrushMappingMode  [enum; ce-only; CE 6.0..699] */
enum XRBrushMappingMode
{
 XRBrushMappingMode_Absolute=0,
 XRBrushMappingMode_RelativeToBoundingBox=1
};

/* XRClickMode  [enum; ce-only; CE 6.0..699] */
enum XRClickMode{
 XRClickMode_Release = 0, 
 XRClickMode_Press, 
 XRClickMode_Hover,
};

/* XRClockState  [enum; ce-only; CE 6.0..699] */
enum XRClockState
{
 XRClockState_Active=0,
 XRClockState_Filling=1,
 XRClockState_Stopped=2
};

/* XRColorInterpolationMode  [enum; ce-only; CE 6.0..699] */
enum XRColorInterpolationMode{
 XRColorInterpolationMode_ScRgbLinearInterpolation=0,
 XRColorInterpolationMode_SRgbLinearInterpolation=1
};

/* XRCornerRadius  [struct; ce-only; CE 6.0..699] */
struct XRCornerRadius{
 float TopLeft;
 float TopRight;
 float BottomRight;
 float BottomLeft;
};

/* XRCursor  [enum; ce-only; CE 6.0..699] */
enum XRCursor
{
 XRCursor_Default = 0,
 XRCursor_Arrow = 1,
 XRCursor_Hand = 2,
 XRCursor_Wait = 3,
 XRCursor_IBeam = 4,
 XRCursor_Stylus = 5,
 XRCursor_Eraser = 6,
 XRCursor_SizeNS = 7,
 XRCursor_SizeWE = 8,
 XRCursor_None = 9
};

/* XRDependencyPropertyMetaData  [struct; ce-only; CE 6.0..699] */
struct XRDependencyPropertyMetaData
{
 DWORD Size;
 PFN_PROPERTY_CHANGE pfnPropertyChangeNotification;
 PFN_TYPE_CONVERTER pfnTypeConverter;
 XRValue DefaultValue;
};

/* XRDragCompletedEventArgs  [struct; ce-only; CE 6.0..699] */
struct XRDragCompletedEventArgs : XRRoutedEventArgs{
 double HorizontalChange;
 double VerticalChange;
 bool Cancelled;
};

/* XRDragDeltaEventArgs  [struct; ce-only; CE 6.0..699] */
struct XRDragDeltaEventArgs : XRRoutedEventArgs{
 double HorizontalDelta;
 double VeriticalDelta;
};

/* XRDragStartedEventArgs  [struct; ce-only; CE 6.0..699] */
struct XRDragStartedEventArgs : XRRoutedEventArgs{
 double VerticalOffset;
 double HorizontalOffset;
};

/* XRDuration  [struct; ce-only; CE 6.0..699] */
struct XRDuration{
 enum _DurationType{
 DurationType_Automatic,
 DurationType_TimeSpan,
 DurationType_Forever
 };
 XRTimeSpan TimeSpan;
 _DurationType DurationType;
};

/* XREventArgs  [struct; ce-only; CE 6.0..699] */
struct XREventArgs{
 UINT Size;
};

/* XRFillBehavior  [enum; ce-only; CE 6.0..699] */
enum XRFillBehavior{
 XRFillBehavior_HoldEnd=0,
 XRFillBehavior_Stop=1
};

/* XRFillRule  [enum; ce-only; CE 6.0..699] */
enum XRFillRule
{
 XRFillRule_EvenOdd=0,
 XRFillRule_Nonzero=1
};

/* XRFontStretch  [enum; ce-only; CE 6.0..699] */
enum XRFontStretch{
 XRFontStretch_UltraCondensed=1,
 XRFontStretch_ExtraCondensed=2,
 XRFontStretch_Condensed=3,
 XRFontStretch_SemiCondensed=4,
 XRFontStretch_Normal=5,
 XRFontStretch_Medium=5,
 XRFontStretch_SemiExpanded=6,
 XRFontStretch_Expanded=7,
 XRFontStretch_ExtraExpanded=8,
 XRFontStretch_UltraExpanded=9
};

/* XRFontStyle  [enum; ce-only; CE 6.0..699] */
enum XRFontStyle{
 XRFontStyle_Normal=0,
 XRFontStyle_Oblique=1,
 XRFontStyle_Italic=2
};

/* XRFontWeight  [enum; ce-only; CE 6.0..699] */
enum XRFontWeight{
 XRFontWeight_Thin=100,
 XRFontWeight_ExtraLight=200,
 XRFontWeight_Light=300,
 XRFontWeight_Normal=400,
 XRFontWeight_Medium=500,
 XRFontWeight_SemiBold=600,
 XRFontWeight_Bold=700,
 XRFontWeight_ExtraBold=800,
 XRFontWeight_Black=900,
 XRFontWeight_ExtraBlack=950
};

/* XRGradientSpreadMethod  [enum; ce-only; CE 6.0..699] */
enum XRGradientSpreadMethod{
 XRGradientSpreadMethod_Pad=0,
 XRGradientSpreadMethod_Reflect=1,
 XRGradientSpreadMethod_Repeat=2
};

/* XRGridLength  [struct; ce-only; CE 6.0..699] */
struct XRGridLength{
 float UnitValue;
 XRGridUnitType UnitType;
};

/* XRGridUnitType  [enum; ce-only; CE 6.0..699] */
enum XRGridUnitType{
 XRGridUnitType_Auto=0,
 XRGridUnitType_Pixel=1,
 XRGridUnitType_Star=2
};

/* XRHorizontalAlignment  [enum; ce-only; CE 6.0..699] */
enum XRHorizontalAlignment{
 XRHorizontalAlignment_Left=0,
 XRHorizontalAlignment_Center=1,
 XRHorizontalAlignment_Right=2,
 XRHorizontalAlignment_Stretch=3
};

/* XRKeyboardNavigationMode  [enum; ce-only; CE 6.0..699] */
enum XRKeyboardNavigationMode{
 XRKeyboardNavigationMode_Local=0,
 XRKeyboardNavigationMode_Cycle=1,
 XRKeyboardNavigationMode_Once=2
};

/* XRKeyEventArgs  [struct; ce-only; CE 6.0..699] */
struct XRKeyEventArgs : XRRoutedEventArgs{
 BOOL Handled;
 UINT PlatformKeyCode;
};

/* XRKeyTime  [struct; ce-only; CE 6.0..699] */
struct XRKeyTime : public XRTimeSpan
{
};

/* XRLineStackingStrategy  [enum; ce-only; CE 6.0..699] */
enum XRLineStackingStrategy{
 XRLineStackingStrategy_MaxHeight=0,
 XRLineStackingStrategy_BlockLineHeight=1
};

/* XRMouseButtonEventArgs  [struct; ce-only; CE 6.0..699] */
struct XRMouseButtonEventArgs : XRMouseEventArgs{
 BOOL Handled;
};

/* XRMouseEventArgs  [struct; ce-only; CE 6.0..699] */
struct XRMouseEventArgs : XRRoutedEventArgs{
 XRPoint Position;
 IXRStylusInfo *pStylusInfo;
 IXRStylusPointCollection *pStylusPoints;
};

/* XROrientation  [enum; ce-only; CE 6.0..699] */
enum XROrientation{
 XROrientation_Vertical=0,
 XROrientation_Horizontal=1
};

/* XRPenLineCap  [enum; ce-only; CE 6.0..699] */
enum XRPenLineCap{
 XRPenLineCap_Flat=0,
 XRPenLineCap_Square=1,
 XRPenLineCap_Round=2,
 XRPenLineCap_Triangle=3
};

/* XRPenLineJoin  [enum; ce-only; CE 6.0..699] */
enum XRPenLineJoin{
 XRPenLineJoin_Miter=0,
 XRPenLineJoin_Bevel=1,
 XRPenLineJoin_Round=2
};

/* XRPoint  [struct; ce-only; CE 6.0..699] */
struct XRPoint{
 float x;
 float y;
};

/* XRRect  [struct; ce-only; CE 6.0..699] */
struct XRRect{
 float left;
 float top;
 float right;
 float bottom;
};

/* XRRepeatBehavior  [struct; ce-only; CE 6.0..699] */
struct XRRepeatBehavior{
 enum RepeatBehaviorType{
 RepeatBehaviorType_IterationCount,
 RepeatBehaviorType_RepeatDuration,
 RepeatBehaviorType_Forever
 };
 float IterationCount;
 XRTimeSpan RepeatDuration;
 RepeatBehaviorType BehaviorType;
};

/* XRRoutedEventArgs  [struct; ce-only; CE 6.0..699] */
struct XRRoutedEventArgs : XREventArgs{
 IXRDependencyObject *pSource;
};

/* XRScrollBarVisibility  [enum; ce-only; CE 6.0..699] */
enum XRScrollBarVisibility
{
 XRScrollBarVisibility_Disabled = 0,
 XRScrollBarVisibility_Auto,
 XRScrollBarVisibility_Hidden,
 XRScrollBarVisibility_Visible
};

/* XRScrollChangedEventArgs  [struct; ce-only; CE 6.0..699] */
struct XRScrollChangedEventArgs : XRRoutedEventArgs
{
 float XOffset;
 float YOffset;
};

/* XRScrollEventArgs  [struct; ce-only; CE 6.0..699] */
struct XRScrollEventArgs : XRRoutedEventArgs
{
 float NewValue;
 XRScrollEventType ScrollEventType;
};

/* XRScrollEventType  [enum; ce-only; CE 6.0..699] */
enum XRScrollEventType{
 XRScrollEventType_EndScroll = 8,
 XRScrollEventType_First = 6,
 XRScrollEventType_LargeDecrement = 2,
 XRScrollEventType_LargeIncrement = 3,
 XRScrollEventType_Last = 7,
 XRScrollEventType_SmallDecrement = 0,
 XRScrollEventType_SmallIncrement = 1,
 XRScrollEventType_ThumbPosition = 4,
 XRScrollEventType_ThumbTrack = 5
};

/* XRSize  [struct; ce-only; CE 6.0..699] */
struct XRSize{
 float cx;
 float cy;
};

/* XRSizeChangedEventArgs  [struct; ce-only; CE 6.0..699] */
struct XRSizeChangedEventArgs : XRRoutedEventArgs
{
 XRSize PreviousSize;
 XRSize NewSize;
};

/* XRStretch  [enum; ce-only; CE 6.0..699] */
enum XRStretch{
 XRStretch_None=0,
 XRStretch_Fill=1,
 XRStretch_Uniform=2,
 XRStretch_UniformToFill=3
};

/* XRStyleSimulations  [enum; ce-only; CE 6.0..699] */
enum XRStyleSimulations{
 XRStyleSimulations_None=0,
 XRStyleSimulations_BoldSimulation=1,
 XRStyleSimulations_ItalicSimulation=2,
 XRStyleSimulations_BoldItalicSimulation=3
};

/* XRSweepDirection  [enum; ce-only; CE 6.0..699] */
enum XRSweepDirection
{
 XRSweepDirection_Counterclockwise=0,
 XRSweepDirection_Clockwise=1
};

/* XRTextAlignment  [enum; ce-only; CE 6.0..699] */
enum XRTextAlignment{
 XRTextAlignment_Center=0,
 XRTextAlignment_Left=1,
 XRTextAlignment_Right=2
};

/* XRTextChangedEventArgs  [struct; ce-only; CE 6.0..699] */
struct XRTextChangedEventArgs : XRRoutedEventArgs{
};

/* XRTextDecorationType  [enum; ce-only; CE 6.0..699] */
enum XRTextDecorationType{
 XRTextDecorationType_None=0,
 XRTextDecorationType_Underline=1
};

/* XRTextWrapping  [enum; ce-only; CE 6.0..699] */
enum XRTextWrapping{
 XRTextWrapping_NoWrap = 1,
 XRTextWrapping_Wrap = 2
};

/* XRThickness  [struct; ce-only; CE 6.0..699] */
struct XRThickness{
 float Left;
 float Top;
 float Right;
 float Bottom;
};

/* XRThreeState  [enum; ce-only; CE 6.0..699] */
enum XRThreeState
{
 XRThreeState_Unchecked = 0,
 XRThreeState_Checked,
 XRThreeState_Indeterminate
};

/* XRTimeSpan  [struct; ce-only; CE 6.0..699] */
struct XRTimeSpan
{
 XRTimeSpan(){};
 XRTimeSpan(__int64 TotalTicks)
 XRTimeSpan(int Days, int Hours, int Minutes, int Seconds, 
 int Milliseconds)
 static const int MinutesPerDay = 3600;
 static const int HoursPerDay = 24;
 static const int MinutesPerHour = 60;
 static const int MillisecondPerSecond = 1000;
 __int64 TotalSeconds()
 __int64 TotalMinutes()
 __int64 TotalHours()
 __int64 TotalMilliseconds()
 static __int64 FromSeconds(double Value)
 static __int64 Interval(double Value, int scale)
 __int64 Ticks;
 static const __int64 TicksPerDay = 864000000000;
 static const __int64 TicksPerHour = 36000000000;
 static const __int64 TicksPerMinute = 600000000;
 static const __int64 TicksPerSecond = 10000000;
 static const __int64 TicksPerMillisecond = 10000;
};

/* XRVerticalAlignment  [enum; ce-only; CE 6.0..699] */
enum XRVerticalAlignment{
 XRVerticalAlignment_Top=0,
 XRVerticalAlignment_Center=1,
 XRVerticalAlignment_Bottom=2,
 XRVerticalAlignment_Stretch=3
};

/* XRVisibility  [enum; ce-only; CE 6.0..699] */
enum XRVisibility{
 XRVisibility_Visible = 0,
 XRVisibility_Collapsed = 1
};

/* XRWindowCreateParams  [struct; ce-only; CE 6.0..699] */
struct XRWindowCreateParams{
 DWORD Style;
 DWORD ExStyle;
 const WCHAR *pTitle;
 UINT Left;
 UINT Top;
 UINT Width;
 UINT Height;
 XR_HOOKPROC pHookProc;
 VOID *pvUserParam;
 bool AllowsMultipleThreadAccess;
 HWND ParentWindow;
};

/* XRXamlSource  [struct; ce-only; CE 6.0..699] */
struct XRXamlSource {
 enum SourceType {
 XRS_STRING = 0,
 XRS_FILENAME,
 XRS_RESOURCE,
 XRS_STREAM
 };
 SourceType Type; 
 union{
 const WCHAR *pStr; 
 IStream *pStream;
 struct tagResouce {
 HMODULE hMod;
 const WCHAR *pResType;
 const WCHAR *pResID;
 } Resource;
 } Value;
 Void SetFile(const WCHAR *psz) {
 Type = XRS_FILENAME; Value.pStr = psz;
 }
 void SetString(const WCHAR *psz) {
 Type = XRS_STRING; Value.pStr = psz;
 }
 void SetResource(HMODULE h, const WCHAR *pType, const WCHAR *pID) {
 Type = XRS_RESOURCE;
 Value.Resource.hMod = h;
 Value.Resource.pResType = pType;
 Value.Resource.pResID = pID;
 }
 void SetStream(IStream* p) {
 Type = XRS_STREAM; Value.pStream = p; 
 }
};
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* FreeXRValue  [function; ce-only; CE 6.0..699] */
void WINAPI FreeXRValue(
 XRValue* pValue
);

/* GetXRApplicationInstance  [function; ce-only; CE 6.0..699] */
HRESULT WINAPI GetXRApplicationInstance(
 IXRApplication** ppApplication
);

/* IXRApplication::AddResourceModule  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE AddResourceModule(
 HINSTANCE hInstResource
) = 0;

/* IXRApplication::CreateHostFromElementTree  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE CreateHostFromElementTree(
 IXRUIElement* pElementTree,
 XRWindowCreateParams* pCreateParams,
 IXRVisualHost** ppHost
) = 0;

/* IXRApplication::CreateHostFromXaml  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE CreateHostFromXaml(
 XRXamlSource* pSource,
 XRWindowCreateParams* pCreateParams,
 IXRVisualHost** ppHost
) = 0;

/* IXRApplication::CreateObject  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE CreateObject(
 REFIID riid,
 IXRDependencyObject** ppObject
) = 0;

/* IXRApplication::GetResourceDictionary  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetResourceDictionary(
 IXRResourceDictionary** ppResourceDictionary
) = 0;

/* IXRApplication::LoadImageFromFile  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE LoadImageFromFile(
 const WCHAR* pFileName,
 IBitmapImage** ppImage
) = 0;

/* IXRApplication::LoadImageFromResource  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE LoadImageFromResource(
 HINSTANCE hInstResource,
 const WCHAR* pResourceName,
 const WCHAR* pResourceType,
 IBitmapImage** ppImage
) = 0;

/* IXRApplication::LoadResourceDictionary  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE LoadResourceDictionary(
 XRXamlSource* pSource,
 IXRResourceDictionary** ppDictionary
) = 0;

/* IXRApplication::ParseXaml  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE ParseXaml(
 XRXamlSource* pSource,
 IXRDependencyObject** ppDependencyObject
) = 0;

/* IXRApplication::ParseXamlWithExistingRoot  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE ParseXamlWithExistingRoot(
 XRXamlSource* pSource,
 IXRDependencyObject* pExistingRoot
) = 0;

/* IXRApplication::RegisterAttachedProperty  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE RegisterAttachedProperty(
 const WCHAR* pPropertyName,
 VALUE_TYPE vType,
 UINT controlId,
 XRDependencyPropertyMetaData* pMetaData
 ) = 0;

/* IXRApplication::RegisterControl  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE RegisterControl(
 REFIID iid,
 const WCHAR* pControlName,
 const WCHAR* pNamespace,
 PFN_CREATE_CONTROL pfCreation,
 UINT* pControlId
) = 0;

/* IXRApplication::RegisterDependencyProperty  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE RegisterDependencyProperty(
 const WCHAR* pPropertyName,
 VALUE_TYPE vType,
 UINT controlId,
 XRDependencyPropertyMetaData* pMetaData,
 DEPENDENCY_PROPERTY_ID* pDependencyPropertyIdentifier
) = 0;

/* IXRApplication::RegisterResourceManager  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE RegisterResourceManager(
 IXRResourceManager* pResourceManager
) = 0;

/* IXRApplication::RemoveResourceModule  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE RemoveResourceModule(
 HINSTANCE hInstResource
) = 0;

/* IXRApplication::StartProcessing  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE StartProcessing(
 UINT* pExitCode
) = 0;

/* IXRApplication::StopProcessing  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE StopProcessing(
 UINT ExitCode
) = 0;

/* IXRArcSegment::GetIsLargeArc  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetIsLargeArc(
 __out bool *pIsLargeArc
) = 0;

/* IXRArcSegment::GetPoint  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetPoint(
 __out XRPoint *pPoint
) = 0;

/* IXRArcSegment::GetRotationAngle  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetRotationAngle(
 __out float *pRotationAngle
) = 0;

/* IXRArcSegment::GetSize  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetSize(
 __out XRSize *pSize
) = 0;

/* IXRArcSegment::GetSweepDirection  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetSweepDirection(
 __out XRSweepDirection *pSweepDirection
) = 0;

/* IXRArcSegment::SetIsLargeArc  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetIsLargeArc(
 __in bool IsLargeArc
) = 0;

/* IXRArcSegment::SetPoint  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetPoint(
 __in XRPoint *pPoint
) = 0;

/* IXRArcSegment::SetRotationAngle  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetRotationAngle(
 __in float RotationAngle
) = 0;

/* IXRArcSegment::SetSize  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetSize(
 __in XRSize *pSize
) = 0;

/* IXRArcSegment::SetSweepDirection  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetSweepDirection(
 __in XRSweepDirection SweepDirection
) = 0;

/* IXRBeginStoryboard::GetStoryboard  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetStoryboard(
 IXRStoryboard** ppStoryboard
) = 0;

/* IXRBeginStoryboard::SetStoryboard  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetStoryboard(
 IXRStoryboard* pStoryboard
) = 0;

/* IXRBezierSegment::GetPoint1  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetPoint1(
 __out XRPoint *pPoint1
) = 0;

/* IXRBezierSegment::GetPoint2  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetPoint2(
 __out XRPoint *pPoint2
) = 0;

/* IXRBezierSegment::GetPoint3  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetPoint3(
 __out XRPoint *pPoint3
) = 0;

/* IXRBezierSegment::SetPoint1  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetPoint1(
 __in XRPoint *pPoint1
) = 0;

/* IXRBezierSegment::SetPoint2  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetPoint2(
 __in XRPoint *pPoint2
) = 0;

/* IXRBezierSegment::SetPoint3  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetPoint3(
 __in XRPoint *pPoint3
) = 0;

/* IXRBitmapCache::GetRenderAtScale  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetRenderAtScale(
 float* pRenderAtScale
) = 0;

/* IXRBitmapCache::SetRenderAtScale  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetRenderAtScale(
 float RenderAtScale
) = 0;

/* IXRBitmapImage::GetUriSource  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetUriSource(
 WCHAR* *pUriSource
) = 0;

/* IXRBitmapImage::SetBitmapSource  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetBitmapSource(
 HBITMAP hBitmap
) = 0;

/* IXRBitmapImage::SetUriSource  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetUriSource(
 const WCHAR* pUriSource
) = 0;

/* IXRBorder::GetBackground  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetBackground(
 __out IXRBrush **ppBackground
) = 0;

/* IXRBorder::GetBorderBrush  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetBorderBrush(
 IXRBrush **ppBorderBrush
) = 0;

/* IXRBorder::GetBorderThickness  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetBorderThickness(
 __out XRThickness *pBorderThickness
) = 0;

/* IXRBorder::GetChild  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetChild(
 IXRUIElement **ppChild
) = 0;

/* IXRBorder::GetCornerRadius  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetCornerRadius(
 __out XRCornerRadius *pCornerRadius
) = 0;

/* IXRBorder::GetPadding  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetPadding(
 __out XRThickness *pPadding
) = 0;

/* IXRBorder::SetBackground  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetBackground(
 __in IXRBrush *pBackground
) = 0;

/* IXRBorder::SetBorderBrush  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetBorderBrush(
__in IXRBrush *pBorderBrush
) = 0;

/* IXRBorder::SetBorderThickness  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetBorderThickness(
 __in XRThickness *pBorderThickness
) = 0;

/* IXRBorder::SetChild  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetChild(
 __in IXRUIElement *pChild
) = 0;

/* IXRBorder::SetCornerRadius  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetCornerRadius(
 __in XRCornerRadius *pCornerRadius
) = 0;

/* IXRBorder::SetPadding  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetPadding(
 __in XRThickness *pPadding
) = 0;

/* IXRBrush::GetOpacity  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetOpacity(
 float* pOpacity
) = 0;

/* IXRBrush::GetRelativeTransform  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetRelativeTransform(
 IXRTransform** ppRelativeTransform
) = 0;

/* IXRBrush::GetTransform  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetTransform(
 IXRTransform** ppTransform
) = 0;

/* IXRBrush::SetOpacity  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetOpacity(
 float Opacity
) = 0;

/* IXRBrush::SetRelativeTransform  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetRelativeTransform(
 IXRTransform* pRelativeTransform
) = 0;

/* IXRBrush::SetTransform  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetTransform(
 IXRTransform* pTransform
) = 0;

/* IXRButtonBase::AddClickEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE AddClickEventHandler(
 IXRDelegate<XRMouseButtonEventArgs>* pDelegate
) = 0;

/* IXRButtonBase::GetClickMode  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetClickMode(
 XRClickMode *pClickModeProperty
) = 0;

/* IXRButtonBase::GetIsFocused  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetIsFocused(
 bool *pClickModeProperty
) = 0;

/* IXRButtonBase::GetIsMouseOver  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetIsMouseOver(
 bool *pValue
) = 0;

/* IXRButtonBase::GetIsPressed  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetIsPressed(
 bool *pPressedProperty
) = 0;

/* IXRButtonBase::RemoveClickEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE RemoveClickEventHandler(
 IXRDelegate<XRMouseButtonEventArgs>* pDelegate
) = 0;

/* IXRButtonBase::SetClickMode  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetClickMode(
 XRClickMode ClickModeProperty
) = 0;

/* IXRCollection<In_T, Out_T>::Add  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE Add(
 In_T pvalue, 
 int *pIndex
) = 0;

/* IXRCollection<In_T, Out_T>::Clear  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE Clear(
 void
) = 0;

/* IXRCollection<In_T, Out_T>::GetCount  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetCount(
 int *pCount
) = 0;

/* IXRCollection<In_T, Out_T>::GetItem  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetItem(
 int ItemIndex, 
 Out_T* pT
) = 0;

/* IXRCollection<In_T, Out_T>::IndexOf  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE IndexOf(
 In_T pvalue, 
 int *pIndex
) = 0;

/* IXRCollection<In_T, Out_T>::Insert  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE Insert(
 int index, 
 In_T pvalue
) = 0;

/* IXRCollection<In_T, Out_T>::Remove  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE Remove(
 In_T pvalue
) = 0;

/* IXRCollection<In_T, Out_T>::RemoveAt  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE RemoveAt(
 int index
) = 0;

/* IXRColorAnimation::GetBy  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetBy(
 COLORREF* pBy
) = 0;

/* IXRColorAnimation::GetFrom  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetFrom(
 COLORREF* pFrom
) = 0;

/* IXRColorAnimation::GetTo  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetTo(
 COLORREF* pTo
) = 0;

/* IXRColorAnimation::SetBy  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetBy(
 COLORREF By
) = 0;

/* IXRColorAnimation::SetFrom  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetFrom(
 COLORREF From
) = 0;

/* IXRColorAnimation::SetTo  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetTo(
 COLORREF To
) = 0;

/* IXRColorAnimationUsingKeyFrames::GetKeyFrames  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetKeyFrames(
 IXRColorKeyFrameCollection** ppKeyFrames
) = 0;

/* IXRColorKeyFrame::GetKeyTime  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetKeyTime(
 XRKeyTime* pKeyTime
) = 0;

/* IXRColorKeyFrame::GetValue  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetValue(
 COLORREF* pValue
) = 0;

/* IXRColorKeyFrame::SetKeyTime  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetKeyTime(
 XRKeyTime* pKeyTime
) = 0;

/* IXRColorKeyFrame::SetValue  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetValue(
 COLORREF Value
) = 0;

/* IXRColumnDefinition::GetActualWidth  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetActualWidth(
 float *pActualWidth
) = 0;

/* IXRColumnDefinition::GetMaxWidth  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetMaxWidth(
 float *pMaxWidth
) = 0;

/* IXRColumnDefinition::GetMinWidth  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetMinWidth(
 float *pMinWidth
) = 0;

/* IXRColumnDefinition::GetWidth  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetWidth(
 XRGridLength *pWidth
) = 0;

/* IXRColumnDefinition::SetMaxWidth  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetMaxWidth(
 float MaxWidth
) = 0;

/* IXRColumnDefinition::SetMinWidth  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetMinWidth(
 float MinWidth
) = 0;

/* IXRColumnDefinition::SetWidth  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetWidth(
 XRGridLength *pWidth
) = 0;

/* IXRComboBox::AddDropDownClosedHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE AddDropDownClosedHandler(
 IXRDelegate<XREventArgs>* pDelegate
) = 0;

/* IXRComboBox::AddDropDownOpenedHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE AddDropDownOpenedHandler(
 IXRDelegate<XREventArgs>* pDelegate
) = 0;

/* IXRComboBox::GetIsDropDownOpen  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetIsDropDownOpen(
 bool *pValue
) = 0;

/* IXRComboBox::GetIsSelectionBoxHighlighted  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetIsSelectionBoxHighlighted(
 bool *pValue
) = 0;

/* IXRComboBox::GetItemContainerStyle  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetItemContainerStyle(
 IXRStyle **ppValue
) = 0;

/* IXRComboBox::GetMaxDropDownHeight  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetMaxDropDownHeight(
 float *pValue
) = 0;

/* IXRComboBox::GetSelectionBoxItem  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetSelectionBoxItem(
 IXRDependencyObject **ppValue
) = 0;

/* IXRComboBox::RemovedDropDownOpenedHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE RemoveDropDownOpenedHandler(
 IXRDelegate<XREventArgs>* pDelegate
) = 0;};

/* IXRComboBox::RemoveDropDownClosedHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE RemoveDropDownClosedHandler(
 IXRDelegate<XREventArgs>* pDelegate
) = 0;

/* IXRComboBox::SetIsDropDownOpen  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetIsDropDownOpen(
 bool Value
) = 0;

/* IXRComboBox::SetItemContainerStyle  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetItemContainerStyle(
 IXRStyle *pValue
) = 0;

/* IXRComboBox::SetMaxDropDownHeight  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetMaxDropDownHeight(
 float Value
) = 0;

/* IXRContentControl::GetContent  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetContent(
 XRValue* pContent
) = 0;

/* IXRContentControl::SetContent  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetContent(
 XRValue* pContent
) = 0;

/* IXRContentPresenter::GetContent  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetContent(
 XRValue* pContent
) = 0;

/* IXRContentPresenter::SetContent  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetContent(
 XRValue * pContent
) = 0;

/* IXRControl::AddIsEnabledChangedEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE AddIsEnabledChangedEventHandler(
 IXRDelegate<XRValueChangedEventArgs<bool> >* pDelegate
)= 0;

/* IXRControl::Focus  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE Focus(
 bool* pValue
) = 0;

/* IXRControl::GetBackground  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetBackground(
 IXRBrush **ppBackground
) = 0;

/* IXRControl::GetBorderBrush  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetBorderBrush(
 IXRBrush **ppBorderBrush
) = 0;

/* IXRControl::GetBorderThickness  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetBorderThickness(
 XRThickness *pBorderThickness
) = 0;

/* IXRControl::GetFontFamily  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetFontFamily(
 BSTR* pFontFamily
) = 0;

/* IXRControl::GetFontSize  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetFontSize(
 float *pFontSize
) = 0;

/* IXRControl::GetFontStretch  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetFontStretch(
 XRFontStretch* pFontStretch
) = 0;

/* IXRControl::GetFontStyle  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetFontStyle(
 XRFontStyle* pFontStyle
) = 0;

/* IXRControl::GetFontWeight  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetFontWeight(
 XRFontWeight* pFontWeight
) = 0;

/* IXRControl::GetForeground  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetForeground(
 IXRBrush **ppForeground
) = 0;

/* IXRControl::GetHorizontalContentAlignment  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetHorizontalContentAlignment(
 XRHorizontalAlignment* pHorizontalContentAlignment
) = 0;

/* IXRControl::GetIsEnabled  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetIsEnabled(
 bool *pIsEnabled
) = 0;

/* IXRControl::GetIsTabStop  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetIsTabStop(
 bool *pIsTabStop
) = 0;

/* IXRControl::GetPadding  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetPadding(_
 XRThickness *pPadding
) = 0;

/* IXRControl::GetTabIndex  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetTabIndex(
 int *pTabIndex
) = 0;

/* IXRControl::GetTabNavigation  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetTabNavigation(
 XRKeyboardNavigationMode* pTabNavigation
) = 0;

/* IXRControl::GetTemplate  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetTemplate(
 IXRControlTemplate **ppTemplate
) = 0;

/* IXRControl::GetVerticalContentAlignment  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetVerticalContentAlignment(
 XRVerticalAlignment* pVerticalContentAlignment
) = 0;

/* IXRControl::GoToVisualState  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GoToVisualState(
 const WCHAR *pStateName,
 bool UseTransitions
) = 0;

/* IXRControl::RemoveIsEnabledChangedEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE RemoveIsEnabledChangedEventHandler(
 IXRDelegate<XRValueChangedEventArgs<bool> >* pDelegate
)= 0;

/* IXRControl::SetBackground  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetBackground(
 IXRBrush *pBackground
) = 0;

/* IXRControl::SetBorderBrush  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetBorderBrush(
 IXRBrush *pBorderBrush
) = 0;

/* IXRControl::SetBorderThickness  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetBorderThickness(
 XRThickness *pBorderThickness
) = 0;

/* IXRControl::SetFontFamily  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetFontFamily(
 const WCHAR* pFontFamily
) = 0;

/* IXRControl::SetFontSize  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetFontSize(
 float FontSize
) = 0;

/* IXRControl::SetFontStretch  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetFontStretch(
 XRFontStretch FontStretch
) = 0;

/* IXRControl::SetFontStyle  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetFontStyle(
 XRFontStyle FontStyle
) = 0;

/* IXRControl::SetFontWeight  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetFontWeight(
 XRFontWeight FontWeight
) = 0;

/* IXRControl::SetForeground  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetForeground(
 IXRBrush *pForeground
) = 0;

/* IXRControl::SetHorizontalContentAlignment  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetHorizontalContentAlignment(
 XRHorizontalAlignment HorizontalContentAlignment
) = 0;

/* IXRControl::SetIsEnabled  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetIsEnabled(
 bool IsEnabled
) = 0;

/* IXRControl::SetIsTabStop  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetIsTabStop(
 bool IsTabStop
) = 0;

/* IXRControl::SetPadding  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetPadding(
 XRThickness *pPadding
) = 0;

/* IXRControl::SetTabIndex  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetTabIndex(
 int TabIndex
) = 0;

/* IXRControl::SetTabNavigation  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetTabNavigation(
 XRKeyboardNavigationMode TabNavigation
) = 0;

/* IXRControl::SetTemplate  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetTemplate(
 IXRControlTemplate *pTemplate
) = 0;

/* IXRControl::SetVerticalContentAlignment  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetVerticalContentAlignment(
 XRVerticalAlignment VerticalContentAlignment
) = 0;

/* IXRControlTemplate::GetTargetType  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetTargetType(
 IID *pIID
) = 0;

/* IXRControlTemplate::SetTargetType  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetTargetType(
 const IID iid
) = 0;

/* IXRCustomUserControl::GetXRObject  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetXRObject(
 IXRDependencyObject** ppXRObject
) = 0;

/* IXRCustomUserControlBase::GetPropertyValue  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetPropertyValue(
 DEPENDENCY_PROPERTY_ID dependencyPropertyId,
 XRValue* pXRValue
) = 0;

/* IXRCustomUserControlBase::SetPropertyValue  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetPropertyValue(
 DEPENDENCY_PROPERTY_ID dependencyPropertyId,
 XRValue* pXRValue
 ) = 0;

/* IXRDependencyObject::GetAttachedProperty  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetAttachedProperty(
 const WCHAR *pDP,
 bool *pValue
) = 0;

/* IXRDependencyObject::GetName  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetName(
 BSTR* pName
) = 0;

/* IXRDependencyObject::SetAttachedProperty  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetAttachedProperty(
 const WCHAR *pDP,
 XRCornerRadius *pValue
) = 0;

/* IXRDependencyObject::SetName  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetName(
 const WCHAR* pName
) = 0;

/* IXRDoubleAnimation::GetBy  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetBy(
 float* pBy
) = 0;

/* IXRDoubleAnimation::GetFrom  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetFrom(
 float* pFrom
) = 0;

/* IXRDoubleAnimation::GetTo  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetTo(
 float* pTo
) = 0;

/* IXRDoubleAnimation::SetBy  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetBy(
 float By
) = 0;

/* IXRDoubleAnimation::SetFrom  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetFrom(
 float From
) = 0;

/* IXRDoubleAnimation::SetTo  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetTo(
 float To
) = 0;

/* IXRDoubleAnimationUsingKeyFrames::GetKeyFrames  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetKeyFrames(
 IXRDoubleKeyFrameCollection** ppKeyFrames
) = 0;

/* IXRDoubleKeyFrame::GetKeyTime  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetKeyTime(
 XRKeyTime* pKeyTime
) = 0;

/* IXRDoubleKeyFrame::GetValue  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetValue(
 float* pValue
) = 0;

/* IXRDoubleKeyFrame::SetKeyTime  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetKeyTime(
 XRKeyTime* pKeyTime
) = 0;

/* IXRDoubleKeyFrame::SetValue  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetValue(
 float Value
) = 0;

/* IXRDrawingAttributes::GetColor  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetColor(
 __out COLORREF *pColor
) = 0;

/* IXRDrawingAttributes::GetHeight  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetHeight(
 __out float *pHeight
) = 0;

/* IXRDrawingAttributes::GetOutlineColor  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetOutlineColor(
 __out COLORREF *pOutlineColor
) = 0;

/* IXRDrawingAttributes::GetWidth  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetWidth(
 __out float *pWidth
) = 0;

/* IXRDrawingAttributes::SetColor  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetColor(
 __in COLORREF Color
) = 0;

/* IXRDrawingAttributes::SetHeight  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetHeight(
 __in float Height
) = 0;

/* IXRDrawingAttributes::SetOutlineColor  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetOutlineColor(
 __in COLORREF OutlineColor
) = 0;

/* IXRDrawingAttributes::SetWidth  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetWidth(
 __in float Width
) = 0;

/* IXREllipseGeometry::GetCenter  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetCenter(
 __out XRPoint *pCenter
) = 0;

/* IXREllipseGeometry::GetRadiusX  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetRadiusX(
 __out float *pRadiusX
) = 0;

/* IXREllipseGeometry::GetRadiusY  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetRadiusY(
 __out float *pRadiusY
) = 0;

/* IXREllipseGeometry::SetCenter  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetCenter(
 __in XRPoint *pCenter
) = 0;

/* IXREllipseGeometry::SetRadiusX  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetRadiusX(
 __in float RadiusX
) = 0;

/* IXREllipseGeometry::SetRadiusY  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetRadiusY(
 __in float RadiusY
) = 0;

/* IXREventTrigger::GetActions  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetActions(
 IXRTriggerActionCollection** ppActions
) = 0;

/* IXREventTrigger::GetRoutedEvent  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetRoutedEvent(
 BSTR* pRoutedEvent
) = 0;

/* IXREventTrigger::SetRoutedEvent  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetRoutedEvent(
 const WCHAR* pRoutedEvent
) = 0;

/* IXRFrameworkElement::AddLoadedEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE AddLoadedEventHandler(
 IXRDelegate<XRRoutedEventArgs> *pDelegate
)= 0;

/* IXRFrameworkElement::AddSizeChangedEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE AddSizeChangedEventHandler(
 IXRDelegate<XRSizeChangedEventArgs>* pDelegate
)= 0;

/* IXRFrameworkElement::FindName  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE FindName(
 const WCHAR *pName,
 IXRDependencyObject** ppFoundObject
) = 0;

/* IXRFrameworkElement::GetActualHeight  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetActualHeight(
 float *pActualHeight
) = 0;

/* IXRFrameworkElement::GetActualWidth  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetActualWidth(
 float *pActualWidth
) = 0;

/* IXRFrameworkElement::GetActualX  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetActualX(
 float* pActualX
) = 0;

/* IXRFrameworkElement::GetActualY  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetActualY(
 float* pActualY
) = 0;

/* IXRFrameworkElement::GetHeight  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetHeight(
 float *pHeight
) = 0;

/* IXRFrameworkElement::GetHorizontalAlignment  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetHorizontalAlignment(
 XRHorizontalAlignment* pHorizontalAlignment
) = 0;

/* IXRFrameworkElement::GetMargin  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetMargin(
 XRThickness *pMargin
) = 0;

/* IXRFrameworkElement::GetMaxHeight  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetMaxHeight(
 float *pMaxHeight
) = 0;

/* IXRFrameworkElement::GetMaxWidth  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetMaxWidth(
 float *pMaxWidth
) = 0;

/* IXRFrameworkElement::GetMinHeight  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetMinHeight(
 float *pMinHeight
) = 0;

/* IXRFrameworkElement::GetMinWidth  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetMinWidth(
 float *pMinWidth
) = 0;

/* IXRFrameworkElement::GetParent  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetParent(
 IXRDependencyObject **ppParent
) = 0;

/* IXRFrameworkElement::GetResources  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetResources(
 IXRResourceDictionary **ppResources
) = 0;

/* IXRFrameworkElement::GetStyle  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetStyle(
 IXRStyle **ppStyle
) = 0;

/* IXRFrameworkElement::GetTag  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetTag(
 BSTR* pTag
) = 0;

/* IXRFrameworkElement::GetTriggers  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetTriggers(
 IXRTriggerCollection **ppTriggers
) = 0;

/* IXRFrameworkElement::GetVerticalAlignment  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetVerticalAlignment(
 XRVerticalAlignment* pVerticalAlignment
) = 0;

/* IXRFrameworkElement::GetWidth  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetWidth(
 float *pWidth
) = 0;

/* IXRFrameworkElement::RemoveLoadedEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE RemoveLoadedEventHandler(
 IXRDelegate<XRRoutedEventArgs> *pDelegate
)= 0;

/* IXRFrameworkElement::RemoveSizeChangedEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE RemoveSizeChangedEventHandler(
 IXRDelegate<XRSizeChangedEventArgs>* pDelegate
)= 0;

/* IXRFrameworkElement::SetHeight  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetHeight(
 float Height
) = 0;

/* IXRFrameworkElement::SetHorizontalAlignment  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetHorizontalAlignment(
 XRHorizontalAlignment HorizontalAlignment
) = 0;

/* IXRFrameworkElement::SetMargin  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetMargin(
 XRThickness *pMargin
) = 0;

/* IXRFrameworkElement::SetMaxHeight  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetMaxHeight(
 float MaxHeight
t) = 0;

/* IXRFrameworkElement::SetMaxWidth  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetMaxWidth(
 float MaxWidth
) = 0;

/* IXRFrameworkElement::SetMinHeight  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetMinHeight(
 float MinHeight
) = 0;

/* IXRFrameworkElement::SetMinWidth  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetMinWidth(
 float MinWidth
) = 0;

/* IXRFrameworkElement::SetStyle  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetStyle(
 IXRStyle *pStyle
) = 0;

/* IXRFrameworkElement::SetTag  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetTag(
 const WCHAR* pTag
) = 0;

/* IXRFrameworkElement::SetVerticalAlignment  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetVerticalAlignment(
 XRVerticalAlignment VerticalAlignment
) = 0;

/* IXRFrameworkElement::SetWidth  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetWidth(
 float Width
) = 0;

/* IXRGeneralTransform::Transform  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE Transform(
 XRPoint *pPoint
) = 0;

/* IXRGeometry::GetBounds  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetBounds(
 __out XRRect *pBounds
) = 0;

/* IXRGeometry::GetTransform  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetTransform(
 __out IXRTransform **ppTransform
) = 0;

/* IXRGeometry::SetTransform  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetTransform (
 __in IXRTransform *pTransform
)=0;

/* IXRGeometryGroup::GetChildren  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetChildren(
 __out IXRGeometryCollection **ppChildren
) = 0;

/* IXRGeometryGroup::GetFillRule  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetFillRule(
 __out XRFillRule *pFillRule
) = 0;

/* IXRGeometryGroup::SetChildren  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetChildren(
 __in IXRGeometryCollection *pChildren
) = 0;

/* IXRGeometryGroup::SetFillRule  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetFillRule(
 __in XRFillRule FillRule
) = 0;

/* IXRGlyphs::GetFill  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetFill(
 IXRBrush **ppFill
) = 0;

/* IXRGlyphs::GetFontRenderingEmSize  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetFontRenderingEmSize(
 float *pFontRenderingEmSize
) = 0;

/* IXRGlyphs::GetFontUri  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetFontUri(
 WCHAR* *pFontUri
) = 0;

/* IXRGlyphs::GetIndices  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetIndices(
 WCHAR* *pIndices
) = 0;

/* IXRGlyphs::GetOriginX  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetOriginX(
 float *pOriginX
) = 0;

/* IXRGlyphs::GetOriginY  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetOriginY(
 float *pOriginY
) = 0;

/* IXRGlyphs::GetStyleSimulations  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetStyleSimulations(
 XRStyleSimulations* pStyleSimulations
) = 0;

/* IXRGlyphs::GetUnicodeString  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetUnicodeString(
 WCHAR* *pUnicodeString
) = 0;

/* IXRGlyphs::SetFill  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetFill(
 IXRBrush *pFill
) = 0;

/* IXRGlyphs::SetFontRenderingEmSize  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetFontRenderingEmSize(
 float FontRenderingEmSize
) = 0;

/* IXRGlyphs::SetFontUri  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetFontUri(
 WCHAR* FontUri
) = 0;

/* IXRGlyphs::SetIndices  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetIndices(
 WCHAR* Indices
) = 0;

/* IXRGlyphs::SetOriginX  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetOriginX(
 float OriginX
) = 0;

/* IXRGlyphs::SetOriginY  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetOriginY(
 float OriginY
) = 0;

/* IXRGlyphs::SetStyleSimulations  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetStyleSimulations(
 XRStyleSimulations StyleSimulations
) = 0;

/* IXRGlyphs::SetUnicodeString  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetUnicodeString(
 WCHAR* UnicodeString
) = 0;

/* IXRGradientBrush::GetColorInterpolationMode  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetColorInterpolationMode(
 XRColorInterpolationMode* pColorInterpolationMode
) = 0;

/* IXRGradientBrush::GetGradientStops  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetGradientStops(
 IXRGradientStopCollection** ppGradientStops
) = 0;

/* IXRGradientBrush::GetMappingMode  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetMappingMode(
 __out XRBrushMappingMode* pMappingMode
) = 0;

/* IXRGradientBrush::GetSpreadMethod  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetSpreadMethod(
 XRGradientSpreadMethod* pSpreadMethod
) = 0;

/* IXRGradientBrush::SetColorInterpolationMode  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetColorInterpolationMode(
 XRColorInterpolationMode ColorInterpolationMode
) = 0;

/* IXRGradientBrush::SetGradientStops  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetGradientStops(
 IXRGradientStopCollection* pGradientStops
) = 0;

/* IXRGradientBrush::SetMappingMode  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetMappingMode(
 XRBrushMappingMode MappingMode
) = 0;

/* IXRGradientBrush::SetSpreadMethod  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetSpreadMethod(
 XRGradientSpreadMethod SpreadMethod
) = 0;

/* IXRGradientStop::GetColor  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetColor(
 COLORREF* pColor
) = 0;

/* IXRGradientStop::GetOffset  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetOffset(
 float* pOffset
) = 0;

/* IXRGradientStop::SetColor  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetColor(
 COLORREF Color
) = 0;

/* IXRGradientStop::SetOffset  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetOffset(
 float Offset
) = 0;

/* IXRGrid::GetColumnDefinitions  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetColumnDefinitions(
 IXRColumnDefinitionCollection **ppColumnDefinitions
) = 0;

/* IXRGrid::GetRowDefinitions  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetRowDefinitions(
 IXRRowDefinitionCollection **ppRowDefinitions
) = 0;

/* IXRGrid::GetShowGridLines  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetShowGridLines(
 bool *pShowGridLines
) = 0;

/* IXRGrid::SetShowGridLines  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetShowGridLines(
 bool ShowGridLines
) = 0;

/* IXRHitTestResults::GetCount  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetCount(
 int *pCount
) = 0;

/* IXRHitTestResults::GetItem  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetItem(
 int ItemIndex,
 IXRDependencyObject** ppItem
) = 0;

/* IXRImage::AddImageFailedEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE AddImageFailedEventHandler(
 IXRDelegate<XREventArgs>* pDelegate
)= 0;

/* IXRImage::GetSource  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetSource(
 IXRImageSource** ppSource
) = 0;

/* IXRImage::GetStretch  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetStretch(
 XRStretch* pStretch
) = 0;

/* IXRImage::RemoveImageFailedEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE RemoveImageFailedEventHandler(
 IXRDelegate<XREventArgs>* pDelegate
)= 0;

/* IXRImage::SetSource  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetSource(
 IXRImageSource* pSource
) = 0;

/* IXRImage::SetStretch  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetStretch(
 XRStretch Stretch
) = 0;

/* IXRImageBrush::AddImageFailedEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE AddImageFailedEventHandler(
 IXRDelegate<XREventArgs>* pDelegate
)= 0;

/* IXRImageBrush::GetImageSource  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetImageSource(
 IXRImageSource** ppImageSource
) = 0;

/* IXRImageBrush::RemoveImageFailedEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE RemoveImageFailedEventHandler(
 IXRDelegate<XREventArgs>* pDelegate
)= 0;

/* IXRImageBrush::SetImageSource  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetImageSource(
 IXRImageSource* pImageSource
) = 0;

/* IXRInkPresenter::GetStrokes  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetStrokes(
 __out IXRStrokeCollection **ppStrokes
) = 0;

/* IXRInkPresenter::SetStrokes  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetStrokes(
 __in IXRStrokeCollection *pStrokes
) = 0;

/* IXRInline::GetFontFamily  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetFontFamily(
 BSTR* pFontFamily
) = 0;

/* IXRInline::GetFontSize  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetFontSize(
 float* pFontSize
) = 0;

/* IXRInline::GetFontStretch  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetFontStretch(
 XRFontStretch* pFontStretch
) = 0;

/* IXRInline::GetFontStyle  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetFontStyle(
 XRFontStyle* pFontStyle
) = 0;

/* IXRInline::GetFontWeight  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetFontWeight(
 XRFontWeight* pFontWeight
) = 0;

/* IXRInline::GetForeground  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetForeground(
 IXRBrush** ppForeground
) = 0;

/* IXRInline::GetTextDecoration  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetTextDecorations(
 XRTextDecorationType* pTextDecorations
) = 0;

/* IXRInline::SetFontFamily  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetFontFamily(
 const WCHAR* pFontFamily
) = 0;

/* IXRInline::SetFontSize  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetFontSize(
 float FontSize
) = 0;

/* IXRInline::SetFontStretch  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetFontStretch(
 XRFontStretch FontStretch
) = 0;

/* IXRInline::SetFontStyle  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetFontStyle(
 XRFontStyle FontStyle
) = 0;

/* IXRInline::SetFontWeight  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetFontWeight(
 XRFontWeight FontWeight
) = 0;

/* IXRInline::SetForeground  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetForeground(
 IXRBrush* pForeground
) = 0;

/* IXRInline::SetTextDecoration  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetTextDecorations(
 XRTextDecorationType TextDecorations
) = 0;

/* IXRItemsControl::GetItems  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetItems(
 IXRItemCollection** ppItems
) = 0;

/* IXRItemsControl::GetItemsPanel  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetItemsPanel(
 IXRItemsPanelTemplate** ppItemsPanel
) = 0;

/* IXRItemsControl::SetItemsPanel  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetItemsPanel(
 IXRItemsPanelTemplate* pItemsPanel
) = 0;

/* IXRKeySpline::GetControlPoint1  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetControlPoint1(
 XRPoint* pControlPoint1
) = 0;

/* IXRKeySpline::GetControlPoint2  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetControlPoint2(
 XRPoint* pControlPoint2
) = 0;

/* IXRKeySpline::SetControlPoint1  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetControlPoint1(
 XRPoint* pControlPoint1
) = 0;

/* IXRKeySpline::SetControlPoint2  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetControlPoint2(
 XRPoint* pControlPoint2
) = 0;

/* IXRLine::GetX1  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetX1(
 float* pX1
) = 0;

/* IXRLine::GetX2  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetX2(
 float* pX2
) = 0;

/* IXRLine::GetY1  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetY1(
 float* pY1
) = 0;

/* IXRLine::GetY2  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetY2(
 float* pY2
) = 0;

/* IXRLine::SetX1  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetX1(
 float X1
) = 0;

/* IXRLine::SetX2  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetX2(
 float X2
) = 0;

/* IXRLine::SetY1  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetY1(
 float Y1
) = 0;

/* IXRLine::SetY2  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetY2(
 float Y2
) = 0;

/* IXRLinearGradientBrush::GetEndPoint  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetEndPoint(
 XRPoint* pEndPoint
) = 0;

/* IXRLinearGradientBrush::GetStartPoint  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetStartPoint(
 XRPoint* pStartPoint
) = 0;

/* IXRLinearGradientBrush::SetEndPoint  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetEndPoint(
 XRPoint* pEndPoint
) = 0;

/* IXRLinearGradientBrush::SetStartPoint  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetStartPoint(
 XRPoint* pStartPoint
) = 0;

/* IXRLineGeometry::GetEndPoint  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetEndPoint(
 __out XRPoint *pEndPoint
) = 0;

/* IXRLineGeometry::GetStartPoint  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetStartPoint(
 __out XRPoint *pStartPoint
) = 0;

/* IXRLineGeometry::SetEndPoint  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetEndPoint(__in XRPoint* pEndPoint) = 0;

/* IXRLineGeometry::SetStartPoint  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetStartPoint(
 __in XRPoint *pStartPoint
) = 0;

/* IXRLineSegment::GetPoint  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetPoint(
 __out XRPoint *pPoint
) = 0;

/* IXRLineSegment::SetPoint  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetPoint(
 __in XRPoint *pPoint
) = 0;

/* IXRListBox::GetItemContainerStyle  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetItemContainerStyle(
 IXRStyle **ppValue
) = 0;

/* IXRListBox::ScrollIntoView  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE ScrollIntoView(
 IXRDependencyObject * pItem
) = 0;

/* IXRListBox::SetItemContainerStyle  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetItemContainerStyle(
 IXRStyle *pValue
) = 0;

/* IXRListBoxItem::GetIsSelected  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetIsSelected(
 bool *pValue
) = 0;

/* IXRListBoxItem::SetIsSelected  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetIsSelected(
 bool Value
) = 0;

/* IXRMatrix::GetM11  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetM11(
 float* pM11
) = 0;

/* IXRMatrix::GetM12  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetM12(
 float* pM12
) = 0;

/* IXRMatrix::GetM21  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetM21(
 float* pM21
) = 0;

/* IXRMatrix::GetM22  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetM22(
 float* pM22
) = 0;

/* IXRMatrix::GetOffsetX  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetOffsetX(
 float* pOffsetX
) = 0;

/* IXRMatrix::GetOffsetY  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetOffsetY(
 float* pOffsetY
) = 0;

/* IXRMatrix::SetM11  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetM11(
 float M11
) = 0;

/* IXRMatrix::SetM12  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetM12(
 float M12
) = 0;

/* IXRMatrix::SetM21  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetM21(
 float M21
) = 0;

/* IXRMatrix::SetM22  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetM22(
 float M22
) = 0;

/* IXRMatrix::SetOffsetX  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetOffsetX(
 float OffsetX
) = 0;

/* IXRMatrix::SetOffsetY  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetOffsetY(
 float OffsetY
) = 0;

/* IXRMatrix::Transform  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE Transform(
 XRPoint* pPoint,
 XRPoint* pValue
) = 0;

/* IXRMatrixTransform::GetMatrix  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetMatrix(
 IXRMatrix** ppMatrix
) = 0;

/* IXRMatrixTransform::SetMatrix  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetMatrix(
 IXRMatrix* pMatrix
) = 0;

/* IXRObjectAnimationUsingKeyFrames::GetKeyFrames  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetKeyFrames(
 IXRObjectKeyFrameCollection** ppKeyFrames
) = 0;

/* IXRObjectKeyFrame::GetKeyTime  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetKeyTime(
 XRKeyTime* pKeyTime
) = 0;

/* IXRObjectKeyFrame::GetValue  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetValue(
 IXRDependencyObject** ppValue
) = 0;

/* IXRObjectKeyFrame::SetKeyTime  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetKeyTime(
 XRKeyTime* pKeyTime
) = 0;

/* IXRObjectKeyFrame::SetValue  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetValue(
 IXRDependencyObject* pValue
) = 0;

/* IXRPanel::GetBackground  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetBackground(
 IXRBrush **ppBackground
) = 0;

/* IXRPanel::GetChildren  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetChildren(
 IXRUIElementCollection **ppChildren
) = 0;

/* IXRPanel::SetBackground  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetBackground(
 IXRBrush *pBackground
) = 0;

/* IXRPasswordBox::AddPasswordChangedEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE AddPasswordChangedEventHandler(
 IXRDelegate<XRRoutedEventArgs>* pDelegate
)= 0;

/* IXRPasswordBox::GetMaxLength  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetMaxLength(
 int* pMaxLength
) = 0;

/* IXRPasswordBox::GetPassword  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetPassword(
 BSTR* pPassword
) = 0;

/* IXRPasswordBox::GetPasswordChar  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetPasswordChar(
 WCHAR *pPasswordChar
) = 0;

/* IXRPasswordBox::GetSelectionBackground  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetSelectionBackground(
 IXRBrush** ppSelectionBackground
) = 0;

/* IXRPasswordBox::GetSelectionForeground  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetSelectionForeground(
 IXRBrush** ppSelectionForeground
) = 0;

/* IXRPasswordBox::RemovePasswordChangedEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE RemovePasswordChangedEventHandler(
 IXRDelegate<XRRoutedEventArgs>* pDelegate
)= 0;

/* IXRPasswordBox::SelectAll  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SelectAll() = 0;

/* IXRPasswordBox::SetMaxLength  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetMaxLength(
 int MaxLength
) = 0;

/* IXRPasswordBox::SetPassword  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetPassword(
 const WCHAR* pPassword
) = 0;

/* IXRPasswordBox::SetPasswordChar  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetPasswordChar(
 const WCHAR PasswordChar
) = 0;

/* IXRPasswordBox::SetSelectionBackground  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetSelectionBackground(
 IXRBrush* pSelectionBackground
) = 0;

/* IXRPasswordBox::SetSelectionForeground  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetSelectionForeground(
 IXRBrush* pSelectionForeground
) = 0;

/* IXRPath::GetData  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetData(
 IXRGeometry** ppData
) = 0;

/* IXRPath::SetData  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetData(
 IXRGeometry* pData
) = 0;

/* IXRPathFigure::GetIsClosed  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetIsClosed(
 __out bool *pIsClosed
) = 0;

/* IXRPathFigure::GetIsFilled  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetIsFilled(
 __out bool *pIsFilled
) = 0;

/* IXRPathFigure::GetStartPoint  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetStartPoint(
 __in XRPoint *pStartPoint
) = 0;

/* IXRPathFigure::SetIsClosed  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetIsClosed(
 __in bool IsClosed
) = 0;

/* IXRPathFigure::SetIsFilled  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetIsFilled(
 __in bool IsFilled
) = 0;

/* IXRPathFigure::SetStartPoint  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetStartPoint(
 __in XRPoint *pStartPoint
) = 0;

/* IXRPathGeometry::GetFigures  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetFigures(
 __out IXRPathFigureCollection **ppFigures
) = 0;

/* IXRPathGeometry::GetFillRule  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetFillRule(
 __out XRFillRule *pFillRule
) = 0;

/* IXRPathGeometry::SetFigures  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetFigures(
 __in IXRPathFigureCollection *pFigures
) = 0;

/* IXRPathGeometry::SetFillRule  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetFillRule(
 __in XRFillRule FillRule
) = 0;

/* IXRPointAnimation::GetBy  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetBy(
 XRPoint* pBy
) = 0;

/* IXRPointAnimation::GetFrom  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetFrom(
 XRPoint* pFrom
) = 0;

/* IXRPointAnimation::GetTo  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetTo(
 XRPoint* pTo
) = 0;

/* IXRPointAnimation::SetBy  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetBy(
 XRPoint* pBy
) = 0;

/* IXRPointAnimation::SetFrom  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetFrom(
 XRPoint* pFrom
) = 0;

/* IXRPointAnimation::SetTo  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetTo(
 XRPoint* pTo
) = 0;

/* IXRPointAnimationUsingKeyFrames::GetKeyFrames  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetKeyFrames(
 IXRPointKeyFrameCollection** ppKeyFrames
) = 0;

/* IXRPointKeyFrame::GetKeyTime  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetKeyTime(
 XRKeyTime* pKeyTime
) = 0;

/* IXRPointKeyFrame::GetValue  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetValue(
 XRPoint* pValue
) = 0;

/* IXRPointKeyFrame::SetKeyTime  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetKeyTime(
 XRKeyTime* pKeyTime
) = 0;

/* IXRPointKeyFrame::SetValue  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetValue(
 XRPoint* pValue
) = 0;

/* IXRPolyBezierSegment::GetPoints  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetPoints(
 __out IXRPointCollection **ppPoints
) = 0;

/* IXRPolyBezierSegment::SetPoints  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetPoints(
 __in IXRPointCollection *pPoints
) = 0;

/* IXRPolygon::GetFillRule  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetFillRule(
 __out XRFillRule *pFillRule
) = 0;

/* IXRPolygon::GetPoints  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetPoints(
 __out IXRPointCollection **ppPoints
) = 0;

/* IXRPolygon::SetFillRule  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetFillRule(
 __in XRFillRule FillRule
) = 0;

/* IXRPolygon::SetPoints  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetPoints(
 __in IXRPointCollection *pPoints
) = 0;

/* IXRPolyline::GetFillRule  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetFillRule(
 __out XRFillRule *pFillRule
) = 0;

/* IXRPolyline::GetPoints  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetPoints(
 __out IXRPointCollection **ppPoints
) = 0;

/* IXRPolyline::SetFillRule  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetFillRule(
 __in XRFillRule FillRule
) = 0;

/* IXRPolyline::SetPoints  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetPoints(
 __in IXRPointCollection *pPoints
) = 0;

/* IXRPolyLineSegment::GetPoints  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetPoints(
 __out IXRPointCollection **ppPoints
) = 0;

/* IXRPolyLineSegment::SetPoints  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetPoints(
 __in IXRPointCollection *pPoints
) = 0;

/* IXRPolyQuadraticBezierSegment::GetPoints  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetPoints(
 __out IXRPointCollection **ppPoints
) = 0;

/* IXRPolyQuadraticBezierSegment::SetPoints  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetPoints(
 __in IXRPointCollection *pPoints
) = 0;

/* IXRPopup::AddClosedEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE AddClosedEventHandler(
 __in IXRDelegate<XREventArgs> *pDelegate
)= 0;

/* IXRPopup::AddOpenedEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE AddOpenedEventHandler(
 __in IXRDelegate<XREventArgs> *pDelegate
)= 0;

/* IXRPopup::GetChild  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetChild(
 __out IXRUIElement **ppChild
) = 0;

/* IXRPopup::GetHorizontalOffset  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetHorizontalOffset(
 __out float *pHorizontalOffset
) = 0;

/* IXRPopup::GetIsOpen  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetIsOpen(
 __out bool *pIsOpen
) = 0;

/* IXRPopup::GetVerticalOffset  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetVerticalOffset(
 __out float *pVerticalOffset
) = 0;

/* IXRPopup::RemoveClosedEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE RemoveClosedEventHandler(
 __in IXRDelegate<XREventArgs> *pDelegate
)= 0;

/* IXRPopup::RemoveOpenedEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE RemoveOpenedEventHandler(
 __in IXRDelegate<XREventArgs> *pDelegate
)= 0;

/* IXRPopup::SetChild  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetChild(
 __in IXRUIElement *pChild
) = 0;

/* IXRPopup::SetHorizontalOffset  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetHorizontalOffset(
 __in float HorizontalOffset
) = 0;

/* IXRPopup::SetIsOpen  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetIsOpen(
 __in bool IsOpen
) = 0;

/* IXRPopup::SetVerticalOffset  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetVerticalOffset(
 __in float VerticalOffset
) = 0;

/* IXRProgressBar::GetIsIndeterminate  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetIsIndeterminate(
 bool* pValue
) = 0;

/* IXRProgressBar::SetIsIndeterminate  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetIsIndeterminate(
 bool Value
) = 0;

/* IXRQuadraticBezierSegment::GetPoint1  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetPoint1(
 __out XRPoint *pPoint1
) = 0;

/* IXRQuadraticBezierSegment::GetPoint2  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetPoint2(
 __out XRPoint *pPoint2
) = 0;

/* IXRQuadraticBezierSegment::SetPoint1  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetPoint1(
 __in XRPoint *pPoint1
) = 0;

/* IXRQuadraticBezierSegment::SetPoint2  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetPoint2(
 __in XRPoint *pPoint2
) = 0;

/* IXRRadialGradientBrush::GetCenter  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetCenter(
 XRPoint* pCenter
) = 0;

/* IXRRadialGradientBrush::GetGradientOrigin  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetGradientOrigin(
 XRPoint* pGradientOrigin
) = 0;

/* IXRRadialGradientBrush::GetRadiusX  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetRadiusX(
 float* pRadiusX
) = 0;

/* IXRRadialGradientBrush::GetRadiusY  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetRadiusY(
 float* pRadiusY
) = 0;

/* IXRRadialGradientBrush::SetCenter  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetCenter(
 XRPoint* pCenter
) = 0;

/* IXRRadialGradientBrush::SetGradientOrigin  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetGradientOrigin(
 XRPoint* pGradientOrigin
) = 0;

/* IXRRadialGradientBrush::SetRadiusX  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetRadiusX(
 float RadiusX
) = 0;

/* IXRRadialGradientBrush::SetRadiusY  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetRadiusY(
 float RadiusY
) = 0;

/* IXRRadioButton::GetGroupName  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetGroupName(
 BSTR* pValue
) = 0;

/* IXRRadioButton::SetGroupName  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetGroupName(
 const WCHAR* Value
) = 0;

/* IXRRangeBase::AddMaximumChangedEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE AddMaximumChangedEventHandler(
 IXRDelegate<XRValueChangedEventArgs<float> >* pDelegate
) = 0;

/* IXRRangeBase::AddMinimumChangedEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE AddMinimumChangedEventHandler(
 IXRDelegate<XRValueChangedEventArgs<float> >* pDelegate
) = 0;

/* IXRRangeBase::AddValueChangedEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE AddValueChangedEventHandler(
 IXRDelegate<XRValueChangedEventArgs<float> >* pDelegate
) = 0;

/* IXRRangeBase::GetLargeChange  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetLargeChange(
 float *pValue
) = 0;

/* IXRRangeBase::GetMaximum  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetMaximum(
 float *pValue
) = 0;

/* IXRRangeBase::GetMinimum  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetMinimum(
 float *pValue
) = 0;

/* IXRRangeBase::GetSmallChange  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetSmallChange(
 float *pValue
) = 0;

/* IXRRangeBase::GetValue  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetValue(
 float *pValue
) = 0;

/* IXRRangeBase::RemoveMaximumChangedEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE RemoveMaximumChangedEventHandler(
 IXRDelegate<AXValueChangedEventArgs<float> >* pDelegate
) = 0;

/* IXRRangeBase::RemoveMinimumChangedEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE RemoveMinimumChangedEventHandler(
 IXRDelegate<AXValueChangedEventArgs<float> >* pDelegate
) = 0;

/* IXRRangeBase::RemoveValueChangedEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE RemoveValueChangedEventHandler(
 IXRDelegate<AXValueChangedEventArgs<float> >* pDelegate
) = 0;

/* IXRRangeBase::SetLargeChange  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetLargeChange(
 float Value
) = 0;

/* IXRRangeBase::SetMaximum  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetMaximum(
 float Value
) = 0;

/* IXRRangeBase::SetMinimum  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetMinimum(
 float Value
) = 0;

/* IXRRangeBase::SetSmallChange  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetSmallChange(
 float Value
) = 0;

/* IXRRangeBase::SetValue  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetValue(
 float Value
) = 0;

/* IXRRectangle::GetRadiusX  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetRadiusX(
 float *pRadiusX
) = 0;

/* IXRRectangle::GetRadiusY  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetRadiusY(
 float *pRadiusY
) = 0;

/* IXRRectangle::SetRadiusX  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetRadiusX(
 float RadiusX
) = 0;

/* IXRRectangle::SetRadiusY  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetRadiusY(
 float RadiusY
) = 0;

/* IXRRectangleGeometry::GetRadiusX  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetRadiusX(
__out float *pRadiusX
) = 0;

/* IXRRectangleGeometry::GetRadiusY  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetRadiusY(
 __out float *pRadiusY
) = 0;

/* IXRRectangleGeometry::GetRect  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetRect(
 __out XRRect *pRect
) = 0;

/* IXRRectangleGeometry::SetRadiusX  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetRadiusX(
 __in float RadiusX
) = 0;

/* IXRRectangleGeometry::SetRadiusY  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetRadiusY(
 __in float RadiusY
) = 0;

/* IXRRectangleGeometry::SetRect  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetRect(
 __in XRRect *pRect
) = 0;

/* IXRRepeatButton::GetDelay  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetDelay(
 int *pValue
) = 0;

/* IXRRepeatButton::GetInterval  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetInterval(
 int *pValue
) = 0;

/* IXRRepeatButton::SetDelay  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetDelay(
 int Value
) = 0;

/* IXRRepeatButton::SetInterval  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetInterval(
 int Value
) = 0;

/* IXRResourceDictionary::Add  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE Add(
 const WCHAR* pKey, 
 IXRDependencyObject* pValue
) = 0;

/* IXRResourceDictionary::Clear  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE Clear(void) = 0;

/* IXRResourceDictionary::Contains  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE Contains(
 const WCHAR * pKey, 
 bool *pContains
) = 0;

/* IXRResourceDictionary::GetCount  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetCount(
 int* pCount
) = 0;

/* IXRResourceDictionary::GetItem  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetItem(
 const WCHAR* pKey,
 IXRDependencyObject** ppValue
) = 0;

/* IXRResourceDictionary::Remove  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE Remove(
 const WCHAR* pKey
) = 0;

/* IXRResourceManager::ResolveFontResource  [function; ce-only; CE 6.0..699] */
virtual BOOL STDMETHODCALLTYPE ResolveFontResource(
 const WCHAR* pUri,
 HANDLE* pFile
) = 0;

/* IXRResourceManager::ResolveImageResource  [function; ce-only; CE 6.0..699] */
virtual BOOL STDMETHODCALLTYPE ResolveImageResource(
 const WCHAR* pUri,
 IBitmapImage** ppRetrievedImage
) = 0;

/* IXRRowDefinition::GetActualHeight  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetActualHeight(
 float *pActualHeight
) = 0;

/* IXRRowDefinition::GetHeight  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetHeight(
 XRGridLength *pHeight
) = 0;

/* IXRRowDefinition::GetMaxHeight  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetMaxHeight(
 float *pMaxHeight
) = 0;

/* IXRRowDefinition::GetMinHeight  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetMinHeight(
 float *pMinHeight
) = 0;

/* IXRRowDefinition::SetHeight  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetHeight(
 XRGridLength *pHeight
) = 0;

/* IXRRowDefinition::SetMaxHeight  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetMaxHeight(
 float MaxHeight
) = 0;

/* IXRRowDefinition::SetMinHeight  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetMinHeight(
 float MinHeight
) = 0;

/* IXRScaleTransform::GetCenterX  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetCenterX(
 float* pCenterX
) = 0;

/* IXRScaleTransform::GetCenterY  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetCenterY(
 __out float* pCenterY
) = 0;

/* IXRScaleTransform::GetScaleX  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetScaleX(
 float* pScaleX
) = 0;

/* IXRScaleTransform::GetScaleY  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetScaleY(
 float* pScaleY
) = 0;

/* IXRScaleTransform::SetCenterX  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetCenterX(
 float CenterX
) = 0;

/* IXRScaleTransform::SetCenterY  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetCenterY(
 float CenterY
) = 0;

/* IXRScaleTransform::SetScaleX  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetScaleX(
 float ScaleX
) = 0;

/* IXRScaleTransform::SetScaleY  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetScaleY(
 float ScaleY
) = 0;

/* IXRScrollBar::AddScrollEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE AddScrollEventHandler(
 IXRDelegate<XRScrollEventArgs>* pDelegate
) = 0;

/* IXRScrollBar::GetOrientation  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetOrientation(
 XROrientation *pValue
) = 0;

/* IXRScrollbar::GetViewportSize  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetViewportSize(
 float *pValue
) = 0;

/* IXRScrollBar::RemoveScrollEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE RemoveScrollEventHandler(
 IXRDelegate<AXScrollEventArgs>* pDelegate
) = 0;

/* IXRScrollBar::SetOrientation  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetOrientation(
 XROrientation Value
) = 0;

/* IXRScrollBar::SetViewportSize  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetViewportSize(
 float Value
) = 0;

/* IXRScrollViewer::AddScrollChangedEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE AddScrollChangedEventHandler(
 IXRDelegate<XRScrollChangedEventArgs>* pDelegate
) = 0;

/* IXRScrollViewer::GetComputedHorizontalScrollBarVisibility  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetComputedHorizontalScrollBarVisibility(
 XRVisibility *pValue
) = 0;

/* IXRScrollViewer::GetComputedVerticalScrollBarVisibility  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetComputedVerticalScrollBarVisibility(
 XRVisibility *pValue
) = 0;

/* IXRScrollViewer::GetExtentHeight  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetExtentHeight(
 float *pValue
) = 0;

/* IXRScrollViewer::GetExtentWidth  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetExtentWidth(
 float *pValue
) = 0;

/* IXRScrollViewer::GetHorizontalOffset  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetHorizontalOffset(
 float *pValue
) = 0;

/* IXRScrollViewer::GetHorizontalScrollBarVisibility  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetHorizontalScrollBarVisibility(
 XRScrollBarVisibility *pValue
) = 0;

/* IXRScrollViewer::GetScrollableHeight  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetScrollableHeight(
 float *pValue
) = 0;

/* IXRScrollViewer::GetScrollableWidth  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetScrollableWidth(
 float *pValue
) = 0;

/* IXRScrollViewer::GetVerticalOffset  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetVerticalOffset(
 float *pValue
) = 0;

/* IXRScrollViewer::GetVerticalScrollBarVisibility  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetVerticalScrollBarVisibility(
 XRScrollBarVisibility *pValue
) = 0;

/* IXRScrollViewer::GetViewportHeight  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetViewportHeight(
 float *pValue
) = 0;

/* IXRScrollViewer::GetViewportWidth  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetViewportWidth(
 float *pValue
) = 0;

/* IXRScrollViewer::RemoveScrollChangedEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE RemoveScrollChangedEventHandler(
 IXRDelegate<XRScrollChangedEventArgs>* pDelegate
) = 0;

/* IXRScrollViewer::ScrollToHorizontalOffset  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE ScrollToHorizontalOffset(
 float Offset
) = 0;

/* IXRScrollViewer::ScrollToVerticalOffset  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE ScrollToVerticalOffset(
 float Offset
) = 0;

/* IXRScrollViewer::SetHorizontalScrollBarVisibility  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetHorizontalScrollBarVisibility(
 XRScrollBarVisibility Value
) = 0;

/* IXRScrollViewer::SetVerticalScrollBarVisibility  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetVerticalScrollBarVisibility(
 XRScrollBarVisibility Value
) = 0;

/* IXRSelector::AddSelectionChangedHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE AddSelectionChangedHandler(
 IXRDelegate<XRSelectionChangedEventArgs>* pDelegate
) = 0;

/* IXRSelector::GetSelectedIndex  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetSelectedIndex(
 int *pValue
) = 0;

/* IXRSelector::GetSelectedItem  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetSelectedItem(
 IXRDependencyObject **ppValue
) = 0;

/* IXRSelector::RemoveSelectionChangedHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE RemoveSelectionChangedHandler(
 IXRDelegate<XRSelectionChangedEventArgs>* pDelegate
) = 0;

/* IXRSelector::SetSelectedIndex  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetSelectedIndex(
 int Value
) = 0;

/* IXRSelector::SetSelectedItem  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetSelectedItem(
 IXRDependencyObject *pValue
) = 0;

/* IXRSetter::GetValue  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetValue(
 IXRDependencyObject** ppValue
) = 0;

/* IXRSetter::SetValue  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetValue(
 IXRDependencyObject* pValue
) = 0;

/* IXRSetterBase::GetIsSealed  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetIsSealed(
 bool* pIsSealed
) = 0;

/* IXRSetterBaseCollection::GetIsSealed  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetIsSealed(
 bool* pIsSealed
) = 0;

/* IXRShape::GetFill  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetFill(
 IXRBrush **ppFill
) = 0;

/* IXRShape::GetGeometryTransform  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetGeometryTransform(
 IXRMatrix** ppGeometryTransform
) = 0;

/* IXRShape::GetStretch  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetStretch(
 XRStretch* pStretch
) = 0;

/* IXRShape::GetStroke  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetStroke(
 IXRBrush **ppStroke
) = 0;

/* IXRShape::GetStrokeDashArray  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetStrokeDashArray(
 IXRDoubleCollection **ppStrokeDashArray
) = 0;

/* IXRShape::GetStrokeDashCap  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetStrokeDashCap(
 XRPenLineCap* pStrokeDashCap
) = 0;

/* IXRShape::GetStrokeDashOffSet  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetStrokeDashOffset(
 float *pStrokeDashOffset
) = 0;

/* IXRShape::GetStrokeEndLineCap  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetStrokeEndLineCap(
 XRPenLineCap* pStrokeEndLineCap
) = 0;

/* IXRShape::GetStrokeLineJoin  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetStrokeLineJoin(
 XRPenLineJoin* pStrokeLineJoin
) = 0;

/* IXRShape::GetStrokeMiterLimit  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetStrokeMiterLimit(
 float *pStrokeMiterLimit
) = 0;

/* IXRShape::GetStrokeStartLineCap  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetStrokeStartLineCap(
 XRPenLineCap* pStrokeStartLineCap
) = 0;

/* IXRShape::GetStrokeThickness  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetStrokeThickness(
 float *pStrokeThickness
) = 0;

/* IXRShape::SetFill  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetFill(
 IXRBrush *pFill
) = 0;

/* IXRShape::SetStretch  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetStretch(
 XRStretch Stretch
) = 0;

/* IXRShape::SetStroke  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetStroke(
 IXRBrush *pStroke
) = 0;

/* IXRShape::SetStrokeDashArray  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetStrokeDashArray(
 IXRDoubleCollection *pStrokeDashArray
) = 0;

/* IXRShape::SetStrokeDashCap  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetStrokeDashCap(
 XRPenLineCap StrokeDashCap
) = 0;

/* IXRShape::SetStrokeDashOffset  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetStrokeDashOffset(
 float StrokeDashOffset
) = 0;

/* IXRShape::SetStrokeEndLineCap  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetStrokeEndLineCap(
 XRPenLineCap StrokeEndLineCap
) = 0;

/* IXRShape::SetStrokeLineJoin  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetStrokeLineJoin(
 XRPenLineJoin StrokeLineJoin
) = 0;

/* IXRShape::SetStrokeMiterLimit  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetStrokeMiterLimit(
 float StrokeMiterLimit
) = 0;

/* IXRShape::SetStrokeStartLineCap  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetStrokeStartLineCap(
 XRPenLineCap StrokeStartLineCap
) = 0;

/* IXRShape::SetStrokeThickness  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetStrokeThickness(
 float StrokeThickness
) = 0;

/* IXRSkewTransform::GetAngleX  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetAngleX(
 float* pAngleX
) = 0;

/* IXRSkewTransform::GetAngleY  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetAngleY(
 float* pAngleY
) = 0;

/* IXRSkewTransform::GetCenterX  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetCenterX(
 float* pCenterX
) = 0;

/* IXRSkewTransform::GetCenterY  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetCenterY(
 float* pCenterY
) = 0;

/* IXRSkewTransform::SetAngleX  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetAngleX(
 float AngleX
) = 0;

/* IXRSkewTransform::SetAngleY  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetAngleY(
 float AngleY
) = 0;

/* IXRSkewTransform::SetCenterX  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetCenterX(
 float CenterX
) = 0;

/* IXRSkewTransform::SetCenterY  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetCenterY(
 float CenterY
) = 0;

/* IXRSlider::GetIsDirectionReversed  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetIsDirectionReversed(
 bool *pValue
) = 0;

/* IXRSlider::GetIsFocused  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetIsFocused(
 bool *pValue
) = 0;

/* IXRSlider::GetOrientation  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetOrientation(
 XROrientation *pValue
) = 0;

/* IXRSlider::SetIsDirectionReversed  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetIsDirectionReversed(
 bool Value
) = 0;

/* IXRSlider::SetOrientation  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetOrientation(
 XROrientation Value
) = 0;

/* IXRSolidColorBrush::GetColor  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetColor(
 COLORREF* pColor
) = 0;

/* IXRSolidColorBrush::SetColor  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetColor(
COLORREF Color
) = 0;

/* IXRSplineColorKeyFrame::GetKeySpline  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetKeySpline(
 IXRKeySpline** ppKeySpline
) = 0;

/* IXRSplineColorKeyFrame::SetKeySpline  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetKeySpline(
 IXRKeySpline* pKeySpline
) = 0;

/* IXRSplineDoubleKeyFrame::GetKeySpline  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetKeySpline(
 IXRKeySpline** ppKeySpline
) = 0;

/* IXRSplineDoubleKeyFrame::SetKeySpline  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetKeySpline(
 IXRKeySpline* pKeySpline
) = 0;

/* IXRSplinePointKeyFrame::GetKeySpline  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetKeySpline(
 IXRKeySpline** ppKeySpline
) = 0;

/* IXRSplinePointKeyFrame::SetKeySpline  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetKeySpline(
 IXRKeySpline* pKeySpline
) = 0;

/* IXRStackPanel::GetOrientation  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetOrientation(
 XROrientation* pOrientation
) = 0;

/* IXRStackPanel::SetOrientation  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetOrientation(
 XROrientation Orientation
) = 0;

/* IXRStoryboard::Begin  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE Begin() = 0;

/* IXRStoryboard::GetChildren  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetChildren(
 IXRTimelineCollection** ppChildren
) = 0;

/* IXRStoryboard::GetCurrentState  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetCurrentState(
 XRClockState *pClockState
) = 0;

/* IXRStoryboard::GetCurrentTime  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetCurrentTime(
 XRTimeSpan *pTimeSpan
) = 0;

/* IXRStoryboard::Pause  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE Pause() = 0;

/* IXRStoryboard::Resume  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE Resume() = 0;

/* IXRStoryboard::Seek  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE Seek(
 XRTimeSpan* pTimespan
) = 0;

/* IXRStoryboard::SeekAlignedToLastTick  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SeekAlignedToLastTick(
 XRTimeSpan *pTimeSpan
) = 0;

/* IXRStoryboard::SkipToFill  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SkipToFill() = 0;

/* IXRStoryboard::Stop  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE Stop() = 0;

/* IXRStroke::GetBounds  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetBounds(
 __out XRRect *pValue
) = 0;

/* IXRStroke::GetDrawingAttributes  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetDrawingAttributes(
 __out IXRDrawingAttributes **ppDrawingAttributes
) = 0;

/* IXRStroke::GetStylusPoints  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetStylusPoints(
 __out IXRStylusPointCollection **ppStylusPoints
) = 0;

/* IXRStroke::HitTest  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE HitTest(
 __in IXRStylusPointCollection *pStylusPointCollection,
 __out bool *pValue
) = 0;

/* IXRStroke::SetDrawingAttributes  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetDrawingAttributes(
 __in IXRDrawingAttributes *pDrawingAttributes
) = 0;

/* IXRStroke::SetStylusPoints  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetStylusPoints(
 __in IXRStylusPointCollection *pStylusPoints
) = 0;

/* IXRStrokeCollection::GetBounds  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetBounds(
 XRRect* pValue
) = 0;

/* IXRStrokeCollection::HitTest  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE HitTest(
 IXRStylusPointCollection* pStylusPointCollection,
 IXRStrokeCollection** ppValue
) = 0;

/* IXRStyle::GetIsSealed  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetIsSealed(
 bool* pIsSealed
) = 0;

/* IXRStyle::GetSetters  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetSetters(
 IXRSetterBaseCollection** ppSetters
) = 0;

/* IXRStyle::GetTargetType  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetTargetType(
 IID *pIID
) = 0;

/* IXRStyle::Seal  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE Seal() = 0;

/* IXRStyle::SetTargetType  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetTargetType(
 const IID iid
) = 0;

/* IXRStylusInfo::GetIsInverted  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetIsInverted(
 __out bool *pIsInverted
) = 0;

/* IXRStylusInfo::SetIsInverted  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetIsInverted(
 __in bool IsInverted
) = 0;

/* IXRStylusPoint::GetPressureFactor  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetPressureFactor(
 __out float *pPressureFactor
) = 0;

/* IXRStylusPoint::GetX  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetX(
 __out float *pX
) = 0;

/* IXRStylusPoint::GetY  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetY(
 __out float *pY
) = 0;

/* IXRStylusPoint::SetPressureFactor  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetPressureFactor(
 __in float PressureFactor
) = 0;

/* IXRStylusPoint::SetX  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetX(
 __in float X
) = 0;

/* IXRStylusPoint::SetY  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetY(
 __in float Y
) = 0;

/* IXRTextBlock::GetBackground  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetBackground(
 IXRBrush **ppBackground
) = 0;

/* IXRTextBlock::GetFontFamily  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetFontFamily(
 BSTR* pFontFamily
) = 0;

/* IXRTextBlock::GetFontSize  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetFontSize(
 float *pFontSize
) = 0;

/* IXRTextBlock::GetFontSource  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetFontSource(
 HANDLE* pHFile
) = 0;

/* IXRTextBlock::GetFontStretch  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetFontStretch(
 XRFontStretch* pFontStretch
) = 0;

/* IXRTextBlock::GetFontStyle  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetFontStyle(
 XRFontStyle* pFontStyle
) = 0;

/* IXRTextBlock::GetFontWeight  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetFontWeight(
 XRFontWeight* pFontWeight
) = 0;

/* IXRTextBlock::GetForeground  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetForeground(
 IXRBrush **ppForeground
) = 0;

/* IXRTextBlock::GetHighlightBackground  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetHighlightBackground(
 IXRBrush **ppHighlightBackground
) = 0;

/* IXRTextBlock::GetHighlightForeground  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetHighlightForeground(
 IXRBrush **ppHighlightForeground
) = 0;

/* IXRTextBlock::GetHighlights  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetHighlights(
 WCHAR* *pHighlights
) = 0;

/* IXRTextBlock::GetLineHeight  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetLineHeight(
 float *pLineHeight
) = 0;

/* IXRTextBlock::GetLineStackingStrategy  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetLineStackingStrategy(
 XRLineStackingStrategy* pLineStackingStrategy
) = 0;

/* IXRTextBlock::GetPadding  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetPadding(
 XRThickness *pPadding
) = 0;

/* IXRTextBlock::GetText  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetText(
 WCHAR* *pText
) = 0;

/* IXRTextBlock::GetTextAlignment  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetTextAlignment(
 XRTextAlignment* pTextAlignment
) = 0;

/* IXRTextBlock::GetTextWrapping  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetTextWrapping(
 XRTextWrapping* pTextWrapping
) = 0;

/* IXRTextBlock::SetBackground  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetBackground(
 IXRBrush *pBackground
) = 0;

/* IXRTextBlock::SetFontFamily  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetFontFamily(
 const WCHAR* pFontFamily
) = 0;

/* IXRTextBlock::SetFontSize  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetFontSize(
 float FontSize
) = 0;

/* IXRTextBlock::SetFontSource  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetFontSource(
 HANDLE hFile
) = 0;

/* IXRTextBlock::SetFontStretch  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetFontStretch(
 XRFontStretch FontStretch
) = 0;

/* IXRTextBlock::SetFontStyle  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetFontStyle(
 XRFontStyle FontStyle
) = 0;

/* IXRTextBlock::SetFontWeight  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetFontWeight(
 XRFontWeight FontWeight
) = 0;

/* IXRTextBlock::SetForeground  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetForeground(
 IXRBrush *pForeground
) = 0;

/* IXRTextBlock::SetHighlightBackground  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetHighlightBackground(
 IXRBrush *pHighlightBackground
) = 0;

/* IXRTextBlock::SetHighlightForeground  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetHighlightForeground(
 IXRBrush *pHighlightForeground
) = 0;

/* IXRTextBlock::SetHighlights  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetHighlights(
 WCHAR* Highlights
) = 0;

/* IXRTextBlock::SetLineHeight  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetLineHeight(
 float LineHeight
) = 0;

/* IXRTextBlock::SetLineStackingStrategy  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetLineStackingStrategy(
 XRLineStackingStrategy LineStackingStrategy
) = 0;

/* IXRTextBlock::SetPadding  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetPadding(
 XRThickness *pPadding
) = 0;

/* IXRTextBlock::SetText  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetText(
 WCHAR* Text
) = 0;

/* IXRTextBlock::SetTextAlignment  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetTextAlignment(
 XRTextAlignment TextAlignment
) = 0;

/* IXRTextBlock::SetTextWrapping  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetTextWrapping(
 XRTextWrapping TextWrapping
) = 0;

/* IXRTextBox::AddSelectionChangedEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE AddSelectionChangedEventHandler(
 IXRDelegate<XRSelectionChangedEventArgs> *pDelegate
)= 0;

/* IXRTextBox::AddTextChangedEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE AddTextChangedEventHandler(
 IXRDelegate<XRTextChangedEventArgs> *pDelegate
)= 0;

/* IXRTextBox::GetAcceptsReturn  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetAcceptsReturn(
 bool *pAcceptsReturn
) = 0;

/* IXRTextBox::GetFontSource  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetFontSource(
 HANDLE* pHFile
) = 0;

/* IXRTextBox::GetHorizontalScrollBarVisibility  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetHorizontalScrollBarVisibility(
 XRScrollBarVisibility *pValue
) = 0;

/* IXRTextBox::GetIsReadOnly  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetIsReadOnly(
 bool *pIsReadOnly
) = 0;

/* IXRTextBox::GetMaxLength  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetMaxLength(
 int* pMaxLength
) = 0;

/* IXRTextBox::GetSelectedText  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetSelectedText(
 BSTR* pSelectedText
) = 0;

/* IXRTextBox::GetSelectionBackground  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetSelectionBackground(
 IXRBrush **ppSelectionBackground
) = 0;

/* IXRTextBox::GetSelectionForeground  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetSelectionForeground(
 IXRBrush **ppSelectionForeground
) = 0;

/* IXRTextBox::GetSelectionLength  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetSelectionLength(
 int* pSelectionLength
) = 0;

/* IXRTextBox::GetSelectionStart  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetSelectionStart(
 int* pSelectionStart
) = 0;

/* IXRTextBox::GetText  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetText(
 BSTR* pText
) = 0;

/* IXRTextBox::GetTextAlignment  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetTextAlignment(
 XRTextAlignment* pTextAlignment
) = 0;

/* IXRTextBox::GetTextWrapping  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetTextWrapping(
 XRTextWrapping* pTextWrapping
) = 0;

/* IXRTextBox::GetVerticalScrollBarVisibility  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetVerticalScrollBarVisibility(
 XRScrollBarVisibility *pValue
) = 0;

/* IXRTextBox::RemoveSelectionChangedEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE RemoveSelectionChangedEventHandler(
 IXRDelegate<XRRoutedEventArgs> *pDelegate
)= 0;

/* IXRTextBox::RemoveTextChangedEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE RemoveTextChangedEventHandler(
 IXRDelegate<XRTextChangedEventArgs> *pDelegate
)= 0;

/* IXRTextBox::Select  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE Select(
 int start, 
 int length
) = 0;

/* IXRTextBox::SelectAll  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SelectAll() = 0;

/* IXRTextBox::SetAcceptsReturn  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetAcceptsReturn(
 bool AcceptsReturn
) = 0;

/* IXRTextBox::SetFontSource  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetFontSource(
 HANDLE hFile
) = 0;

/* IXRTextBox::SetHorizontalScrollBarVisibility  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetHorizontalScrollBarVisibility(
 XRScrollBarVisibility Value
) = 0;

/* IXRTextBox::SetIsReadOnly  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetIsReadOnly(
 bool IsReadOnly
) = 0;

/* IXRTextBox::SetMaxLength  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetMaxLength(
 int MaxLength
) = 0;

/* IXRTextBox::SetSelectedText  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetSelectedText(
 const WCHAR* pSelectedText
) = 0;

/* IXRTextBox::SetSelectionBackground  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetSelectionBackground(
 IXRBrush *pSelectionBackground
) = 0;

/* IXRTextBox::SetSelectionForeground  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetSelectionForeground(
 IXRBrush *pSelectionForeground
) = 0;

/* IXRTextBox::SetSelectionLength  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetSelectionLength(
 int SelectionLength
) = 0;

/* IXRTextBox::SetSelectionStart  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetSelectionStart(
 int SelectionStart
) = 0;

/* IXRTextBox::SetText  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetText(
 const WCHAR* pText
) = 0;

/* IXRTextBox::SetTextAlignment  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetTextAlignment(
 XRTextAlignment TextAlignment
) = 0;

/* IXRTextBox::SetTextWrapping  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetTextWrapping(
 XRTextWrapping TextWrapping
) = 0;

/* IXRTextBox::SetVerticalScrollBarVisibility  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetVerticalScrollBarVisibility(
 XRScrollBarVisibility Value
) = 0;

/* IXRThumb::AddDragCompletedHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE AddDragCompletedHandler(
 IXRDelegate<XRDragCompletedEventArgs>* pDelegate
) = 0;

/* IXRThumb::AddDragDeltaHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE AddDragDeltaHandler(
 IXRDelegate<XRDragDeltaEventArgs>* pDelegate
) = 0;

/* IXRThumb::AddDragStartedHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE AddDragStartedHandler(
 IXRDelegate<XRDragStartedEventArgs>* pDelegate
) = 0;

/* IXRThumb::GetIsDragging  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetIsDragging(
 bool *pValue
) = 0;

/* IXRThumb::GetIsFocused  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetIsFocused(
 bool *pValue
) = 0;

/* IXRThumb::RemoveDragCompletedHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE RemoveDragCompletedHandler(
 IXRDelegate<XRDragCompletedEventArgs>* pDelegate
) = 0;

/* IXRThumb::RemoveDragDeltaHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE RemoveDragDeltaHandler(
 IXRDelegate<XRDragDeltaEventArgs>* pDelegate
) = 0;

/* IXRThumb::RemoveDragStartedHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE RemoveDragStartedHandler(
 IXRDelegate<XRDragStartedEventArgs>* pDelegate
) = 0;

/* IXRTimeline::AddCompletedEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE AddCompletedEventHandler(
 IXRDelegate<XREventArgs>* pDelegate
)= 0;

/* IXRTimeline::GetAutoReverse  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetAutoReverse(
 bool* pAutoReverse
) = 0;

/* IXRTimeline::GetBeginTime  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetBeginTime(
 XRTimeSpan* pBeginTime
) = 0;

/* IXRTimeline::GetDuration  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetDuration(
 XRDuration* pDuration
) = 0;

/* IXRTimeline::GetFillBehavior  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetFillBehavior(
 XRFillBehavior* pFillBehavior
) = 0;

/* IXRTimeline::GetRepeatBehavior  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetRepeatBehavior(
 XRRepeatBehavior* pRepeatBehavior
) = 0;

/* IXRTimeline::GetSpeedRatio  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetSpeedRatio(
 float* pSpeedRatio
) = 0;

/* IXRTimeline::RemoveCompletedEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE RemoveCompletedEventHandler(
 IXRDelegate<XREventArgs>* pDelegate
)= 0;

/* IXRTimeline::SetAutoReverse  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetAutoReverse(
 bool AutoReverse
) = 0;

/* IXRTimeline::SetBeginTime  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetBeginTime(
 XRTimeSpan* pBeginTime
) = 0;

/* IXRTimeline::SetDuration  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetDuration(
 XRDuration* pDuration
) = 0;

/* IXRTimeline::SetFillBehavior  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetFillBehavior(
 XRFillBehavior FillBehavior
) = 0;

/* IXRTimeline::SetRepeatBehavior  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetRepeatBehavior(
 XRRepeatBehavior* pRepeatBehavior
) = 0;

/* IXRTimeline::SetSpeedRatio  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetSpeedRatio(
 float SpeedRatio
) = 0;

/* IXRToggleButton::AddCheckedEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE AddCheckedEventHandler(
 IXRDelegate<XRRoutedEventArgs> *pDelegate
)= 0;

/* IXRToggleButton::AddIndeterminateEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE AddIndeterminateEventHandler(
 IXRDelegate<XRRoutedEventArgs> *pDelegate
)= 0;

/* IXRToggleButton::AddUncheckedEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE AddUncheckedEventHandler(
 IXRDelegate<XRRoutedEventArgs> *pDelegate
)= 0;

/* IXRToggleButton::GetIsChecked  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetIsChecked(
 AXThreeState *pValue
) = 0;

/* IXRToggleButton::GetIsThreeState  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetIsThreeState(
 bool *pValue
) = 0;

/* IXRToggleButton::RemoveIndeterminateEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE RemoveIndeterminateEventHandler(
 IXRDelegate<XRRoutedEventArgs> *pDelegate
)= 0;

/* IXRToggleButton::RemovenCheckedEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE RemoveCheckedEventHandler(
 IXRDelegate<XRRoutedEventArgs> *pDelegate
)= 0;

/* IXRToggleButton::RemoveUncheckedEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE RemoveUncheckedEventHandler(
 IXRDelegate<XRRoutedEventArgs> *pDelegate
)= 0;

/* IXRToggleButton::SetIsChecked  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetIsChecked(
 AXThreeState pValue
) = 0;

/* IXRToggleButton::SetIsThreeState  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetIsThreeState(
 = bool Value
) = 0;

/* IXRToolTip::AddClosedEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE AddClosedEventHandler(
 IXRDelegate<XRRoutedEventArgs> *pDelegate
) = 0;

/* IXRToolTip::AddOpenedEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE AddOpenedEventHandler(
 IXRDelegate<XRRoutedEventArgs> *pDelegate
) = 0;

/* IXRToolTip::GetHorizontalOffset  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetHorizontalOffset(
 float *pValue
) = 0;

/* IXRToolTip::GetIsOpen  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetIsOpen(
 bool* pValue
) = 0;

/* IXRToolTip::GetVerticalOffset  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetVerticalOffset(
 float *pValue
) = 0;

/* IXRToolTip::RemoveClosedEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE RemoveClosedEventHandler(
 IXRDelegate<XRRoutedEventArgs> *pDelegate
) = 0;

/* IXRToolTip::RemoveOpenedEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE RemoveOpenedEventHandler(
 IXRDelegate<XRRoutedEventArgs> *pDelegate
) = 0;

/* IXRToolTip::SetHorizontalOffset  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetHorizontalOffset(
 float Value
) = 0;

/* IXRToolTip::SetIsOpen  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetIsOpen(
 bool Value
) = 0;

/* IXRToolTip::SetVerticalOffset  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetVerticalOffset(
 float Value
) = 0;

/* IXRTransformGroup::GetChildren  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetChildren(
 IXRTransformCollection** ppChildren
) = 0;

/* IXRTransformGroup::GetValue  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetValue(
 IXRMatrix** ppValue
) = 0;

/* IXRTransformGroup::SetChildren  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetChildren(
 IXRTransformCollection* pChildren
) = 0;

/* IXRUIElement::AddGestureEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE AddGestureEventHandler(
 IXRDelegate<XRGestureEventArgs>* pDelegate
) = 0;

/* IXRUIElement::AddGotFocusEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE AddGotFocusEventHandler(
 IXRDelegate<XRRoutedEventArgs> *pDelegate
)= 0;

/* IXRUIElement::AddKeyDownEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE AddKeyDownEventHandler(
 IXRDelegate<XRKeyEventArgs> *pDelegate
)= 0;

/* IXRUIElement::AddKeyUpEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE AddKeyUpEventHandler(
 IXRDelegate<XRKeyEventArgs> *pDelegate
)= 0;

/* IXRUIElement::AddLostFocusEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE AddLostFocusEventHandler(
 IXRDelegate<XRRoutedEventArgs> *pDelegate
)= 0;

/* IXRUIElement::AddMouseEnterEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE AddMouseEnterEventHandler(
 IXRDelegate<XRMouseEventArgs> *pDelegate
)= 0;

/* IXRUIElement::AddMouseLeaveEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE AddMouseLeaveEventHandler(
 IXRDelegate<XRMouseEventArgs> *pDelegate
)= 0;

/* IXRUIElement::AddMouseLeftButtonDownEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE AddMouseLeftButtonDownEventHandler(
 IXRDelegate<XRMouseButtonEventArgs> *pDelegate
)= 0;

/* IXRUIElement::AddMouseLeftButtonUpEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE AddMouseLeftButtonUpEventHandler(
 IXRDelegate<XRMouseButtonEventArgs> *pDelegate
)= 0;

/* IXRUIElement::AddMouseMoveEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE AddMouseMoveEventHandler(
 IXRDelegate<XRMouseEventArgs> *pDelegate
)= 0;

/* IXRUIElement::Arrange  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE Arrange(
 XRRect* pRect
) = 0;

/* IXRUIElement::CaptureMouse  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE CaptureMouse(
 bool* pValue
) = 0;

/* IXRUIElement::GetCacheMode  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetCacheMode(
 IXRCacheMode** ppCacheMode
) = 0;

/* IXRUIElement::GetClip  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetClip(
 IXRGeometry **ppClip
) = 0;

/* IXRUIElement::GetDesiredSize  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetDesiredSize(
 XRSize* pSize
) = 0;

/* IXRUIElement::GetIsHitTestVisible  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetIsHitTestVisible(
 bool *pIsHitTestVisible
) = 0;

/* IXRUIElement::GetOpacity  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetOpacity(
 float *pOpacity
) = 0;

/* IXRUIElement::GetOpacityMask  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetOpacityMask(
 IXRBrush **ppOpacityMask
) = 0;

/* IXRUIElement::GetRenderSize  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetRenderSize(
 XRSize *pRenderSize
) = 0;

/* IXRUIElement::GetRenderTransform  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetRenderTransform(
 IXRTransform** ppRenderTransform
) = 0;

/* IXRUIElement::GetRenderTransformOrigin  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetRenderTransformOrigin(
 XRPoint *pRenderTransformOrigin
) = 0;

/* IXRUIElement::GetVisibility  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetVisibility(
 XRVisibility* pVisibility
) = 0;

/* IXRUIElement::HitTest  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE HitTest(
 XRRect *pRect,
 IXRHitTestResults** ppElements
) = 0;

/* IXRUIElement::InvalidateArrange  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE InvalidateArrange() = 0;

/* IXRUIElement::InvalidateMeasure  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE InvalidateMeasure() = 0;

/* IXRUIElement::Measure  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE Measure(
 XRSize* pSize
) = 0;

/* IXRUIElement::ReleaseMouseCapture  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE ReleaseMouseCapture() = 0;

/* IXRUIElement::RemoveGestureEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE RemoveGestureEventHandler(
 IXRDelegate<AXGestureEventArgs>* pDelegate
) = 0;

/* IXRUIElement::RemoveGotFocusEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE RemoveGotFocusEventHandler(
 IXRDelegate<XRRoutedEventArgs> *pDelegate
)= 0;

/* IXRUIElement::RemoveKeyDownEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE RemoveKeyDownEventHandler(
 IXRDelegate<XRKeyEventArgs> *pDelegate
)= 0;

/* IXRUIElement::RemoveKeyUpEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE RemoveKeyUpEventHandler(
 IXRDelegate<XRKeyEventArgs> *pDelegate
)= 0;

/* IXRUIElement::RemoveLostFocusEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE RemoveLostFocusEventHandler(
 IXRDelegate<XRRoutedEventArgs> *pDelegate
)= 0;

/* IXRUIElement::RemoveMouseEnterEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE RemoveMouseEnterEventHandler(
 IXRDelegate<XRMouseEventArgs> *pDelegate
)= 0;

/* IXRUIElement::RemoveMouseLeaveEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE RemoveMouseLeaveEventHandler(
 IXRDelegate<XRMouseEventArgs> *pDelegate
)= 0;

/* IXRUIElement::RemoveMouseLeftButtonDownEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE RemoveMouseLeftButtonDownEventHandler(
 IXRDelegate<XRMouseButtonEventArgs> *pDelegate
)= 0;

/* IXRUIElement::RemoveMouseLeftButtonUpEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE RemoveMouseLeftButtonUpEventHandler(
 IXRDelegate<XRMouseButtonEventArgs> *pDelegate
)= 0;

/* IXRUIElement::RemoveMouseMoveEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE RemoveMouseMoveEventHandler(
 IXRDelegate<XRMouseEventArgs> *pDelegate
)= 0;

/* IXRUIElement::SetCacheMode  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetCacheMode(
 IXRCacheMode* pCacheMode
) = 0;

/* IXRUIElement::SetClip  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetClip(
 IXRGeometry *pClip
) = 0;

/* IXRUIElement::SetIsHitTestVisible  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetIsHitTestVisible(
 bool IsHitTestVisible
) = 0;

/* IXRUIElement::SetOpacity  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetOpacity(
 __in float Opacity
) = 0;

/* IXRUIElement::SetOpacityMask  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetOpacityMask(
 IXRBrush *pOpacityMask
) = 0;

/* IXRUIElement::SetRenderTransform  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetRenderTransform(
 IXRTransform* pRenderTransform
) = 0;

/* IXRUIElement::SetRenderTransformOrigin  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetRenderTransformOrigin(
 XRPoint *pRenderTransformOrigin
) = 0;

/* IXRUIElement::SetVisibility  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetVisibility(
 XRVisibility Visibility
) = 0;

/* IXRUIElement::TransformPointRelative  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE TransformPointRelative(
 XRPoint* pPoint
) = 0;

/* IXRUIElement::UpdateLayout  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE UpdateLayout() = 0;

/* IXRUserControl::GetContent  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetContent(
 IXRUIElement **ppContent
) = 0;

/* IXRUserControl::SetContent  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetContent(
 IXRUIElement *pContent
) = 0;

/* IXRVisualHost::DestroyWindow  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE DestroyWindow() = 0;

/* IXRVisualHost::EndDialog  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE EndDialog(
 UINT ExitCode
) = 0;

/* IXRVisualHost::GetContainerHWND  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetContainerHWND(
 HWND* pHwnd
) = 0;

/* IXRVisualHost::GetFocusedElement  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetFocusedElement(
 IXRFrameworkElement** ppFocused
) = 0;

/* IXRVisualHost::GetRootElement  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetRootElement(
 IXRFrameworkElement** ppRoot
) = 0;

/* IXRVisualHost::GetSize  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetSize(
 UINT* pWidth,
 UINT* pHeight
) = 0;

/* IXRVisualHost::HideWindow  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE HideWindow() = 0;

/* IXRVisualHost::SetSize  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetSize(
 UINT Width,
 UINT Height
) = 0;

/* IXRVisualHost::ShowWindow  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE ShowWindow() = 0;

/* IXRVisualHost::StartDialog  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE StartDialog(
 UINT* pExitCode
) = 0;

/* IXRVisualState::GetStoryboard  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetStoryboard(
 IXRStoryboard** ppValue
) = 0;

/* IXRVisualState::SetStoryboard  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetStoryboard(
 IXRStoryboard* pStoryboard
) = 0;

/* IXRVisualStateGroup::AddVisualStateChangedEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE AddVisualStateChangedEventHandler(
 IXRDelegate<XRValueChangedEventArgs<IXRVisualState *>>* pDelegate
)= 0;

/* IXRVisualStateGroup::AddVisualStateChangingEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE AddVisualStateChangingEventHandler(
 IXRDelegate<XRValueChangedEventArgs<IXRVisualState *>>* pDelegate
)= 0;

/* IXRVisualStateGroup::GetStates  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetStates(
 IXRVisualStateCollection** ppStates
) = 0;

/* IXRVisualStateGroup::GetTransitions  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetTransitions(
 IXRVisualTransitionCollection** ppTransitions
) = 0;

/* IXRVisualStateGroup::RemoveVisualStateChangedEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE RemoveVisualStateChangedEventHandler(
 IXRDelegate<XRValueChangedEventArgs<IXRVisualState *>>* pDelegate
)= 0;

/* IXRVisualStateGroup::RemoveVisualStateChangingEventHandler  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE RemoveVisualStateChangingEventHandler(
 IXRDelegate<XRValueChangedEventArgs<IXRVisualState *>>* pDelegate
)= 0;

/* IXRVisualStateGroup::SetStates  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetStates(
 IXRVisualStateCollection* pStates
) = 0;

/* IXRVisualStateGroup::SetTransitions  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetTransitions(
 IXRVisualTransitionCollection* pTransitions
) = 0;

/* IXRVisualTransition::GetFrom  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetFrom(
 BSTR* pFrom
) = 0;

/* IXRVisualTransition::GetGeneratedDuration  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetGeneratedDuration(
 XRDuration* pGeneratedDuration
) = 0;

/* IXRVisualTransition::GetStoryboard  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetStoryboard(
 IXRStoryboard** ppStoryboard
) = 0;

/* IXRVisualTransition::GetTo  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetTo(
 BSTR* pTo
) = 0;

/* IXRVisualTransition::SetFrom  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetFrom(
 const WCHAR* pFrom
) = 0;

/* IXRVisualTransition::SetGeneratedDuration  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetGeneratedDuration(
 XRDuration* pGeneratedDuration
) = 0;

/* IXRVisualTransition::SetStoryboard  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetStoryboard(
 IXRStoryboard* pStoryboard
) = 0;

/* IXRVisualTransition::SetTo  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetTo(
 const WCHAR* pTo
) = 0;

/* IXRWin32Control::GetClassName  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetClassName (
 BSTR* ppClassName
) = 0;

/* IXRWin32Control::GetHandle  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE GetHandle(
 HWND *pHandle
) = 0;

/* IXRWin32Control::SetClassName  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetClassName (
 const WCHAR* pClassName
) = 0;

/* IXRWin32Control::SetHandle  [function; ce-only; CE 6.0..699] */
virtual HRESULT STDMETHODCALLTYPE SetHandle(
 HWND Handle, 
 boolDestroyPreviousWindow
) = 0;

/* XamlRuntimeInitialize  [function; ce-only; CE 6.0..699] */
BOOL WINAPI XamlRuntimeInitialize();

/* XamlRuntimeUninitialize  [function; ce-only; CE 6.0..699] */
BOOL WINAPI XamlRuntimeUninitialize();

/* XR_HOOKPROC  [function; ce-only; CE 6.0..699] */
BOOL CALLBACK HostHookProc(
 VOID* pv,
 HWND hwnd,
 UINT Msg,
 WPARAM wParam,
 LPARAM lParam,
 LRESULT* pRetVal
);

/* XRValue  [function; ce-only; CE 6.0..699] */
class XRValue
{
public:
 XRValue()
 {
 SetNull();
 }
 void SetNull()
 {
 vType = VTYPE_NONE; 
 CornerRadiusVal.BottomLeft = 0;
 CornerRadiusVal.BottomRight = 0;
 CornerRadiusVal.TopLeft = 0;
 CornerRadiusVal.TopRight = 0;
 }
 VALUE_TYPE vType;
 union
 {
 float FloatVal;
 int IntVal;
 bool BoolVal;
 unsigned int UIntVal;
 COLORREF ColorVal;
 const WCHAR* pReadOnlyStringVal;
 BSTR bstrStringVal;
 XRPoint PointVal;
 XRRect RectVal;
 XRThickness ThicknessVal;
 XRSize SizeVal;
 XRGridLength GridLengthVal;
 XRCornerRadius CornerRadiusVal;
 IXRDependencyObject* pObjectVal;
 };
};
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* typedef */
typedef HRESULT (CALLBACK *PFN_CREATE_CONTROL)( IXRDependencyObject *pExistingAXDO, IXRDependencyObject** pNewAXDO );
typedef void (CALLBACK* PFN_PROPERTY_CHANGE)( IXRDependencyObject* pControl,  XRValue* pOldValue,  XRValue* pNewValue );
typedef HRESULT (CALLBACK* PFN_TYPE_CONVERTER)( XRValue *pValIn,  XRValue *pValOut );

/* enum */
enum XRClickMode{
  XRClickMode_Release = 0,
  XRClickMode_Press,
  XRClickMode_Hover,
};
enum XRScrollBarVisibility
{
  XRScrollBarVisibility_Disabled = 0,
  XRScrollBarVisibility_Auto,
  XRScrollBarVisibility_Hidden,
  XRScrollBarVisibility_Visible
};
enum XRThreeState
{
  XRThreeState_Unchecked = 0,
  XRThreeState_Checked,
  XRThreeState_Indeterminate
};

/* struct */
struct XRRepeatBehavior{
  enum RepeatBehaviorType{
    RepeatBehaviorType_IterationCount,
    RepeatBehaviorType_RepeatDuration,
    RepeatBehaviorType_Forever
  };
  float IterationCount;
  XRTimeSpan RepeatDuration;
  RepeatBehaviorType BehaviorType;
};
struct XRThickness{
  float Left;
  float Top;
  float Right;
  float Bottom;
};
struct XRCornerRadius{
  float TopLeft;
  float TopRight;
  float BottomRight;
  float BottomLeft;
};
struct XRDragCompletedEventArgs : XRRoutedEventArgs{
  double HorizontalChange;
  double VerticalChange;
  bool Cancelled;
};
struct XRDuration{
  enum _DurationType{
    DurationType_Automatic,
    DurationType_TimeSpan,
    DurationType_Forever
  };
  XRTimeSpan TimeSpan;
  _DurationType DurationType;
};
struct XRMouseButtonEventArgs : XRMouseEventArgs{ BOOL Handled; };
struct XRDragStartedEventArgs : XRRoutedEventArgs{ double VerticalOffset; double HorizontalOffset; };
struct XRSizeChangedEventArgs : XRRoutedEventArgs
{
  XRSize PreviousSize;
  XRSize NewSize;
};
struct XRWindowCreateParams{
  DWORD Style;
  DWORD ExStyle;
  const WCHAR *pTitle;
  UINT Left;
  UINT Top;
  UINT Width;
  UINT Height;
  XR_HOOKPROC pHookProc;
  VOID *pvUserParam;
  bool AllowsMultipleThreadAccess;
  HWND ParentWindow;
};
struct XRKeyEventArgs : XRRoutedEventArgs{ BOOL Handled; UINT PlatformKeyCode; };
struct XRScrollEventArgs : XRRoutedEventArgs
{
  float NewValue;
  XRScrollEventType ScrollEventType;
};
struct XRTimeSpan
{
  XRTimeSpan(){};
  XRTimeSpan(__int64 TotalTicks)
  XRTimeSpan(int Days, int Hours, int Minutes, int Seconds,
  int Milliseconds)
  static const int MinutesPerDay = 3600;
  static const int HoursPerDay = 24;
  static const int MinutesPerHour = 60;
  static const int MillisecondPerSecond = 1000;
  __int64 TotalSeconds()
  __int64 TotalMinutes()
  __int64 TotalHours()
  __int64 TotalMilliseconds()
  static __int64 FromSeconds(double Value)
  static __int64 Interval(double Value, int scale)
  __int64 Ticks;
  static const __int64 TicksPerDay = 864000000000;
  static const __int64 TicksPerHour = 36000000000;
  static const __int64 TicksPerMinute = 600000000;
  static const __int64 TicksPerSecond = 10000000;
  static const __int64 TicksPerMillisecond = 10000;
};
struct XRGridLength{ float UnitValue; XRGridUnitType UnitType; };
struct XRDragDeltaEventArgs : XRRoutedEventArgs{ double HorizontalDelta; double VeriticalDelta; };
struct XRScrollChangedEventArgs : XRRoutedEventArgs
{
  float XOffset;
  float YOffset;
};
struct XRRect{
  float left;
  float top;
  float right;
  float bottom;
};
struct XRSize{ float cx; float cy; };
struct XRRoutedEventArgs : XREventArgs{ IXRDependencyObject *pSource; };
struct XRMouseEventArgs : XRRoutedEventArgs{
  XRPoint Position;
  IXRStylusInfo *pStylusInfo;
  IXRStylusPointCollection *pStylusPoints;
};

/* function */
void ChangeAnimationDuration(IXRStoryboard* pColorStoryboard);
BOOL CALLBACK HostHookProc( VOID* pv, HWND hwnd, UINT Msg, WPARAM wParam, LPARAM lParam, LRESULT* pRetVal );

#endif /* _XAMLRUNTIME_ */
