#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function Results_Widget.Results_Widget_C.GetCommanderXPWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseNewWidget                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UResults_CommanderXP_New_C*  CommanderXPNew_Widget                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UResults_CommanderXP_C*      CommanderXPOld_Widget                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPrototypingContext*     CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortPrototypingStatus  CallFunc_GetPrototypingStatus_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_Widget_C::GetCommanderXPWidget(bool* UseNewWidget, class UResults_CommanderXP_New_C** CommanderXPNew_Widget, class UResults_CommanderXP_C** CommanderXPOld_Widget, class UFortPrototypingContext* CallFunc_GetContext_ReturnValue, enum class EFortPrototypingStatus CallFunc_GetPrototypingStatus_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_Widget_C", "GetCommanderXPWidget");

	Params::UResults_Widget_C_GetCommanderXPWidget_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetPrototypingStatus_ReturnValue = CallFunc_GetPrototypingStatus_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	if (UseNewWidget != nullptr)
		*UseNewWidget = Parms.UseNewWidget;

	if (CommanderXPNew_Widget != nullptr)
		*CommanderXPNew_Widget = Parms.CommanderXPNew_Widget;

	if (CommanderXPOld_Widget != nullptr)
		*CommanderXPOld_Widget = Parms.CommanderXPOld_Widget;

}

// Function Results_Widget.Results_Widget_C.AddCommanderXPWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class UFortPrototypingContext*     CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortPrototypingStatus  CallFunc_GetPrototypingStatus_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UResults_CommanderXP_New_C*  CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UResults_CommanderXP_C*      CallFunc_Create_ReturnValue1                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_AddChildToOverlay_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_AddChildToOverlay_ReturnValue1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_Widget_C::AddCommanderXPWidget(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UFortPrototypingContext* CallFunc_GetContext_ReturnValue, enum class EFortPrototypingStatus CallFunc_GetPrototypingStatus_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UResults_CommanderXP_New_C* CallFunc_Create_ReturnValue, class UResults_CommanderXP_C* CallFunc_Create_ReturnValue1, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue1)
{
	static auto Func = Class->GetFunction("Results_Widget_C", "AddCommanderXPWidget");

	Params::UResults_Widget_C_AddCommanderXPWidget_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetPrototypingStatus_ReturnValue = CallFunc_GetPrototypingStatus_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Create_ReturnValue1 = CallFunc_Create_ReturnValue1;
	Parms.CallFunc_AddChildToOverlay_ReturnValue = CallFunc_AddChildToOverlay_ReturnValue;
	Parms.CallFunc_AddChildToOverlay_ReturnValue1 = CallFunc_AddChildToOverlay_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_Widget.Results_Widget_C.ShouldDisplayEndOfZoneCinematic
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIFeatureState     CallFunc_GetFeatureState_OutFeatureState                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIFeatureStateReasonCallFunc_GetFeatureState_OutReason                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UResults_Widget_C::ShouldDisplayEndOfZoneCinematic(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_Widget_C", "ShouldDisplayEndOfZoneCinematic");

	Params::UResults_Widget_C_ShouldDisplayEndOfZoneCinematic_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetFeatureState_OutFeatureState = CallFunc_GetFeatureState_OutFeatureState;
	Parms.CallFunc_GetFeatureState_OutReason = CallFunc_GetFeatureState_OutReason;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	return Parms.ReturnValue;

}

// Function Results_Widget.Results_Widget_C.UseVideos
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bVideos                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldShowMissionResultsMovies_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortBasicMissionInfo       CallFunc_GetCurrentBasicMissionInfo_BasicMissionInfo             ()
// bool                               CallFunc_GetCurrentBasicMissionInfo_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_Widget_C::UseVideos(bool* bVideos, bool CallFunc_ShouldShowMissionResultsMovies_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue, const struct FFortBasicMissionInfo& CallFunc_GetCurrentBasicMissionInfo_BasicMissionInfo, bool CallFunc_GetCurrentBasicMissionInfo_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_Widget_C", "UseVideos");

	Params::UResults_Widget_C_UseVideos_Params Parms;
	Parms.CallFunc_ShouldShowMissionResultsMovies_ReturnValue = CallFunc_ShouldShowMissionResultsMovies_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCurrentBasicMissionInfo_BasicMissionInfo = CallFunc_GetCurrentBasicMissionInfo_BasicMissionInfo;
	Parms.CallFunc_GetCurrentBasicMissionInfo_ReturnValue = CallFunc_GetCurrentBasicMissionInfo_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	if (bVideos != nullptr)
		*bVideos = Parms.bVideos;

}

// Function Results_Widget.Results_Widget_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetCommanderXPWidget_UseNewWidget                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UResults_CommanderXP_New_C*  CallFunc_GetCommanderXPWidget_CommanderXPNew_Widget              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UResults_CommanderXP_C*      CallFunc_GetCommanderXPWidget_CommanderXPOld_Widget              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_Widget_C::Focus(bool CallFunc_GetCommanderXPWidget_UseNewWidget, class UResults_CommanderXP_New_C* CallFunc_GetCommanderXPWidget_CommanderXPNew_Widget, class UResults_CommanderXP_C* CallFunc_GetCommanderXPWidget_CommanderXPOld_Widget, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsVisible_ReturnValue1, bool CallFunc_IsVisible_ReturnValue2, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess)
{
	static auto Func = Class->GetFunction("Results_Widget_C", "Focus");

	Params::UResults_Widget_C_Focus_Params Parms;
	Parms.CallFunc_GetCommanderXPWidget_UseNewWidget = CallFunc_GetCommanderXPWidget_UseNewWidget;
	Parms.CallFunc_GetCommanderXPWidget_CommanderXPNew_Widget = CallFunc_GetCommanderXPWidget_CommanderXPNew_Widget;
	Parms.CallFunc_GetCommanderXPWidget_CommanderXPOld_Widget = CallFunc_GetCommanderXPWidget_CommanderXPOld_Widget;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue1 = CallFunc_IsVisible_ReturnValue1;
	Parms.CallFunc_IsVisible_ReturnValue2 = CallFunc_IsVisible_ReturnValue2;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_Widget.Results_Widget_C.InitializeInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UResults_Widget_C::InitializeInput(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static auto Func = Class->GetFunction("Results_Widget_C", "InitializeInput");

	Params::UResults_Widget_C_InitializeInput_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_Widget.Results_Widget_C.OnInputSkip
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bCommited                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetCommanderXPWidget_UseNewWidget                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UResults_CommanderXP_New_C*  CallFunc_GetCommanderXPWidget_CommanderXPNew_Widget              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UResults_CommanderXP_C*      CallFunc_GetCommanderXPWidget_CommanderXPOld_Widget              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_Widget_C::OnInputSkip(bool* bCommited, bool CallFunc_GetCommanderXPWidget_UseNewWidget, class UResults_CommanderXP_New_C* CallFunc_GetCommanderXPWidget_CommanderXPNew_Widget, class UResults_CommanderXP_C* CallFunc_GetCommanderXPWidget_CommanderXPOld_Widget)
{
	static auto Func = Class->GetFunction("Results_Widget_C", "OnInputSkip");

	Params::UResults_Widget_C_OnInputSkip_Params Parms;
	Parms.CallFunc_GetCommanderXPWidget_UseNewWidget = CallFunc_GetCommanderXPWidget_UseNewWidget;
	Parms.CallFunc_GetCommanderXPWidget_CommanderXPNew_Widget = CallFunc_GetCommanderXPWidget_CommanderXPNew_Widget;
	Parms.CallFunc_GetCommanderXPWidget_CommanderXPOld_Widget = CallFunc_GetCommanderXPWidget_CommanderXPOld_Widget;

	UObject::ProcessEvent(Func, &Parms);
	if (bCommited != nullptr)
		*bCommited = Parms.bCommited;

}

// Function Results_Widget.Results_Widget_C.LogAnalytics
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ScreenName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               bSkipped                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetRealTimeSeconds_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_Widget_C::LogAnalytics(const class FString& ScreenName, bool bSkipped, float CallFunc_GetRealTimeSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_Widget_C", "LogAnalytics");

	Params::UResults_Widget_C_LogAnalytics_Params Parms;
	Parms.ScreenName = ScreenName;
	Parms.bSkipped = bSkipped;
	Parms.CallFunc_GetRealTimeSeconds_ReturnValue = CallFunc_GetRealTimeSeconds_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_Widget.Results_Widget_C.PlayMissionResultSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortCompletionResult   Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_Widget_C::PlayMissionResultSound(enum class EFortCompletionResult Temp_byte_Variable, class USoundBase* K2Node_Select_Default, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_Widget_C", "PlayMissionResultSound");

	Params::UResults_Widget_C_PlayMissionResultSound_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_Widget.Results_Widget_C.Toggle Top Level Tab Controls
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIStateWidget_NUI*      CallFunc_GetCurrentUIStateWidget_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHUD_C*                      K2Node_DynamicCast_AsHUD                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_Widget_C::Toggle_Top_Level_Tab_Controls(bool Show, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFortUIStateWidget_NUI* CallFunc_GetCurrentUIStateWidget_ReturnValue, class UHUD_C* K2Node_DynamicCast_AsHUD, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("Results_Widget_C", "Toggle Top Level Tab Controls");

	Params::UResults_Widget_C_Toggle_Top_Level_Tab_Controls_Params Parms;
	Parms.Show = Show;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetCurrentUIStateWidget_ReturnValue = CallFunc_GetCurrentUIStateWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsHUD = K2Node_DynamicCast_AsHUD;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_Widget.Results_Widget_C.SpawnResultsMusic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortCompletionResult   Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_Widget_C::SpawnResultsMusic(enum class EFortCompletionResult Temp_byte_Variable, class USoundBase* K2Node_Select_Default, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_Widget_C", "SpawnResultsMusic");

	Params::UResults_Widget_C_SpawnResultsMusic_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_Widget.Results_Widget_C.Toggle Chat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIStateWidget_NUI*      CallFunc_GetCurrentUIStateWidget_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHUD_C*                      K2Node_DynamicCast_AsHUD                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_Widget_C::Toggle_Chat(bool Show, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UFortUIStateWidget_NUI* CallFunc_GetCurrentUIStateWidget_ReturnValue, class UHUD_C* K2Node_DynamicCast_AsHUD, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("Results_Widget_C", "Toggle Chat");

	Params::UResults_Widget_C_Toggle_Chat_Params Parms;
	Parms.Show = Show;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetCurrentUIStateWidget_ReturnValue = CallFunc_GetCurrentUIStateWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsHUD = K2Node_DynamicCast_AsHUD;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_Widget.Results_Widget_C.Initialize Video
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UseVideos_bVideos                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortBasicMissionInfo       CallFunc_GetCurrentBasicMissionInfo_BasicMissionInfo             ()
// bool                               CallFunc_GetCurrentBasicMissionInfo_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMediaPlayer*                CallFunc_GetMediaPlayer_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMediaSource*                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_Widget_C::Initialize_Video(class UFortHUDContext* CallFunc_GetContext_ReturnValue, bool CallFunc_UseVideos_bVideos, const struct FFortBasicMissionInfo& CallFunc_GetCurrentBasicMissionInfo_BasicMissionInfo, bool CallFunc_GetCurrentBasicMissionInfo_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class UMediaPlayer* CallFunc_GetMediaPlayer_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool Temp_bool_Variable, class UMediaSource* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("Results_Widget_C", "Initialize Video");

	Params::UResults_Widget_C_Initialize_Video_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_UseVideos_bVideos = CallFunc_UseVideos_bVideos;
	Parms.CallFunc_GetCurrentBasicMissionInfo_BasicMissionInfo = CallFunc_GetCurrentBasicMissionInfo_BasicMissionInfo;
	Parms.CallFunc_GetCurrentBasicMissionInfo_ReturnValue = CallFunc_GetCurrentBasicMissionInfo_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetMediaPlayer_ReturnValue = CallFunc_GetMediaPlayer_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_Widget.Results_Widget_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIScoreReport*          ScoreReport                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortItem*>           RewardData                                                       (Edit, BlueprintVisible, ZeroConstructor)
// class FText                        Temp_text_Variable                                               ()
// class FText                        Temp_text_Variable1                                              ()
// class FText                        Temp_text_Variable2                                              ()
// class FText                        Temp_text_Variable3                                              ()
// bool                               CallFunc_GetCommanderXPWidget_UseNewWidget                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UResults_CommanderXP_New_C*  CallFunc_GetCommanderXPWidget_CommanderXPNew_Widget              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UResults_CommanderXP_C*      CallFunc_GetCommanderXPWidget_CommanderXPOld_Widget              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTotalMissionPointsEarned_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortCompletionResult   Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIScoreReport*          CallFunc_GetScoreReport_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortCompletionResult   CallFunc_GetZoneCompletionResult_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            ()
// TArray<class UFortItem*>           CallFunc_GetRewardsByType_OutRewards                             (ZeroConstructor, ReferenceParm)

void UResults_Widget_C::Initialize(class UFortUIScoreReport* ScoreReport, const TArray<class UFortItem*>& RewardData, class FText Temp_text_Variable, class FText Temp_text_Variable1, class FText Temp_text_Variable2, class FText Temp_text_Variable3, bool CallFunc_GetCommanderXPWidget_UseNewWidget, class UResults_CommanderXP_New_C* CallFunc_GetCommanderXPWidget_CommanderXPNew_Widget, class UResults_CommanderXP_C* CallFunc_GetCommanderXPWidget_CommanderXPOld_Widget, int32 CallFunc_GetTotalMissionPointsEarned_ReturnValue, enum class EFortCompletionResult Temp_byte_Variable, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortUIScoreReport* CallFunc_GetScoreReport_ReturnValue, enum class EFortCompletionResult CallFunc_GetZoneCompletionResult_ReturnValue, class FText K2Node_Select_Default, TArray<class UFortItem*>& CallFunc_GetRewardsByType_OutRewards)
{
	static auto Func = Class->GetFunction("Results_Widget_C", "Initialize");

	Params::UResults_Widget_C_Initialize_Params Parms;
	Parms.ScoreReport = ScoreReport;
	Parms.RewardData = RewardData;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable1 = Temp_text_Variable1;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.Temp_text_Variable3 = Temp_text_Variable3;
	Parms.CallFunc_GetCommanderXPWidget_UseNewWidget = CallFunc_GetCommanderXPWidget_UseNewWidget;
	Parms.CallFunc_GetCommanderXPWidget_CommanderXPNew_Widget = CallFunc_GetCommanderXPWidget_CommanderXPNew_Widget;
	Parms.CallFunc_GetCommanderXPWidget_CommanderXPOld_Widget = CallFunc_GetCommanderXPWidget_CommanderXPOld_Widget;
	Parms.CallFunc_GetTotalMissionPointsEarned_ReturnValue = CallFunc_GetTotalMissionPointsEarned_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetScoreReport_ReturnValue = CallFunc_GetScoreReport_ReturnValue;
	Parms.CallFunc_GetZoneCompletionResult_ReturnValue = CallFunc_GetZoneCompletionResult_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetRewardsByType_OutRewards = CallFunc_GetRewardsByType_OutRewards;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_Widget.Results_Widget_C.BndEvt__ResultsSummary_K2Node_ComponentBoundEvent_1_OnReturnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_Widget_C::BndEvt__ResultsSummary_K2Node_ComponentBoundEvent_1_OnReturnClicked__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_Widget_C", "BndEvt__ResultsSummary_K2Node_ComponentBoundEvent_1_OnReturnClicked__DelegateSignature");

	Params::UResults_Widget_C_BndEvt__ResultsSummary_K2Node_ComponentBoundEvent_1_OnReturnClicked__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_Widget.Results_Widget_C.Teleport Scene Sequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_Widget_C::Teleport_Scene_Sequence()
{
	static auto Func = Class->GetFunction("Results_Widget_C", "Teleport Scene Sequence");

	Params::UResults_Widget_C_Teleport_Scene_Sequence_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_Widget.Results_Widget_C.BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_7_OnAddFriendClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            TargetId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FString                      TargetName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UResults_Widget_C::BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_7_OnAddFriendClicked__DelegateSignature(const struct FUniqueNetIdRepl& TargetId, const class FString& TargetName)
{
	static auto Func = Class->GetFunction("Results_Widget_C", "BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_7_OnAddFriendClicked__DelegateSignature");

	Params::UResults_Widget_C_BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_7_OnAddFriendClicked__DelegateSignature_Params Parms;
	Parms.TargetId = TargetId;
	Parms.TargetName = TargetName;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_Widget.Results_Widget_C.BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_8_OnUpVoteClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            TargetId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FString                      TargetName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UResults_Widget_C::BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_8_OnUpVoteClicked__DelegateSignature(const struct FUniqueNetIdRepl& TargetId, const class FString& TargetName)
{
	static auto Func = Class->GetFunction("Results_Widget_C", "BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_8_OnUpVoteClicked__DelegateSignature");

	Params::UResults_Widget_C_BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_8_OnUpVoteClicked__DelegateSignature_Params Parms;
	Parms.TargetId = TargetId;
	Parms.TargetName = TargetName;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_Widget.Results_Widget_C.BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_5_OnMissionStatsClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_Widget_C::BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_5_OnMissionStatsClicked__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_Widget_C", "BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_5_OnMissionStatsClicked__DelegateSignature");

	Params::UResults_Widget_C_BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_5_OnMissionStatsClicked__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_Widget.Results_Widget_C.BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_1_OnExitClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_Widget_C::BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_1_OnExitClicked__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_Widget_C", "BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_1_OnExitClicked__DelegateSignature");

	Params::UResults_Widget_C_BndEvt__ResultsTeleportPad_K2Node_ComponentBoundEvent_1_OnExitClicked__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_Widget.Results_Widget_C.Badge Loot Sequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_Widget_C::Badge_Loot_Sequence()
{
	static auto Func = Class->GetFunction("Results_Widget_C", "Badge Loot Sequence");

	Params::UResults_Widget_C_Badge_Loot_Sequence_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_Widget.Results_Widget_C.BndEvt__ResultsBadgeLoot_K2Node_ComponentBoundEvent_0_Finished__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_Widget_C::BndEvt__ResultsBadgeLoot_K2Node_ComponentBoundEvent_0_Finished__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_Widget_C", "BndEvt__ResultsBadgeLoot_K2Node_ComponentBoundEvent_0_Finished__DelegateSignature");

	Params::UResults_Widget_C_BndEvt__ResultsBadgeLoot_K2Node_ComponentBoundEvent_0_Finished__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_Widget.Results_Widget_C.Commander XP Sequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_Widget_C::Commander_XP_Sequence()
{
	static auto Func = Class->GetFunction("Results_Widget_C", "Commander XP Sequence");

	Params::UResults_Widget_C_Commander_XP_Sequence_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_Widget.Results_Widget_C.BndEvt__Anim_CommanderXPIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_Widget_C::BndEvt__Anim_CommanderXPIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_Widget_C", "BndEvt__Anim_CommanderXPIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Params::UResults_Widget_C_BndEvt__Anim_CommanderXPIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_Widget.Results_Widget_C.BndEvt__Anim_CommanderXPOutro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_Widget_C::BndEvt__Anim_CommanderXPOutro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_Widget_C", "BndEvt__Anim_CommanderXPOutro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Params::UResults_Widget_C_BndEvt__Anim_CommanderXPOutro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_Widget.Results_Widget_C.Xp Finished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_Widget_C::Xp_Finished()
{
	static auto Func = Class->GetFunction("Results_Widget_C", "Xp Finished");

	Params::UResults_Widget_C_Xp_Finished_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_Widget.Results_Widget_C.BndEvt__Results_ScoreAndXP_K2Node_ComponentBoundEvent_3_Finished__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_Widget_C::BndEvt__Results_ScoreAndXP_K2Node_ComponentBoundEvent_3_Finished__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_Widget_C", "BndEvt__Results_ScoreAndXP_K2Node_ComponentBoundEvent_3_Finished__DelegateSignature");

	Params::UResults_Widget_C_BndEvt__Results_ScoreAndXP_K2Node_ComponentBoundEvent_3_Finished__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_Widget.Results_Widget_C.Team Score Sequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_Widget_C::Team_Score_Sequence()
{
	static auto Func = Class->GetFunction("Results_Widget_C", "Team Score Sequence");

	Params::UResults_Widget_C_Team_Score_Sequence_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_Widget.Results_Widget_C.BndEvt__TopPanel_K2Node_ComponentBoundEvent_1_IntroComplete__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_Widget_C::BndEvt__TopPanel_K2Node_ComponentBoundEvent_1_IntroComplete__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_Widget_C", "BndEvt__TopPanel_K2Node_ComponentBoundEvent_1_IntroComplete__DelegateSignature");

	Params::UResults_Widget_C_BndEvt__TopPanel_K2Node_ComponentBoundEvent_1_IntroComplete__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_Widget.Results_Widget_C.PreResults Sequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_Widget_C::PreResults_Sequence()
{
	static auto Func = Class->GetFunction("Results_Widget_C", "PreResults Sequence");

	Params::UResults_Widget_C_PreResults_Sequence_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_Widget.Results_Widget_C.BndEvt__Anim_ZoneCompletionIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_Widget_C::BndEvt__Anim_ZoneCompletionIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_Widget_C", "BndEvt__Anim_ZoneCompletionIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Params::UResults_Widget_C_BndEvt__Anim_ZoneCompletionIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_Widget.Results_Widget_C.VideoSequenceStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_Widget_C::VideoSequenceStart()
{
	static auto Func = Class->GetFunction("Results_Widget_C", "VideoSequenceStart");

	Params::UResults_Widget_C_VideoSequenceStart_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_Widget.Results_Widget_C.OnVideoEndReached
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_Widget_C::OnVideoEndReached()
{
	static auto Func = Class->GetFunction("Results_Widget_C", "OnVideoEndReached");

	Params::UResults_Widget_C_OnVideoEndReached_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_Widget.Results_Widget_C.BndEvt__Anim_VideoOutro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_Widget_C::BndEvt__Anim_VideoOutro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_Widget_C", "BndEvt__Anim_VideoOutro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Params::UResults_Widget_C_BndEvt__Anim_VideoOutro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_Widget.Results_Widget_C.SkipVideo
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_Widget_C::SkipVideo()
{
	static auto Func = Class->GetFunction("Results_Widget_C", "SkipVideo");

	Params::UResults_Widget_C_SkipVideo_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_Widget.Results_Widget_C.OnMediaOpened
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_Widget_C::OnMediaOpened()
{
	static auto Func = Class->GetFunction("Results_Widget_C", "OnMediaOpened");

	Params::UResults_Widget_C_OnMediaOpened_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_Widget.Results_Widget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UResults_Widget_C::Construct()
{
	static auto Func = Class->GetFunction("Results_Widget_C", "Construct");

	Params::UResults_Widget_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_Widget.Results_Widget_C.HandleClientEvent_PlayerLeftEvent
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     EventSource                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     EventFocus                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            ClientEvent                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UResults_Widget_C::HandleClientEvent_PlayerLeftEvent(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent)
{
	static auto Func = Class->GetFunction("Results_Widget_C", "HandleClientEvent_PlayerLeftEvent");

	Params::UResults_Widget_C_HandleClientEvent_PlayerLeftEvent_Params Parms;
	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_Widget.Results_Widget_C.Wait for Replication
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_Widget_C::Wait_for_Replication()
{
	static auto Func = Class->GetFunction("Results_Widget_C", "Wait for Replication");

	Params::UResults_Widget_C_Wait_for_Replication_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_Widget.Results_Widget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UResults_Widget_C::Destruct()
{
	static auto Func = Class->GetFunction("Results_Widget_C", "Destruct");

	Params::UResults_Widget_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_Widget.Results_Widget_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UResults_Widget_C::OnActivated()
{
	static auto Func = Class->GetFunction("Results_Widget_C", "OnActivated");

	Params::UResults_Widget_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_Widget.Results_Widget_C.ExecuteUbergraph_Results_Widget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_ComponentBoundEvent_TargetId1                             (HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_TargetName1                           (ZeroConstructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_ComponentBoundEvent_TargetId                              (HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_TargetName                            (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_GetRealTimeSeconds_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRealTimeSeconds_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRealTimeSeconds_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRealTimeSeconds_ReturnValue3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTotalMissionPointsEarned_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetCommanderXPWidget_UseNewWidget                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UResults_CommanderXP_New_C*  CallFunc_GetCommanderXPWidget_CommanderXPNew_Widget              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UResults_CommanderXP_C*      CallFunc_GetCommanderXPWidget_CommanderXPOld_Widget              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetCommanderXPWidget_UseNewWidget1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UResults_CommanderXP_New_C*  CallFunc_GetCommanderXPWidget_CommanderXPNew_Widget1             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UResults_CommanderXP_C*      CallFunc_GetCommanderXPWidget_CommanderXPOld_Widget1             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRealTimeSeconds_ReturnValue4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRealTimeSeconds_ReturnValue5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_B_Execution_Happened_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Play_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_A_Execution_Happened_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_UseVideos_bVideos                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetRealTimeSeconds_ReturnValue6                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_HandleClientEvent_EventSource                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_HandleClientEvent_EventFocus                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            K2Node_HandleClientEvent_ClientEvent                             (ConstParm, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDataFinalized_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonUISubsystem*          CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputManager*         CallFunc_GetInputManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldDisplayEndOfZoneCinematic_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void UResults_Widget_C::ExecuteUbergraph_Results_Widget(int32 EntryPoint, const struct FUniqueNetIdRepl& K2Node_ComponentBoundEvent_TargetId1, const class FString& K2Node_ComponentBoundEvent_TargetName1, const struct FUniqueNetIdRepl& K2Node_ComponentBoundEvent_TargetId, const class FString& K2Node_ComponentBoundEvent_TargetName, float CallFunc_GetRealTimeSeconds_ReturnValue, float CallFunc_GetRealTimeSeconds_ReturnValue1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, float CallFunc_GetRealTimeSeconds_ReturnValue2, float CallFunc_GetRealTimeSeconds_ReturnValue3, int32 CallFunc_GetTotalMissionPointsEarned_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_GetCommanderXPWidget_UseNewWidget, class UResults_CommanderXP_New_C* CallFunc_GetCommanderXPWidget_CommanderXPNew_Widget, class UResults_CommanderXP_C* CallFunc_GetCommanderXPWidget_CommanderXPOld_Widget, bool Temp_bool_IsClosed_Variable, bool CallFunc_GetCommanderXPWidget_UseNewWidget1, class UResults_CommanderXP_New_C* CallFunc_GetCommanderXPWidget_CommanderXPNew_Widget1, class UResults_CommanderXP_C* CallFunc_GetCommanderXPWidget_CommanderXPOld_Widget1, float CallFunc_GetRealTimeSeconds_ReturnValue4, float CallFunc_GetRealTimeSeconds_ReturnValue5, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_B_Execution_Happened_Variable, bool CallFunc_Play_ReturnValue, bool Temp_bool_A_Execution_Happened_Variable, bool CallFunc_UseVideos_bVideos, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_GetRealTimeSeconds_ReturnValue6, class UObject* K2Node_HandleClientEvent_EventSource, class UObject* K2Node_HandleClientEvent_EventFocus, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent, bool Temp_bool_Variable, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_Select_Default, bool CallFunc_IsDataFinalized_ReturnValue, class UCommonUISubsystem* CallFunc_GetContext_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_ShouldDisplayEndOfZoneCinematic_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_Widget_C", "ExecuteUbergraph_Results_Widget");

	Params::UResults_Widget_C_ExecuteUbergraph_Results_Widget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_TargetId1 = K2Node_ComponentBoundEvent_TargetId1;
	Parms.K2Node_ComponentBoundEvent_TargetName1 = K2Node_ComponentBoundEvent_TargetName1;
	Parms.K2Node_ComponentBoundEvent_TargetId = K2Node_ComponentBoundEvent_TargetId;
	Parms.K2Node_ComponentBoundEvent_TargetName = K2Node_ComponentBoundEvent_TargetName;
	Parms.CallFunc_GetRealTimeSeconds_ReturnValue = CallFunc_GetRealTimeSeconds_ReturnValue;
	Parms.CallFunc_GetRealTimeSeconds_ReturnValue1 = CallFunc_GetRealTimeSeconds_ReturnValue1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;
	Parms.CallFunc_GetRealTimeSeconds_ReturnValue2 = CallFunc_GetRealTimeSeconds_ReturnValue2;
	Parms.CallFunc_GetRealTimeSeconds_ReturnValue3 = CallFunc_GetRealTimeSeconds_ReturnValue3;
	Parms.CallFunc_GetTotalMissionPointsEarned_ReturnValue = CallFunc_GetTotalMissionPointsEarned_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetCommanderXPWidget_UseNewWidget = CallFunc_GetCommanderXPWidget_UseNewWidget;
	Parms.CallFunc_GetCommanderXPWidget_CommanderXPNew_Widget = CallFunc_GetCommanderXPWidget_CommanderXPNew_Widget;
	Parms.CallFunc_GetCommanderXPWidget_CommanderXPOld_Widget = CallFunc_GetCommanderXPWidget_CommanderXPOld_Widget;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_GetCommanderXPWidget_UseNewWidget1 = CallFunc_GetCommanderXPWidget_UseNewWidget1;
	Parms.CallFunc_GetCommanderXPWidget_CommanderXPNew_Widget1 = CallFunc_GetCommanderXPWidget_CommanderXPNew_Widget1;
	Parms.CallFunc_GetCommanderXPWidget_CommanderXPOld_Widget1 = CallFunc_GetCommanderXPWidget_CommanderXPOld_Widget1;
	Parms.CallFunc_GetRealTimeSeconds_ReturnValue4 = CallFunc_GetRealTimeSeconds_ReturnValue4;
	Parms.CallFunc_GetRealTimeSeconds_ReturnValue5 = CallFunc_GetRealTimeSeconds_ReturnValue5;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_B_Execution_Happened_Variable = Temp_bool_B_Execution_Happened_Variable;
	Parms.CallFunc_Play_ReturnValue = CallFunc_Play_ReturnValue;
	Parms.Temp_bool_A_Execution_Happened_Variable = Temp_bool_A_Execution_Happened_Variable;
	Parms.CallFunc_UseVideos_bVideos = CallFunc_UseVideos_bVideos;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetRealTimeSeconds_ReturnValue6 = CallFunc_GetRealTimeSeconds_ReturnValue6;
	Parms.K2Node_HandleClientEvent_EventSource = K2Node_HandleClientEvent_EventSource;
	Parms.K2Node_HandleClientEvent_EventFocus = K2Node_HandleClientEvent_EventFocus;
	Parms.K2Node_HandleClientEvent_ClientEvent = K2Node_HandleClientEvent_ClientEvent;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsDataFinalized_ReturnValue = CallFunc_IsDataFinalized_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetInputManager_ReturnValue = CallFunc_GetInputManager_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_ShouldDisplayEndOfZoneCinematic_ReturnValue = CallFunc_ShouldDisplayEndOfZoneCinematic_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
