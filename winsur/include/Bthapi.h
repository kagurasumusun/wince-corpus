/* Bthapi.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 0 declarations, 0 outlines, 0 base types, 0 extra macros, 24 extra decls
 */
#ifndef _BTHAPI_
#define _BTHAPI_


/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT AppendNode( NodeData* pData );
HRESULT CreateFromStream( UCHAR* pStream, ULONG size );
HRESULT GetAttribute( USHORT attribute, NodeData* pNode );
HRESULT GetAttributeAsStream( USHORT attribute, CHAR** ppStream, ULONG* pSize );
HRESULT GetAttributeList( USHORT** ppList, ULONG* pListSize );
HRESULT GetNode( ULONG nodeIndex, NodeData* pData );
HRESULT GetNodeCount(ULONG* pNodeCount);
HRESULT GetNodeStringData(ULONG nodeIndex,NodeData* pData);
HRESULT GetServiceClass( LPGUID pServiceClass );
HRESULT GetStreamSize( ULONG* pSize );
HRESULT LockContainer(UCHAR lock);
HRESULT NormalizeUuid( NODEDATA* pDataUuid, GUID* pNormalizeUuid );
HRESULT RetrieveElementInfo( UCHAR* pStream, SDP_TYPE* pElementType, SDP_SPECIFICTYPE* pElementSpecificType, ULONG* pElementSize, ULONG* pStorageSize, UCHAR** ppData );
HRESULT RetrieveRecords( UCHAR* pStream, ULONG size, ISdpRecord** ppSdpRecords, ULONG* pNumRecords );
HRESULT SetAttribute( USHORT attribute, NodeData* pNode );
HRESULT SetAttributeFromStream( USHORT attribute, UCHAR* pStream, ULONG size );
HRESULT SetNode(ULONG nodeIndex,NodeData* pData);
HRESULT Validate( UCHAR* pStream, ULONG size, ULONG_PTR* pErrorByte );
HRESULT VerifySequenceOf( UCHAR* pStream, ULONG size, SDP_TYPE ofType, UCHAR* pSpecificSizes, ULONG* pNumFound );
HRESULT Walk( ISdpWalk* pWalk );
HRESULT WalkNode( NODEDATA* pData, ULONG state );
HRESULT WalkStream( UCHAR elementType, ULONG elementSize, UCHAR* pStream );
HRESULT WriteStream( UCHAR* pStream, ULONG* pNumBytesWritten );
HRESULT WriteToStream( UCHAR** ppStream, ULONG* pStreamSize, ULONG preSize, ULONG postSize );

#endif /* _BTHAPI_ */
