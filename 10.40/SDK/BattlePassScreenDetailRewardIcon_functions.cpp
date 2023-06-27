#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function BattlePassScreenDetailRewardIcon.BattlePassScreenDetailRewardIcon_C.BPSetup
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortItem*                   InReward                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreenDetailRewardIcon_C::BPSetup(class UFortItem* InReward)
{
	static auto Func = Class->GetFunction("BattlePassScreenDetailRewardIcon_C", "BPSetup");

	Params::UBattlePassScreenDetailRewardIcon_C_BPSetup_Params Parms;
	Parms.InReward = InReward;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BattlePassScreenDetailRewardIcon.BattlePassScreenDetailRewardIcon_C.ExecuteUbergraph_BattlePassScreenDetailRewardIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   K2Node_Event_InReward                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreenDetailRewardIcon_C::ExecuteUbergraph_BattlePassScreenDetailRewardIcon(int32 EntryPoint, class UFortItem* K2Node_Event_InReward)
{
	static auto Func = Class->GetFunction("BattlePassScreenDetailRewardIcon_C", "ExecuteUbergraph_BattlePassScreenDetailRewardIcon");

	Params::UBattlePassScreenDetailRewardIcon_C_ExecuteUbergraph_BattlePassScreenDetailRewardIcon_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_InReward = K2Node_Event_InReward;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
