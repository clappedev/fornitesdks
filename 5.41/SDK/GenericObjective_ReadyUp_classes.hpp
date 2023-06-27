#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0xFD (0x4F5 - 0x3F8)
// BlueprintGeneratedClass GenericObjective_ReadyUp.GenericObjective_ReadyUp_C
class AGenericObjective_ReadyUp_C : public AFortObjectiveBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3F8(0x8)(Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x400(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_ReadyUp_Interact_C*                ReadyUpActor;                                      // 0x408(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NumberOfDifficultyIncrease;                        // 0x410(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4774[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          DifficultyRowNames;                                // 0x418(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UFortGameplayModifierItemDefinition*> DifficultyBoostItems;                              // 0x428(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FActiveGameplayModifierHandle         DifficultyBoostItemHandle;                         // 0x438(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        BaseDifficulty;                                    // 0x43C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   PylonUsedStat_Difficutly;                          // 0x440(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class FText                                  ObjectiveText;                                     // 0x450(0x18)(Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify)
	struct FSlateBrush                           BulletIcon;                                        // 0x468(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        BluGloMissionActivationQty;                        // 0x4F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFightTheStorm;                                   // 0x4F4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GenericObjective_ReadyUp_C");
		return Clss;
	}

	void GetObjectiveBulletIcon(struct FSlateBrush* BulletIcon);
	void OnRep_ObjectiveText();
	class FText BlueprintGetObjectiveDisplayText();
	void OnRep_DifficultyLevel();
	void SetDifficultyIncreaseRewardTier(class AGameStateBase* CallFunc_GetGameState_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AFortGameStateZone* K2Node_DynamicCast_AsFort_Game_State_Zone, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SetDifficultyIncreaseRewardTier_ReturnValue);
	void ApplyGameDifficultyIncrease(bool CallFunc_Array_IsValidIndex_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_ApplyDifficultyOffset_Success);
	void ApplyDifficultyBoostGameplayModifierItem(class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateZone* K2Node_DynamicCast_AsFort_Game_State_Zone, bool K2Node_DynamicCast_bSuccess, class UFortGameplayModifierItemDefinition* CallFunc_Array_Get_Item, const struct FActiveGameplayModifierHandle& CallFunc_RegisterGameplayModifier_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void UserConstructionScript();
	void HandleMissionEvent_StartObjective(const struct FGuid& InMissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int32 GenericInt, float GenericFloat, class FText& GenericText, const struct FGameplayTagContainer& GameplayTags, struct FFortMissionEvent& MissionEvent);
	void HandleMissionEvent_MissionSucceeded(const struct FGuid& InMissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int32 GenericInt, float GenericFloat, class FText& GenericText, const struct FGameplayTagContainer& GameplayTags, struct FFortMissionEvent& MissionEvent);
	void HandleMissionEvent_IncreaseDifficulty(const struct FGuid& InMissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int32 GenericInt, float GenericFloat, class FText& GenericText, const struct FGameplayTagContainer& GameplayTags, struct FFortMissionEvent& MissionEvent);
	void ExecuteUbergraph_GenericObjective_ReadyUp(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool Temp_bool_IsClosed_Variable1, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable1, int32 CallFunc_Add_IntInt_ReturnValue1, bool CallFunc_HasAuthority_ReturnValue, const struct FGuid& K2Node_HandleMissionEvent_InMissionGuid2, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_ObjectiveHandle2, class UFortMissionEventParams* K2Node_HandleMissionEvent_Params2, bool K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW2, class UObject* K2Node_HandleMissionEvent_EventFocus2, class UDataAsset* K2Node_HandleMissionEvent_EventContent2, class AActor* K2Node_HandleMissionEvent_EventInstigator2, int32 K2Node_HandleMissionEvent_GenericInt2, float K2Node_HandleMissionEvent_GenericFloat2, class FText K2Node_HandleMissionEvent_GenericText2, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_GameplayTags2, const struct FFortMissionEvent& K2Node_HandleMissionEvent_MissionEvent2, class UGen_ReadyUp_StartObjective_C* K2Node_DynamicCast_AsGen_Ready_Up_Start_Objective, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_B_Execution_Happened_Variable, float CallFunc_BreakParams_ReadyUpTimerLength, TArray<struct FTransform>& CallFunc_BreakParams_InteractSpawnLocation, class FText CallFunc_BreakParams_InteractTEXT, int32 CallFunc_BreakParams_BluGloMissionActivationQty, bool CallFunc_BreakParams_IsFightTheStorm, const struct FTransform& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class ABP_ReadyUp_Interact_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool Temp_bool_A_Execution_Happened_Variable, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, int32 Temp_int_Array_Index_Variable1, const struct FSlateBrush& CallFunc_GetObjectiveBulletIcon_BulletIcon, TArray<class AFortPlayerController*>& CallFunc_GetAllFortPlayerControllers_ReturnValue, class AFortPlayerController* CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue1, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue1, int32 Temp_int_Variable, bool K2Node_SwitchInteger_CmpSuccess, const struct FGuid& K2Node_HandleMissionEvent_InMissionGuid1, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_ObjectiveHandle1, class UFortMissionEventParams* K2Node_HandleMissionEvent_Params1, bool K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW1, class UObject* K2Node_HandleMissionEvent_EventFocus1, class UDataAsset* K2Node_HandleMissionEvent_EventContent1, class AActor* K2Node_HandleMissionEvent_EventInstigator1, int32 K2Node_HandleMissionEvent_GenericInt1, float K2Node_HandleMissionEvent_GenericFloat1, class FText K2Node_HandleMissionEvent_GenericText1, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_GameplayTags1, const struct FFortMissionEvent& K2Node_HandleMissionEvent_MissionEvent1, class UFortMissionSucceededParams* K2Node_DynamicCast_AsFort_Mission_Succeeded_Params, bool K2Node_DynamicCast_bSuccess1, const struct FGuid& CallFunc_GetMissionGuid_ReturnValue, class AFortMission* CallFunc_BreakParams__SucceededMission, bool CallFunc_RegisterForMissionEvents_ReturnValue, bool CallFunc_StartPlayingObjective_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_GetCurrentDifficulty_Difficulty, bool CallFunc_GetCurrentDifficulty_Success, const struct FGuid& K2Node_HandleMissionEvent_InMissionGuid, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_ObjectiveHandle, class UFortMissionEventParams* K2Node_HandleMissionEvent_Params, bool K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* K2Node_HandleMissionEvent_EventFocus, class UDataAsset* K2Node_HandleMissionEvent_EventContent, class AActor* K2Node_HandleMissionEvent_EventInstigator, int32 K2Node_HandleMissionEvent_GenericInt, float K2Node_HandleMissionEvent_GenericFloat, class FText K2Node_HandleMissionEvent_GenericText, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_GameplayTags, const struct FFortMissionEvent& K2Node_HandleMissionEvent_MissionEvent, bool Temp_bool_Has_Been_Initd_Variable1, class UFortMissionTimerComponent* CallFunc_GetTimerComponent_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
