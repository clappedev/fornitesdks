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

// Function SK_M249_Skeleton_Dynamic_AnimBP.SK_M249_Skeleton_Dynamic_AnimBP_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               InPose                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void USK_M249_Skeleton_Dynamic_AnimBP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SK_M249_Skeleton_Dynamic_AnimBP.SK_M249_Skeleton_Dynamic_AnimBP_C.AnimGraph");

	USK_M249_Skeleton_Dynamic_AnimBP_C_AnimGraph_Params params;
	params.InPose = InPose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function SK_M249_Skeleton_Dynamic_AnimBP.SK_M249_Skeleton_Dynamic_AnimBP_C.ExecuteUbergraph_SK_M249_Skeleton_Dynamic_AnimBP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USK_M249_Skeleton_Dynamic_AnimBP_C::ExecuteUbergraph_SK_M249_Skeleton_Dynamic_AnimBP(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SK_M249_Skeleton_Dynamic_AnimBP.SK_M249_Skeleton_Dynamic_AnimBP_C.ExecuteUbergraph_SK_M249_Skeleton_Dynamic_AnimBP");

	USK_M249_Skeleton_Dynamic_AnimBP_C_ExecuteUbergraph_SK_M249_Skeleton_Dynamic_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
