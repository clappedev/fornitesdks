#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function PirateMap_AnimBP.PirateMap_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UPirateMap_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("PirateMap_AnimBP_C", "AnimGraph");

	Params::UPirateMap_AnimBP_C_AnimGraph_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}

// Function PirateMap_AnimBP.PirateMap_AnimBP_C.ExecuteUbergraph_PirateMap_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPirateMap_AnimBP_C::ExecuteUbergraph_PirateMap_AnimBP(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("PirateMap_AnimBP_C", "ExecuteUbergraph_PirateMap_AnimBP");

	Params::UPirateMap_AnimBP_C_ExecuteUbergraph_PirateMap_AnimBP_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
