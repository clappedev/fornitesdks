#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function BP_Auto_Shotgun_Drum_Side_Action.BP_Auto_Shotgun_Drum_Side_Action_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UBP_Auto_Shotgun_Drum_Side_Action_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("BP_Auto_Shotgun_Drum_Side_Action_C", "AnimGraph");

	Params::UBP_Auto_Shotgun_Drum_Side_Action_C_AnimGraph_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}

// Function BP_Auto_Shotgun_Drum_Side_Action.BP_Auto_Shotgun_Drum_Side_Action_C.ExecuteUbergraph_BP_Auto_Shotgun_Drum_Side_Action
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Auto_Shotgun_Drum_Side_Action_C::ExecuteUbergraph_BP_Auto_Shotgun_Drum_Side_Action(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("BP_Auto_Shotgun_Drum_Side_Action_C", "ExecuteUbergraph_BP_Auto_Shotgun_Drum_Side_Action");

	Params::UBP_Auto_Shotgun_Drum_Side_Action_C_ExecuteUbergraph_BP_Auto_Shotgun_Drum_Side_Action_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
