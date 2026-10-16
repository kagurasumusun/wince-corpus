/* Avc_unit.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 16 declarations, 0 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _AVC_UNIT_
#define _AVC_UNIT_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */

/* UNIT_AllocateLocalPlug_Request  [struct; ce-only; CE 5.0..599] */
typedef struct {PVOID ualp_RegistrationToken;STREAM_MediaType ualp_MediaType;ULONG ualp_Direction;ULONG ualp_Flags;ULONG ualp_SubunitPlugID;union { ULONG ualp_MaximumThroughput; struct {ULONG ualp_ClusterDimension;ULONG ualp_SampleFrequency; }; };} UNIT_AllocateLocalPlug_Request;

/* UNIT_AllocateLocalPlug_Response  [struct; ce-only; CE 5.0..599] */
typedef struct {HANDLE ualp_Plug;ULONG ualp_PlugNumber;} UNIT_AllocateLocalPlug_Response;

/* UNIT_ConnectionRequestProcessed_Request  [struct; ce-only; CE 5.0..599] */
typedef struct {PVOID ucrp_RegistrationToken;PVOID ucrp_Request;NTSTATUS ucrp_Status;} UNIT_ConnectionRequestProcessed_Request;

/* UNIT_DereferenceConnectionPlug_Request  [struct; ce-only; CE 5.0..599] */
typedef struct {PVOID udcp_RegistrationToken;HANDLE udcp_Plug;} UNIT_DereferenceConnectionPlug_Request;

/* UNIT_FreeLocalPlug_Request  [struct; ce-only; CE 5.0..599] */
typedef struct {PVOID uflp_RegistrationToken;HANDLE uflp_Plug;} UNIT_FreeLocalPlug_Request;

/* UNIT_ProcessRegistryPlugs_Request  [struct; ce-only; CE 5.0..599] */
typedef struct {PVOID uprp_RegistrationToken;HANDLE uprp_RootKey;} UNIT_ProcessRegistryPlugs_Request;

/* UNIT_QueryLocalPlugs_Request  [struct; ce-only; CE 5.0..599] */
typedef struct {PVOID uqlp_RegistrationToken;ULONG uqlp_Flags;} UNIT_QueryLocalPlugs_Request;

/* UNIT_QueryLocalPlugs_Response  [struct; ce-only; CE 5.0..599] */
typedef struct {BOOL uqlp_PlugState;ULONG uqlp_PlugNumber;ULONG uqlp_Direction;ULONG uqlp_MediaType;HANDLE uqlp_Plug;} UNIT_QueryLocalPlugs_Response;

/* UNIT_RegisterSubunit_Request  [struct; ce-only; CE 5.0..599] */
typedef struct {ULONG urs_SubunitType;PVOID urs_Context;PDEVICE_OBJECT urs_ParentDeviceObject;UNIT_AllocateLocalPlugCB* urs_AllocateLocalPlug;UNIT_FreeLocalPlugCB* urs_FreeLocalPlug;UNIT_ConnectToRemotePlugCB* urs_ConnectToRemotePlug;UNIT_DisconnectFromRemotePlugCB* urs_DisconnectFromRemotePlug;} UNIT_RegisterSubunit_Request;

/* UNIT_RegisterSubunit_Response  [struct; ce-only; CE 5.0..599] */
typedef struct {PVOID urs_RegistrationToken;} UNIT_RegisterSubunit_Response;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */

/* UNIT_AllocateLocalPlugCB  [function; ce-only; CE 5.0..599; Avc_unit.lib] */
NTSTATUS (*UNIT_AllocateLocalPlugCB)(PVOID Context, ULONG SubunitPlugID,ULONG Direction,UNIT_MediaType MediaType,ULONG MaximumThroughput,ULONG* PlugNumber,HANDLE* Plug);

/* UNIT_CloseUnitDeviceObject  [function; ce-only; CE 5.0..599; Avc_unit.lib] */
NTSTATUS UNIT_CloseUnitDeviceObject(PFILE_OBJECT UnitFileObject, PDEVICE_OBJECT UnitDeviceObject);

/* UNIT_ConnectToRemotePlugCB  [function; ce-only; CE 5.0..599; Avc_unit.lib] */
NTSTATUS (*UNIT_ConnectToRemotePlugCB)(PVOID Context, HANDLE Plug,ULONG Direction,UNIT_MediaType MediaType,PVOID Request);

/* UNIT_DisconnectFromRemotePlugCB  [function; ce-only; CE 5.0..599; Avc_unit.lib] */
NTSTATUS (*UNIT_DisconnectFromRemotePlugCB)(PVOID Context, HANDLE Plug,PVOID Request);

/* UNIT_FreeLocalPlugCB  [function; ce-only; CE 5.0..599; Avc_unit.lib] */
NTSTATUS (*UNIT_FreeLocalPlugCB)(PVOID Context, HANDLE Plug);

/* UNIT_OpenUnitDeviceObject  [function; ce-only; CE 5.0..599; Avc_unit.lib] */
NTSTATUS UNIT_OpenUnitDeviceObject(PDEVICE_OBJECT SubunitParentDeviceObject, PFILE_OBJECT* UnitFileObject, PDEVICE_OBJECT* UnitDeviceObject);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
NTSTATUS (*UNIT_AllocateLocalPlugCB)(PVOID Context, ULONG SubunitPlugID,ULONG Direction,UNIT_MediaType MediaType,ULONG MaximumThroughput,ULONG* PlugNumber,HANDLE* Plug);

#endif /* _AVC_UNIT_ */
