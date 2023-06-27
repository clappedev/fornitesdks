#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function ChatMessageEntry.ChatMessageEntry_C.OnEntryUpdated_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UChatMessageEntry_C::OnEntryUpdated_1()
{
	static auto Func = Class->GetFunction("ChatMessageEntry_C", "OnEntryUpdated_1");

	Params::UChatMessageEntry_C_OnEntryUpdated_1_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ChatMessageEntry.ChatMessageEntry_C.BndEvt__Button_FocusTarget_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UChatMessageEntry_C::BndEvt__Button_FocusTarget_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("ChatMessageEntry_C", "BndEvt__Button_FocusTarget_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature");

	Params::UChatMessageEntry_C_BndEvt__Button_FocusTarget_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ChatMessageEntry.ChatMessageEntry_C.ExecuteUbergraph_ChatMessageEntry
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatMessageEntry_C::ExecuteUbergraph_ChatMessageEntry(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("ChatMessageEntry_C", "ExecuteUbergraph_ChatMessageEntry");

	Params::UChatMessageEntry_C_ExecuteUbergraph_ChatMessageEntry_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
