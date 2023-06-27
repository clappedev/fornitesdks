#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function Military_Launcher_Sk_animBP.Military_Launcher_Sk_animBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UMilitary_Launcher_Sk_animBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("Military_Launcher_Sk_animBP_C", "AnimGraph");

	Params::UMilitary_Launcher_Sk_animBP_C_AnimGraph_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}

// Function Military_Launcher_Sk_animBP.Military_Launcher_Sk_animBP_C.ExecuteUbergraph_Military_Launcher_Sk_animBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMilitary_Launcher_Sk_animBP_C::ExecuteUbergraph_Military_Launcher_Sk_animBP(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("Military_Launcher_Sk_animBP_C", "ExecuteUbergraph_Military_Launcher_Sk_animBP");

	Params::UMilitary_Launcher_Sk_animBP_C_ExecuteUbergraph_Military_Launcher_Sk_animBP_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
