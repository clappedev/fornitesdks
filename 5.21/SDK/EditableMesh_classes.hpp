#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x328 (0x350 - 0x28)
// Class EditableMesh.EditableMesh
class UEditableMesh : public UObject
{
public:
	class UMeshDescription*                      MeshDescription;                                   // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_147A[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UEditableMeshAdapter*>          Adapters;                                          // 0x58(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        TextureCoordinateCount;                            // 0x68(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_147B[0xF8];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PendingCompactCounter;                             // 0x164(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SubdivisionCount;                                  // 0x168(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_147C[0x1E4];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EditableMesh");
		return Clss;
	}

	void WeldVertices(TArray<struct FVertexID>& VertexIDs, struct FVertexID* OutNewVertexID);
	void TryToRemoveVertex(const struct FVertexID& VertexID, bool* bOutWasVertexRemoved, struct FEdgeID* OutNewEdgeID);
	void TryToRemovePolygonEdge(const struct FEdgeID& EdgeID, bool* bOutWasEdgeRemoved, struct FPolygonID* OutNewPolygonID);
	void TriangulatePolygons(TArray<struct FPolygonID>& PolygonIDs, TArray<struct FPolygonID>* OutNewTrianglePolygons);
	void TessellatePolygons(TArray<struct FPolygonID>& PolygonIDs, enum class ETriangleTessellationMode TriangleTessellationMode, TArray<struct FPolygonID>* OutNewPolygonIDs);
	void StartModification(enum class EMeshModificationType MeshModificationType, enum class EMeshTopologyChange MeshTopologyChange);
	void SplitPolygons(TArray<struct FPolygonToSplit>& PolygonsToSplit, TArray<struct FEdgeID>* OutNewEdgeIDs);
	void SplitEdge(const struct FEdgeID& EdgeID, TArray<float>& Splits, TArray<struct FVertexID>* OutNewVertexIDs);
	void SetVerticesCornerSharpness(TArray<struct FVertexID>& VertexIDs, TArray<float>& VerticesNewCornerSharpness);
	void SetVerticesAttributes(TArray<struct FAttributesForVertex>& AttributesForVertices);
	void SetVertexInstancesAttributes(TArray<struct FAttributesForVertexInstance>& AttributesForVertexInstances);
	void SetTextureCoordinateCount(int32 NumTexCoords);
	void SetSubdivisionCount(int32 NewSubdivisionCount);
	void SetPolygonsVertexAttributes(TArray<struct FVertexAttributesForPolygon>& VertexAttributesForPolygons);
	void SetEdgesVertices(TArray<struct FVerticesForEdge>& VerticesForEdges);
	void SetEdgesHardnessAutomatically(TArray<struct FEdgeID>& EdgeIDs, float MaxDotProductForSoftEdge);
	void SetEdgesHardness(TArray<struct FEdgeID>& EdgeIDs, TArray<bool>& EdgesNewIsHard);
	void SetEdgesCreaseSharpness(TArray<struct FEdgeID>& EdgeIDs, TArray<float>& EdgesNewCreaseSharpness);
	void SetEdgesAttributes(TArray<struct FAttributesForEdge>& AttributesForEdges);
	void SetAllowUndo(bool bInAllowUndo);
	void SetAllowSpatialDatabase(bool bInAllowSpatialDatabase);
	void SetAllowCompact(bool bInAllowCompact);
	void SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment(const struct FVector& LineSegmentStart, const struct FVector& LineSegmentEnd, TArray<struct FPolygonID>* OutPolygons);
	class UEditableMesh* RevertInstance();
	void Revert();
	void RemovePolygonPerimeterVertices(const struct FPolygonID& PolygonID, int32 FirstVertexNumberToRemove, int32 NumVerticesToRemove, bool bDeleteOrphanedVertexInstances);
	void RebuildRenderMesh();
	void QuadrangulateMesh(TArray<struct FPolygonID>* OutNewPolygonIDs);
	void PropagateInstanceChanges();
	void MoveVertices(TArray<struct FVertexToMove>& VerticesToMove);
	struct FVertexID MakeVertexID(int32 VertexIndex);
	struct FPolygonID MakePolygonID(int32 PolygonIndex);
	struct FPolygonGroupID MakePolygonGroupID(int32 PolygonGroupIndex);
	struct FEdgeID MakeEdgeID(int32 EdgeIndex);
	bool IsValidVertex(const struct FVertexID& VertexID);
	bool IsValidPolygonGroup(const struct FPolygonGroupID& PolygonGroupID);
	bool IsValidPolygon(const struct FPolygonID& PolygonID);
	bool IsValidEdge(const struct FEdgeID& EdgeID);
	bool IsUndoAllowed();
	bool IsSpatialDatabaseAllowed();
	bool IsPreviewingSubdivisions();
	bool IsOrphanedVertex(const struct FVertexID& VertexID);
	bool IsCompactAllowed();
	bool IsCommittedAsInstance();
	bool IsCommitted();
	bool IsBeingModified();
	struct FVertexID InvalidVertexID();
	struct FPolygonID InvalidPolygonID();
	struct FPolygonGroupID InvalidPolygonGroupID();
	struct FEdgeID InvalidEdgeID();
	void InsetPolygons(TArray<struct FPolygonID>& PolygonIDs, float InsetFixedDistance, float InsetProgressTowardCenter, enum class EInsetPolygonsMode Mode, TArray<struct FPolygonID>* OutNewCenterPolygonIDs, TArray<struct FPolygonID>* OutNewSidePolygonIDs);
	void InsertPolygonPerimeterVertices(const struct FPolygonID& PolygonID, int32 InsertBeforeVertexNumber, TArray<struct FVertexAndAttributes>& VerticesToInsert);
	void InsertEdgeLoop(const struct FEdgeID& EdgeID, TArray<float>& Splits, TArray<struct FEdgeID>* OutNewEdgeIDs);
	void InitializeAdapters();
	struct FEdgeID GetVertexPairEdge(const struct FVertexID& VertexID, const struct FVertexID& NextVertexID, bool* bOutEdgeWindingIsReversed);
	struct FVertexID GetVertexInstanceVertex(const struct FVertexInstanceID& VertexInstanceID);
	int32 GetVertexInstanceCount();
	void GetVertexInstanceConnectedPolygons(const struct FVertexInstanceID& VertexInstanceID, TArray<struct FPolygonID>* OutConnectedPolygonIDs);
	int32 GetVertexInstanceConnectedPolygonCount(const struct FVertexInstanceID& VertexInstanceID);
	struct FPolygonID GetVertexInstanceConnectedPolygon(const struct FVertexInstanceID& VertexInstanceID, int32 ConnectedPolygonNumber);
	int32 GetVertexCount();
	void GetVertexConnectedPolygons(const struct FVertexID& VertexID, TArray<struct FPolygonID>* OutConnectedPolygonIDs);
	void GetVertexConnectedEdges(const struct FVertexID& VertexID, TArray<struct FEdgeID>* OutConnectedEdgeIDs);
	int32 GetVertexConnectedEdgeCount(const struct FVertexID& VertexID);
	struct FEdgeID GetVertexConnectedEdge(const struct FVertexID& VertexID, int32 ConnectedEdgeNumber);
	void GetVertexAdjacentVertices(const struct FVertexID& VertexID, TArray<struct FVertexID>* OutAdjacentVertexIDs);
	int32 GetTextureCoordinateCount();
	struct FSubdivisionLimitData& GetSubdivisionLimitData();
	int32 GetSubdivisionCount();
	int32 GetPolygonTriangulatedTriangleCount(const struct FPolygonID& PolygonID);
	struct FMeshTriangle GetPolygonTriangulatedTriangle(const struct FPolygonID& PolygonID, int32 PolygonTriangleNumber);
	void GetPolygonPerimeterVertices(const struct FPolygonID& PolygonID, TArray<struct FVertexID>* OutPolygonPerimeterVertexIDs);
	void GetPolygonPerimeterVertexInstances(const struct FPolygonID& PolygonID, TArray<struct FVertexInstanceID>* OutPolygonPerimeterVertexInstanceIDs);
	struct FVertexInstanceID GetPolygonPerimeterVertexInstance(const struct FPolygonID& PolygonID, int32 PolygonVertexNumber);
	int32 GetPolygonPerimeterVertexCount(const struct FPolygonID& PolygonID);
	struct FVertexID GetPolygonPerimeterVertex(const struct FPolygonID& PolygonID, int32 PolygonVertexNumber);
	void GetPolygonPerimeterEdges(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OutPolygonPerimeterEdgeIDs);
	int32 GetPolygonPerimeterEdgeCount(const struct FPolygonID& PolygonID);
	struct FEdgeID GetPolygonPerimeterEdge(const struct FPolygonID& PolygonID, int32 PerimeterEdgeNumber, bool* bOutEdgeWindingIsReversedForPolygon);
	struct FPolygonID GetPolygonInGroup(const struct FPolygonGroupID& PolygonGroupID, int32 PolygonNumber);
	void GetPolygonHoleVertices(const struct FPolygonID& PolygonID, int32 HoleNumber, TArray<struct FVertexID>* OutHoleVertexIDs);
	void GetPolygonHoleVertexInstances(const struct FPolygonID& PolygonID, int32 HoleNumber, TArray<struct FVertexInstanceID>* OutHoleVertexInstanceIDs);
	struct FVertexInstanceID GetPolygonHoleVertexInstance(const struct FPolygonID& PolygonID, int32 HoleNumber, int32 PolygonVertexNumber);
	int32 GetPolygonHoleVertexCount(const struct FPolygonID& PolygonID, int32 HoleNumber);
	struct FVertexID GetPolygonHoleVertex(const struct FPolygonID& PolygonID, int32 HoleNumber, int32 PolygonVertexNumber);
	void GetPolygonHoleEdges(const struct FPolygonID& PolygonID, int32 HoleNumber, TArray<struct FEdgeID>* OutHoleEdgeIDs);
	int32 GetPolygonHoleEdgeCount(const struct FPolygonID& PolygonID, int32 HoleNumber);
	struct FEdgeID GetPolygonHoleEdge(const struct FPolygonID& PolygonID, int32 HoleNumber, int32 HoleEdgeNumber);
	int32 GetPolygonHoleCount(const struct FPolygonID& PolygonID);
	int32 GetPolygonGroupCount();
	int32 GetPolygonCountInGroup(const struct FPolygonGroupID& PolygonGroupID);
	int32 GetPolygonCount();
	void GetPolygonAdjacentPolygons(const struct FPolygonID& PolygonID, TArray<struct FPolygonID>* OutAdjacentPolygons);
	struct FPolygonGroupID GetGroupForPolygon(const struct FPolygonID& PolygonID);
	struct FPolygonGroupID GetFirstValidPolygonGroup();
	void GetEdgeVertices(const struct FEdgeID& EdgeID, struct FVertexID* OutEdgeVertexID0, struct FVertexID* OutEdgeVertexID1);
	struct FVertexID GetEdgeVertex(const struct FEdgeID& EdgeID, int32 EdgeVertexNumber);
	struct FEdgeID GetEdgeThatConnectsVertices(const struct FVertexID& VertexID0, const struct FVertexID& VertexID1);
	void GetEdgeLoopElements(const struct FEdgeID& EdgeID, TArray<struct FEdgeID>* EdgeLoopIDs);
	int32 GetEdgeCount();
	void GetEdgeConnectedPolygons(const struct FEdgeID& EdgeID, TArray<struct FPolygonID>* OutConnectedPolygonIDs);
	int32 GetEdgeConnectedPolygonCount(const struct FEdgeID& EdgeID);
	struct FPolygonID GetEdgeConnectedPolygon(const struct FEdgeID& EdgeID, int32 ConnectedPolygonNumber);
	void GeneratePolygonTangentsAndNormals(TArray<struct FPolygonID>& PolygonIDs);
	void FlipPolygons(TArray<struct FPolygonID>& PolygonIDs);
	int32 FindPolygonPerimeterVertexNumberForVertex(const struct FPolygonID& PolygonID, const struct FVertexID& VertexID);
	int32 FindPolygonPerimeterEdgeNumberForVertices(const struct FPolygonID& PolygonID, const struct FVertexID& EdgeVertexID0, const struct FVertexID& EdgeVertexID1);
	void FindPolygonLoop(const struct FEdgeID& EdgeID, TArray<struct FEdgeID>* OutEdgeLoopEdgeIDs, TArray<struct FEdgeID>* OutFlippedEdgeIDs, TArray<struct FEdgeID>* OutReversedEdgeIDPathToTake, TArray<struct FPolygonID>* OutPolygonIDsToSplit);
	int32 FindPolygonHoleVertexNumberForVertex(const struct FPolygonID& PolygonID, int32 HoleNumber, const struct FVertexID& VertexID);
	int32 FindPolygonHoleEdgeNumberForVertices(const struct FPolygonID& PolygonID, int32 HoleNumber, const struct FVertexID& EdgeVertexID0, const struct FVertexID& EdgeVertexID1);
	void ExtrudePolygons(TArray<struct FPolygonID>& Polygons, float ExtrudeDistance, bool bKeepNeighborsTogether, TArray<struct FPolygonID>* OutNewExtrudedFrontPolygons);
	void ExtendVertices(TArray<struct FVertexID>& VertexIDs, bool bOnlyExtendClosestEdge, const struct FVector& ReferencePosition, TArray<struct FVertexID>* OutNewExtendedVertexIDs);
	void ExtendEdges(TArray<struct FEdgeID>& EdgeIDs, bool bWeldNeighbors, TArray<struct FEdgeID>* OutNewExtendedEdgeIDs);
	void EndModification(bool bFromUndo);
	void DeleteVertexInstances(TArray<struct FVertexInstanceID>& VertexInstanceIDsToDelete, bool bDeleteOrphanedVertices);
	void DeleteVertexAndConnectedEdgesAndPolygons(const struct FVertexID& VertexID, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups);
	void DeletePolygons(TArray<struct FPolygonID>& PolygonIDsToDelete, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups);
	void DeletePolygonGroups(TArray<struct FPolygonGroupID>& PolygonGroupIDs);
	void DeleteOrphanVertices(TArray<struct FVertexID>& VertexIDsToDelete);
	void DeleteEdges(TArray<struct FEdgeID>& EdgeIDsToDelete, bool bDeleteOrphanedVertices);
	void DeleteEdgeAndConnectedPolygons(const struct FEdgeID& EdgeID, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups);
	void CreateVertices(TArray<struct FVertexToCreate>& VerticesToCreate, TArray<struct FVertexID>* OutNewVertexIDs);
	void CreateVertexInstances(TArray<struct FVertexInstanceToCreate>& VertexInstancesToCreate, TArray<struct FVertexInstanceID>* OutNewVertexInstanceIDs);
	void CreatePolygons(TArray<struct FPolygonToCreate>& PolygonsToCreate, TArray<struct FPolygonID>* OutNewPolygonIDs, TArray<struct FEdgeID>* OutNewEdgeIDs);
	void CreatePolygonGroups(TArray<struct FPolygonGroupToCreate>& PolygonGroupsToCreate, TArray<struct FPolygonGroupID>* OutNewPolygonGroupIDs);
	void CreateMissingPolygonPerimeterEdges(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OutNewEdgeIDs);
	void CreateMissingPolygonHoleEdges(const struct FPolygonID& PolygonID, int32 HoleNumber, TArray<struct FEdgeID>* OutNewEdgeIDs);
	void CreateEmptyVertexRange(int32 NumVerticesToCreate, TArray<struct FVertexID>* OutNewVertexIDs);
	void CreateEdges(TArray<struct FEdgeToCreate>& EdgesToCreate, TArray<struct FEdgeID>* OutNewEdgeIDs);
	void ComputePolygonTriangulation(const struct FPolygonID& PolygonID, TArray<struct FMeshTriangle>* OutTriangles);
	void ComputePolygonsSharedEdges(TArray<struct FPolygonID>& PolygonIDs, TArray<struct FEdgeID>* OutSharedEdgeIDs);
	struct FPlane ComputePolygonPlane(const struct FPolygonID& PolygonID);
	struct FVector ComputePolygonNormal(const struct FPolygonID& PolygonID);
	struct FVector ComputePolygonCenter(const struct FPolygonID& PolygonID);
	struct FBoxSphereBounds ComputeBoundingBoxAndSphere();
	struct FBox ComputeBoundingBox();
	bool ComputeBarycentricWeightForPointOnPolygon(const struct FPolygonID& PolygonID, const struct FVector& PointOnPolygon, struct FMeshTriangle* OutTriangle, struct FVector* OutTriangleVertexWeights);
	class UEditableMesh* CommitInstance(class UPrimitiveComponent* ComponentToInstanceTo);
	void COMMIT();
	void ChangePolygonsVertexInstances(TArray<struct FChangeVertexInstancesForPolygon>& VertexInstancesForPolygons);
	void BevelPolygons(TArray<struct FPolygonID>& PolygonIDs, float BevelFixedDistance, float BevelProgressTowardCenter, TArray<struct FPolygonID>* OutNewCenterPolygonIDs, TArray<struct FPolygonID>* OutNewSidePolygonIDs);
	void AssignPolygonsToPolygonGroups(TArray<struct FPolygonGroupForPolygon>& PolygonGroupForPolygons, bool bDeleteOrphanedPolygonGroups);
	bool AnyChangesToUndo();
};

// 0x0 (0x28 - 0x28)
// Class EditableMesh.EditableMeshAdapter
class UEditableMeshAdapter : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EditableMeshAdapter");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class EditableMesh.EditableMeshFactory
class UEditableMeshFactory : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EditableMeshFactory");
		return Clss;
	}

	class UEditableMesh* MakeEditableMesh(class UPrimitiveComponent* PrimitiveComponent, int32 LODIndex);
};

// 0xB8 (0xE0 - 0x28)
// Class EditableMesh.EditableStaticMeshAdapter
class UEditableStaticMeshAdapter : public UEditableMeshAdapter
{
public:
	class UStaticMesh*                           StaticMesh;                                        // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStaticMesh*                           OriginalStaticMesh;                                // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        StaticMeshLODIndex;                                // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_147E[0xA4];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EditableStaticMeshAdapter");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
