#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x0 (0x0 - 0x0)
// Function BP_Decal_Lightning.BP_Decal_Lightning_C.UserConstructionScript
struct ABP_Decal_Lightning_C_UserConstructionScript_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_Decal_Lightning.BP_Decal_Lightning_C.ReceiveBeginPlay
struct ABP_Decal_Lightning_C_ReceiveBeginPlay_Params
{
public:
};

// 0xA0 (0xA0 - 0x0)
// Function BP_Decal_Lightning.BP_Decal_Lightning_C.ExecuteUbergraph_BP_Decal_Lightning
struct ABP_Decal_Lightning_C_ExecuteUbergraph_BP_Decal_Lightning_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x8(0xC)(IsPlainOldData, NoDestructor)
	uint8                                        Pad_3910[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_K2_AddActorLocalRotation_SweepHitResult;  // 0x18(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
