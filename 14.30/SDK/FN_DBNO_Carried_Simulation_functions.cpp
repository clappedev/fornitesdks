// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DBNO_Carried_Simulation.DBNO_Carried_Simulation_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               InPose                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UDBNO_Carried_Simulation_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function DBNO_Carried_Simulation.DBNO_Carried_Simulation_C.AnimGraph");

	UDBNO_Carried_Simulation_C_AnimGraph_Params params;
	params.InPose = InPose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function DBNO_Carried_Simulation.DBNO_Carried_Simulation_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDBNO_Carried_Simulation_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function DBNO_Carried_Simulation.DBNO_Carried_Simulation_C.BlueprintUpdateAnimation");

	UDBNO_Carried_Simulation_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBNO_Carried_Simulation.DBNO_Carried_Simulation_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UDBNO_Carried_Simulation_C::BlueprintInitializeAnimation()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function DBNO_Carried_Simulation.DBNO_Carried_Simulation_C.BlueprintInitializeAnimation");

	UDBNO_Carried_Simulation_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBNO_Carried_Simulation.DBNO_Carried_Simulation_C.ExecuteUbergraph_DBNO_Carried_Simulation
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDBNO_Carried_Simulation_C::ExecuteUbergraph_DBNO_Carried_Simulation(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function DBNO_Carried_Simulation.DBNO_Carried_Simulation_C.ExecuteUbergraph_DBNO_Carried_Simulation");

	UDBNO_Carried_Simulation_C_ExecuteUbergraph_DBNO_Carried_Simulation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
