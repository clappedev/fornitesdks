#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0xBA (0x9F2 - 0x938)
// BlueprintGeneratedClass GAT_GenericActiveAbilityNoCommit.GAT_GenericActiveAbilityNoCommit_C
class UGAT_GenericActiveAbilityNoCommit_C : public UGAT_ActiveAbility_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x938(0x8)(Transient, DuplicateTransient)
	struct FGameplayEventData                    EventData;                                         // 0x940(0xA8)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPlayerPawn*                       FortPlayerPawn;                                    // 0x9E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsAutoCommitted;                                   // 0x9F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsStaminaLockedOut;                                // 0x9F1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAT_GenericActiveAbilityNoCommit_C");
		return Clss;
	}

	void K2_ActivateAbility();
	void ExecuteUbergraph_GAT_GenericActiveAbilityNoCommit(int32 EntryPoint, bool CallFunc_K2_CommitAbility_ReturnValue, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
