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

// Function ControlRig.ControlRigComponent.OnPreInitialize
// (Native, Event, Public, BlueprintEvent)

void UControlRigComponent::OnPreInitialize()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.OnPreInitialize");

	UControlRigComponent_OnPreInitialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRigComponent.OnPreEvaluate
// (Native, Event, Public, BlueprintEvent)

void UControlRigComponent::OnPreEvaluate()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.OnPreEvaluate");

	UControlRigComponent_OnPreEvaluate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRigComponent.OnPostInitialize
// (Native, Event, Public, BlueprintEvent)

void UControlRigComponent::OnPostInitialize()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.OnPostInitialize");

	UControlRigComponent_OnPostInitialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRigComponent.OnPostEvaluate
// (Native, Event, Public, BlueprintEvent)

void UControlRigComponent::OnPostEvaluate()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.OnPostEvaluate");

	UControlRigComponent_OnPostEvaluate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlRig.ControlRigComponent.BP_GetControlRig
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UControlRig*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UControlRig* UControlRigComponent::BP_GetControlRig()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ControlRig.ControlRigComponent.BP_GetControlRig");

	UControlRigComponent_BP_GetControlRig_Params params;

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
