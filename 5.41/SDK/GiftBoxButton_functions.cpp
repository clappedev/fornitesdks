#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function GiftBoxButton.GiftBoxButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UGiftBoxButton_C::Construct()
{
	static auto Func = Class->GetFunction("GiftBoxButton_C", "Construct");

	Params::UGiftBoxButton_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function GiftBoxButton.GiftBoxButton_C.PlayGiftSelectedAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGiftBoxButton_C::PlayGiftSelectedAnimation(bool bIsSelected)
{
	static auto Func = Class->GetFunction("GiftBoxButton_C", "PlayGiftSelectedAnimation");

	Params::UGiftBoxButton_C_PlayGiftSelectedAnimation_Params Parms;
	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}

// Function GiftBoxButton.GiftBoxButton_C.ExecuteUbergraph_GiftBoxButton
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsSelected                                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGiftBoxButton_C::ExecuteUbergraph_GiftBoxButton(int32 EntryPoint, bool K2Node_Event_bIsSelected)
{
	static auto Func = Class->GetFunction("GiftBoxButton_C", "ExecuteUbergraph_GiftBoxButton");

	Params::UGiftBoxButton_C_ExecuteUbergraph_GiftBoxButton_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
