#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x3C (0xAAC - 0xA70)
// BlueprintGeneratedClass GA_Perk_H_FeelTheBASE_DeathListener.GA_Perk_H_FeelTheBASE_DeathListener_C
class UGA_Perk_H_FeelTheBASE_DeathListener_C : public UGAT_GenericTriggeredAbility_Perk_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA70(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTagContainer                 TC_Overflow;                                       // 0xA78(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                StackCount;                                        // 0xA98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Stack1;                                            // 0xAA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Stack2;                                            // 0xAA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Stack3;                                            // 0xAA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Perk_H_FeelTheBASE_DeathListener_C");
		return Clss;
	}

	void ActivateBASEStacks(int32 Stack_Count, class AB_Perk_C_Constructor_BASE_C* BASEReference, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue1, bool CallFunc_EqualEqual_IntInt_ReturnValue2);
	void ExecuteGC(class AB_Perk_C_Constructor_BASE_C* BASEReference, bool* Overflow, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector_NetQuantize10& K2Node_MakeStruct_Vector_NetQuantize10, const struct FGameplayCueParameters& K2Node_MakeStruct_GameplayCueParameters);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_Perk_H_FeelTheBASE_DeathListener(int32 EntryPoint, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, const struct FGameplayEffectContextHandle& CallFunc_GetGrantedByEffectContext_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, class AActor* CallFunc_EffectContextGetInstigatorActor_ReturnValue, class AB_Perk_C_Constructor_BASE_C* K2Node_DynamicCast_AsB_Perk_C_Constructor_BASE, bool K2Node_DynamicCast_bSuccess, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, int32 CallFunc_GetGameplayEffectCount_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_K2_ApplyGameplayEffectSpecToTarget_ReturnValue, bool CallFunc_ExecuteGC_Overflow);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
