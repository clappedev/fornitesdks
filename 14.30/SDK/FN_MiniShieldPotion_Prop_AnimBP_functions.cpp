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

// Function MiniShieldPotion_Prop_AnimBP.MiniShieldPotion_Prop_AnimBP_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UMiniShieldPotion_Prop_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MiniShieldPotion_Prop_AnimBP.MiniShieldPotion_Prop_AnimBP_C.AnimGraph");

	UMiniShieldPotion_Prop_AnimBP_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function MiniShieldPotion_Prop_AnimBP.MiniShieldPotion_Prop_AnimBP_C.ExecuteUbergraph_MiniShieldPotion_Prop_AnimBP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMiniShieldPotion_Prop_AnimBP_C::ExecuteUbergraph_MiniShieldPotion_Prop_AnimBP(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MiniShieldPotion_Prop_AnimBP.MiniShieldPotion_Prop_AnimBP_C.ExecuteUbergraph_MiniShieldPotion_Prop_AnimBP");

	UMiniShieldPotion_Prop_AnimBP_C_ExecuteUbergraph_MiniShieldPotion_Prop_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
