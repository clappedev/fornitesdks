#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x1C (0x444 - 0x428)
// BlueprintGeneratedClass MinigameMode_ObstacleCourse.MinigameMode_ObstacleCourse_C
class AMinigameMode_ObstacleCourse_C : public AFortMinigameMode
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x428(0x8)(Transient, DuplicateTransient)
	bool                                         bMinigameWasInProgress;                            // 0x430(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_352D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        AmmountOfWood;                                     // 0x434(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMinigameState_ObstacleCourse_C*       Obstacle_Course_Minigame_State;                    // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FinishedPlayers;                                   // 0x440(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MinigameMode_ObstacleCourse_C");
		return Clss;
	}

	void GiveWood(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AFortPlayspaceManager* CallFunc_GetPlayspaceManager_OutPlayspaceManager, enum class EValidityResult CallFunc_GetPlayspaceManager_OutIsValid, bool K2Node_SwitchEnum_CmpSuccess, TArray<class AController*>& CallFunc_GetAllPlayersInPlayspace_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AController* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class AFortPlayerPawn* CallFunc_GetPlayerPawn_ReturnValue, float CallFunc_GetMaxHealth_ReturnValue, int32 CallFunc_K2_RemoveItemFromPlayer_ReturnValue);
	void SetPlayerPositionToStart(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AFortPlayspaceManager* CallFunc_GetPlayspaceManager_OutPlayspaceManager, enum class EValidityResult CallFunc_GetPlayspaceManager_OutIsValid, bool K2Node_SwitchEnum_CmpSuccess, TArray<class AController*>& CallFunc_GetAllPlayersInPlayspace_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AController* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AActor* CallFunc_ChoosePlayerStart_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_K2_TeleportTo_ReturnValue);
	void UserConstructionScript();
	void K2_PreGameTransitionEvent();
	void HandleMinigameObjectiveUpdated();
	void ExecuteUbergraph_MinigameMode_ObstacleCourse(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AFortPlayerState*>& CallFunc_GetPlayerStatesInMinigame_PlayerStates, bool CallFunc_GetPlayerStatesInMinigame_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class AFortPlayerState* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Min_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_HasPlayerCompletedAllObjectives_ReturnValue, float CallFunc_GetPlayerScore_Score, bool CallFunc_GetPlayerScore_bFinalScore, bool CallFunc_GetPlayerScore_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
