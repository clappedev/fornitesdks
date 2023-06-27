#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function AthenaEventMatchPlayerGridScreen.AthenaEventMatchPlayerGridScreen_C.IsActiveGridVisible
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bIsVisible                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetRenderOpacity_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaEventMatchPlayerGridScreen_C::IsActiveGridVisible(bool* bIsVisible, float CallFunc_GetRenderOpacity_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaEventMatchPlayerGridScreen_C", "IsActiveGridVisible");

	Params::UAthenaEventMatchPlayerGridScreen_C_IsActiveGridVisible_Params Parms;
	Parms.CallFunc_GetRenderOpacity_ReturnValue = CallFunc_GetRenderOpacity_ReturnValue;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	if (bIsVisible != nullptr)
		*bIsVisible = Parms.bIsVisible;

}

// Function AthenaEventMatchPlayerGridScreen.AthenaEventMatchPlayerGridScreen_C.AddTeamToGrid
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaEventMatchTeamWidgetBase*TeamWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NumColumns                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUniformGridSlot*            CallFunc_AddChildToUniformGrid_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaEventMatchPlayerGridScreen_C::AddTeamToGrid(class UAthenaEventMatchTeamWidgetBase* TeamWidget, int32 NumColumns, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaEventMatchPlayerGridScreen_C", "AddTeamToGrid");

	Params::UAthenaEventMatchPlayerGridScreen_C_AddTeamToGrid_Params Parms;
	Parms.TeamWidget = TeamWidget;
	Parms.NumColumns = NumColumns;
	Parms.CallFunc_AddChildToUniformGrid_ReturnValue = CallFunc_AddChildToUniformGrid_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchPlayerGridScreen.AthenaEventMatchPlayerGridScreen_C.CalculateRectangleGridHeight
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              NumElements                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              GridHeight                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_GridHeight                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaEventMatchPlayerGridScreen_C::CalculateRectangleGridHeight(int32 NumElements, int32* GridHeight, int32 Local_GridHeight, int32 Temp_int_Variable, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaEventMatchPlayerGridScreen_C", "CalculateRectangleGridHeight");

	Params::UAthenaEventMatchPlayerGridScreen_C_CalculateRectangleGridHeight_Params Parms;
	Parms.NumElements = NumElements;
	Parms.Local_GridHeight = Local_GridHeight;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue1 = CallFunc_Multiply_IntInt_ReturnValue1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	if (GridHeight != nullptr)
		*GridHeight = Parms.GridHeight;

}

// Function AthenaEventMatchPlayerGridScreen.AthenaEventMatchPlayerGridScreen_C.ResetTeamGrid
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUniformGridPanel*           InGrid                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UAthenaEventMatchTeamWidgetBase*>InChildren                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int32                              InNumColumns                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Column                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Row                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaEventMatchTeamWidgetBase*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaEventMatchPlayerGridTeamWidget_C*K2Node_DynamicCast_AsAthena_Event_Match_Player_Grid_Team_Widget  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUniformGridSlot*            CallFunc_AddChildToUniformGrid_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaEventMatchPlayerGridScreen_C::ResetTeamGrid(class UUniformGridPanel* InGrid, TArray<class UAthenaEventMatchTeamWidgetBase*>& InChildren, int32 InNumColumns, int32 Local_Column, int32 Local_Row, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UAthenaEventMatchTeamWidgetBase* CallFunc_Array_Get_Item, class UAthenaEventMatchPlayerGridTeamWidget_C* K2Node_DynamicCast_AsAthena_Event_Match_Player_Grid_Team_Widget, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue2, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Variable1)
{
	static auto Func = Class->GetFunction("AthenaEventMatchPlayerGridScreen_C", "ResetTeamGrid");

	Params::UAthenaEventMatchPlayerGridScreen_C_ResetTeamGrid_Params Parms;
	Parms.InGrid = InGrid;
	Parms.InChildren = InChildren;
	Parms.InNumColumns = InNumColumns;
	Parms.Local_Column = Local_Column;
	Parms.Local_Row = Local_Row;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsAthena_Event_Match_Player_Grid_Team_Widget = K2Node_DynamicCast_AsAthena_Event_Match_Player_Grid_Team_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_AddChildToUniformGrid_ReturnValue = CallFunc_AddChildToUniformGrid_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchPlayerGridScreen.AthenaEventMatchPlayerGridScreen_C.ShouldResizeActiveGrid
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bShouldResize                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              NumColumns                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_NumColumns                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_NumActiveTeams                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_ShouldResize                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_CalculateRectangleGridHeight_GridHeight                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_CalculateRectangleGridHeight_GridHeight1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Sqrt_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortGameStateAthena*        K2Node_DynamicCast_AsFort_Game_State_Athena                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetCurrentPlaylistName_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaEventMatchPlayerGridScreen_C::ShouldResizeActiveGrid(bool* bShouldResize, int32* NumColumns, int32 Local_NumColumns, int32 Local_NumActiveTeams, bool Local_ShouldResize, int32 CallFunc_CalculateRectangleGridHeight_GridHeight, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_CalculateRectangleGridHeight_GridHeight1, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_Sqrt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_FFloor_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, int32 CallFunc_Multiply_IntInt_ReturnValue1, bool CallFunc_EqualEqual_IntInt_ReturnValue1, int32 CallFunc_SelectInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Max_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_GetCurrentPlaylistName_ReturnValue, bool K2Node_SwitchName_CmpSuccess)
{
	static auto Func = Class->GetFunction("AthenaEventMatchPlayerGridScreen_C", "ShouldResizeActiveGrid");

	Params::UAthenaEventMatchPlayerGridScreen_C_ShouldResizeActiveGrid_Params Parms;
	Parms.Local_NumColumns = Local_NumColumns;
	Parms.Local_NumActiveTeams = Local_NumActiveTeams;
	Parms.Local_ShouldResize = Local_ShouldResize;
	Parms.CallFunc_CalculateRectangleGridHeight_GridHeight = CallFunc_CalculateRectangleGridHeight_GridHeight;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_CalculateRectangleGridHeight_GridHeight1 = CallFunc_CalculateRectangleGridHeight_GridHeight1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Sqrt_ReturnValue = CallFunc_Sqrt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_Multiply_IntInt_ReturnValue1 = CallFunc_Multiply_IntInt_ReturnValue1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue1 = CallFunc_EqualEqual_IntInt_ReturnValue1;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Game_State_Athena = K2Node_DynamicCast_AsFort_Game_State_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCurrentPlaylistName_ReturnValue = CallFunc_GetCurrentPlaylistName_ReturnValue;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);
	if (bShouldResize != nullptr)
		*bShouldResize = Parms.bShouldResize;

	if (NumColumns != nullptr)
		*NumColumns = Parms.NumColumns;

}

// Function AthenaEventMatchPlayerGridScreen.AthenaEventMatchPlayerGridScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaEventMatchPlayerGridScreen_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaEventMatchPlayerGridScreen_C", "Construct");

	Params::UAthenaEventMatchPlayerGridScreen_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchPlayerGridScreen.AthenaEventMatchPlayerGridScreen_C.BndEvt__ActivePlayersButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UAthenaEventMatchPlayerGridScreen_C::BndEvt__ActivePlayersButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("AthenaEventMatchPlayerGridScreen_C", "BndEvt__ActivePlayersButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature");

	Params::UAthenaEventMatchPlayerGridScreen_C_BndEvt__ActivePlayersButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchPlayerGridScreen.AthenaEventMatchPlayerGridScreen_C.BndEvt__DeadPlayersButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UAthenaEventMatchPlayerGridScreen_C::BndEvt__DeadPlayersButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("AthenaEventMatchPlayerGridScreen_C", "BndEvt__DeadPlayersButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	Params::UAthenaEventMatchPlayerGridScreen_C_BndEvt__DeadPlayersButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchPlayerGridScreen.AthenaEventMatchPlayerGridScreen_C.OnTeamDied_BP
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaEventMatchTeamWidgetBase*NewlyDeadTeamWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaEventMatchPlayerGridScreen_C::OnTeamDied_BP(class UAthenaEventMatchTeamWidgetBase* NewlyDeadTeamWidget)
{
	static auto Func = Class->GetFunction("AthenaEventMatchPlayerGridScreen_C", "OnTeamDied_BP");

	Params::UAthenaEventMatchPlayerGridScreen_C_OnTeamDied_BP_Params Parms;
	Parms.NewlyDeadTeamWidget = NewlyDeadTeamWidget;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchPlayerGridScreen.AthenaEventMatchPlayerGridScreen_C.OnTeamAdded_BP
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaEventMatchTeamWidgetBase*NewlyAddedTeamWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaEventMatchPlayerGridScreen_C::OnTeamAdded_BP(class UAthenaEventMatchTeamWidgetBase* NewlyAddedTeamWidget)
{
	static auto Func = Class->GetFunction("AthenaEventMatchPlayerGridScreen_C", "OnTeamAdded_BP");

	Params::UAthenaEventMatchPlayerGridScreen_C_OnTeamAdded_BP_Params Parms;
	Parms.NewlyAddedTeamWidget = NewlyAddedTeamWidget;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchPlayerGridScreen.AthenaEventMatchPlayerGridScreen_C.ShowActivePlayers
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaEventMatchPlayerGridScreen_C::ShowActivePlayers()
{
	static auto Func = Class->GetFunction("AthenaEventMatchPlayerGridScreen_C", "ShowActivePlayers");

	Params::UAthenaEventMatchPlayerGridScreen_C_ShowActivePlayers_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchPlayerGridScreen.AthenaEventMatchPlayerGridScreen_C.ShowEliminatedPlayers
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaEventMatchPlayerGridScreen_C::ShowEliminatedPlayers()
{
	static auto Func = Class->GetFunction("AthenaEventMatchPlayerGridScreen_C", "ShowEliminatedPlayers");

	Params::UAthenaEventMatchPlayerGridScreen_C_ShowEliminatedPlayers_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchPlayerGridScreen.AthenaEventMatchPlayerGridScreen_C.ExecuteUbergraph_AthenaEventMatchPlayerGridScreen
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldResizeActiveGrid_bShouldResize                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_ShouldResizeActiveGrid_NumColumns                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldResizeActiveGrid_bShouldResize1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_ShouldResizeActiveGrid_NumColumns1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaEventMatchTeamWidgetBase*K2Node_Event_NewlyDeadTeamWidget                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaEventMatchTeamWidgetBase*K2Node_Event_NewlyAddedTeamWidget                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortReplaySpectatorAthena*  K2Node_DynamicCast_AsFort_Replay_Spectator_Athena                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UAthenaEventMatchTeamWidgetBase*>CallFunc_Map_Values_Values                                       (ZeroConstructor, ReferenceParm)
// class UAthenaEventMatchTeamWidgetBase*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaEventMatchPlayerWidgetBase*CallFunc_Array_Get_Item1                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaEventMatchPlayerGridPlayerWidget_C*K2Node_DynamicCast_AsAthena_Event_Match_Player_Grid_Player_Widget(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaEventMatchPlayerGridScreen_C::ExecuteUbergraph_AthenaEventMatchPlayerGridScreen(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable1, int32 CallFunc_Add_IntInt_ReturnValue1, int32 Temp_int_Array_Index_Variable1, bool CallFunc_ShouldResizeActiveGrid_bShouldResize, int32 CallFunc_ShouldResizeActiveGrid_NumColumns, bool CallFunc_ShouldResizeActiveGrid_bShouldResize1, int32 CallFunc_ShouldResizeActiveGrid_NumColumns1, enum class ESlateVisibility Temp_byte_Variable, class UAthenaEventMatchTeamWidgetBase* K2Node_Event_NewlyDeadTeamWidget, class UAthenaEventMatchTeamWidgetBase* K2Node_Event_NewlyAddedTeamWidget, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortReplaySpectatorAthena* K2Node_DynamicCast_AsFort_Replay_Spectator_Athena, bool K2Node_DynamicCast_bSuccess, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default, TArray<class UAthenaEventMatchTeamWidgetBase*>& CallFunc_Map_Values_Values, class UAthenaEventMatchTeamWidgetBase* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UAthenaEventMatchPlayerWidgetBase* CallFunc_Array_Get_Item1, class UAthenaEventMatchPlayerGridPlayerWidget_C* K2Node_DynamicCast_AsAthena_Event_Match_Player_Grid_Player_Widget, bool K2Node_DynamicCast_bSuccess1, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue1)
{
	static auto Func = Class->GetFunction("AthenaEventMatchPlayerGridScreen_C", "ExecuteUbergraph_AthenaEventMatchPlayerGridScreen");

	Params::UAthenaEventMatchPlayerGridScreen_C_ExecuteUbergraph_AthenaEventMatchPlayerGridScreen_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable1 = Temp_int_Loop_Counter_Variable1;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.Temp_int_Array_Index_Variable1 = Temp_int_Array_Index_Variable1;
	Parms.CallFunc_ShouldResizeActiveGrid_bShouldResize = CallFunc_ShouldResizeActiveGrid_bShouldResize;
	Parms.CallFunc_ShouldResizeActiveGrid_NumColumns = CallFunc_ShouldResizeActiveGrid_NumColumns;
	Parms.CallFunc_ShouldResizeActiveGrid_bShouldResize1 = CallFunc_ShouldResizeActiveGrid_bShouldResize1;
	Parms.CallFunc_ShouldResizeActiveGrid_NumColumns1 = CallFunc_ShouldResizeActiveGrid_NumColumns1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Event_NewlyDeadTeamWidget = K2Node_Event_NewlyDeadTeamWidget;
	Parms.K2Node_Event_NewlyAddedTeamWidget = K2Node_Event_NewlyAddedTeamWidget;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Replay_Spectator_Athena = K2Node_DynamicCast_AsFort_Replay_Spectator_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.K2Node_DynamicCast_AsAthena_Event_Match_Player_Grid_Player_Widget = K2Node_DynamicCast_AsAthena_Event_Match_Player_Grid_Player_Widget;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_Less_IntInt_ReturnValue1 = CallFunc_Less_IntInt_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
