#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x60 (0x950 - 0x8F0)
// BlueprintGeneratedClass GA_Athena_Balloons_ReleaseConditions.GA_Athena_Balloons_ReleaseConditions_C
class UGA_Athena_Balloons_ReleaseConditions_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8F0(0x8)(Transient, DuplicateTransient)
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0x8F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagRequirements              EmoteTags;                                         // 0x900(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          CleanupTag;                                        // 0x940(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          DBNOTag;                                           // 0x948(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Athena_Balloons_ReleaseConditions_C");
		return Clss;
	}

	void OnActivate_1A489F684C338ABE95296EB4C5D51D1C(class UGameplayAbility* ActivatedAbility);
	void Added_3041D97F469D592879CF7FBAB4B2FFFE();
	void EventReceived_F1071C264D39527F08E6C2952068C28B(const struct FGameplayEventData& Payload);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Athena_Balloons_ReleaseConditions(int32 EntryPoint, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, const struct FGameplayEventData& K2Node_CustomEvent_Payload, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FGameplayEventData& Temp_struct_Variable, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_K2_CommitAbility_ReturnValue, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, class UGameplayAbility* Temp_object_Variable, class UGameplayAbility* K2Node_CustomEvent_ActivatedAbility, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class AFortWeapon* CallFunc_GetCurrentSourceWeapon_ReturnValue, class AB_UtilityItem_Balloons_Athena_C* K2Node_DynamicCast_AsB_Utility_Item_Balloons_Athena, bool K2Node_DynamicCast_bSuccess1, class UAbilityTask_WaitAbilityActivate* CallFunc_WaitForAbilityActivateWithTagRequirements_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
