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

// Function DBNO_Carried.DBNO_Carried_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UDBNO_Carried_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function DBNO_Carried.DBNO_Carried_C.AnimGraph");

	UDBNO_Carried_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function DBNO_Carried.DBNO_Carried_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DBNO_Carried_AnimGraphNode_ApplyAdditive_56B19EE040BEEBC25D674F8DC99831B9
// (BlueprintEvent)

void UDBNO_Carried_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DBNO_Carried_AnimGraphNode_ApplyAdditive_56B19EE040BEEBC25D674F8DC99831B9()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function DBNO_Carried.DBNO_Carried_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DBNO_Carried_AnimGraphNode_ApplyAdditive_56B19EE040BEEBC25D674F8DC99831B9");

	UDBNO_Carried_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DBNO_Carried_AnimGraphNode_ApplyAdditive_56B19EE040BEEBC25D674F8DC99831B9_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBNO_Carried.DBNO_Carried_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DBNO_Carried_AnimGraphNode_ModifyBone_59E069244645BEF22808AB9196186F3F
// (BlueprintEvent)

void UDBNO_Carried_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DBNO_Carried_AnimGraphNode_ModifyBone_59E069244645BEF22808AB9196186F3F()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function DBNO_Carried.DBNO_Carried_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DBNO_Carried_AnimGraphNode_ModifyBone_59E069244645BEF22808AB9196186F3F");

	UDBNO_Carried_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DBNO_Carried_AnimGraphNode_ModifyBone_59E069244645BEF22808AB9196186F3F_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBNO_Carried.DBNO_Carried_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDBNO_Carried_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function DBNO_Carried.DBNO_Carried_C.BlueprintUpdateAnimation");

	UDBNO_Carried_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBNO_Carried.DBNO_Carried_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UDBNO_Carried_C::BlueprintInitializeAnimation()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function DBNO_Carried.DBNO_Carried_C.BlueprintInitializeAnimation");

	UDBNO_Carried_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DBNO_Carried.DBNO_Carried_C.ExecuteUbergraph_DBNO_Carried
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDBNO_Carried_C::ExecuteUbergraph_DBNO_Carried(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function DBNO_Carried.DBNO_Carried_C.ExecuteUbergraph_DBNO_Carried");

	UDBNO_Carried_C_ExecuteUbergraph_DBNO_Carried_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
