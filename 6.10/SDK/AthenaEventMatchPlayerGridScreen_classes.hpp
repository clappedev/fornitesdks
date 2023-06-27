#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x38 (0x3F8 - 0x3C0)
// WidgetBlueprintGeneratedClass AthenaEventMatchPlayerGridScreen.AthenaEventMatchPlayerGridScreen_C
class UAthenaEventMatchPlayerGridScreen_C : public UAthenaEventMatchPlayerGridScreenBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3C0(0x8)(Transient, DuplicateTransient)
	class UButton*                               ActivePlayersButton;                               // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                     ActivePlayersGrid;                                 // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               DeadPlayersButton;                                 // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                     DeadPlayersGrid;                                   // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          SpectateInReplayVB;                                // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TitleText;                                         // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaEventMatchPlayerGridScreen_C");
		return Clss;
	}

	void ResetEliminatedGrid(const TArray<class UUserWidget*>& Local_EliminatedWidgets, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, class UAthenaEventMatchTeamWidgetBase* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAthenaEventMatchPlayerGridDummyWidget_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Add_ReturnValue1);
	void IsActiveGridVisible(bool* bIsVisible, float CallFunc_GetRenderOpacity_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue);
	void CalculateRectangleGridHeight(int32 NumElements, int32* GridHeight, int32 Local_GridHeight, int32 Temp_int_Variable, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void ResetTeamGrid(class UUniformGridPanel* InGrid, TArray<class UUserWidget*>& InChildWidgets, int32 InNumColumns, int32 Local_Column, int32 Local_Row, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item, class UAthenaEventMatchPlayerGridTeamWidget_C* K2Node_DynamicCast_AsAthena_Event_Match_Player_Grid_Team_Widget, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Variable, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue2, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Variable1);
	void ShouldResizeActiveGrid(bool* bShouldResize, int32* NumColumns, int32 Local_NumColumns, int32 Local_NumActiveTeams, bool Local_ShouldResize, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_CalculateRectangleGridHeight_GridHeight, float CallFunc_Sqrt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_FFloor_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_CalculateRectangleGridHeight_GridHeight1, int32 CallFunc_SelectInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_Sqrt_ReturnValue1, int32 CallFunc_FFloor_ReturnValue1, int32 CallFunc_Multiply_IntInt_ReturnValue2, bool CallFunc_EqualEqual_IntInt_ReturnValue2);
	void Construct();
	void BndEvt__ActivePlayersButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__DeadPlayersButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void OnTeamDied_BP(class UAthenaEventMatchTeamWidgetBase* NewlyDeadTeamWidget);
	void OnTeamAdded_BP(class UAthenaEventMatchTeamWidgetBase* NewlyAddedTeamWidget);
	void ShowActivePlayers();
	void ShowEliminatedPlayers();
	void ExecuteUbergraph_AthenaEventMatchPlayerGridScreen(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable1, bool CallFunc_ShouldResizeActiveGrid_bShouldResize, int32 CallFunc_ShouldResizeActiveGrid_NumColumns, bool CallFunc_ShouldResizeActiveGrid_bShouldResize1, int32 CallFunc_ShouldResizeActiveGrid_NumColumns1, class UAthenaEventMatchTeamWidgetBase* K2Node_Event_NewlyDeadTeamWidget, class UAthenaEventMatchTeamWidgetBase* K2Node_Event_NewlyAddedTeamWidget, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortReplaySpectatorAthena* K2Node_DynamicCast_AsFort_Replay_Spectator_Athena, bool K2Node_DynamicCast_bSuccess, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, int32 Temp_int_Loop_Counter_Variable1, TArray<class UAthenaEventMatchTeamWidgetBase*>& CallFunc_Map_Values_Values, class UAthenaEventMatchTeamWidgetBase* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UAthenaEventMatchPlayerWidgetBase* CallFunc_Array_Get_Item1, class UAthenaEventMatchPlayerGridPlayerWidget_C* K2Node_DynamicCast_AsAthena_Event_Match_Player_Grid_Player_Widget, bool K2Node_DynamicCast_bSuccess1, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
