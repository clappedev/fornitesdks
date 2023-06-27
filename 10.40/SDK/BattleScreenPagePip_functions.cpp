#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function BattleScreenPagePip.BattleScreenPagePip_C.OnSetPipActive
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bActive                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleScreenPagePip_C::OnSetPipActive(bool bActive)
{
	static auto Func = Class->GetFunction("BattleScreenPagePip_C", "OnSetPipActive");

	Params::UBattleScreenPagePip_C_OnSetPipActive_Params Parms;
	Parms.bActive = bActive;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BattleScreenPagePip.BattleScreenPagePip_C.ExecuteUbergraph_BattleScreenPagePip
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bActive                                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleScreenPagePip_C::ExecuteUbergraph_BattleScreenPagePip(int32 EntryPoint, bool K2Node_Event_bActive)
{
	static auto Func = Class->GetFunction("BattleScreenPagePip_C", "ExecuteUbergraph_BattleScreenPagePip");

	Params::UBattleScreenPagePip_C_ExecuteUbergraph_BattleScreenPagePip_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bActive = K2Node_Event_bActive;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
