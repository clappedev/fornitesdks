#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x0 (0xA2C - 0xA2C)
// BlueprintGeneratedClass GA_Athena_SuperMedkit.GA_Athena_SuperMedkit_C
class UGA_Athena_SuperMedkit_C : public UGA_Athena_MedConsumable_Parent_C
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Athena_SuperMedkit_C");
		return Clss;
	}

	void OnMontageTriggered(class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_SendComplexCustomStatEvent_QuestActive, bool CallFunc_SendComplexCustomStatEvent_QuestCompleted);
	void MakeCustomMontageInfo(bool Temp_bool_Variable, class UAnimMontage* Temp_object_Variable, class UAnimMontage* Temp_object_Variable_1, TArray<struct FFortCharacterPartMontageInfo>& K2Node_MakeArray_Array, bool CallFunc_GetGender_IsMale, bool CallFunc_GetGender_IsFemale, class UAnimMontage* K2Node_Select_Default, const struct FFortGameplayAbilityMontageInfo& K2Node_MakeStruct_FortGameplayAbilityMontageInfo);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
