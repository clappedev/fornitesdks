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

// Function GrapplingHookGun_AnimBP.GrapplingHookGun_AnimBP_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UGrapplingHookGun_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GrapplingHookGun_AnimBP.GrapplingHookGun_AnimBP_C.AnimGraph");

	UGrapplingHookGun_AnimBP_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function GrapplingHookGun_AnimBP.GrapplingHookGun_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGrapplingHookGun_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GrapplingHookGun_AnimBP.GrapplingHookGun_AnimBP_C.BlueprintUpdateAnimation");

	UGrapplingHookGun_AnimBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrapplingHookGun_AnimBP.GrapplingHookGun_AnimBP_C.ExecuteUbergraph_GrapplingHookGun_AnimBP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGrapplingHookGun_AnimBP_C::ExecuteUbergraph_GrapplingHookGun_AnimBP(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GrapplingHookGun_AnimBP.GrapplingHookGun_AnimBP_C.ExecuteUbergraph_GrapplingHookGun_AnimBP");

	UGrapplingHookGun_AnimBP_C_ExecuteUbergraph_GrapplingHookGun_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
