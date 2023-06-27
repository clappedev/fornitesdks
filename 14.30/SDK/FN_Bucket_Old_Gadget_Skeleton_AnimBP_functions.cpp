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

// Function Bucket_Old_Gadget_Skeleton_AnimBP.Bucket_Old_Gadget_Skeleton_AnimBP_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               InPose                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UBucket_Old_Gadget_Skeleton_AnimBP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Bucket_Old_Gadget_Skeleton_AnimBP.Bucket_Old_Gadget_Skeleton_AnimBP_C.AnimGraph");

	UBucket_Old_Gadget_Skeleton_AnimBP_C_AnimGraph_Params params;
	params.InPose = InPose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function Bucket_Old_Gadget_Skeleton_AnimBP.Bucket_Old_Gadget_Skeleton_AnimBP_C.ExecuteUbergraph_Bucket_Old_Gadget_Skeleton_AnimBP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBucket_Old_Gadget_Skeleton_AnimBP_C::ExecuteUbergraph_Bucket_Old_Gadget_Skeleton_AnimBP(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Bucket_Old_Gadget_Skeleton_AnimBP.Bucket_Old_Gadget_Skeleton_AnimBP_C.ExecuteUbergraph_Bucket_Old_Gadget_Skeleton_AnimBP");

	UBucket_Old_Gadget_Skeleton_AnimBP_C_ExecuteUbergraph_Bucket_Old_Gadget_Skeleton_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
