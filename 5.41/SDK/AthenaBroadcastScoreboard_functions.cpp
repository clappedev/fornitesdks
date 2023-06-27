#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.UpdateListUI
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UAthenaSpectatorScoreboardRowData*Local_SelectedRow                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaSpectatorScoreboardRowData*CallFunc_RetrieveSpectatorTargetRowData_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_BP_GetSelectedItem_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaSpectatorScoreboardRowData*K2Node_DynamicCast_AsAthena_Spectator_Scoreboard_Row_Data        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaSpectatorScoreboardRowData*K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAthenaBroadcastScoreboard_C::UpdateListUI(class UAthenaSpectatorScoreboardRowData* Local_SelectedRow, class UAthenaSpectatorScoreboardRowData* CallFunc_RetrieveSpectatorTargetRowData_ReturnValue, bool Temp_bool_Variable, class UObject* CallFunc_BP_GetSelectedItem_ReturnValue, class UAthenaSpectatorScoreboardRowData* K2Node_DynamicCast_AsAthena_Spectator_Scoreboard_Row_Data, bool K2Node_DynamicCast_bSuccess, class UAthenaSpectatorScoreboardRowData* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AthenaBroadcastScoreboard_C", "UpdateListUI");

	Params::UAthenaBroadcastScoreboard_C_UpdateListUI_Params Parms;
	Parms.Local_SelectedRow = Local_SelectedRow;
	Parms.CallFunc_RetrieveSpectatorTargetRowData_ReturnValue = CallFunc_RetrieveSpectatorTargetRowData_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_BP_GetSelectedItem_ReturnValue = CallFunc_BP_GetSelectedItem_ReturnValue;
	Parms.K2Node_DynamicCast_AsAthena_Spectator_Scoreboard_Row_Data = K2Node_DynamicCast_AsAthena_Spectator_Scoreboard_Row_Data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
	return Parms.ReturnValue;

}

// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.SortByState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bPassThrough                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaBroadcastScoreboard_C::SortByState(bool* bPassThrough)
{
	static auto Func = Class->GetFunction("AthenaBroadcastScoreboard_C", "SortByState");

	Params::UAthenaBroadcastScoreboard_C_SortByState_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;

}

// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.SortByName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bPassThrough                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaBroadcastScoreboard_C::SortByName(bool* bPassThrough)
{
	static auto Func = Class->GetFunction("AthenaBroadcastScoreboard_C", "SortByName");

	Params::UAthenaBroadcastScoreboard_C_SortByName_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;

}

// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.SortByTeam
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bPassThrough                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaBroadcastScoreboard_C::SortByTeam(bool* bPassThrough)
{
	static auto Func = Class->GetFunction("AthenaBroadcastScoreboard_C", "SortByTeam");

	Params::UAthenaBroadcastScoreboard_C_SortByTeam_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;

}

// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.SortByKills
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bPassThrough                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaBroadcastScoreboard_C::SortByKills(bool* bPassThrough)
{
	static auto Func = Class->GetFunction("AthenaBroadcastScoreboard_C", "SortByKills");

	Params::UAthenaBroadcastScoreboard_C_SortByKills_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;

}

// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.SetArrowStates
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      Local_CurrentSortArrow                                           (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      Temp_object_Variable                                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EScoreboardSortMethod   Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaBroadcastScoreboard_C::SetArrowStates(class UImage* Local_CurrentSortArrow, class UImage* Temp_object_Variable, int32 Temp_int_Array_Index_Variable, enum class EScoreboardSortMethod Temp_byte_Variable, int32 Temp_int_Loop_Counter_Variable, class UImage* K2Node_Select_Default, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UImage* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaBroadcastScoreboard_C", "SetArrowStates");

	Params::UAthenaBroadcastScoreboard_C_SetArrowStates_Params Parms;
	Parms.Local_CurrentSortArrow = Local_CurrentSortArrow;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.SetButtonStates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UIconTextButton_C*           Local_CurrentSortButton                                          (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconTextButton_C*           Temp_object_Variable                                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EScoreboardSortMethod   Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconTextButton_C*           K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconTextButton_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaBroadcastScoreboard_C::SetButtonStates(class UIconTextButton_C* Local_CurrentSortButton, class UIconTextButton_C* Temp_object_Variable, int32 Temp_int_Array_Index_Variable, enum class EScoreboardSortMethod Temp_byte_Variable, int32 Temp_int_Loop_Counter_Variable, class UIconTextButton_C* K2Node_Select_Default, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UIconTextButton_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaBroadcastScoreboard_C", "SetButtonStates");

	Params::UAthenaBroadcastScoreboard_C_SetButtonStates_Params Parms;
	Parms.Local_CurrentSortButton = Local_CurrentSortButton;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.IsMapWidgetLocationVisible
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FVector2D                   MapWidgetLocation                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsWidgetLocationVisible_Visible                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAthenaBroadcastScoreboard_C::IsMapWidgetLocationVisible(struct FVector2D& MapWidgetLocation, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsWidgetLocationVisible_Visible)
{
	static auto Func = Class->GetFunction("AthenaBroadcastScoreboard_C", "IsMapWidgetLocationVisible");

	Params::UAthenaBroadcastScoreboard_C_IsMapWidgetLocationVisible_Params Parms;
	Parms.MapWidgetLocation = MapWidgetLocation;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsWidgetLocationVisible_Visible = CallFunc_IsWidgetLocationVisible_Visible;

	UObject::ProcessEvent(Func, &Parms);
	return Parms.ReturnValue;

}

// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaBroadcastScoreboard_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaBroadcastScoreboard_C", "Construct");

	Params::UAthenaBroadcastScoreboard_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.BndEvt__SortByKillsButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaBroadcastScoreboard_C::BndEvt__SortByKillsButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaBroadcastScoreboard_C", "BndEvt__SortByKillsButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::UAthenaBroadcastScoreboard_C_BndEvt__SortByKillsButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.BndEvt__SortByNameButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaBroadcastScoreboard_C::BndEvt__SortByNameButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaBroadcastScoreboard_C", "BndEvt__SortByNameButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::UAthenaBroadcastScoreboard_C_BndEvt__SortByNameButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.BndEvt__SortByStateButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaBroadcastScoreboard_C::BndEvt__SortByStateButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaBroadcastScoreboard_C", "BndEvt__SortByStateButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	Params::UAthenaBroadcastScoreboard_C_BndEvt__SortByStateButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.BndEvt__SortByTeamButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaBroadcastScoreboard_C::BndEvt__SortByTeamButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaBroadcastScoreboard_C", "BndEvt__SortByTeamButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature");

	Params::UAthenaBroadcastScoreboard_C_BndEvt__SortByTeamButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.SetSortMethod
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EScoreboardSortMethod   InSortMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaBroadcastScoreboard_C::SetSortMethod(enum class EScoreboardSortMethod InSortMethod)
{
	static auto Func = Class->GetFunction("AthenaBroadcastScoreboard_C", "SetSortMethod");

	Params::UAthenaBroadcastScoreboard_C_SetSortMethod_Params Parms;
	Parms.InSortMethod = InSortMethod;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.ResetFocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaBroadcastScoreboard_C::ResetFocus()
{
	static auto Func = Class->GetFunction("AthenaBroadcastScoreboard_C", "ResetFocus");

	Params::UAthenaBroadcastScoreboard_C_ResetFocus_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.ExecuteUbergraph_AthenaBroadcastScoreboard
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaSpectatorScoreboardRowData*CallFunc_RetrieveSpectatorTargetRowData_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UIconTextButton_C*>   K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// TArray<class UImage*>              K2Node_MakeArray_Array1                                          (ZeroConstructor, ReferenceParm)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button3                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SortByKills_bPassthrough                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button2                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SortByName_bPassthrough                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SortByState_bPassthrough                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SortByTeam_bPassthrough                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EScoreboardSortMethod   K2Node_Event_InSortMethod                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaBroadcastScoreboard_C::ExecuteUbergraph_AthenaBroadcastScoreboard(int32 EntryPoint, class UAthenaSpectatorScoreboardRowData* CallFunc_RetrieveSpectatorTargetRowData_ReturnValue, TArray<class UIconTextButton_C*>& K2Node_MakeArray_Array, TArray<class UImage*>& K2Node_MakeArray_Array1, class UCommonButton* K2Node_ComponentBoundEvent_Button3, bool CallFunc_SortByKills_bPassthrough, class UCommonButton* K2Node_ComponentBoundEvent_Button2, bool CallFunc_SortByName_bPassthrough, class UCommonButton* K2Node_ComponentBoundEvent_Button1, bool CallFunc_SortByState_bPassthrough, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_SortByTeam_bPassthrough, enum class EScoreboardSortMethod K2Node_Event_InSortMethod)
{
	static auto Func = Class->GetFunction("AthenaBroadcastScoreboard_C", "ExecuteUbergraph_AthenaBroadcastScoreboard");

	Params::UAthenaBroadcastScoreboard_C_ExecuteUbergraph_AthenaBroadcastScoreboard_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_RetrieveSpectatorTargetRowData_ReturnValue = CallFunc_RetrieveSpectatorTargetRowData_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array1 = K2Node_MakeArray_Array1;
	Parms.K2Node_ComponentBoundEvent_Button3 = K2Node_ComponentBoundEvent_Button3;
	Parms.CallFunc_SortByKills_bPassthrough = CallFunc_SortByKills_bPassthrough;
	Parms.K2Node_ComponentBoundEvent_Button2 = K2Node_ComponentBoundEvent_Button2;
	Parms.CallFunc_SortByName_bPassthrough = CallFunc_SortByName_bPassthrough;
	Parms.K2Node_ComponentBoundEvent_Button1 = K2Node_ComponentBoundEvent_Button1;
	Parms.CallFunc_SortByState_bPassthrough = CallFunc_SortByState_bPassthrough;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_SortByTeam_bPassthrough = CallFunc_SortByTeam_bPassthrough;
	Parms.K2Node_Event_InSortMethod = K2Node_Event_InSortMethod;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
