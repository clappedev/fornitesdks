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

// Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.SetBalanceValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Stoke                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_EnvCampFire_C::SetBalanceValues(bool Stoke)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.SetBalanceValues");

	UGA_Athena_EnvCampFire_C_SetBalanceValues_Params params;
	params.Stoke = Stoke;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.SetCustomTargetingTrans
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Athena_EnvCampFire_C::SetCustomTargetingTrans()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.SetCustomTargetingTrans");

	UGA_Athena_EnvCampFire_C_SetCustomTargetingTrans_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.GetCustomAbilitySourceTransform
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UGA_Athena_EnvCampFire_C::GetCustomAbilitySourceTransform()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.GetCustomAbilitySourceTransform");

	UGA_Athena_EnvCampFire_C_GetCustomAbilitySourceTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.Cancelled_EDAB937443020D47385625B06E892DF0
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_EnvCampFire_C::Cancelled_EDAB937443020D47385625B06E892DF0(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.Cancelled_EDAB937443020D47385625B06E892DF0");

	UGA_Athena_EnvCampFire_C_Cancelled_EDAB937443020D47385625B06E892DF0_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.Targeted_EDAB937443020D47385625B06E892DF0
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_EnvCampFire_C::Targeted_EDAB937443020D47385625B06E892DF0(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.Targeted_EDAB937443020D47385625B06E892DF0");

	UGA_Athena_EnvCampFire_C_Targeted_EDAB937443020D47385625B06E892DF0_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.EventReceived_63E2BB3E47E5E63C7A4A0A8C45DC23E4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_EnvCampFire_C::EventReceived_63E2BB3E47E5E63C7A4A0A8C45DC23E4(const struct FGameplayEventData& Payload)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.EventReceived_63E2BB3E47E5E63C7A4A0A8C45DC23E4");

	UGA_Athena_EnvCampFire_C_EventReceived_63E2BB3E47E5E63C7A4A0A8C45DC23E4_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_EnvCampFire_C::K2_OnEndAbility(bool bWasCancelled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.K2_OnEndAbility");

	UGA_Athena_EnvCampFire_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.ApplyHeal
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_EnvCampFire_C::ApplyHeal()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.ApplyHeal");

	UGA_Athena_EnvCampFire_C_ApplyHeal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Athena_EnvCampFire_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.K2_ActivateAbilityFromEvent");

	UGA_Athena_EnvCampFire_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.FinishStoke
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_EnvCampFire_C::FinishStoke()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.FinishStoke");

	UGA_Athena_EnvCampFire_C_FinishStoke_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.SetIsStoked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsStoked                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_EnvCampFire_C::SetIsStoked(bool IsStoked)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.SetIsStoked");

	UGA_Athena_EnvCampFire_C_SetIsStoked_Params params;
	params.IsStoked = IsStoked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.EndEvent
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_EnvCampFire_C::EndEvent()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.EndEvent");

	UGA_Athena_EnvCampFire_C_EndEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.ForceEndAbility
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_EnvCampFire_C::ForceEndAbility()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.ForceEndAbility");

	UGA_Athena_EnvCampFire_C_ForceEndAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.ExecuteUbergraph_GA_Athena_EnvCampFire
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_EnvCampFire_C::ExecuteUbergraph_GA_Athena_EnvCampFire(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.ExecuteUbergraph_GA_Athena_EnvCampFire");

	UGA_Athena_EnvCampFire_C_ExecuteUbergraph_GA_Athena_EnvCampFire_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
