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

// Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.HasVehicleWeapon?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGA_Athena_Enemy_Apply_SneakySnowman_C::HasVehicleWeapon_()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.HasVehicleWeapon?");

	UGA_Athena_Enemy_Apply_SneakySnowman_C_HasVehicleWeapon__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.Completed_1521DF0D4D64DB4FF1C1D6BB8B5153B0
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_Enemy_Apply_SneakySnowman_C::Completed_1521DF0D4D64DB4FF1C1D6BB8B5153B0(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.Completed_1521DF0D4D64DB4FF1C1D6BB8B5153B0");

	UGA_Athena_Enemy_Apply_SneakySnowman_C_Completed_1521DF0D4D64DB4FF1C1D6BB8B5153B0_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.Cancelled_1521DF0D4D64DB4FF1C1D6BB8B5153B0
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_Enemy_Apply_SneakySnowman_C::Cancelled_1521DF0D4D64DB4FF1C1D6BB8B5153B0(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.Cancelled_1521DF0D4D64DB4FF1C1D6BB8B5153B0");

	UGA_Athena_Enemy_Apply_SneakySnowman_C_Cancelled_1521DF0D4D64DB4FF1C1D6BB8B5153B0_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.Triggered_1521DF0D4D64DB4FF1C1D6BB8B5153B0
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_Enemy_Apply_SneakySnowman_C::Triggered_1521DF0D4D64DB4FF1C1D6BB8B5153B0(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.Triggered_1521DF0D4D64DB4FF1C1D6BB8B5153B0");

	UGA_Athena_Enemy_Apply_SneakySnowman_C_Triggered_1521DF0D4D64DB4FF1C1D6BB8B5153B0_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.EventReceived_1D1745F441AF12F5AE3A2498A31BC2AD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_Enemy_Apply_SneakySnowman_C::EventReceived_1D1745F441AF12F5AE3A2498A31BC2AD(const struct FGameplayEventData& Payload)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.EventReceived_1D1745F441AF12F5AE3A2498A31BC2AD");

	UGA_Athena_Enemy_Apply_SneakySnowman_C_EventReceived_1D1745F441AF12F5AE3A2498A31BC2AD_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Athena_Enemy_Apply_SneakySnowman_C::K2_ActivateAbility()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.K2_ActivateAbility");

	UGA_Athena_Enemy_Apply_SneakySnowman_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.EndAbility
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Enemy_Apply_SneakySnowman_C::EndAbility()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.EndAbility");

	UGA_Athena_Enemy_Apply_SneakySnowman_C_EndAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.RestartAbility
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Enemy_Apply_SneakySnowman_C::RestartAbility()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.RestartAbility");

	UGA_Athena_Enemy_Apply_SneakySnowman_C_RestartAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.EndAbilitySequence
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Enemy_Apply_SneakySnowman_C::EndAbilitySequence()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.EndAbilitySequence");

	UGA_Athena_Enemy_Apply_SneakySnowman_C_EndAbilitySequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_Enemy_Apply_SneakySnowman_C::K2_OnEndAbility(bool bWasCancelled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.K2_OnEndAbility");

	UGA_Athena_Enemy_Apply_SneakySnowman_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.VehicleWeaponCheck
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Enemy_Apply_SneakySnowman_C::VehicleWeaponCheck()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.VehicleWeaponCheck");

	UGA_Athena_Enemy_Apply_SneakySnowman_C_VehicleWeaponCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.ExecuteUbergraph_GA_Athena_Enemy_Apply_SneakySnowman
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_Enemy_Apply_SneakySnowman_C::ExecuteUbergraph_GA_Athena_Enemy_Apply_SneakySnowman(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Enemy_Apply_SneakySnowman.GA_Athena_Enemy_Apply_SneakySnowman_C.ExecuteUbergraph_GA_Athena_Enemy_Apply_SneakySnowman");

	UGA_Athena_Enemy_Apply_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Enemy_Apply_SneakySnowman_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
