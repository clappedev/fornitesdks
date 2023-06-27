#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function Mech_Veh_AnimBP.Mech_Veh_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UMech_Veh_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("Mech_Veh_AnimBP_C", "AnimGraph");

	Params::UMech_Veh_AnimBP_C_AnimGraph_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}

// Function Mech_Veh_AnimBP.Mech_Veh_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Mech_Veh_AnimBP_AnimGraphNode_ControlRig_3068211A4D983495BCC1E7BABE4149E1
// (BlueprintEvent)
// Parameters:

void UMech_Veh_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Mech_Veh_AnimBP_AnimGraphNode_ControlRig_3068211A4D983495BCC1E7BABE4149E1()
{
	static auto Func = Class->GetFunction("Mech_Veh_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Mech_Veh_AnimBP_AnimGraphNode_ControlRig_3068211A4D983495BCC1E7BABE4149E1");

	Params::UMech_Veh_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Mech_Veh_AnimBP_AnimGraphNode_ControlRig_3068211A4D983495BCC1E7BABE4149E1_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Mech_Veh_AnimBP.Mech_Veh_AnimBP_C.StartSeatTransition_DriverEnter
// (Event, Public, BlueprintEvent)
// Parameters:

void UMech_Veh_AnimBP_C::StartSeatTransition_DriverEnter()
{
	static auto Func = Class->GetFunction("Mech_Veh_AnimBP_C", "StartSeatTransition_DriverEnter");

	Params::UMech_Veh_AnimBP_C_StartSeatTransition_DriverEnter_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Mech_Veh_AnimBP.Mech_Veh_AnimBP_C.StopSeatTransition_DriverEnter
// (Event, Public, BlueprintEvent)
// Parameters:

void UMech_Veh_AnimBP_C::StopSeatTransition_DriverEnter()
{
	static auto Func = Class->GetFunction("Mech_Veh_AnimBP_C", "StopSeatTransition_DriverEnter");

	Params::UMech_Veh_AnimBP_C_StopSeatTransition_DriverEnter_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Mech_Veh_AnimBP.Mech_Veh_AnimBP_C.StartSeatTransition_PassengerEnter
// (Event, Public, BlueprintEvent)
// Parameters:

void UMech_Veh_AnimBP_C::StartSeatTransition_PassengerEnter()
{
	static auto Func = Class->GetFunction("Mech_Veh_AnimBP_C", "StartSeatTransition_PassengerEnter");

	Params::UMech_Veh_AnimBP_C_StartSeatTransition_PassengerEnter_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Mech_Veh_AnimBP.Mech_Veh_AnimBP_C.StopSeatTransition_PassengerEnter
// (Event, Public, BlueprintEvent)
// Parameters:

void UMech_Veh_AnimBP_C::StopSeatTransition_PassengerEnter()
{
	static auto Func = Class->GetFunction("Mech_Veh_AnimBP_C", "StopSeatTransition_PassengerEnter");

	Params::UMech_Veh_AnimBP_C_StopSeatTransition_PassengerEnter_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Mech_Veh_AnimBP.Mech_Veh_AnimBP_C.ExecuteUbergraph_Mech_Veh_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMech_Veh_AnimBP_C::ExecuteUbergraph_Mech_Veh_AnimBP(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("Mech_Veh_AnimBP_C", "ExecuteUbergraph_Mech_Veh_AnimBP");

	Params::UMech_Veh_AnimBP_C_ExecuteUbergraph_Mech_Veh_AnimBP_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
