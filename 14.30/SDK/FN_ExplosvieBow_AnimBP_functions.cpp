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

// Function ExplosvieBow_AnimBP.ExplosvieBow_AnimBP_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UExplosvieBow_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ExplosvieBow_AnimBP.ExplosvieBow_AnimBP_C.AnimGraph");

	UExplosvieBow_AnimBP_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function ExplosvieBow_AnimBP.ExplosvieBow_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ExplosvieBow_AnimBP_AnimGraphNode_ModifyBone_D0BC44E84FB0F05DC49A24B18D5B2D51
// (BlueprintEvent)

void UExplosvieBow_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ExplosvieBow_AnimBP_AnimGraphNode_ModifyBone_D0BC44E84FB0F05DC49A24B18D5B2D51()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ExplosvieBow_AnimBP.ExplosvieBow_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ExplosvieBow_AnimBP_AnimGraphNode_ModifyBone_D0BC44E84FB0F05DC49A24B18D5B2D51");

	UExplosvieBow_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ExplosvieBow_AnimBP_AnimGraphNode_ModifyBone_D0BC44E84FB0F05DC49A24B18D5B2D51_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExplosvieBow_AnimBP.ExplosvieBow_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ExplosvieBow_AnimBP_AnimGraphNode_ModifyBone_0E1011B841DA7A109A69F18ED59C9A93
// (BlueprintEvent)

void UExplosvieBow_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ExplosvieBow_AnimBP_AnimGraphNode_ModifyBone_0E1011B841DA7A109A69F18ED59C9A93()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ExplosvieBow_AnimBP.ExplosvieBow_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ExplosvieBow_AnimBP_AnimGraphNode_ModifyBone_0E1011B841DA7A109A69F18ED59C9A93");

	UExplosvieBow_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ExplosvieBow_AnimBP_AnimGraphNode_ModifyBone_0E1011B841DA7A109A69F18ED59C9A93_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExplosvieBow_AnimBP.ExplosvieBow_AnimBP_C.ExecuteUbergraph_ExplosvieBow_AnimBP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UExplosvieBow_AnimBP_C::ExecuteUbergraph_ExplosvieBow_AnimBP(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ExplosvieBow_AnimBP.ExplosvieBow_AnimBP_C.ExecuteUbergraph_ExplosvieBow_AnimBP");

	UExplosvieBow_AnimBP_C_ExecuteUbergraph_ExplosvieBow_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
