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

// Function Pistol_Revolver_SideAction_AnimBP1.Pistol_Revolver_SideAction_AnimBP1_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UPistol_Revolver_SideAction_AnimBP1_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Pistol_Revolver_SideAction_AnimBP1.Pistol_Revolver_SideAction_AnimBP1_C.AnimGraph");

	UPistol_Revolver_SideAction_AnimBP1_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function Pistol_Revolver_SideAction_AnimBP1.Pistol_Revolver_SideAction_AnimBP1_C.AnimNotify_Revolver_RotChamber
// (BlueprintCallable, BlueprintEvent)

void UPistol_Revolver_SideAction_AnimBP1_C::AnimNotify_Revolver_RotChamber()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Pistol_Revolver_SideAction_AnimBP1.Pistol_Revolver_SideAction_AnimBP1_C.AnimNotify_Revolver_RotChamber");

	UPistol_Revolver_SideAction_AnimBP1_C_AnimNotify_Revolver_RotChamber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pistol_Revolver_SideAction_AnimBP1.Pistol_Revolver_SideAction_AnimBP1_C.ExecuteUbergraph_Pistol_Revolver_SideAction_AnimBP1
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPistol_Revolver_SideAction_AnimBP1_C::ExecuteUbergraph_Pistol_Revolver_SideAction_AnimBP1(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Pistol_Revolver_SideAction_AnimBP1.Pistol_Revolver_SideAction_AnimBP1_C.ExecuteUbergraph_Pistol_Revolver_SideAction_AnimBP1");

	UPistol_Revolver_SideAction_AnimBP1_C_ExecuteUbergraph_Pistol_Revolver_SideAction_AnimBP1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
