/* Bthapi.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 30 declarations, 0 outlines, 0 base types, 0 extra macros, 24 extra decls
 */
#ifndef _BTHAPI_
#define _BTHAPI_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* ISdpNodeContainer::AppendNode  [function; ce-only; CE 4.0..699; Btdrt.lib] */
HRESULT AppendNode(
 NodeData* pData
);

/* ISdpNodeContainer::CreateFromStream  [function; ce-only; CE 4.0..699; Btdrt.lib] */
HRESULT CreateFromStream(
 UCHAR* pStream,
 ULONG size
);

/* ISdpNodeContainer::CreateStream  [function; ce-only; CE 4.0..699; Btdrt.lib] */
HRESULT CreateStream(
 UCHAR** ppStream,
 ULONG* pSize
);

/* ISdpNodeContainer::GetNode  [function; ce-only; CE 4.0..699; Btdrt.lib] */
HRESULT GetNode(
 ULONG nodeIndex,
 NodeData* pData
);

/* ISdpNodeContainer::GetNodeCount  [function; ce-only; CE 4.0..699; Btdrt.lib] */
HRESULT GetNodeCount(
 ULONG* pNodeCount
);

/* ISdpNodeContainer::GetNodeStringData  [function; ce-only; CE 4.0..699; Btdrt.lib] */
HRESULT GetNodeStringData(
 ULONG nodeIndex,
 NodeData* pData
);

/* ISdpNodeContainer::GetStreamSize  [function; ce-only; CE 4.0..699; Btdrt.lib] */
HRESULT GetStreamSize(
 ULONG* pSize
);

/* ISdpNodeContainer::GetType  [function; ce-only; CE 4.0..699; Btdrt.lib] */
HRESULT GetType(
 NodeContainerType* pType
);

/* ISdpNodeContainer::LockContainer  [function; ce-only; CE 4.0..699; Btdrt.lib] */
HRESULT LockContainer(
 UCHAR lock
);

/* ISdpNodeContainer::SetNode  [function; ce-only; CE 4.0..699; Btdrt.lib] */
HRESULT SetNode(
 ULONG nodeIndex,
 NodeData* pData
);

/* ISdpNodeContainer::SetType  [function; ce-only; CE 4.0..699; Btdrt.lib] */
HRESULT SetType(
 NodeContainerType type
);

/* ISdpNodeContainer::Walk  [function; ce-only; CE 4.0..699; Btdrt.lib] */
HRESULT Walk(
 ISdpWalk* pWalk
);

/* ISdpNodeContainer::WriteStream  [function; ce-only; CE 4.0..699; Btdrt.lib] */
HRESULT WriteStream(
 UCHAR* pStream,
 ULONG* pNumBytesWritten
);

/* ISdpRecord::CreateFromStream  [function; ce-only; CE 4.0..699; Btdrt.lib] */
HRESULT CreateFromStream(
 UCHAR* pStream,
 ULONG size
);

/* ISdpRecord::GetAttribute  [function; ce-only; CE 4.0..699; Btdrt.lib] */
HRESULT GetAttribute(
 USHORT attribute,
 NodeData* pNode
);

/* ISdpRecord::GetAttributeAsStream  [function; ce-only; CE 4.0..699; Btdrt.lib] */
HRESULT GetAttributeAsStream(
 USHORT attribute,
 CHAR** ppStream,
 ULONG* pSize
);

/* ISdpRecord::GetAttributeList  [function; ce-only; CE 4.0..699; Btdrt.lib] */
HRESULT GetAttributeList(
 USHORT** ppList,
 ULONG* pListSize
);

/* ISdpRecord::GetServiceClass  [function; ce-only; CE 4.0..699; Btdrt.lib] */
HRESULT GetServiceClass(
 LPGUID pServiceClass
);

/* ISdpRecord::SetAttribute  [function; ce-only; CE 4.0..699; Btdrt.lib] */
HRESULT SetAttribute(
 USHORT attribute,
 NodeData* pNode
);

/* ISdpRecord::SetAttributeFromStream  [function; ce-only; CE 4.0..699; Btdrt.lib] */
HRESULT SetAttributeFromStream(
 USHORT attribute,
 UCHAR* pStream,
 ULONG size
);

/* ISdpRecord::Walk  [function; ce-only; CE 4.0..699; Btdrt.lib] */
HRESULT Walk(
 ISdpWalk* pWalk
);

/* ISdpRecord::WriteToStream  [function; ce-only; CE 4.0..699; Btdrt.lib] */
HRESULT WriteToStream(
 UCHAR** ppStream,
 ULONG* pStreamSize,
 ULONG preSize,
 ULONG postSize
);

/* ISdpStream::NormalizeUuid  [function; ce-only; CE 4.0..699; Btdrt.lib] */
HRESULT NormalizeUuid(
 NODEDATA* pDataUuid, 
 GUID* pNormalizeUuid
);

/* ISdpStream::RetrieveElementInfo  [function; ce-only; CE 4.0..699; Btdrt.lib] */
HRESULT RetrieveElementInfo(
 UCHAR* pStream, 
 SDP_TYPE* pElementType, 
 SDP_SPECIFICTYPE* pElementSpecificType, 
 ULONG* pElementSize, 
 ULONG* pStorageSize, 
 UCHAR** ppData
);

/* ISdpStream::RetrieveRecords  [function; ce-only; CE 4.0..699; Btdrt.lib] */
HRESULT RetrieveRecords(
 UCHAR* pStream, 
 ULONG size, 
 ISdpRecord** ppSdpRecords, 
 ULONG* pNumRecords
);

/* ISdpStream::Validate  [function; ce-only; CE 4.0..699; Btdrt.lib] */
HRESULT Validate(
 UCHAR* pStream,
 ULONG size,
 ULONG_PTR* pErrorByte
);

/* ISdpStream::VerifySequenceOf  [function; ce-only; CE 4.0..699; Btdrt.lib] */
HRESULT VerifySequenceOf(
 UCHAR* pStream, 
 ULONG size, 
 SDP_TYPE ofType, 
 UCHAR* pSpecificSizes, 
 ULONG* pNumFound
);

/* ISdpStream::Walk  [function; ce-only; CE 4.0..699; Btdrt.lib] */
HRESULT Walk(
 ISdpWalk* pWalk
)

/* ISdpWalk::WalkNode  [function; ce-only; CE 4.0..699; Btdrt.lib] */
HRESULT WalkNode(
 NODEDATA* pData,
 ULONG state
);

/* ISdpWalk::WalkStream  [function; ce-only; CE 4.0..699; Btdrt.lib] */
HRESULT WalkStream(
 UCHAR elementType,
 ULONG elementSize,
 UCHAR* pStream
);
#endif /* _WIN32_WCE */

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
