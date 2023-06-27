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

// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.ShouldOnlyShowTrajectoryOnUse
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C::ShouldOnlyShowTrajectoryOnUse()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.ShouldOnlyShowTrajectoryOnUse");

	UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_ShouldOnlyShowTrajectoryOnUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.SpawnTrajectoryIndicator
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSpawnOnEquip                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFortProjectileTrajectory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AFortProjectileTrajectory* UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C::SpawnTrajectoryIndicator(bool bSpawnOnEquip)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.SpawnTrajectoryIndicator");

	UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_SpawnTrajectoryIndicator_Params params;
	params.bSpawnOnEquip = bSpawnOnEquip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.GetProjectileTrajectoryPoints
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FVector>         OutSplinePoints                (Parm, OutParm)
// TArray<struct FVector>         OutSplineTangents              (Parm, OutParm)
// struct FHitResult              OutHitResult                   (Parm, OutParm, IsPlainOldData)

void UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C::GetProjectileTrajectoryPoints(TArray<struct FVector>* OutSplinePoints, TArray<struct FVector>* OutSplineTangents, struct FHitResult* OutHitResult)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.GetProjectileTrajectoryPoints");

	UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_GetProjectileTrajectoryPoints_Params params;

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


// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.GetProjectileTrajectoryActor
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortProjectileTrajectory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AFortProjectileTrajectory* UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C::GetProjectileTrajectoryActor()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.GetProjectileTrajectoryActor");

	UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_GetProjectileTrajectoryActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.CanBeDropped
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Yes                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C::CanBeDropped(bool* Yes)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.CanBeDropped");

	UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_CanBeDropped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Yes != nullptr)
		*Yes = params.Yes;
}


// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.UpdateTrajectorySpline
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C::UpdateTrajectorySpline()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.UpdateTrajectorySpline");

	UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_UpdateTrajectorySpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.GetOwningPlayer
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPlayerPawn*         Player_Pawn                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C::GetOwningPlayer(class AFortPlayerPawn** Player_Pawn)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.GetOwningPlayer");

	UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_GetOwningPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Player_Pawn != nullptr)
		*Player_Pawn = params.Player_Pawn;
}


// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.CalcProjectileSpeedFromPitch
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          AimPitch                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          GrenadeSpeed                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C::CalcProjectileSpeedFromPitch(float AimPitch, float* GrenadeSpeed)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.CalcProjectileSpeedFromPitch");

	UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_CalcProjectileSpeedFromPitch_Params params;
	params.AimPitch = AimPitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GrenadeSpeed != nullptr)
		*GrenadeSpeed = params.GrenadeSpeed;
}


// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.SetupDummyProjectile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C::SetupDummyProjectile()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.SetupDummyProjectile");

	UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_SetupDummyProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.SpawnLocationAndRotation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 OutLoc                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                OutRot                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C::SpawnLocationAndRotation(struct FVector* OutLoc, struct FRotator* OutRot)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.SpawnLocationAndRotation");

	UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_SpawnLocationAndRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLoc != nullptr)
		*OutLoc = params.OutLoc;
	if (OutRot != nullptr)
		*OutRot = params.OutRot;
}


// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.Completed_11EB7D0B4C52CC25C785B3A1EA90B008
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C::Completed_11EB7D0B4C52CC25C785B3A1EA90B008(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.Completed_11EB7D0B4C52CC25C785B3A1EA90B008");

	UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_Completed_11EB7D0B4C52CC25C785B3A1EA90B008_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.Cancelled_11EB7D0B4C52CC25C785B3A1EA90B008
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C::Cancelled_11EB7D0B4C52CC25C785B3A1EA90B008(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.Cancelled_11EB7D0B4C52CC25C785B3A1EA90B008");

	UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_Cancelled_11EB7D0B4C52CC25C785B3A1EA90B008_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.Triggered_11EB7D0B4C52CC25C785B3A1EA90B008
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C::Triggered_11EB7D0B4C52CC25C785B3A1EA90B008(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.Triggered_11EB7D0B4C52CC25C785B3A1EA90B008");

	UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_Triggered_11EB7D0B4C52CC25C785B3A1EA90B008_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.OnCancelled_D12FE2DE4501EC495B89AAA1271D8CC2
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C::OnCancelled_D12FE2DE4501EC495B89AAA1271D8CC2()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.OnCancelled_D12FE2DE4501EC495B89AAA1271D8CC2");

	UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_OnCancelled_D12FE2DE4501EC495B89AAA1271D8CC2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.OnInterrupted_D12FE2DE4501EC495B89AAA1271D8CC2
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C::OnInterrupted_D12FE2DE4501EC495B89AAA1271D8CC2()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.OnInterrupted_D12FE2DE4501EC495B89AAA1271D8CC2");

	UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_OnInterrupted_D12FE2DE4501EC495B89AAA1271D8CC2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.OnBlendOut_D12FE2DE4501EC495B89AAA1271D8CC2
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C::OnBlendOut_D12FE2DE4501EC495B89AAA1271D8CC2()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.OnBlendOut_D12FE2DE4501EC495B89AAA1271D8CC2");

	UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_OnBlendOut_D12FE2DE4501EC495B89AAA1271D8CC2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.OnCompleted_D12FE2DE4501EC495B89AAA1271D8CC2
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C::OnCompleted_D12FE2DE4501EC495B89AAA1271D8CC2()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.OnCompleted_D12FE2DE4501EC495B89AAA1271D8CC2");

	UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_OnCompleted_D12FE2DE4501EC495B89AAA1271D8CC2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.OnFinish_4303A6684F8456517B7D258D8BA1CE9B
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C::OnFinish_4303A6684F8456517B7D258D8BA1CE9B()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.OnFinish_4303A6684F8456517B7D258D8BA1CE9B");

	UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_OnFinish_4303A6684F8456517B7D258D8BA1CE9B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.EventReceived_37ED270D4E5065DF6944ECB72BFD05A2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C::EventReceived_37ED270D4E5065DF6944ECB72BFD05A2(const struct FGameplayEventData& Payload)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.EventReceived_37ED270D4E5065DF6944ECB72BFD05A2");

	UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_EventReceived_37ED270D4E5065DF6944ECB72BFD05A2_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.OnSync_9DBAE13E407ED891AB4EECA2ADF75C8D
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C::OnSync_9DBAE13E407ED891AB4EECA2ADF75C8D()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.OnSync_9DBAE13E407ED891AB4EECA2ADF75C8D");

	UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_OnSync_9DBAE13E407ED891AB4EECA2ADF75C8D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.EventReceived_526561A640EC49D3EEBA449BC71450EF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C::EventReceived_526561A640EC49D3EEBA449BC71450EF(const struct FGameplayEventData& Payload)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.EventReceived_526561A640EC49D3EEBA449BC71450EF");

	UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_EventReceived_526561A640EC49D3EEBA449BC71450EF_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C::K2_ActivateAbility()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.K2_ActivateAbility");

	UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.OnAbilityInputReleased
// (Event, Protected, BlueprintEvent)

void UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C::OnAbilityInputReleased()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.OnAbilityInputReleased");

	UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_OnAbilityInputReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C::K2_OnEndAbility(bool bWasCancelled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.K2_OnEndAbility");

	UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.CleanupTrajectoryDisplay
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C::CleanupTrajectoryDisplay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.CleanupTrajectoryDisplay");

	UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_CleanupTrajectoryDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.ThrowConsumable
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C::ThrowConsumable()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.ThrowConsumable");

	UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_ThrowConsumable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.InitTrajectoryVariables
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C::InitTrajectoryVariables()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.InitTrajectoryVariables");

	UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_InitTrajectoryVariables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.CleanupTrajectoryIndicatorOnUnequip
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C::CleanupTrajectoryIndicatorOnUnequip()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.CleanupTrajectoryIndicatorOnUnequip");

	UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_CleanupTrajectoryIndicatorOnUnequip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.Cleanup Trajectory Display On End
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C::Cleanup_Trajectory_Display_On_End()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.Cleanup Trajectory Display On End");

	UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_Cleanup_Trajectory_Display_On_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.UpdateTrajectory
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C::UpdateTrajectory()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.UpdateTrajectory");

	UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_UpdateTrajectory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.UpdateSpawnedBGA(ServerOnly)
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C::UpdateSpawnedBGA_ServerOnly_()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.UpdateSpawnedBGA(ServerOnly)");

	UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_UpdateSpawnedBGA_ServerOnly__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.SpawnBGA(ServerOnly)
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C::SpawnBGA_ServerOnly_()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.SpawnBGA(ServerOnly)");

	UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_SpawnBGA_ServerOnly__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.RemoveItemFromQuickBar
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C::RemoveItemFromQuickBar()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.RemoveItemFromQuickBar");

	UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_RemoveItemFromQuickBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.UpdateDummyProjectileBGA
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C::UpdateDummyProjectileBGA()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.UpdateDummyProjectileBGA");

	UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_UpdateDummyProjectileBGA_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.SendGameplayEventsAndQuestUpdate
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C::SendGameplayEventsAndQuestUpdate()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.SendGameplayEventsAndQuestUpdate");

	UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_SendGameplayEventsAndQuestUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.ExecuteUbergraph_GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C::ExecuteUbergraph_GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.ExecuteUbergraph_GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent");

	UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
