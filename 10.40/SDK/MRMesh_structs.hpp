#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
enum class EMeshTrackerVertexColorMode : uint8
{
	None                           = 0,
	Confidence                     = 1,
	Block                          = 2,
	EMeshTrackerVertexColorMode_MAX = 3,
};
// 0x1 (0x1 - 0x0)
// ScriptStruct MRMesh.MRMeshConfiguration
struct FMRMeshConfiguration
{
public:
	uint8                                        Pad_366A[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
