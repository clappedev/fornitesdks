#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x17 (0x918 - 0x901)
// BlueprintGeneratedClass GAT_Athena_IceTrap.GAT_Athena_IceTrap_C
class UGAT_Athena_IceTrap_C : public UGAT_TriggeredAbility_C
{
public:
	uint8                                        Pad_45BD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x908(0x8)(Transient, DuplicateTransient)
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0x910(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAT_Athena_IceTrap_C");
		return Clss;
	}

	void K2_ActivateAbility();
	void ExecuteUbergraph_GAT_Athena_IceTrap(int32 EntryPoint, bool CallFunc_K2_CommitAbility_ReturnValue, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
