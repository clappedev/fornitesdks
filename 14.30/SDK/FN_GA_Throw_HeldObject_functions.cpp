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

// Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.ShouldOnlyShowTrajectoryOnUse
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGA_Throw_HeldObject_C::ShouldOnlyShowTrajectoryOnUse()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.ShouldOnlyShowTrajectoryOnUse");

	UGA_Throw_HeldObject_C_ShouldOnlyShowTrajectoryOnUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.SpawnTrajectoryIndicator
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSpawnOnEquip                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFortProjectileTrajectory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AFortProjectileTrajectory* UGA_Throw_HeldObject_C::SpawnTrajectoryIndicator(bool bSpawnOnEquip)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.SpawnTrajectoryIndicator");

	UGA_Throw_HeldObject_C_SpawnTrajectoryIndicator_Params params;
	params.bSpawnOnEquip = bSpawnOnEquip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.GetProjectileTrajectoryActor
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortProjectileTrajectory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AFortProjectileTrajectory* UGA_Throw_HeldObject_C::GetProjectileTrajectoryActor()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.GetProjectileTrajectoryActor");

	UGA_Throw_HeldObject_C_GetProjectileTrajectoryActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.GetProjectileTrajectoryPoints
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FVector>         OutSplinePoints                (Parm, OutParm)
// TArray<struct FVector>         OutSplineTangents              (Parm, OutParm)
// struct FHitResult              OutHitResult                   (Parm, OutParm, IsPlainOldData)

void UGA_Throw_HeldObject_C::GetProjectileTrajectoryPoints(TArray<struct FVector>* OutSplinePoints, TArray<struct FVector>* OutSplineTangents, struct FHitResult* OutHitResult)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.GetProjectileTrajectoryPoints");

	UGA_Throw_HeldObject_C_GetProjectileTrajectoryPoints_Params params;

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


// Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.HitValidSocket
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              HitResult                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           CanSocket                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Throw_HeldObject_C::HitValidSocket(const struct FHitResult& HitResult, bool* CanSocket)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.HitValidSocket");

	UGA_Throw_HeldObject_C_HitValidSocket_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanSocket != nullptr)
		*CanSocket = params.CanSocket;
}


// Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.SetupDummyProjectileSocketed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Throw_HeldObject_C::SetupDummyProjectileSocketed()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.SetupDummyProjectileSocketed");

	UGA_Throw_HeldObject_C_SetupDummyProjectileSocketed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.CleanupTrajectory
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Throw_HeldObject_C::CleanupTrajectory()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.CleanupTrajectory");

	UGA_Throw_HeldObject_C_CleanupTrajectory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.PostThrowCleanup
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Throw_HeldObject_C::PostThrowCleanup()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.PostThrowCleanup");

	UGA_Throw_HeldObject_C_PostThrowCleanup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.UpdateTrajectorySpline
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Throw_HeldObject_C::UpdateTrajectorySpline()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.UpdateTrajectorySpline");

	UGA_Throw_HeldObject_C_UpdateTrajectorySpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.SetupDummyProjectile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Throw_HeldObject_C::SetupDummyProjectile()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.SetupDummyProjectile");

	UGA_Throw_HeldObject_C_SetupDummyProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.OnHeldObjectSetup
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Throw_HeldObject_C::OnHeldObjectSetup()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.OnHeldObjectSetup");

	UGA_Throw_HeldObject_C_OnHeldObjectSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.OnHeldObjectThrown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*     SpawnedProjectile              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Throw_HeldObject_C::OnHeldObjectThrown(class AFortProjectileBase* SpawnedProjectile)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.OnHeldObjectThrown");

	UGA_Throw_HeldObject_C_OnHeldObjectThrown_Params params;
	params.SpawnedProjectile = SpawnedProjectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.SpawnThrownProjectile
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*     ProjectileClass                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ProjectileSpawnLocation        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                ProjectileSpawnDirection       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FFortGameplayEffectContainerSpec ExplosionEffectContainerSpec   (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          ProjectileInitialSpeed         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ProjectileGravityScale         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFortProjectileBase*     SpawnedProjectile              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Throw_HeldObject_C::SpawnThrownProjectile(class AFortProjectileBase* ProjectileClass, const struct FVector& ProjectileSpawnLocation, const struct FRotator& ProjectileSpawnDirection, const struct FFortGameplayEffectContainerSpec& ExplosionEffectContainerSpec, float ProjectileInitialSpeed, float ProjectileGravityScale, class AFortProjectileBase** SpawnedProjectile)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.SpawnThrownProjectile");

	UGA_Throw_HeldObject_C_SpawnThrownProjectile_Params params;
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


// Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.GetOwningPlayer
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPlayerPawn*         Player_Pawn                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Throw_HeldObject_C::GetOwningPlayer(class AFortPlayerPawn** Player_Pawn)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.GetOwningPlayer");

	UGA_Throw_HeldObject_C_GetOwningPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Player_Pawn != nullptr)
		*Player_Pawn = params.Player_Pawn;
}


// Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.GetSpawnLocationAndRotation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Throw_HeldObject_C::GetSpawnLocationAndRotation(struct FVector* Location, struct FRotator* Rotation)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.GetSpawnLocationAndRotation");

	UGA_Throw_HeldObject_C_GetSpawnLocationAndRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;
}


// Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.PrethrowSetup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Throw_HeldObject_C::PrethrowSetup()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.PrethrowSetup");

	UGA_Throw_HeldObject_C_PrethrowSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.Completed_9DD11B80484829AF1E8DC5ACFC965E7A
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Throw_HeldObject_C::Completed_9DD11B80484829AF1E8DC5ACFC965E7A(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.Completed_9DD11B80484829AF1E8DC5ACFC965E7A");

	UGA_Throw_HeldObject_C_Completed_9DD11B80484829AF1E8DC5ACFC965E7A_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.Cancelled_9DD11B80484829AF1E8DC5ACFC965E7A
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Throw_HeldObject_C::Cancelled_9DD11B80484829AF1E8DC5ACFC965E7A(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.Cancelled_9DD11B80484829AF1E8DC5ACFC965E7A");

	UGA_Throw_HeldObject_C_Cancelled_9DD11B80484829AF1E8DC5ACFC965E7A_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.Triggered_9DD11B80484829AF1E8DC5ACFC965E7A
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Throw_HeldObject_C::Triggered_9DD11B80484829AF1E8DC5ACFC965E7A(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.Triggered_9DD11B80484829AF1E8DC5ACFC965E7A");

	UGA_Throw_HeldObject_C_Triggered_9DD11B80484829AF1E8DC5ACFC965E7A_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.OnFinish_5115EDCE4339523BE389D09CA4A2AECC
// (BlueprintCallable, BlueprintEvent)

void UGA_Throw_HeldObject_C::OnFinish_5115EDCE4339523BE389D09CA4A2AECC()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.OnFinish_5115EDCE4339523BE389D09CA4A2AECC");

	UGA_Throw_HeldObject_C_OnFinish_5115EDCE4339523BE389D09CA4A2AECC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.AttemptSpawnThrownProjectile
// (BlueprintCallable, BlueprintEvent)

void UGA_Throw_HeldObject_C::AttemptSpawnThrownProjectile()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.AttemptSpawnThrownProjectile");

	UGA_Throw_HeldObject_C_AttemptSpawnThrownProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Throw_HeldObject_C::K2_OnEndAbility(bool bWasCancelled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.K2_OnEndAbility");

	UGA_Throw_HeldObject_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.ThrowProjectile
// (BlueprintCallable, BlueprintEvent)

void UGA_Throw_HeldObject_C::ThrowProjectile()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.ThrowProjectile");

	UGA_Throw_HeldObject_C_ThrowProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.InitTrajectoryVariables
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGA_Throw_HeldObject_C::InitTrajectoryVariables()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.InitTrajectoryVariables");

	UGA_Throw_HeldObject_C_InitTrajectoryVariables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.CleanupTrajectoryIndicatorOnUnequip
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGA_Throw_HeldObject_C::CleanupTrajectoryIndicatorOnUnequip()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.CleanupTrajectoryIndicatorOnUnequip");

	UGA_Throw_HeldObject_C_CleanupTrajectoryIndicatorOnUnequip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.UpdateTrajectory
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGA_Throw_HeldObject_C::UpdateTrajectory()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.UpdateTrajectory");

	UGA_Throw_HeldObject_C_UpdateTrajectory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Throw_HeldObject_C::K2_ActivateAbility()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.K2_ActivateAbility");

	UGA_Throw_HeldObject_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.OnAbilityInputReleased
// (Event, Protected, BlueprintEvent)

void UGA_Throw_HeldObject_C::OnAbilityInputReleased()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.OnAbilityInputReleased");

	UGA_Throw_HeldObject_C_OnAbilityInputReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.ExecuteUbergraph_GA_Throw_HeldObject
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Throw_HeldObject_C::ExecuteUbergraph_GA_Throw_HeldObject(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.ExecuteUbergraph_GA_Throw_HeldObject");

	UGA_Throw_HeldObject_C_ExecuteUbergraph_GA_Throw_HeldObject_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
