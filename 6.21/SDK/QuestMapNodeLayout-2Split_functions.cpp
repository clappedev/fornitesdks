#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function QuestMapNodeLayout-2Split.QuestMapNodeLayout-2Split_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UQuestMapNodeLayout_2Split_C::Construct()
{
	static auto Func = Class->GetFunction("QuestMapNodeLayout-2Split_C", "Construct");

	Params::UQuestMapNodeLayout_2Split_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function QuestMapNodeLayout-2Split.QuestMapNodeLayout-2Split_C.ExecuteUbergraph_QuestMapNodeLayout-2Split
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestMapNodeLayout_2Split_C::ExecuteUbergraph_QuestMapNodeLayout_2Split(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("QuestMapNodeLayout-2Split_C", "ExecuteUbergraph_QuestMapNodeLayout-2Split");

	Params::UQuestMapNodeLayout_2Split_C_ExecuteUbergraph_QuestMapNodeLayout_2Split_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
