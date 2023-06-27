#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.UpdateKeybindWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortKeybindForcedHoldStatusTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortKeybindForcedHoldStatusTemp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortKeybindForcedHoldStatusK2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVoteUpdateNotificationWidget_C::UpdateKeybindWidget(bool bUsingGamepad, enum class EFortKeybindForcedHoldStatus Temp_byte_Variable, enum class EFortKeybindForcedHoldStatus Temp_byte_Variable1, bool Temp_bool_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable1, bool Temp_bool_Variable1, class FName K2Node_Select_Default, enum class EFortKeybindForcedHoldStatus K2Node_Select1_Default)
{
	static auto Func = Class->GetFunction("VoteUpdateNotificationWidget_C", "UpdateKeybindWidget");

	Params::UVoteUpdateNotificationWidget_C_UpdateKeybindWidget_Params Parms;
	Parms.bUsingGamepad = bUsingGamepad;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable1 = Temp_name_Variable1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);
}

// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.UnbindEvents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UVoteUpdateNotificationWidget_C::UnbindEvents(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonUIContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("VoteUpdateNotificationWidget_C", "UnbindEvents");

	Params::UVoteUpdateNotificationWidget_C_UnbindEvents_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);
}

// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.BindEvents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UVoteUpdateNotificationWidget_C::BindEvents(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonUIContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("VoteUpdateNotificationWidget_C", "BindEvents");

	Params::UVoteUpdateNotificationWidget_C_BindEvents_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);
}

// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.UpdateVoteTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetVoteTimeRemaining_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()

void UVoteUpdateNotificationWidget_C::UpdateVoteTimer(int32 CallFunc_GetVoteTimeRemaining_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static auto Func = Class->GetFunction("VoteUpdateNotificationWidget_C", "UpdateVoteTimer");

	Params::UVoteUpdateNotificationWidget_C_UpdateVoteTimer_Params Parms;
	Parms.CallFunc_GetVoteTimeRemaining_ReturnValue = CallFunc_GetVoteTimeRemaining_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.ClearVoteTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UVoteUpdateNotificationWidget_C::ClearVoteTimer()
{
	static auto Func = Class->GetFunction("VoteUpdateNotificationWidget_C", "ClearVoteTimer");

	Params::UVoteUpdateNotificationWidget_C_ClearVoteTimer_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.SetupVoteTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void UVoteUpdateNotificationWidget_C::SetupVoteTimer(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static auto Func = Class->GetFunction("VoteUpdateNotificationWidget_C", "SetupVoteTimer");

	Params::UVoteUpdateNotificationWidget_C_SetupVoteTimer_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.SetupText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortVoteType           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               ()
// class FText                        Temp_text_Variable1                                              ()
// class FText                        Temp_text_Variable2                                              ()
// class FText                        K2Node_Select_Default                                            ()

void UVoteUpdateNotificationWidget_C::SetupText(enum class EFortVoteType Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable1, class FText Temp_text_Variable2, class FText K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("VoteUpdateNotificationWidget_C", "SetupText");

	Params::UVoteUpdateNotificationWidget_C_SetupText_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable1 = Temp_text_Variable1;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
}

// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.UpdateVoteAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasLocalPlayerVoted_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UVoteUpdateNotificationWidget_C::UpdateVoteAction(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_HasLocalPlayerVoted_ReturnValue)
{
	static auto Func = Class->GetFunction("VoteUpdateNotificationWidget_C", "UpdateVoteAction");

	Params::UVoteUpdateNotificationWidget_C_UpdateVoteAction_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_HasLocalPlayerVoted_ReturnValue = CallFunc_HasLocalPlayerVoted_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.UpdateVoteCounts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              YesVoteCount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NoVoteCount                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              No                                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Yes                                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// class FText                        CallFunc_Conv_IntToText_ReturnValue1                             ()

void UVoteUpdateNotificationWidget_C::UpdateVoteCounts(int32 YesVoteCount, int32 NoVoteCount, int32 No, int32 Yes, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue1)
{
	static auto Func = Class->GetFunction("VoteUpdateNotificationWidget_C", "UpdateVoteCounts");

	Params::UVoteUpdateNotificationWidget_C_UpdateVoteCounts_Params Parms;
	Parms.YesVoteCount = YesVoteCount;
	Parms.NoVoteCount = NoVoteCount;
	Parms.No = No;
	Parms.Yes = Yes;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue1 = CallFunc_Conv_IntToText_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);
}

// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.OnVoteUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EFortVoteType           VoteType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              YesVoteCount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NoVoteCount                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVoteUpdateNotificationWidget_C::OnVoteUpdated(enum class EFortVoteType VoteType, int32 YesVoteCount, int32 NoVoteCount)
{
	static auto Func = Class->GetFunction("VoteUpdateNotificationWidget_C", "OnVoteUpdated");

	Params::UVoteUpdateNotificationWidget_C_OnVoteUpdated_Params Parms;
	Parms.VoteType = VoteType;
	Parms.YesVoteCount = YesVoteCount;
	Parms.NoVoteCount = NoVoteCount;

	UObject::ProcessEvent(Func, &Parms);
}

// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.OnVoteStarted
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EFortVoteType           VoteType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortVoteArbitratorType ArbitratorType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              YesVoteCount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NoVoteCount                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVoteUpdateNotificationWidget_C::OnVoteStarted(enum class EFortVoteType VoteType, enum class EFortVoteArbitratorType ArbitratorType, int32 YesVoteCount, int32 NoVoteCount)
{
	static auto Func = Class->GetFunction("VoteUpdateNotificationWidget_C", "OnVoteStarted");

	Params::UVoteUpdateNotificationWidget_C_OnVoteStarted_Params Parms;
	Parms.VoteType = VoteType;
	Parms.ArbitratorType = ArbitratorType;
	Parms.YesVoteCount = YesVoteCount;
	Parms.NoVoteCount = NoVoteCount;

	UObject::ProcessEvent(Func, &Parms);
}

// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.OnVoteEnded
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EFortVoteType           VoteType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortVoteArbitratorType ArbitratorType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               VoteSucceeded                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UVoteUpdateNotificationWidget_C::OnVoteEnded(enum class EFortVoteType VoteType, enum class EFortVoteArbitratorType ArbitratorType, bool VoteSucceeded)
{
	static auto Func = Class->GetFunction("VoteUpdateNotificationWidget_C", "OnVoteEnded");

	Params::UVoteUpdateNotificationWidget_C_OnVoteEnded_Params Parms;
	Parms.VoteType = VoteType;
	Parms.ArbitratorType = ArbitratorType;
	Parms.VoteSucceeded = VoteSucceeded;

	UObject::ProcessEvent(Func, &Parms);
}

// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UVoteUpdateNotificationWidget_C::Construct()
{
	static auto Func = Class->GetFunction("VoteUpdateNotificationWidget_C", "Construct");

	Params::UVoteUpdateNotificationWidget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.BndEvt__VoteAction_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVoteUpdateNotificationWidget_C::BndEvt__VoteAction_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("VoteUpdateNotificationWidget_C", "BndEvt__VoteAction_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature");

	Params::UVoteUpdateNotificationWidget_C_BndEvt__VoteAction_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UVoteUpdateNotificationWidget_C::Destruct()
{
	static auto Func = Class->GetFunction("VoteUpdateNotificationWidget_C", "Destruct");

	Params::UVoteUpdateNotificationWidget_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.HandleOnOpenVoteDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UVoteUpdateNotificationWidget_C::HandleOnOpenVoteDialog()
{
	static auto Func = Class->GetFunction("VoteUpdateNotificationWidget_C", "HandleOnOpenVoteDialog");

	Params::UVoteUpdateNotificationWidget_C_HandleOnOpenVoteDialog_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C.ExecuteUbergraph_VoteUpdateNotificationWidget
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortVoteType           K2Node_Event_VoteType                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortVoteArbitratorType K2Node_Event_ArbitratorType                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_VoteSucceeded                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortVoteType           K2Node_Event_VoteType1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortVoteArbitratorType K2Node_Event_ArbitratorType1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_YesVoteCount                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_NoVoteCount                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMultiplayerVote_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortVoteType           K2Node_Event_VoteType2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_YesVoteCount1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_NoVoteCount1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMissionActivationWidget_C*  CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UVoteUpdateNotificationWidget_C::ExecuteUbergraph_VoteUpdateNotificationWidget(int32 EntryPoint, enum class EFortVoteType K2Node_Event_VoteType, enum class EFortVoteArbitratorType K2Node_Event_ArbitratorType, bool K2Node_Event_VoteSucceeded, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class EFortVoteType K2Node_Event_VoteType1, enum class EFortVoteArbitratorType K2Node_Event_ArbitratorType1, int32 K2Node_Event_YesVoteCount, int32 K2Node_Event_NoVoteCount, bool CallFunc_IsMultiplayerVote_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, enum class EFortVoteType K2Node_Event_VoteType2, int32 K2Node_Event_YesVoteCount1, int32 K2Node_Event_NoVoteCount1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UMissionActivationWidget_C* CallFunc_Create_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue2)
{
	static auto Func = Class->GetFunction("VoteUpdateNotificationWidget_C", "ExecuteUbergraph_VoteUpdateNotificationWidget");

	Params::UVoteUpdateNotificationWidget_C_ExecuteUbergraph_VoteUpdateNotificationWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_VoteType = K2Node_Event_VoteType;
	Parms.K2Node_Event_ArbitratorType = K2Node_Event_ArbitratorType;
	Parms.K2Node_Event_VoteSucceeded = K2Node_Event_VoteSucceeded;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Event_VoteType1 = K2Node_Event_VoteType1;
	Parms.K2Node_Event_ArbitratorType1 = K2Node_Event_ArbitratorType1;
	Parms.K2Node_Event_YesVoteCount = K2Node_Event_YesVoteCount;
	Parms.K2Node_Event_NoVoteCount = K2Node_Event_NoVoteCount;
	Parms.CallFunc_IsMultiplayerVote_ReturnValue = CallFunc_IsMultiplayerVote_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.K2Node_Event_VoteType2 = K2Node_Event_VoteType2;
	Parms.K2Node_Event_YesVoteCount1 = K2Node_Event_YesVoteCount1;
	Parms.K2Node_Event_NoVoteCount1 = K2Node_Event_NoVoteCount1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
