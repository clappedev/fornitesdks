#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function AthenaSpectatorPlayerStatus.AthenaSpectatorPlayerStatus_C.SetLocationVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsVisible                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSpectatorPlayerStatus_C::SetLocationVisibility(bool IsVisible, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AthenaSpectatorPlayerStatus_C", "SetLocationVisibility");

	Params::UAthenaSpectatorPlayerStatus_C_SetLocationVisibility_Params Parms;
	Parms.IsVisible = IsVisible;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSpectatorPlayerStatus.AthenaSpectatorPlayerStatus_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaSpectatorPlayerStatus_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaSpectatorPlayerStatus_C", "Construct");

	Params::UAthenaSpectatorPlayerStatus_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSpectatorPlayerStatus.AthenaSpectatorPlayerStatus_C.UpdatePlayerNameText
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        PlayerNameText                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaSpectatorPlayerStatus_C::UpdatePlayerNameText(class FText& PlayerNameText)
{
	static auto Func = Class->GetFunction("AthenaSpectatorPlayerStatus_C", "UpdatePlayerNameText");

	Params::UAthenaSpectatorPlayerStatus_C_UpdatePlayerNameText_Params Parms;
	Parms.PlayerNameText = PlayerNameText;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSpectatorPlayerStatus.AthenaSpectatorPlayerStatus_C.UpdatePlayerLocationText
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        PlayerNameText                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaSpectatorPlayerStatus_C::UpdatePlayerLocationText(class FText& PlayerNameText)
{
	static auto Func = Class->GetFunction("AthenaSpectatorPlayerStatus_C", "UpdatePlayerLocationText");

	Params::UAthenaSpectatorPlayerStatus_C_UpdatePlayerLocationText_Params Parms;
	Parms.PlayerNameText = PlayerNameText;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSpectatorPlayerStatus.AthenaSpectatorPlayerStatus_C.UpdatePlayerTeam
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TeamNumber                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                TeamColor                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSpectatorPlayerStatus_C::UpdatePlayerTeam(int32 TeamNumber, struct FLinearColor& TeamColor)
{
	static auto Func = Class->GetFunction("AthenaSpectatorPlayerStatus_C", "UpdatePlayerTeam");

	Params::UAthenaSpectatorPlayerStatus_C_UpdatePlayerTeam_Params Parms;
	Parms.TeamNumber = TeamNumber;
	Parms.TeamColor = TeamColor;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSpectatorPlayerStatus.AthenaSpectatorPlayerStatus_C.FollowedPlayerChanged
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerState*            NewFollowedPlayer                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSpectatorPlayerStatus_C::FollowedPlayerChanged(class AFortPlayerState* NewFollowedPlayer)
{
	static auto Func = Class->GetFunction("AthenaSpectatorPlayerStatus_C", "FollowedPlayerChanged");

	Params::UAthenaSpectatorPlayerStatus_C_FollowedPlayerChanged_Params Parms;
	Parms.NewFollowedPlayer = NewFollowedPlayer;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSpectatorPlayerStatus.AthenaSpectatorPlayerStatus_C.ExecuteUbergraph_AthenaSpectatorPlayerStatus
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_PlayerNameText1                                     (ConstParm)
// class FText                        K2Node_Event_PlayerNameText                                      (ConstParm)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_TeamNumber                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_TeamColor                                           (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// class AFortPlayerState*            K2Node_Event_NewFollowedPlayer                                   (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerStateAthena*      K2Node_DynamicCast_AsFort_Player_State_Athena                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaSpectatorPlayerStatus_C::ExecuteUbergraph_AthenaSpectatorPlayerStatus(int32 EntryPoint, class FText K2Node_Event_PlayerNameText1, class FText K2Node_Event_PlayerNameText, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 K2Node_Event_TeamNumber, const struct FLinearColor& K2Node_Event_TeamColor, class FText CallFunc_Conv_IntToText_ReturnValue, class AFortPlayerState* K2Node_Event_NewFollowedPlayer, class AFortPlayerStateAthena* K2Node_DynamicCast_AsFort_Player_State_Athena, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("AthenaSpectatorPlayerStatus_C", "ExecuteUbergraph_AthenaSpectatorPlayerStatus");

	Params::UAthenaSpectatorPlayerStatus_C_ExecuteUbergraph_AthenaSpectatorPlayerStatus_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_PlayerNameText1 = K2Node_Event_PlayerNameText1;
	Parms.K2Node_Event_PlayerNameText = K2Node_Event_PlayerNameText;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Event_TeamNumber = K2Node_Event_TeamNumber;
	Parms.K2Node_Event_TeamColor = K2Node_Event_TeamColor;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_Event_NewFollowedPlayer = K2Node_Event_NewFollowedPlayer;
	Parms.K2Node_DynamicCast_AsFort_Player_State_Athena = K2Node_DynamicCast_AsFort_Player_State_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
