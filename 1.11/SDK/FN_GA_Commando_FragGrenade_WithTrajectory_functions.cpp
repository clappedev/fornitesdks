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

// Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.CalcGrenadeSpeedFromPitch
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          AimPitch                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          GrenadeSpeed                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Commando_FragGrenade_WithTrajectory_C::CalcGrenadeSpeedFromPitch(float AimPitch, float* GrenadeSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.CalcGrenadeSpeedFromPitch");

	UGA_Commando_FragGrenade_WithTrajectory_C_CalcGrenadeSpeedFromPitch_Params params;
	params.AimPitch = AimPitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GrenadeSpeed != nullptr)
		*GrenadeSpeed = params.GrenadeSpeed;
}


// Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.UpdateTrajectorySpline
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Commando_FragGrenade_WithTrajectory_C::UpdateTrajectorySpline()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.UpdateTrajectorySpline");

	UGA_Commando_FragGrenade_WithTrajectory_C_UpdateTrajectorySpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.SetupDummyProjectile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Commando_FragGrenade_WithTrajectory_C::SetupDummyProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.SetupDummyProjectile");

	UGA_Commando_FragGrenade_WithTrajectory_C_SetupDummyProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.SpawnLocationAndRotation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 OutLoc                         (Parm, OutParm, IsPlainOldData)
// struct FRotator                OutRot                         (Parm, OutParm, IsPlainOldData)

void UGA_Commando_FragGrenade_WithTrajectory_C::SpawnLocationAndRotation(struct FVector* OutLoc, struct FRotator* OutRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.SpawnLocationAndRotation");

	UGA_Commando_FragGrenade_WithTrajectory_C_SpawnLocationAndRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLoc != nullptr)
		*OutLoc = params.OutLoc;
	if (OutRot != nullptr)
		*OutRot = params.OutRot;
}


// Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.SetupAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent* AbilitySystemComponentRef      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Commando_FragGrenade_WithTrajectory_C::SetupAbility(class UAbilitySystemComponent* AbilitySystemComponentRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.SetupAbility");

	UGA_Commando_FragGrenade_WithTrajectory_C_SetupAbility_Params params;
	params.AbilitySystemComponentRef = AbilitySystemComponentRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.SetupKeepOut
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    Projectile_Data                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Commando_FragGrenade_WithTrajectory_C::SetupKeepOut(const struct FProjectileEventData& Projectile_Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.SetupKeepOut");

	UGA_Commando_FragGrenade_WithTrajectory_C_SetupKeepOut_Params params;
	params.Projectile_Data = Projectile_Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.SetupClusterBombs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    Projectile_Data                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Commando_FragGrenade_WithTrajectory_C::SetupClusterBombs(const struct FProjectileEventData& Projectile_Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.SetupClusterBombs");

	UGA_Commando_FragGrenade_WithTrajectory_C_SetupClusterBombs_Params params;
	params.Projectile_Data = Projectile_Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.SetupGrenade
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AimPitch                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Base_Grenade                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Projectile_Speed               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FFortGameplayEffectContainerSpec Explosion_Gameplay_Spec        (Parm, OutParm)
// float                          Projectile_Gravity_Scale       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Commando_FragGrenade_WithTrajectory_C::SetupGrenade(float AimPitch, class UClass** Base_Grenade, float* Projectile_Speed, struct FFortGameplayEffectContainerSpec* Explosion_Gameplay_Spec, float* Projectile_Gravity_Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.SetupGrenade");

	UGA_Commando_FragGrenade_WithTrajectory_C_SetupGrenade_Params params;
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
}


// Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.Destroyed_5B2C2F894B063C6023D7DFBFAFB8E76B
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Commando_FragGrenade_WithTrajectory_C::Destroyed_5B2C2F894B063C6023D7DFBFAFB8E76B(const struct FProjectileEventData& ProjectileData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.Destroyed_5B2C2F894B063C6023D7DFBFAFB8E76B");

	UGA_Commando_FragGrenade_WithTrajectory_C_Destroyed_5B2C2F894B063C6023D7DFBFAFB8E76B_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.Exploded_5B2C2F894B063C6023D7DFBFAFB8E76B
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Commando_FragGrenade_WithTrajectory_C::Exploded_5B2C2F894B063C6023D7DFBFAFB8E76B(const struct FProjectileEventData& ProjectileData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.Exploded_5B2C2F894B063C6023D7DFBFAFB8E76B");

	UGA_Commando_FragGrenade_WithTrajectory_C_Exploded_5B2C2F894B063C6023D7DFBFAFB8E76B_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.Stopped_5B2C2F894B063C6023D7DFBFAFB8E76B
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Commando_FragGrenade_WithTrajectory_C::Stopped_5B2C2F894B063C6023D7DFBFAFB8E76B(const struct FProjectileEventData& ProjectileData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.Stopped_5B2C2F894B063C6023D7DFBFAFB8E76B");

	UGA_Commando_FragGrenade_WithTrajectory_C_Stopped_5B2C2F894B063C6023D7DFBFAFB8E76B_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.Bounced_5B2C2F894B063C6023D7DFBFAFB8E76B
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Commando_FragGrenade_WithTrajectory_C::Bounced_5B2C2F894B063C6023D7DFBFAFB8E76B(const struct FProjectileEventData& ProjectileData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.Bounced_5B2C2F894B063C6023D7DFBFAFB8E76B");

	UGA_Commando_FragGrenade_WithTrajectory_C_Bounced_5B2C2F894B063C6023D7DFBFAFB8E76B_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.Touched_5B2C2F894B063C6023D7DFBFAFB8E76B
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Commando_FragGrenade_WithTrajectory_C::Touched_5B2C2F894B063C6023D7DFBFAFB8E76B(const struct FProjectileEventData& ProjectileData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.Touched_5B2C2F894B063C6023D7DFBFAFB8E76B");

	UGA_Commando_FragGrenade_WithTrajectory_C_Touched_5B2C2F894B063C6023D7DFBFAFB8E76B_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.Created_5B2C2F894B063C6023D7DFBFAFB8E76B
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Commando_FragGrenade_WithTrajectory_C::Created_5B2C2F894B063C6023D7DFBFAFB8E76B(const struct FProjectileEventData& ProjectileData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.Created_5B2C2F894B063C6023D7DFBFAFB8E76B");

	UGA_Commando_FragGrenade_WithTrajectory_C_Created_5B2C2F894B063C6023D7DFBFAFB8E76B_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.Completed_C3E84D8940567A046A8F48A21D386165
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Commando_FragGrenade_WithTrajectory_C::Completed_C3E84D8940567A046A8F48A21D386165(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.Completed_C3E84D8940567A046A8F48A21D386165");

	UGA_Commando_FragGrenade_WithTrajectory_C_Completed_C3E84D8940567A046A8F48A21D386165_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.Cancelled_C3E84D8940567A046A8F48A21D386165
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Commando_FragGrenade_WithTrajectory_C::Cancelled_C3E84D8940567A046A8F48A21D386165(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.Cancelled_C3E84D8940567A046A8F48A21D386165");

	UGA_Commando_FragGrenade_WithTrajectory_C_Cancelled_C3E84D8940567A046A8F48A21D386165_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.Triggered_C3E84D8940567A046A8F48A21D386165
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Commando_FragGrenade_WithTrajectory_C::Triggered_C3E84D8940567A046A8F48A21D386165(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.Triggered_C3E84D8940567A046A8F48A21D386165");

	UGA_Commando_FragGrenade_WithTrajectory_C_Triggered_C3E84D8940567A046A8F48A21D386165_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.OnFinish_F5D87C9E46378707AE4C79B3A42F5A45
// (BlueprintCallable, BlueprintEvent)

void UGA_Commando_FragGrenade_WithTrajectory_C::OnFinish_F5D87C9E46378707AE4C79B3A42F5A45()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.OnFinish_F5D87C9E46378707AE4C79B3A42F5A45");

	UGA_Commando_FragGrenade_WithTrajectory_C_OnFinish_F5D87C9E46378707AE4C79B3A42F5A45_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.OnCancelled_854170AF4268B06A435A3AA33232C5BF
// (BlueprintCallable, BlueprintEvent)

void UGA_Commando_FragGrenade_WithTrajectory_C::OnCancelled_854170AF4268B06A435A3AA33232C5BF()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.OnCancelled_854170AF4268B06A435A3AA33232C5BF");

	UGA_Commando_FragGrenade_WithTrajectory_C_OnCancelled_854170AF4268B06A435A3AA33232C5BF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.OnInterrupted_854170AF4268B06A435A3AA33232C5BF
// (BlueprintCallable, BlueprintEvent)

void UGA_Commando_FragGrenade_WithTrajectory_C::OnInterrupted_854170AF4268B06A435A3AA33232C5BF()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.OnInterrupted_854170AF4268B06A435A3AA33232C5BF");

	UGA_Commando_FragGrenade_WithTrajectory_C_OnInterrupted_854170AF4268B06A435A3AA33232C5BF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.OnBlendOut_854170AF4268B06A435A3AA33232C5BF
// (BlueprintCallable, BlueprintEvent)

void UGA_Commando_FragGrenade_WithTrajectory_C::OnBlendOut_854170AF4268B06A435A3AA33232C5BF()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.OnBlendOut_854170AF4268B06A435A3AA33232C5BF");

	UGA_Commando_FragGrenade_WithTrajectory_C_OnBlendOut_854170AF4268B06A435A3AA33232C5BF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.OnCompleted_854170AF4268B06A435A3AA33232C5BF
// (BlueprintCallable, BlueprintEvent)

void UGA_Commando_FragGrenade_WithTrajectory_C::OnCompleted_854170AF4268B06A435A3AA33232C5BF()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.OnCompleted_854170AF4268B06A435A3AA33232C5BF");

	UGA_Commando_FragGrenade_WithTrajectory_C_OnCompleted_854170AF4268B06A435A3AA33232C5BF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.OnFinish_1C6A100D44D1ACE5BBB57DAEDB3561CB
// (BlueprintCallable, BlueprintEvent)

void UGA_Commando_FragGrenade_WithTrajectory_C::OnFinish_1C6A100D44D1ACE5BBB57DAEDB3561CB()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.OnFinish_1C6A100D44D1ACE5BBB57DAEDB3561CB");

	UGA_Commando_FragGrenade_WithTrajectory_C_OnFinish_1C6A100D44D1ACE5BBB57DAEDB3561CB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Commando_FragGrenade_WithTrajectory_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.K2_ActivateAbility");

	UGA_Commando_FragGrenade_WithTrajectory_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.Server_SpawnProjectile
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UGA_Commando_FragGrenade_WithTrajectory_C::Server_SpawnProjectile(const struct FVector& Location, const struct FRotator& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.Server_SpawnProjectile");

	UGA_Commando_FragGrenade_WithTrajectory_C_Server_SpawnProjectile_Params params;
	params.Location = Location;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.RequiredB
// (BlueprintCallable, BlueprintEvent)

void UGA_Commando_FragGrenade_WithTrajectory_C::RequiredB()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.RequiredB");

	UGA_Commando_FragGrenade_WithTrajectory_C_RequiredB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.OnAbilityInputReleased
// (Event, Protected, BlueprintEvent)

void UGA_Commando_FragGrenade_WithTrajectory_C::OnAbilityInputReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.OnAbilityInputReleased");

	UGA_Commando_FragGrenade_WithTrajectory_C_OnAbilityInputReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Commando_FragGrenade_WithTrajectory_C::K2_OnEndAbility(bool* bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.K2_OnEndAbility");

	UGA_Commando_FragGrenade_WithTrajectory_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.CleanupTrajectoryDisplay
// (BlueprintCallable, BlueprintEvent)

void UGA_Commando_FragGrenade_WithTrajectory_C::CleanupTrajectoryDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.CleanupTrajectoryDisplay");

	UGA_Commando_FragGrenade_WithTrajectory_C_CleanupTrajectoryDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.TossGrenade
// (BlueprintCallable, BlueprintEvent)

void UGA_Commando_FragGrenade_WithTrajectory_C::TossGrenade()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.TossGrenade");

	UGA_Commando_FragGrenade_WithTrajectory_C_TossGrenade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Commando_FragGrenade_WithTrajectory_C::ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory");

	UGA_Commando_FragGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
