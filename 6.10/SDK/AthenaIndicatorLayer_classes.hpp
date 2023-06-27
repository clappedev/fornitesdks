#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x49 (0x2B9 - 0x270)
// WidgetBlueprintGeneratedClass AthenaIndicatorLayer.AthenaIndicatorLayer_C
class UAthenaIndicatorLayer_C : public UAthenaIndicatorLayerBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(Transient, DuplicateTransient)
	class USafeZone*                             SafeZone_0;                                        // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortActorCanvas*                      SquadIndicators;                                   // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UAthenaTeamMemberIndicator_C*>  SquadMemberIndicators;                             // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UInterestIndicatorWidget_C*>    AvailableInterestIndicators;                       // 0x298(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UInterestIndicatorWidget_C*>    ActiveInterestIndicators;                          // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         ShowInteractionWidget;                             // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaIndicatorLayer_C");
		return Clss;
	}

	void HandleOnPointOfInterestRemoved(class AActor* PointOfInterest, bool Removed, class UInterestIndicatorWidget_C* CurrentPointOfInterestWidget, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_RemovePointOfInterest_Removed, class UInterestIndicatorWidget_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void HandleOnPointOfInterestAdded(class AActor* PointOfInterest, class FText DisplayText, class UTexture2D* DisplayImage, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UInterestIndicatorWidget_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_AddUnique_ReturnValue);
	void CreateInterestIndicatorWidget(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UInterestIndicatorWidget_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, class UFortActorCanvasSlot* CallFunc_AddActorIndicator_ReturnValue);
	void AddSquadMemberIndicator(class AFortPlayerStateAthena* Player_State, int32 Team_Member_Index, class UAthenaTeamMemberIndicator_C* NewIndicator, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, class UAthenaPlayerViewModel* CallFunc_GetCurrentViewModel_ReturnValue, class UFortActorCanvasSlot* CallFunc_AddActorIndicator_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAthenaTeamMemberIndicator_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void Construct();
	void Destruct();
	void SquadIndicatorsChanged(TArray<class AFortPlayerStateAthena*>& PlayerStates);
	void SetDataSource(class UAthenaPlayerViewModel* PlayerViewModel);
	void ExecuteUbergraph_AthenaIndicatorLayer(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable1, class UAthenaTeamMemberIndicator_C* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UAthenaTeamMemberIndicator_C* CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_RemoveChild_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue1, class UBuildingInfoIndicator_C* CallFunc_Create_ReturnValue, class UAthenaInteractionIndicator_C* CallFunc_Create_ReturnValue1, class UFortActorCanvasSlot* CallFunc_AddActorIndicator_ReturnValue, class UFortActorCanvasSlot* CallFunc_AddActorIndicator_ReturnValue1, class UFortHUDContext* CallFunc_GetContext_ReturnValue, int32 Temp_int_Loop_Counter_Variable1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Add_IntInt_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, TArray<class AFortPlayerStateAthena*>& K2Node_Event_PlayerStates, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, class UVehicleChangeSeatIndicator_C* CallFunc_Create_ReturnValue2, int32 Temp_int_Array_Index_Variable2, class UFortActorCanvasSlot* CallFunc_AddActorIndicator_ReturnValue2, class AFortPlayerStateAthena* CallFunc_Array_Get_Item2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue3, int32 Temp_int_Loop_Counter_Variable2, class UVehicleInfoIndicator_C* CallFunc_Create_ReturnValue3, class UFortActorCanvasSlot* CallFunc_AddActorIndicator_ReturnValue3, bool CallFunc_Less_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue2, class UAthenaPlayerViewModel* K2Node_Event_PlayerViewModel);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
