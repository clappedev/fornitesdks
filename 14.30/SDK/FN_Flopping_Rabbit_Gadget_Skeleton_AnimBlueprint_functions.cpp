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

// Function Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint.Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               InPose                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint.Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C.AnimGraph");

	UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C_AnimGraph_Params params;
	params.InPose = InPose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint.Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint.Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation");

	UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint.Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C.ExecuteUbergraph_Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C::ExecuteUbergraph_Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint.Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C.ExecuteUbergraph_Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint");

	UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
