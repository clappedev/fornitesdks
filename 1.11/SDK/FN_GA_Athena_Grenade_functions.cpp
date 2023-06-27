// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GA_Athena_Grenade.GA_Athena_Grenade_C.ThrowAthenaGrenade
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 NewParam                       (Parm, OutParm, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, OutParm, IsPlainOldData)

void UGA_Athena_Grenade_C::ThrowAthenaGrenade(struct FVector* NewParam, struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade.GA_Athena_Grenade_C.ThrowAthenaGrenade");

	UGA_Athena_Grenade_C_ThrowAthenaGrenade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;
}


// Function GA_Athena_Grenade.GA_Athena_Grenade_C.Completed_6845367B4931B42A6C8BF6A6664F2203
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_Grenade_C::Completed_6845367B4931B42A6C8BF6A6664F2203(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade.GA_Athena_Grenade_C.Completed_6845367B4931B42A6C8BF6A6664F2203");

	UGA_Athena_Grenade_C_Completed_6845367B4931B42A6C8BF6A6664F2203_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade.GA_Athena_Grenade_C.Cancelled_6845367B4931B42A6C8BF6A6664F2203
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_Grenade_C::Cancelled_6845367B4931B42A6C8BF6A6664F2203(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade.GA_Athena_Grenade_C.Cancelled_6845367B4931B42A6C8BF6A6664F2203");

	UGA_Athena_Grenade_C_Cancelled_6845367B4931B42A6C8BF6A6664F2203_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade.GA_Athena_Grenade_C.Triggered_6845367B4931B42A6C8BF6A6664F2203
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_Grenade_C::Triggered_6845367B4931B42A6C8BF6A6664F2203(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade.GA_Athena_Grenade_C.Triggered_6845367B4931B42A6C8BF6A6664F2203");

	UGA_Athena_Grenade_C_Triggered_6845367B4931B42A6C8BF6A6664F2203_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade.GA_Athena_Grenade_C.Destroyed_9688DEB14FA370B967517191C2B710DA
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Athena_Grenade_C::Destroyed_9688DEB14FA370B967517191C2B710DA(const struct FProjectileEventData& ProjectileData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade.GA_Athena_Grenade_C.Destroyed_9688DEB14FA370B967517191C2B710DA");

	UGA_Athena_Grenade_C_Destroyed_9688DEB14FA370B967517191C2B710DA_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade.GA_Athena_Grenade_C.Exploded_9688DEB14FA370B967517191C2B710DA
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Athena_Grenade_C::Exploded_9688DEB14FA370B967517191C2B710DA(const struct FProjectileEventData& ProjectileData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade.GA_Athena_Grenade_C.Exploded_9688DEB14FA370B967517191C2B710DA");

	UGA_Athena_Grenade_C_Exploded_9688DEB14FA370B967517191C2B710DA_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade.GA_Athena_Grenade_C.Stopped_9688DEB14FA370B967517191C2B710DA
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Athena_Grenade_C::Stopped_9688DEB14FA370B967517191C2B710DA(const struct FProjectileEventData& ProjectileData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade.GA_Athena_Grenade_C.Stopped_9688DEB14FA370B967517191C2B710DA");

	UGA_Athena_Grenade_C_Stopped_9688DEB14FA370B967517191C2B710DA_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade.GA_Athena_Grenade_C.Bounced_9688DEB14FA370B967517191C2B710DA
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Athena_Grenade_C::Bounced_9688DEB14FA370B967517191C2B710DA(const struct FProjectileEventData& ProjectileData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade.GA_Athena_Grenade_C.Bounced_9688DEB14FA370B967517191C2B710DA");

	UGA_Athena_Grenade_C_Bounced_9688DEB14FA370B967517191C2B710DA_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade.GA_Athena_Grenade_C.Touched_9688DEB14FA370B967517191C2B710DA
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Athena_Grenade_C::Touched_9688DEB14FA370B967517191C2B710DA(const struct FProjectileEventData& ProjectileData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade.GA_Athena_Grenade_C.Touched_9688DEB14FA370B967517191C2B710DA");

	UGA_Athena_Grenade_C_Touched_9688DEB14FA370B967517191C2B710DA_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade.GA_Athena_Grenade_C.Created_9688DEB14FA370B967517191C2B710DA
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Athena_Grenade_C::Created_9688DEB14FA370B967517191C2B710DA(const struct FProjectileEventData& ProjectileData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade.GA_Athena_Grenade_C.Created_9688DEB14FA370B967517191C2B710DA");

	UGA_Athena_Grenade_C_Created_9688DEB14FA370B967517191C2B710DA_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade.GA_Athena_Grenade_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Athena_Grenade_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade.GA_Athena_Grenade_C.K2_ActivateAbility");

	UGA_Athena_Grenade_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade.GA_Athena_Grenade_C.ExecuteUbergraph_GA_Athena_Grenade
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_Grenade_C::ExecuteUbergraph_GA_Athena_Grenade(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade.GA_Athena_Grenade_C.ExecuteUbergraph_GA_Athena_Grenade");

	UGA_Athena_Grenade_C_ExecuteUbergraph_GA_Athena_Grenade_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
