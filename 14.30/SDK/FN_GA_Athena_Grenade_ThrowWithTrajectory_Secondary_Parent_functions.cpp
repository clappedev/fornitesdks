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

// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.ShouldOnlyShowTrajectoryOnUse
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C::ShouldOnlyShowTrajectoryOnUse()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.ShouldOnlyShowTrajectoryOnUse");

	UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_ShouldOnlyShowTrajectoryOnUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.SpawnTrajectoryIndicator
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSpawnOnEquip                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFortProjectileTrajectory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AFortProjectileTrajectory* UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C::SpawnTrajectoryIndicator(bool bSpawnOnEquip)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.SpawnTrajectoryIndicator");

	UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_SpawnTrajectoryIndicator_Params params;
	params.bSpawnOnEquip = bSpawnOnEquip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.GetProjectileTrajectoryActor
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortProjectileTrajectory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AFortProjectileTrajectory* UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C::GetProjectileTrajectoryActor()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.GetProjectileTrajectoryActor");

	UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_GetProjectileTrajectoryActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.GetProjectileTrajectoryPoints
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FVector>         OutSplinePoints                (Parm, OutParm)
// TArray<struct FVector>         OutSplineTangents              (Parm, OutParm)
// struct FHitResult              OutHitResult                   (Parm, OutParm, IsPlainOldData)

void UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C::GetProjectileTrajectoryPoints(TArray<struct FVector>* OutSplinePoints, TArray<struct FVector>* OutSplineTangents, struct FHitResult* OutHitResult)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.GetProjectileTrajectoryPoints");

	UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_GetProjectileTrajectoryPoints_Params params;

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


// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.GetProjectileInitialGravityScaleToUse
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          GravityScaleToUse              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C::GetProjectileInitialGravityScaleToUse(float* GravityScaleToUse)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.GetProjectileInitialGravityScaleToUse");

	UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_GetProjectileInitialGravityScaleToUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GravityScaleToUse != nullptr)
		*GravityScaleToUse = params.GravityScaleToUse;
}


// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.GetProjectileInitialSpeedToUse
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ProjectileSpeedToUse           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C::GetProjectileInitialSpeedToUse(float* ProjectileSpeedToUse)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.GetProjectileInitialSpeedToUse");

	UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_GetProjectileInitialSpeedToUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ProjectileSpeedToUse != nullptr)
		*ProjectileSpeedToUse = params.ProjectileSpeedToUse;
}


// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.CleanupTrajectory
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C::CleanupTrajectory()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.CleanupTrajectory");

	UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_CleanupTrajectory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.PostThrowCleanup
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C::PostThrowCleanup()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.PostThrowCleanup");

	UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_PostThrowCleanup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.UpdateTrajectorySpline
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C::UpdateTrajectorySpline()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.UpdateTrajectorySpline");

	UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_UpdateTrajectorySpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.SetupDummyProjectile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C::SetupDummyProjectile()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.SetupDummyProjectile");

	UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_SetupDummyProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.OnProjectileSetup
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C::OnProjectileSetup()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.OnProjectileSetup");

	UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_OnProjectileSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.OnProjectileSpawned
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*     SpawnedProjectile              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C::OnProjectileSpawned(class AFortProjectileBase* SpawnedProjectile)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.OnProjectileSpawned");

	UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_OnProjectileSpawned_Params params;
	params.SpawnedProjectile = SpawnedProjectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.SpawnThrownProjectile
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

void UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C::SpawnThrownProjectile(class AFortProjectileBase* ProjectileClass, const struct FVector& ProjectileSpawnLocation, const struct FRotator& ProjectileSpawnDirection, const struct FFortGameplayEffectContainerSpec& HitEffectContainerSpec, const struct FFortGameplayEffectContainerSpec& ExplosionEffectContainerSpec, float ProjectileInitialSpeed, float ProjectileGravityScale, class AFortProjectileBase** SpawnedProjectile)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.SpawnThrownProjectile");

	UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_SpawnThrownProjectile_Params params;
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


// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.GetOwningPlayer
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPlayerPawn*         Player_Pawn                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C::GetOwningPlayer(class AFortPlayerPawn** Player_Pawn)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.GetOwningPlayer");

	UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_GetOwningPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Player_Pawn != nullptr)
		*Player_Pawn = params.Player_Pawn;
}


// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.GetSpawnLocationAndRotation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C::GetSpawnLocationAndRotation(struct FVector* Location, struct FRotator* Rotation)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.GetSpawnLocationAndRotation");

	UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_GetSpawnLocationAndRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;
}


// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.PrethrowSetup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C::PrethrowSetup()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.PrethrowSetup");

	UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_PrethrowSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.Completed_7CDE11F247AD13935CDDCCA29666AC3E
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C::Completed_7CDE11F247AD13935CDDCCA29666AC3E(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.Completed_7CDE11F247AD13935CDDCCA29666AC3E");

	UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_Completed_7CDE11F247AD13935CDDCCA29666AC3E_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.Cancelled_7CDE11F247AD13935CDDCCA29666AC3E
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C::Cancelled_7CDE11F247AD13935CDDCCA29666AC3E(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.Cancelled_7CDE11F247AD13935CDDCCA29666AC3E");

	UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_Cancelled_7CDE11F247AD13935CDDCCA29666AC3E_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.Triggered_7CDE11F247AD13935CDDCCA29666AC3E
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C::Triggered_7CDE11F247AD13935CDDCCA29666AC3E(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.Triggered_7CDE11F247AD13935CDDCCA29666AC3E");

	UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_Triggered_7CDE11F247AD13935CDDCCA29666AC3E_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.OnFinish_79D5F1274D4E02F76A06EEAFF19FADF3
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C::OnFinish_79D5F1274D4E02F76A06EEAFF19FADF3()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.OnFinish_79D5F1274D4E02F76A06EEAFF19FADF3");

	UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_OnFinish_79D5F1274D4E02F76A06EEAFF19FADF3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.OnCancelled_2A7663C74EF65992AD4E1F86CA08C8B1
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C::OnCancelled_2A7663C74EF65992AD4E1F86CA08C8B1()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.OnCancelled_2A7663C74EF65992AD4E1F86CA08C8B1");

	UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_OnCancelled_2A7663C74EF65992AD4E1F86CA08C8B1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.OnInterrupted_2A7663C74EF65992AD4E1F86CA08C8B1
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C::OnInterrupted_2A7663C74EF65992AD4E1F86CA08C8B1()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.OnInterrupted_2A7663C74EF65992AD4E1F86CA08C8B1");

	UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_OnInterrupted_2A7663C74EF65992AD4E1F86CA08C8B1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.OnBlendOut_2A7663C74EF65992AD4E1F86CA08C8B1
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C::OnBlendOut_2A7663C74EF65992AD4E1F86CA08C8B1()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.OnBlendOut_2A7663C74EF65992AD4E1F86CA08C8B1");

	UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_OnBlendOut_2A7663C74EF65992AD4E1F86CA08C8B1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.OnCompleted_2A7663C74EF65992AD4E1F86CA08C8B1
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C::OnCompleted_2A7663C74EF65992AD4E1F86CA08C8B1()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.OnCompleted_2A7663C74EF65992AD4E1F86CA08C8B1");

	UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_OnCompleted_2A7663C74EF65992AD4E1F86CA08C8B1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.EventReceived_11F8FEDB4634DE47482E1B962FB8A5E6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C::EventReceived_11F8FEDB4634DE47482E1B962FB8A5E6(const struct FGameplayEventData& Payload)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.EventReceived_11F8FEDB4634DE47482E1B962FB8A5E6");

	UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_EventReceived_11F8FEDB4634DE47482E1B962FB8A5E6_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.OnSync_65BB2FE343979EBE180BC6A76D8BF92F
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C::OnSync_65BB2FE343979EBE180BC6A76D8BF92F()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.OnSync_65BB2FE343979EBE180BC6A76D8BF92F");

	UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_OnSync_65BB2FE343979EBE180BC6A76D8BF92F_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.ThrowProjectile
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C::ThrowProjectile()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.ThrowProjectile");

	UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_ThrowProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.AttemptSpawnThrownProjectile
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C::AttemptSpawnThrownProjectile()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.AttemptSpawnThrownProjectile");

	UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_AttemptSpawnThrownProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C::K2_OnEndAbility(bool bWasCancelled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.K2_OnEndAbility");

	UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.InitTrajectoryVariables
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C::InitTrajectoryVariables()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.InitTrajectoryVariables");

	UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_InitTrajectoryVariables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.OnAbilityInputReleased
// (Event, Protected, BlueprintEvent)

void UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C::OnAbilityInputReleased()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.OnAbilityInputReleased");

	UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_OnAbilityInputReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C::K2_ActivateAbility()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.K2_ActivateAbility");

	UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.CleanupTrajectoryIndicatorOnUnequip
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C::CleanupTrajectoryIndicatorOnUnequip()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.CleanupTrajectoryIndicatorOnUnequip");

	UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_CleanupTrajectoryIndicatorOnUnequip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.UpdateTrajectory
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C::UpdateTrajectory()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.UpdateTrajectory");

	UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_UpdateTrajectory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.ThrowMontageStarted
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C::ThrowMontageStarted()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.ThrowMontageStarted");

	UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_ThrowMontageStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.ExecuteUbergraph_GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C::ExecuteUbergraph_GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.ExecuteUbergraph_GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent");

	UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_ExecuteUbergraph_GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.OnProjectileSpawn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C::OnProjectileSpawn__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.OnProjectileSpawn__DelegateSignature");

	UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_OnProjectileSpawn__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
