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

// Function BP_AssaultRifle_FrontClip_BackAction.BP_AssaultRifle_FrontClip_BackAction_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UBP_AssaultRifle_FrontClip_BackAction_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_AssaultRifle_FrontClip_BackAction.BP_AssaultRifle_FrontClip_BackAction_C.AnimGraph");

	UBP_AssaultRifle_FrontClip_BackAction_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function BP_AssaultRifle_FrontClip_BackAction.BP_AssaultRifle_FrontClip_BackAction_C.ExecuteUbergraph_BP_AssaultRifle_FrontClip_BackAction
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_AssaultRifle_FrontClip_BackAction_C::ExecuteUbergraph_BP_AssaultRifle_FrontClip_BackAction(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_AssaultRifle_FrontClip_BackAction.BP_AssaultRifle_FrontClip_BackAction_C.ExecuteUbergraph_BP_AssaultRifle_FrontClip_BackAction");

	UBP_AssaultRifle_FrontClip_BackAction_C_ExecuteUbergraph_BP_AssaultRifle_FrontClip_BackAction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
