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
// 0x13 (0x13 - 0x0)
// Function GA_Perk_H_FeelTheBASE_DeathListener.GA_Perk_H_FeelTheBASE_DeathListener_C.ActivateBASEStacks
struct UGA_Perk_H_FeelTheBASE_DeathListener_C_ActivateBASEStacks_Params
{
public:
	int32                                        Stack_Count;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5403[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AB_Perk_C_Constructor_BASE_C*          BASEReference;                                     // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x111 (0x111 - 0x0)
// Function GA_Perk_H_FeelTheBASE_DeathListener.GA_Perk_H_FeelTheBASE_DeathListener_C.ExecuteGC
struct UGA_Perk_H_FeelTheBASE_DeathListener_C_ExecuteGC_Params
{
public:
	class AB_Perk_C_Constructor_BASE_C*          BASEReference;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Overflow;                                          // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5404[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0xC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerState*                      CallFunc_GetOwningPlayerState_ReturnValue;         // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X;                            // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y;                            // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z;                            // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5405[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerPawn*                       CallFunc_GetCurrentPawn_ReturnValue;               // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector_NetQuantize10                 K2Node_MakeStruct_Vector_NetQuantize10;            // 0x38(0xC)(NoDestructor)
	uint8                                        Pad_5406[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue;    // 0x48(0xB8)(ContainsInstancedReference)
	UInterfaceProperty_                          CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput; // 0x100(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAllMatchingGameplayTags_ReturnValue;   // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB0 (0xB0 - 0x0)
// Function GA_Perk_H_FeelTheBASE_DeathListener.GA_Perk_H_FeelTheBASE_DeathListener_C.K2_ActivateAbilityFromEvent
struct UGA_Perk_H_FeelTheBASE_DeathListener_C_K2_ActivateAbilityFromEvent_Params
{
public:
	//struct FGameplayEventData                  EventData;                                         // 0x0(0xB0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x14C (0x14C - 0x0)
// Function GA_Perk_H_FeelTheBASE_DeathListener.GA_Perk_H_FeelTheBASE_DeathListener_C.ExecuteUbergraph_GA_Perk_H_FeelTheBASE_DeathListener
struct UGA_Perk_H_FeelTheBASE_DeathListener_C_ExecuteUbergraph_GA_Perk_H_FeelTheBASE_DeathListener_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5407[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEffectSpecHandle             CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue; // 0x8(0x10)()
	struct FGameplayEffectContextHandle          CallFunc_GetGrantedByEffectContext_ReturnValue;    // 0x18(0x18)()
	struct FGameplayEventData                    K2Node_Event_EventData;                            // 0x30(0xB0)(ConstParm)
	class AActor*                                CallFunc_EffectContextGetInstigatorActor_ReturnValue; // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AB_Perk_C_Constructor_BASE_C*          K2Node_DynamicCast_AsB_Perk_C_Constructor_BASE;    // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ExecuteGC_Overflow;                       // 0xF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5408[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerState*                      CallFunc_GetOwningPlayerState_ReturnValue;         // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       CallFunc_GetCurrentPawn_ReturnValue;               // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle      CallFunc_AbilityTargetDataFromActor_ReturnValue;   // 0x108(0x28)()
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x130(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FActiveGameplayEffectHandle>   CallFunc_K2_ApplyGameplayEffectSpecToTarget_ReturnValue; // 0x138(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        CallFunc_GetGameplayEffectCount_ReturnValue;       // 0x148(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
