
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GeometryCollectionEngine
/// dependency: MeshDescription

#pragma pack(push, 0x1)

/// Enum /Script/EditableMesh.ETriangleTessellationMode
/// Size: 0x01 (1 bytes)
enum class ETriangleTessellationMode : uint8_t
{
	ETriangleTessellationMode__ThreeTriangles                                        = 0,
	ETriangleTessellationMode__FourTriangles                                         = 1
};

/// Enum /Script/EditableMesh.EInsetPolygonsMode
/// Size: 0x01 (1 bytes)
enum class EInsetPolygonsMode : uint8_t
{
	EInsetPolygonsMode__All                                                          = 0,
	EInsetPolygonsMode__CenterPolygonOnly                                            = 1,
	EInsetPolygonsMode__SidePolygonsOnly                                             = 2
};

/// Enum /Script/EditableMesh.EPolygonEdgeHardness
/// Size: 0x01 (1 bytes)
enum class EPolygonEdgeHardness : uint8_t
{
	EPolygonEdgeHardness__NewEdgesSoft                                               = 0,
	EPolygonEdgeHardness__NewEdgesHard                                               = 1,
	EPolygonEdgeHardness__AllEdgesSoft                                               = 2,
	EPolygonEdgeHardness__AllEdgesHard                                               = 3
};

/// Enum /Script/EditableMesh.EMeshElementAttributeType
/// Size: 0x01 (1 bytes)
enum class EMeshElementAttributeType : uint8_t
{
	EMeshElementAttributeType__None                                                  = 0,
	EMeshElementAttributeType__FVector4                                              = 1,
	EMeshElementAttributeType__FVector                                               = 2,
	EMeshElementAttributeType__FVector2D                                             = 3,
	EMeshElementAttributeType__Float                                                 = 4,
	EMeshElementAttributeType__Int                                                   = 5,
	EMeshElementAttributeType__Bool                                                  = 6,
	EMeshElementAttributeType__FName                                                 = 7
};

/// Enum /Script/EditableMesh.EMeshTopologyChange
/// Size: 0x01 (1 bytes)
enum class EMeshTopologyChange : uint8_t
{
	EMeshTopologyChange__NoTopologyChange                                            = 0,
	EMeshTopologyChange__TopologyChange                                              = 1
};

/// Enum /Script/EditableMesh.EMeshModificationType
/// Size: 0x01 (1 bytes)
enum class EMeshModificationType : uint8_t
{
	EMeshModificationType__FirstInterim                                              = 0,
	EMeshModificationType__Interim                                                   = 1,
	EMeshModificationType__Final                                                     = 2
};

/// Class /Script/EditableMesh.EditableMeshAdapter
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UEditableMeshAdapter : public UObject
{ 
public:
};

/// Class /Script/EditableMesh.EditableGeometryCollectionAdapter
/// Size: 0x00D8 (216 bytes) (0x000028 - 0x0000D8) align 8 MaxSize: 0x00D8
class UEditableGeometryCollectionAdapter : public UEditableMeshAdapter
{ 
public:
	class UGeometryCollection*                         GeometryCollection;                                         // 0x0028   (0x0008)  
	class UGeometryCollection*                         OriginalGeometryCollection;                                 // 0x0030   (0x0008)  
	int32_t                                            GeometryCollectionLODIndex;                                 // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_7[0x9C];                                      // 0x003C   (0x009C)  MISSED
};

/// Class /Script/EditableMesh.EditableMesh
/// Size: 0x0708 (1800 bytes) (0x000028 - 0x000708) align 8 MaxSize: 0x0708
class UEditableMesh : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x390];                                     // 0x0028   (0x0390)  MISSED
	TArray<class UEditableMeshAdapter*>                Adapters;                                                   // 0x03B8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x03C8   (0x0008)  MISSED
	int32_t                                            TextureCoordinateCount;                                     // 0x03D0   (0x0004)  
	unsigned char                                      UnknownData02_6[0x148];                                     // 0x03D4   (0x0148)  MISSED
	int32_t                                            PendingCompactCounter;                                      // 0x051C   (0x0004)  
	int32_t                                            SubdivisionCount;                                           // 0x0520   (0x0004)  
	unsigned char                                      UnknownData03_7[0x1E4];                                     // 0x0524   (0x01E4)  MISSED


	/// Functions
	// Function /Script/EditableMesh.EditableMesh.WeldVertices
	// void WeldVertices(TArray<FVertexID>& VertexIDs, FVertexID& OutNewVertexID);                                              // [0x89f7a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.TryToRemoveVertex
	// void TryToRemoveVertex(FVertexID VertexID, bool& bOutWasVertexRemoved, FEdgeID& OutNewEdgeID);                           // [0x89f670] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.TryToRemovePolygonEdge
	// void TryToRemovePolygonEdge(FEdgeID EdgeID, bool& bOutWasEdgeRemoved, FPolygonID& OutNewPolygonID);                      // [0x89f540] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.TriangulatePolygons
	// void TriangulatePolygons(TArray<FPolygonID>& PolygonIDs, TArray<FPolygonID>& OutNewTrianglePolygons);                    // [0x89f420] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.TessellatePolygons
	// void TessellatePolygons(TArray<FPolygonID>& PolygonIDs, ETriangleTessellationMode TriangleTessellationMode, TArray<FPolygonID>& OutNewPolygonIDs); // [0x89f2c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.StartModification
	// void StartModification(EMeshModificationType MeshModificationType, EMeshTopologyChange MeshTopologyChange);              // [0x89f1f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SplitPolygons
	// void SplitPolygons(TArray<FPolygonToSplit>& PolygonsToSplit, TArray<FEdgeID>& OutNewEdgeIDs);                            // [0x89f0b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SplitPolygonalMesh
	// void SplitPolygonalMesh(FPlane& InPlane, TArray<FPolygonID>& PolygonIDs1, TArray<FPolygonID>& PolygonIDs2, TArray<FEdgeID>& BoundaryIDs); // [0x89eee0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SplitEdge
	// void SplitEdge(FEdgeID EdgeID, TArray<float>& Splits, TArray<FVertexID>& OutNewVertexIDs);                               // [0x89ed80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SetVerticesCornerSharpness
	// void SetVerticesCornerSharpness(TArray<FVertexID>& VertexIDs, TArray<float>& VerticesNewCornerSharpness);                // [0x89ec60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SetVerticesAttributes
	// void SetVerticesAttributes(TArray<FAttributesForVertex>& AttributesForVertices);                                         // [0x89eb90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SetVertexInstancesAttributes
	// void SetVertexInstancesAttributes(TArray<FAttributesForVertexInstance>& AttributesForVertexInstances);                   // [0x89eac0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SetTextureCoordinateCount
	// void SetTextureCoordinateCount(int32_t NumTexCoords);                                                                    // [0x89ea30] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SetSubdivisionCount
	// void SetSubdivisionCount(int32_t NewSubdivisionCount);                                                                   // [0x89e9a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SetPolygonsVertexAttributes
	// void SetPolygonsVertexAttributes(TArray<FVertexAttributesForPolygon>& VertexAttributesForPolygons);                      // [0x89e810] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SetEdgesHardnessAutomatically
	// void SetEdgesHardnessAutomatically(TArray<FEdgeID>& EdgeIDs, float MaxDotProductForSoftEdge);                            // [0x89e710] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SetEdgesHardness
	// void SetEdgesHardness(TArray<FEdgeID>& EdgeIDs, TArray<bool>& EdgesNewIsHard);                                           // [0x89e5f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SetEdgesCreaseSharpness
	// void SetEdgesCreaseSharpness(TArray<FEdgeID>& EdgeIDs, TArray<float>& EdgesNewCreaseSharpness);                          // [0x89e4d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SetEdgesAttributes
	// void SetEdgesAttributes(TArray<FAttributesForEdge>& AttributesForEdges);                                                 // [0x89e400] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SetAllowUndo
	// void SetAllowUndo(bool bInAllowUndo);                                                                                    // [0x89e370] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SetAllowSpatialDatabase
	// void SetAllowSpatialDatabase(bool bInAllowSpatialDatabase);                                                              // [0x89e2e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SetAllowCompact
	// void SetAllowCompact(bool bInAllowCompact);                                                                              // [0x89e250] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane
	// void SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane(FPlane& InPlane, TArray<FPolygonID>& OutPolygons);     // [0x89e150] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment
	// void SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment(FVector LineSegmentStart, FVector LineSegmentEnd, TArray<FPolygonID>& OutPolygons); // [0x89e000] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsInVolume
	// void SearchSpatialDatabaseForPolygonsInVolume(TArray<FPlane>& Planes, TArray<FPolygonID>& OutPolygons);                  // [0x89dee0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.RevertInstance
	// class UEditableMesh* RevertInstance();                                                                                   // [0x89deb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.Revert
	// void Revert();                                                                                                           // [0x7dd9b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.RebuildRenderMesh
	// void RebuildRenderMesh();                                                                                                // [0x89de90] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.QuadrangulateMesh
	// void QuadrangulateMesh(TArray<FPolygonID>& OutNewPolygonIDs);                                                            // [0x89dde0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.PropagateInstanceChanges
	// void PropagateInstanceChanges();                                                                                         // [0x7dd9b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.MoveVertices
	// void MoveVertices(TArray<FVertexToMove>& VerticesToMove);                                                                // [0x89dd30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.MakeVertexID
	// FVertexID MakeVertexID(int32_t VertexIndex);                                                                             // [0x89dcb0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EditableMesh.EditableMesh.MakePolygonID
	// FPolygonID MakePolygonID(int32_t PolygonIndex);                                                                          // [0x89dcb0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EditableMesh.EditableMesh.MakePolygonGroupID
	// FPolygonGroupID MakePolygonGroupID(int32_t PolygonGroupIndex);                                                           // [0x89dcb0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EditableMesh.EditableMesh.MakeEdgeID
	// FEdgeID MakeEdgeID(int32_t EdgeIndex);                                                                                   // [0x89dcb0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EditableMesh.EditableMesh.IsValidVertex
	// bool IsValidVertex(FVertexID VertexID);                                                                                  // [0x89dc20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.IsValidPolygonGroup
	// bool IsValidPolygonGroup(FPolygonGroupID PolygonGroupID);                                                                // [0x89db90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.IsValidPolygon
	// bool IsValidPolygon(FPolygonID PolygonID);                                                                               // [0x89db00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.IsValidEdge
	// bool IsValidEdge(FEdgeID EdgeID);                                                                                        // [0x89da70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.IsUndoAllowed
	// bool IsUndoAllowed();                                                                                                    // [0x89da50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.IsSpatialDatabaseAllowed
	// bool IsSpatialDatabaseAllowed();                                                                                         // [0x89da30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.IsPreviewingSubdivisions
	// bool IsPreviewingSubdivisions();                                                                                         // [0x89da00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.IsOrphanedVertex
	// bool IsOrphanedVertex(FVertexID VertexID);                                                                               // [0x89d970] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.IsCompactAllowed
	// bool IsCompactAllowed();                                                                                                 // [0x89d950] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.IsCommittedAsInstance
	// bool IsCommittedAsInstance();                                                                                            // [0x89d920] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.IsCommitted
	// bool IsCommitted();                                                                                                      // [0x89d8f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.IsBeingModified
	// bool IsBeingModified();                                                                                                  // [0x89d8c0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.InvalidVertexID
	// FVertexID InvalidVertexID();                                                                                             // [0x89d8a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EditableMesh.EditableMesh.InvalidPolygonID
	// FPolygonID InvalidPolygonID();                                                                                           // [0x89d880] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EditableMesh.EditableMesh.InvalidPolygonGroupID
	// FPolygonGroupID InvalidPolygonGroupID();                                                                                 // [0x89d860] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EditableMesh.EditableMesh.InvalidEdgeID
	// FEdgeID InvalidEdgeID();                                                                                                 // [0x89d840] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EditableMesh.EditableMesh.InsetPolygons
	// void InsetPolygons(TArray<FPolygonID>& PolygonIDs, float InsetFixedDistance, float InsetProgressTowardCenter, EInsetPolygonsMode Mode, TArray<FPolygonID>& OutNewCenterPolygonIDs, TArray<FPolygonID>& OutNewSidePolygonIDs); // [0x89d600] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.InsertEdgeLoop
	// void InsertEdgeLoop(FEdgeID EdgeID, TArray<float>& Splits, TArray<FEdgeID>& OutNewEdgeIDs);                              // [0x89d4a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.InitializeAdapters
	// void InitializeAdapters();                                                                                               // [0x89d480] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.GetVertexPairEdge
	// FEdgeID GetVertexPairEdge(FVertexID VertexID, FVertexID NextVertexID, bool& bOutEdgeWindingIsReversed);                  // [0x89d350] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetVertexInstanceVertex
	// FVertexID GetVertexInstanceVertex(FVertexInstanceID VertexInstanceID);                                                   // [0x89d2b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetVertexInstanceCount
	// int32_t GetVertexInstanceCount();                                                                                        // [0x89d280] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygons
	// void GetVertexInstanceConnectedPolygons(FVertexInstanceID VertexInstanceID, TArray<FPolygonID>& OutConnectedPolygonIDs); // [0x89d190] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygonCount
	// int32_t GetVertexInstanceConnectedPolygonCount(FVertexInstanceID VertexInstanceID);                                      // [0x89d100] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygon
	// FPolygonID GetVertexInstanceConnectedPolygon(FVertexInstanceID VertexInstanceID, int32_t ConnectedPolygonNumber);        // [0x89d020] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetVertexCount
	// int32_t GetVertexCount();                                                                                                // [0x89cff0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetVertexConnectedPolygons
	// void GetVertexConnectedPolygons(FVertexID VertexID, TArray<FPolygonID>& OutConnectedPolygonIDs);                         // [0x89cf00] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetVertexConnectedEdges
	// void GetVertexConnectedEdges(FVertexID VertexID, TArray<FEdgeID>& OutConnectedEdgeIDs);                                  // [0x89ce10] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetVertexConnectedEdgeCount
	// int32_t GetVertexConnectedEdgeCount(FVertexID VertexID);                                                                 // [0x89cd80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetVertexConnectedEdge
	// FEdgeID GetVertexConnectedEdge(FVertexID VertexID, int32_t ConnectedEdgeNumber);                                         // [0x89cca0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetVertexAdjacentVertices
	// void GetVertexAdjacentVertices(FVertexID VertexID, TArray<FVertexID>& OutAdjacentVertexIDs);                             // [0x89cbb0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetTextureCoordinateCount
	// int32_t GetTextureCoordinateCount();                                                                                     // [0x89cb80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetSubdivisionLimitData
	// FSubdivisionLimitData GetSubdivisionLimitData();                                                                         // [0x89cb40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetSubdivisionCount
	// int32_t GetSubdivisionCount();                                                                                           // [0x89cb10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonTriangulatedTriangleCount
	// int32_t GetPolygonTriangulatedTriangleCount(FPolygonID PolygonID);                                                       // [0x89ca80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonTriangulatedTriangle
	// FTriangleID GetPolygonTriangulatedTriangle(FPolygonID PolygonID, int32_t PolygonTriangleNumber);                         // [0x89c9a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonPerimeterVertices
	// void GetPolygonPerimeterVertices(FPolygonID PolygonID, TArray<FVertexID>& OutPolygonPerimeterVertexIDs);                 // [0x89c8b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstances
	// void GetPolygonPerimeterVertexInstances(FPolygonID PolygonID, TArray<FVertexInstanceID>& OutPolygonPerimeterVertexInstanceIDs); // [0x89c7c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstance
	// FVertexInstanceID GetPolygonPerimeterVertexInstance(FPolygonID PolygonID, int32_t PolygonVertexNumber);                  // [0x89c6e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonPerimeterVertexCount
	// int32_t GetPolygonPerimeterVertexCount(FPolygonID PolygonID);                                                            // [0x89c480] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonPerimeterVertex
	// FVertexID GetPolygonPerimeterVertex(FPolygonID PolygonID, int32_t PolygonVertexNumber);                                  // [0x89c600] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonPerimeterEdges
	// void GetPolygonPerimeterEdges(FPolygonID PolygonID, TArray<FEdgeID>& OutPolygonPerimeterEdgeIDs);                        // [0x89c510] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonPerimeterEdgeCount
	// int32_t GetPolygonPerimeterEdgeCount(FPolygonID PolygonID);                                                              // [0x89c480] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonPerimeterEdge
	// FEdgeID GetPolygonPerimeterEdge(FPolygonID PolygonID, int32_t PerimeterEdgeNumber, bool& bOutEdgeWindingIsReversedForPolygon); // [0x89c350] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonInGroup
	// FPolygonID GetPolygonInGroup(FPolygonGroupID PolygonGroupID, int32_t PolygonNumber);                                     // [0x89c270] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonGroupCount
	// int32_t GetPolygonGroupCount();                                                                                          // [0x89c240] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonCountInGroup
	// int32_t GetPolygonCountInGroup(FPolygonGroupID PolygonGroupID);                                                          // [0x89c1b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonCount
	// int32_t GetPolygonCount();                                                                                               // [0x89c180] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonAdjacentPolygons
	// void GetPolygonAdjacentPolygons(FPolygonID PolygonID, TArray<FPolygonID>& OutAdjacentPolygons);                          // [0x89c090] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetGroupForPolygon
	// FPolygonGroupID GetGroupForPolygon(FPolygonID PolygonID);                                                                // [0x89bff0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetFirstValidPolygonGroup
	// FPolygonGroupID GetFirstValidPolygonGroup();                                                                             // [0x89bfb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetEdgeVertices
	// void GetEdgeVertices(FEdgeID EdgeID, FVertexID& OutEdgeVertexID0, FVertexID& OutEdgeVertexID1);                          // [0x89be80] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetEdgeVertex
	// FVertexID GetEdgeVertex(FEdgeID EdgeID, int32_t EdgeVertexNumber);                                                       // [0x89bda0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetEdgeThatConnectsVertices
	// FEdgeID GetEdgeThatConnectsVertices(FVertexID VertexID0, FVertexID VertexID1);                                           // [0x89bcc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetEdgeLoopElements
	// void GetEdgeLoopElements(FEdgeID EdgeID, TArray<FEdgeID>& EdgeLoopIDs);                                                  // [0x89bbd0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetEdgeCount
	// int32_t GetEdgeCount();                                                                                                  // [0x89bba0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetEdgeConnectedPolygons
	// void GetEdgeConnectedPolygons(FEdgeID EdgeID, TArray<FPolygonID>& OutConnectedPolygonIDs);                               // [0x89bab0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetEdgeConnectedPolygonCount
	// int32_t GetEdgeConnectedPolygonCount(FEdgeID EdgeID);                                                                    // [0x89ba20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetEdgeConnectedPolygon
	// FPolygonID GetEdgeConnectedPolygon(FEdgeID EdgeID, int32_t ConnectedPolygonNumber);                                      // [0x89b940] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GeneratePolygonTangentsAndNormals
	// void GeneratePolygonTangentsAndNormals(TArray<FPolygonID>& PolygonIDs);                                                  // [0x89b890] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.FlipPolygons
	// void FlipPolygons(TArray<FPolygonID>& PolygonIDs);                                                                       // [0x89b7e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.FindPolygonPerimeterVertexNumberForVertex
	// int32_t FindPolygonPerimeterVertexNumberForVertex(FPolygonID PolygonID, FVertexID VertexID);                             // [0x89b700] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.FindPolygonPerimeterEdgeNumberForVertices
	// int32_t FindPolygonPerimeterEdgeNumberForVertices(FPolygonID PolygonID, FVertexID EdgeVertexID0, FVertexID EdgeVertexID1); // [0x89b5e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.FindPolygonLoop
	// void FindPolygonLoop(FEdgeID EdgeID, TArray<FEdgeID>& OutEdgeLoopEdgeIDs, TArray<FEdgeID>& OutFlippedEdgeIDs, TArray<FEdgeID>& OutReversedEdgeIDPathToTake, TArray<FPolygonID>& OutPolygonIDsToSplit); // [0x89b3c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.ExtrudePolygons
	// void ExtrudePolygons(TArray<FPolygonID>& Polygons, float ExtrudeDistance, bool bKeepNeighborsTogether, TArray<FPolygonID>& OutNewExtrudedFrontPolygons); // [0x89b200] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.ExtendVertices
	// void ExtendVertices(TArray<FVertexID>& VertexIDs, bool bOnlyExtendClosestEdge, FVector ReferencePosition, TArray<FVertexID>& OutNewExtendedVertexIDs); // [0x89b050] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.ExtendEdges
	// void ExtendEdges(TArray<FEdgeID>& EdgeIDs, bool bWeldNeighbors, TArray<FEdgeID>& OutNewExtendedEdgeIDs);                 // [0x89aef0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.EndModification
	// void EndModification(bool bFromUndo);                                                                                    // [0x89ae60] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.DeleteVertexInstances
	// void DeleteVertexInstances(TArray<FVertexInstanceID>& VertexInstanceIDsToDelete, bool bDeleteOrphanedVertices);          // [0x89ad60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.DeleteVertexAndConnectedEdgesAndPolygons
	// void DeleteVertexAndConnectedEdgesAndPolygons(FVertexID VertexID, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups); // [0x89ab90] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.DeletePolygons
	// void DeletePolygons(TArray<FPolygonID>& PolygonIDsToDelete, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups); // [0x89a990] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.DeletePolygonGroups
	// void DeletePolygonGroups(TArray<FPolygonGroupID>& PolygonGroupIDs);                                                      // [0x89a8e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.DeleteOrphanVertices
	// void DeleteOrphanVertices(TArray<FVertexID>& VertexIDsToDelete);                                                         // [0x89a830] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.DeleteEdges
	// void DeleteEdges(TArray<FEdgeID>& EdgeIDsToDelete, bool bDeleteOrphanedVertices);                                        // [0x89a730] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.DeleteEdgeAndConnectedPolygons
	// void DeleteEdgeAndConnectedPolygons(FEdgeID EdgeID, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups); // [0x89a560] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.CreateVertices
	// void CreateVertices(TArray<FVertexToCreate>& VerticesToCreate, TArray<FVertexID>& OutNewVertexIDs);                      // [0x89a420] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.CreateVertexInstances
	// void CreateVertexInstances(TArray<FVertexInstanceToCreate>& VertexInstancesToCreate, TArray<FVertexInstanceID>& OutNewVertexInstanceIDs); // [0x89a2e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.CreatePolygons
	// void CreatePolygons(TArray<FPolygonToCreate>& PolygonsToCreate, TArray<FPolygonID>& OutNewPolygonIDs, TArray<FEdgeID>& OutNewEdgeIDs); // [0x89a110] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.CreatePolygonGroups
	// void CreatePolygonGroups(TArray<FPolygonGroupToCreate>& PolygonGroupsToCreate, TArray<FPolygonGroupID>& OutNewPolygonGroupIDs); // [0x899fd0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.CreateMissingPolygonPerimeterEdges
	// void CreateMissingPolygonPerimeterEdges(FPolygonID PolygonID, TArray<FEdgeID>& OutNewEdgeIDs);                           // [0x899ee0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.CreateEmptyVertexRange
	// void CreateEmptyVertexRange(int32_t NumVerticesToCreate, TArray<FVertexID>& OutNewVertexIDs);                            // [0x899df0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.CreateEdges
	// void CreateEdges(TArray<FEdgeToCreate>& EdgesToCreate, TArray<FEdgeID>& OutNewEdgeIDs);                                  // [0x899cb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.ComputePolygonsSharedEdges
	// void ComputePolygonsSharedEdges(TArray<FPolygonID>& PolygonIDs, TArray<FEdgeID>& OutSharedEdgeIDs);                      // [0x899b90] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.ComputePolygonPlane
	// FPlane ComputePolygonPlane(FPolygonID PolygonID);                                                                        // [0x899af0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.ComputePolygonNormal
	// FVector ComputePolygonNormal(FPolygonID PolygonID);                                                                      // [0x899a50] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.ComputePolygonCenter
	// FVector ComputePolygonCenter(FPolygonID PolygonID);                                                                      // [0x8999b0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.ComputeBoundingBoxAndSphere
	// FBoxSphereBounds ComputeBoundingBoxAndSphere();                                                                          // [0x899960] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.ComputeBoundingBox
	// FBox ComputeBoundingBox();                                                                                               // [0x899910] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.CommitInstance
	// class UEditableMesh* CommitInstance(class UPrimitiveComponent* ComponentToInstanceTo);                                   // [0x899870] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.Commit
	// void Commit();                                                                                                           // [0x899850] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.ChangePolygonsVertexInstances
	// void ChangePolygonsVertexInstances(TArray<FChangeVertexInstancesForPolygon>& VertexInstancesForPolygons);                // [0x899730] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.BevelPolygons
	// void BevelPolygons(TArray<FPolygonID>& PolygonIDs, float BevelFixedDistance, float BevelProgressTowardCenter, TArray<FPolygonID>& OutNewCenterPolygonIDs, TArray<FPolygonID>& OutNewSidePolygonIDs); // [0x899540] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.AssignPolygonsToPolygonGroups
	// void AssignPolygonsToPolygonGroups(TArray<FPolygonGroupForPolygon>& PolygonGroupForPolygons, bool bDeleteOrphanedPolygonGroups); // [0x899440] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.AnyChangesToUndo
	// bool AnyChangesToUndo();                                                                                                 // [0x899410] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/EditableMesh.EditableMeshFactory
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UEditableMeshFactory : public UObject
{ 
public:


	/// Functions
	// Function /Script/EditableMesh.EditableMeshFactory.MakeEditableMesh
	// class UEditableMesh* MakeEditableMesh(class UPrimitiveComponent* PrimitiveComponent, int32_t LODIndex);                  // [0x8a2d00] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/EditableMesh.EditableStaticMeshAdapter
/// Size: 0x00E0 (224 bytes) (0x000028 - 0x0000E0) align 8 MaxSize: 0x00E0
class UEditableStaticMeshAdapter : public UEditableMeshAdapter
{ 
public:
	class UStaticMesh*                                 StaticMesh;                                                 // 0x0028   (0x0008)  
	class UStaticMesh*                                 OriginalStaticMesh;                                         // 0x0030   (0x0008)  
	int32_t                                            StaticMeshLODIndex;                                         // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_7[0xA4];                                      // 0x003C   (0x00A4)  MISSED
};

/// Struct /Script/EditableMesh.AdaptorPolygon2Group
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FAdaptorPolygon2Group
{ 
	uint32_t                                           RenderingSectionIndex;                                      // 0x0000   (0x0004)  
	int32_t                                            MaterialIndex;                                              // 0x0004   (0x0004)  
	int32_t                                            MaxTriangles;                                               // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_7[0x3C];                                      // 0x000C   (0x003C)  MISSED
};

/// Struct /Script/EditableMesh.AdaptorTriangleID
/// Size: 0x0004 (4 bytes) (0x000004 - 0x000004) align 4 MaxSize: 0x0004
struct FAdaptorTriangleID : FElementID
{ 
};

/// Struct /Script/EditableMesh.AdaptorPolygon
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FAdaptorPolygon
{ 
	FPolygonGroupID                                    PolygonGroupID;                                             // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FAdaptorTriangleID>                         TriangulatedPolygonTriangleIndices;                         // 0x0008   (0x0010)  
};

/// Struct /Script/EditableMesh.PolygonGroupForPolygon
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FPolygonGroupForPolygon
{ 
	FPolygonID                                         PolygonID;                                                  // 0x0000   (0x0004)  
	FPolygonGroupID                                    PolygonGroupID;                                             // 0x0004   (0x0004)  
};

/// Struct /Script/EditableMesh.MeshElementAttributeValue
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 16 MaxSize: 0x0050
struct FMeshElementAttributeValue
{ 
	unsigned char                                      UnknownData00_2[0x50];                                      // 0x0000   (0x0050)  MISSED
};

/// Struct /Script/EditableMesh.MeshElementAttributeData
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 16 MaxSize: 0x0060
struct FMeshElementAttributeData
{ 
	FName                                              AttributeName;                                              // 0x0000   (0x0008)  
	int32_t                                            AttributeIndex;                                             // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FMeshElementAttributeValue                         AttributeValue;                                             // 0x0010   (0x0050)  
};

/// Struct /Script/EditableMesh.MeshElementAttributeList
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FMeshElementAttributeList
{ 
	TArray<FMeshElementAttributeData>                  Attributes;                                                 // 0x0000   (0x0010)  
};

/// Struct /Script/EditableMesh.PolygonGroupToCreate
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FPolygonGroupToCreate
{ 
	FMeshElementAttributeList                          PolygonGroupAttributes;                                     // 0x0000   (0x0010)  
	FPolygonGroupID                                    OriginalPolygonGroupID;                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/EditableMesh.VertexToMove
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FVertexToMove
{ 
	FVertexID                                          VertexID;                                                   // 0x0000   (0x0004)  
	FVector                                            NewVertexPosition;                                          // 0x0004   (0x000C)  
};

/// Struct /Script/EditableMesh.VertexIndexAndInstanceID
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FVertexIndexAndInstanceID
{ 
	int32_t                                            ContourIndex;                                               // 0x0000   (0x0004)  
	FVertexInstanceID                                  VertexInstanceID;                                           // 0x0004   (0x0004)  
};

/// Struct /Script/EditableMesh.VertexInstancesForPolygonHole
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FVertexInstancesForPolygonHole
{ 
	TArray<FVertexIndexAndInstanceID>                  VertexIndicesAndInstanceIDs;                                // 0x0000   (0x0010)  
};

/// Struct /Script/EditableMesh.ChangeVertexInstancesForPolygon
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FChangeVertexInstancesForPolygon
{ 
	FPolygonID                                         PolygonID;                                                  // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FVertexIndexAndInstanceID>                  PerimeterVertexIndicesAndInstanceIDs;                       // 0x0008   (0x0010)  
	TArray<FVertexInstancesForPolygonHole>             VertexIndicesAndInstanceIDsForEachHole;                     // 0x0018   (0x0010)  
};

/// Struct /Script/EditableMesh.VertexAttributesForPolygonHole
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FVertexAttributesForPolygonHole
{ 
	TArray<FMeshElementAttributeList>                  VertexAttributeList;                                        // 0x0000   (0x0010)  
};

/// Struct /Script/EditableMesh.VertexAttributesForPolygon
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FVertexAttributesForPolygon
{ 
	FPolygonID                                         PolygonID;                                                  // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FMeshElementAttributeList>                  PerimeterVertexAttributeLists;                              // 0x0008   (0x0010)  
	TArray<FVertexAttributesForPolygonHole>            VertexAttributeListsForEachHole;                            // 0x0018   (0x0010)  
};

/// Struct /Script/EditableMesh.AttributesForEdge
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FAttributesForEdge
{ 
	FEdgeID                                            EdgeID;                                                     // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FMeshElementAttributeList                          EdgeAttributes;                                             // 0x0008   (0x0010)  
};

/// Struct /Script/EditableMesh.AttributesForVertexInstance
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FAttributesForVertexInstance
{ 
	FVertexInstanceID                                  VertexInstanceID;                                           // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FMeshElementAttributeList                          VertexInstanceAttributes;                                   // 0x0008   (0x0010)  
};

/// Struct /Script/EditableMesh.AttributesForVertex
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FAttributesForVertex
{ 
	FVertexID                                          VertexID;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FMeshElementAttributeList                          VertexAttributes;                                           // 0x0008   (0x0010)  
};

/// Struct /Script/EditableMesh.VertexPair
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FVertexPair
{ 
	FVertexID                                          VertexID0;                                                  // 0x0000   (0x0004)  
	FVertexID                                          VertexID1;                                                  // 0x0004   (0x0004)  
};

/// Struct /Script/EditableMesh.PolygonToSplit
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FPolygonToSplit
{ 
	FPolygonID                                         PolygonID;                                                  // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FVertexPair>                                VertexPairsToSplitAt;                                       // 0x0008   (0x0010)  
};

/// Struct /Script/EditableMesh.VertexAndAttributes
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FVertexAndAttributes
{ 
	FVertexInstanceID                                  VertexInstanceID;                                           // 0x0000   (0x0004)  
	FVertexID                                          VertexID;                                                   // 0x0004   (0x0004)  
	FMeshElementAttributeList                          PolygonVertexAttributes;                                    // 0x0008   (0x0010)  
};

/// Struct /Script/EditableMesh.PolygonToCreate
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FPolygonToCreate
{ 
	FPolygonGroupID                                    PolygonGroupID;                                             // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FVertexAndAttributes>                       PerimeterVertices;                                          // 0x0008   (0x0010)  
	FPolygonID                                         OriginalPolygonID;                                          // 0x0018   (0x0004)  
	EPolygonEdgeHardness                               PolygonEdgeHardness;                                        // 0x001C   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x001D   (0x0003)  MISSED
};

/// Struct /Script/EditableMesh.EdgeToCreate
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FEdgeToCreate
{ 
	FVertexID                                          VertexID0;                                                  // 0x0000   (0x0004)  
	FVertexID                                          VertexID1;                                                  // 0x0004   (0x0004)  
	FMeshElementAttributeList                          EdgeAttributes;                                             // 0x0008   (0x0010)  
	FEdgeID                                            OriginalEdgeID;                                             // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/EditableMesh.VertexInstanceToCreate
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FVertexInstanceToCreate
{ 
	FVertexID                                          VertexID;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FMeshElementAttributeList                          VertexInstanceAttributes;                                   // 0x0008   (0x0010)  
	FVertexInstanceID                                  OriginalVertexInstanceID;                                   // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/EditableMesh.VertexToCreate
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FVertexToCreate
{ 
	FMeshElementAttributeList                          VertexAttributes;                                           // 0x0000   (0x0010)  
	FVertexID                                          OriginalVertexID;                                           // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/EditableMesh.SubdividedQuadVertex
/// Size: 0x0034 (52 bytes) (0x000000 - 0x000034) align 4 MaxSize: 0x0034
struct FSubdividedQuadVertex
{ 
	int32_t                                            VertexPositionIndex;                                        // 0x0000   (0x0004)  
	FVector2D                                          TextureCoordinate0;                                         // 0x0004   (0x0008)  
	FVector2D                                          TextureCoordinate1;                                         // 0x000C   (0x0008)  
	FColor                                             VertexColor;                                                // 0x0014   (0x0004)  
	FVector                                            VertexNormal;                                               // 0x0018   (0x000C)  
	FVector                                            VertexTangent;                                              // 0x0024   (0x000C)  
	float                                              VertexBinormalSign;                                         // 0x0030   (0x0004)  
};

/// Struct /Script/EditableMesh.SubdividedQuad
/// Size: 0x00D0 (208 bytes) (0x000000 - 0x0000D0) align 4 MaxSize: 0x00D0
struct FSubdividedQuad
{ 
	FSubdividedQuadVertex                              QuadVertex0;                                                // 0x0000   (0x0034)  
	FSubdividedQuadVertex                              QuadVertex1;                                                // 0x0034   (0x0034)  
	FSubdividedQuadVertex                              QuadVertex2;                                                // 0x0068   (0x0034)  
	FSubdividedQuadVertex                              QuadVertex3;                                                // 0x009C   (0x0034)  
};

/// Struct /Script/EditableMesh.SubdivisionLimitSection
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FSubdivisionLimitSection
{ 
	TArray<FSubdividedQuad>                            SubdividedQuads;                                            // 0x0000   (0x0010)  
};

/// Struct /Script/EditableMesh.SubdividedWireEdge
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FSubdividedWireEdge
{ 
	int32_t                                            EdgeVertex0PositionIndex;                                   // 0x0000   (0x0004)  
	int32_t                                            EdgeVertex1PositionIndex;                                   // 0x0004   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0008   (0x0004)  MISSED
};

/// Struct /Script/EditableMesh.SubdivisionLimitData
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FSubdivisionLimitData
{ 
	TArray<FVector>                                    VertexPositions;                                            // 0x0000   (0x0010)  
	TArray<FSubdivisionLimitSection>                   Sections;                                                   // 0x0010   (0x0010)  
	TArray<FSubdividedWireEdge>                        SubdividedWireEdges;                                        // 0x0020   (0x0010)  
};

/// Struct /Script/EditableMesh.RenderingPolygonGroup
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FRenderingPolygonGroup
{ 
	uint32_t                                           RenderingSectionIndex;                                      // 0x0000   (0x0004)  
	int32_t                                            MaterialIndex;                                              // 0x0004   (0x0004)  
	int32_t                                            MaxTriangles;                                               // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_7[0x3C];                                      // 0x000C   (0x003C)  MISSED
};

/// Struct /Script/EditableMesh.RenderingPolygon
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FRenderingPolygon
{ 
	FPolygonGroupID                                    PolygonGroupID;                                             // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FTriangleID>                                TriangulatedPolygonTriangleIndices;                         // 0x0008   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UEditableMeshAdapter) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UEditableGeometryCollectionAdapter) == 0x00D8); // 216 bytes (0x000028 - 0x0000D8)
static_assert(sizeof(UEditableMesh) == 0x0708); // 1800 bytes (0x000028 - 0x000708)
static_assert(sizeof(UEditableMeshFactory) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UEditableStaticMeshAdapter) == 0x00E0); // 224 bytes (0x000028 - 0x0000E0)
static_assert(sizeof(FAdaptorPolygon2Group) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FAdaptorTriangleID) == 0x0004); // 4 bytes (0x000004 - 0x000004)
static_assert(sizeof(FAdaptorPolygon) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FPolygonGroupForPolygon) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FMeshElementAttributeValue) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FMeshElementAttributeData) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FMeshElementAttributeList) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FPolygonGroupToCreate) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FVertexToMove) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FVertexIndexAndInstanceID) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FVertexInstancesForPolygonHole) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FChangeVertexInstancesForPolygon) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FVertexAttributesForPolygonHole) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FVertexAttributesForPolygon) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FAttributesForEdge) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FAttributesForVertexInstance) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FAttributesForVertex) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FVertexPair) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FPolygonToSplit) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FVertexAndAttributes) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FPolygonToCreate) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FEdgeToCreate) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FVertexInstanceToCreate) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FVertexToCreate) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FSubdividedQuadVertex) == 0x0034); // 52 bytes (0x000000 - 0x000034)
static_assert(sizeof(FSubdividedQuad) == 0x00D0); // 208 bytes (0x000000 - 0x0000D0)
static_assert(sizeof(FSubdivisionLimitSection) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FSubdividedWireEdge) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FSubdivisionLimitData) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FRenderingPolygonGroup) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FRenderingPolygon) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(offsetof(UEditableGeometryCollectionAdapter, GeometryCollection) == 0x0028);
static_assert(offsetof(UEditableGeometryCollectionAdapter, OriginalGeometryCollection) == 0x0030);
static_assert(offsetof(UEditableMesh, Adapters) == 0x03B8);
static_assert(offsetof(UEditableStaticMeshAdapter, StaticMesh) == 0x0028);
static_assert(offsetof(UEditableStaticMeshAdapter, OriginalStaticMesh) == 0x0030);
static_assert(offsetof(FAdaptorPolygon, PolygonGroupID) == 0x0000);
static_assert(offsetof(FAdaptorPolygon, TriangulatedPolygonTriangleIndices) == 0x0008);
static_assert(offsetof(FPolygonGroupForPolygon, PolygonID) == 0x0000);
static_assert(offsetof(FPolygonGroupForPolygon, PolygonGroupID) == 0x0004);
static_assert(offsetof(FMeshElementAttributeData, AttributeName) == 0x0000);
static_assert(offsetof(FMeshElementAttributeData, AttributeValue) == 0x0010);
static_assert(offsetof(FMeshElementAttributeList, Attributes) == 0x0000);
static_assert(offsetof(FPolygonGroupToCreate, PolygonGroupAttributes) == 0x0000);
static_assert(offsetof(FPolygonGroupToCreate, OriginalPolygonGroupID) == 0x0010);
static_assert(offsetof(FVertexToMove, VertexID) == 0x0000);
static_assert(offsetof(FVertexToMove, NewVertexPosition) == 0x0004);
static_assert(offsetof(FVertexIndexAndInstanceID, VertexInstanceID) == 0x0004);
static_assert(offsetof(FVertexInstancesForPolygonHole, VertexIndicesAndInstanceIDs) == 0x0000);
static_assert(offsetof(FChangeVertexInstancesForPolygon, PolygonID) == 0x0000);
static_assert(offsetof(FChangeVertexInstancesForPolygon, PerimeterVertexIndicesAndInstanceIDs) == 0x0008);
static_assert(offsetof(FChangeVertexInstancesForPolygon, VertexIndicesAndInstanceIDsForEachHole) == 0x0018);
static_assert(offsetof(FVertexAttributesForPolygonHole, VertexAttributeList) == 0x0000);
static_assert(offsetof(FVertexAttributesForPolygon, PolygonID) == 0x0000);
static_assert(offsetof(FVertexAttributesForPolygon, PerimeterVertexAttributeLists) == 0x0008);
static_assert(offsetof(FVertexAttributesForPolygon, VertexAttributeListsForEachHole) == 0x0018);
static_assert(offsetof(FAttributesForEdge, EdgeID) == 0x0000);
static_assert(offsetof(FAttributesForEdge, EdgeAttributes) == 0x0008);
static_assert(offsetof(FAttributesForVertexInstance, VertexInstanceID) == 0x0000);
static_assert(offsetof(FAttributesForVertexInstance, VertexInstanceAttributes) == 0x0008);
static_assert(offsetof(FAttributesForVertex, VertexID) == 0x0000);
static_assert(offsetof(FAttributesForVertex, VertexAttributes) == 0x0008);
static_assert(offsetof(FVertexPair, VertexID0) == 0x0000);
static_assert(offsetof(FVertexPair, VertexID1) == 0x0004);
static_assert(offsetof(FPolygonToSplit, PolygonID) == 0x0000);
static_assert(offsetof(FPolygonToSplit, VertexPairsToSplitAt) == 0x0008);
static_assert(offsetof(FVertexAndAttributes, VertexInstanceID) == 0x0000);
static_assert(offsetof(FVertexAndAttributes, VertexID) == 0x0004);
static_assert(offsetof(FVertexAndAttributes, PolygonVertexAttributes) == 0x0008);
static_assert(offsetof(FPolygonToCreate, PolygonGroupID) == 0x0000);
static_assert(offsetof(FPolygonToCreate, PerimeterVertices) == 0x0008);
static_assert(offsetof(FPolygonToCreate, OriginalPolygonID) == 0x0018);
static_assert(offsetof(FPolygonToCreate, PolygonEdgeHardness) == 0x001C);
static_assert(offsetof(FEdgeToCreate, VertexID0) == 0x0000);
static_assert(offsetof(FEdgeToCreate, VertexID1) == 0x0004);
static_assert(offsetof(FEdgeToCreate, EdgeAttributes) == 0x0008);
static_assert(offsetof(FEdgeToCreate, OriginalEdgeID) == 0x0018);
static_assert(offsetof(FVertexInstanceToCreate, VertexID) == 0x0000);
static_assert(offsetof(FVertexInstanceToCreate, VertexInstanceAttributes) == 0x0008);
static_assert(offsetof(FVertexInstanceToCreate, OriginalVertexInstanceID) == 0x0018);
static_assert(offsetof(FVertexToCreate, VertexAttributes) == 0x0000);
static_assert(offsetof(FVertexToCreate, OriginalVertexID) == 0x0010);
static_assert(offsetof(FSubdividedQuadVertex, TextureCoordinate0) == 0x0004);
static_assert(offsetof(FSubdividedQuadVertex, TextureCoordinate1) == 0x000C);
static_assert(offsetof(FSubdividedQuadVertex, VertexColor) == 0x0014);
static_assert(offsetof(FSubdividedQuadVertex, VertexNormal) == 0x0018);
static_assert(offsetof(FSubdividedQuadVertex, VertexTangent) == 0x0024);
static_assert(offsetof(FSubdividedQuad, QuadVertex0) == 0x0000);
static_assert(offsetof(FSubdividedQuad, QuadVertex1) == 0x0034);
static_assert(offsetof(FSubdividedQuad, QuadVertex2) == 0x0068);
static_assert(offsetof(FSubdividedQuad, QuadVertex3) == 0x009C);
static_assert(offsetof(FSubdivisionLimitSection, SubdividedQuads) == 0x0000);
static_assert(offsetof(FSubdivisionLimitData, VertexPositions) == 0x0000);
static_assert(offsetof(FSubdivisionLimitData, Sections) == 0x0010);
static_assert(offsetof(FSubdivisionLimitData, SubdividedWireEdges) == 0x0020);
static_assert(offsetof(FRenderingPolygon, PolygonGroupID) == 0x0000);
static_assert(offsetof(FRenderingPolygon, TriangulatedPolygonTriangleIndices) == 0x0008);
