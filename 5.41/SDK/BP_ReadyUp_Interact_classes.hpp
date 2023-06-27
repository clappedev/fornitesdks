#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x9D (0xC45 - 0xBA8)
// BlueprintGeneratedClass BP_ReadyUp_Interact.BP_ReadyUp_Interact_C
class ABP_ReadyUp_Interact_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBA8(0x8)(Transient, DuplicateTransient)
	class FText                                  InteractText;                                      // 0xBB0(0x18)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	bool                                         CanInteract;                                       // 0xBC8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_3BB4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class UUserWidget>             MissionControlWidgetRef;                           // 0xBD0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UClass*                                MissionControlWidget;                              // 0xBF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 PlayerController;                                  // 0xC00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 PlayerWhoOpenedMissionControl;                     // 0xC08(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWorldItemDefinition*              ItemToDeposit;                                     // 0xC10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BluGloMissionActivationQty;                        // 0xC18(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BB5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortObjectiveBase*                    ReadyUpObjectiveRef;                               // 0xC20(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 MissionGuid;                                       // 0xC28(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DifficultyVoteInProgress;                          // 0xC38(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BB6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BluGloDifficulytActivationQty;                     // 0xC3C(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ActivateVoteInProgress;                            // 0xC40(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShouldDisableDifficultyVoting;                     // 0xC41(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsFightTheStorm;                                   // 0xC42(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Supported;                                         // 0xC43(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         BluGloTaken;                                       // 0xC44(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_ReadyUp_Interact_C");
		return Clss;
	}

	void ReturnBluGloToPlayer(UInterfaceProperty_ InventoryOwner, int32 NumberBGtoReturn);
	void TakeBluGloFromPlayer(class AFortPlayerController* PlayerController, int32 NumberBGtoTake, int32 CallFunc_K2_RemoveItemFromPlayer_ReturnValue);
	void OnRep_CanInteract();
	bool ShouldDie(float Damage, class AController* EventInstigator, class AActor* DamageCauser);
	class FText BlueprintGetInteractionString(class AFortPawn* InteractingPawn);
	bool BlueprintCanInteract(class AFortPawn* InteractingPawn);
	void UserConstructionScript();
	void OnCanceled_1ED02ED748A4140AEF73B29E96DDE83A();
	void OnAllClientsReady_1ED02ED748A4140AEF73B29E96DDE83A();
	void OnCanceled_1ED02ED748A4140AEF73B29EC94AD234();
	void OnAllClientsReady_1ED02ED748A4140AEF73B29EC94AD234();
	void OnLoaded_EF452E634A72368CE34CF0A4B53E9FCE(class UClass* Loaded);
	void ReceiveBeginPlay();
	void OpenMissionControl();
	void BlueprintOnInteract(class AFortPawn* InteractingPawn);
	void VoteCalled(enum class EFortVoteType VoteType, enum class EFortVoteStatus VoteStatus, int32 VoteResult, TArray<struct FVoter>& Voters);
	void DisableDifficultyVoting();
	void AtlasUnsupported();
	void HandleMissionEvent_Supported(const struct FGuid& InMissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int32 GenericInt, float GenericFloat, class FText& GenericText, const struct FGameplayTagContainer& GameplayTags, struct FFortMissionEvent& MissionEvent);
	void HandleMissionEvent_UnSupported(const struct FGuid& InMissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int32 GenericInt, float GenericFloat, class FText& GenericText, const struct FGameplayTagContainer& GameplayTags, struct FFortMissionEvent& MissionEvent);
	void HandleMissionEvent_ActivatePrimary(const struct FGuid& InMissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int32 GenericInt, float GenericFloat, class FText& GenericText, const struct FGameplayTagContainer& GameplayTags, struct FFortMissionEvent& MissionEvent);
	void ExecuteUbergraph_BP_ReadyUp_Interact(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AAnnounce_Gen_Basic_C* CallFunc_FinishSpawningActor_ReturnValue, class UClass* Temp_class_Variable, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsUser_Widget, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UClass* K2Node_CustomEvent_Loaded, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array, const struct FTransform& CallFunc_MakeTransform_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1, class AAnnounce_Gen_Basic_C* CallFunc_FinishSpawningActor_ReturnValue1, class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool CallFunc_IsValid_ReturnValue1, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array1, bool CallFunc_IsDedicatedServer_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class AFortPawn* K2Node_Event_InteractingPawn, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class UUserWidget* CallFunc_Create_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class UCommonActivatablePanel* K2Node_DynamicCast_AsCommon_Activatable_Panel, bool K2Node_DynamicCast_bSuccess1, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess2, UInterfaceProperty_ K2Node_DynamicCast_AsFort_Initialize_from_Object_Interface, bool K2Node_DynamicCast_bSuccess3, enum class EFortVoteType K2Node_CustomEvent_VoteType, enum class EFortVoteStatus K2Node_CustomEvent_VoteStatus, int32 K2Node_CustomEvent_VoteResult, TArray<struct FVoter>& K2Node_CustomEvent_Voters, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum1_CmpSuccess, bool K2Node_SwitchEnum2_CmpSuccess, UInterfaceProperty_ CallFunc_ReturnBluGloToPlayer_InventoryOwner_CastInput, class AGameStateBase* CallFunc_GetGameState_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class AFortGameStateZone* K2Node_DynamicCast_AsFort_Game_State_Zone, bool K2Node_DynamicCast_bSuccess4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool K2Node_MultiGate_FirstRun, int32 K2Node_MultiGate_Data, bool K2Node_MultiGate_ScratchBool, int32 K2Node_MultiGate_ScratchIndex, UInterfaceProperty_ CallFunc_ReturnBluGloToPlayer_InventoryOwner1_CastInput, class AFortMission* CallFunc_GetMission_ReturnValue, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, const struct FFortClientAnnouncementData_Basic& K2Node_MakeStruct_FortClientAnnouncementData_Basic, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue1, const struct FGuid& K2Node_HandleMissionEvent_InMissionGuid2, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_ObjectiveHandle2, class UFortMissionEventParams* K2Node_HandleMissionEvent_Params2, bool K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW2, class UObject* K2Node_HandleMissionEvent_EventFocus2, class UDataAsset* K2Node_HandleMissionEvent_EventContent2, class AActor* K2Node_HandleMissionEvent_EventInstigator2, int32 K2Node_HandleMissionEvent_GenericInt2, float K2Node_HandleMissionEvent_GenericFloat2, class FText K2Node_HandleMissionEvent_GenericText2, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_GameplayTags2, const struct FFortMissionEvent& K2Node_HandleMissionEvent_MissionEvent2, const struct FFortClientAnnouncementData_Basic& K2Node_MakeStruct_FortClientAnnouncementData_Basic1, const struct FGuid& K2Node_HandleMissionEvent_InMissionGuid1, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_ObjectiveHandle1, class UFortMissionEventParams* K2Node_HandleMissionEvent_Params1, bool K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW1, class UObject* K2Node_HandleMissionEvent_EventFocus1, class UDataAsset* K2Node_HandleMissionEvent_EventContent1, class AActor* K2Node_HandleMissionEvent_EventInstigator1, int32 K2Node_HandleMissionEvent_GenericInt1, float K2Node_HandleMissionEvent_GenericFloat1, class FText K2Node_HandleMissionEvent_GenericText1, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_GameplayTags1, const struct FFortMissionEvent& K2Node_HandleMissionEvent_MissionEvent1, const struct FGuid& K2Node_HandleMissionEvent_InMissionGuid, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_ObjectiveHandle, class UFortMissionEventParams* K2Node_HandleMissionEvent_Params, bool K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* K2Node_HandleMissionEvent_EventFocus, class UDataAsset* K2Node_HandleMissionEvent_EventContent, class AActor* K2Node_HandleMissionEvent_EventInstigator, int32 K2Node_HandleMissionEvent_GenericInt, float K2Node_HandleMissionEvent_GenericFloat, class FText K2Node_HandleMissionEvent_GenericText, const struct FGameplayTagContainer& K2Node_HandleMissionEvent_GameplayTags, const struct FFortMissionEvent& K2Node_HandleMissionEvent_MissionEvent);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
