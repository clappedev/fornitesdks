#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x10 (0x928 - 0x918)
// BlueprintGeneratedClass GAT_Athena_PurpleStuff.GAT_Athena_PurpleStuff_C
class UGAT_Athena_PurpleStuff_C : public UGAT_TriggeredAbility_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x918(0x8)(Transient, DuplicateTransient)
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0x920(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAT_Athena_PurpleStuff_C");
		return Clss;
	}

	void K2_ActivateAbility();
	void ExecuteUbergraph_GAT_Athena_PurpleStuff(int32 EntryPoint, bool CallFunc_K2_CommitAbility_ReturnValue, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
