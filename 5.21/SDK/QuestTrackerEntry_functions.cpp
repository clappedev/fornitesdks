#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function QuestTrackerEntry.QuestTrackerEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UQuestTrackerEntry_C::Construct()
{
	static auto Func = Class->GetFunction("QuestTrackerEntry_C", "Construct");

	Params::UQuestTrackerEntry_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function QuestTrackerEntry.QuestTrackerEntry_C.ExecuteUbergraph_QuestTrackerEntry
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestTrackerEntry_C::ExecuteUbergraph_QuestTrackerEntry(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("QuestTrackerEntry_C", "ExecuteUbergraph_QuestTrackerEntry");

	Params::UQuestTrackerEntry_C_ExecuteUbergraph_QuestTrackerEntry_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
