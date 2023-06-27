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

// Function HydrogenUI.HydrogenWidgetBase.OnMutatorAvailable
// (Native, Protected, BlueprintCallable)
// Parameters:
// class AFortGameplayMutator*    MutatorActor                   (Parm, ZeroConstructor, IsPlainOldData)

void UHydrogenWidgetBase::OnMutatorAvailable(class AFortGameplayMutator* MutatorActor)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HydrogenUI.HydrogenWidgetBase.OnMutatorAvailable");

	UHydrogenWidgetBase_OnMutatorAvailable_Params params;
	params.MutatorActor = MutatorActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HydrogenUI.HydrogenWidgetBase.MutatorReady
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortAthenaMutator_Hydrogen* MutatorActor                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UHydrogenWidgetBase::MutatorReady(class AFortAthenaMutator_Hydrogen* MutatorActor)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HydrogenUI.HydrogenWidgetBase.MutatorReady");

	UHydrogenWidgetBase_MutatorReady_Params params;
	params.MutatorActor = MutatorActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HydrogenUI.HydrogenWidgetBase.GetHydrogenMutator
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AFortAthenaMutator_Hydrogen* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AFortAthenaMutator_Hydrogen* UHydrogenWidgetBase::GetHydrogenMutator()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HydrogenUI.HydrogenWidgetBase.GetHydrogenMutator");

	UHydrogenWidgetBase_GetHydrogenMutator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HydrogenUI.HydrogenWidgetBase.GetCaptureProgressPercent
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AHydrogenObjectiveActor* InObjective                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UHydrogenWidgetBase::GetCaptureProgressPercent(class AHydrogenObjectiveActor* InObjective)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HydrogenUI.HydrogenWidgetBase.GetCaptureProgressPercent");

	UHydrogenWidgetBase_GetCaptureProgressPercent_Params params;
	params.InObjective = InObjective;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
