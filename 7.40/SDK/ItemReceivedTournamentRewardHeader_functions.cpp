#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function ItemReceivedTournamentRewardHeader.ItemReceivedTournamentRewardHeader_C.InitFromGiftBoxItem_BP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemReceivedTournamentRewardHeader_C::InitFromGiftBoxItem_BP()
{
	static auto Func = Class->GetFunction("ItemReceivedTournamentRewardHeader_C", "InitFromGiftBoxItem_BP");

	Params::UItemReceivedTournamentRewardHeader_C_InitFromGiftBoxItem_BP_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ItemReceivedTournamentRewardHeader.ItemReceivedTournamentRewardHeader_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemReceivedTournamentRewardHeader_C::OnInitialized()
{
	static auto Func = Class->GetFunction("ItemReceivedTournamentRewardHeader_C", "OnInitialized");

	Params::UItemReceivedTournamentRewardHeader_C_OnInitialized_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ItemReceivedTournamentRewardHeader.ItemReceivedTournamentRewardHeader_C.ExecuteUbergraph_ItemReceivedTournamentRewardHeader
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_TryGetParamString_OutValue                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_TryGetParamString_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemReceivedTournamentRewardHeader_C::ExecuteUbergraph_ItemReceivedTournamentRewardHeader(int32 EntryPoint, const class FString& CallFunc_TryGetParamString_OutValue, bool CallFunc_TryGetParamString_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemReceivedTournamentRewardHeader_C", "ExecuteUbergraph_ItemReceivedTournamentRewardHeader");

	Params::UItemReceivedTournamentRewardHeader_C_ExecuteUbergraph_ItemReceivedTournamentRewardHeader_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_TryGetParamString_OutValue = CallFunc_TryGetParamString_OutValue;
	Parms.CallFunc_TryGetParamString_ReturnValue = CallFunc_TryGetParamString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
