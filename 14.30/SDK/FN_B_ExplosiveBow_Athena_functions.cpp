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

// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.StopDrawAudio
// (Public, BlueprintCallable, BlueprintEvent)

void AB_ExplosiveBow_Athena_C::StopDrawAudio()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.StopDrawAudio");

	AB_ExplosiveBow_Athena_C_StopDrawAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.StartDrawAudio
// (Public, BlueprintCallable, BlueprintEvent)

void AB_ExplosiveBow_Athena_C::StartDrawAudio()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.StartDrawAudio");

	AB_ExplosiveBow_Athena_C_StartDrawAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.SetupProjectileVariables
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 StartLocation                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 InitialVelocity                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ProjectileVelocity             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                OutRotation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AB_ExplosiveBow_Athena_C::SetupProjectileVariables(struct FVector* StartLocation, struct FVector* InitialVelocity, float* ProjectileVelocity, struct FRotator* OutRotation)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.SetupProjectileVariables");

	AB_ExplosiveBow_Athena_C_SetupProjectileVariables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StartLocation != nullptr)
		*StartLocation = params.StartLocation;
	if (InitialVelocity != nullptr)
		*InitialVelocity = params.InitialVelocity;
	if (ProjectileVelocity != nullptr)
		*ProjectileVelocity = params.ProjectileVelocity;
	if (OutRotation != nullptr)
		*OutRotation = params.OutRotation;
}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.CalculateVelocity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Velocity                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AB_ExplosiveBow_Athena_C::CalculateVelocity(float* Velocity)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.CalculateVelocity");

	AB_ExplosiveBow_Athena_C_CalculateVelocity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Velocity != nullptr)
		*Velocity = params.Velocity;
}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.CalculateTrajectorySpline
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_ExplosiveBow_Athena_C::CalculateTrajectorySpline()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.CalculateTrajectorySpline");

	AB_ExplosiveBow_Athena_C_CalculateTrajectorySpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.SetDummyVariables
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_ExplosiveBow_Athena_C::SetDummyVariables()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.SetDummyVariables");

	AB_ExplosiveBow_Athena_C_SetDummyVariables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.SetupTrajectoryProjectile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_ExplosiveBow_Athena_C::SetupTrajectoryProjectile()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.SetupTrajectoryProjectile");

	AB_ExplosiveBow_Athena_C_SetupTrajectoryProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.OnReachedMinCharge
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void AB_ExplosiveBow_Athena_C::OnReachedMinCharge()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.OnReachedMinCharge");

	AB_ExplosiveBow_Athena_C_OnReachedMinCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.OnStartCharge
// (Event, Protected, BlueprintEvent)

void AB_ExplosiveBow_Athena_C::OnStartCharge()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.OnStartCharge");

	AB_ExplosiveBow_Athena_C_OnStartCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.OnPlayWeaponFireFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bPersistentFire                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSecondaryFire                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_ExplosiveBow_Athena_C::OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.OnPlayWeaponFireFX");

	AB_ExplosiveBow_Athena_C_OnPlayWeaponFireFX_Params params;
	params.bPersistentFire = bPersistentFire;
	params.bSecondaryFire = bSecondaryFire;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.EndOfCharge
// (BlueprintCallable, BlueprintEvent)

void AB_ExplosiveBow_Athena_C::EndOfCharge()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.EndOfCharge");

	AB_ExplosiveBow_Athena_C_EndOfCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.K2_OnUnEquip
// (Event, Public, BlueprintEvent)

void AB_ExplosiveBow_Athena_C::K2_OnUnEquip()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.K2_OnUnEquip");

	AB_ExplosiveBow_Athena_C_K2_OnUnEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.OnChargeDown
// (Event, Protected, BlueprintEvent)

void AB_ExplosiveBow_Athena_C::OnChargeDown()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.OnChargeDown");

	AB_ExplosiveBow_Athena_C_OnChargeDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.OnChargeUp
// (Event, Protected, BlueprintEvent)

void AB_ExplosiveBow_Athena_C::OnChargeUp()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.OnChargeUp");

	AB_ExplosiveBow_Athena_C_OnChargeUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.OnEndCharge
// (Event, Protected, BlueprintEvent)

void AB_ExplosiveBow_Athena_C::OnEndCharge()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.OnEndCharge");

	AB_ExplosiveBow_Athena_C_OnEndCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.ResetCharge
// (BlueprintCallable, BlueprintEvent)

void AB_ExplosiveBow_Athena_C::ResetCharge()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.ResetCharge");

	AB_ExplosiveBow_Athena_C_ResetCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.IncreaseDrawStrength
// (BlueprintCallable, BlueprintEvent)

void AB_ExplosiveBow_Athena_C::IncreaseDrawStrength()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.IncreaseDrawStrength");

	AB_ExplosiveBow_Athena_C_IncreaseDrawStrength_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.OnWeaponAttached
// (Event, Public, BlueprintEvent)

void AB_ExplosiveBow_Athena_C::OnWeaponAttached()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.OnWeaponAttached");

	AB_ExplosiveBow_Athena_C_OnWeaponAttached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_ExplosiveBow_Athena_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.ReceiveTick");

	AB_ExplosiveBow_Athena_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.OnReachedMaxCharge
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void AB_ExplosiveBow_Athena_C::OnReachedMaxCharge()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.OnReachedMaxCharge");

	AB_ExplosiveBow_Athena_C_OnReachedMaxCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.ExecuteUbergraph_B_ExplosiveBow_Athena
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_ExplosiveBow_Athena_C::ExecuteUbergraph_B_ExplosiveBow_Athena(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.ExecuteUbergraph_B_ExplosiveBow_Athena");

	AB_ExplosiveBow_Athena_C_ExecuteUbergraph_B_ExplosiveBow_Athena_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
