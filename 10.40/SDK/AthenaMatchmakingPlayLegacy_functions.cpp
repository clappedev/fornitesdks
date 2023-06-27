#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.OpenPlayOptions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaMatchmakingOptionsDisplay_v2_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingPlayLegacy_C::OpenPlayOptions(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UAthenaMatchmakingOptionsDisplay_v2_C* CallFunc_Create_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlayLegacy_C", "OpenPlayOptions");

	Params::UAthenaMatchmakingPlayLegacy_C_OpenPlayOptions_Params Parms;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.OnLoaded_624287AB42851447B4164286AAD2D464
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingPlayLegacy_C::OnLoaded_624287AB42851447B4164286AAD2D464(class UClass* Loaded)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlayLegacy_C", "OnLoaded_624287AB42851447B4164286AAD2D464");

	Params::UAthenaMatchmakingPlayLegacy_C_OnLoaded_624287AB42851447B4164286AAD2D464_Params Parms;
	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.OnEventEnded_F383E56A48B455AA313486B6EC801D0D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      EventName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                   TimeUntilEnd                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   TimeSinceBegin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              TimespanRatio                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingPlayLegacy_C::OnEventEnded_F383E56A48B455AA313486B6EC801D0D(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlayLegacy_C", "OnEventEnded_F383E56A48B455AA313486B6EC801D0D");

	Params::UAthenaMatchmakingPlayLegacy_C_OnEventEnded_F383E56A48B455AA313486B6EC801D0D_Params Parms;
	Parms.EventName = EventName;
	Parms.TimeUntilEnd = TimeUntilEnd;
	Parms.TimeSinceBegin = TimeSinceBegin;
	Parms.TimespanRatio = TimespanRatio;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.OnEventUpdated_F383E56A48B455AA313486B6EC801D0D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      EventName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                   TimeUntilEnd                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   TimeSinceBegin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              TimespanRatio                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingPlayLegacy_C::OnEventUpdated_F383E56A48B455AA313486B6EC801D0D(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlayLegacy_C", "OnEventUpdated_F383E56A48B455AA313486B6EC801D0D");

	Params::UAthenaMatchmakingPlayLegacy_C_OnEventUpdated_F383E56A48B455AA313486B6EC801D0D_Params Parms;
	Parms.EventName = EventName;
	Parms.TimeUntilEnd = TimeUntilEnd;
	Parms.TimeSinceBegin = TimeSinceBegin;
	Parms.TimespanRatio = TimespanRatio;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.OnEventActive_F383E56A48B455AA313486B6EC801D0D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      EventName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                   TimeUntilEnd                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   TimeSinceBegin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              TimespanRatio                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingPlayLegacy_C::OnEventActive_F383E56A48B455AA313486B6EC801D0D(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlayLegacy_C", "OnEventActive_F383E56A48B455AA313486B6EC801D0D");

	Params::UAthenaMatchmakingPlayLegacy_C_OnEventActive_F383E56A48B455AA313486B6EC801D0D_Params Parms;
	Parms.EventName = EventName;
	Parms.TimeUntilEnd = TimeUntilEnd;
	Parms.TimeSinceBegin = TimeSinceBegin;
	Parms.TimespanRatio = TimespanRatio;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.OnAvailablePlaylistsUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaMatchmakingPlayLegacy_C::OnAvailablePlaylistsUpdated()
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlayLegacy_C", "OnAvailablePlaylistsUpdated");

	Params::UAthenaMatchmakingPlayLegacy_C_OnAvailablePlaylistsUpdated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.OnSetPlayButtonText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        PlayButtonText                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaMatchmakingPlayLegacy_C::OnSetPlayButtonText(class FText& PlayButtonText)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlayLegacy_C", "OnSetPlayButtonText");

	Params::UAthenaMatchmakingPlayLegacy_C_OnSetPlayButtonText_Params Parms;
	Parms.PlayButtonText = PlayButtonText;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.OnSetCancelButtonText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        CancelButtonText                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaMatchmakingPlayLegacy_C::OnSetCancelButtonText(class FText& CancelButtonText)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlayLegacy_C", "OnSetCancelButtonText");

	Params::UAthenaMatchmakingPlayLegacy_C_OnSetCancelButtonText_Params Parms;
	Parms.CancelButtonText = CancelButtonText;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.PlaylistChanged
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPlaylistFrontEndData       NewPlaylist                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        PlaylistCMSOverrideName                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class EFortLobbyType          LobbyType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingPlayLegacy_C::PlaylistChanged(struct FPlaylistFrontEndData& NewPlaylist, class FText& PlaylistCMSOverrideName, enum class EFortLobbyType LobbyType)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlayLegacy_C", "PlaylistChanged");

	Params::UAthenaMatchmakingPlayLegacy_C_PlaylistChanged_Params Parms;
	Parms.NewPlaylist = NewPlaylist;
	Parms.PlaylistCMSOverrideName = PlaylistCMSOverrideName;
	Parms.LobbyType = LobbyType;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.BndEvt__AthenaMatchmakingModeButton_K2Node_ComponentBoundEvent_42_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingPlayLegacy_C::BndEvt__AthenaMatchmakingModeButton_K2Node_ComponentBoundEvent_42_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlayLegacy_C", "BndEvt__AthenaMatchmakingModeButton_K2Node_ComponentBoundEvent_42_CommonButtonClicked__DelegateSignature");

	Params::UAthenaMatchmakingPlayLegacy_C_BndEvt__AthenaMatchmakingModeButton_K2Node_ComponentBoundEvent_42_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.SetSquadFillText
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               InCurrentSquadFill                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMatchmakingPlayLegacy_C::SetSquadFillText(bool InCurrentSquadFill)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlayLegacy_C", "SetSquadFillText");

	Params::UAthenaMatchmakingPlayLegacy_C_SetSquadFillText_Params Parms;
	Parms.InCurrentSquadFill = InCurrentSquadFill;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.OnNewModeViolatorUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bShouldShow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMatchmakingPlayLegacy_C::OnNewModeViolatorUpdated(bool bShouldShow)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlayLegacy_C", "OnNewModeViolatorUpdated");

	Params::UAthenaMatchmakingPlayLegacy_C_OnNewModeViolatorUpdated_Params Parms;
	Parms.bShouldShow = bShouldShow;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.UpdateCustomViolatorText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        ModeName                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        SubText                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaMatchmakingPlayLegacy_C::UpdateCustomViolatorText(class FText& ModeName, class FText& SubText)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlayLegacy_C", "UpdateCustomViolatorText");

	Params::UAthenaMatchmakingPlayLegacy_C_UpdateCustomViolatorText_Params Parms;
	Parms.ModeName = ModeName;
	Parms.SubText = SubText;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.Animate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaMatchmakingPlayLegacy_C::Animate()
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlayLegacy_C", "Animate");

	Params::UAthenaMatchmakingPlayLegacy_C_Animate_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.OnMatchmakingFinishedBlueprint
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMatchmakingPlayLegacy_C::OnMatchmakingFinishedBlueprint(bool bSuccess)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlayLegacy_C", "OnMatchmakingFinishedBlueprint");

	Params::UAthenaMatchmakingPlayLegacy_C_OnMatchmakingFinishedBlueprint_Params Parms;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.OpenCreativeOptions_NativizeMe
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaMatchmakingPlayLegacy_C::OpenCreativeOptions_NativizeMe()
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlayLegacy_C", "OpenCreativeOptions_NativizeMe");

	Params::UAthenaMatchmakingPlayLegacy_C_OpenCreativeOptions_NativizeMe_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaMatchmakingPlayLegacy_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlayLegacy_C", "Construct");

	Params::UAthenaMatchmakingPlayLegacy_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingPlayLegacy_C::BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlayLegacy_C", "BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::UAthenaMatchmakingPlayLegacy_C_BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.kevin_says_hello
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaMatchmakingPlayLegacy_C::Kevin_says_hello()
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlayLegacy_C", "kevin_says_hello");

	Params::UAthenaMatchmakingPlayLegacy_C_Kevin_says_hello_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.ExecuteUbergraph_AthenaMatchmakingPlayLegacy
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_EventName_2                                   (ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                   K2Node_CustomEvent_TimeUntilEnd_2                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   K2Node_CustomEvent_TimeSinceBegin_2                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_TimeSpanRatio_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FString                      K2Node_CustomEvent_EventName_1                                   (ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                   K2Node_CustomEvent_TimeUntilEnd_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   K2Node_CustomEvent_TimeSinceBegin_1                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_TimeSpanRatio_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FString                      K2Node_CustomEvent_EventName                                     (ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                   K2Node_CustomEvent_TimeUntilEnd                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   K2Node_CustomEvent_TimeSinceBegin                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_TimeSpanRatio                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   Temp_struct_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   Temp_struct_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class UFortAsyncAction_CalendarEventWatcher*CallFunc_WatchCalendarEvent_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconTextButton_C*           K2Node_DynamicCast_AsIcon_Text_Button                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Event_PlayButtonText                                      (ConstParm)
// class FText                        K2Node_Event_CancelButtonText                                    (ConstParm)
// struct FPlaylistFrontEndData       K2Node_Event_NewPlaylist                                         (ConstParm)
// class FText                        K2Node_Event_PlaylistCMSOverrideName                             (ConstParm)
// enum class EFortLobbyType          K2Node_Event_LobbyType                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_InCurrentSquadFill                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bShouldShow                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaMatchmakingModeButton_C*K2Node_DynamicCast_AsAthena_Matchmaking_Mode_Button              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaMatchmakingModeButton_C*K2Node_DynamicCast_AsAthena_Matchmaking_Mode_Button_1            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Event_ModeName                                            (ConstParm)
// class FText                        K2Node_Event_SubText                                             (ConstParm)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsUser_Widget                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortMatchmakingViolatorStyleTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCMSContext*                 CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNewPlaylistInformationAvailable_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bSuccess                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_CreateSound2D_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class UAthenaMatchmakingPlayButton_C*K2Node_DynamicCast_AsAthena_Matchmaking_Play_Button              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                K2Node_DynamicCast_AsFort_Initialize_from_Object_Interface       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingPlayLegacy_C::ExecuteUbergraph_AthenaMatchmakingPlayLegacy(int32 EntryPoint, const class FString& K2Node_CustomEvent_EventName_2, const struct FTimespan& K2Node_CustomEvent_TimeUntilEnd_2, const struct FTimespan& K2Node_CustomEvent_TimeSinceBegin_2, float K2Node_CustomEvent_TimeSpanRatio_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& K2Node_CustomEvent_EventName_1, const struct FTimespan& K2Node_CustomEvent_TimeUntilEnd_1, const struct FTimespan& K2Node_CustomEvent_TimeSinceBegin_1, float K2Node_CustomEvent_TimeSpanRatio_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const class FString& K2Node_CustomEvent_EventName, const struct FTimespan& K2Node_CustomEvent_TimeUntilEnd, const struct FTimespan& K2Node_CustomEvent_TimeSinceBegin, float K2Node_CustomEvent_TimeSpanRatio, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float Temp_float_Variable, const struct FTimespan& Temp_struct_Variable, const struct FTimespan& Temp_struct_Variable_1, const class FString& Temp_string_Variable, class UFortAsyncAction_CalendarEventWatcher* CallFunc_WatchCalendarEvent_ReturnValue, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class FText K2Node_Event_PlayButtonText, class FText K2Node_Event_CancelButtonText, const struct FPlaylistFrontEndData& K2Node_Event_NewPlaylist, class FText K2Node_Event_PlaylistCMSOverrideName, enum class EFortLobbyType K2Node_Event_LobbyType, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, bool K2Node_Event_InCurrentSquadFill, bool K2Node_Event_bShouldShow, class UAthenaMatchmakingModeButton_C* K2Node_DynamicCast_AsAthena_Matchmaking_Mode_Button, bool K2Node_DynamicCast_bSuccess_1, class UAthenaMatchmakingModeButton_C* K2Node_DynamicCast_AsAthena_Matchmaking_Mode_Button_1, bool K2Node_DynamicCast_bSuccess_2, class FText K2Node_Event_ModeName, class FText K2Node_Event_SubText, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UClass* Temp_class_Variable, class UClass* K2Node_CustomEvent_Loaded, class UClass* K2Node_ClassDynamicCast_AsUser_Widget, bool K2Node_ClassDynamicCast_bSuccess, enum class EFortMatchmakingViolatorStyle Temp_byte_Variable, class UCMSContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsNewPlaylistInformationAvailable_ReturnValue, class UWidget* K2Node_Select_Default, bool K2Node_Event_bSuccess, class UAudioComponent* CallFunc_CreateSound2D_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UAthenaMatchmakingPlayButton_C* K2Node_DynamicCast_AsAthena_Matchmaking_Play_Button, bool K2Node_DynamicCast_bSuccess_3, class UUserWidget* CallFunc_Create_ReturnValue, UInterfaceProperty_ K2Node_DynamicCast_AsFort_Initialize_from_Object_Interface, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsValidClass_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UCommonButton* K2Node_ComponentBoundEvent_Button)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlayLegacy_C", "ExecuteUbergraph_AthenaMatchmakingPlayLegacy");

	Params::UAthenaMatchmakingPlayLegacy_C_ExecuteUbergraph_AthenaMatchmakingPlayLegacy_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_EventName_2 = K2Node_CustomEvent_EventName_2;
	Parms.K2Node_CustomEvent_TimeUntilEnd_2 = K2Node_CustomEvent_TimeUntilEnd_2;
	Parms.K2Node_CustomEvent_TimeSinceBegin_2 = K2Node_CustomEvent_TimeSinceBegin_2;
	Parms.K2Node_CustomEvent_TimeSpanRatio_2 = K2Node_CustomEvent_TimeSpanRatio_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_EventName_1 = K2Node_CustomEvent_EventName_1;
	Parms.K2Node_CustomEvent_TimeUntilEnd_1 = K2Node_CustomEvent_TimeUntilEnd_1;
	Parms.K2Node_CustomEvent_TimeSinceBegin_1 = K2Node_CustomEvent_TimeSinceBegin_1;
	Parms.K2Node_CustomEvent_TimeSpanRatio_1 = K2Node_CustomEvent_TimeSpanRatio_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_EventName = K2Node_CustomEvent_EventName;
	Parms.K2Node_CustomEvent_TimeUntilEnd = K2Node_CustomEvent_TimeUntilEnd;
	Parms.K2Node_CustomEvent_TimeSinceBegin = K2Node_CustomEvent_TimeSinceBegin;
	Parms.K2Node_CustomEvent_TimeSpanRatio = K2Node_CustomEvent_TimeSpanRatio;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.CallFunc_WatchCalendarEvent_ReturnValue = CallFunc_WatchCalendarEvent_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcon_Text_Button = K2Node_DynamicCast_AsIcon_Text_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_PlayButtonText = K2Node_Event_PlayButtonText;
	Parms.K2Node_Event_CancelButtonText = K2Node_Event_CancelButtonText;
	Parms.K2Node_Event_NewPlaylist = K2Node_Event_NewPlaylist;
	Parms.K2Node_Event_PlaylistCMSOverrideName = K2Node_Event_PlaylistCMSOverrideName;
	Parms.K2Node_Event_LobbyType = K2Node_Event_LobbyType;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_Event_InCurrentSquadFill = K2Node_Event_InCurrentSquadFill;
	Parms.K2Node_Event_bShouldShow = K2Node_Event_bShouldShow;
	Parms.K2Node_DynamicCast_AsAthena_Matchmaking_Mode_Button = K2Node_DynamicCast_AsAthena_Matchmaking_Mode_Button;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsAthena_Matchmaking_Mode_Button_1 = K2Node_DynamicCast_AsAthena_Matchmaking_Mode_Button_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_Event_ModeName = K2Node_Event_ModeName;
	Parms.K2Node_Event_SubText = K2Node_Event_SubText;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue = CallFunc_K2_IsValidTimerHandle_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.K2Node_ClassDynamicCast_AsUser_Widget = K2Node_ClassDynamicCast_AsUser_Widget;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsNewPlaylistInformationAvailable_ReturnValue = CallFunc_IsNewPlaylistInformationAvailable_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Event_bSuccess = K2Node_Event_bSuccess;
	Parms.CallFunc_CreateSound2D_ReturnValue = CallFunc_CreateSound2D_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_DynamicCast_AsAthena_Matchmaking_Play_Button = K2Node_DynamicCast_AsAthena_Matchmaking_Play_Button;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Initialize_from_Object_Interface = K2Node_DynamicCast_AsFort_Initialize_from_Object_Interface;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.OnPlaylistChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlaylistFrontEndData       Playlist_Data                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Playlist_CMS_Override                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class EFortLobbyType          Lobby_Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingPlayLegacy_C::OnPlaylistChanged__DelegateSignature(const struct FPlaylistFrontEndData& Playlist_Data, class FText Playlist_CMS_Override, enum class EFortLobbyType Lobby_Type)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlayLegacy_C", "OnPlaylistChanged__DelegateSignature");

	Params::UAthenaMatchmakingPlayLegacy_C_OnPlaylistChanged__DelegateSignature_Params Parms;
	Parms.Playlist_Data = Playlist_Data;
	Parms.Playlist_CMS_Override = Playlist_CMS_Override;
	Parms.Lobby_Type = Lobby_Type;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.PlaylistsUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaMatchmakingPlayLegacy_C::PlaylistsUpdated__DelegateSignature()
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlayLegacy_C", "PlaylistsUpdated__DelegateSignature");

	Params::UAthenaMatchmakingPlayLegacy_C_PlaylistsUpdated__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
