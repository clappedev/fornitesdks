#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function MissionActivationWidget.MissionActivationWidget_C.HandleCloseDetailsPanelAnimFinished
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionActivationWidget_C::HandleCloseDetailsPanelAnimFinished(bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("MissionActivationWidget_C", "HandleCloseDetailsPanelAnimFinished");

	Params::UMissionActivationWidget_C_HandleCloseDetailsPanelAnimFinished_Params Parms;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function MissionActivationWidget.MissionActivationWidget_C.GetMissionObjectiveRemainingTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetMissionObjectiveTimeRemaining_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UMissionActivationWidget_C::GetMissionObjectiveRemainingTime(bool CallFunc_IsValid_ReturnValue, float CallFunc_GetMissionObjectiveTimeRemaining_ReturnValue)
{
	static auto Func = Class->GetFunction("MissionActivationWidget_C", "GetMissionObjectiveRemainingTime");

	Params::UMissionActivationWidget_C_GetMissionObjectiveRemainingTime_Params Parms;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetMissionObjectiveTimeRemaining_ReturnValue = CallFunc_GetMissionObjectiveTimeRemaining_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	return Parms.ReturnValue;

}

// Function MissionActivationWidget.MissionActivationWidget_C.UpdateButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bEnabled                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bLockedOut                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionActivationWidget_C::UpdateButton(class UCommonButton* Button, bool bEnabled, bool bLockedOut, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue1)
{
	static auto Func = Class->GetFunction("MissionActivationWidget_C", "UpdateButton");

	Params::UMissionActivationWidget_C_UpdateButton_Params Parms;
	Parms.Button = Button;
	Parms.bEnabled = bEnabled;
	Parms.bLockedOut = bLockedOut;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue1 = CallFunc_Not_PreBool_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);
}

// Function MissionActivationWidget.MissionActivationWidget_C.StartNextState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortMissionActivationWidgetStateLocalNextState                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionActivationWidget_C::StartNextState(enum class EFortMissionActivationWidgetState LocalNextState)
{
	static auto Func = Class->GetFunction("MissionActivationWidget_C", "StartNextState");

	Params::UMissionActivationWidget_C_StartNextState_Params Parms;
	Parms.LocalNextState = LocalNextState;

	UObject::ProcessEvent(Func, &Parms);
}

// Function MissionActivationWidget.MissionActivationWidget_C.UnbindEvents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)

void UMissionActivationWidget_C::UnbindEvents(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2)
{
	static auto Func = Class->GetFunction("MissionActivationWidget_C", "UnbindEvents");

	Params::UMissionActivationWidget_C_UnbindEvents_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;

	UObject::ProcessEvent(Func, &Parms);
}

// Function MissionActivationWidget.MissionActivationWidget_C.BindEvents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)

void UMissionActivationWidget_C::BindEvents(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2)
{
	static auto Func = Class->GetFunction("MissionActivationWidget_C", "BindEvents");

	Params::UMissionActivationWidget_C_BindEvents_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;

	UObject::ProcessEvent(Func, &Parms);
}

// Function MissionActivationWidget.MissionActivationWidget_C.UpdateObjectiveReadyTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              RemainingTime                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               ()
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_TimeSecondsToText_ReturnValue                           ()
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetMissionObjectiveTimeRemaining_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            ()

void UMissionActivationWidget_C::UpdateObjectiveReadyTime(float RemainingTime, class FText Temp_text_Variable, bool Temp_bool_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_TimeSecondsToText_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_GetMissionObjectiveTimeRemaining_ReturnValue, class FText K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("MissionActivationWidget_C", "UpdateObjectiveReadyTime");

	Params::UMissionActivationWidget_C_UpdateObjectiveReadyTime_Params Parms;
	Parms.RemainingTime = RemainingTime;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_TimeSecondsToText_ReturnValue = CallFunc_TimeSecondsToText_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetMissionObjectiveTimeRemaining_ReturnValue = CallFunc_GetMissionObjectiveTimeRemaining_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
}

// Function MissionActivationWidget.MissionActivationWidget_C.SetBluGloRequirementHint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              BlugloRequirement                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            ()

void UMissionActivationWidget_C::SetBluGloRequirementHint(int32 BlugloRequirement, class FText Temp_text_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Format_ReturnValue, bool Temp_bool_Variable, class FText K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("MissionActivationWidget_C", "SetBluGloRequirementHint");

	Params::UMissionActivationWidget_C_SetBluGloRequirementHint_Params Parms;
	Parms.BlugloRequirement = BlugloRequirement;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
}

// Function MissionActivationWidget.MissionActivationWidget_C.UpdatePanelButtonInteractability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ButtonsEnabled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               UpdateLockoutDisplay                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ForceUpdateFocus                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               TryFocusIncreaseDifficulty                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IncreaseDifficultyLocked                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               StartObjectiveLocked                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanXOR_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortMissionActivationWidgetStateCallFunc_GetCurrentState_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelButton_C*              K2Node_Select1_Default                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select2_Default                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortVoteType           CallFunc_GetMissionVoteType_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVoteLocked_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVoteLocked_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionActivationWidget_C::UpdatePanelButtonInteractability(bool ButtonsEnabled, bool UpdateLockoutDisplay, bool ForceUpdateFocus, bool TryFocusIncreaseDifficulty, bool IncreaseDifficultyLocked, bool StartObjectiveLocked, bool CallFunc_BooleanAND_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_BooleanXOR_ReturnValue, enum class EFortMissionActivationWidgetState CallFunc_GetCurrentState_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool Temp_bool_Variable, bool CallFunc_NotEqual_BoolBool_ReturnValue, class UWidget* K2Node_Select_Default, bool Temp_bool_Variable1, bool Temp_bool_Variable2, class UPanelButton_C* K2Node_Select1_Default, class UWidget* K2Node_Select2_Default, bool CallFunc_NotEqual_BoolBool_ReturnValue1, enum class EFortVoteType CallFunc_GetMissionVoteType_ReturnValue, bool CallFunc_IsVoteLocked_ReturnValue, bool CallFunc_IsVoteLocked_ReturnValue1)
{
	static auto Func = Class->GetFunction("MissionActivationWidget_C", "UpdatePanelButtonInteractability");

	Params::UMissionActivationWidget_C_UpdatePanelButtonInteractability_Params Parms;
	Parms.ButtonsEnabled = ButtonsEnabled;
	Parms.UpdateLockoutDisplay = UpdateLockoutDisplay;
	Parms.ForceUpdateFocus = ForceUpdateFocus;
	Parms.TryFocusIncreaseDifficulty = TryFocusIncreaseDifficulty;
	Parms.IncreaseDifficultyLocked = IncreaseDifficultyLocked;
	Parms.StartObjectiveLocked = StartObjectiveLocked;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_BooleanXOR_ReturnValue = CallFunc_BooleanXOR_ReturnValue;
	Parms.CallFunc_GetCurrentState_ReturnValue = CallFunc_GetCurrentState_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue1 = CallFunc_BooleanOR_ReturnValue1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue1 = CallFunc_NotEqual_BoolBool_ReturnValue1;
	Parms.CallFunc_GetMissionVoteType_ReturnValue = CallFunc_GetMissionVoteType_ReturnValue;
	Parms.CallFunc_IsVoteLocked_ReturnValue = CallFunc_IsVoteLocked_ReturnValue;
	Parms.CallFunc_IsVoteLocked_ReturnValue1 = CallFunc_IsVoteLocked_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);
}

// Function MissionActivationWidget.MissionActivationWidget_C.OnStateUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EFortMissionActivationWidgetStateActiveState                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortMissionActivationWidgetStatePreviousState                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionActivationWidget_C::OnStateUpdated(enum class EFortMissionActivationWidgetState ActiveState, enum class EFortMissionActivationWidgetState PreviousState)
{
	static auto Func = Class->GetFunction("MissionActivationWidget_C", "OnStateUpdated");

	Params::UMissionActivationWidget_C_OnStateUpdated_Params Parms;
	Parms.ActiveState = ActiveState;
	Parms.PreviousState = PreviousState;

	UObject::ProcessEvent(Func, &Parms);
}

// Function MissionActivationWidget.MissionActivationWidget_C.OnVoteLockoutChangedBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EFortVoteType           VoteType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsLocked                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionActivationWidget_C::OnVoteLockoutChangedBP(enum class EFortVoteType VoteType, bool bIsLocked)
{
	static auto Func = Class->GetFunction("MissionActivationWidget_C", "OnVoteLockoutChangedBP");

	Params::UMissionActivationWidget_C_OnVoteLockoutChangedBP_Params Parms;
	Parms.VoteType = VoteType;
	Parms.bIsLocked = bIsLocked;

	UObject::ProcessEvent(Func, &Parms);
}

// Function MissionActivationWidget.MissionActivationWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMissionActivationWidget_C::Construct()
{
	static auto Func = Class->GetFunction("MissionActivationWidget_C", "Construct");

	Params::UMissionActivationWidget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function MissionActivationWidget.MissionActivationWidget_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionActivationWidget_C::BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MissionActivationWidget_C", "BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::UMissionActivationWidget_C_BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

// Function MissionActivationWidget.MissionActivationWidget_C.BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_72_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionActivationWidget_C::BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_72_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MissionActivationWidget_C", "BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_72_CommonButtonClicked__DelegateSignature");

	Params::UMissionActivationWidget_C_BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_72_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

// Function MissionActivationWidget.MissionActivationWidget_C.BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_94_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionActivationWidget_C::BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_94_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MissionActivationWidget_C", "BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_94_CommonButtonClicked__DelegateSignature");

	Params::UMissionActivationWidget_C_BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_94_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

// Function MissionActivationWidget.MissionActivationWidget_C.BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_233_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionActivationWidget_C::BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_233_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MissionActivationWidget_C", "BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_233_CommonButtonClicked__DelegateSignature");

	Params::UMissionActivationWidget_C_BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_233_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

// Function MissionActivationWidget.MissionActivationWidget_C.BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_246_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionActivationWidget_C::BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_246_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MissionActivationWidget_C", "BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_246_CommonButtonClicked__DelegateSignature");

	Params::UMissionActivationWidget_C_BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_246_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

// Function MissionActivationWidget.MissionActivationWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMissionActivationWidget_C::Destruct()
{
	static auto Func = Class->GetFunction("MissionActivationWidget_C", "Destruct");

	Params::UMissionActivationWidget_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function MissionActivationWidget.MissionActivationWidget_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMissionActivationWidget_C::OnActivated()
{
	static auto Func = Class->GetFunction("MissionActivationWidget_C", "OnActivated");

	Params::UMissionActivationWidget_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function MissionActivationWidget.MissionActivationWidget_C.BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_52_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionActivationWidget_C::BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_52_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MissionActivationWidget_C", "BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_52_CommonButtonClicked__DelegateSignature");

	Params::UMissionActivationWidget_C_BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_52_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

// Function MissionActivationWidget.MissionActivationWidget_C.BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_59_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionActivationWidget_C::BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_59_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("MissionActivationWidget_C", "BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_59_CommonButtonClicked__DelegateSignature");

	Params::UMissionActivationWidget_C_BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_59_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

// Function MissionActivationWidget.MissionActivationWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionActivationWidget_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("MissionActivationWidget_C", "PreConstruct");

	Params::UMissionActivationWidget_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

// Function MissionActivationWidget.MissionActivationWidget_C.HandleOnRecepientVoted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMissionActivationWidget_C::HandleOnRecepientVoted()
{
	static auto Func = Class->GetFunction("MissionActivationWidget_C", "HandleOnRecepientVoted");

	Params::UMissionActivationWidget_C_HandleOnRecepientVoted_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function MissionActivationWidget.MissionActivationWidget_C.HandleVoteResultFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortVoteType           VoteType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionActivationWidget_C::HandleVoteResultFinished(enum class EFortVoteType VoteType, bool Success)
{
	static auto Func = Class->GetFunction("MissionActivationWidget_C", "HandleVoteResultFinished");

	Params::UMissionActivationWidget_C_HandleVoteResultFinished_Params Parms;
	Parms.VoteType = VoteType;
	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);
}

// Function MissionActivationWidget.MissionActivationWidget_C.OnBeginIntro
// (Event, Public, BlueprintEvent)
// Parameters:

void UMissionActivationWidget_C::OnBeginIntro()
{
	static auto Func = Class->GetFunction("MissionActivationWidget_C", "OnBeginIntro");

	Params::UMissionActivationWidget_C_OnBeginIntro_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function MissionActivationWidget.MissionActivationWidget_C.OnBeginOutro
// (Event, Public, BlueprintEvent)
// Parameters:

void UMissionActivationWidget_C::OnBeginOutro()
{
	static auto Func = Class->GetFunction("MissionActivationWidget_C", "OnBeginOutro");

	Params::UMissionActivationWidget_C_OnBeginOutro_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function MissionActivationWidget.MissionActivationWidget_C.OnActiveVoteChangedBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EFortVoteType           VoteType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsVoteActive                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              VoteResult                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionActivationWidget_C::OnActiveVoteChangedBP(enum class EFortVoteType VoteType, bool bIsVoteActive, int32 VoteResult)
{
	static auto Func = Class->GetFunction("MissionActivationWidget_C", "OnActiveVoteChangedBP");

	Params::UMissionActivationWidget_C_OnActiveVoteChangedBP_Params Parms;
	Parms.VoteType = VoteType;
	Parms.bIsVoteActive = bIsVoteActive;
	Parms.VoteResult = VoteResult;

	UObject::ProcessEvent(Func, &Parms);
}

// Function MissionActivationWidget.MissionActivationWidget_C.ExecuteUbergraph_MissionActivationWidget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortMissionActivationWidgetStateK2Node_Event_ActiveState                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortMissionActivationWidgetStateK2Node_Event_PreviousState                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum1_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOverlaySlot*                CallFunc_SlotAsOverlaySlot_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_SlotAsOverlaySlot_ReturnValue1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortVoteType           CallFunc_GetMissionVoteType_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortVoteType           K2Node_Event_VoteType1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsLocked                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortMissionActivationWidgetStateCallFunc_GetCurrentState_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortVoteType           CallFunc_GetMissionVoteType_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlayerVoteInstigator_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVoteActive_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlayerVoteInstigator_ReturnValue1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVoteActive_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button6                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button5                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button4                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button3                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button2                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortMissionActivationWidgetStateCallFunc_GetCurrentState_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum2_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetStartObjectiveBluGloRequirement_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetIncreaseDifficultyBluGloRequirement_ReturnValue      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class AFortMission*                CallFunc_GetPrimaryMission_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetMissionName_ReturnValue                              ()
// class FText                        CallFunc_TextToUpper_ReturnValue                                 ()
// class AFortMission*                CallFunc_GetPrimaryMission_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMissionInfo*            CallFunc_GetPrimaryMissionInfo_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInteractionEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInteractionEnabled_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnyVoteActive_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortVoteType           K2Node_CustomEvent_VoteType                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Success                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum3_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlayerVoteInstigator_ReturnValue2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue2                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortObjectiveBase*          CallFunc_GetObjectiveByHandle_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGenericObjective_ReadyUp_C* K2Node_DynamicCast_AsGeneric_Objective_Ready_Up                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortVoteType           K2Node_Event_VoteType                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsVoteActive                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_VoteResult                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInteractionEnabled_ReturnValue2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInteractionEnabled_ReturnValue3                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMissionActivationWidget_C::ExecuteUbergraph_MissionActivationWidget(int32 EntryPoint, enum class EFortMissionActivationWidgetState K2Node_Event_ActiveState, enum class EFortMissionActivationWidgetState K2Node_Event_PreviousState, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum1_CmpSuccess, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue1, bool CallFunc_IsValid_ReturnValue, enum class EFortVoteType CallFunc_GetMissionVoteType_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UFortHUDContext* CallFunc_GetContext_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue1, enum class EFortVoteType K2Node_Event_VoteType1, bool K2Node_Event_bIsLocked, enum class EFortMissionActivationWidgetState CallFunc_GetCurrentState_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EFortVoteType CallFunc_GetMissionVoteType_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_IsPlayerVoteInstigator_ReturnValue, bool CallFunc_IsVoteActive_ReturnValue, bool CallFunc_IsPlayerVoteInstigator_ReturnValue1, bool CallFunc_IsVoteActive_ReturnValue1, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default, class UCommonButton* K2Node_ComponentBoundEvent_Button6, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button5, class UCommonButton* K2Node_ComponentBoundEvent_Button4, class UCommonButton* K2Node_ComponentBoundEvent_Button3, class UCommonButton* K2Node_ComponentBoundEvent_Button2, enum class ESlateVisibility Temp_byte_Variable2, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool K2Node_Event_IsDesignTime, enum class EFortMissionActivationWidgetState CallFunc_GetCurrentState_ReturnValue1, bool K2Node_SwitchEnum2_CmpSuccess, int32 CallFunc_GetStartObjectiveBluGloRequirement_ReturnValue, int32 CallFunc_GetIncreaseDifficultyBluGloRequirement_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AFortMission* CallFunc_GetPrimaryMission_ReturnValue, enum class ESlateVisibility Temp_byte_Variable3, class FText CallFunc_GetMissionName_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, class AFortMission* CallFunc_GetPrimaryMission_ReturnValue1, class UFortMissionInfo* CallFunc_GetPrimaryMissionInfo_ReturnValue, bool CallFunc_IsInteractionEnabled_ReturnValue, bool CallFunc_IsInteractionEnabled_ReturnValue1, bool Temp_bool_Variable1, float Temp_float_Variable, enum class ESlateVisibility K2Node_Select1_Default, bool CallFunc_IsAnyVoteActive_ReturnValue, enum class EFortVoteType K2Node_CustomEvent_VoteType, bool K2Node_CustomEvent_Success, bool K2Node_SwitchEnum3_CmpSuccess, bool CallFunc_IsPlayerVoteInstigator_ReturnValue2, float Temp_float_Variable1, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue2, bool Temp_bool_Variable2, float Temp_float_Variable2, float K2Node_Select2_Default, float Temp_float_Variable3, bool Temp_bool_Variable3, class AFortObjectiveBase* CallFunc_GetObjectiveByHandle_ReturnValue, float K2Node_Select3_Default, class AGenericObjective_ReadyUp_C* K2Node_DynamicCast_AsGeneric_Objective_Ready_Up, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue2, enum class EFortVoteType K2Node_Event_VoteType, bool K2Node_Event_bIsVoteActive, int32 K2Node_Event_VoteResult, bool CallFunc_IsInteractionEnabled_ReturnValue2, bool CallFunc_IsInteractionEnabled_ReturnValue3)
{
	static auto Func = Class->GetFunction("MissionActivationWidget_C", "ExecuteUbergraph_MissionActivationWidget");

	Params::UMissionActivationWidget_C_ExecuteUbergraph_MissionActivationWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ActiveState = K2Node_Event_ActiveState;
	Parms.K2Node_Event_PreviousState = K2Node_Event_PreviousState;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum1_CmpSuccess = K2Node_SwitchEnum1_CmpSuccess;
	Parms.CallFunc_SlotAsOverlaySlot_ReturnValue = CallFunc_SlotAsOverlaySlot_ReturnValue;
	Parms.CallFunc_SlotAsOverlaySlot_ReturnValue1 = CallFunc_SlotAsOverlaySlot_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetMissionVoteType_ReturnValue = CallFunc_GetMissionVoteType_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.K2Node_Event_VoteType1 = K2Node_Event_VoteType1;
	Parms.K2Node_Event_bIsLocked = K2Node_Event_bIsLocked;
	Parms.CallFunc_GetCurrentState_ReturnValue = CallFunc_GetCurrentState_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetMissionVoteType_ReturnValue1 = CallFunc_GetMissionVoteType_ReturnValue1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue1 = CallFunc_Not_PreBool_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue1 = CallFunc_BooleanOR_ReturnValue1;
	Parms.CallFunc_IsPlayerVoteInstigator_ReturnValue = CallFunc_IsPlayerVoteInstigator_ReturnValue;
	Parms.CallFunc_IsVoteActive_ReturnValue = CallFunc_IsVoteActive_ReturnValue;
	Parms.CallFunc_IsPlayerVoteInstigator_ReturnValue1 = CallFunc_IsPlayerVoteInstigator_ReturnValue1;
	Parms.CallFunc_IsVoteActive_ReturnValue1 = CallFunc_IsVoteActive_ReturnValue1;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_ComponentBoundEvent_Button6 = K2Node_ComponentBoundEvent_Button6;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button5 = K2Node_ComponentBoundEvent_Button5;
	Parms.K2Node_ComponentBoundEvent_Button4 = K2Node_ComponentBoundEvent_Button4;
	Parms.K2Node_ComponentBoundEvent_Button3 = K2Node_ComponentBoundEvent_Button3;
	Parms.K2Node_ComponentBoundEvent_Button2 = K2Node_ComponentBoundEvent_Button2;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_ComponentBoundEvent_Button1 = K2Node_ComponentBoundEvent_Button1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetCurrentState_ReturnValue1 = CallFunc_GetCurrentState_ReturnValue1;
	Parms.K2Node_SwitchEnum2_CmpSuccess = K2Node_SwitchEnum2_CmpSuccess;
	Parms.CallFunc_GetStartObjectiveBluGloRequirement_ReturnValue = CallFunc_GetStartObjectiveBluGloRequirement_ReturnValue;
	Parms.CallFunc_GetIncreaseDifficultyBluGloRequirement_ReturnValue = CallFunc_GetIncreaseDifficultyBluGloRequirement_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue1 = CallFunc_GetUIManagerWidget_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetPrimaryMission_ReturnValue = CallFunc_GetPrimaryMission_ReturnValue;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.CallFunc_GetMissionName_ReturnValue = CallFunc_GetMissionName_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_GetPrimaryMission_ReturnValue1 = CallFunc_GetPrimaryMission_ReturnValue1;
	Parms.CallFunc_GetPrimaryMissionInfo_ReturnValue = CallFunc_GetPrimaryMissionInfo_ReturnValue;
	Parms.CallFunc_IsInteractionEnabled_ReturnValue = CallFunc_IsInteractionEnabled_ReturnValue;
	Parms.CallFunc_IsInteractionEnabled_ReturnValue1 = CallFunc_IsInteractionEnabled_ReturnValue1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_IsAnyVoteActive_ReturnValue = CallFunc_IsAnyVoteActive_ReturnValue;
	Parms.K2Node_CustomEvent_VoteType = K2Node_CustomEvent_VoteType;
	Parms.K2Node_CustomEvent_Success = K2Node_CustomEvent_Success;
	Parms.K2Node_SwitchEnum3_CmpSuccess = K2Node_SwitchEnum3_CmpSuccess;
	Parms.CallFunc_IsPlayerVoteInstigator_ReturnValue2 = CallFunc_IsPlayerVoteInstigator_ReturnValue2;
	Parms.Temp_float_Variable1 = Temp_float_Variable1;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue2 = CallFunc_GetUIManagerWidget_ReturnValue2;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_float_Variable2 = Temp_float_Variable2;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.Temp_float_Variable3 = Temp_float_Variable3;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.CallFunc_GetObjectiveByHandle_ReturnValue = CallFunc_GetObjectiveByHandle_ReturnValue;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.K2Node_DynamicCast_AsGeneric_Objective_Ready_Up = K2Node_DynamicCast_AsGeneric_Objective_Ready_Up;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;
	Parms.K2Node_Event_VoteType = K2Node_Event_VoteType;
	Parms.K2Node_Event_bIsVoteActive = K2Node_Event_bIsVoteActive;
	Parms.K2Node_Event_VoteResult = K2Node_Event_VoteResult;
	Parms.CallFunc_IsInteractionEnabled_ReturnValue2 = CallFunc_IsInteractionEnabled_ReturnValue2;
	Parms.CallFunc_IsInteractionEnabled_ReturnValue3 = CallFunc_IsInteractionEnabled_ReturnValue3;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
