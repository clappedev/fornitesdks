#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function AthenaSpectatorPlayerStatus.AthenaSpectatorPlayerStatus_C.Update Squad Member Data
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaRemotePlayerViewData* PlayerData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaSpectatorTeamStatus_C*TeamStatusWidget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaSpectatorPlayerStatus_C::Update_Squad_Member_Data(class UAthenaRemotePlayerViewData* PlayerData, class UAthenaSpectatorTeamStatus_C* TeamStatusWidget, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue1)
{
	static auto Func = Class->GetFunction("AthenaSpectatorPlayerStatus_C", "Update Squad Member Data");

	Params::UAthenaSpectatorPlayerStatus_C_Update_Squad_Member_Data_Params Parms;
	Parms.PlayerData = PlayerData;
	Parms.TeamStatusWidget = TeamStatusWidget;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSpectatorPlayerStatus.AthenaSpectatorPlayerStatus_C.Update Squad Datas
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaRemotePlayerViewData* Squad_1                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaRemotePlayerViewData* Squad_2                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaRemotePlayerViewData* Squad_3                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AFortPlayerStateAthena*>SquadMembers                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)

void UAthenaSpectatorPlayerStatus_C::Update_Squad_Datas(class UAthenaRemotePlayerViewData* Squad_1, class UAthenaRemotePlayerViewData* Squad_2, class UAthenaRemotePlayerViewData* Squad_3, const TArray<class AFortPlayerStateAthena*>& SquadMembers)
{
	static auto Func = Class->GetFunction("AthenaSpectatorPlayerStatus_C", "Update Squad Datas");

	Params::UAthenaSpectatorPlayerStatus_C_Update_Squad_Datas_Params Parms;
	Parms.Squad_1 = Squad_1;
	Parms.Squad_2 = Squad_2;
	Parms.Squad_3 = Squad_3;
	Parms.SquadMembers = SquadMembers;

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
// class AFortPlayerStateAthena*      NewFollowedPlayer                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSpectatorPlayerStatus_C::FollowedPlayerChanged(class AFortPlayerStateAthena* NewFollowedPlayer)
{
	static auto Func = Class->GetFunction("AthenaSpectatorPlayerStatus_C", "FollowedPlayerChanged");

	Params::UAthenaSpectatorPlayerStatus_C_FollowedPlayerChanged_Params Parms;
	Parms.NewFollowedPlayer = NewFollowedPlayer;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSpectatorPlayerStatus.AthenaSpectatorPlayerStatus_C.SquadDatasChanged
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaRemotePlayerViewData* SquadMember1                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaRemotePlayerViewData* SquadMember2                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaRemotePlayerViewData* SquadMember3                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSpectatorPlayerStatus_C::SquadDatasChanged(class UAthenaRemotePlayerViewData* SquadMember1, class UAthenaRemotePlayerViewData* SquadMember2, class UAthenaRemotePlayerViewData* SquadMember3)
{
	static auto Func = Class->GetFunction("AthenaSpectatorPlayerStatus_C", "SquadDatasChanged");

	Params::UAthenaSpectatorPlayerStatus_C_SquadDatasChanged_Params Parms;
	Parms.SquadMember1 = SquadMember1;
	Parms.SquadMember2 = SquadMember2;
	Parms.SquadMember3 = SquadMember3;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSpectatorPlayerStatus.AthenaSpectatorPlayerStatus_C.ExecuteUbergraph_AthenaSpectatorPlayerStatus
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaRemotePlayerViewData* K2Node_Event_SquadMember1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaRemotePlayerViewData* K2Node_Event_SquadMember2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaRemotePlayerViewData* K2Node_Event_SquadMember3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_PlayerNameText                                      (ConstParm)
// int32                              K2Node_Event_TeamNumber                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_TeamColor                                           (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// class AFortPlayerStateAthena*      K2Node_Event_NewFollowedPlayer                                   (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSpectatorPlayerStatus_C::ExecuteUbergraph_AthenaSpectatorPlayerStatus(int32 EntryPoint, class UAthenaRemotePlayerViewData* K2Node_Event_SquadMember1, class UAthenaRemotePlayerViewData* K2Node_Event_SquadMember2, class UAthenaRemotePlayerViewData* K2Node_Event_SquadMember3, class FText K2Node_Event_PlayerNameText, int32 K2Node_Event_TeamNumber, const struct FLinearColor& K2Node_Event_TeamColor, class FText CallFunc_Conv_IntToText_ReturnValue, class AFortPlayerStateAthena* K2Node_Event_NewFollowedPlayer)
{
	static auto Func = Class->GetFunction("AthenaSpectatorPlayerStatus_C", "ExecuteUbergraph_AthenaSpectatorPlayerStatus");

	Params::UAthenaSpectatorPlayerStatus_C_ExecuteUbergraph_AthenaSpectatorPlayerStatus_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_SquadMember1 = K2Node_Event_SquadMember1;
	Parms.K2Node_Event_SquadMember2 = K2Node_Event_SquadMember2;
	Parms.K2Node_Event_SquadMember3 = K2Node_Event_SquadMember3;
	Parms.K2Node_Event_PlayerNameText = K2Node_Event_PlayerNameText;
	Parms.K2Node_Event_TeamNumber = K2Node_Event_TeamNumber;
	Parms.K2Node_Event_TeamColor = K2Node_Event_TeamColor;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_Event_NewFollowedPlayer = K2Node_Event_NewFollowedPlayer;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
