#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function AthenaEventMatchInfoScreen.AthenaEventMatchInfoScreen_C.ToggleEventScoreOnScoreboard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaEventMatchInfoScreen_C::ToggleEventScoreOnScoreboard()
{
	static auto Func = Class->GetFunction("AthenaEventMatchInfoScreen_C", "ToggleEventScoreOnScoreboard");

	Params::UAthenaEventMatchInfoScreen_C_ToggleEventScoreOnScoreboard_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchInfoScreen.AthenaEventMatchInfoScreen_C.ToggleTeamNumbersOnScoreboard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaEventMatchInfoScreen_C::ToggleTeamNumbersOnScoreboard()
{
	static auto Func = Class->GetFunction("AthenaEventMatchInfoScreen_C", "ToggleTeamNumbersOnScoreboard");

	Params::UAthenaEventMatchInfoScreen_C_ToggleTeamNumbersOnScoreboard_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchInfoScreen.AthenaEventMatchInfoScreen_C.ToggleScreenVisibility
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonUserWidget*           InScreen                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bInHideIfAlreadyVisible                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UButton*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUserWidget*           CallFunc_Array_Get_Item1                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue2                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaEventMatchInfoScreen_C::ToggleScreenVisibility(class UCommonUserWidget* InScreen, bool bInHideIfAlreadyVisible, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable1, int32 CallFunc_Add_IntInt_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable1, class UButton* CallFunc_Array_Get_Item, class UCommonUserWidget* CallFunc_Array_Get_Item1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue2, bool CallFunc_NotEqual_ObjectObject_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue1, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsVisible_ReturnValue1)
{
	static auto Func = Class->GetFunction("AthenaEventMatchInfoScreen_C", "ToggleScreenVisibility");

	Params::UAthenaEventMatchInfoScreen_C_ToggleScreenVisibility_Params Parms;
	Parms.InScreen = InScreen;
	Parms.bInHideIfAlreadyVisible = bInHideIfAlreadyVisible;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable1 = Temp_int_Loop_Counter_Variable1;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable1 = Temp_int_Array_Index_Variable1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue1 = CallFunc_EqualEqual_ObjectObject_ReturnValue1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue2 = CallFunc_EqualEqual_ObjectObject_ReturnValue2;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_Less_IntInt_ReturnValue1 = CallFunc_Less_IntInt_ReturnValue1;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue1 = CallFunc_IsVisible_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchInfoScreen.AthenaEventMatchInfoScreen_C.ToggleScoreboardVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaEventMatchInfoScreen_C::ToggleScoreboardVisibility()
{
	static auto Func = Class->GetFunction("AthenaEventMatchInfoScreen_C", "ToggleScoreboardVisibility");

	Params::UAthenaEventMatchInfoScreen_C_ToggleScoreboardVisibility_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchInfoScreen.AthenaEventMatchInfoScreen_C.ToggleMatchStatusVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaEventMatchInfoScreen_C::ToggleMatchStatusVisibility()
{
	static auto Func = Class->GetFunction("AthenaEventMatchInfoScreen_C", "ToggleMatchStatusVisibility");

	Params::UAthenaEventMatchInfoScreen_C_ToggleMatchStatusVisibility_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchInfoScreen.AthenaEventMatchInfoScreen_C.TogglePlayerGridVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInShowActivePlayers                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsActiveGridVisible_bIsVisible                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaEventMatchInfoScreen_C::TogglePlayerGridVisibility(bool bInShowActivePlayers, bool CallFunc_IsActiveGridVisible_bIsVisible, bool CallFunc_EqualEqual_BoolBool_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaEventMatchInfoScreen_C", "TogglePlayerGridVisibility");

	Params::UAthenaEventMatchInfoScreen_C_TogglePlayerGridVisibility_Params Parms;
	Parms.bInShowActivePlayers = bInShowActivePlayers;
	Parms.CallFunc_IsActiveGridVisible_bIsVisible = CallFunc_IsActiveGridVisible_bIsVisible;
	Parms.CallFunc_EqualEqual_BoolBool_ReturnValue = CallFunc_EqualEqual_BoolBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchInfoScreen.AthenaEventMatchInfoScreen_C.SetCurrentScreenSortMethod
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAthenaEventMatchInfoSortMethodInSortMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaEventMatchInfoScreen_C::SetCurrentScreenSortMethod(enum class EAthenaEventMatchInfoSortMethod InSortMethod, bool CallFunc_IsVisible_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaEventMatchInfoScreen_C", "SetCurrentScreenSortMethod");

	Params::UAthenaEventMatchInfoScreen_C_SetCurrentScreenSortMethod_Params Parms;
	Parms.InSortMethod = InSortMethod;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchInfoScreen.AthenaEventMatchInfoScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaEventMatchInfoScreen_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaEventMatchInfoScreen_C", "Construct");

	Params::UAthenaEventMatchInfoScreen_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchInfoScreen.AthenaEventMatchInfoScreen_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaEventMatchInfoScreen_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaEventMatchInfoScreen_C", "BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	Params::UAthenaEventMatchInfoScreen_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchInfoScreen.AthenaEventMatchInfoScreen_C.BndEvt__GridButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UAthenaEventMatchInfoScreen_C::BndEvt__GridButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("AthenaEventMatchInfoScreen_C", "BndEvt__GridButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	Params::UAthenaEventMatchInfoScreen_C_BndEvt__GridButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchInfoScreen.AthenaEventMatchInfoScreen_C.BndEvt__MatchButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UAthenaEventMatchInfoScreen_C::BndEvt__MatchButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("AthenaEventMatchInfoScreen_C", "BndEvt__MatchButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	Params::UAthenaEventMatchInfoScreen_C_BndEvt__MatchButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchInfoScreen.AthenaEventMatchInfoScreen_C.BndEvt__ScoreboardButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UAthenaEventMatchInfoScreen_C::BndEvt__ScoreboardButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("AthenaEventMatchInfoScreen_C", "BndEvt__ScoreboardButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	Params::UAthenaEventMatchInfoScreen_C_BndEvt__ScoreboardButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaEventMatchInfoScreen.AthenaEventMatchInfoScreen_C.ExecuteUbergraph_AthenaEventMatchInfoScreen
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortReplaySpectatorAthena*  K2Node_DynamicCast_AsFort_Replay_Spectator_Athena                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UCommonUserWidget*>   K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// TArray<class UButton*>             K2Node_MakeArray_Array1                                          (ZeroConstructor, ReferenceParm)

void UAthenaEventMatchInfoScreen_C::ExecuteUbergraph_AthenaEventMatchInfoScreen(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class UCommonButton* K2Node_ComponentBoundEvent_Button, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortReplaySpectatorAthena* K2Node_DynamicCast_AsFort_Replay_Spectator_Athena, bool K2Node_DynamicCast_bSuccess, enum class ESlateVisibility K2Node_Select_Default, TArray<class UCommonUserWidget*>& K2Node_MakeArray_Array, TArray<class UButton*>& K2Node_MakeArray_Array1)
{
	static auto Func = Class->GetFunction("AthenaEventMatchInfoScreen_C", "ExecuteUbergraph_AthenaEventMatchInfoScreen");

	Params::UAthenaEventMatchInfoScreen_C_ExecuteUbergraph_AthenaEventMatchInfoScreen_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Replay_Spectator_Athena = K2Node_DynamicCast_AsFort_Replay_Spectator_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array1 = K2Node_MakeArray_Array1;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
