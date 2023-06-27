#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
enum class EComputeNTBsOptions : uint8
{
	None                           = 0,
	Normals                        = 1,
	Tangents                       = 2,
	WeightedNTBs                   = 4,
	EComputeNTBsOptions_MAX        = 5,
};
// 0x4 (0x4 - 0x0)
// ScriptStruct MeshDescription.ElementID
struct FElementID
{
public:
	int32                                        IDValue;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x0 (0x4 - 0x4)
// ScriptStruct MeshDescription.PolygonGroupID
struct FPolygonGroupID : public FElementID
{
public:
};

// 0x0 (0x4 - 0x4)
// ScriptStruct MeshDescription.PolygonID
struct FPolygonID : public FElementID
{
public:
};

// 0x0 (0x4 - 0x4)
// ScriptStruct MeshDescription.VertexID
struct FVertexID : public FElementID
{
public:
};

// 0x0 (0x4 - 0x4)
// ScriptStruct MeshDescription.EdgeID
struct FEdgeID : public FElementID
{
public:
};

// 0x0 (0x4 - 0x4)
// ScriptStruct MeshDescription.VertexInstanceID
struct FVertexInstanceID : public FElementID
{
public:
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MeshDescription.MeshPolygonGroup
struct FMeshPolygonGroup
{
public:
	uint8                                        Pad_265C[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MeshDescription.MeshPolygonContour
struct FMeshPolygonContour
{
public:
	TArray<struct FVertexInstanceID>             VertexInstanceIDs;                                 // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct MeshDescription.MeshTriangle
struct FMeshTriangle
{
public:
	struct FVertexInstanceID                     VertexInstanceID0;                                 // 0x0(0x4)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexInstanceID                     VertexInstanceID1;                                 // 0x4(0x4)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexInstanceID                     VertexInstanceID2;                                 // 0x8(0x4)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct MeshDescription.MeshPolygon
struct FMeshPolygon
{
public:
	struct FMeshPolygonContour                   PerimeterContour;                                  // 0x0(0x10)(NativeAccessSpecifierPublic)
	TArray<struct FMeshPolygonContour>           HoleContours;                                      // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMeshTriangle>                 Triangles;                                         // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FPolygonGroupID                       PolygonGroupID;                                    // 0x30(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_265D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MeshDescription.MeshEdge
struct FMeshEdge
{
public:
	struct FVertexID                             VertexIDs;                                         // 0x0(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_265E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPolygonID>                    ConnectedPolygons;                                 // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MeshDescription.MeshVertexInstance
struct FMeshVertexInstance
{
public:
	struct FVertexID                             VertexID;                                          // 0x0(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_265F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPolygonID>                    ConnectedPolygons;                                 // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MeshDescription.MeshVertex
struct FMeshVertex
{
public:
	TArray<struct FVertexInstanceID>             VertexInstanceIDs;                                 // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FEdgeID>                       ConnectedEdgeIDs;                                  // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
