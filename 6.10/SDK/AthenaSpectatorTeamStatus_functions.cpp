#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function AthenaSpectatorTeamStatus.AthenaSpectatorTeamStatus_C.UpdatePlayerData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaRemotePlayerViewData* NewSource                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerStateAthena*      CallFunc_GetPlayerState_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()

void UAthenaSpectatorTeamStatus_C::UpdatePlayerData(class UAthenaRemotePlayerViewData* NewSource, class AFortPlayerStateAthena* CallFunc_GetPlayerState_ReturnValue, const class FString& CallFunc_GetPlayerName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaSpectatorTeamStatus_C", "UpdatePlayerData");

	Params::UAthenaSpectatorTeamStatus_C_UpdatePlayerData_Params Parms;
	Parms.NewSource = NewSource;
	Parms.CallFunc_GetPlayerState_ReturnValue = CallFunc_GetPlayerState_ReturnValue;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSpectatorTeamStatus.AthenaSpectatorTeamStatus_C.NewEventDispatcher_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaSpectatorTeamStatus_C::NewEventDispatcher_0__DelegateSignature()
{
	static auto Func = Class->GetFunction("AthenaSpectatorTeamStatus_C", "NewEventDispatcher_0__DelegateSignature");

	Params::UAthenaSpectatorTeamStatus_C_NewEventDispatcher_0__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
