/* physicsengine.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 5 constants, 6 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _PHYSICSENGINE_
#define _PHYSICSENGINE_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */
#define PHYSICSENGINE_BOUNDARY_MODE_BOUNCE 2
#define PHYSICSENGINE_BOUNDARY_MODE_NONE 0
#define PHYSICSENGINE_BOUNDARY_MODE_RUBBERBAND 1
#define PHYSICSENGINE_FLAG_USERTIME 1
#define PHYSICSENGINE_MOVEMENT_MODE_DECELERATE 0
#endif /* _WIN32_WCE */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* PHYSICSENGINEINIT  [struct; ce-only; CE 6.0..699] */
typedef struct tagPHYSICSENGINEINIT {
 DWORD cbSize;
 DWORD dwEngineType;
 DWORD dwFlags;
 LONG lInitialVelocity; 
 DWORD dwInitialAngle;
 BYTE bXAxisMovementMode;
 BYTE bXAxisBoundaryMode;
 BYTE bYAxisMovementMode;
 BYTE bYAxisBoundaryMode;
 RECT rcBoundary;
 SIZE sizeView;
 POINT ptInitialPosition;
 SIZE sizeItem;
} PHYSICSENGINEINIT;

/* PHYSICSENGINESTATE  [struct; ce-only; CE 6.0..699] */
typedef struct tagPHYSICSENGINESTATE {
 DWORD cbSize; 
 DWORD dwTime;
 POINT ptPosition;
 LONG lVelocityX;
 LONG lVelocityY;
 BOOL fComplete;
} PHYSICSENGINESTATE;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* CreatePhysicsEngine  [function; ce-only; CE 6.0..699] */
HRESULT CreatePhysicsEngine(
 __in const PHYSICSENGINEINIT* pEngineInit,
 __out HPHYSICSENGINE* phResult
);

/* DestroyPhysicsEngine  [function; ce-only; CE 6.0..699] */
HRESULT DestroyPhysicsEngine(
 HPHYSICSENGINE hEngine
);

/* QueryPhysicsEngine  [function; ce-only; CE 6.0..699] */
HRESULT QueryPhysicsEngine(
 HPHYSICSENGINE hEngine,
 __out PHYSICSENGINESTATE* pState
);

/* SetPhysicsEngineUserTime  [function; ce-only; CE 6.0..699] */
HRESULT SetPhysicsEngineUserTime(
 HPHYSICSENGINE hEngine,
 DWORD dwTime
);
#endif /* _WIN32_WCE */

#endif /* _PHYSICSENGINE_ */
