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
// Function GA_BadgerBangs_KeepCheckingLOS.GA_BadgerBangs_KeepCheckingLOS_C.K2_ActivateAbility
struct UGA_BadgerBangs_KeepCheckingLOS_C_K2_ActivateAbility_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function GA_BadgerBangs_KeepCheckingLOS.GA_BadgerBangs_KeepCheckingLOS_C.K2_OnEndAbility
struct UGA_BadgerBangs_KeepCheckingLOS_C_K2_OnEndAbility_Params
{
public:
	//bool                                       bWasCancelled;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function GA_BadgerBangs_KeepCheckingLOS.GA_BadgerBangs_KeepCheckingLOS_C.CheckLOSAgain
struct UGA_BadgerBangs_KeepCheckingLOS_C_CheckLOSAgain_Params
{
public:
};

// 0x91 (0x91 - 0x0)
// Function GA_BadgerBangs_KeepCheckingLOS.GA_BadgerBangs_KeepCheckingLOS_C.ExecuteUbergraph_GA_BadgerBangs_KeepCheckingLOS
struct UGA_BadgerBangs_KeepCheckingLOS_C_ExecuteUbergraph_GA_BadgerBangs_KeepCheckingLOS_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_438B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityActorInfo             CallFunc_GetActorInfo_ReturnValue;                 // 0x8(0x40)(ContainsInstancedReference)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x48(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x58(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bWasCancelled;                        // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_438C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEffectContextHandle          CallFunc_GetGrantedByEffectContext_ReturnValue;    // 0x68(0x18)()
	class AActor*                                CallFunc_EffectContextGetEffectCauser_ReturnValue; // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABGA_Athena_BadgerBangsStuck_C*        K2Node_DynamicCast_AsBGA_Athena_Badger_Bangs_Stuck; // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
