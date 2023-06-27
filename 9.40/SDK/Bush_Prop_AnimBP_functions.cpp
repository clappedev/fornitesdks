#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function Bush_Prop_AnimBP.Bush_Prop_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UBush_Prop_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("Bush_Prop_AnimBP_C", "AnimGraph");

	Params::UBush_Prop_AnimBP_C_AnimGraph_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}

// Function Bush_Prop_AnimBP.Bush_Prop_AnimBP_C.ExecuteUbergraph_Bush_Prop_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBush_Prop_AnimBP_C::ExecuteUbergraph_Bush_Prop_AnimBP(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("Bush_Prop_AnimBP_C", "ExecuteUbergraph_Bush_Prop_AnimBP");

	Params::UBush_Prop_AnimBP_C_ExecuteUbergraph_Bush_Prop_AnimBP_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
