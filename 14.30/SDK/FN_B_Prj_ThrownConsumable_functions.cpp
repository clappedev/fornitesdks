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

// Function B_Prj_ThrownConsumable.B_Prj_ThrownConsumable_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_ThrownConsumable_C::UserConstructionScript()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_ThrownConsumable.B_Prj_ThrownConsumable_C.UserConstructionScript");

	AB_Prj_ThrownConsumable_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_ThrownConsumable.B_Prj_ThrownConsumable_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Prj_ThrownConsumable_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_ThrownConsumable.B_Prj_ThrownConsumable_C.ReceiveBeginPlay");

	AB_Prj_ThrownConsumable_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_ThrownConsumable.B_Prj_ThrownConsumable_C.OnExploded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          HitActors                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FHitResult>      HitResults                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AB_Prj_ThrownConsumable_C::OnExploded(TArray<class AActor*> HitActors, TArray<struct FHitResult> HitResults)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_ThrownConsumable.B_Prj_ThrownConsumable_C.OnExploded");

	AB_Prj_ThrownConsumable_C_OnExploded_Params params;
	params.HitActors = HitActors;
	params.HitResults = HitResults;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_ThrownConsumable.B_Prj_ThrownConsumable_C.OnBounce
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_Prj_ThrownConsumable_C::OnBounce(const struct FHitResult& Hit)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_ThrownConsumable.B_Prj_ThrownConsumable_C.OnBounce");

	AB_Prj_ThrownConsumable_C_OnBounce_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_ThrownConsumable.B_Prj_ThrownConsumable_C.OnStop
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_Prj_ThrownConsumable_C::OnStop(const struct FHitResult& Hit)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_ThrownConsumable.B_Prj_ThrownConsumable_C.OnStop");

	AB_Prj_ThrownConsumable_C_OnStop_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_ThrownConsumable.B_Prj_ThrownConsumable_C.ResetSimulatedComponents
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_ThrownConsumable_C::ResetSimulatedComponents()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_ThrownConsumable.B_Prj_ThrownConsumable_C.ResetSimulatedComponents");

	AB_Prj_ThrownConsumable_C_ResetSimulatedComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_ThrownConsumable.B_Prj_ThrownConsumable_C.ExecuteUbergraph_B_Prj_ThrownConsumable
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_ThrownConsumable_C::ExecuteUbergraph_B_Prj_ThrownConsumable(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_ThrownConsumable.B_Prj_ThrownConsumable_C.ExecuteUbergraph_B_Prj_ThrownConsumable");

	AB_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
