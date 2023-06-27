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

// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.ShouldOnlyShowTrajectoryOnUse
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C::ShouldOnlyShowTrajectoryOnUse()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.ShouldOnlyShowTrajectoryOnUse");

	UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_ShouldOnlyShowTrajectoryOnUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.SpawnTrajectoryIndicator
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSpawnOnEquip                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFortProjectileTrajectory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AFortProjectileTrajectory* UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C::SpawnTrajectoryIndicator(bool bSpawnOnEquip)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.SpawnTrajectoryIndicator");

	UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_SpawnTrajectoryIndicator_Params params;
	params.bSpawnOnEquip = bSpawnOnEquip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.GetProjectileTrajectoryPoints
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FVector>         OutSplinePoints                (Parm, OutParm)
// TArray<struct FVector>         OutSplineTangents              (Parm, OutParm)
// struct FHitResult              OutHitResult                   (Parm, OutParm, IsPlainOldData)

void UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C::GetProjectileTrajectoryPoints(TArray<struct FVector>* OutSplinePoints, TArray<struct FVector>* OutSplineTangents, struct FHitResult* OutHitResult)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.GetProjectileTrajectoryPoints");

	UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_GetProjectileTrajectoryPoints_Params params;

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


// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.GetProjectileTrajectoryActor
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortProjectileTrajectory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AFortProjectileTrajectory* UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C::GetProjectileTrajectoryActor()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.GetProjectileTrajectoryActor");

	UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_GetProjectileTrajectoryActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.CanBeDropped
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Yes                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C::CanBeDropped(bool* Yes)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.CanBeDropped");

	UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_CanBeDropped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Yes != nullptr)
		*Yes = params.Yes;
}


// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.GetProjectileDataFromWeaponID
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C::GetProjectileDataFromWeaponID()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.GetProjectileDataFromWeaponID");

	UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_GetProjectileDataFromWeaponID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.UpdateTrajectorySpline
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C::UpdateTrajectorySpline()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.UpdateTrajectorySpline");

	UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_UpdateTrajectorySpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.GetOwningPlayer
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPlayerPawn*         Player_Pawn                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C::GetOwningPlayer(class AFortPlayerPawn** Player_Pawn)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.GetOwningPlayer");

	UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_GetOwningPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Player_Pawn != nullptr)
		*Player_Pawn = params.Player_Pawn;
}


// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.CalcProjectileSpeedFromPitch
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          AimPitch                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          GrenadeSpeed                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C::CalcProjectileSpeedFromPitch(float AimPitch, float* GrenadeSpeed)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.CalcProjectileSpeedFromPitch");

	UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_CalcProjectileSpeedFromPitch_Params params;
	params.AimPitch = AimPitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GrenadeSpeed != nullptr)
		*GrenadeSpeed = params.GrenadeSpeed;
}


// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.SetupDummyProjectile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C::SetupDummyProjectile()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.SetupDummyProjectile");

	UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_SetupDummyProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.SpawnLocationAndRotation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FVector                 OutLoc                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                OutRot                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C::SpawnLocationAndRotation(struct FVector* OutLoc, struct FRotator* OutRot)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.SpawnLocationAndRotation");

	UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_SpawnLocationAndRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLoc != nullptr)
		*OutLoc = params.OutLoc;
	if (OutRot != nullptr)
		*OutRot = params.OutRot;
}


// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.Destroyed_810B87EA424E705019D253BCBCE0A171
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C::Destroyed_810B87EA424E705019D253BCBCE0A171(const struct FProjectileEventData& ProjectileData)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.Destroyed_810B87EA424E705019D253BCBCE0A171");

	UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_Destroyed_810B87EA424E705019D253BCBCE0A171_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.Exploded_810B87EA424E705019D253BCBCE0A171
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C::Exploded_810B87EA424E705019D253BCBCE0A171(const struct FProjectileEventData& ProjectileData)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.Exploded_810B87EA424E705019D253BCBCE0A171");

	UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_Exploded_810B87EA424E705019D253BCBCE0A171_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.Stopped_810B87EA424E705019D253BCBCE0A171
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C::Stopped_810B87EA424E705019D253BCBCE0A171(const struct FProjectileEventData& ProjectileData)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.Stopped_810B87EA424E705019D253BCBCE0A171");

	UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_Stopped_810B87EA424E705019D253BCBCE0A171_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.Bounced_810B87EA424E705019D253BCBCE0A171
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C::Bounced_810B87EA424E705019D253BCBCE0A171(const struct FProjectileEventData& ProjectileData)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.Bounced_810B87EA424E705019D253BCBCE0A171");

	UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_Bounced_810B87EA424E705019D253BCBCE0A171_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.Touched_810B87EA424E705019D253BCBCE0A171
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C::Touched_810B87EA424E705019D253BCBCE0A171(const struct FProjectileEventData& ProjectileData)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.Touched_810B87EA424E705019D253BCBCE0A171");

	UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_Touched_810B87EA424E705019D253BCBCE0A171_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.Created_810B87EA424E705019D253BCBCE0A171
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C::Created_810B87EA424E705019D253BCBCE0A171(const struct FProjectileEventData& ProjectileData)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.Created_810B87EA424E705019D253BCBCE0A171");

	UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_Created_810B87EA424E705019D253BCBCE0A171_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.Completed_B7154AE349A61FA4A5545D97B125C031
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C::Completed_B7154AE349A61FA4A5545D97B125C031(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.Completed_B7154AE349A61FA4A5545D97B125C031");

	UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_Completed_B7154AE349A61FA4A5545D97B125C031_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.Cancelled_B7154AE349A61FA4A5545D97B125C031
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C::Cancelled_B7154AE349A61FA4A5545D97B125C031(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.Cancelled_B7154AE349A61FA4A5545D97B125C031");

	UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_Cancelled_B7154AE349A61FA4A5545D97B125C031_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.Triggered_B7154AE349A61FA4A5545D97B125C031
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C::Triggered_B7154AE349A61FA4A5545D97B125C031(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.Triggered_B7154AE349A61FA4A5545D97B125C031");

	UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_Triggered_B7154AE349A61FA4A5545D97B125C031_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.OnFinish_3698CE084DFBBB65C54A74B61C442258
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C::OnFinish_3698CE084DFBBB65C54A74B61C442258()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.OnFinish_3698CE084DFBBB65C54A74B61C442258");

	UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_OnFinish_3698CE084DFBBB65C54A74B61C442258_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.OnFinish_37708BDA4A053044298FDD8A986CE91D
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C::OnFinish_37708BDA4A053044298FDD8A986CE91D()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.OnFinish_37708BDA4A053044298FDD8A986CE91D");

	UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_OnFinish_37708BDA4A053044298FDD8A986CE91D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.OnCancelled_9B7908404C52FEE66F1ED5B2A4DFC261
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C::OnCancelled_9B7908404C52FEE66F1ED5B2A4DFC261()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.OnCancelled_9B7908404C52FEE66F1ED5B2A4DFC261");

	UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_OnCancelled_9B7908404C52FEE66F1ED5B2A4DFC261_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.OnInterrupted_9B7908404C52FEE66F1ED5B2A4DFC261
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C::OnInterrupted_9B7908404C52FEE66F1ED5B2A4DFC261()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.OnInterrupted_9B7908404C52FEE66F1ED5B2A4DFC261");

	UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_OnInterrupted_9B7908404C52FEE66F1ED5B2A4DFC261_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.OnBlendOut_9B7908404C52FEE66F1ED5B2A4DFC261
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C::OnBlendOut_9B7908404C52FEE66F1ED5B2A4DFC261()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.OnBlendOut_9B7908404C52FEE66F1ED5B2A4DFC261");

	UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_OnBlendOut_9B7908404C52FEE66F1ED5B2A4DFC261_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.OnCompleted_9B7908404C52FEE66F1ED5B2A4DFC261
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C::OnCompleted_9B7908404C52FEE66F1ED5B2A4DFC261()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.OnCompleted_9B7908404C52FEE66F1ED5B2A4DFC261");

	UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_OnCompleted_9B7908404C52FEE66F1ED5B2A4DFC261_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.OnFinish_CF0A57844174C8A87D0024B17D96B713
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C::OnFinish_CF0A57844174C8A87D0024B17D96B713()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.OnFinish_CF0A57844174C8A87D0024B17D96B713");

	UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_OnFinish_CF0A57844174C8A87D0024B17D96B713_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.EventReceived_13E531C84957E69360FC6EB6E9818D90
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C::EventReceived_13E531C84957E69360FC6EB6E9818D90(const struct FGameplayEventData& Payload)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.EventReceived_13E531C84957E69360FC6EB6E9818D90");

	UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_EventReceived_13E531C84957E69360FC6EB6E9818D90_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.OnSync_F83BC34A45D86702B453A1BFE1D7F7E1
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C::OnSync_F83BC34A45D86702B453A1BFE1D7F7E1()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.OnSync_F83BC34A45D86702B453A1BFE1D7F7E1");

	UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_OnSync_F83BC34A45D86702B453A1BFE1D7F7E1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.EventReceived_D907E28A43BC498803B5B0AD054E5FC1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C::EventReceived_D907E28A43BC498803B5B0AD054E5FC1(const struct FGameplayEventData& Payload)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.EventReceived_D907E28A43BC498803B5B0AD054E5FC1");

	UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_EventReceived_D907E28A43BC498803B5B0AD054E5FC1_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C::K2_ActivateAbility()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.K2_ActivateAbility");

	UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.Server_SpawnProjectile
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C::Server_SpawnProjectile(const struct FVector& Location, const struct FRotator& Direction)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.Server_SpawnProjectile");

	UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_Server_SpawnProjectile_Params params;
	params.Location = Location;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.OnAbilityInputReleased
// (Event, Protected, BlueprintEvent)

void UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C::OnAbilityInputReleased()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.OnAbilityInputReleased");

	UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_OnAbilityInputReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C::K2_OnEndAbility(bool bWasCancelled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.K2_OnEndAbility");

	UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.CleanupTrajectoryDisplay
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C::CleanupTrajectoryDisplay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.CleanupTrajectoryDisplay");

	UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_CleanupTrajectoryDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.ThrowConsumable
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C::ThrowConsumable()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.ThrowConsumable");

	UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_ThrowConsumable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.InitTrajectoryVariables
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C::InitTrajectoryVariables()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.InitTrajectoryVariables");

	UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_InitTrajectoryVariables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.CleanupTrajectoryIndicatorOnUnequip
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C::CleanupTrajectoryIndicatorOnUnequip()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.CleanupTrajectoryIndicatorOnUnequip");

	UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_CleanupTrajectoryIndicatorOnUnequip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.Cleanup Trajectory Display On End
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C::Cleanup_Trajectory_Display_On_End()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.Cleanup Trajectory Display On End");

	UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_Cleanup_Trajectory_Display_On_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.UpdateTrajectory
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C::UpdateTrajectory()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.UpdateTrajectory");

	UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_UpdateTrajectory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.ExecuteUbergraph_GA_Athena_Consumable_ThrowWithTrajectory_Parent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C::ExecuteUbergraph_GA_Athena_Consumable_ThrowWithTrajectory_Parent(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.ExecuteUbergraph_GA_Athena_Consumable_ThrowWithTrajectory_Parent");

	UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_ThrowWithTrajectory_Parent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
