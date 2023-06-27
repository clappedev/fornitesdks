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

// Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.SetCosmeticsAllowed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Allowed                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_HidingProp_Hide_C::SetCosmeticsAllowed(bool Allowed)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.SetCosmeticsAllowed");

	UGA_Athena_HidingProp_Hide_C_SetCosmeticsAllowed_Params params;
	params.Allowed = Allowed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Completed_75B60D4B43DAA553E4C21EA3D2E3AD03
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_HidingProp_Hide_C::Completed_75B60D4B43DAA553E4C21EA3D2E3AD03(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Completed_75B60D4B43DAA553E4C21EA3D2E3AD03");

	UGA_Athena_HidingProp_Hide_C_Completed_75B60D4B43DAA553E4C21EA3D2E3AD03_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Cancelled_75B60D4B43DAA553E4C21EA3D2E3AD03
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_HidingProp_Hide_C::Cancelled_75B60D4B43DAA553E4C21EA3D2E3AD03(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Cancelled_75B60D4B43DAA553E4C21EA3D2E3AD03");

	UGA_Athena_HidingProp_Hide_C_Cancelled_75B60D4B43DAA553E4C21EA3D2E3AD03_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Triggered_75B60D4B43DAA553E4C21EA3D2E3AD03
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_HidingProp_Hide_C::Triggered_75B60D4B43DAA553E4C21EA3D2E3AD03(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Triggered_75B60D4B43DAA553E4C21EA3D2E3AD03");

	UGA_Athena_HidingProp_Hide_C_Triggered_75B60D4B43DAA553E4C21EA3D2E3AD03_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.OnTimedOutAndDestinationReached_859E251740F1C46B914344A9FC343B19
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_HidingProp_Hide_C::OnTimedOutAndDestinationReached_859E251740F1C46B914344A9FC343B19()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.OnTimedOutAndDestinationReached_859E251740F1C46B914344A9FC343B19");

	UGA_Athena_HidingProp_Hide_C_OnTimedOutAndDestinationReached_859E251740F1C46B914344A9FC343B19_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.OnTimedOut_859E251740F1C46B914344A9FC343B19
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_HidingProp_Hide_C::OnTimedOut_859E251740F1C46B914344A9FC343B19()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.OnTimedOut_859E251740F1C46B914344A9FC343B19");

	UGA_Athena_HidingProp_Hide_C_OnTimedOut_859E251740F1C46B914344A9FC343B19_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.OnTimedOutAndDestinationReached_8010F4C64221E8F497C6559558420C32
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_HidingProp_Hide_C::OnTimedOutAndDestinationReached_8010F4C64221E8F497C6559558420C32()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.OnTimedOutAndDestinationReached_8010F4C64221E8F497C6559558420C32");

	UGA_Athena_HidingProp_Hide_C_OnTimedOutAndDestinationReached_8010F4C64221E8F497C6559558420C32_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.OnTimedOut_8010F4C64221E8F497C6559558420C32
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_HidingProp_Hide_C::OnTimedOut_8010F4C64221E8F497C6559558420C32()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.OnTimedOut_8010F4C64221E8F497C6559558420C32");

	UGA_Athena_HidingProp_Hide_C_OnTimedOut_8010F4C64221E8F497C6559558420C32_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Added_F049BFC743FE176042ECD98641AFE2B9
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_HidingProp_Hide_C::Added_F049BFC743FE176042ECD98641AFE2B9()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Added_F049BFC743FE176042ECD98641AFE2B9");

	UGA_Athena_HidingProp_Hide_C_Added_F049BFC743FE176042ECD98641AFE2B9_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Added_35C56E354FE08855A837E0BDFB150F20
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_HidingProp_Hide_C::Added_35C56E354FE08855A837E0BDFB150F20()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Added_35C56E354FE08855A837E0BDFB150F20");

	UGA_Athena_HidingProp_Hide_C_Added_35C56E354FE08855A837E0BDFB150F20_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Added_CD24BC554E955808A88A5B809807A94E
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_HidingProp_Hide_C::Added_CD24BC554E955808A88A5B809807A94E()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Added_CD24BC554E955808A88A5B809807A94E");

	UGA_Athena_HidingProp_Hide_C_Added_CD24BC554E955808A88A5B809807A94E_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Added_E60D990647FDAB06895E738C7A2BAE7E
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_HidingProp_Hide_C::Added_E60D990647FDAB06895E738C7A2BAE7E()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Added_E60D990647FDAB06895E738C7A2BAE7E");

	UGA_Athena_HidingProp_Hide_C_Added_E60D990647FDAB06895E738C7A2BAE7E_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Added_D329D9924DF9DF1B79D0738C6CB8EBA1
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_HidingProp_Hide_C::Added_D329D9924DF9DF1B79D0738C6CB8EBA1()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Added_D329D9924DF9DF1B79D0738C6CB8EBA1");

	UGA_Athena_HidingProp_Hide_C_Added_D329D9924DF9DF1B79D0738C6CB8EBA1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Added_1D4A49874AC422976CAC2C9155DDA736
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_HidingProp_Hide_C::Added_1D4A49874AC422976CAC2C9155DDA736()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Added_1D4A49874AC422976CAC2C9155DDA736");

	UGA_Athena_HidingProp_Hide_C_Added_1D4A49874AC422976CAC2C9155DDA736_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Added_75ABACB94D60139EB5D79798D471DB17
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_HidingProp_Hide_C::Added_75ABACB94D60139EB5D79798D471DB17()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Added_75ABACB94D60139EB5D79798D471DB17");

	UGA_Athena_HidingProp_Hide_C_Added_75ABACB94D60139EB5D79798D471DB17_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.EventReceived_8C4C6D7442A0B18F41B269995833ED85
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_HidingProp_Hide_C::EventReceived_8C4C6D7442A0B18F41B269995833ED85(const struct FGameplayEventData& Payload)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.EventReceived_8C4C6D7442A0B18F41B269995833ED85");

	UGA_Athena_HidingProp_Hide_C_EventReceived_8C4C6D7442A0B18F41B269995833ED85_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Athena_HidingProp_Hide_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.K2_ActivateAbilityFromEvent");

	UGA_Athena_HidingProp_Hide_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_HidingProp_Hide_C::K2_OnEndAbility(bool bWasCancelled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.K2_OnEndAbility");

	UGA_Athena_HidingProp_Hide_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.RustleLoop
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_HidingProp_Hide_C::RustleLoop()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.RustleLoop");

	UGA_Athena_HidingProp_Hide_C_RustleLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.End
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_HidingProp_Hide_C::End()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.End");

	UGA_Athena_HidingProp_Hide_C_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.ExecuteUbergraph_GA_Athena_HidingProp_Hide
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_HidingProp_Hide_C::ExecuteUbergraph_GA_Athena_HidingProp_Hide(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.ExecuteUbergraph_GA_Athena_HidingProp_Hide");

	UGA_Athena_HidingProp_Hide_C_ExecuteUbergraph_GA_Athena_HidingProp_Hide_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.NewEventDispatcher_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UGA_Athena_HidingProp_Hide_C::NewEventDispatcher_0__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.NewEventDispatcher_0__DelegateSignature");

	UGA_Athena_HidingProp_Hide_C_NewEventDispatcher_0__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
