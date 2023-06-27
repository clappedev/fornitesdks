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

// Function GA_ThrowConsumable.GA_ThrowConsumable_C.ShouldOnlyShowTrajectoryOnUse
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGA_ThrowConsumable_C::ShouldOnlyShowTrajectoryOnUse()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_ThrowConsumable.GA_ThrowConsumable_C.ShouldOnlyShowTrajectoryOnUse");

	UGA_ThrowConsumable_C_ShouldOnlyShowTrajectoryOnUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.SpawnTrajectoryIndicator
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSpawnOnEquip                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFortProjectileTrajectory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AFortProjectileTrajectory* UGA_ThrowConsumable_C::SpawnTrajectoryIndicator(bool bSpawnOnEquip)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_ThrowConsumable.GA_ThrowConsumable_C.SpawnTrajectoryIndicator");

	UGA_ThrowConsumable_C_SpawnTrajectoryIndicator_Params params;
	params.bSpawnOnEquip = bSpawnOnEquip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.GetProjectileTrajectoryActor
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortProjectileTrajectory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AFortProjectileTrajectory* UGA_ThrowConsumable_C::GetProjectileTrajectoryActor()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_ThrowConsumable.GA_ThrowConsumable_C.GetProjectileTrajectoryActor");

	UGA_ThrowConsumable_C_GetProjectileTrajectoryActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.GetProjectileTrajectoryPoints
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FVector>         OutSplinePoints                (Parm, OutParm)
// TArray<struct FVector>         OutSplineTangents              (Parm, OutParm)
// struct FHitResult              OutHitResult                   (Parm, OutParm, IsPlainOldData)

void UGA_ThrowConsumable_C::GetProjectileTrajectoryPoints(TArray<struct FVector>* OutSplinePoints, TArray<struct FVector>* OutSplineTangents, struct FHitResult* OutHitResult)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_ThrowConsumable.GA_ThrowConsumable_C.GetProjectileTrajectoryPoints");

	UGA_ThrowConsumable_C_GetProjectileTrajectoryPoints_Params params;

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


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.GetProjectileAdditionalThrowAngleToUse
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          AdditionalThrowAngleToUse      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_ThrowConsumable_C::GetProjectileAdditionalThrowAngleToUse(float* AdditionalThrowAngleToUse)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_ThrowConsumable.GA_ThrowConsumable_C.GetProjectileAdditionalThrowAngleToUse");

	UGA_ThrowConsumable_C_GetProjectileAdditionalThrowAngleToUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AdditionalThrowAngleToUse != nullptr)
		*AdditionalThrowAngleToUse = params.AdditionalThrowAngleToUse;
}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.GetProjectileInitialGravityScaleToUse
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          GravityScaleToUse              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_ThrowConsumable_C::GetProjectileInitialGravityScaleToUse(float* GravityScaleToUse)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_ThrowConsumable.GA_ThrowConsumable_C.GetProjectileInitialGravityScaleToUse");

	UGA_ThrowConsumable_C_GetProjectileInitialGravityScaleToUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GravityScaleToUse != nullptr)
		*GravityScaleToUse = params.GravityScaleToUse;
}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.GetProjectileInitialSpeedToUse
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ProjectileSpeedToUse           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_ThrowConsumable_C::GetProjectileInitialSpeedToUse(float* ProjectileSpeedToUse)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_ThrowConsumable.GA_ThrowConsumable_C.GetProjectileInitialSpeedToUse");

	UGA_ThrowConsumable_C_GetProjectileInitialSpeedToUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ProjectileSpeedToUse != nullptr)
		*ProjectileSpeedToUse = params.ProjectileSpeedToUse;
}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.CleanupTrajectory
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_ThrowConsumable_C::CleanupTrajectory()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_ThrowConsumable.GA_ThrowConsumable_C.CleanupTrajectory");

	UGA_ThrowConsumable_C_CleanupTrajectory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.PostThrowCleanup
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_ThrowConsumable_C::PostThrowCleanup()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_ThrowConsumable.GA_ThrowConsumable_C.PostThrowCleanup");

	UGA_ThrowConsumable_C_PostThrowCleanup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.UpdateTrajectorySpline
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_ThrowConsumable_C::UpdateTrajectorySpline()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_ThrowConsumable.GA_ThrowConsumable_C.UpdateTrajectorySpline");

	UGA_ThrowConsumable_C_UpdateTrajectorySpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.SetupDummyProjectile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_ThrowConsumable_C::SetupDummyProjectile()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_ThrowConsumable.GA_ThrowConsumable_C.SetupDummyProjectile");

	UGA_ThrowConsumable_C_SetupDummyProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.OnProjectileSetup
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_ThrowConsumable_C::OnProjectileSetup()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_ThrowConsumable.GA_ThrowConsumable_C.OnProjectileSetup");

	UGA_ThrowConsumable_C_OnProjectileSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.OnProjectileSpawned
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*     SpawnedProjectile              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_ThrowConsumable_C::OnProjectileSpawned(class AFortProjectileBase* SpawnedProjectile)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_ThrowConsumable.GA_ThrowConsumable_C.OnProjectileSpawned");

	UGA_ThrowConsumable_C_OnProjectileSpawned_Params params;
	params.SpawnedProjectile = SpawnedProjectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.SpawnThrownProjectile
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*     ProjectileClass                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ProjectileSpawnLocation        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                ProjectileSpawnDirection       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FFortGameplayEffectContainerSpec HitEffectContainerSpec         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FFortGameplayEffectContainerSpec ExplosionEffectContainerSpec   (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          ProjectileInitialSpeed         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ProjectileGravityScale         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFortProjectileBase*     SpawnedProjectile              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_ThrowConsumable_C::SpawnThrownProjectile(class AFortProjectileBase* ProjectileClass, const struct FVector& ProjectileSpawnLocation, const struct FRotator& ProjectileSpawnDirection, const struct FFortGameplayEffectContainerSpec& HitEffectContainerSpec, const struct FFortGameplayEffectContainerSpec& ExplosionEffectContainerSpec, float ProjectileInitialSpeed, float ProjectileGravityScale, class AFortProjectileBase** SpawnedProjectile)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_ThrowConsumable.GA_ThrowConsumable_C.SpawnThrownProjectile");

	UGA_ThrowConsumable_C_SpawnThrownProjectile_Params params;
	params.ProjectileClass = ProjectileClass;
	params.ProjectileSpawnLocation = ProjectileSpawnLocation;
	params.ProjectileSpawnDirection = ProjectileSpawnDirection;
	params.HitEffectContainerSpec = HitEffectContainerSpec;
	params.ExplosionEffectContainerSpec = ExplosionEffectContainerSpec;
	params.ProjectileInitialSpeed = ProjectileInitialSpeed;
	params.ProjectileGravityScale = ProjectileGravityScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnedProjectile != nullptr)
		*SpawnedProjectile = params.SpawnedProjectile;
}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.GetOwningPlayer
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPlayerPawn*         Player_Pawn                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_ThrowConsumable_C::GetOwningPlayer(class AFortPlayerPawn** Player_Pawn)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_ThrowConsumable.GA_ThrowConsumable_C.GetOwningPlayer");

	UGA_ThrowConsumable_C_GetOwningPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Player_Pawn != nullptr)
		*Player_Pawn = params.Player_Pawn;
}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.GetSpawnLocationAndRotation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_ThrowConsumable_C::GetSpawnLocationAndRotation(struct FVector* Location, struct FRotator* Rotation)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_ThrowConsumable.GA_ThrowConsumable_C.GetSpawnLocationAndRotation");

	UGA_ThrowConsumable_C_GetSpawnLocationAndRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;
}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.PrethrowSetup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_ThrowConsumable_C::PrethrowSetup()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_ThrowConsumable.GA_ThrowConsumable_C.PrethrowSetup");

	UGA_ThrowConsumable_C_PrethrowSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.Completed_01C5B37D48E3DC6F82DDC58640CE2A27
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_ThrowConsumable_C::Completed_01C5B37D48E3DC6F82DDC58640CE2A27(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_ThrowConsumable.GA_ThrowConsumable_C.Completed_01C5B37D48E3DC6F82DDC58640CE2A27");

	UGA_ThrowConsumable_C_Completed_01C5B37D48E3DC6F82DDC58640CE2A27_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.Cancelled_01C5B37D48E3DC6F82DDC58640CE2A27
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_ThrowConsumable_C::Cancelled_01C5B37D48E3DC6F82DDC58640CE2A27(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_ThrowConsumable.GA_ThrowConsumable_C.Cancelled_01C5B37D48E3DC6F82DDC58640CE2A27");

	UGA_ThrowConsumable_C_Cancelled_01C5B37D48E3DC6F82DDC58640CE2A27_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.Triggered_01C5B37D48E3DC6F82DDC58640CE2A27
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_ThrowConsumable_C::Triggered_01C5B37D48E3DC6F82DDC58640CE2A27(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_ThrowConsumable.GA_ThrowConsumable_C.Triggered_01C5B37D48E3DC6F82DDC58640CE2A27");

	UGA_ThrowConsumable_C_Triggered_01C5B37D48E3DC6F82DDC58640CE2A27_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.OnFinish_96367E244486362FDDE5ED87D909C17B
// (BlueprintCallable, BlueprintEvent)

void UGA_ThrowConsumable_C::OnFinish_96367E244486362FDDE5ED87D909C17B()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_ThrowConsumable.GA_ThrowConsumable_C.OnFinish_96367E244486362FDDE5ED87D909C17B");

	UGA_ThrowConsumable_C_OnFinish_96367E244486362FDDE5ED87D909C17B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.OnCancelled_D89CCB8E47DB19D6DCF41F96F207CC3D
// (BlueprintCallable, BlueprintEvent)

void UGA_ThrowConsumable_C::OnCancelled_D89CCB8E47DB19D6DCF41F96F207CC3D()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_ThrowConsumable.GA_ThrowConsumable_C.OnCancelled_D89CCB8E47DB19D6DCF41F96F207CC3D");

	UGA_ThrowConsumable_C_OnCancelled_D89CCB8E47DB19D6DCF41F96F207CC3D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.OnInterrupted_D89CCB8E47DB19D6DCF41F96F207CC3D
// (BlueprintCallable, BlueprintEvent)

void UGA_ThrowConsumable_C::OnInterrupted_D89CCB8E47DB19D6DCF41F96F207CC3D()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_ThrowConsumable.GA_ThrowConsumable_C.OnInterrupted_D89CCB8E47DB19D6DCF41F96F207CC3D");

	UGA_ThrowConsumable_C_OnInterrupted_D89CCB8E47DB19D6DCF41F96F207CC3D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.OnBlendOut_D89CCB8E47DB19D6DCF41F96F207CC3D
// (BlueprintCallable, BlueprintEvent)

void UGA_ThrowConsumable_C::OnBlendOut_D89CCB8E47DB19D6DCF41F96F207CC3D()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_ThrowConsumable.GA_ThrowConsumable_C.OnBlendOut_D89CCB8E47DB19D6DCF41F96F207CC3D");

	UGA_ThrowConsumable_C_OnBlendOut_D89CCB8E47DB19D6DCF41F96F207CC3D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.OnCompleted_D89CCB8E47DB19D6DCF41F96F207CC3D
// (BlueprintCallable, BlueprintEvent)

void UGA_ThrowConsumable_C::OnCompleted_D89CCB8E47DB19D6DCF41F96F207CC3D()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_ThrowConsumable.GA_ThrowConsumable_C.OnCompleted_D89CCB8E47DB19D6DCF41F96F207CC3D");

	UGA_ThrowConsumable_C_OnCompleted_D89CCB8E47DB19D6DCF41F96F207CC3D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.ThrowProjectile
// (BlueprintCallable, BlueprintEvent)

void UGA_ThrowConsumable_C::ThrowProjectile()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_ThrowConsumable.GA_ThrowConsumable_C.ThrowProjectile");

	UGA_ThrowConsumable_C_ThrowProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.AttemptSpawnThrownProjectile
// (BlueprintCallable, BlueprintEvent)

void UGA_ThrowConsumable_C::AttemptSpawnThrownProjectile()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_ThrowConsumable.GA_ThrowConsumable_C.AttemptSpawnThrownProjectile");

	UGA_ThrowConsumable_C_AttemptSpawnThrownProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_ThrowConsumable_C::K2_OnEndAbility(bool bWasCancelled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_ThrowConsumable.GA_ThrowConsumable_C.K2_OnEndAbility");

	UGA_ThrowConsumable_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.InitTrajectoryVariables
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGA_ThrowConsumable_C::InitTrajectoryVariables()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_ThrowConsumable.GA_ThrowConsumable_C.InitTrajectoryVariables");

	UGA_ThrowConsumable_C_InitTrajectoryVariables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.OnAbilityInputReleased
// (Event, Protected, BlueprintEvent)

void UGA_ThrowConsumable_C::OnAbilityInputReleased()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_ThrowConsumable.GA_ThrowConsumable_C.OnAbilityInputReleased");

	UGA_ThrowConsumable_C_OnAbilityInputReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_ThrowConsumable_C::K2_ActivateAbility()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_ThrowConsumable.GA_ThrowConsumable_C.K2_ActivateAbility");

	UGA_ThrowConsumable_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.CleanupTrajectoryIndicatorOnUnequip
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGA_ThrowConsumable_C::CleanupTrajectoryIndicatorOnUnequip()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_ThrowConsumable.GA_ThrowConsumable_C.CleanupTrajectoryIndicatorOnUnequip");

	UGA_ThrowConsumable_C_CleanupTrajectoryIndicatorOnUnequip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.UpdateTrajectory
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGA_ThrowConsumable_C::UpdateTrajectory()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_ThrowConsumable.GA_ThrowConsumable_C.UpdateTrajectory");

	UGA_ThrowConsumable_C_UpdateTrajectory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.ThrowMontageStarted
// (BlueprintCallable, BlueprintEvent)

void UGA_ThrowConsumable_C::ThrowMontageStarted()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_ThrowConsumable.GA_ThrowConsumable_C.ThrowMontageStarted");

	UGA_ThrowConsumable_C_ThrowMontageStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.ExecuteUbergraph_GA_ThrowConsumable
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_ThrowConsumable_C::ExecuteUbergraph_GA_ThrowConsumable(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_ThrowConsumable.GA_ThrowConsumable_C.ExecuteUbergraph_GA_ThrowConsumable");

	UGA_ThrowConsumable_C_ExecuteUbergraph_GA_ThrowConsumable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_ThrowConsumable.GA_ThrowConsumable_C.OnProjectileSpawn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UGA_ThrowConsumable_C::OnProjectileSpawn__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_ThrowConsumable.GA_ThrowConsumable_C.OnProjectileSpawn__DelegateSignature");

	UGA_ThrowConsumable_C_OnProjectileSpawn__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
