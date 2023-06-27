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

// Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.OnMontageTriggered
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Athena_JellyFish_AOE_Heal_C::OnMontageTriggered()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.OnMontageTriggered");

	UGA_Athena_JellyFish_AOE_Heal_C_OnMontageTriggered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.MakeCustomMontageInfo
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Athena_JellyFish_AOE_Heal_C::MakeCustomMontageInfo()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.MakeCustomMontageInfo");

	UGA_Athena_JellyFish_AOE_Heal_C_MakeCustomMontageInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.SetupGE
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectSpecHandle Effect_Out                     (Parm, OutParm)

void UGA_Athena_JellyFish_AOE_Heal_C::SetupGE(struct FGameplayEffectSpecHandle* Effect_Out)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.SetupGE");

	UGA_Athena_JellyFish_AOE_Heal_C_SetupGE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Effect_Out != nullptr)
		*Effect_Out = params.Effect_Out;
}


// Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.HealthCalc
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Athena_JellyFish_AOE_Heal_C::HealthCalc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.HealthCalc");

	UGA_Athena_JellyFish_AOE_Heal_C_HealthCalc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.ShieldCalc
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Athena_JellyFish_AOE_Heal_C::ShieldCalc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.ShieldCalc");

	UGA_Athena_JellyFish_AOE_Heal_C_ShieldCalc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.K2_CanActivateAbility
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo ActorInfo                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayAbilitySpecHandle Handle                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTagContainer   RelevantTags                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGA_Athena_JellyFish_AOE_Heal_C::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.K2_CanActivateAbility");

	UGA_Athena_JellyFish_AOE_Heal_C_K2_CanActivateAbility_Params params;
	params.ActorInfo = ActorInfo;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RelevantTags != nullptr)
		*RelevantTags = params.RelevantTags;

	return params.ReturnValue;
}


// Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.Completed_39BB44CE4B5ACBFAF09C9C960F1A3644
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_JellyFish_AOE_Heal_C::Completed_39BB44CE4B5ACBFAF09C9C960F1A3644(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.Completed_39BB44CE4B5ACBFAF09C9C960F1A3644");

	UGA_Athena_JellyFish_AOE_Heal_C_Completed_39BB44CE4B5ACBFAF09C9C960F1A3644_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.Cancelled_39BB44CE4B5ACBFAF09C9C960F1A3644
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_JellyFish_AOE_Heal_C::Cancelled_39BB44CE4B5ACBFAF09C9C960F1A3644(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.Cancelled_39BB44CE4B5ACBFAF09C9C960F1A3644");

	UGA_Athena_JellyFish_AOE_Heal_C_Cancelled_39BB44CE4B5ACBFAF09C9C960F1A3644_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.Triggered_39BB44CE4B5ACBFAF09C9C960F1A3644
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_JellyFish_AOE_Heal_C::Triggered_39BB44CE4B5ACBFAF09C9C960F1A3644(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.Triggered_39BB44CE4B5ACBFAF09C9C960F1A3644");

	UGA_Athena_JellyFish_AOE_Heal_C_Triggered_39BB44CE4B5ACBFAF09C9C960F1A3644_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.Cancelled_D9F6D24A49ABE8D7AAC30785C1A8DF0C
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_JellyFish_AOE_Heal_C::Cancelled_D9F6D24A49ABE8D7AAC30785C1A8DF0C(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.Cancelled_D9F6D24A49ABE8D7AAC30785C1A8DF0C");

	UGA_Athena_JellyFish_AOE_Heal_C_Cancelled_D9F6D24A49ABE8D7AAC30785C1A8DF0C_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.Targeted_D9F6D24A49ABE8D7AAC30785C1A8DF0C
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_JellyFish_AOE_Heal_C::Targeted_D9F6D24A49ABE8D7AAC30785C1A8DF0C(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.Targeted_D9F6D24A49ABE8D7AAC30785C1A8DF0C");

	UGA_Athena_JellyFish_AOE_Heal_C_Targeted_D9F6D24A49ABE8D7AAC30785C1A8DF0C_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Athena_JellyFish_AOE_Heal_C::K2_ActivateAbility()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.K2_ActivateAbility");

	UGA_Athena_JellyFish_AOE_Heal_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_JellyFish_AOE_Heal_C::K2_OnEndAbility(bool bWasCancelled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.K2_OnEndAbility");

	UGA_Athena_JellyFish_AOE_Heal_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.K2_CommitExecute
// (Event, Public, BlueprintEvent)

void UGA_Athena_JellyFish_AOE_Heal_C::K2_CommitExecute()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.K2_CommitExecute");

	UGA_Athena_JellyFish_AOE_Heal_C_K2_CommitExecute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.ExecuteUbergraph_GA_Athena_JellyFish_AOE_Heal
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_JellyFish_AOE_Heal_C::ExecuteUbergraph_GA_Athena_JellyFish_AOE_Heal(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.ExecuteUbergraph_GA_Athena_JellyFish_AOE_Heal");

	UGA_Athena_JellyFish_AOE_Heal_C_ExecuteUbergraph_GA_Athena_JellyFish_AOE_Heal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
