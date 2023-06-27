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

// Function Mechanical_Engineer_Female_AnimBP.Mechanical_Engineer_Female_AnimBP_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               InPose                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UMechanical_Engineer_Female_AnimBP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Mechanical_Engineer_Female_AnimBP.Mechanical_Engineer_Female_AnimBP_C.AnimGraph");

	UMechanical_Engineer_Female_AnimBP_C_AnimGraph_Params params;
	params.InPose = InPose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function Mechanical_Engineer_Female_AnimBP.Mechanical_Engineer_Female_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMechanical_Engineer_Female_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Mechanical_Engineer_Female_AnimBP.Mechanical_Engineer_Female_AnimBP_C.BlueprintUpdateAnimation");

	UMechanical_Engineer_Female_AnimBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mechanical_Engineer_Female_AnimBP.Mechanical_Engineer_Female_AnimBP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UMechanical_Engineer_Female_AnimBP_C::BlueprintInitializeAnimation()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Mechanical_Engineer_Female_AnimBP.Mechanical_Engineer_Female_AnimBP_C.BlueprintInitializeAnimation");

	UMechanical_Engineer_Female_AnimBP_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mechanical_Engineer_Female_AnimBP.Mechanical_Engineer_Female_AnimBP_C.ExecuteUbergraph_Mechanical_Engineer_Female_AnimBP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMechanical_Engineer_Female_AnimBP_C::ExecuteUbergraph_Mechanical_Engineer_Female_AnimBP(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Mechanical_Engineer_Female_AnimBP.Mechanical_Engineer_Female_AnimBP_C.ExecuteUbergraph_Mechanical_Engineer_Female_AnimBP");

	UMechanical_Engineer_Female_AnimBP_C_ExecuteUbergraph_Mechanical_Engineer_Female_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
