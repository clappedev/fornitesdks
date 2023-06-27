#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function BP_Butterfly.BP_Butterfly_C.OnRep_LoadSublevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Butterfly_C::OnRep_LoadSublevel()
{
	static auto Func = Class->GetFunction("BP_Butterfly_C", "OnRep_LoadSublevel");

	Params::ABP_Butterfly_C_OnRep_LoadSublevel_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Butterfly.BP_Butterfly_C.OnRep_ShowLakeRainbow
// (HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSoundAtLocation_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAtLocation_ReturnValue1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Butterfly_C::OnRep_ShowLakeRainbow(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_Butterfly_C", "OnRep_ShowLakeRainbow");

	Params::ABP_Butterfly_C_OnRep_ShowLakeRainbow_Params Parms;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_SpawnSoundAtLocation_ReturnValue = CallFunc_SpawnSoundAtLocation_ReturnValue;
	Parms.CallFunc_SpawnSoundAtLocation_ReturnValue1 = CallFunc_SpawnSoundAtLocation_ReturnValue1;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Butterfly.BP_Butterfly_C.SetDistantPlayersVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Butterfly_C::SetDistantPlayersVisibility(bool Visible, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue2)
{
	static auto Func = Class->GetFunction("BP_Butterfly_C", "SetDistantPlayersVisibility");

	Params::ABP_Butterfly_C_SetDistantPlayersVisibility_Params Parms;
	Parms.Visible = Visible;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue2 = CallFunc_CreateDynamicMaterialInstance_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Butterfly.BP_Butterfly_C.SetHudHidden
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hidden                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AHUD*                        CallFunc_GetHUD_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_MakeLiteralGameplayTagContainer_ReturnValue             ()
// bool                               CallFunc_GetIsPlayingReplay_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortReplaySpectator*        K2Node_DynamicCast_AsFort_Replay_Spectator                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Butterfly_C::SetHudHidden(bool Hidden, bool CallFunc_Not_PreBool_ReturnValue, class AHUD* CallFunc_GetHUD_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeLiteralGameplayTagContainer_ReturnValue, bool CallFunc_GetIsPlayingReplay_ReturnValue, class AFortReplaySpectator* K2Node_DynamicCast_AsFort_Replay_Spectator, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("BP_Butterfly_C", "SetHudHidden");

	Params::ABP_Butterfly_C_SetHudHidden_Params Parms;
	Parms.Hidden = Hidden;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetHUD_ReturnValue = CallFunc_GetHUD_ReturnValue;
	Parms.CallFunc_MakeLiteralGameplayTagContainer_ReturnValue = CallFunc_MakeLiteralGameplayTagContainer_ReturnValue;
	Parms.CallFunc_GetIsPlayingReplay_ReturnValue = CallFunc_GetIsPlayingReplay_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Replay_Spectator = K2Node_DynamicCast_AsFort_Replay_Spectator;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Butterfly.BP_Butterfly_C.OnRep_SequenceState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetIsPlayingReplay_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULevelStreaming*             CallFunc_GetStreamingLevel_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsPlayingReplay_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLevelVisible_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortTimeOfDayManager*       CallFunc_GetTimeOfDayManagerFromContext_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULevelStreaming*             CallFunc_GetStreamingLevel_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLevelVisible_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortTimeOfDayManager*       CallFunc_GetTimeOfDayManagerFromContext_ReturnValue1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelStreaming*             CallFunc_GetStreamingLevel_ReturnValue2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Butterfly_C::OnRep_SequenceState(bool CallFunc_GetIsPlayingReplay_ReturnValue, class ULevelStreaming* CallFunc_GetStreamingLevel_ReturnValue, bool CallFunc_GetIsPlayingReplay_ReturnValue1, bool CallFunc_IsLevelVisible_ReturnValue, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_HasAuthority_ReturnValue, class ULevelStreaming* CallFunc_GetStreamingLevel_ReturnValue1, bool CallFunc_IsLevelVisible_ReturnValue1, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue1, class ULevelStreaming* CallFunc_GetStreamingLevel_ReturnValue2)
{
	static auto Func = Class->GetFunction("BP_Butterfly_C", "OnRep_SequenceState");

	Params::ABP_Butterfly_C_OnRep_SequenceState_Params Parms;
	Parms.CallFunc_GetIsPlayingReplay_ReturnValue = CallFunc_GetIsPlayingReplay_ReturnValue;
	Parms.CallFunc_GetStreamingLevel_ReturnValue = CallFunc_GetStreamingLevel_ReturnValue;
	Parms.CallFunc_GetIsPlayingReplay_ReturnValue1 = CallFunc_GetIsPlayingReplay_ReturnValue1;
	Parms.CallFunc_IsLevelVisible_ReturnValue = CallFunc_IsLevelVisible_ReturnValue;
	Parms.CallFunc_GetTimeOfDayManagerFromContext_ReturnValue = CallFunc_GetTimeOfDayManagerFromContext_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetStreamingLevel_ReturnValue1 = CallFunc_GetStreamingLevel_ReturnValue1;
	Parms.CallFunc_IsLevelVisible_ReturnValue1 = CallFunc_IsLevelVisible_ReturnValue1;
	Parms.CallFunc_GetTimeOfDayManagerFromContext_ReturnValue1 = CallFunc_GetTimeOfDayManagerFromContext_ReturnValue1;
	Parms.CallFunc_GetStreamingLevel_ReturnValue2 = CallFunc_GetStreamingLevel_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Butterfly.BP_Butterfly_C.SetSpecificTimeOfDay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Seconds                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Percent_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)

void ABP_Butterfly_C::SetSpecificTimeOfDay(float Seconds, bool Temp_bool_Variable, float CallFunc_Divide_FloatFloat_ReturnValue, bool Temp_bool_Variable1, float CallFunc_Divide_FloatFloat_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float K2Node_Select_Default, float CallFunc_Percent_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue1, bool CallFunc_Less_FloatFloat_ReturnValue1, float K2Node_Select1_Default, const class FString& CallFunc_Conv_FloatToString_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_Butterfly_C", "SetSpecificTimeOfDay");

	Params::ABP_Butterfly_C_SetSpecificTimeOfDay_Params Parms;
	Parms.Seconds = Seconds;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue1 = CallFunc_Divide_FloatFloat_ReturnValue1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Percent_FloatFloat_ReturnValue = CallFunc_Percent_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue1 = CallFunc_Add_FloatFloat_ReturnValue1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue1 = CallFunc_Less_FloatFloat_ReturnValue1;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Butterfly.BP_Butterfly_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Butterfly_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("BP_Butterfly_C", "UserConstructionScript");

	Params::ABP_Butterfly_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Butterfly.BP_Butterfly_C.CameraFade__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Butterfly_C::CameraFade__FinishedFunc()
{
	static auto Func = Class->GetFunction("BP_Butterfly_C", "CameraFade__FinishedFunc");

	Params::ABP_Butterfly_C_CameraFade__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Butterfly.BP_Butterfly_C.CameraFade__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Butterfly_C::CameraFade__UpdateFunc()
{
	static auto Func = Class->GetFunction("BP_Butterfly_C", "CameraFade__UpdateFunc");

	Params::ABP_Butterfly_C_CameraFade__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Butterfly.BP_Butterfly_C.ExitExposure__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Butterfly_C::ExitExposure__FinishedFunc()
{
	static auto Func = Class->GetFunction("BP_Butterfly_C", "ExitExposure__FinishedFunc");

	Params::ABP_Butterfly_C_ExitExposure__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Butterfly.BP_Butterfly_C.ExitExposure__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Butterfly_C::ExitExposure__UpdateFunc()
{
	static auto Func = Class->GetFunction("BP_Butterfly_C", "ExitExposure__UpdateFunc");

	Params::ABP_Butterfly_C_ExitExposure__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Butterfly.BP_Butterfly_C.WPOFadeIn Timeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Butterfly_C::WPOFadeIn_Timeline__FinishedFunc()
{
	static auto Func = Class->GetFunction("BP_Butterfly_C", "WPOFadeIn Timeline__FinishedFunc");

	Params::ABP_Butterfly_C_WPOFadeIn_Timeline__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Butterfly.BP_Butterfly_C.WPOFadeIn Timeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Butterfly_C::WPOFadeIn_Timeline__UpdateFunc()
{
	static auto Func = Class->GetFunction("BP_Butterfly_C", "WPOFadeIn Timeline__UpdateFunc");

	Params::ABP_Butterfly_C_WPOFadeIn_Timeline__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Butterfly.BP_Butterfly_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Butterfly_C::Timeline_0__FinishedFunc()
{
	static auto Func = Class->GetFunction("BP_Butterfly_C", "Timeline_0__FinishedFunc");

	Params::ABP_Butterfly_C_Timeline_0__FinishedFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Butterfly.BP_Butterfly_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Butterfly_C::Timeline_0__UpdateFunc()
{
	static auto Func = Class->GetFunction("BP_Butterfly_C", "Timeline_0__UpdateFunc");

	Params::ABP_Butterfly_C_Timeline_0__UpdateFunc_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Butterfly.BP_Butterfly_C.ButterflySequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Butterfly_C::ButterflySequence()
{
	static auto Func = Class->GetFunction("BP_Butterfly_C", "ButterflySequence");

	Params::ABP_Butterfly_C_ButterflySequence_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Butterfly.BP_Butterfly_C.ButterflyEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Butterfly_C::ButterflyEnd()
{
	static auto Func = Class->GetFunction("BP_Butterfly_C", "ButterflyEnd");

	Params::ABP_Butterfly_C_ButterflyEnd_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Butterfly.BP_Butterfly_C.TeleportPawns
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Butterfly_C::TeleportPawns()
{
	static auto Func = Class->GetFunction("BP_Butterfly_C", "TeleportPawns");

	Params::ABP_Butterfly_C_TeleportPawns_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Butterfly.BP_Butterfly_C.SetBackgroundVisible
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Butterfly_C::SetBackgroundVisible(bool Visible)
{
	static auto Func = Class->GetFunction("BP_Butterfly_C", "SetBackgroundVisible");

	Params::ABP_Butterfly_C_SetBackgroundVisible_Params Parms;
	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Butterfly.BP_Butterfly_C.ButterflyEndLoop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Butterfly_C::ButterflyEndLoop()
{
	static auto Func = Class->GetFunction("BP_Butterfly_C", "ButterflyEndLoop");

	Params::ABP_Butterfly_C_ButterflyEndLoop_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Butterfly.BP_Butterfly_C.ClientFadeToWhite
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Butterfly_C::ClientFadeToWhite()
{
	static auto Func = Class->GetFunction("BP_Butterfly_C", "ClientFadeToWhite");

	Params::ABP_Butterfly_C_ClientFadeToWhite_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Butterfly.BP_Butterfly_C.ReverseFadeTimeline
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Butterfly_C::ReverseFadeTimeline()
{
	static auto Func = Class->GetFunction("BP_Butterfly_C", "ReverseFadeTimeline");

	Params::ABP_Butterfly_C_ReverseFadeTimeline_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Butterfly.BP_Butterfly_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Butterfly_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("BP_Butterfly_C", "ReceiveBeginPlay");

	Params::ABP_Butterfly_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Butterfly.BP_Butterfly_C.StartFadeTimeline
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Butterfly_C::StartFadeTimeline()
{
	static auto Func = Class->GetFunction("BP_Butterfly_C", "StartFadeTimeline");

	Params::ABP_Butterfly_C_StartFadeTimeline_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Butterfly.BP_Butterfly_C.LocalClientExit
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Butterfly_C::LocalClientExit()
{
	static auto Func = Class->GetFunction("BP_Butterfly_C", "LocalClientExit");

	Params::ABP_Butterfly_C_LocalClientExit_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Butterfly.BP_Butterfly_C.TimeOfDaySetup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              SecondsTillEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Butterfly_C::TimeOfDaySetup(float SecondsTillEvent)
{
	static auto Func = Class->GetFunction("BP_Butterfly_C", "TimeOfDaySetup");

	Params::ABP_Butterfly_C_TimeOfDaySetup_Params Parms;
	Parms.SecondsTillEvent = SecondsTillEvent;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Butterfly.BP_Butterfly_C.HandleNoPawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Butterfly_C::HandleNoPawn()
{
	static auto Func = Class->GetFunction("BP_Butterfly_C", "HandleNoPawn");

	Params::ABP_Butterfly_C_HandleNoPawn_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Butterfly.BP_Butterfly_C.GenerateFinalLocation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Butterfly_C::GenerateFinalLocation()
{
	static auto Func = Class->GetFunction("BP_Butterfly_C", "GenerateFinalLocation");

	Params::ABP_Butterfly_C_GenerateFinalLocation_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Butterfly.BP_Butterfly_C.Overexposed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Butterfly_C::Overexposed()
{
	static auto Func = Class->GetFunction("BP_Butterfly_C", "Overexposed");

	Params::ABP_Butterfly_C_Overexposed_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Butterfly.BP_Butterfly_C.Set Nexus Audio Mix Enabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Butterfly_C::Set_Nexus_Audio_Mix_Enabled(bool Enabled)
{
	static auto Func = Class->GetFunction("BP_Butterfly_C", "Set Nexus Audio Mix Enabled");

	Params::ABP_Butterfly_C_Set_Nexus_Audio_Mix_Enabled_Params Parms;
	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Butterfly.BP_Butterfly_C.Audio Begin Fade to White
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Butterfly_C::Audio_Begin_Fade_to_White()
{
	static auto Func = Class->GetFunction("BP_Butterfly_C", "Audio Begin Fade to White");

	Params::ABP_Butterfly_C_Audio_Begin_Fade_to_White_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Butterfly.BP_Butterfly_C.Spawning finished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Butterfly_C::Spawning_finished()
{
	static auto Func = Class->GetFunction("BP_Butterfly_C", "Spawning finished");

	Params::ABP_Butterfly_C_Spawning_finished_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Butterfly.BP_Butterfly_C.SpawnButterfly
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Butterfly_C::SpawnButterfly()
{
	static auto Func = Class->GetFunction("BP_Butterfly_C", "SpawnButterfly");

	Params::ABP_Butterfly_C_SpawnButterfly_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Butterfly.BP_Butterfly_C.LookAt
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Butterfly_C::LookAt()
{
	static auto Func = Class->GetFunction("BP_Butterfly_C", "LookAt");

	Params::ABP_Butterfly_C_LookAt_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Butterfly.BP_Butterfly_C.TriggerCubeSpin
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Butterfly_C::TriggerCubeSpin()
{
	static auto Func = Class->GetFunction("BP_Butterfly_C", "TriggerCubeSpin");

	Params::ABP_Butterfly_C_TriggerCubeSpin_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Butterfly.BP_Butterfly_C.ButterflyStartFlash
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Butterfly_C::ButterflyStartFlash()
{
	static auto Func = Class->GetFunction("BP_Butterfly_C", "ButterflyStartFlash");

	Params::ABP_Butterfly_C_ButterflyStartFlash_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Butterfly.BP_Butterfly_C.EnsureTODisOff
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Butterfly_C::EnsureTODisOff()
{
	static auto Func = Class->GetFunction("BP_Butterfly_C", "EnsureTODisOff");

	Params::ABP_Butterfly_C_EnsureTODisOff_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Butterfly.BP_Butterfly_C.FadeInWPOAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Butterfly_C::FadeInWPOAnimation()
{
	static auto Func = Class->GetFunction("BP_Butterfly_C", "FadeInWPOAnimation");

	Params::ABP_Butterfly_C_FadeInWPOAnimation_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Butterfly.BP_Butterfly_C.FadeOutWPOAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Butterfly_C::FadeOutWPOAnimation()
{
	static auto Func = Class->GetFunction("BP_Butterfly_C", "FadeOutWPOAnimation");

	Params::ABP_Butterfly_C_FadeOutWPOAnimation_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Butterfly.BP_Butterfly_C.NewPawnsAvailable
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AFortPlayerPawnAthena*>AthenaPawns                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_Butterfly_C::NewPawnsAvailable(TArray<class AFortPlayerPawnAthena*>& AthenaPawns)
{
	static auto Func = Class->GetFunction("BP_Butterfly_C", "NewPawnsAvailable");

	Params::ABP_Butterfly_C_NewPawnsAvailable_Params Parms;
	Parms.AthenaPawns = AthenaPawns;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Butterfly.BP_Butterfly_C.cameraspin
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Butterfly_C::Cameraspin()
{
	static auto Func = Class->GetFunction("BP_Butterfly_C", "cameraspin");

	Params::ABP_Butterfly_C_Cameraspin_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Butterfly.BP_Butterfly_C.ResumeButterflySequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Butterfly_C::ResumeButterflySequence()
{
	static auto Func = Class->GetFunction("BP_Butterfly_C", "ResumeButterflySequence");

	Params::ABP_Butterfly_C_ResumeButterflySequence_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Butterfly.BP_Butterfly_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Butterfly_C::CustomEvent_0()
{
	static auto Func = Class->GetFunction("BP_Butterfly_C", "CustomEvent_0");

	Params::ABP_Butterfly_C_CustomEvent_0_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Butterfly.BP_Butterfly_C.LoopOverPBWs
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Butterfly_C::LoopOverPBWs()
{
	static auto Func = Class->GetFunction("BP_Butterfly_C", "LoopOverPBWs");

	Params::ABP_Butterfly_C_LoopOverPBWs_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Butterfly.BP_Butterfly_C.BreakPBWLoop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Butterfly_C::BreakPBWLoop()
{
	static auto Func = Class->GetFunction("BP_Butterfly_C", "BreakPBWLoop");

	Params::ABP_Butterfly_C_BreakPBWLoop_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Butterfly.BP_Butterfly_C.TestBoxTrace
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Butterfly_C::TestBoxTrace()
{
	static auto Func = Class->GetFunction("BP_Butterfly_C", "TestBoxTrace");

	Params::ABP_Butterfly_C_TestBoxTrace_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Butterfly.BP_Butterfly_C.CameraReplayScrubbing
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               GoingINTOVoid                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Butterfly_C::CameraReplayScrubbing(bool GoingINTOVoid)
{
	static auto Func = Class->GetFunction("BP_Butterfly_C", "CameraReplayScrubbing");

	Params::ABP_Butterfly_C_CameraReplayScrubbing_Params Parms;
	Parms.GoingINTOVoid = GoingINTOVoid;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Butterfly.BP_Butterfly_C.LoadButterflySublevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Butterfly_C::LoadButterflySublevel()
{
	static auto Func = Class->GetFunction("BP_Butterfly_C", "LoadButterflySublevel");

	Params::ABP_Butterfly_C_LoadButterflySublevel_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Butterfly.BP_Butterfly_C.TestSpawning
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Butterfly_C::TestSpawning()
{
	static auto Func = Class->GetFunction("BP_Butterfly_C", "TestSpawning");

	Params::ABP_Butterfly_C_TestSpawning_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Butterfly.BP_Butterfly_C.ExecuteUbergraph_BP_Butterfly
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ZeroConstructor, ReferenceParm)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDBNO_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerController*       CallFunc_GetFortPlayerControllerFromActor_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerGameplay*K2Node_DynamicCast_AsFort_Player_Controller_Gameplay             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInVehicle_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Visible                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULevelStreaming*             CallFunc_GetStreamingLevel_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AFortPlayerController*>CallFunc_GetLocalFortPlayerControllers_ReturnValue               (ZeroConstructor, ReferenceParm)
// class AFortPlayerController*       CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      Temp_class_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAthena_GameMode_C*          K2Node_DynamicCast_AsAthena_Game_Mode                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_SecondsTillEvent                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAthena_GameState_C*         K2Node_DynamicCast_AsAthena_Game_State                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FButterflyPlayerData        CallFunc_Array_Get_Item1                                         (HasGetValueTypeHash)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FButterflyPlayerData        CallFunc_Array_Get_Item2                                         (HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (IsPlainOldData, NoDestructor)
// class APlayerPawn_Athena_C*        K2Node_DynamicCast_AsPlayer_Pawn_Athena                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCameraAnimInst*             CallFunc_PlayCameraAnim_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsPlayingReplay_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AFortPlayerController*>CallFunc_GetLocalFortPlayerControllers_ReturnValue1              (ZeroConstructor, ReferenceParm)
// class AFortPlayerController*       CallFunc_Array_Get_Item3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsPlayingReplay_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Enabled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue1                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue1                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortGameModeAthena*         K2Node_DynamicCast_AsFort_Game_Mode_Athena                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue2                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortGameplayMutator*        CallFunc_GetGameplayMutator_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortAthenaMutator_ButterflyEvent*K2Node_DynamicCast_AsFort_Athena_Mutator_Butterfly_Event         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess5                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortGameplayMutator*        CallFunc_GetGameplayMutator_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortAthenaMutator_Storm*    K2Node_DynamicCast_AsFort_Athena_Mutator_Storm                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess6                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortGameModeAthena*         K2Node_DynamicCast_AsFort_Game_Mode_Athena1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess7                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortGameplayMutator*        CallFunc_GetGameplayMutator_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortAthenaMutator_Storm*    K2Node_DynamicCast_AsFort_Athena_Mutator_Storm1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess8                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortTimeOfDayManager*       CallFunc_GetTimeOfDayManagerFromContext_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_SafeZoneStorm_C*> CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// class ABP_SafeZoneStorm_C*         CallFunc_Array_Get_Item4                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue3                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AFortPlayerPawnAthena*>K2Node_CustomEvent_AthenaPawns                                   (ConstParm, ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue1                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue                          (IsPlainOldData, NoDestructor)
// class AFortGameModeAthena*         K2Node_DynamicCast_AsFort_Game_Mode_Athena2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess9                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortGameplayMutator*        CallFunc_GetGameplayMutator_ReturnValue3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortAthenaMutator_ButterflyEvent*K2Node_DynamicCast_AsFort_Athena_Mutator_Butterfly_Event1        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess10                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FButterflyPlayerData        K2Node_MakeStruct_ButterflyPlayerData                            (HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue2                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue3                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotFromZX_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotFromZX_ReturnValue1                              (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Butterfly_Animation_C*   CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AFortPlayerController*>CallFunc_GetLocalFortPlayerControllers_ReturnValue2              (ZeroConstructor, ReferenceParm)
// class AFortPlayerController*       CallFunc_Array_Get_Item5                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMobileGame_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHUD*                        CallFunc_GetHUD_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileGame_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer       CallFunc_MakeLiteralGameplayTagContainer_ReturnValue             ()
// class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess11                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue4                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array                                           (ConstParm, ZeroConstructor, ReferenceParm)
// TArray<struct FHitResult>          CallFunc_BoxTraceMultiForObjects_OutHits                         (ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_BoxTraceMultiForObjects_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess12                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess13                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_GoingINTOVoid                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AFortPlayerController*>CallFunc_GetLocalFortPlayerControllers_ReturnValue3              (ZeroConstructor, ReferenceParm)
// struct FVector                     CallFunc_MakeVector_ReturnValue5                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       CallFunc_Array_Get_Item6                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotFromZX_ReturnValue2                              (IsPlainOldData, NoDestructor)
// class AFortReplaySpectatorAthena*  K2Node_DynamicCast_AsFort_Replay_Spectator_Athena                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess14                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawnAthena*       CallFunc_Array_Get_Item7                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_Array_Get_Item8                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable4                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue6                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable5                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_Array_Get_Item9                                         (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABuildingActor*              K2Node_DynamicCast_AsBuilding_Actor                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess15                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlayerBuilt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue3                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector_X2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue7                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue1                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue9                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Min_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue10                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_MakeLiteralGameplayTagContainer_ReturnValue1            ()
// int32                              CallFunc_Min_ReturnValue1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena3              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess16                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMobileGame_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer       CallFunc_MakeLiteralGameplayTagContainer_ReturnValue2            ()
// bool                               CallFunc_GetIsPlayingReplay_ReturnValue2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortReplaySpectator*        K2Node_DynamicCast_AsFort_Replay_Spectator                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess17                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AHUD*                        CallFunc_GetHUD_ReturnValue1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Butterfly_C::ExecuteUbergraph_BP_Butterfly(int32 EntryPoint, class UClass* Temp_class_Variable, TArray<class AActor*>& Temp_object_Variable, int32 Temp_int_Variable, float CallFunc_Subtract_FloatFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, bool CallFunc_IsDBNO_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, class AFortPlayerControllerGameplay* K2Node_DynamicCast_AsFort_Player_Controller_Gameplay, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, int32 Temp_int_Variable1, bool CallFunc_IsInVehicle_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, bool K2Node_CustomEvent_Visible, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue3, int32 CallFunc_Subtract_IntInt_ReturnValue1, bool CallFunc_EqualEqual_IntInt_ReturnValue1, class ULevelStreaming* CallFunc_GetStreamingLevel_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue, class AFortPlayerController* CallFunc_Array_Get_Item, bool CallFunc_HasAuthority_ReturnValue1, class UClass* Temp_class_Variable1, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AAthena_GameMode_C* K2Node_DynamicCast_AsAthena_Game_Mode, bool K2Node_DynamicCast_bSuccess1, float K2Node_CustomEvent_SecondsTillEvent, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AAthena_GameState_C* K2Node_DynamicCast_AsAthena_Game_State, bool K2Node_DynamicCast_bSuccess2, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, bool Temp_bool_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Length_ReturnValue, const struct FButterflyPlayerData& CallFunc_Array_Get_Item1, int32 Temp_int_Variable2, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue4, bool CallFunc_HasAuthority_ReturnValue2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FButterflyPlayerData& CallFunc_Array_Get_Item2, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess3, class UCameraAnimInst* CallFunc_PlayCameraAnim_ReturnValue, bool CallFunc_GetIsPlayingReplay_ReturnValue, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue1, class AFortPlayerController* CallFunc_Array_Get_Item3, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_GetIsPlayingReplay_ReturnValue1, bool K2Node_CustomEvent_Enabled, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue1, float CallFunc_BreakVector_X1, float CallFunc_BreakVector_Y1, float CallFunc_BreakVector_Z1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue1, class APawn* CallFunc_K2_GetPawn_ReturnValue1, class AFortGameModeAthena* K2Node_DynamicCast_AsFort_Game_Mode_Athena, bool K2Node_DynamicCast_bSuccess4, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, class AFortGameplayMutator* CallFunc_GetGameplayMutator_ReturnValue, class AFortAthenaMutator_ButterflyEvent* K2Node_DynamicCast_AsFort_Athena_Mutator_Butterfly_Event, bool K2Node_DynamicCast_bSuccess5, class AFortGameplayMutator* CallFunc_GetGameplayMutator_ReturnValue1, class AFortAthenaMutator_Storm* K2Node_DynamicCast_AsFort_Athena_Mutator_Storm, bool K2Node_DynamicCast_bSuccess6, class AGameModeBase* CallFunc_GetGameMode_ReturnValue2, class AFortGameModeAthena* K2Node_DynamicCast_AsFort_Game_Mode_Athena1, bool K2Node_DynamicCast_bSuccess7, class AFortGameplayMutator* CallFunc_GetGameplayMutator_ReturnValue2, class AFortAthenaMutator_Storm* K2Node_DynamicCast_AsFort_Athena_Mutator_Storm1, bool K2Node_DynamicCast_bSuccess8, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue, TArray<class ABP_SafeZoneStorm_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_SafeZoneStorm_C* CallFunc_Array_Get_Item4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool K2Node_SwitchEnum_CmpSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue3, bool Temp_bool_Variable1, bool CallFunc_Not_PreBool_ReturnValue, TArray<class AFortPlayerPawnAthena*>& K2Node_CustomEvent_AthenaPawns, int32 CallFunc_Array_Length_ReturnValue1, const struct FVector& CallFunc_MakeVector_ReturnValue1, class AGameModeBase* CallFunc_GetGameMode_ReturnValue3, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, class AFortGameModeAthena* K2Node_DynamicCast_AsFort_Game_Mode_Athena2, bool K2Node_DynamicCast_bSuccess9, class AFortGameplayMutator* CallFunc_GetGameplayMutator_ReturnValue3, class AFortAthenaMutator_ButterflyEvent* K2Node_DynamicCast_AsFort_Athena_Mutator_Butterfly_Event1, bool K2Node_DynamicCast_bSuccess10, const struct FButterflyPlayerData& K2Node_MakeStruct_ButterflyPlayerData, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue5, int32 Temp_int_Variable3, bool CallFunc_LessEqual_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue6, const struct FVector& CallFunc_MakeVector_ReturnValue2, const struct FVector& CallFunc_MakeVector_ReturnValue3, const struct FRotator& CallFunc_MakeRotFromZX_ReturnValue, const struct FRotator& CallFunc_MakeRotFromZX_ReturnValue1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_Butterfly_Animation_C* CallFunc_FinishSpawningActor_ReturnValue, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue2, class AFortPlayerController* CallFunc_Array_Get_Item5, bool CallFunc_IsMobileGame_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue1, class UClass* K2Node_Select_Default, class AHUD* CallFunc_GetHUD_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue2, const struct FGameplayTagContainer& CallFunc_MakeLiteralGameplayTagContainer_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess11, const struct FVector& CallFunc_MakeVector_ReturnValue4, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, TArray<struct FHitResult>& CallFunc_BoxTraceMultiForObjects_OutHits, bool CallFunc_BoxTraceMultiForObjects_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue7, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena1, bool K2Node_DynamicCast_bSuccess12, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena2, bool K2Node_DynamicCast_bSuccess13, bool K2Node_CustomEvent_GoingINTOVoid, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue3, const struct FVector& CallFunc_MakeVector_ReturnValue5, class AFortPlayerController* CallFunc_Array_Get_Item6, const struct FRotator& CallFunc_MakeRotFromZX_ReturnValue2, class AFortReplaySpectatorAthena* K2Node_DynamicCast_AsFort_Replay_Spectator_Athena, bool K2Node_DynamicCast_bSuccess14, class AFortPlayerPawnAthena* CallFunc_Array_Get_Item7, class USkeletalMeshComponent* CallFunc_Array_Get_Item8, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue1, int32 Temp_int_Variable4, float CallFunc_Multiply_FloatFloat_ReturnValue1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue2, const struct FVector& CallFunc_MakeVector_ReturnValue6, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, int32 Temp_int_Variable5, float CallFunc_GetValueAtLevel_ReturnValue, const struct FHitResult& CallFunc_Array_Get_Item9, float CallFunc_Multiply_FloatFloat_ReturnValue2, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, float CallFunc_Lerp_ReturnValue, class ABuildingActor* K2Node_DynamicCast_AsBuilding_Actor, bool K2Node_DynamicCast_bSuccess15, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsPlayerBuilt_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue3, float CallFunc_Lerp_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue8, bool CallFunc_LessEqual_IntInt_ReturnValue3, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_BreakVector_X2, float CallFunc_BreakVector_Y2, float CallFunc_BreakVector_Z2, float CallFunc_RandomFloatInRange_ReturnValue3, float CallFunc_RandomFloatInRange_ReturnValue4, float CallFunc_RandomFloatInRange_ReturnValue5, const struct FVector& CallFunc_MakeVector_ReturnValue7, bool CallFunc_HasAuthority_ReturnValue3, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1, bool CallFunc_HasAuthority_ReturnValue4, int32 CallFunc_Subtract_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue9, int32 CallFunc_Subtract_IntInt_ReturnValue3, int32 CallFunc_Min_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue4, int32 CallFunc_Add_IntInt_ReturnValue10, int32 CallFunc_Subtract_IntInt_ReturnValue5, const struct FGameplayTagContainer& CallFunc_MakeLiteralGameplayTagContainer_ReturnValue1, int32 CallFunc_Min_ReturnValue1, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena3, bool K2Node_DynamicCast_bSuccess16, bool CallFunc_IsMobileGame_ReturnValue3, const struct FGameplayTagContainer& CallFunc_MakeLiteralGameplayTagContainer_ReturnValue2, bool CallFunc_GetIsPlayingReplay_ReturnValue2, class AFortReplaySpectator* K2Node_DynamicCast_AsFort_Replay_Spectator, bool K2Node_DynamicCast_bSuccess17, class AHUD* CallFunc_GetHUD_ReturnValue1)
{
	static auto Func = Class->GetFunction("BP_Butterfly_C", "ExecuteUbergraph_BP_Butterfly");

	Params::ABP_Butterfly_C_ExecuteUbergraph_BP_Butterfly_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_IsDBNO_ReturnValue = CallFunc_IsDBNO_ReturnValue;
	Parms.CallFunc_GetFortPlayerControllerFromActor_ReturnValue = CallFunc_GetFortPlayerControllerFromActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Gameplay = K2Node_DynamicCast_AsFort_Player_Controller_Gameplay;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.CallFunc_IsInVehicle_ReturnValue = CallFunc_IsInVehicle_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.K2Node_CustomEvent_Visible = K2Node_CustomEvent_Visible;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue3 = CallFunc_Add_IntInt_ReturnValue3;
	Parms.CallFunc_Subtract_IntInt_ReturnValue1 = CallFunc_Subtract_IntInt_ReturnValue1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue1 = CallFunc_EqualEqual_IntInt_ReturnValue1;
	Parms.CallFunc_GetStreamingLevel_ReturnValue = CallFunc_GetStreamingLevel_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLocalFortPlayerControllers_ReturnValue = CallFunc_GetLocalFortPlayerControllers_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_HasAuthority_ReturnValue1 = CallFunc_HasAuthority_ReturnValue1;
	Parms.Temp_class_Variable1 = Temp_class_Variable1;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsAthena_Game_Mode = K2Node_DynamicCast_AsAthena_Game_Mode;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_CustomEvent_SecondsTillEvent = K2Node_CustomEvent_SecondsTillEvent;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsAthena_Game_State = K2Node_DynamicCast_AsAthena_Game_State;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue1 = CallFunc_NotEqual_ByteByte_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue1 = CallFunc_LessEqual_IntInt_ReturnValue1;
	Parms.CallFunc_Add_IntInt_ReturnValue4 = CallFunc_Add_IntInt_ReturnValue4;
	Parms.CallFunc_HasAuthority_ReturnValue2 = CallFunc_HasAuthority_ReturnValue2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Athena = K2Node_DynamicCast_AsPlayer_Pawn_Athena;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.CallFunc_PlayCameraAnim_ReturnValue = CallFunc_PlayCameraAnim_ReturnValue;
	Parms.CallFunc_GetIsPlayingReplay_ReturnValue = CallFunc_GetIsPlayingReplay_ReturnValue;
	Parms.CallFunc_GetLocalFortPlayerControllers_ReturnValue1 = CallFunc_GetLocalFortPlayerControllers_ReturnValue1;
	Parms.CallFunc_Array_Get_Item3 = CallFunc_Array_Get_Item3;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_GetIsPlayingReplay_ReturnValue1 = CallFunc_GetIsPlayingReplay_ReturnValue1;
	Parms.K2Node_CustomEvent_Enabled = K2Node_CustomEvent_Enabled;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue1 = CallFunc_K2_GetActorLocation_ReturnValue1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue1 = CallFunc_Subtract_VectorVector_ReturnValue1;
	Parms.CallFunc_BreakVector_X1 = CallFunc_BreakVector_X1;
	Parms.CallFunc_BreakVector_Y1 = CallFunc_BreakVector_Y1;
	Parms.CallFunc_BreakVector_Z1 = CallFunc_BreakVector_Z1;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_GetGameMode_ReturnValue1 = CallFunc_GetGameMode_ReturnValue1;
	Parms.CallFunc_K2_GetPawn_ReturnValue1 = CallFunc_K2_GetPawn_ReturnValue1;
	Parms.K2Node_DynamicCast_AsFort_Game_Mode_Athena = K2Node_DynamicCast_AsFort_Game_Mode_Athena;
	Parms.K2Node_DynamicCast_bSuccess4 = K2Node_DynamicCast_bSuccess4;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue2 = CallFunc_K2_GetActorLocation_ReturnValue2;
	Parms.CallFunc_GetGameplayMutator_ReturnValue = CallFunc_GetGameplayMutator_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Athena_Mutator_Butterfly_Event = K2Node_DynamicCast_AsFort_Athena_Mutator_Butterfly_Event;
	Parms.K2Node_DynamicCast_bSuccess5 = K2Node_DynamicCast_bSuccess5;
	Parms.CallFunc_GetGameplayMutator_ReturnValue1 = CallFunc_GetGameplayMutator_ReturnValue1;
	Parms.K2Node_DynamicCast_AsFort_Athena_Mutator_Storm = K2Node_DynamicCast_AsFort_Athena_Mutator_Storm;
	Parms.K2Node_DynamicCast_bSuccess6 = K2Node_DynamicCast_bSuccess6;
	Parms.CallFunc_GetGameMode_ReturnValue2 = CallFunc_GetGameMode_ReturnValue2;
	Parms.K2Node_DynamicCast_AsFort_Game_Mode_Athena1 = K2Node_DynamicCast_AsFort_Game_Mode_Athena1;
	Parms.K2Node_DynamicCast_bSuccess7 = K2Node_DynamicCast_bSuccess7;
	Parms.CallFunc_GetGameplayMutator_ReturnValue2 = CallFunc_GetGameplayMutator_ReturnValue2;
	Parms.K2Node_DynamicCast_AsFort_Athena_Mutator_Storm1 = K2Node_DynamicCast_AsFort_Athena_Mutator_Storm1;
	Parms.K2Node_DynamicCast_bSuccess8 = K2Node_DynamicCast_bSuccess8;
	Parms.CallFunc_GetTimeOfDayManagerFromContext_ReturnValue = CallFunc_GetTimeOfDayManagerFromContext_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item4 = CallFunc_Array_Get_Item4;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue3 = CallFunc_K2_GetActorLocation_ReturnValue3;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CustomEvent_AthenaPawns = K2Node_CustomEvent_AthenaPawns;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_MakeVector_ReturnValue1 = CallFunc_MakeVector_ReturnValue1;
	Parms.CallFunc_GetGameMode_ReturnValue3 = CallFunc_GetGameMode_ReturnValue3;
	Parms.CallFunc_FindLookAtRotation_ReturnValue = CallFunc_FindLookAtRotation_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Game_Mode_Athena2 = K2Node_DynamicCast_AsFort_Game_Mode_Athena2;
	Parms.K2Node_DynamicCast_bSuccess9 = K2Node_DynamicCast_bSuccess9;
	Parms.CallFunc_GetGameplayMutator_ReturnValue3 = CallFunc_GetGameplayMutator_ReturnValue3;
	Parms.K2Node_DynamicCast_AsFort_Athena_Mutator_Butterfly_Event1 = K2Node_DynamicCast_AsFort_Athena_Mutator_Butterfly_Event1;
	Parms.K2Node_DynamicCast_bSuccess10 = K2Node_DynamicCast_bSuccess10;
	Parms.K2Node_MakeStruct_ButterflyPlayerData = K2Node_MakeStruct_ButterflyPlayerData;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue5 = CallFunc_Add_IntInt_ReturnValue5;
	Parms.Temp_int_Variable3 = Temp_int_Variable3;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue2 = CallFunc_LessEqual_IntInt_ReturnValue2;
	Parms.CallFunc_Add_IntInt_ReturnValue6 = CallFunc_Add_IntInt_ReturnValue6;
	Parms.CallFunc_MakeVector_ReturnValue2 = CallFunc_MakeVector_ReturnValue2;
	Parms.CallFunc_MakeVector_ReturnValue3 = CallFunc_MakeVector_ReturnValue3;
	Parms.CallFunc_MakeRotFromZX_ReturnValue = CallFunc_MakeRotFromZX_ReturnValue;
	Parms.CallFunc_MakeRotFromZX_ReturnValue1 = CallFunc_MakeRotFromZX_ReturnValue1;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_GetLocalFortPlayerControllers_ReturnValue2 = CallFunc_GetLocalFortPlayerControllers_ReturnValue2;
	Parms.CallFunc_Array_Get_Item5 = CallFunc_Array_Get_Item5;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.CallFunc_IsMobileGame_ReturnValue1 = CallFunc_IsMobileGame_ReturnValue1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetHUD_ReturnValue = CallFunc_GetHUD_ReturnValue;
	Parms.CallFunc_IsMobileGame_ReturnValue2 = CallFunc_IsMobileGame_ReturnValue2;
	Parms.CallFunc_MakeLiteralGameplayTagContainer_ReturnValue = CallFunc_MakeLiteralGameplayTagContainer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Athena = K2Node_DynamicCast_AsFort_Player_Controller_Athena;
	Parms.K2Node_DynamicCast_bSuccess11 = K2Node_DynamicCast_bSuccess11;
	Parms.CallFunc_MakeVector_ReturnValue4 = CallFunc_MakeVector_ReturnValue4;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_BoxTraceMultiForObjects_OutHits = CallFunc_BoxTraceMultiForObjects_OutHits;
	Parms.CallFunc_BoxTraceMultiForObjects_ReturnValue = CallFunc_BoxTraceMultiForObjects_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue7 = CallFunc_Add_IntInt_ReturnValue7;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Athena1 = K2Node_DynamicCast_AsFort_Player_Controller_Athena1;
	Parms.K2Node_DynamicCast_bSuccess12 = K2Node_DynamicCast_bSuccess12;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Athena2 = K2Node_DynamicCast_AsFort_Player_Controller_Athena2;
	Parms.K2Node_DynamicCast_bSuccess13 = K2Node_DynamicCast_bSuccess13;
	Parms.K2Node_CustomEvent_GoingINTOVoid = K2Node_CustomEvent_GoingINTOVoid;
	Parms.CallFunc_GetLocalFortPlayerControllers_ReturnValue3 = CallFunc_GetLocalFortPlayerControllers_ReturnValue3;
	Parms.CallFunc_MakeVector_ReturnValue5 = CallFunc_MakeVector_ReturnValue5;
	Parms.CallFunc_Array_Get_Item6 = CallFunc_Array_Get_Item6;
	Parms.CallFunc_MakeRotFromZX_ReturnValue2 = CallFunc_MakeRotFromZX_ReturnValue2;
	Parms.K2Node_DynamicCast_AsFort_Replay_Spectator_Athena = K2Node_DynamicCast_AsFort_Replay_Spectator_Athena;
	Parms.K2Node_DynamicCast_bSuccess14 = K2Node_DynamicCast_bSuccess14;
	Parms.CallFunc_Array_Get_Item7 = CallFunc_Array_Get_Item7;
	Parms.CallFunc_Array_Get_Item8 = CallFunc_Array_Get_Item8;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue1 = CallFunc_RandomFloatInRange_ReturnValue1;
	Parms.Temp_int_Variable4 = Temp_int_Variable4;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue1 = CallFunc_Multiply_FloatFloat_ReturnValue1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue2 = CallFunc_RandomFloatInRange_ReturnValue2;
	Parms.CallFunc_MakeVector_ReturnValue6 = CallFunc_MakeVector_ReturnValue6;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.Temp_int_Variable5 = Temp_int_Variable5;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_Array_Get_Item9 = CallFunc_Array_Get_Item9;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue2 = CallFunc_Multiply_FloatFloat_ReturnValue2;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.K2Node_DynamicCast_AsBuilding_Actor = K2Node_DynamicCast_AsBuilding_Actor;
	Parms.K2Node_DynamicCast_bSuccess15 = K2Node_DynamicCast_bSuccess15;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_IsPlayerBuilt_ReturnValue = CallFunc_IsPlayerBuilt_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue3 = CallFunc_Multiply_FloatFloat_ReturnValue3;
	Parms.CallFunc_Lerp_ReturnValue1 = CallFunc_Lerp_ReturnValue1;
	Parms.CallFunc_Add_IntInt_ReturnValue8 = CallFunc_Add_IntInt_ReturnValue8;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue3 = CallFunc_LessEqual_IntInt_ReturnValue3;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BreakVector_X2 = CallFunc_BreakVector_X2;
	Parms.CallFunc_BreakVector_Y2 = CallFunc_BreakVector_Y2;
	Parms.CallFunc_BreakVector_Z2 = CallFunc_BreakVector_Z2;
	Parms.CallFunc_RandomFloatInRange_ReturnValue3 = CallFunc_RandomFloatInRange_ReturnValue3;
	Parms.CallFunc_RandomFloatInRange_ReturnValue4 = CallFunc_RandomFloatInRange_ReturnValue4;
	Parms.CallFunc_RandomFloatInRange_ReturnValue5 = CallFunc_RandomFloatInRange_ReturnValue5;
	Parms.CallFunc_MakeVector_ReturnValue7 = CallFunc_MakeVector_ReturnValue7;
	Parms.CallFunc_HasAuthority_ReturnValue3 = CallFunc_HasAuthority_ReturnValue3;
	Parms.CallFunc_Add_VectorVector_ReturnValue1 = CallFunc_Add_VectorVector_ReturnValue1;
	Parms.CallFunc_HasAuthority_ReturnValue4 = CallFunc_HasAuthority_ReturnValue4;
	Parms.CallFunc_Subtract_IntInt_ReturnValue2 = CallFunc_Subtract_IntInt_ReturnValue2;
	Parms.CallFunc_Add_IntInt_ReturnValue9 = CallFunc_Add_IntInt_ReturnValue9;
	Parms.CallFunc_Subtract_IntInt_ReturnValue3 = CallFunc_Subtract_IntInt_ReturnValue3;
	Parms.CallFunc_Min_ReturnValue = CallFunc_Min_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue4 = CallFunc_Subtract_IntInt_ReturnValue4;
	Parms.CallFunc_Add_IntInt_ReturnValue10 = CallFunc_Add_IntInt_ReturnValue10;
	Parms.CallFunc_Subtract_IntInt_ReturnValue5 = CallFunc_Subtract_IntInt_ReturnValue5;
	Parms.CallFunc_MakeLiteralGameplayTagContainer_ReturnValue1 = CallFunc_MakeLiteralGameplayTagContainer_ReturnValue1;
	Parms.CallFunc_Min_ReturnValue1 = CallFunc_Min_ReturnValue1;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Athena3 = K2Node_DynamicCast_AsFort_Player_Controller_Athena3;
	Parms.K2Node_DynamicCast_bSuccess16 = K2Node_DynamicCast_bSuccess16;
	Parms.CallFunc_IsMobileGame_ReturnValue3 = CallFunc_IsMobileGame_ReturnValue3;
	Parms.CallFunc_MakeLiteralGameplayTagContainer_ReturnValue2 = CallFunc_MakeLiteralGameplayTagContainer_ReturnValue2;
	Parms.CallFunc_GetIsPlayingReplay_ReturnValue2 = CallFunc_GetIsPlayingReplay_ReturnValue2;
	Parms.K2Node_DynamicCast_AsFort_Replay_Spectator = K2Node_DynamicCast_AsFort_Replay_Spectator;
	Parms.K2Node_DynamicCast_bSuccess17 = K2Node_DynamicCast_bSuccess17;
	Parms.CallFunc_GetHUD_ReturnValue1 = CallFunc_GetHUD_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BP_Butterfly.BP_Butterfly_C.onReadyForPOISwap__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Butterfly_C::OnReadyForPOISwap__DelegateSignature()
{
	static auto Func = Class->GetFunction("BP_Butterfly_C", "onReadyForPOISwap__DelegateSignature");

	Params::ABP_Butterfly_C_OnReadyForPOISwap__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
