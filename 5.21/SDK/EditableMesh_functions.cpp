#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function EditableMesh.EditableMesh.WeldVertices
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FVertexID>           VertexIDs                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVertexID                   OutNewVertexID                                                   (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEditableMesh::WeldVertices(TArray<struct FVertexID>& VertexIDs, struct FVertexID* OutNewVertexID)
{
	static auto Func = Class->GetFunction("EditableMesh", "WeldVertices");

	Params::UEditableMesh_WeldVertices_Params Parms;
	Parms.VertexIDs = VertexIDs;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	if (OutNewVertexID != nullptr)
		*OutNewVertexID = Parms.OutNewVertexID;

}

// Function EditableMesh.EditableMesh.TryToRemoveVertex
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FVertexID                   VertexID                                                         (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bOutWasVertexRemoved                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEdgeID                     OutNewEdgeID                                                     (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEditableMesh::TryToRemoveVertex(const struct FVertexID& VertexID, bool* bOutWasVertexRemoved, struct FEdgeID* OutNewEdgeID)
{
	static auto Func = Class->GetFunction("EditableMesh", "TryToRemoveVertex");

	Params::UEditableMesh_TryToRemoveVertex_Params Parms;
	Parms.VertexID = VertexID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	if (bOutWasVertexRemoved != nullptr)
		*bOutWasVertexRemoved = Parms.bOutWasVertexRemoved;

	if (OutNewEdgeID != nullptr)
		*OutNewEdgeID = Parms.OutNewEdgeID;

}

// Function EditableMesh.EditableMesh.TryToRemovePolygonEdge
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FEdgeID                     EdgeID                                                           (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bOutWasEdgeRemoved                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPolygonID                  OutNewPolygonID                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEditableMesh::TryToRemovePolygonEdge(const struct FEdgeID& EdgeID, bool* bOutWasEdgeRemoved, struct FPolygonID* OutNewPolygonID)
{
	static auto Func = Class->GetFunction("EditableMesh", "TryToRemovePolygonEdge");

	Params::UEditableMesh_TryToRemovePolygonEdge_Params Parms;
	Parms.EdgeID = EdgeID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	if (bOutWasEdgeRemoved != nullptr)
		*bOutWasEdgeRemoved = Parms.bOutWasEdgeRemoved;

	if (OutNewPolygonID != nullptr)
		*OutNewPolygonID = Parms.OutNewPolygonID;

}

// Function EditableMesh.EditableMesh.TriangulatePolygons
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FPolygonID>          PolygonIDs                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>          OutNewTrianglePolygons                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::TriangulatePolygons(TArray<struct FPolygonID>& PolygonIDs, TArray<struct FPolygonID>* OutNewTrianglePolygons)
{
	static auto Func = Class->GetFunction("EditableMesh", "TriangulatePolygons");

	Params::UEditableMesh_TriangulatePolygons_Params Parms;
	Parms.PolygonIDs = PolygonIDs;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	if (OutNewTrianglePolygons != nullptr)
		*OutNewTrianglePolygons = Parms.OutNewTrianglePolygons;

}

// Function EditableMesh.EditableMesh.TessellatePolygons
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FPolygonID>          PolygonIDs                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// enum class ETriangleTessellationModeTriangleTessellationMode                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>          OutNewPolygonIDs                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::TessellatePolygons(TArray<struct FPolygonID>& PolygonIDs, enum class ETriangleTessellationMode TriangleTessellationMode, TArray<struct FPolygonID>* OutNewPolygonIDs)
{
	static auto Func = Class->GetFunction("EditableMesh", "TessellatePolygons");

	Params::UEditableMesh_TessellatePolygons_Params Parms;
	Parms.PolygonIDs = PolygonIDs;
	Parms.TriangleTessellationMode = TriangleTessellationMode;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	if (OutNewPolygonIDs != nullptr)
		*OutNewPolygonIDs = Parms.OutNewPolygonIDs;

}

// Function EditableMesh.EditableMesh.StartModification
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EMeshModificationType   MeshModificationType                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMeshTopologyChange     MeshTopologyChange                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEditableMesh::StartModification(enum class EMeshModificationType MeshModificationType, enum class EMeshTopologyChange MeshTopologyChange)
{
	static auto Func = Class->GetFunction("EditableMesh", "StartModification");

	Params::UEditableMesh_StartModification_Params Parms;
	Parms.MeshModificationType = MeshModificationType;
	Parms.MeshTopologyChange = MeshTopologyChange;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


}

// Function EditableMesh.EditableMesh.SplitPolygons
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FPolygonToSplit>     PolygonsToSplit                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>             OutNewEdgeIDs                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::SplitPolygons(TArray<struct FPolygonToSplit>& PolygonsToSplit, TArray<struct FEdgeID>* OutNewEdgeIDs)
{
	static auto Func = Class->GetFunction("EditableMesh", "SplitPolygons");

	Params::UEditableMesh_SplitPolygons_Params Parms;
	Parms.PolygonsToSplit = PolygonsToSplit;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	if (OutNewEdgeIDs != nullptr)
		*OutNewEdgeIDs = Parms.OutNewEdgeIDs;

}

// Function EditableMesh.EditableMesh.SplitEdge
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FEdgeID                     EdgeID                                                           (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      Splits                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVertexID>           OutNewVertexIDs                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::SplitEdge(const struct FEdgeID& EdgeID, TArray<float>& Splits, TArray<struct FVertexID>* OutNewVertexIDs)
{
	static auto Func = Class->GetFunction("EditableMesh", "SplitEdge");

	Params::UEditableMesh_SplitEdge_Params Parms;
	Parms.EdgeID = EdgeID;
	Parms.Splits = Splits;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	if (OutNewVertexIDs != nullptr)
		*OutNewVertexIDs = Parms.OutNewVertexIDs;

}

// Function EditableMesh.EditableMesh.SetVerticesCornerSharpness
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FVertexID>           VertexIDs                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<float>                      VerticesNewCornerSharpness                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UEditableMesh::SetVerticesCornerSharpness(TArray<struct FVertexID>& VertexIDs, TArray<float>& VerticesNewCornerSharpness)
{
	static auto Func = Class->GetFunction("EditableMesh", "SetVerticesCornerSharpness");

	Params::UEditableMesh_SetVerticesCornerSharpness_Params Parms;
	Parms.VertexIDs = VertexIDs;
	Parms.VerticesNewCornerSharpness = VerticesNewCornerSharpness;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


}

// Function EditableMesh.EditableMesh.SetVerticesAttributes
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FAttributesForVertex>AttributesForVertices                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UEditableMesh::SetVerticesAttributes(TArray<struct FAttributesForVertex>& AttributesForVertices)
{
	static auto Func = Class->GetFunction("EditableMesh", "SetVerticesAttributes");

	Params::UEditableMesh_SetVerticesAttributes_Params Parms;
	Parms.AttributesForVertices = AttributesForVertices;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


}

// Function EditableMesh.EditableMesh.SetVertexInstancesAttributes
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FAttributesForVertexInstance>AttributesForVertexInstances                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UEditableMesh::SetVertexInstancesAttributes(TArray<struct FAttributesForVertexInstance>& AttributesForVertexInstances)
{
	static auto Func = Class->GetFunction("EditableMesh", "SetVertexInstancesAttributes");

	Params::UEditableMesh_SetVertexInstancesAttributes_Params Parms;
	Parms.AttributesForVertexInstances = AttributesForVertexInstances;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


}

// Function EditableMesh.EditableMesh.SetTextureCoordinateCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NumTexCoords                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEditableMesh::SetTextureCoordinateCount(int32 NumTexCoords)
{
	static auto Func = Class->GetFunction("EditableMesh", "SetTextureCoordinateCount");

	Params::UEditableMesh_SetTextureCoordinateCount_Params Parms;
	Parms.NumTexCoords = NumTexCoords;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


}

// Function EditableMesh.EditableMesh.SetSubdivisionCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NewSubdivisionCount                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEditableMesh::SetSubdivisionCount(int32 NewSubdivisionCount)
{
	static auto Func = Class->GetFunction("EditableMesh", "SetSubdivisionCount");

	Params::UEditableMesh_SetSubdivisionCount_Params Parms;
	Parms.NewSubdivisionCount = NewSubdivisionCount;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


}

// Function EditableMesh.EditableMesh.SetPolygonsVertexAttributes
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FVertexAttributesForPolygon>VertexAttributesForPolygons                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UEditableMesh::SetPolygonsVertexAttributes(TArray<struct FVertexAttributesForPolygon>& VertexAttributesForPolygons)
{
	static auto Func = Class->GetFunction("EditableMesh", "SetPolygonsVertexAttributes");

	Params::UEditableMesh_SetPolygonsVertexAttributes_Params Parms;
	Parms.VertexAttributesForPolygons = VertexAttributesForPolygons;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


}

// Function EditableMesh.EditableMesh.SetEdgesVertices
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FVerticesForEdge>    VerticesForEdges                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UEditableMesh::SetEdgesVertices(TArray<struct FVerticesForEdge>& VerticesForEdges)
{
	static auto Func = Class->GetFunction("EditableMesh", "SetEdgesVertices");

	Params::UEditableMesh_SetEdgesVertices_Params Parms;
	Parms.VerticesForEdges = VerticesForEdges;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


}

// Function EditableMesh.EditableMesh.SetEdgesHardnessAutomatically
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FEdgeID>             EdgeIDs                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// float                              MaxDotProductForSoftEdge                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEditableMesh::SetEdgesHardnessAutomatically(TArray<struct FEdgeID>& EdgeIDs, float MaxDotProductForSoftEdge)
{
	static auto Func = Class->GetFunction("EditableMesh", "SetEdgesHardnessAutomatically");

	Params::UEditableMesh_SetEdgesHardnessAutomatically_Params Parms;
	Parms.EdgeIDs = EdgeIDs;
	Parms.MaxDotProductForSoftEdge = MaxDotProductForSoftEdge;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


}

// Function EditableMesh.EditableMesh.SetEdgesHardness
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FEdgeID>             EdgeIDs                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<bool>                       EdgesNewIsHard                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UEditableMesh::SetEdgesHardness(TArray<struct FEdgeID>& EdgeIDs, TArray<bool>& EdgesNewIsHard)
{
	static auto Func = Class->GetFunction("EditableMesh", "SetEdgesHardness");

	Params::UEditableMesh_SetEdgesHardness_Params Parms;
	Parms.EdgeIDs = EdgeIDs;
	Parms.EdgesNewIsHard = EdgesNewIsHard;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


}

// Function EditableMesh.EditableMesh.SetEdgesCreaseSharpness
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FEdgeID>             EdgeIDs                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<float>                      EdgesNewCreaseSharpness                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UEditableMesh::SetEdgesCreaseSharpness(TArray<struct FEdgeID>& EdgeIDs, TArray<float>& EdgesNewCreaseSharpness)
{
	static auto Func = Class->GetFunction("EditableMesh", "SetEdgesCreaseSharpness");

	Params::UEditableMesh_SetEdgesCreaseSharpness_Params Parms;
	Parms.EdgeIDs = EdgeIDs;
	Parms.EdgesNewCreaseSharpness = EdgesNewCreaseSharpness;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


}

// Function EditableMesh.EditableMesh.SetEdgesAttributes
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FAttributesForEdge>  AttributesForEdges                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UEditableMesh::SetEdgesAttributes(TArray<struct FAttributesForEdge>& AttributesForEdges)
{
	static auto Func = Class->GetFunction("EditableMesh", "SetEdgesAttributes");

	Params::UEditableMesh_SetEdgesAttributes_Params Parms;
	Parms.AttributesForEdges = AttributesForEdges;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


}

// Function EditableMesh.EditableMesh.SetAllowUndo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInAllowUndo                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEditableMesh::SetAllowUndo(bool bInAllowUndo)
{
	static auto Func = Class->GetFunction("EditableMesh", "SetAllowUndo");

	Params::UEditableMesh_SetAllowUndo_Params Parms;
	Parms.bInAllowUndo = bInAllowUndo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


}

// Function EditableMesh.EditableMesh.SetAllowSpatialDatabase
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInAllowSpatialDatabase                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEditableMesh::SetAllowSpatialDatabase(bool bInAllowSpatialDatabase)
{
	static auto Func = Class->GetFunction("EditableMesh", "SetAllowSpatialDatabase");

	Params::UEditableMesh_SetAllowSpatialDatabase_Params Parms;
	Parms.bInAllowSpatialDatabase = bInAllowSpatialDatabase;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


}

// Function EditableMesh.EditableMesh.SetAllowCompact
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInAllowCompact                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEditableMesh::SetAllowCompact(bool bInAllowCompact)
{
	static auto Func = Class->GetFunction("EditableMesh", "SetAllowCompact");

	Params::UEditableMesh_SetAllowCompact_Params Parms;
	Parms.bInAllowCompact = bInAllowCompact;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


}

// Function EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     LineSegmentStart                                                 (ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LineSegmentEnd                                                   (ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>          OutPolygons                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment(const struct FVector& LineSegmentStart, const struct FVector& LineSegmentEnd, TArray<struct FPolygonID>* OutPolygons)
{
	static auto Func = Class->GetFunction("EditableMesh", "SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment");

	Params::UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment_Params Parms;
	Parms.LineSegmentStart = LineSegmentStart;
	Parms.LineSegmentEnd = LineSegmentEnd;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	if (OutPolygons != nullptr)
		*OutPolygons = Parms.OutPolygons;

}

// Function EditableMesh.EditableMesh.RevertInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UEditableMesh*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UEditableMesh* UEditableMesh::RevertInstance()
{
	static auto Func = Class->GetFunction("EditableMesh", "RevertInstance");

	Params::UEditableMesh_RevertInstance_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.Revert
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UEditableMesh::Revert()
{
	static auto Func = Class->GetFunction("EditableMesh", "Revert");

	Params::UEditableMesh_Revert_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


}

// Function EditableMesh.EditableMesh.RemovePolygonPerimeterVertices
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FirstVertexNumberToRemove                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumVerticesToRemove                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDeleteOrphanedVertexInstances                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEditableMesh::RemovePolygonPerimeterVertices(const struct FPolygonID& PolygonID, int32 FirstVertexNumberToRemove, int32 NumVerticesToRemove, bool bDeleteOrphanedVertexInstances)
{
	static auto Func = Class->GetFunction("EditableMesh", "RemovePolygonPerimeterVertices");

	Params::UEditableMesh_RemovePolygonPerimeterVertices_Params Parms;
	Parms.PolygonID = PolygonID;
	Parms.FirstVertexNumberToRemove = FirstVertexNumberToRemove;
	Parms.NumVerticesToRemove = NumVerticesToRemove;
	Parms.bDeleteOrphanedVertexInstances = bDeleteOrphanedVertexInstances;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


}

// Function EditableMesh.EditableMesh.RebuildRenderMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UEditableMesh::RebuildRenderMesh()
{
	static auto Func = Class->GetFunction("EditableMesh", "RebuildRenderMesh");

	Params::UEditableMesh_RebuildRenderMesh_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


}

// Function EditableMesh.EditableMesh.QuadrangulateMesh
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FPolygonID>          OutNewPolygonIDs                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::QuadrangulateMesh(TArray<struct FPolygonID>* OutNewPolygonIDs)
{
	static auto Func = Class->GetFunction("EditableMesh", "QuadrangulateMesh");

	Params::UEditableMesh_QuadrangulateMesh_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	if (OutNewPolygonIDs != nullptr)
		*OutNewPolygonIDs = Parms.OutNewPolygonIDs;

}

// Function EditableMesh.EditableMesh.PropagateInstanceChanges
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UEditableMesh::PropagateInstanceChanges()
{
	static auto Func = Class->GetFunction("EditableMesh", "PropagateInstanceChanges");

	Params::UEditableMesh_PropagateInstanceChanges_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


}

// Function EditableMesh.EditableMesh.MoveVertices
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FVertexToMove>       VerticesToMove                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UEditableMesh::MoveVertices(TArray<struct FVertexToMove>& VerticesToMove)
{
	static auto Func = Class->GetFunction("EditableMesh", "MoveVertices");

	Params::UEditableMesh_MoveVertices_Params Parms;
	Parms.VerticesToMove = VerticesToMove;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


}

// Function EditableMesh.EditableMesh.MakeVertexID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              VertexIndex                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVertexID                   ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVertexID UEditableMesh::MakeVertexID(int32 VertexIndex)
{
	static auto Func = Class->GetFunction("EditableMesh", "MakeVertexID");

	Params::UEditableMesh_MakeVertexID_Params Parms;
	Parms.VertexIndex = VertexIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.MakePolygonID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              PolygonIndex                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPolygonID                  ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FPolygonID UEditableMesh::MakePolygonID(int32 PolygonIndex)
{
	static auto Func = Class->GetFunction("EditableMesh", "MakePolygonID");

	Params::UEditableMesh_MakePolygonID_Params Parms;
	Parms.PolygonIndex = PolygonIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.MakePolygonGroupID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              PolygonGroupIndex                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPolygonGroupID             ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FPolygonGroupID UEditableMesh::MakePolygonGroupID(int32 PolygonGroupIndex)
{
	static auto Func = Class->GetFunction("EditableMesh", "MakePolygonGroupID");

	Params::UEditableMesh_MakePolygonGroupID_Params Parms;
	Parms.PolygonGroupIndex = PolygonGroupIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.MakeEdgeID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              EdgeIndex                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEdgeID                     ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FEdgeID UEditableMesh::MakeEdgeID(int32 EdgeIndex)
{
	static auto Func = Class->GetFunction("EditableMesh", "MakeEdgeID");

	Params::UEditableMesh_MakeEdgeID_Params Parms;
	Parms.EdgeIndex = EdgeIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.IsValidVertex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID                   VertexID                                                         (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEditableMesh::IsValidVertex(const struct FVertexID& VertexID)
{
	static auto Func = Class->GetFunction("EditableMesh", "IsValidVertex");

	Params::UEditableMesh_IsValidVertex_Params Parms;
	Parms.VertexID = VertexID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.IsValidPolygonGroup
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonGroupID             PolygonGroupID                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEditableMesh::IsValidPolygonGroup(const struct FPolygonGroupID& PolygonGroupID)
{
	static auto Func = Class->GetFunction("EditableMesh", "IsValidPolygonGroup");

	Params::UEditableMesh_IsValidPolygonGroup_Params Parms;
	Parms.PolygonGroupID = PolygonGroupID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.IsValidPolygon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEditableMesh::IsValidPolygon(const struct FPolygonID& PolygonID)
{
	static auto Func = Class->GetFunction("EditableMesh", "IsValidPolygon");

	Params::UEditableMesh_IsValidPolygon_Params Parms;
	Parms.PolygonID = PolygonID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.IsValidEdge
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID                     EdgeID                                                           (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEditableMesh::IsValidEdge(const struct FEdgeID& EdgeID)
{
	static auto Func = Class->GetFunction("EditableMesh", "IsValidEdge");

	Params::UEditableMesh_IsValidEdge_Params Parms;
	Parms.EdgeID = EdgeID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.IsUndoAllowed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEditableMesh::IsUndoAllowed()
{
	static auto Func = Class->GetFunction("EditableMesh", "IsUndoAllowed");

	Params::UEditableMesh_IsUndoAllowed_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.IsSpatialDatabaseAllowed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEditableMesh::IsSpatialDatabaseAllowed()
{
	static auto Func = Class->GetFunction("EditableMesh", "IsSpatialDatabaseAllowed");

	Params::UEditableMesh_IsSpatialDatabaseAllowed_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.IsPreviewingSubdivisions
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEditableMesh::IsPreviewingSubdivisions()
{
	static auto Func = Class->GetFunction("EditableMesh", "IsPreviewingSubdivisions");

	Params::UEditableMesh_IsPreviewingSubdivisions_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.IsOrphanedVertex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID                   VertexID                                                         (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEditableMesh::IsOrphanedVertex(const struct FVertexID& VertexID)
{
	static auto Func = Class->GetFunction("EditableMesh", "IsOrphanedVertex");

	Params::UEditableMesh_IsOrphanedVertex_Params Parms;
	Parms.VertexID = VertexID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.IsCompactAllowed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEditableMesh::IsCompactAllowed()
{
	static auto Func = Class->GetFunction("EditableMesh", "IsCompactAllowed");

	Params::UEditableMesh_IsCompactAllowed_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.IsCommittedAsInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEditableMesh::IsCommittedAsInstance()
{
	static auto Func = Class->GetFunction("EditableMesh", "IsCommittedAsInstance");

	Params::UEditableMesh_IsCommittedAsInstance_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.IsCommitted
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEditableMesh::IsCommitted()
{
	static auto Func = Class->GetFunction("EditableMesh", "IsCommitted");

	Params::UEditableMesh_IsCommitted_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.IsBeingModified
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEditableMesh::IsBeingModified()
{
	static auto Func = Class->GetFunction("EditableMesh", "IsBeingModified");

	Params::UEditableMesh_IsBeingModified_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.InvalidVertexID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVertexID                   ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVertexID UEditableMesh::InvalidVertexID()
{
	static auto Func = Class->GetFunction("EditableMesh", "InvalidVertexID");

	Params::UEditableMesh_InvalidVertexID_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.InvalidPolygonID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPolygonID                  ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FPolygonID UEditableMesh::InvalidPolygonID()
{
	static auto Func = Class->GetFunction("EditableMesh", "InvalidPolygonID");

	Params::UEditableMesh_InvalidPolygonID_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.InvalidPolygonGroupID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPolygonGroupID             ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FPolygonGroupID UEditableMesh::InvalidPolygonGroupID()
{
	static auto Func = Class->GetFunction("EditableMesh", "InvalidPolygonGroupID");

	Params::UEditableMesh_InvalidPolygonGroupID_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.InvalidEdgeID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEdgeID                     ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FEdgeID UEditableMesh::InvalidEdgeID()
{
	static auto Func = Class->GetFunction("EditableMesh", "InvalidEdgeID");

	Params::UEditableMesh_InvalidEdgeID_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.InsetPolygons
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FPolygonID>          PolygonIDs                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// float                              InsetFixedDistance                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InsetProgressTowardCenter                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EInsetPolygonsMode      Mode                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>          OutNewCenterPolygonIDs                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>          OutNewSidePolygonIDs                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::InsetPolygons(TArray<struct FPolygonID>& PolygonIDs, float InsetFixedDistance, float InsetProgressTowardCenter, enum class EInsetPolygonsMode Mode, TArray<struct FPolygonID>* OutNewCenterPolygonIDs, TArray<struct FPolygonID>* OutNewSidePolygonIDs)
{
	static auto Func = Class->GetFunction("EditableMesh", "InsetPolygons");

	Params::UEditableMesh_InsetPolygons_Params Parms;
	Parms.PolygonIDs = PolygonIDs;
	Parms.InsetFixedDistance = InsetFixedDistance;
	Parms.InsetProgressTowardCenter = InsetProgressTowardCenter;
	Parms.Mode = Mode;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	if (OutNewCenterPolygonIDs != nullptr)
		*OutNewCenterPolygonIDs = Parms.OutNewCenterPolygonIDs;

	if (OutNewSidePolygonIDs != nullptr)
		*OutNewSidePolygonIDs = Parms.OutNewSidePolygonIDs;

}

// Function EditableMesh.EditableMesh.InsertPolygonPerimeterVertices
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InsertBeforeVertexNumber                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVertexAndAttributes>VerticesToInsert                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UEditableMesh::InsertPolygonPerimeterVertices(const struct FPolygonID& PolygonID, int32 InsertBeforeVertexNumber, TArray<struct FVertexAndAttributes>& VerticesToInsert)
{
	static auto Func = Class->GetFunction("EditableMesh", "InsertPolygonPerimeterVertices");

	Params::UEditableMesh_InsertPolygonPerimeterVertices_Params Parms;
	Parms.PolygonID = PolygonID;
	Parms.InsertBeforeVertexNumber = InsertBeforeVertexNumber;
	Parms.VerticesToInsert = VerticesToInsert;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


}

// Function EditableMesh.EditableMesh.InsertEdgeLoop
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FEdgeID                     EdgeID                                                           (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      Splits                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>             OutNewEdgeIDs                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::InsertEdgeLoop(const struct FEdgeID& EdgeID, TArray<float>& Splits, TArray<struct FEdgeID>* OutNewEdgeIDs)
{
	static auto Func = Class->GetFunction("EditableMesh", "InsertEdgeLoop");

	Params::UEditableMesh_InsertEdgeLoop_Params Parms;
	Parms.EdgeID = EdgeID;
	Parms.Splits = Splits;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	if (OutNewEdgeIDs != nullptr)
		*OutNewEdgeIDs = Parms.OutNewEdgeIDs;

}

// Function EditableMesh.EditableMesh.InitializeAdapters
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UEditableMesh::InitializeAdapters()
{
	static auto Func = Class->GetFunction("EditableMesh", "InitializeAdapters");

	Params::UEditableMesh_InitializeAdapters_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


}

// Function EditableMesh.EditableMesh.GetVertexPairEdge
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID                   VertexID                                                         (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVertexID                   NextVertexID                                                     (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bOutEdgeWindingIsReversed                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEdgeID                     ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FEdgeID UEditableMesh::GetVertexPairEdge(const struct FVertexID& VertexID, const struct FVertexID& NextVertexID, bool* bOutEdgeWindingIsReversed)
{
	static auto Func = Class->GetFunction("EditableMesh", "GetVertexPairEdge");

	Params::UEditableMesh_GetVertexPairEdge_Params Parms;
	Parms.VertexID = VertexID;
	Parms.NextVertexID = NextVertexID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	if (bOutEdgeWindingIsReversed != nullptr)
		*bOutEdgeWindingIsReversed = Parms.bOutEdgeWindingIsReversed;

	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.GetVertexInstanceVertex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexInstanceID           VertexInstanceID                                                 (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVertexID                   ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVertexID UEditableMesh::GetVertexInstanceVertex(const struct FVertexInstanceID& VertexInstanceID)
{
	static auto Func = Class->GetFunction("EditableMesh", "GetVertexInstanceVertex");

	Params::UEditableMesh_GetVertexInstanceVertex_Params Parms;
	Parms.VertexInstanceID = VertexInstanceID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.GetVertexInstanceCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UEditableMesh::GetVertexInstanceCount()
{
	static auto Func = Class->GetFunction("EditableMesh", "GetVertexInstanceCount");

	Params::UEditableMesh_GetVertexInstanceCount_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygons
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexInstanceID           VertexInstanceID                                                 (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>          OutConnectedPolygonIDs                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::GetVertexInstanceConnectedPolygons(const struct FVertexInstanceID& VertexInstanceID, TArray<struct FPolygonID>* OutConnectedPolygonIDs)
{
	static auto Func = Class->GetFunction("EditableMesh", "GetVertexInstanceConnectedPolygons");

	Params::UEditableMesh_GetVertexInstanceConnectedPolygons_Params Parms;
	Parms.VertexInstanceID = VertexInstanceID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	if (OutConnectedPolygonIDs != nullptr)
		*OutConnectedPolygonIDs = Parms.OutConnectedPolygonIDs;

}

// Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygonCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexInstanceID           VertexInstanceID                                                 (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UEditableMesh::GetVertexInstanceConnectedPolygonCount(const struct FVertexInstanceID& VertexInstanceID)
{
	static auto Func = Class->GetFunction("EditableMesh", "GetVertexInstanceConnectedPolygonCount");

	Params::UEditableMesh_GetVertexInstanceConnectedPolygonCount_Params Parms;
	Parms.VertexInstanceID = VertexInstanceID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexInstanceID           VertexInstanceID                                                 (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ConnectedPolygonNumber                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPolygonID                  ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FPolygonID UEditableMesh::GetVertexInstanceConnectedPolygon(const struct FVertexInstanceID& VertexInstanceID, int32 ConnectedPolygonNumber)
{
	static auto Func = Class->GetFunction("EditableMesh", "GetVertexInstanceConnectedPolygon");

	Params::UEditableMesh_GetVertexInstanceConnectedPolygon_Params Parms;
	Parms.VertexInstanceID = VertexInstanceID;
	Parms.ConnectedPolygonNumber = ConnectedPolygonNumber;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.GetVertexCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UEditableMesh::GetVertexCount()
{
	static auto Func = Class->GetFunction("EditableMesh", "GetVertexCount");

	Params::UEditableMesh_GetVertexCount_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.GetVertexConnectedPolygons
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID                   VertexID                                                         (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>          OutConnectedPolygonIDs                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::GetVertexConnectedPolygons(const struct FVertexID& VertexID, TArray<struct FPolygonID>* OutConnectedPolygonIDs)
{
	static auto Func = Class->GetFunction("EditableMesh", "GetVertexConnectedPolygons");

	Params::UEditableMesh_GetVertexConnectedPolygons_Params Parms;
	Parms.VertexID = VertexID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	if (OutConnectedPolygonIDs != nullptr)
		*OutConnectedPolygonIDs = Parms.OutConnectedPolygonIDs;

}

// Function EditableMesh.EditableMesh.GetVertexConnectedEdges
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID                   VertexID                                                         (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>             OutConnectedEdgeIDs                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::GetVertexConnectedEdges(const struct FVertexID& VertexID, TArray<struct FEdgeID>* OutConnectedEdgeIDs)
{
	static auto Func = Class->GetFunction("EditableMesh", "GetVertexConnectedEdges");

	Params::UEditableMesh_GetVertexConnectedEdges_Params Parms;
	Parms.VertexID = VertexID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	if (OutConnectedEdgeIDs != nullptr)
		*OutConnectedEdgeIDs = Parms.OutConnectedEdgeIDs;

}

// Function EditableMesh.EditableMesh.GetVertexConnectedEdgeCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID                   VertexID                                                         (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UEditableMesh::GetVertexConnectedEdgeCount(const struct FVertexID& VertexID)
{
	static auto Func = Class->GetFunction("EditableMesh", "GetVertexConnectedEdgeCount");

	Params::UEditableMesh_GetVertexConnectedEdgeCount_Params Parms;
	Parms.VertexID = VertexID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.GetVertexConnectedEdge
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID                   VertexID                                                         (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ConnectedEdgeNumber                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEdgeID                     ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FEdgeID UEditableMesh::GetVertexConnectedEdge(const struct FVertexID& VertexID, int32 ConnectedEdgeNumber)
{
	static auto Func = Class->GetFunction("EditableMesh", "GetVertexConnectedEdge");

	Params::UEditableMesh_GetVertexConnectedEdge_Params Parms;
	Parms.VertexID = VertexID;
	Parms.ConnectedEdgeNumber = ConnectedEdgeNumber;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.GetVertexAdjacentVertices
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID                   VertexID                                                         (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVertexID>           OutAdjacentVertexIDs                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::GetVertexAdjacentVertices(const struct FVertexID& VertexID, TArray<struct FVertexID>* OutAdjacentVertexIDs)
{
	static auto Func = Class->GetFunction("EditableMesh", "GetVertexAdjacentVertices");

	Params::UEditableMesh_GetVertexAdjacentVertices_Params Parms;
	Parms.VertexID = VertexID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	if (OutAdjacentVertexIDs != nullptr)
		*OutAdjacentVertexIDs = Parms.OutAdjacentVertexIDs;

}

// Function EditableMesh.EditableMesh.GetTextureCoordinateCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UEditableMesh::GetTextureCoordinateCount()
{
	static auto Func = Class->GetFunction("EditableMesh", "GetTextureCoordinateCount");

	Params::UEditableMesh_GetTextureCoordinateCount_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.GetSubdivisionLimitData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSubdivisionLimitData       ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

struct FSubdivisionLimitData& UEditableMesh::GetSubdivisionLimitData()
{
	static auto Func = Class->GetFunction("EditableMesh", "GetSubdivisionLimitData");

	Params::UEditableMesh_GetSubdivisionLimitData_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.GetSubdivisionCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UEditableMesh::GetSubdivisionCount()
{
	static auto Func = Class->GetFunction("EditableMesh", "GetSubdivisionCount");

	Params::UEditableMesh_GetSubdivisionCount_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangleCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UEditableMesh::GetPolygonTriangulatedTriangleCount(const struct FPolygonID& PolygonID)
{
	static auto Func = Class->GetFunction("EditableMesh", "GetPolygonTriangulatedTriangleCount");

	Params::UEditableMesh_GetPolygonTriangulatedTriangleCount_Params Parms;
	Parms.PolygonID = PolygonID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.GetPolygonTriangulatedTriangle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PolygonTriangleNumber                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMeshTriangle               ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FMeshTriangle UEditableMesh::GetPolygonTriangulatedTriangle(const struct FPolygonID& PolygonID, int32 PolygonTriangleNumber)
{
	static auto Func = Class->GetFunction("EditableMesh", "GetPolygonTriangulatedTriangle");

	Params::UEditableMesh_GetPolygonTriangulatedTriangle_Params Parms;
	Parms.PolygonID = PolygonID;
	Parms.PolygonTriangleNumber = PolygonTriangleNumber;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertices
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVertexID>           OutPolygonPerimeterVertexIDs                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::GetPolygonPerimeterVertices(const struct FPolygonID& PolygonID, TArray<struct FVertexID>* OutPolygonPerimeterVertexIDs)
{
	static auto Func = Class->GetFunction("EditableMesh", "GetPolygonPerimeterVertices");

	Params::UEditableMesh_GetPolygonPerimeterVertices_Params Parms;
	Parms.PolygonID = PolygonID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	if (OutPolygonPerimeterVertexIDs != nullptr)
		*OutPolygonPerimeterVertexIDs = Parms.OutPolygonPerimeterVertexIDs;

}

// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstances
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVertexInstanceID>   OutPolygonPerimeterVertexInstanceIDs                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::GetPolygonPerimeterVertexInstances(const struct FPolygonID& PolygonID, TArray<struct FVertexInstanceID>* OutPolygonPerimeterVertexInstanceIDs)
{
	static auto Func = Class->GetFunction("EditableMesh", "GetPolygonPerimeterVertexInstances");

	Params::UEditableMesh_GetPolygonPerimeterVertexInstances_Params Parms;
	Parms.PolygonID = PolygonID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	if (OutPolygonPerimeterVertexInstanceIDs != nullptr)
		*OutPolygonPerimeterVertexInstanceIDs = Parms.OutPolygonPerimeterVertexInstanceIDs;

}

// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PolygonVertexNumber                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVertexInstanceID           ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVertexInstanceID UEditableMesh::GetPolygonPerimeterVertexInstance(const struct FPolygonID& PolygonID, int32 PolygonVertexNumber)
{
	static auto Func = Class->GetFunction("EditableMesh", "GetPolygonPerimeterVertexInstance");

	Params::UEditableMesh_GetPolygonPerimeterVertexInstance_Params Parms;
	Parms.PolygonID = PolygonID;
	Parms.PolygonVertexNumber = PolygonVertexNumber;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertexCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UEditableMesh::GetPolygonPerimeterVertexCount(const struct FPolygonID& PolygonID)
{
	static auto Func = Class->GetFunction("EditableMesh", "GetPolygonPerimeterVertexCount");

	Params::UEditableMesh_GetPolygonPerimeterVertexCount_Params Parms;
	Parms.PolygonID = PolygonID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.GetPolygonPerimeterVertex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PolygonVertexNumber                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVertexID                   ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVertexID UEditableMesh::GetPolygonPerimeterVertex(const struct FPolygonID& PolygonID, int32 PolygonVertexNumber)
{
	static auto Func = Class->GetFunction("EditableMesh", "GetPolygonPerimeterVertex");

	Params::UEditableMesh_GetPolygonPerimeterVertex_Params Parms;
	Parms.PolygonID = PolygonID;
	Parms.PolygonVertexNumber = PolygonVertexNumber;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.GetPolygonPerimeterEdges
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>             OutPolygonPerimeterEdgeIDs                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::GetPolygonPerimeterEdges(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OutPolygonPerimeterEdgeIDs)
{
	static auto Func = Class->GetFunction("EditableMesh", "GetPolygonPerimeterEdges");

	Params::UEditableMesh_GetPolygonPerimeterEdges_Params Parms;
	Parms.PolygonID = PolygonID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	if (OutPolygonPerimeterEdgeIDs != nullptr)
		*OutPolygonPerimeterEdgeIDs = Parms.OutPolygonPerimeterEdgeIDs;

}

// Function EditableMesh.EditableMesh.GetPolygonPerimeterEdgeCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UEditableMesh::GetPolygonPerimeterEdgeCount(const struct FPolygonID& PolygonID)
{
	static auto Func = Class->GetFunction("EditableMesh", "GetPolygonPerimeterEdgeCount");

	Params::UEditableMesh_GetPolygonPerimeterEdgeCount_Params Parms;
	Parms.PolygonID = PolygonID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.GetPolygonPerimeterEdge
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PerimeterEdgeNumber                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bOutEdgeWindingIsReversedForPolygon                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEdgeID                     ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FEdgeID UEditableMesh::GetPolygonPerimeterEdge(const struct FPolygonID& PolygonID, int32 PerimeterEdgeNumber, bool* bOutEdgeWindingIsReversedForPolygon)
{
	static auto Func = Class->GetFunction("EditableMesh", "GetPolygonPerimeterEdge");

	Params::UEditableMesh_GetPolygonPerimeterEdge_Params Parms;
	Parms.PolygonID = PolygonID;
	Parms.PerimeterEdgeNumber = PerimeterEdgeNumber;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	if (bOutEdgeWindingIsReversedForPolygon != nullptr)
		*bOutEdgeWindingIsReversedForPolygon = Parms.bOutEdgeWindingIsReversedForPolygon;

	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.GetPolygonInGroup
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonGroupID             PolygonGroupID                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PolygonNumber                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPolygonID                  ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FPolygonID UEditableMesh::GetPolygonInGroup(const struct FPolygonGroupID& PolygonGroupID, int32 PolygonNumber)
{
	static auto Func = Class->GetFunction("EditableMesh", "GetPolygonInGroup");

	Params::UEditableMesh_GetPolygonInGroup_Params Parms;
	Parms.PolygonGroupID = PolygonGroupID;
	Parms.PolygonNumber = PolygonNumber;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.GetPolygonHoleVertices
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              HoleNumber                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVertexID>           OutHoleVertexIDs                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::GetPolygonHoleVertices(const struct FPolygonID& PolygonID, int32 HoleNumber, TArray<struct FVertexID>* OutHoleVertexIDs)
{
	static auto Func = Class->GetFunction("EditableMesh", "GetPolygonHoleVertices");

	Params::UEditableMesh_GetPolygonHoleVertices_Params Parms;
	Parms.PolygonID = PolygonID;
	Parms.HoleNumber = HoleNumber;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	if (OutHoleVertexIDs != nullptr)
		*OutHoleVertexIDs = Parms.OutHoleVertexIDs;

}

// Function EditableMesh.EditableMesh.GetPolygonHoleVertexInstances
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              HoleNumber                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVertexInstanceID>   OutHoleVertexInstanceIDs                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::GetPolygonHoleVertexInstances(const struct FPolygonID& PolygonID, int32 HoleNumber, TArray<struct FVertexInstanceID>* OutHoleVertexInstanceIDs)
{
	static auto Func = Class->GetFunction("EditableMesh", "GetPolygonHoleVertexInstances");

	Params::UEditableMesh_GetPolygonHoleVertexInstances_Params Parms;
	Parms.PolygonID = PolygonID;
	Parms.HoleNumber = HoleNumber;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	if (OutHoleVertexInstanceIDs != nullptr)
		*OutHoleVertexInstanceIDs = Parms.OutHoleVertexInstanceIDs;

}

// Function EditableMesh.EditableMesh.GetPolygonHoleVertexInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              HoleNumber                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PolygonVertexNumber                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVertexInstanceID           ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVertexInstanceID UEditableMesh::GetPolygonHoleVertexInstance(const struct FPolygonID& PolygonID, int32 HoleNumber, int32 PolygonVertexNumber)
{
	static auto Func = Class->GetFunction("EditableMesh", "GetPolygonHoleVertexInstance");

	Params::UEditableMesh_GetPolygonHoleVertexInstance_Params Parms;
	Parms.PolygonID = PolygonID;
	Parms.HoleNumber = HoleNumber;
	Parms.PolygonVertexNumber = PolygonVertexNumber;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.GetPolygonHoleVertexCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              HoleNumber                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UEditableMesh::GetPolygonHoleVertexCount(const struct FPolygonID& PolygonID, int32 HoleNumber)
{
	static auto Func = Class->GetFunction("EditableMesh", "GetPolygonHoleVertexCount");

	Params::UEditableMesh_GetPolygonHoleVertexCount_Params Parms;
	Parms.PolygonID = PolygonID;
	Parms.HoleNumber = HoleNumber;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.GetPolygonHoleVertex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              HoleNumber                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PolygonVertexNumber                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVertexID                   ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVertexID UEditableMesh::GetPolygonHoleVertex(const struct FPolygonID& PolygonID, int32 HoleNumber, int32 PolygonVertexNumber)
{
	static auto Func = Class->GetFunction("EditableMesh", "GetPolygonHoleVertex");

	Params::UEditableMesh_GetPolygonHoleVertex_Params Parms;
	Parms.PolygonID = PolygonID;
	Parms.HoleNumber = HoleNumber;
	Parms.PolygonVertexNumber = PolygonVertexNumber;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.GetPolygonHoleEdges
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              HoleNumber                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>             OutHoleEdgeIDs                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::GetPolygonHoleEdges(const struct FPolygonID& PolygonID, int32 HoleNumber, TArray<struct FEdgeID>* OutHoleEdgeIDs)
{
	static auto Func = Class->GetFunction("EditableMesh", "GetPolygonHoleEdges");

	Params::UEditableMesh_GetPolygonHoleEdges_Params Parms;
	Parms.PolygonID = PolygonID;
	Parms.HoleNumber = HoleNumber;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	if (OutHoleEdgeIDs != nullptr)
		*OutHoleEdgeIDs = Parms.OutHoleEdgeIDs;

}

// Function EditableMesh.EditableMesh.GetPolygonHoleEdgeCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              HoleNumber                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UEditableMesh::GetPolygonHoleEdgeCount(const struct FPolygonID& PolygonID, int32 HoleNumber)
{
	static auto Func = Class->GetFunction("EditableMesh", "GetPolygonHoleEdgeCount");

	Params::UEditableMesh_GetPolygonHoleEdgeCount_Params Parms;
	Parms.PolygonID = PolygonID;
	Parms.HoleNumber = HoleNumber;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.GetPolygonHoleEdge
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              HoleNumber                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              HoleEdgeNumber                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEdgeID                     ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FEdgeID UEditableMesh::GetPolygonHoleEdge(const struct FPolygonID& PolygonID, int32 HoleNumber, int32 HoleEdgeNumber)
{
	static auto Func = Class->GetFunction("EditableMesh", "GetPolygonHoleEdge");

	Params::UEditableMesh_GetPolygonHoleEdge_Params Parms;
	Parms.PolygonID = PolygonID;
	Parms.HoleNumber = HoleNumber;
	Parms.HoleEdgeNumber = HoleEdgeNumber;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.GetPolygonHoleCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UEditableMesh::GetPolygonHoleCount(const struct FPolygonID& PolygonID)
{
	static auto Func = Class->GetFunction("EditableMesh", "GetPolygonHoleCount");

	Params::UEditableMesh_GetPolygonHoleCount_Params Parms;
	Parms.PolygonID = PolygonID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.GetPolygonGroupCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UEditableMesh::GetPolygonGroupCount()
{
	static auto Func = Class->GetFunction("EditableMesh", "GetPolygonGroupCount");

	Params::UEditableMesh_GetPolygonGroupCount_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.GetPolygonCountInGroup
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonGroupID             PolygonGroupID                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UEditableMesh::GetPolygonCountInGroup(const struct FPolygonGroupID& PolygonGroupID)
{
	static auto Func = Class->GetFunction("EditableMesh", "GetPolygonCountInGroup");

	Params::UEditableMesh_GetPolygonCountInGroup_Params Parms;
	Parms.PolygonGroupID = PolygonGroupID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.GetPolygonCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UEditableMesh::GetPolygonCount()
{
	static auto Func = Class->GetFunction("EditableMesh", "GetPolygonCount");

	Params::UEditableMesh_GetPolygonCount_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.GetPolygonAdjacentPolygons
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>          OutAdjacentPolygons                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::GetPolygonAdjacentPolygons(const struct FPolygonID& PolygonID, TArray<struct FPolygonID>* OutAdjacentPolygons)
{
	static auto Func = Class->GetFunction("EditableMesh", "GetPolygonAdjacentPolygons");

	Params::UEditableMesh_GetPolygonAdjacentPolygons_Params Parms;
	Parms.PolygonID = PolygonID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	if (OutAdjacentPolygons != nullptr)
		*OutAdjacentPolygons = Parms.OutAdjacentPolygons;

}

// Function EditableMesh.EditableMesh.GetGroupForPolygon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPolygonGroupID             ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FPolygonGroupID UEditableMesh::GetGroupForPolygon(const struct FPolygonID& PolygonID)
{
	static auto Func = Class->GetFunction("EditableMesh", "GetGroupForPolygon");

	Params::UEditableMesh_GetGroupForPolygon_Params Parms;
	Parms.PolygonID = PolygonID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.GetFirstValidPolygonGroup
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonGroupID             ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FPolygonGroupID UEditableMesh::GetFirstValidPolygonGroup()
{
	static auto Func = Class->GetFunction("EditableMesh", "GetFirstValidPolygonGroup");

	Params::UEditableMesh_GetFirstValidPolygonGroup_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.GetEdgeVertices
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID                     EdgeID                                                           (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVertexID                   OutEdgeVertexID0                                                 (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVertexID                   OutEdgeVertexID1                                                 (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEditableMesh::GetEdgeVertices(const struct FEdgeID& EdgeID, struct FVertexID* OutEdgeVertexID0, struct FVertexID* OutEdgeVertexID1)
{
	static auto Func = Class->GetFunction("EditableMesh", "GetEdgeVertices");

	Params::UEditableMesh_GetEdgeVertices_Params Parms;
	Parms.EdgeID = EdgeID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	if (OutEdgeVertexID0 != nullptr)
		*OutEdgeVertexID0 = Parms.OutEdgeVertexID0;

	if (OutEdgeVertexID1 != nullptr)
		*OutEdgeVertexID1 = Parms.OutEdgeVertexID1;

}

// Function EditableMesh.EditableMesh.GetEdgeVertex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID                     EdgeID                                                           (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              EdgeVertexNumber                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVertexID                   ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVertexID UEditableMesh::GetEdgeVertex(const struct FEdgeID& EdgeID, int32 EdgeVertexNumber)
{
	static auto Func = Class->GetFunction("EditableMesh", "GetEdgeVertex");

	Params::UEditableMesh_GetEdgeVertex_Params Parms;
	Parms.EdgeID = EdgeID;
	Parms.EdgeVertexNumber = EdgeVertexNumber;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.GetEdgeThatConnectsVertices
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexID                   VertexID0                                                        (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVertexID                   VertexID1                                                        (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEdgeID                     ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FEdgeID UEditableMesh::GetEdgeThatConnectsVertices(const struct FVertexID& VertexID0, const struct FVertexID& VertexID1)
{
	static auto Func = Class->GetFunction("EditableMesh", "GetEdgeThatConnectsVertices");

	Params::UEditableMesh_GetEdgeThatConnectsVertices_Params Parms;
	Parms.VertexID0 = VertexID0;
	Parms.VertexID1 = VertexID1;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.GetEdgeLoopElements
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID                     EdgeID                                                           (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>             EdgeLoopIDs                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::GetEdgeLoopElements(const struct FEdgeID& EdgeID, TArray<struct FEdgeID>* EdgeLoopIDs)
{
	static auto Func = Class->GetFunction("EditableMesh", "GetEdgeLoopElements");

	Params::UEditableMesh_GetEdgeLoopElements_Params Parms;
	Parms.EdgeID = EdgeID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	if (EdgeLoopIDs != nullptr)
		*EdgeLoopIDs = Parms.EdgeLoopIDs;

}

// Function EditableMesh.EditableMesh.GetEdgeCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UEditableMesh::GetEdgeCount()
{
	static auto Func = Class->GetFunction("EditableMesh", "GetEdgeCount");

	Params::UEditableMesh_GetEdgeCount_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.GetEdgeConnectedPolygons
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID                     EdgeID                                                           (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>          OutConnectedPolygonIDs                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::GetEdgeConnectedPolygons(const struct FEdgeID& EdgeID, TArray<struct FPolygonID>* OutConnectedPolygonIDs)
{
	static auto Func = Class->GetFunction("EditableMesh", "GetEdgeConnectedPolygons");

	Params::UEditableMesh_GetEdgeConnectedPolygons_Params Parms;
	Parms.EdgeID = EdgeID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	if (OutConnectedPolygonIDs != nullptr)
		*OutConnectedPolygonIDs = Parms.OutConnectedPolygonIDs;

}

// Function EditableMesh.EditableMesh.GetEdgeConnectedPolygonCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID                     EdgeID                                                           (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UEditableMesh::GetEdgeConnectedPolygonCount(const struct FEdgeID& EdgeID)
{
	static auto Func = Class->GetFunction("EditableMesh", "GetEdgeConnectedPolygonCount");

	Params::UEditableMesh_GetEdgeConnectedPolygonCount_Params Parms;
	Parms.EdgeID = EdgeID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.GetEdgeConnectedPolygon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID                     EdgeID                                                           (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ConnectedPolygonNumber                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPolygonID                  ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FPolygonID UEditableMesh::GetEdgeConnectedPolygon(const struct FEdgeID& EdgeID, int32 ConnectedPolygonNumber)
{
	static auto Func = Class->GetFunction("EditableMesh", "GetEdgeConnectedPolygon");

	Params::UEditableMesh_GetEdgeConnectedPolygon_Params Parms;
	Parms.EdgeID = EdgeID;
	Parms.ConnectedPolygonNumber = ConnectedPolygonNumber;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.GeneratePolygonTangentsAndNormals
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FPolygonID>          PolygonIDs                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UEditableMesh::GeneratePolygonTangentsAndNormals(TArray<struct FPolygonID>& PolygonIDs)
{
	static auto Func = Class->GetFunction("EditableMesh", "GeneratePolygonTangentsAndNormals");

	Params::UEditableMesh_GeneratePolygonTangentsAndNormals_Params Parms;
	Parms.PolygonIDs = PolygonIDs;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


}

// Function EditableMesh.EditableMesh.FlipPolygons
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FPolygonID>          PolygonIDs                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UEditableMesh::FlipPolygons(TArray<struct FPolygonID>& PolygonIDs)
{
	static auto Func = Class->GetFunction("EditableMesh", "FlipPolygons");

	Params::UEditableMesh_FlipPolygons_Params Parms;
	Parms.PolygonIDs = PolygonIDs;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


}

// Function EditableMesh.EditableMesh.FindPolygonPerimeterVertexNumberForVertex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVertexID                   VertexID                                                         (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UEditableMesh::FindPolygonPerimeterVertexNumberForVertex(const struct FPolygonID& PolygonID, const struct FVertexID& VertexID)
{
	static auto Func = Class->GetFunction("EditableMesh", "FindPolygonPerimeterVertexNumberForVertex");

	Params::UEditableMesh_FindPolygonPerimeterVertexNumberForVertex_Params Parms;
	Parms.PolygonID = PolygonID;
	Parms.VertexID = VertexID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.FindPolygonPerimeterEdgeNumberForVertices
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVertexID                   EdgeVertexID0                                                    (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVertexID                   EdgeVertexID1                                                    (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UEditableMesh::FindPolygonPerimeterEdgeNumberForVertices(const struct FPolygonID& PolygonID, const struct FVertexID& EdgeVertexID0, const struct FVertexID& EdgeVertexID1)
{
	static auto Func = Class->GetFunction("EditableMesh", "FindPolygonPerimeterEdgeNumberForVertices");

	Params::UEditableMesh_FindPolygonPerimeterEdgeNumberForVertices_Params Parms;
	Parms.PolygonID = PolygonID;
	Parms.EdgeVertexID0 = EdgeVertexID0;
	Parms.EdgeVertexID1 = EdgeVertexID1;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.FindPolygonLoop
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FEdgeID                     EdgeID                                                           (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>             OutEdgeLoopEdgeIDs                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>             OutFlippedEdgeIDs                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>             OutReversedEdgeIDPathToTake                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>          OutPolygonIDsToSplit                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::FindPolygonLoop(const struct FEdgeID& EdgeID, TArray<struct FEdgeID>* OutEdgeLoopEdgeIDs, TArray<struct FEdgeID>* OutFlippedEdgeIDs, TArray<struct FEdgeID>* OutReversedEdgeIDPathToTake, TArray<struct FPolygonID>* OutPolygonIDsToSplit)
{
	static auto Func = Class->GetFunction("EditableMesh", "FindPolygonLoop");

	Params::UEditableMesh_FindPolygonLoop_Params Parms;
	Parms.EdgeID = EdgeID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	if (OutEdgeLoopEdgeIDs != nullptr)
		*OutEdgeLoopEdgeIDs = Parms.OutEdgeLoopEdgeIDs;

	if (OutFlippedEdgeIDs != nullptr)
		*OutFlippedEdgeIDs = Parms.OutFlippedEdgeIDs;

	if (OutReversedEdgeIDPathToTake != nullptr)
		*OutReversedEdgeIDPathToTake = Parms.OutReversedEdgeIDPathToTake;

	if (OutPolygonIDsToSplit != nullptr)
		*OutPolygonIDsToSplit = Parms.OutPolygonIDsToSplit;

}

// Function EditableMesh.EditableMesh.FindPolygonHoleVertexNumberForVertex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              HoleNumber                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVertexID                   VertexID                                                         (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UEditableMesh::FindPolygonHoleVertexNumberForVertex(const struct FPolygonID& PolygonID, int32 HoleNumber, const struct FVertexID& VertexID)
{
	static auto Func = Class->GetFunction("EditableMesh", "FindPolygonHoleVertexNumberForVertex");

	Params::UEditableMesh_FindPolygonHoleVertexNumberForVertex_Params Parms;
	Parms.PolygonID = PolygonID;
	Parms.HoleNumber = HoleNumber;
	Parms.VertexID = VertexID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.FindPolygonHoleEdgeNumberForVertices
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              HoleNumber                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVertexID                   EdgeVertexID0                                                    (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVertexID                   EdgeVertexID1                                                    (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UEditableMesh::FindPolygonHoleEdgeNumberForVertices(const struct FPolygonID& PolygonID, int32 HoleNumber, const struct FVertexID& EdgeVertexID0, const struct FVertexID& EdgeVertexID1)
{
	static auto Func = Class->GetFunction("EditableMesh", "FindPolygonHoleEdgeNumberForVertices");

	Params::UEditableMesh_FindPolygonHoleEdgeNumberForVertices_Params Parms;
	Parms.PolygonID = PolygonID;
	Parms.HoleNumber = HoleNumber;
	Parms.EdgeVertexID0 = EdgeVertexID0;
	Parms.EdgeVertexID1 = EdgeVertexID1;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.ExtrudePolygons
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FPolygonID>          Polygons                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// float                              ExtrudeDistance                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bKeepNeighborsTogether                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>          OutNewExtrudedFrontPolygons                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::ExtrudePolygons(TArray<struct FPolygonID>& Polygons, float ExtrudeDistance, bool bKeepNeighborsTogether, TArray<struct FPolygonID>* OutNewExtrudedFrontPolygons)
{
	static auto Func = Class->GetFunction("EditableMesh", "ExtrudePolygons");

	Params::UEditableMesh_ExtrudePolygons_Params Parms;
	Parms.Polygons = Polygons;
	Parms.ExtrudeDistance = ExtrudeDistance;
	Parms.bKeepNeighborsTogether = bKeepNeighborsTogether;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	if (OutNewExtrudedFrontPolygons != nullptr)
		*OutNewExtrudedFrontPolygons = Parms.OutNewExtrudedFrontPolygons;

}

// Function EditableMesh.EditableMesh.ExtendVertices
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// TArray<struct FVertexID>           VertexIDs                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bOnlyExtendClosestEdge                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReferencePosition                                                (ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVertexID>           OutNewExtendedVertexIDs                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::ExtendVertices(TArray<struct FVertexID>& VertexIDs, bool bOnlyExtendClosestEdge, const struct FVector& ReferencePosition, TArray<struct FVertexID>* OutNewExtendedVertexIDs)
{
	static auto Func = Class->GetFunction("EditableMesh", "ExtendVertices");

	Params::UEditableMesh_ExtendVertices_Params Parms;
	Parms.VertexIDs = VertexIDs;
	Parms.bOnlyExtendClosestEdge = bOnlyExtendClosestEdge;
	Parms.ReferencePosition = ReferencePosition;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	if (OutNewExtendedVertexIDs != nullptr)
		*OutNewExtendedVertexIDs = Parms.OutNewExtendedVertexIDs;

}

// Function EditableMesh.EditableMesh.ExtendEdges
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FEdgeID>             EdgeIDs                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bWeldNeighbors                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>             OutNewExtendedEdgeIDs                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::ExtendEdges(TArray<struct FEdgeID>& EdgeIDs, bool bWeldNeighbors, TArray<struct FEdgeID>* OutNewExtendedEdgeIDs)
{
	static auto Func = Class->GetFunction("EditableMesh", "ExtendEdges");

	Params::UEditableMesh_ExtendEdges_Params Parms;
	Parms.EdgeIDs = EdgeIDs;
	Parms.bWeldNeighbors = bWeldNeighbors;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	if (OutNewExtendedEdgeIDs != nullptr)
		*OutNewExtendedEdgeIDs = Parms.OutNewExtendedEdgeIDs;

}

// Function EditableMesh.EditableMesh.EndModification
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bFromUndo                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEditableMesh::EndModification(bool bFromUndo)
{
	static auto Func = Class->GetFunction("EditableMesh", "EndModification");

	Params::UEditableMesh_EndModification_Params Parms;
	Parms.bFromUndo = bFromUndo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


}

// Function EditableMesh.EditableMesh.DeleteVertexInstances
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FVertexInstanceID>   VertexInstanceIDsToDelete                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bDeleteOrphanedVertices                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEditableMesh::DeleteVertexInstances(TArray<struct FVertexInstanceID>& VertexInstanceIDsToDelete, bool bDeleteOrphanedVertices)
{
	static auto Func = Class->GetFunction("EditableMesh", "DeleteVertexInstances");

	Params::UEditableMesh_DeleteVertexInstances_Params Parms;
	Parms.VertexInstanceIDsToDelete = VertexInstanceIDsToDelete;
	Parms.bDeleteOrphanedVertices = bDeleteOrphanedVertices;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


}

// Function EditableMesh.EditableMesh.DeleteVertexAndConnectedEdgesAndPolygons
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FVertexID                   VertexID                                                         (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDeleteOrphanedEdges                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDeleteOrphanedVertices                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDeleteOrphanedVertexInstances                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDeleteEmptyPolygonGroups                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEditableMesh::DeleteVertexAndConnectedEdgesAndPolygons(const struct FVertexID& VertexID, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups)
{
	static auto Func = Class->GetFunction("EditableMesh", "DeleteVertexAndConnectedEdgesAndPolygons");

	Params::UEditableMesh_DeleteVertexAndConnectedEdgesAndPolygons_Params Parms;
	Parms.VertexID = VertexID;
	Parms.bDeleteOrphanedEdges = bDeleteOrphanedEdges;
	Parms.bDeleteOrphanedVertices = bDeleteOrphanedVertices;
	Parms.bDeleteOrphanedVertexInstances = bDeleteOrphanedVertexInstances;
	Parms.bDeleteEmptyPolygonGroups = bDeleteEmptyPolygonGroups;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


}

// Function EditableMesh.EditableMesh.DeletePolygons
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FPolygonID>          PolygonIDsToDelete                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bDeleteOrphanedEdges                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDeleteOrphanedVertices                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDeleteOrphanedVertexInstances                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDeleteEmptyPolygonGroups                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEditableMesh::DeletePolygons(TArray<struct FPolygonID>& PolygonIDsToDelete, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups)
{
	static auto Func = Class->GetFunction("EditableMesh", "DeletePolygons");

	Params::UEditableMesh_DeletePolygons_Params Parms;
	Parms.PolygonIDsToDelete = PolygonIDsToDelete;
	Parms.bDeleteOrphanedEdges = bDeleteOrphanedEdges;
	Parms.bDeleteOrphanedVertices = bDeleteOrphanedVertices;
	Parms.bDeleteOrphanedVertexInstances = bDeleteOrphanedVertexInstances;
	Parms.bDeleteEmptyPolygonGroups = bDeleteEmptyPolygonGroups;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


}

// Function EditableMesh.EditableMesh.DeletePolygonGroups
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FPolygonGroupID>     PolygonGroupIDs                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UEditableMesh::DeletePolygonGroups(TArray<struct FPolygonGroupID>& PolygonGroupIDs)
{
	static auto Func = Class->GetFunction("EditableMesh", "DeletePolygonGroups");

	Params::UEditableMesh_DeletePolygonGroups_Params Parms;
	Parms.PolygonGroupIDs = PolygonGroupIDs;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


}

// Function EditableMesh.EditableMesh.DeleteOrphanVertices
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FVertexID>           VertexIDsToDelete                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UEditableMesh::DeleteOrphanVertices(TArray<struct FVertexID>& VertexIDsToDelete)
{
	static auto Func = Class->GetFunction("EditableMesh", "DeleteOrphanVertices");

	Params::UEditableMesh_DeleteOrphanVertices_Params Parms;
	Parms.VertexIDsToDelete = VertexIDsToDelete;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


}

// Function EditableMesh.EditableMesh.DeleteEdges
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FEdgeID>             EdgeIDsToDelete                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bDeleteOrphanedVertices                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEditableMesh::DeleteEdges(TArray<struct FEdgeID>& EdgeIDsToDelete, bool bDeleteOrphanedVertices)
{
	static auto Func = Class->GetFunction("EditableMesh", "DeleteEdges");

	Params::UEditableMesh_DeleteEdges_Params Parms;
	Parms.EdgeIDsToDelete = EdgeIDsToDelete;
	Parms.bDeleteOrphanedVertices = bDeleteOrphanedVertices;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


}

// Function EditableMesh.EditableMesh.DeleteEdgeAndConnectedPolygons
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FEdgeID                     EdgeID                                                           (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDeleteOrphanedEdges                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDeleteOrphanedVertices                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDeleteOrphanedVertexInstances                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDeleteEmptyPolygonGroups                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEditableMesh::DeleteEdgeAndConnectedPolygons(const struct FEdgeID& EdgeID, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups)
{
	static auto Func = Class->GetFunction("EditableMesh", "DeleteEdgeAndConnectedPolygons");

	Params::UEditableMesh_DeleteEdgeAndConnectedPolygons_Params Parms;
	Parms.EdgeID = EdgeID;
	Parms.bDeleteOrphanedEdges = bDeleteOrphanedEdges;
	Parms.bDeleteOrphanedVertices = bDeleteOrphanedVertices;
	Parms.bDeleteOrphanedVertexInstances = bDeleteOrphanedVertexInstances;
	Parms.bDeleteEmptyPolygonGroups = bDeleteEmptyPolygonGroups;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


}

// Function EditableMesh.EditableMesh.CreateVertices
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FVertexToCreate>     VerticesToCreate                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVertexID>           OutNewVertexIDs                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::CreateVertices(TArray<struct FVertexToCreate>& VerticesToCreate, TArray<struct FVertexID>* OutNewVertexIDs)
{
	static auto Func = Class->GetFunction("EditableMesh", "CreateVertices");

	Params::UEditableMesh_CreateVertices_Params Parms;
	Parms.VerticesToCreate = VerticesToCreate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	if (OutNewVertexIDs != nullptr)
		*OutNewVertexIDs = Parms.OutNewVertexIDs;

}

// Function EditableMesh.EditableMesh.CreateVertexInstances
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FVertexInstanceToCreate>VertexInstancesToCreate                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVertexInstanceID>   OutNewVertexInstanceIDs                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::CreateVertexInstances(TArray<struct FVertexInstanceToCreate>& VertexInstancesToCreate, TArray<struct FVertexInstanceID>* OutNewVertexInstanceIDs)
{
	static auto Func = Class->GetFunction("EditableMesh", "CreateVertexInstances");

	Params::UEditableMesh_CreateVertexInstances_Params Parms;
	Parms.VertexInstancesToCreate = VertexInstancesToCreate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	if (OutNewVertexInstanceIDs != nullptr)
		*OutNewVertexInstanceIDs = Parms.OutNewVertexInstanceIDs;

}

// Function EditableMesh.EditableMesh.CreatePolygons
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FPolygonToCreate>    PolygonsToCreate                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>          OutNewPolygonIDs                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>             OutNewEdgeIDs                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::CreatePolygons(TArray<struct FPolygonToCreate>& PolygonsToCreate, TArray<struct FPolygonID>* OutNewPolygonIDs, TArray<struct FEdgeID>* OutNewEdgeIDs)
{
	static auto Func = Class->GetFunction("EditableMesh", "CreatePolygons");

	Params::UEditableMesh_CreatePolygons_Params Parms;
	Parms.PolygonsToCreate = PolygonsToCreate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	if (OutNewPolygonIDs != nullptr)
		*OutNewPolygonIDs = Parms.OutNewPolygonIDs;

	if (OutNewEdgeIDs != nullptr)
		*OutNewEdgeIDs = Parms.OutNewEdgeIDs;

}

// Function EditableMesh.EditableMesh.CreatePolygonGroups
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FPolygonGroupToCreate>PolygonGroupsToCreate                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FPolygonGroupID>     OutNewPolygonGroupIDs                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::CreatePolygonGroups(TArray<struct FPolygonGroupToCreate>& PolygonGroupsToCreate, TArray<struct FPolygonGroupID>* OutNewPolygonGroupIDs)
{
	static auto Func = Class->GetFunction("EditableMesh", "CreatePolygonGroups");

	Params::UEditableMesh_CreatePolygonGroups_Params Parms;
	Parms.PolygonGroupsToCreate = PolygonGroupsToCreate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	if (OutNewPolygonGroupIDs != nullptr)
		*OutNewPolygonGroupIDs = Parms.OutNewPolygonGroupIDs;

}

// Function EditableMesh.EditableMesh.CreateMissingPolygonPerimeterEdges
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>             OutNewEdgeIDs                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::CreateMissingPolygonPerimeterEdges(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OutNewEdgeIDs)
{
	static auto Func = Class->GetFunction("EditableMesh", "CreateMissingPolygonPerimeterEdges");

	Params::UEditableMesh_CreateMissingPolygonPerimeterEdges_Params Parms;
	Parms.PolygonID = PolygonID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	if (OutNewEdgeIDs != nullptr)
		*OutNewEdgeIDs = Parms.OutNewEdgeIDs;

}

// Function EditableMesh.EditableMesh.CreateMissingPolygonHoleEdges
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              HoleNumber                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>             OutNewEdgeIDs                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::CreateMissingPolygonHoleEdges(const struct FPolygonID& PolygonID, int32 HoleNumber, TArray<struct FEdgeID>* OutNewEdgeIDs)
{
	static auto Func = Class->GetFunction("EditableMesh", "CreateMissingPolygonHoleEdges");

	Params::UEditableMesh_CreateMissingPolygonHoleEdges_Params Parms;
	Parms.PolygonID = PolygonID;
	Parms.HoleNumber = HoleNumber;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	if (OutNewEdgeIDs != nullptr)
		*OutNewEdgeIDs = Parms.OutNewEdgeIDs;

}

// Function EditableMesh.EditableMesh.CreateEmptyVertexRange
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              NumVerticesToCreate                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVertexID>           OutNewVertexIDs                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::CreateEmptyVertexRange(int32 NumVerticesToCreate, TArray<struct FVertexID>* OutNewVertexIDs)
{
	static auto Func = Class->GetFunction("EditableMesh", "CreateEmptyVertexRange");

	Params::UEditableMesh_CreateEmptyVertexRange_Params Parms;
	Parms.NumVerticesToCreate = NumVerticesToCreate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	if (OutNewVertexIDs != nullptr)
		*OutNewVertexIDs = Parms.OutNewVertexIDs;

}

// Function EditableMesh.EditableMesh.CreateEdges
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FEdgeToCreate>       EdgesToCreate                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>             OutNewEdgeIDs                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::CreateEdges(TArray<struct FEdgeToCreate>& EdgesToCreate, TArray<struct FEdgeID>* OutNewEdgeIDs)
{
	static auto Func = Class->GetFunction("EditableMesh", "CreateEdges");

	Params::UEditableMesh_CreateEdges_Params Parms;
	Parms.EdgesToCreate = EdgesToCreate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	if (OutNewEdgeIDs != nullptr)
		*OutNewEdgeIDs = Parms.OutNewEdgeIDs;

}

// Function EditableMesh.EditableMesh.ComputePolygonTriangulation
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FMeshTriangle>       OutTriangles                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::ComputePolygonTriangulation(const struct FPolygonID& PolygonID, TArray<struct FMeshTriangle>* OutTriangles)
{
	static auto Func = Class->GetFunction("EditableMesh", "ComputePolygonTriangulation");

	Params::UEditableMesh_ComputePolygonTriangulation_Params Parms;
	Parms.PolygonID = PolygonID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	if (OutTriangles != nullptr)
		*OutTriangles = Parms.OutTriangles;

}

// Function EditableMesh.EditableMesh.ComputePolygonsSharedEdges
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FPolygonID>          PolygonIDs                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FEdgeID>             OutSharedEdgeIDs                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::ComputePolygonsSharedEdges(TArray<struct FPolygonID>& PolygonIDs, TArray<struct FEdgeID>* OutSharedEdgeIDs)
{
	static auto Func = Class->GetFunction("EditableMesh", "ComputePolygonsSharedEdges");

	Params::UEditableMesh_ComputePolygonsSharedEdges_Params Parms;
	Parms.PolygonIDs = PolygonIDs;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	if (OutSharedEdgeIDs != nullptr)
		*OutSharedEdgeIDs = Parms.OutSharedEdgeIDs;

}

// Function EditableMesh.EditableMesh.ComputePolygonPlane
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPlane                      ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FPlane UEditableMesh::ComputePolygonPlane(const struct FPolygonID& PolygonID)
{
	static auto Func = Class->GetFunction("EditableMesh", "ComputePolygonPlane");

	Params::UEditableMesh_ComputePolygonPlane_Params Parms;
	Parms.PolygonID = PolygonID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.ComputePolygonNormal
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UEditableMesh::ComputePolygonNormal(const struct FPolygonID& PolygonID)
{
	static auto Func = Class->GetFunction("EditableMesh", "ComputePolygonNormal");

	Params::UEditableMesh_ComputePolygonNormal_Params Parms;
	Parms.PolygonID = PolygonID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.ComputePolygonCenter
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UEditableMesh::ComputePolygonCenter(const struct FPolygonID& PolygonID)
{
	static auto Func = Class->GetFunction("EditableMesh", "ComputePolygonCenter");

	Params::UEditableMesh_ComputePolygonCenter_Params Parms;
	Parms.PolygonID = PolygonID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.ComputeBoundingBoxAndSphere
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FBoxSphereBounds            ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FBoxSphereBounds UEditableMesh::ComputeBoundingBoxAndSphere()
{
	static auto Func = Class->GetFunction("EditableMesh", "ComputeBoundingBoxAndSphere");

	Params::UEditableMesh_ComputeBoundingBoxAndSphere_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.ComputeBoundingBox
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FBox                        ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FBox UEditableMesh::ComputeBoundingBox()
{
	static auto Func = Class->GetFunction("EditableMesh", "ComputeBoundingBox");

	Params::UEditableMesh_ComputeBoundingBox_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.ComputeBarycentricWeightForPointOnPolygon
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPolygonID                  PolygonID                                                        (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     PointOnPolygon                                                   (ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMeshTriangle               OutTriangle                                                      (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     OutTriangleVertexWeights                                         (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEditableMesh::ComputeBarycentricWeightForPointOnPolygon(const struct FPolygonID& PolygonID, const struct FVector& PointOnPolygon, struct FMeshTriangle* OutTriangle, struct FVector* OutTriangleVertexWeights)
{
	static auto Func = Class->GetFunction("EditableMesh", "ComputeBarycentricWeightForPointOnPolygon");

	Params::UEditableMesh_ComputeBarycentricWeightForPointOnPolygon_Params Parms;
	Parms.PolygonID = PolygonID;
	Parms.PointOnPolygon = PointOnPolygon;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	if (OutTriangle != nullptr)
		*OutTriangle = Parms.OutTriangle;

	if (OutTriangleVertexWeights != nullptr)
		*OutTriangleVertexWeights = Parms.OutTriangleVertexWeights;

	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.CommitInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*         ComponentToInstanceTo                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEditableMesh*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UEditableMesh* UEditableMesh::CommitInstance(class UPrimitiveComponent* ComponentToInstanceTo)
{
	static auto Func = Class->GetFunction("EditableMesh", "CommitInstance");

	Params::UEditableMesh_CommitInstance_Params Parms;
	Parms.ComponentToInstanceTo = ComponentToInstanceTo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMesh.COMMIT
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UEditableMesh::COMMIT()
{
	static auto Func = Class->GetFunction("EditableMesh", "COMMIT");

	Params::UEditableMesh_COMMIT_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


}

// Function EditableMesh.EditableMesh.ChangePolygonsVertexInstances
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FChangeVertexInstancesForPolygon>VertexInstancesForPolygons                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UEditableMesh::ChangePolygonsVertexInstances(TArray<struct FChangeVertexInstancesForPolygon>& VertexInstancesForPolygons)
{
	static auto Func = Class->GetFunction("EditableMesh", "ChangePolygonsVertexInstances");

	Params::UEditableMesh_ChangePolygonsVertexInstances_Params Parms;
	Parms.VertexInstancesForPolygons = VertexInstancesForPolygons;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


}

// Function EditableMesh.EditableMesh.BevelPolygons
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FPolygonID>          PolygonIDs                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// float                              BevelFixedDistance                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              BevelProgressTowardCenter                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>          OutNewCenterPolygonIDs                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FPolygonID>          OutNewSidePolygonIDs                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEditableMesh::BevelPolygons(TArray<struct FPolygonID>& PolygonIDs, float BevelFixedDistance, float BevelProgressTowardCenter, TArray<struct FPolygonID>* OutNewCenterPolygonIDs, TArray<struct FPolygonID>* OutNewSidePolygonIDs)
{
	static auto Func = Class->GetFunction("EditableMesh", "BevelPolygons");

	Params::UEditableMesh_BevelPolygons_Params Parms;
	Parms.PolygonIDs = PolygonIDs;
	Parms.BevelFixedDistance = BevelFixedDistance;
	Parms.BevelProgressTowardCenter = BevelProgressTowardCenter;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	if (OutNewCenterPolygonIDs != nullptr)
		*OutNewCenterPolygonIDs = Parms.OutNewCenterPolygonIDs;

	if (OutNewSidePolygonIDs != nullptr)
		*OutNewSidePolygonIDs = Parms.OutNewSidePolygonIDs;

}

// Function EditableMesh.EditableMesh.AssignPolygonsToPolygonGroups
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FPolygonGroupForPolygon>PolygonGroupForPolygons                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bDeleteOrphanedPolygonGroups                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEditableMesh::AssignPolygonsToPolygonGroups(TArray<struct FPolygonGroupForPolygon>& PolygonGroupForPolygons, bool bDeleteOrphanedPolygonGroups)
{
	static auto Func = Class->GetFunction("EditableMesh", "AssignPolygonsToPolygonGroups");

	Params::UEditableMesh_AssignPolygonsToPolygonGroups_Params Parms;
	Parms.PolygonGroupForPolygons = PolygonGroupForPolygons;
	Parms.bDeleteOrphanedPolygonGroups = bDeleteOrphanedPolygonGroups;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


}

// Function EditableMesh.EditableMesh.AnyChangesToUndo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEditableMesh::AnyChangesToUndo()
{
	static auto Func = Class->GetFunction("EditableMesh", "AnyChangesToUndo");

	Params::UEditableMesh_AnyChangesToUndo_Params Parms;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}

// Function EditableMesh.EditableMeshFactory.MakeEditableMesh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*         PrimitiveComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              LODIndex                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEditableMesh*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UEditableMesh* UEditableMeshFactory::MakeEditableMesh(class UPrimitiveComponent* PrimitiveComponent, int32 LODIndex)
{
	static auto Func = Class->GetFunction("EditableMeshFactory", "MakeEditableMesh");

	Params::UEditableMeshFactory_MakeEditableMesh_Params Parms;
	Parms.PrimitiveComponent = PrimitiveComponent;
	Parms.LODIndex = LODIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;


	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flags;


	return Parms.ReturnValue;

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
