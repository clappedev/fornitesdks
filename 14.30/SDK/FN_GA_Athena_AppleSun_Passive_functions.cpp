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

// Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.HasEnoughStacks
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_AppleSun_Passive_C::HasEnoughStacks(bool* Return)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.HasEnoughStacks");

	UGA_Athena_AppleSun_Passive_C_HasEnoughStacks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.EventReceived_88451BF04FEA60EEE79926856BA05A42
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_AppleSun_Passive_C::EventReceived_88451BF04FEA60EEE79926856BA05A42(const struct FGameplayEventData& Payload)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.EventReceived_88451BF04FEA60EEE79926856BA05A42");

	UGA_Athena_AppleSun_Passive_C_EventReceived_88451BF04FEA60EEE79926856BA05A42_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.Completed_E2E08D9245B8C2437B278CACDF6A674C
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_AppleSun_Passive_C::Completed_E2E08D9245B8C2437B278CACDF6A674C(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.Completed_E2E08D9245B8C2437B278CACDF6A674C");

	UGA_Athena_AppleSun_Passive_C_Completed_E2E08D9245B8C2437B278CACDF6A674C_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.Cancelled_E2E08D9245B8C2437B278CACDF6A674C
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_AppleSun_Passive_C::Cancelled_E2E08D9245B8C2437B278CACDF6A674C(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.Cancelled_E2E08D9245B8C2437B278CACDF6A674C");

	UGA_Athena_AppleSun_Passive_C_Cancelled_E2E08D9245B8C2437B278CACDF6A674C_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.Triggered_E2E08D9245B8C2437B278CACDF6A674C
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_AppleSun_Passive_C::Triggered_E2E08D9245B8C2437B278CACDF6A674C(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.Triggered_E2E08D9245B8C2437B278CACDF6A674C");

	UGA_Athena_AppleSun_Passive_C_Triggered_E2E08D9245B8C2437B278CACDF6A674C_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.Completed_6CF7877A4087E6390DA1828899D54EFB
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_AppleSun_Passive_C::Completed_6CF7877A4087E6390DA1828899D54EFB(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.Completed_6CF7877A4087E6390DA1828899D54EFB");

	UGA_Athena_AppleSun_Passive_C_Completed_6CF7877A4087E6390DA1828899D54EFB_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.Cancelled_6CF7877A4087E6390DA1828899D54EFB
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_AppleSun_Passive_C::Cancelled_6CF7877A4087E6390DA1828899D54EFB(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.Cancelled_6CF7877A4087E6390DA1828899D54EFB");

	UGA_Athena_AppleSun_Passive_C_Cancelled_6CF7877A4087E6390DA1828899D54EFB_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.Triggered_6CF7877A4087E6390DA1828899D54EFB
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_AppleSun_Passive_C::Triggered_6CF7877A4087E6390DA1828899D54EFB(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.Triggered_6CF7877A4087E6390DA1828899D54EFB");

	UGA_Athena_AppleSun_Passive_C_Triggered_6CF7877A4087E6390DA1828899D54EFB_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Athena_AppleSun_Passive_C::K2_ActivateAbility()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.K2_ActivateAbility");

	UGA_Athena_AppleSun_Passive_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_AppleSun_Passive_C::K2_OnEndAbility(bool bWasCancelled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.K2_OnEndAbility");

	UGA_Athena_AppleSun_Passive_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.SpawnProjectile
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void UGA_Athena_AppleSun_Passive_C::SpawnProjectile()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.SpawnProjectile");

	UGA_Athena_AppleSun_Passive_C_SpawnProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.UpdateCanCrashpad
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_AppleSun_Passive_C::UpdateCanCrashpad()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.UpdateCanCrashpad");

	UGA_Athena_AppleSun_Passive_C_UpdateCanCrashpad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.UpdateIsCloseToGround
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_AppleSun_Passive_C::UpdateIsCloseToGround()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.UpdateIsCloseToGround");

	UGA_Athena_AppleSun_Passive_C_UpdateIsCloseToGround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.Throw_Server
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void UGA_Athena_AppleSun_Passive_C::Throw_Server()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.Throw_Server");

	UGA_Athena_AppleSun_Passive_C_Throw_Server_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.Remove Item From Inventory?
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void UGA_Athena_AppleSun_Passive_C::Remove_Item_From_Inventory_()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.Remove Item From Inventory?");

	UGA_Athena_AppleSun_Passive_C_Remove_Item_From_Inventory__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.ExecuteUbergraph_GA_Athena_AppleSun_Passive
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_AppleSun_Passive_C::ExecuteUbergraph_GA_Athena_AppleSun_Passive(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.ExecuteUbergraph_GA_Athena_AppleSun_Passive");

	UGA_Athena_AppleSun_Passive_C_ExecuteUbergraph_GA_Athena_AppleSun_Passive_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
