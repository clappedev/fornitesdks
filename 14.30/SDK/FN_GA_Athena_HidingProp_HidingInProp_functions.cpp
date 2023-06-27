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

// Function GA_Athena_HidingProp_HidingInProp.GA_Athena_HidingProp_HidingInProp_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Athena_HidingProp_HidingInProp_C::K2_ActivateAbility()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_HidingProp_HidingInProp.GA_Athena_HidingProp_HidingInProp_C.K2_ActivateAbility");

	UGA_Athena_HidingProp_HidingInProp_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_HidingProp_HidingInProp.GA_Athena_HidingProp_HidingInProp_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_HidingProp_HidingInProp_C::K2_OnEndAbility(bool bWasCancelled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_HidingProp_HidingInProp.GA_Athena_HidingProp_HidingInProp_C.K2_OnEndAbility");

	UGA_Athena_HidingProp_HidingInProp_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_HidingProp_HidingInProp.GA_Athena_HidingProp_HidingInProp_C.GrapplerFailSafe
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_HidingProp_HidingInProp_C::GrapplerFailSafe()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_HidingProp_HidingInProp.GA_Athena_HidingProp_HidingInProp_C.GrapplerFailSafe");

	UGA_Athena_HidingProp_HidingInProp_C_GrapplerFailSafe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_HidingProp_HidingInProp.GA_Athena_HidingProp_HidingInProp_C.ExecuteUbergraph_GA_Athena_HidingProp_HidingInProp
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_HidingProp_HidingInProp_C::ExecuteUbergraph_GA_Athena_HidingProp_HidingInProp(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_HidingProp_HidingInProp.GA_Athena_HidingProp_HidingInProp_C.ExecuteUbergraph_GA_Athena_HidingProp_HidingInProp");

	UGA_Athena_HidingProp_HidingInProp_C_ExecuteUbergraph_GA_Athena_HidingProp_HidingInProp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
