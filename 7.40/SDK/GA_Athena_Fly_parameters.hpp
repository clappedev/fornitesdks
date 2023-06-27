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
// Function GA_Athena_Fly.GA_Athena_Fly_C.Added_3EAC858E4A7943CBB81C86992D3F3CC1
struct UGA_Athena_Fly_C_Added_3EAC858E4A7943CBB81C86992D3F3CC1_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_Fly.GA_Athena_Fly_C.Removed_AAD5AA1645BDC2889C719BBCB8694960
struct UGA_Athena_Fly_C_Removed_AAD5AA1645BDC2889C719BBCB8694960_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_Fly.GA_Athena_Fly_C.K2_ActivateAbility
struct UGA_Athena_Fly_C_K2_ActivateAbility_Params
{
public:
};

// 0x4C (0x4C - 0x0)
// Function GA_Athena_Fly.GA_Athena_Fly_C.ExecuteUbergraph_GA_Athena_Fly
struct UGA_Athena_Fly_C_ExecuteUbergraph_GA_Athena_Fly_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_465E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilityTask_WaitGameplayTagAdded*     CallFunc_WaitGameplayTagAdd_ReturnValue;           // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0x20(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_465F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilityTask_WaitGameplayTagRemoved*   CallFunc_WaitGameplayTagRemove_ReturnValue;        // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue1;                     // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4660[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x44(0x8)(NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
