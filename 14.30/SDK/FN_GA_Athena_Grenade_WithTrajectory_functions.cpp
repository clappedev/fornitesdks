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

// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.ShouldOnlyShowTrajectoryOnUse
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGA_Athena_Grenade_WithTrajectory_C::ShouldOnlyShowTrajectoryOnUse()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.ShouldOnlyShowTrajectoryOnUse");

	UGA_Athena_Grenade_WithTrajectory_C_ShouldOnlyShowTrajectoryOnUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.SpawnTrajectoryIndicator
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSpawnOnEquip                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFortProjectileTrajectory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AFortProjectileTrajectory* UGA_Athena_Grenade_WithTrajectory_C::SpawnTrajectoryIndicator(bool bSpawnOnEquip)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.SpawnTrajectoryIndicator");

	UGA_Athena_Grenade_WithTrajectory_C_SpawnTrajectoryIndicator_Params params;
	params.bSpawnOnEquip = bSpawnOnEquip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.GetProjectileTrajectoryPoints
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FVector>         OutSplinePoints                (Parm, OutParm)
// TArray<struct FVector>         OutSplineTangents              (Parm, OutParm)
// struct FHitResult              OutHitResult                   (Parm, OutParm, IsPlainOldData)

void UGA_Athena_Grenade_WithTrajectory_C::GetProjectileTrajectoryPoints(TArray<struct FVector>* OutSplinePoints, TArray<struct FVector>* OutSplineTangents, struct FHitResult* OutHitResult)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.GetProjectileTrajectoryPoints");

	UGA_Athena_Grenade_WithTrajectory_C_GetProjectileTrajectoryPoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSplinePoints != nullptr)
		*OutSplinePoints = params.OutSplinePoints;
	if (OutSplineTangents != nullptr)
		*OutSplineTangents = params.OutSplineTangents;
	if (OutHitResult != nullptr)
		*OutHitResult = params.OutHitResult;
}


// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.GetProjectileTrajectoryActor
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortProjectileTrajectory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AFortProjectileTrajectory* UGA_Athena_Grenade_WithTrajectory_C::GetProjectileTrajectoryActor()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.GetProjectileTrajectoryActor");

	UGA_Athena_Grenade_WithTrajectory_C_GetProjectileTrajectoryActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.UpdateTrajectorySpline
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Athena_Grenade_WithTrajectory_C::UpdateTrajectorySpline()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.UpdateTrajectorySpline");

	UGA_Athena_Grenade_WithTrajectory_C_UpdateTrajectorySpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.GetOwningPlayer
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPlayerPawn*         Player_Pawn                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_Grenade_WithTrajectory_C::GetOwningPlayer(class AFortPlayerPawn** Player_Pawn)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.GetOwningPlayer");

	UGA_Athena_Grenade_WithTrajectory_C_GetOwningPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Player_Pawn != nullptr)
		*Player_Pawn = params.Player_Pawn;
}


// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.CalcGrenadeSpeedFromPitch
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          AimPitch                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          GrenadeSpeed                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_Grenade_WithTrajectory_C::CalcGrenadeSpeedFromPitch(float AimPitch, float* GrenadeSpeed)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.CalcGrenadeSpeedFromPitch");

	UGA_Athena_Grenade_WithTrajectory_C_CalcGrenadeSpeedFromPitch_Params params;
	params.AimPitch = AimPitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GrenadeSpeed != nullptr)
		*GrenadeSpeed = params.GrenadeSpeed;
}


// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.SetupDummyProjectile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Athena_Grenade_WithTrajectory_C::SetupDummyProjectile()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.SetupDummyProjectile");

	UGA_Athena_Grenade_WithTrajectory_C_SetupDummyProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.SpawnLocationAndRotation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 OutLoc                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                OutRot                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_Grenade_WithTrajectory_C::SpawnLocationAndRotation(struct FVector* OutLoc, struct FRotator* OutRot)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.SpawnLocationAndRotation");

	UGA_Athena_Grenade_WithTrajectory_C_SpawnLocationAndRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLoc != nullptr)
		*OutLoc = params.OutLoc;
	if (OutRot != nullptr)
		*OutRot = params.OutRot;
}


// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.SetupGrenade
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AimPitch                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFortProjectileBase*     Base_Grenade                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Projectile_Speed               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FFortGameplayEffectContainerSpec Explosion_Gameplay_Spec        (Parm, OutParm)
// float                          Projectile_Gravity_Scale       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FFortGameplayEffectContainerSpec Additional_Explosion_Gameplay_Spec (Parm, OutParm)

void UGA_Athena_Grenade_WithTrajectory_C::SetupGrenade(float AimPitch, class AFortProjectileBase** Base_Grenade, float* Projectile_Speed, struct FFortGameplayEffectContainerSpec* Explosion_Gameplay_Spec, float* Projectile_Gravity_Scale, struct FFortGameplayEffectContainerSpec* Additional_Explosion_Gameplay_Spec)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.SetupGrenade");

	UGA_Athena_Grenade_WithTrajectory_C_SetupGrenade_Params params;
	params.AimPitch = AimPitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Base_Grenade != nullptr)
		*Base_Grenade = params.Base_Grenade;
	if (Projectile_Speed != nullptr)
		*Projectile_Speed = params.Projectile_Speed;
	if (Explosion_Gameplay_Spec != nullptr)
		*Explosion_Gameplay_Spec = params.Explosion_Gameplay_Spec;
	if (Projectile_Gravity_Scale != nullptr)
		*Projectile_Gravity_Scale = params.Projectile_Gravity_Scale;
	if (Additional_Explosion_Gameplay_Spec != nullptr)
		*Additional_Explosion_Gameplay_Spec = params.Additional_Explosion_Gameplay_Spec;
}


// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.Completed_B08560984B3818F6EECB3C9A92E61ADC
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_Grenade_WithTrajectory_C::Completed_B08560984B3818F6EECB3C9A92E61ADC(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.Completed_B08560984B3818F6EECB3C9A92E61ADC");

	UGA_Athena_Grenade_WithTrajectory_C_Completed_B08560984B3818F6EECB3C9A92E61ADC_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.Cancelled_B08560984B3818F6EECB3C9A92E61ADC
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_Grenade_WithTrajectory_C::Cancelled_B08560984B3818F6EECB3C9A92E61ADC(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.Cancelled_B08560984B3818F6EECB3C9A92E61ADC");

	UGA_Athena_Grenade_WithTrajectory_C_Cancelled_B08560984B3818F6EECB3C9A92E61ADC_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.Triggered_B08560984B3818F6EECB3C9A92E61ADC
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_Grenade_WithTrajectory_C::Triggered_B08560984B3818F6EECB3C9A92E61ADC(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.Triggered_B08560984B3818F6EECB3C9A92E61ADC");

	UGA_Athena_Grenade_WithTrajectory_C_Triggered_B08560984B3818F6EECB3C9A92E61ADC_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.OnFinish_4B1D92B7427697E6BD9D58ACA0F87155
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Grenade_WithTrajectory_C::OnFinish_4B1D92B7427697E6BD9D58ACA0F87155()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.OnFinish_4B1D92B7427697E6BD9D58ACA0F87155");

	UGA_Athena_Grenade_WithTrajectory_C_OnFinish_4B1D92B7427697E6BD9D58ACA0F87155_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.OnCancelled_758AC809498064C01C71318E141D1E46
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Grenade_WithTrajectory_C::OnCancelled_758AC809498064C01C71318E141D1E46()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.OnCancelled_758AC809498064C01C71318E141D1E46");

	UGA_Athena_Grenade_WithTrajectory_C_OnCancelled_758AC809498064C01C71318E141D1E46_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.OnInterrupted_758AC809498064C01C71318E141D1E46
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Grenade_WithTrajectory_C::OnInterrupted_758AC809498064C01C71318E141D1E46()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.OnInterrupted_758AC809498064C01C71318E141D1E46");

	UGA_Athena_Grenade_WithTrajectory_C_OnInterrupted_758AC809498064C01C71318E141D1E46_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.OnBlendOut_758AC809498064C01C71318E141D1E46
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Grenade_WithTrajectory_C::OnBlendOut_758AC809498064C01C71318E141D1E46()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.OnBlendOut_758AC809498064C01C71318E141D1E46");

	UGA_Athena_Grenade_WithTrajectory_C_OnBlendOut_758AC809498064C01C71318E141D1E46_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.OnCompleted_758AC809498064C01C71318E141D1E46
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Grenade_WithTrajectory_C::OnCompleted_758AC809498064C01C71318E141D1E46()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.OnCompleted_758AC809498064C01C71318E141D1E46");

	UGA_Athena_Grenade_WithTrajectory_C_OnCompleted_758AC809498064C01C71318E141D1E46_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.OnFinish_D7F9D67243A9BA307AFBF7839EC5CA1C
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Grenade_WithTrajectory_C::OnFinish_D7F9D67243A9BA307AFBF7839EC5CA1C()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.OnFinish_D7F9D67243A9BA307AFBF7839EC5CA1C");

	UGA_Athena_Grenade_WithTrajectory_C_OnFinish_D7F9D67243A9BA307AFBF7839EC5CA1C_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Athena_Grenade_WithTrajectory_C::K2_ActivateAbility()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.K2_ActivateAbility");

	UGA_Athena_Grenade_WithTrajectory_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.Server_SpawnProjectile
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_Grenade_WithTrajectory_C::Server_SpawnProjectile(const struct FVector& Location, const struct FRotator& Direction)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.Server_SpawnProjectile");

	UGA_Athena_Grenade_WithTrajectory_C_Server_SpawnProjectile_Params params;
	params.Location = Location;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.OnAbilityInputReleased
// (Event, Protected, BlueprintEvent)

void UGA_Athena_Grenade_WithTrajectory_C::OnAbilityInputReleased()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.OnAbilityInputReleased");

	UGA_Athena_Grenade_WithTrajectory_C_OnAbilityInputReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_Grenade_WithTrajectory_C::K2_OnEndAbility(bool bWasCancelled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.K2_OnEndAbility");

	UGA_Athena_Grenade_WithTrajectory_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.CleanupTrajectoryDisplay
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Grenade_WithTrajectory_C::CleanupTrajectoryDisplay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.CleanupTrajectoryDisplay");

	UGA_Athena_Grenade_WithTrajectory_C_CleanupTrajectoryDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.TossGrenade
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Grenade_WithTrajectory_C::TossGrenade()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.TossGrenade");

	UGA_Athena_Grenade_WithTrajectory_C_TossGrenade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.InitTrajectoryVariables
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGA_Athena_Grenade_WithTrajectory_C::InitTrajectoryVariables()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.InitTrajectoryVariables");

	UGA_Athena_Grenade_WithTrajectory_C_InitTrajectoryVariables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.AthenaProjectileSpawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*     ProjectileReference            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_Grenade_WithTrajectory_C::AthenaProjectileSpawned(class AFortProjectileBase* ProjectileReference)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.AthenaProjectileSpawned");

	UGA_Athena_Grenade_WithTrajectory_C_AthenaProjectileSpawned_Params params;
	params.ProjectileReference = ProjectileReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.CleanupTrajectoryIndicatorOnUnequip
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGA_Athena_Grenade_WithTrajectory_C::CleanupTrajectoryIndicatorOnUnequip()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.CleanupTrajectoryIndicatorOnUnequip");

	UGA_Athena_Grenade_WithTrajectory_C_CleanupTrajectoryIndicatorOnUnequip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.Cleanup Trajectory Display On End
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Grenade_WithTrajectory_C::Cleanup_Trajectory_Display_On_End()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.Cleanup Trajectory Display On End");

	UGA_Athena_Grenade_WithTrajectory_C_Cleanup_Trajectory_Display_On_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.UpdateTrajectory
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGA_Athena_Grenade_WithTrajectory_C::UpdateTrajectory()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.UpdateTrajectory");

	UGA_Athena_Grenade_WithTrajectory_C_UpdateTrajectory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.ExecuteUbergraph_GA_Athena_Grenade_WithTrajectory
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_Grenade_WithTrajectory_C::ExecuteUbergraph_GA_Athena_Grenade_WithTrajectory(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.ExecuteUbergraph_GA_Athena_Grenade_WithTrajectory");

	UGA_Athena_Grenade_WithTrajectory_C_ExecuteUbergraph_GA_Athena_Grenade_WithTrajectory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.OnProjectileSpawn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UGA_Athena_Grenade_WithTrajectory_C::OnProjectileSpawn__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.OnProjectileSpawn__DelegateSignature");

	UGA_Athena_Grenade_WithTrajectory_C_OnProjectileSpawn__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
