#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.MapPingTimeOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaTeamMemberInfo_C::MapPingTimeOut()
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "MapPingTimeOut");

	Params::UAthenaTeamMemberInfo_C_MapPingTimeOut_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.Mapping
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortGameStateAthena*        AthenaGameState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetMapIndicatorPos_ReturnValue                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize2DSquared_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberInfo_C::Mapping(class AFortGameStateAthena* AthenaGameState, const struct FVector2D& CallFunc_GetMapIndicatorPos_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, float CallFunc_VSize2DSquared_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "Mapping");

	Params::UAthenaTeamMemberInfo_C_Mapping_Params Parms;
	Parms.AthenaGameState = AthenaGameState;
	Parms.CallFunc_GetMapIndicatorPos_ReturnValue = CallFunc_GetMapIndicatorPos_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_VSize2DSquared_ReturnValue = CallFunc_VSize2DSquared_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.UpdateUniqueID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            CallFunc_GetUniqueID_ReturnValue                                 (HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetPlatformUniqueNetId_ReturnValue                      (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberInfo_C::UpdateUniqueID(const struct FUniqueNetIdRepl& CallFunc_GetUniqueID_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetPlatformUniqueNetId_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "UpdateUniqueID");

	Params::UAthenaTeamMemberInfo_C_UpdateUniqueID_Params Parms;
	Parms.CallFunc_GetUniqueID_ReturnValue = CallFunc_GetUniqueID_ReturnValue;
	Parms.CallFunc_GetPlatformUniqueNetId_ReturnValue = CallFunc_GetPlatformUniqueNetId_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetPlayerDisconnected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInDisconnected                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()

void UAthenaTeamMemberInfo_C::SetPlayerDisconnected(bool bInDisconnected, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "SetPlayerDisconnected");

	Params::UAthenaTeamMemberInfo_C_SetPlayerDisconnected_Params Parms;
	Parms.bInDisconnected = bInDisconnected;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetTalking
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewTalking                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberInfo_C::SetTalking(bool NewTalking)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "SetTalking");

	Params::UAthenaTeamMemberInfo_C_SetTalking_Params Parms;
	Parms.NewTalking = NewTalking;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.UpdateMicIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTeamMemberInfo_C::UpdateMicIcon(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue1)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "UpdateMicIcon");

	Params::UAthenaTeamMemberInfo_C_UpdateMicIcon_Params Parms;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue1 = CallFunc_Conv_BoolToFloat_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetMuted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewMuted                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberInfo_C::SetMuted(bool NewMuted)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "SetMuted");

	Params::UAthenaTeamMemberInfo_C_SetMuted_Params Parms;
	Parms.NewMuted = NewMuted;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetReviving
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Reviving                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberInfo_C::SetReviving(bool Reviving)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "SetReviving");

	Params::UAthenaTeamMemberInfo_C_SetReviving_Params Parms;
	Parms.Reviving = Reviving;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetDBNO
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               DBNO                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberInfo_C::SetDBNO(bool DBNO)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "SetDBNO");

	Params::UAthenaTeamMemberInfo_C_SetDBNO_Params Parms;
	Parms.DBNO = DBNO;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetDead
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Dead                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor1                                    ()
// struct FSlateColor                 K2Node_Select1_Default                                           ()

void UAthenaTeamMemberInfo_C::SetDead(bool Dead, bool Temp_bool_Variable, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, enum class ESlateVisibility K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor1, const struct FSlateColor& K2Node_Select1_Default)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "SetDead");

	Params::UAthenaTeamMemberInfo_C_SetDead_Params Parms;
	Parms.Dead = Dead;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateColor1 = K2Node_MakeStruct_SlateColor1;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetShield
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTeamMemberInfo_C::SetShield(float Value, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "SetShield");

	Params::UAthenaTeamMemberInfo_C_SetShield_Params Parms;
	Parms.Value = Value;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTeamMemberInfo_C::SetHealth(float Value, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue1)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "SetHealth");

	Params::UAthenaTeamMemberInfo_C_SetHealth_Params Parms;
	Parms.Value = Value;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue1 = CallFunc_GetDynamicMaterial_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaTeamMemberInfo_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "Construct");

	Params::UAthenaTeamMemberInfo_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.TalkingStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena*      PS                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bTalking                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberInfo_C::TalkingStateChanged(class AFortPlayerStateAthena* PS, bool bTalking)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "TalkingStateChanged");

	Params::UAthenaTeamMemberInfo_C_TalkingStateChanged_Params Parms;
	Parms.PS = PS;
	Parms.bTalking = bTalking;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.DBNOStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena*      PS                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bDBNO                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberInfo_C::DBNOStateChanged(class AFortPlayerStateAthena* PS, bool bDBNO)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "DBNOStateChanged");

	Params::UAthenaTeamMemberInfo_C_DBNOStateChanged_Params Parms;
	Parms.PS = PS;
	Parms.bDBNO = bDBNO;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.BeingRevivedStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena*      PS                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bReviving                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberInfo_C::BeingRevivedStateChanged(class AFortPlayerStateAthena* PS, bool bReviving)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "BeingRevivedStateChanged");

	Params::UAthenaTeamMemberInfo_C_BeingRevivedStateChanged_Params Parms;
	Parms.PS = PS;
	Parms.bReviving = bReviving;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.PlayerNameChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena*      PS                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      PlayerName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UAthenaTeamMemberInfo_C::PlayerNameChanged(class AFortPlayerStateAthena* PS, const class FString& PlayerName)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "PlayerNameChanged");

	Params::UAthenaTeamMemberInfo_C_PlayerNameChanged_Params Parms;
	Parms.PS = PS;
	Parms.PlayerName = PlayerName;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.HitPointsChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena*      PS                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              HealthPercent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ShieldPercent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTeamMemberInfo_C::HitPointsChanged(class AFortPlayerStateAthena* PS, float HealthPercent, float ShieldPercent)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "HitPointsChanged");

	Params::UAthenaTeamMemberInfo_C_HitPointsChanged_Params Parms;
	Parms.PS = PS;
	Parms.HealthPercent = HealthPercent;
	Parms.ShieldPercent = ShieldPercent;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.MutedStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena*      PS                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Muted                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberInfo_C::MutedStateChanged(class AFortPlayerStateAthena* PS, bool Muted)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "MutedStateChanged");

	Params::UAthenaTeamMemberInfo_C_MutedStateChanged_Params Parms;
	Parms.PS = PS;
	Parms.Muted = Muted;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.DeadStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena*      PS                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               DeadStateChanged                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberInfo_C::DeadStateChanged(class AFortPlayerStateAthena* PS, bool DeadStateChanged)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "DeadStateChanged");

	Params::UAthenaTeamMemberInfo_C_DeadStateChanged_Params Parms;
	Parms.PS = PS;
	Parms.DeadStateChanged = DeadStateChanged;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.DisconnectedStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena*      PS                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Disconnected                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberInfo_C::DisconnectedStateChanged(class AFortPlayerStateAthena* PS, bool Disconnected)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "DisconnectedStateChanged");

	Params::UAthenaTeamMemberInfo_C_DisconnectedStateChanged_Params Parms;
	Parms.PS = PS;
	Parms.Disconnected = Disconnected;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.PlayerPlatformChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena*      PS                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CurrentPlatform                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UAthenaTeamMemberInfo_C::PlayerPlatformChanged(class AFortPlayerStateAthena* PS, const class FString& CurrentPlatform)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "PlayerPlatformChanged");

	Params::UAthenaTeamMemberInfo_C_PlayerPlatformChanged_Params Parms;
	Parms.PS = PS;
	Parms.CurrentPlatform = CurrentPlatform;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.OnPlayerStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena*      InPlayerState                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTeamMemberInfo_C::OnPlayerStateChanged(class AFortPlayerStateAthena* InPlayerState)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "OnPlayerStateChanged");

	Params::UAthenaTeamMemberInfo_C_OnPlayerStateChanged_Params Parms;
	Parms.InPlayerState = InPlayerState;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.OnGameModeIconChange
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena*      PS                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  NewGameModeIcon                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTeamMemberInfo_C::OnGameModeIconChange(class AFortPlayerStateAthena* PS, class UTexture2D* NewGameModeIcon)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "OnGameModeIconChange");

	Params::UAthenaTeamMemberInfo_C_OnGameModeIconChange_Params Parms;
	Parms.PS = PS;
	Parms.NewGameModeIcon = NewGameModeIcon;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.ExecuteUbergraph_AthenaTeamMemberInfo
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIDataConfigurationContext*CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerStateAthena*      K2Node_Event_PS9                                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bTalking                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerStateAthena*      K2Node_Event_PS8                                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bDBNO                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerStateAthena*      K2Node_Event_PS7                                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bReviving                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerStateAthena*      K2Node_Event_PS6                                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_PlayerName                                          (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()
// class AFortPlayerStateAthena*      K2Node_Event_PS5                                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_HealthPercent                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_ShieldPercent                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerStateAthena*      K2Node_Event_PS4                                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Muted                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerStateAthena*      K2Node_Event_PS3                                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_DeadStateChanged                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerStateAthena*      K2Node_Event_PS2                                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Disconnected                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerStateAthena*      K2Node_Event_PS1                                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_CurrentPlatform                                     (ZeroConstructor, HasGetValueTypeHash)
// class AFortPlayerStateAthena*      K2Node_Event_InPlayerState                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerStateAthena*      K2Node_Event_PS                                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Event_NewGameModeIcon                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetPinColor_ReturnValue                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTeamMemberInfo_C::ExecuteUbergraph_AthenaTeamMemberInfo(int32 EntryPoint, class UFortUIDataConfigurationContext* CallFunc_GetContext_ReturnValue, class AFortPlayerStateAthena* K2Node_Event_PS9, bool K2Node_Event_bTalking, class AFortPlayerStateAthena* K2Node_Event_PS8, bool K2Node_Event_bDBNO, class AFortPlayerStateAthena* K2Node_Event_PS7, bool K2Node_Event_bReviving, class AFortPlayerStateAthena* K2Node_Event_PS6, const class FString& K2Node_Event_PlayerName, class FText CallFunc_Conv_StringToText_ReturnValue, class AFortPlayerStateAthena* K2Node_Event_PS5, float K2Node_Event_HealthPercent, float K2Node_Event_ShieldPercent, class AFortPlayerStateAthena* K2Node_Event_PS4, bool K2Node_Event_Muted, class AFortPlayerStateAthena* K2Node_Event_PS3, bool K2Node_Event_DeadStateChanged, class AFortPlayerStateAthena* K2Node_Event_PS2, bool K2Node_Event_Disconnected, class AFortPlayerStateAthena* K2Node_Event_PS1, const class FString& K2Node_Event_CurrentPlatform, class AFortPlayerStateAthena* K2Node_Event_InPlayerState, class AFortPlayerStateAthena* K2Node_Event_PS, class UTexture2D* K2Node_Event_NewGameModeIcon, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, float CallFunc_Conv_BoolToFloat_ReturnValue, const struct FLinearColor& CallFunc_GetPinColor_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaTeamMemberInfo_C", "ExecuteUbergraph_AthenaTeamMemberInfo");

	Params::UAthenaTeamMemberInfo_C_ExecuteUbergraph_AthenaTeamMemberInfo_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_Event_PS9 = K2Node_Event_PS9;
	Parms.K2Node_Event_bTalking = K2Node_Event_bTalking;
	Parms.K2Node_Event_PS8 = K2Node_Event_PS8;
	Parms.K2Node_Event_bDBNO = K2Node_Event_bDBNO;
	Parms.K2Node_Event_PS7 = K2Node_Event_PS7;
	Parms.K2Node_Event_bReviving = K2Node_Event_bReviving;
	Parms.K2Node_Event_PS6 = K2Node_Event_PS6;
	Parms.K2Node_Event_PlayerName = K2Node_Event_PlayerName;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_Event_PS5 = K2Node_Event_PS5;
	Parms.K2Node_Event_HealthPercent = K2Node_Event_HealthPercent;
	Parms.K2Node_Event_ShieldPercent = K2Node_Event_ShieldPercent;
	Parms.K2Node_Event_PS4 = K2Node_Event_PS4;
	Parms.K2Node_Event_Muted = K2Node_Event_Muted;
	Parms.K2Node_Event_PS3 = K2Node_Event_PS3;
	Parms.K2Node_Event_DeadStateChanged = K2Node_Event_DeadStateChanged;
	Parms.K2Node_Event_PS2 = K2Node_Event_PS2;
	Parms.K2Node_Event_Disconnected = K2Node_Event_Disconnected;
	Parms.K2Node_Event_PS1 = K2Node_Event_PS1;
	Parms.K2Node_Event_CurrentPlatform = K2Node_Event_CurrentPlatform;
	Parms.K2Node_Event_InPlayerState = K2Node_Event_InPlayerState;
	Parms.K2Node_Event_PS = K2Node_Event_PS;
	Parms.K2Node_Event_NewGameModeIcon = K2Node_Event_NewGameModeIcon;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_GetPinColor_ReturnValue = CallFunc_GetPinColor_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
