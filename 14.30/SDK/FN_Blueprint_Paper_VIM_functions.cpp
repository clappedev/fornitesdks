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

// Function Blueprint_Paper_VIM.Blueprint_Paper_VIM_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UBlueprint_Paper_VIM_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Blueprint_Paper_VIM.Blueprint_Paper_VIM_C.AnimGraph");

	UBlueprint_Paper_VIM_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function Blueprint_Paper_VIM.Blueprint_Paper_VIM_C.ExecuteUbergraph_Blueprint_Paper_VIM
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBlueprint_Paper_VIM_C::ExecuteUbergraph_Blueprint_Paper_VIM(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Blueprint_Paper_VIM.Blueprint_Paper_VIM_C.ExecuteUbergraph_Blueprint_Paper_VIM");

	UBlueprint_Paper_VIM_C_ExecuteUbergraph_Blueprint_Paper_VIM_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
