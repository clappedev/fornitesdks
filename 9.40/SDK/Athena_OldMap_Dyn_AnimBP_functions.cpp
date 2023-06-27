#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function Athena_OldMap_Dyn_AnimBP.Athena_OldMap_Dyn_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UAthena_OldMap_Dyn_AnimBP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("Athena_OldMap_Dyn_AnimBP_C", "AnimGraph");

	Params::UAthena_OldMap_Dyn_AnimBP_C_AnimGraph_Params Parms;
	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);
	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}

// Function Athena_OldMap_Dyn_AnimBP.Athena_OldMap_Dyn_AnimBP_C.ExecuteUbergraph_Athena_OldMap_Dyn_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthena_OldMap_Dyn_AnimBP_C::ExecuteUbergraph_Athena_OldMap_Dyn_AnimBP(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("Athena_OldMap_Dyn_AnimBP_C", "ExecuteUbergraph_Athena_OldMap_Dyn_AnimBP");

	Params::UAthena_OldMap_Dyn_AnimBP_C_ExecuteUbergraph_Athena_OldMap_Dyn_AnimBP_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
