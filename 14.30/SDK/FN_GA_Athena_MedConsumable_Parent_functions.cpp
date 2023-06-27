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

// Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.OnMontageTriggered
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Athena_MedConsumable_Parent_C::OnMontageTriggered()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.OnMontageTriggered");

	UGA_Athena_MedConsumable_Parent_C_OnMontageTriggered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.MakeCustomMontageInfo
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Athena_MedConsumable_Parent_C::MakeCustomMontageInfo()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.MakeCustomMontageInfo");

	UGA_Athena_MedConsumable_Parent_C_MakeCustomMontageInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.SetupGE
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectSpecHandle Effect_Out                     (Parm, OutParm)

void UGA_Athena_MedConsumable_Parent_C::SetupGE(struct FGameplayEffectSpecHandle* Effect_Out)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.SetupGE");

	UGA_Athena_MedConsumable_Parent_C_SetupGE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Effect_Out != nullptr)
		*Effect_Out = params.Effect_Out;
}


// Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.HealthCalc
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Athena_MedConsumable_Parent_C::HealthCalc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.HealthCalc");

	UGA_Athena_MedConsumable_Parent_C_HealthCalc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.ShieldCalc
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Athena_MedConsumable_Parent_C::ShieldCalc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.ShieldCalc");

	UGA_Athena_MedConsumable_Parent_C_ShieldCalc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.K2_CanActivateAbility
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo ActorInfo                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayAbilitySpecHandle Handle                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTagContainer   RelevantTags                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGA_Athena_MedConsumable_Parent_C::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.K2_CanActivateAbility");

	UGA_Athena_MedConsumable_Parent_C_K2_CanActivateAbility_Params params;
	params.ActorInfo = ActorInfo;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RelevantTags != nullptr)
		*RelevantTags = params.RelevantTags;

	return params.ReturnValue;
}


// Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.Completed_4C02BFB04B18D9E79F84848FFE6D2C32
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_MedConsumable_Parent_C::Completed_4C02BFB04B18D9E79F84848FFE6D2C32(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.Completed_4C02BFB04B18D9E79F84848FFE6D2C32");

	UGA_Athena_MedConsumable_Parent_C_Completed_4C02BFB04B18D9E79F84848FFE6D2C32_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.Cancelled_4C02BFB04B18D9E79F84848FFE6D2C32
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_MedConsumable_Parent_C::Cancelled_4C02BFB04B18D9E79F84848FFE6D2C32(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.Cancelled_4C02BFB04B18D9E79F84848FFE6D2C32");

	UGA_Athena_MedConsumable_Parent_C_Cancelled_4C02BFB04B18D9E79F84848FFE6D2C32_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.Triggered_4C02BFB04B18D9E79F84848FFE6D2C32
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_MedConsumable_Parent_C::Triggered_4C02BFB04B18D9E79F84848FFE6D2C32(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.Triggered_4C02BFB04B18D9E79F84848FFE6D2C32");

	UGA_Athena_MedConsumable_Parent_C_Triggered_4C02BFB04B18D9E79F84848FFE6D2C32_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Athena_MedConsumable_Parent_C::K2_ActivateAbility()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.K2_ActivateAbility");

	UGA_Athena_MedConsumable_Parent_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_MedConsumable_Parent_C::K2_OnEndAbility(bool bWasCancelled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.K2_OnEndAbility");

	UGA_Athena_MedConsumable_Parent_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.ExecuteUbergraph_GA_Athena_MedConsumable_Parent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_MedConsumable_Parent_C::ExecuteUbergraph_GA_Athena_MedConsumable_Parent(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.ExecuteUbergraph_GA_Athena_MedConsumable_Parent");

	UGA_Athena_MedConsumable_Parent_C_ExecuteUbergraph_GA_Athena_MedConsumable_Parent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
