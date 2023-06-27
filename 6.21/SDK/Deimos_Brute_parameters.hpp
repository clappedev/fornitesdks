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
// 0x78 (0x78 - 0x0)
// Function Deimos_Brute.Deimos_Brute_C.OnRep_isTarget
struct ADeimos_Brute_C_OnRep_isTarget_Params
{
public:
	struct FVector                               CallFunc_GetActorBounds_Origin;                    // 0x0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetActorBounds_BoxExtent;                 // 0xC(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X;                            // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y;                            // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z;                            // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x28(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41EA[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x40(0x30)(IsPlainOldData, NoDestructor)
	class UChildActorComponent*                  CallFunc_AddComponent_ReturnValue;                 // 0x70(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Deimos_Brute.Deimos_Brute_C.UserConstructionScript
struct ADeimos_Brute_C_UserConstructionScript_Params
{
public:
};

// 0xD (0xD - 0x0)
// Function Deimos_Brute.Deimos_Brute_C.IgnitePropaneTank
struct ADeimos_Brute_C_IgnitePropaneTank_Params
{
public:
	class AFortPawn*                             Pawn;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RemainingFuseTime;                                 // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         JustDrop;                                          // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function Deimos_Brute.Deimos_Brute_C.FSMRemovePropaneTank
struct ADeimos_Brute_C_FSMRemovePropaneTank_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Deimos_Brute.Deimos_Brute_C.FSMFailedToSpawnTank
struct ADeimos_Brute_C_FSMFailedToSpawnTank_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Deimos_Brute.Deimos_Brute_C.FSMBeginPropaneTankMelee
struct ADeimos_Brute_C_FSMBeginPropaneTankMelee_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function Deimos_Brute.Deimos_Brute_C.BeeCloudDespawned
struct ADeimos_Brute_C_BeeCloudDespawned_Params
{
public:
	class AFortProjectileBase*                   Cloud;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Deimos_Brute.Deimos_Brute_C.ManageBurpEffect
struct ADeimos_Brute_C_ManageBurpEffect_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function Deimos_Brute.Deimos_Brute_C.ReceiveBeginPlay
struct ADeimos_Brute_C_ReceiveBeginPlay_Params
{
public:
};

// 0x21 (0x21 - 0x0)
// Function Deimos_Brute.Deimos_Brute_C.ExecuteUbergraph_Deimos_Brute
struct ADeimos_Brute_C_ExecuteUbergraph_Deimos_Brute_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41EB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPawn*                             K2Node_Event_Pawn;                                 // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_RemainingFuseTime;                    // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_JustDrop;                             // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41EC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortProjectileBase*                   K2Node_Event_Cloud;                                // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_Enabled;                              // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
