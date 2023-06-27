#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function F_LRG_CAU_Penny_Head_01_Dyn_AnimBp.F_LRG_CAU_Penny_Head_01_Dyn_AnimBp_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UF_LRG_CAU_Penny_Head_01_Dyn_AnimBp_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("F_LRG_CAU_Penny_Head_01_Dyn_AnimBp_C", "AnimGraph");

	Params::UF_LRG_CAU_Penny_Head_01_Dyn_AnimBp_C_AnimGraph_Params Parms;
	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);
	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}

// Function F_LRG_CAU_Penny_Head_01_Dyn_AnimBp.F_LRG_CAU_Penny_Head_01_Dyn_AnimBp_C.ExecuteUbergraph_F_LRG_CAU_Penny_Head_01_Dyn_AnimBp
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UF_LRG_CAU_Penny_Head_01_Dyn_AnimBp_C::ExecuteUbergraph_F_LRG_CAU_Penny_Head_01_Dyn_AnimBp(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("F_LRG_CAU_Penny_Head_01_Dyn_AnimBp_C", "ExecuteUbergraph_F_LRG_CAU_Penny_Head_01_Dyn_AnimBp");

	Params::UF_LRG_CAU_Penny_Head_01_Dyn_AnimBp_C_ExecuteUbergraph_F_LRG_CAU_Penny_Head_01_Dyn_AnimBp_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
