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

// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.ShouldOnlyShowTrajectoryOnUse
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGA_HeldObject_Throw_Component_C::ShouldOnlyShowTrajectoryOnUse()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.ShouldOnlyShowTrajectoryOnUse");

	UGA_HeldObject_Throw_Component_C_ShouldOnlyShowTrajectoryOnUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.SpawnTrajectoryIndicator
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSpawnOnEquip                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFortProjectileTrajectory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AFortProjectileTrajectory* UGA_HeldObject_Throw_Component_C::SpawnTrajectoryIndicator(bool bSpawnOnEquip)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.SpawnTrajectoryIndicator");

	UGA_HeldObject_Throw_Component_C_SpawnTrajectoryIndicator_Params params;
	params.bSpawnOnEquip = bSpawnOnEquip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.GetProjectileTrajectoryActor
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortProjectileTrajectory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AFortProjectileTrajectory* UGA_HeldObject_Throw_Component_C::GetProjectileTrajectoryActor()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.GetProjectileTrajectoryActor");

	UGA_HeldObject_Throw_Component_C_GetProjectileTrajectoryActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.GetProjectileTrajectoryPoints
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FVector>         OutSplinePoints                (Parm, OutParm)
// TArray<struct FVector>         OutSplineTangents              (Parm, OutParm)
// struct FHitResult              OutHitResult                   (Parm, OutParm, IsPlainOldData)

void UGA_HeldObject_Throw_Component_C::GetProjectileTrajectoryPoints(TArray<struct FVector>* OutSplinePoints, TArray<struct FVector>* OutSplineTangents, struct FHitResult* OutHitResult)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.GetProjectileTrajectoryPoints");

	UGA_HeldObject_Throw_Component_C_GetProjectileTrajectoryPoints_Params params;

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


// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.SetupSplineActors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_HeldObject_Throw_Component_C::SetupSplineActors()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.SetupSplineActors");

	UGA_HeldObject_Throw_Component_C_SetupSplineActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.K2_CanActivateAbility
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo ActorInfo                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayAbilitySpecHandle Handle                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTagContainer   RelevantTags                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGA_HeldObject_Throw_Component_C::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.K2_CanActivateAbility");

	UGA_HeldObject_Throw_Component_C_K2_CanActivateAbility_Params params;
	params.ActorInfo = ActorInfo;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RelevantTags != nullptr)
		*RelevantTags = params.RelevantTags;

	return params.ReturnValue;
}


// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.Setup Late Trajectory Data
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_HeldObject_Throw_Component_C::Setup_Late_Trajectory_Data()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.Setup Late Trajectory Data");

	UGA_HeldObject_Throw_Component_C_Setup_Late_Trajectory_Data_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.HitValidSocket
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              HitResult                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           CanSocket                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_HeldObject_Throw_Component_C::HitValidSocket(const struct FHitResult& HitResult, bool* CanSocket)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.HitValidSocket");

	UGA_HeldObject_Throw_Component_C_HitValidSocket_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanSocket != nullptr)
		*CanSocket = params.CanSocket;
}


// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.SetupDummyProjectileSocketed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_HeldObject_Throw_Component_C::SetupDummyProjectileSocketed()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.SetupDummyProjectileSocketed");

	UGA_HeldObject_Throw_Component_C_SetupDummyProjectileSocketed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.CleanupTrajectory
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_HeldObject_Throw_Component_C::CleanupTrajectory()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.CleanupTrajectory");

	UGA_HeldObject_Throw_Component_C_CleanupTrajectory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.PostThrowCleanup
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_HeldObject_Throw_Component_C::PostThrowCleanup()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.PostThrowCleanup");

	UGA_HeldObject_Throw_Component_C_PostThrowCleanup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.UpdateTrajectorySpline
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_HeldObject_Throw_Component_C::UpdateTrajectorySpline()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.UpdateTrajectorySpline");

	UGA_HeldObject_Throw_Component_C_UpdateTrajectorySpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.SetupDummyProjectile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_HeldObject_Throw_Component_C::SetupDummyProjectile()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.SetupDummyProjectile");

	UGA_HeldObject_Throw_Component_C_SetupDummyProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.OnHeldObjectSetup
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_HeldObject_Throw_Component_C::OnHeldObjectSetup()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.OnHeldObjectSetup");

	UGA_HeldObject_Throw_Component_C_OnHeldObjectSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.OnHeldObjectThrown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*     SpawnedProjectile              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_HeldObject_Throw_Component_C::OnHeldObjectThrown(class AFortProjectileBase* SpawnedProjectile)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.OnHeldObjectThrown");

	UGA_HeldObject_Throw_Component_C_OnHeldObjectThrown_Params params;
	params.SpawnedProjectile = SpawnedProjectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.SpawnThrownProjectile
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*     ProjectileClass                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ProjectileSpawnLocation        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                ProjectileSpawnDirection       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FFortGameplayEffectContainerSpec ExplosionEffectContainerSpec   (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          ProjectileInitialSpeed         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ProjectileGravityScale         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFortProjectileBase*     SpawnedProjectile              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_HeldObject_Throw_Component_C::SpawnThrownProjectile(class AFortProjectileBase* ProjectileClass, const struct FVector& ProjectileSpawnLocation, const struct FRotator& ProjectileSpawnDirection, const struct FFortGameplayEffectContainerSpec& ExplosionEffectContainerSpec, float ProjectileInitialSpeed, float ProjectileGravityScale, class AFortProjectileBase** SpawnedProjectile)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.SpawnThrownProjectile");

	UGA_HeldObject_Throw_Component_C_SpawnThrownProjectile_Params params;
	params.ProjectileClass = ProjectileClass;
	params.ProjectileSpawnLocation = ProjectileSpawnLocation;
	params.ProjectileSpawnDirection = ProjectileSpawnDirection;
	params.ExplosionEffectContainerSpec = ExplosionEffectContainerSpec;
	params.ProjectileInitialSpeed = ProjectileInitialSpeed;
	params.ProjectileGravityScale = ProjectileGravityScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnedProjectile != nullptr)
		*SpawnedProjectile = params.SpawnedProjectile;
}


// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.GetOwningPlayer
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPlayerPawn*         Player_Pawn                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_HeldObject_Throw_Component_C::GetOwningPlayer(class AFortPlayerPawn** Player_Pawn)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.GetOwningPlayer");

	UGA_HeldObject_Throw_Component_C_GetOwningPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Player_Pawn != nullptr)
		*Player_Pawn = params.Player_Pawn;
}


// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.GetSpawnLocationAndRotation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_HeldObject_Throw_Component_C::GetSpawnLocationAndRotation(struct FVector* Location, struct FRotator* Rotation)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.GetSpawnLocationAndRotation");

	UGA_HeldObject_Throw_Component_C_GetSpawnLocationAndRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;
}


// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.PrethrowSetup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_HeldObject_Throw_Component_C::PrethrowSetup()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.PrethrowSetup");

	UGA_HeldObject_Throw_Component_C_PrethrowSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.Completed_A44500A44ED1BD047C0A7FB13050E377
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_HeldObject_Throw_Component_C::Completed_A44500A44ED1BD047C0A7FB13050E377(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.Completed_A44500A44ED1BD047C0A7FB13050E377");

	UGA_HeldObject_Throw_Component_C_Completed_A44500A44ED1BD047C0A7FB13050E377_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.Cancelled_A44500A44ED1BD047C0A7FB13050E377
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_HeldObject_Throw_Component_C::Cancelled_A44500A44ED1BD047C0A7FB13050E377(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.Cancelled_A44500A44ED1BD047C0A7FB13050E377");

	UGA_HeldObject_Throw_Component_C_Cancelled_A44500A44ED1BD047C0A7FB13050E377_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.Triggered_A44500A44ED1BD047C0A7FB13050E377
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_HeldObject_Throw_Component_C::Triggered_A44500A44ED1BD047C0A7FB13050E377(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.Triggered_A44500A44ED1BD047C0A7FB13050E377");

	UGA_HeldObject_Throw_Component_C_Triggered_A44500A44ED1BD047C0A7FB13050E377_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.OnFinish_CE16214748EB548E38F0A4A5EBFDD545
// (BlueprintCallable, BlueprintEvent)

void UGA_HeldObject_Throw_Component_C::OnFinish_CE16214748EB548E38F0A4A5EBFDD545()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.OnFinish_CE16214748EB548E38F0A4A5EBFDD545");

	UGA_HeldObject_Throw_Component_C_OnFinish_CE16214748EB548E38F0A4A5EBFDD545_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.Throw
// (BlueprintCallable, BlueprintEvent)

void UGA_HeldObject_Throw_Component_C::Throw()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.Throw");

	UGA_HeldObject_Throw_Component_C_Throw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.AttemptSpawnThrownProjectile
// (BlueprintCallable, BlueprintEvent)

void UGA_HeldObject_Throw_Component_C::AttemptSpawnThrownProjectile()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.AttemptSpawnThrownProjectile");

	UGA_HeldObject_Throw_Component_C_AttemptSpawnThrownProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_HeldObject_Throw_Component_C::K2_OnEndAbility(bool bWasCancelled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.K2_OnEndAbility");

	UGA_HeldObject_Throw_Component_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.InitTrajectoryVariables
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGA_HeldObject_Throw_Component_C::InitTrajectoryVariables()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.InitTrajectoryVariables");

	UGA_HeldObject_Throw_Component_C_InitTrajectoryVariables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.CleanupTrajectoryIndicatorOnUnequip
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGA_HeldObject_Throw_Component_C::CleanupTrajectoryIndicatorOnUnequip()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.CleanupTrajectoryIndicatorOnUnequip");

	UGA_HeldObject_Throw_Component_C_CleanupTrajectoryIndicatorOnUnequip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.UpdateTrajectory
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGA_HeldObject_Throw_Component_C::UpdateTrajectory()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.UpdateTrajectory");

	UGA_HeldObject_Throw_Component_C_UpdateTrajectory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_HeldObject_Throw_Component_C::K2_ActivateAbility()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.K2_ActivateAbility");

	UGA_HeldObject_Throw_Component_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.OnAbilityInputReleased
// (Event, Protected, BlueprintEvent)

void UGA_HeldObject_Throw_Component_C::OnAbilityInputReleased()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.OnAbilityInputReleased");

	UGA_HeldObject_Throw_Component_C_OnAbilityInputReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.ExecuteUbergraph_GA_HeldObject_Throw_Component
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_HeldObject_Throw_Component_C::ExecuteUbergraph_GA_HeldObject_Throw_Component(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.ExecuteUbergraph_GA_HeldObject_Throw_Component");

	UGA_HeldObject_Throw_Component_C_ExecuteUbergraph_GA_HeldObject_Throw_Component_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
