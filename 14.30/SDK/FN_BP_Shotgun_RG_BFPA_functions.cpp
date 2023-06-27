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

// Function BP_Shotgun_RG_BFPA.BP_Shotgun_RG_BFPA_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UBP_Shotgun_RG_BFPA_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Shotgun_RG_BFPA.BP_Shotgun_RG_BFPA_C.AnimGraph");

	UBP_Shotgun_RG_BFPA_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function BP_Shotgun_RG_BFPA.BP_Shotgun_RG_BFPA_C.ExecuteUbergraph_BP_Shotgun_RG_BFPA
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Shotgun_RG_BFPA_C::ExecuteUbergraph_BP_Shotgun_RG_BFPA(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_Shotgun_RG_BFPA.BP_Shotgun_RG_BFPA_C.ExecuteUbergraph_BP_Shotgun_RG_BFPA");

	UBP_Shotgun_RG_BFPA_C_ExecuteUbergraph_BP_Shotgun_RG_BFPA_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
