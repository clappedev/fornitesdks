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
// 0x97 (0x97 - 0x0)
// Function GA_Athena_SuperMedkit.GA_Athena_SuperMedkit_C.K2_CanActivateAbility
struct UGA_Athena_SuperMedkit_C_K2_CanActivateAbility_Params
{
public:
	//struct FGameplayAbilityActorInfo           ActorInfo;                                         // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	//struct FGameplayTagContainer               RelevantTags;                                      // 0x40(0x20)(Parm, OutParm)
	//bool                                       ReturnValue;                                       // 0x60(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	class AFortPlayerPawnAthena*                 K2Node_DynamicCast_AsFort_Player_Pawn_Athena;      // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BFE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetHealth_ReturnValue;                    // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetMaxShield_ReturnValue;                 // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FCeil_ReturnValue;                        // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetShield_ReturnValue;                    // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FCeil_ReturnValue1;                       // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetMaxHealth_ReturnValue;                 // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue1;             // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue;              // 0x94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue1;             // 0x95(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x96(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function GA_Athena_SuperMedkit.GA_Athena_SuperMedkit_C.Completed_0F34DCEB464B8A7334EFDAA07F2E1036
struct UGA_Athena_SuperMedkit_C_Completed_0F34DCEB464B8A7334EFDAA07F2E1036_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function GA_Athena_SuperMedkit.GA_Athena_SuperMedkit_C.Cancelled_0F34DCEB464B8A7334EFDAA07F2E1036
struct UGA_Athena_SuperMedkit_C_Cancelled_0F34DCEB464B8A7334EFDAA07F2E1036_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function GA_Athena_SuperMedkit.GA_Athena_SuperMedkit_C.Triggered_0F34DCEB464B8A7334EFDAA07F2E1036
struct UGA_Athena_SuperMedkit_C_Triggered_0F34DCEB464B8A7334EFDAA07F2E1036_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GA_Athena_SuperMedkit.GA_Athena_SuperMedkit_C.K2_ActivateAbility
struct UGA_Athena_SuperMedkit_C_K2_ActivateAbility_Params
{
public:
};

// 0x22C (0x22C - 0x0)
// Function GA_Athena_SuperMedkit.GA_Athena_SuperMedkit_C.ExecuteUbergraph_GA_Athena_SuperMedkit
struct UGA_Athena_SuperMedkit_C_ExecuteUbergraph_GA_Athena_SuperMedkit_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BFF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityActorInfo             CallFunc_GetActorInfo_ReturnValue;                 // 0x8(0x40)(ContainsInstancedReference)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x48(0x10)(ZeroConstructor, NoDestructor)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C00[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData1;                    // 0x68(0x20)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag1;                // 0x88(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle      CallFunc_AbilityTargetDataFromActor_ReturnValue;   // 0x90(0x20)()
	TArray<struct FActiveGameplayEffectHandle>   CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0xB0(0x10)(ZeroConstructor, ReferenceParm)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0xC0(0x10)(ZeroConstructor, NoDestructor)
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData;                     // 0xD0(0x20)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag;                 // 0xF0(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Temp_struct_Variable;                              // 0xF8(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle      Temp_struct_Variable1;                             // 0x100(0x20)()
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData12;                   // 0x120(0x20)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag12;               // 0x140(0x8)(NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12;            // 0x148(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_K2_CommitAbility_ReturnValue;             // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_CommitAbility_ReturnValue1;            // 0x159(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C01[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue; // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                K2Node_MakeStruct_GameplayCueParameters;           // 0x168(0xB8)(ContainsInstancedReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x220(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C02[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x224(0x8)(NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
