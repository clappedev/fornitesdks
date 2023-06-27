#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x18 (0x6F0 - 0x6D8)
// BlueprintGeneratedClass Minigame_PlayerCreated.Minigame_PlayerCreated_C
class AMinigame_PlayerCreated_C : public AFortMinigame
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        MaxTeams;                                          // 0x6E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_467D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonActivatablePanel*               ScoreboardPanel;                                   // 0x6E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Minigame_PlayerCreated_C");
		return Clss;
	}

	void GetRandomlyOrderedParticipatingPlayers(TArray<class AFortPlayerState*>* RandomizedPlayers, int32 RandomPlayerIndex, const TArray<class AFortPlayerState*>& RandomizedParticipatingPlayers, const TArray<class AFortPlayerState*>& ParticipatingPlayersCopy, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class AFortPlayerState* CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, TArray<class AFortPlayerState*>& CallFunc_GetParticipatingPlayers_OutPlayers);
	void IsVolumeEventRelevant(class APlayerState* PlayerState, class AFortVolume* EventVolume, bool* bResult, bool bIsRelevant, class AFortMinigame* CallFunc_GetMinigameForVolume_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, bool CallFunc_IsValid_ReturnValue1);
	void UnbindVolumeDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class AFortVolumeManager* CallFunc_GetVolumeManager_OutVolumeManager, enum class EVolumeValidityResult CallFunc_GetVolumeManager_OutIsValid, bool K2Node_SwitchEnum_CmpSuccess);
	void BindVolumeDelegates(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class AFortVolumeManager* CallFunc_GetVolumeManager_OutVolumeManager, enum class EVolumeValidityResult CallFunc_GetVolumeManager_OutIsValid, bool K2Node_SwitchEnum_CmpSuccess);
	void ShouldShowScoreboard(class APlayerController* PlayerController, bool* bResult, bool bShouldShow, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, class AFortPlayerState* K2Node_DynamicCast_AsFort_Player_State, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsPlayerInMinigame_ReturnValue);
	void AssignTeams(const TArray<class AFortPlayerState*>& RandomlyOrderedPlayers, const TArray<int32>& TeamSizes, int32 CurrentTeam, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Loop_Counter_Variable1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, int32 Temp_int_Variable1, int32 Temp_int_Loop_Counter_Variable2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, int32 Temp_int_Array_Index_Variable1, int32 Temp_int_Array_Index_Variable2, class AFortPlayerState* CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, TArray<class AFortPlayerState*>& CallFunc_GetRandomlyOrderedParticipatingPlayers_RandomizedPlayers, TArray<class AFortPlayerState*>& CallFunc_GetParticipatingPlayers_OutPlayers, class AFortPlayerState* CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue1, uint8 CallFunc_GetActorTeam_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue1, uint8 CallFunc_Subtract_ByteByte_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Array_Get_Item2, int32 CallFunc_Add_IntInt_ReturnValue3, bool CallFunc_Greater_IntInt_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue2, int32 Temp_int_Variable2, bool CallFunc_BooleanAND_ReturnValue, TArray<int32>& K2Node_MakeArray_Array, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue4, int32 CallFunc_Add_IntInt_ReturnValue5);
	void UserConstructionScript();
	void OnComplete_D9496DB6400ADA561B9C749CD6D8B5BC(class UUserWidget* UserWidget);
	void HandleMinigameWarmup();
	void ShowScoreboardPanel();
	void HideScoreboardPanel();
	void HandleStateChanged(enum class EFortMinigameState MinigameState);
	void ReceiveBeginPlay();
	void OnClientEnterVolume(class APlayerState* PlayerState, class AFortVolume* Volume);
	void OnClientExitVolume(class APlayerState* PlayerState, class AFortVolume* Volume);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_Minigame_PlayerCreated(int32 EntryPoint, class UUserWidget* Temp_object_Variable, bool CallFunc_IsDedicatedServer_ReturnValue, class UCommonActivatablePanel* K2Node_DynamicCast_AsCommon_Activatable_Panel, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_ShouldShowScoreboard_bResult, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsDedicatedServer_ReturnValue1, class UScoreboardPanel_C* K2Node_DynamicCast_AsScoreboard_Panel, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsActivated_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* K2Node_CustomEvent_UserWidget, bool CallFunc_IsDedicatedServer_ReturnValue2, bool CallFunc_IsDedicatedServer_ReturnValue3, class UFortHUDContext* CallFunc_GetContext_ReturnValue, enum class EFortMinigameState K2Node_CustomEvent_MinigameState, bool K2Node_SwitchEnum_CmpSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UFortAsyncAction_CreateWidgetAsync* CallFunc_CreateWidgetAsync_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_HasAuthority_ReturnValue, class APlayerState* K2Node_CustomEvent_PlayerState1, class AFortVolume* K2Node_CustomEvent_Volume1, bool CallFunc_IsVolumeEventRelevant_bResult, class APlayerState* K2Node_CustomEvent_PlayerState, class AFortVolume* K2Node_CustomEvent_Volume, bool CallFunc_IsVolumeEventRelevant_bResult1, enum class EEndPlayReason K2Node_Event_EndPlayReason);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
