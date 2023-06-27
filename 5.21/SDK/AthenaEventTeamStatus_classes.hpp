#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x30 (0x3E0 - 0x3B0)
// WidgetBlueprintGeneratedClass AthenaEventTeamStatus.AthenaEventTeamStatus_C
class UAthenaEventTeamStatus_C : public UAthenaEventTeamStatusBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3B0(0x8)(Transient, DuplicateTransient)
	class UButton*                               ActivePlayersButton;                               // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                     ActivePlayersGrid;                                 // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_0;                                 // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               DeadPlayersButton;                                 // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                     DeadPlayersGrid;                                   // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaEventTeamStatus_C");
		return Clss;
	}

	void AddTeamToGrid(class UAthenaScoreboardTeamBase* TeamWidget, int32 NumColumns, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue);
	void CalculateSquareGridHeight(int32 NumElements, int32* GridHeight, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue1, float CallFunc_Sqrt_ReturnValue, float CallFunc_Sqrt_ReturnValue1, int32 CallFunc_FCeil_ReturnValue, int32 CallFunc_FFloor_ReturnValue, int32 CallFunc_Max_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue);
	void CalculateRectangleGridHeight(int32 NumElements, int32* GridHeight, int32 Local_GridHeight, int32 Temp_int_Variable, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void GetNumActiveColumns(int32* NumColumns, int32 Local_NumColumns, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_Sqrt_ReturnValue, int32 CallFunc_FFloor_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue1, int32 CallFunc_Multiply_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue2, bool CallFunc_Greater_IntInt_ReturnValue3, float CallFunc_Conv_IntToFloat_ReturnValue1, class AGameStateBase* CallFunc_GetGameState_ReturnValue, float CallFunc_Sqrt_ReturnValue1, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_FCeil_ReturnValue, class FName CallFunc_GetCurrentPlaylistName_ReturnValue, int32 CallFunc_Max_ReturnValue, bool K2Node_SwitchName_CmpSuccess, int32 CallFunc_SelectInt_ReturnValue);
	void ResetTeamGrid(class UUniformGridPanel* Grid, TArray<class UAthenaScoreboardTeamBase*>& Children, int32 NumColumns, float Local_WidgetScale, int32 Local_Column, int32 Local_Row, int32 Temp_int_Array_Index_Variable, float CallFunc_Conv_IntToFloat_ReturnValue, class UAthenaScoreboardTeamBase* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Variable, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue2, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Variable1, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue);
	void ShouldResizeActiveGrid(bool* bShouldResize, int32* NumColumns, int32 Local_NumColumns, int32 Local_NumActiveTeams, bool Local_ShouldResize, int32 CallFunc_CalculateRectangleGridHeight_GridHeight, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_CalculateRectangleGridHeight_GridHeight1, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_Sqrt_ReturnValue, int32 CallFunc_FFloor_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, int32 CallFunc_Multiply_IntInt_ReturnValue1, class AGameStateBase* CallFunc_GetGameState_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue1, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_SelectInt_ReturnValue, class FName CallFunc_GetCurrentPlaylistName_ReturnValue, int32 CallFunc_Max_ReturnValue, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_BooleanOR_ReturnValue);
	void ResetGrid(class UUniformGridPanel* Grid, TArray<class UAthenaScoreboardPlayerBase*>& Children, int32 GridSize, float Local_WidgetScale, int32 Local_Column, int32 Local_Row, int32 Temp_int_Array_Index_Variable, float CallFunc_Conv_IntToFloat_ReturnValue, class UAthenaScoreboardPlayerBase* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue2, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable1, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue);
	void Construct();
	void BndEvt__ActivePlayersButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__DeadPlayersButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void OnTeamDied_BP(class UAthenaScoreboardTeamBase* NewlyDeadTeamWidget);
	void OnTeamAdded_BP(class UAthenaScoreboardTeamBase* NewlyAddedTeamWidget);
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_AthenaEventTeamStatus(int32 EntryPoint, bool CallFunc_ShouldResizeActiveGrid_bShouldResize, int32 CallFunc_ShouldResizeActiveGrid_NumColumns, bool CallFunc_ShouldResizeActiveGrid_bShouldResize1, int32 CallFunc_ShouldResizeActiveGrid_NumColumns1, class UAthenaScoreboardTeamBase* K2Node_Event_NewlyDeadTeamWidget, class UAthenaScoreboardTeamBase* K2Node_Event_NewlyAddedTeamWidget, class UCommonButton* K2Node_ComponentBoundEvent_Button);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
