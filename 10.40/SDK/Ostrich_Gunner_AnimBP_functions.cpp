#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function Ostrich_Gunner_AnimBP.Ostrich_Gunner_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UOstrich_Gunner_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("Ostrich_Gunner_AnimBP_C", "AnimGraph");

	Params::UOstrich_Gunner_AnimBP_C_AnimGraph_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}

// Function Ostrich_Gunner_AnimBP.Ostrich_Gunner_AnimBP_C.ExecuteUbergraph_Ostrich_Gunner_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOstrich_Gunner_AnimBP_C::ExecuteUbergraph_Ostrich_Gunner_AnimBP(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("Ostrich_Gunner_AnimBP_C", "ExecuteUbergraph_Ostrich_Gunner_AnimBP");

	Params::UOstrich_Gunner_AnimBP_C_ExecuteUbergraph_Ostrich_Gunner_AnimBP_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
