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

// Function HoagieRuntime.FortHoagieAudioController.Update
// (Final, Native, Public, BlueprintCallable)

void AFortHoagieAudioController::Update()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HoagieRuntime.FortHoagieAudioController.Update");

	AFortHoagieAudioController_Update_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoagieRuntime.FortHoagieAudioController.CacheHoagieVehicle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AFortHoagieVehicle*      InVehicle                      (Parm, ZeroConstructor, IsPlainOldData)

void AFortHoagieAudioController::CacheHoagieVehicle(class AFortHoagieVehicle* InVehicle)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HoagieRuntime.FortHoagieAudioController.CacheHoagieVehicle");

	AFortHoagieAudioController_CacheHoagieVehicle_Params params;
	params.InVehicle = InVehicle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoagieRuntime.FortHoagieAudioController.CacheAudioComponents
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortLayeredAudioComponent* InEngine                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UFortLayeredAudioComponent* InRotor                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AFortHoagieAudioController::CacheAudioComponents(class UFortLayeredAudioComponent* InEngine, class UFortLayeredAudioComponent* InRotor)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HoagieRuntime.FortHoagieAudioController.CacheAudioComponents");

	AFortHoagieAudioController_CacheAudioComponents_Params params;
	params.InEngine = InEngine;
	params.InRotor = InRotor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoagieRuntime.FortHoagieVehicle.UpdateDamageStateNative
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)

void AFortHoagieVehicle::UpdateDamageStateNative(float Damage)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HoagieRuntime.FortHoagieVehicle.UpdateDamageStateNative");

	AFortHoagieVehicle_UpdateDamageStateNative_Params params;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoagieRuntime.FortHoagieVehicle.SetTailRotorRotation
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          Degrees                        (Parm, ZeroConstructor, IsPlainOldData)

void AFortHoagieVehicle::SetTailRotorRotation(float Degrees)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HoagieRuntime.FortHoagieVehicle.SetTailRotorRotation");

	AFortHoagieVehicle_SetTailRotorRotation_Params params;
	params.Degrees = Degrees;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoagieRuntime.FortHoagieVehicle.SetRotorWashActive
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bActive                        (Parm, ZeroConstructor, IsPlainOldData)

void AFortHoagieVehicle::SetRotorWashActive(bool bActive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HoagieRuntime.FortHoagieVehicle.SetRotorWashActive");

	AFortHoagieVehicle_SetRotorWashActive_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoagieRuntime.FortHoagieVehicle.SetMainRotorRotation
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          Degrees                        (Parm, ZeroConstructor, IsPlainOldData)

void AFortHoagieVehicle::SetMainRotorRotation(float Degrees)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HoagieRuntime.FortHoagieVehicle.SetMainRotorRotation");

	AFortHoagieVehicle_SetMainRotorRotation_Params params;
	params.Degrees = Degrees;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoagieRuntime.FortHoagieVehicle.ServerUpdateControlState
// (Final, Net, Native, Event, Private, NetServer)
// Parameters:
// struct FReplicatedHeliControlState InControlState                 (Parm)

void AFortHoagieVehicle::ServerUpdateControlState(const struct FReplicatedHeliControlState& InControlState)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HoagieRuntime.FortHoagieVehicle.ServerUpdateControlState");

	AFortHoagieVehicle_ServerUpdateControlState_Params params;
	params.InControlState = InControlState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoagieRuntime.FortHoagieVehicle.OnTickRotors
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          RotorAngleDegrees              (Parm, ZeroConstructor, IsPlainOldData)

void AFortHoagieVehicle::OnTickRotors(float RotorAngleDegrees)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HoagieRuntime.FortHoagieVehicle.OnTickRotors");

	AFortHoagieVehicle_OnTickRotors_Params params;
	params.RotorAngleDegrees = RotorAngleDegrees;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoagieRuntime.FortHoagieVehicle.OnStartupEnd
// (Event, Protected, BlueprintEvent)

void AFortHoagieVehicle::OnStartupEnd()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HoagieRuntime.FortHoagieVehicle.OnStartupEnd");

	AFortHoagieVehicle_OnStartupEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoagieRuntime.FortHoagieVehicle.OnStartupBegin
// (Event, Protected, BlueprintEvent)

void AFortHoagieVehicle::OnStartupBegin()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HoagieRuntime.FortHoagieVehicle.OnStartupBegin");

	AFortHoagieVehicle_OnStartupBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoagieRuntime.FortHoagieVehicle.OnStartCriticalHealth
// (Event, Protected, BlueprintEvent)

void AFortHoagieVehicle::OnStartCriticalHealth()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HoagieRuntime.FortHoagieVehicle.OnStartCriticalHealth");

	AFortHoagieVehicle_OnStartCriticalHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoagieRuntime.FortHoagieVehicle.OnRotorsStop
// (Event, Protected, BlueprintEvent)

void AFortHoagieVehicle::OnRotorsStop()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HoagieRuntime.FortHoagieVehicle.OnRotorsStop");

	AFortHoagieVehicle_OnRotorsStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoagieRuntime.FortHoagieVehicle.OnRotorDamagePlayer
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              Impact                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AFortHoagieVehicle::OnRotorDamagePlayer(const struct FHitResult& Impact)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HoagieRuntime.FortHoagieVehicle.OnRotorDamagePlayer");

	AFortHoagieVehicle_OnRotorDamagePlayer_Params params;
	params.Impact = Impact;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoagieRuntime.FortHoagieVehicle.OnRotorDamageDealtOuter
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              Impact                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AFortHoagieVehicle::OnRotorDamageDealtOuter(const struct FHitResult& Impact)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HoagieRuntime.FortHoagieVehicle.OnRotorDamageDealtOuter");

	AFortHoagieVehicle_OnRotorDamageDealtOuter_Params params;
	params.Impact = Impact;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoagieRuntime.FortHoagieVehicle.OnRotorDamageDealtInner
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              Impact                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AFortHoagieVehicle::OnRotorDamageDealtInner(const struct FHitResult& Impact)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HoagieRuntime.FortHoagieVehicle.OnRotorDamageDealtInner");

	AFortHoagieVehicle_OnRotorDamageDealtInner_Params params;
	params.Impact = Impact;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoagieRuntime.FortHoagieVehicle.OnRotorDamageDealt
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              Impact                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bInner                         (Parm, ZeroConstructor, IsPlainOldData)

void AFortHoagieVehicle::OnRotorDamageDealt(const struct FHitResult& Impact, bool bInner)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HoagieRuntime.FortHoagieVehicle.OnRotorDamageDealt");

	AFortHoagieVehicle_OnRotorDamageDealt_Params params;
	params.Impact = Impact;
	params.bInner = bInner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoagieRuntime.FortHoagieVehicle.OnRep_IsUsingNewFuelSystemState
// (Final, Native, Protected)

void AFortHoagieVehicle::OnRep_IsUsingNewFuelSystemState()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HoagieRuntime.FortHoagieVehicle.OnRep_IsUsingNewFuelSystemState");

	AFortHoagieVehicle_OnRep_IsUsingNewFuelSystemState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoagieRuntime.FortHoagieVehicle.OnRep_HoagieState
// (Final, Native, Protected)

void AFortHoagieVehicle::OnRep_HoagieState()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HoagieRuntime.FortHoagieVehicle.OnRep_HoagieState");

	AFortHoagieVehicle_OnRep_HoagieState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoagieRuntime.FortHoagieVehicle.OnRep_ControlState
// (Final, Native, Private)

void AFortHoagieVehicle::OnRep_ControlState()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HoagieRuntime.FortHoagieVehicle.OnRep_ControlState");

	AFortHoagieVehicle_OnRep_ControlState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoagieRuntime.FortHoagieVehicle.OnRefueledFromEmpty
// (Final, Native, Protected)

void AFortHoagieVehicle::OnRefueledFromEmpty()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HoagieRuntime.FortHoagieVehicle.OnRefueledFromEmpty");

	AFortHoagieVehicle_OnRefueledFromEmpty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoagieRuntime.FortHoagieVehicle.OnImpactWhileCritical
// (Event, Protected, BlueprintEvent)

void AFortHoagieVehicle::OnImpactWhileCritical()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HoagieRuntime.FortHoagieVehicle.OnImpactWhileCritical");

	AFortHoagieVehicle_OnImpactWhileCritical_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoagieRuntime.FortHoagieVehicle.OnImpactOtherHoagie
// (Event, Protected, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                 HitLocation                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 NormalImpulse                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AFortHoagieVehicle::OnImpactOtherHoagie(const struct FVector& HitLocation, const struct FVector& NormalImpulse)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HoagieRuntime.FortHoagieVehicle.OnImpactOtherHoagie");

	AFortHoagieVehicle_OnImpactOtherHoagie_Params params;
	params.HitLocation = HitLocation;
	params.NormalImpulse = NormalImpulse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoagieRuntime.FortHoagieVehicle.OnExplode
// (Event, Protected, BlueprintEvent)

void AFortHoagieVehicle::OnExplode()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HoagieRuntime.FortHoagieVehicle.OnExplode");

	AFortHoagieVehicle_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoagieRuntime.FortHoagieVehicle.OnCritRotor
// (Event, Protected, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ImpactLocation                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AController*             DamageInstigator               (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bMainRotor                     (Parm, ZeroConstructor, IsPlainOldData)

void AFortHoagieVehicle::OnCritRotor(float Damage, const struct FVector& ImpactLocation, class AController* DamageInstigator, class AActor* DamageCauser, bool bMainRotor)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HoagieRuntime.FortHoagieVehicle.OnCritRotor");

	AFortHoagieVehicle_OnCritRotor_Params params;
	params.Damage = Damage;
	params.ImpactLocation = ImpactLocation;
	params.DamageInstigator = DamageInstigator;
	params.DamageCauser = DamageCauser;
	params.bMainRotor = bMainRotor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoagieRuntime.FortHoagieVehicle.OnBoostStarted
// (Event, Protected, BlueprintEvent)

void AFortHoagieVehicle::OnBoostStarted()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HoagieRuntime.FortHoagieVehicle.OnBoostStarted");

	AFortHoagieVehicle_OnBoostStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoagieRuntime.FortHoagieVehicle.OnBoostReady
// (Event, Protected, BlueprintEvent)

void AFortHoagieVehicle::OnBoostReady()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HoagieRuntime.FortHoagieVehicle.OnBoostReady");

	AFortHoagieVehicle_OnBoostReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoagieRuntime.FortHoagieVehicle.OnBoostFinished
// (Event, Protected, BlueprintEvent)

void AFortHoagieVehicle::OnBoostFinished()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HoagieRuntime.FortHoagieVehicle.OnBoostFinished");

	AFortHoagieVehicle_OnBoostFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoagieRuntime.FortHoagieVehicle.OnBoostFailed
// (Event, Protected, BlueprintEvent)

void AFortHoagieVehicle::OnBoostFailed()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HoagieRuntime.FortHoagieVehicle.OnBoostFailed");

	AFortHoagieVehicle_OnBoostFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoagieRuntime.FortHoagieVehicle.MulticastRotorImpulse
// (Net, NetReliable, Native, Event, NetMulticast, Protected, BlueprintCallable)
// Parameters:
// struct FHitResult              RotorHit                       (ConstParm, Parm, ReferenceParm, IsPlainOldData)

void AFortHoagieVehicle::MulticastRotorImpulse(const struct FHitResult& RotorHit)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HoagieRuntime.FortHoagieVehicle.MulticastRotorImpulse");

	AFortHoagieVehicle_MulticastRotorImpulse_Params params;
	params.RotorHit = RotorHit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoagieRuntime.FortHoagieVehicle.IsStartingUp
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AFortHoagieVehicle::IsStartingUp()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HoagieRuntime.FortHoagieVehicle.IsStartingUp");

	AFortHoagieVehicle_IsStartingUp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoagieRuntime.FortHoagieVehicle.IsShuttingDown
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AFortHoagieVehicle::IsShuttingDown()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HoagieRuntime.FortHoagieVehicle.IsShuttingDown");

	AFortHoagieVehicle_IsShuttingDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoagieRuntime.FortHoagieVehicle.IsScrapingBottom
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AFortHoagieVehicle::IsScrapingBottom()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HoagieRuntime.FortHoagieVehicle.IsScrapingBottom");

	AFortHoagieVehicle_IsScrapingBottom_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoagieRuntime.FortHoagieVehicle.GetVerticalSpeedKmh
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AFortHoagieVehicle::GetVerticalSpeedKmh()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HoagieRuntime.FortHoagieVehicle.GetVerticalSpeedKmh");

	AFortHoagieVehicle_GetVerticalSpeedKmh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoagieRuntime.FortHoagieVehicle.GetThrustDirection
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bWorldSpace                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AFortHoagieVehicle::GetThrustDirection(bool bWorldSpace)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HoagieRuntime.FortHoagieVehicle.GetThrustDirection");

	AFortHoagieVehicle_GetThrustDirection_Params params;
	params.bWorldSpace = bWorldSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoagieRuntime.FortHoagieVehicle.GetStrafeAlpha
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AFortHoagieVehicle::GetStrafeAlpha()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HoagieRuntime.FortHoagieVehicle.GetStrafeAlpha");

	AFortHoagieVehicle_GetStrafeAlpha_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoagieRuntime.FortHoagieVehicle.GetSteerAlpha
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AFortHoagieVehicle::GetSteerAlpha()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HoagieRuntime.FortHoagieVehicle.GetSteerAlpha");

	AFortHoagieVehicle_GetSteerAlpha_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoagieRuntime.FortHoagieVehicle.GetShutdownTimeLeft
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AFortHoagieVehicle::GetShutdownTimeLeft()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HoagieRuntime.FortHoagieVehicle.GetShutdownTimeLeft");

	AFortHoagieVehicle_GetShutdownTimeLeft_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoagieRuntime.FortHoagieVehicle.GetRotorSpeedPercent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AFortHoagieVehicle::GetRotorSpeedPercent()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HoagieRuntime.FortHoagieVehicle.GetRotorSpeedPercent");

	AFortHoagieVehicle_GetRotorSpeedPercent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoagieRuntime.FortHoagieVehicle.GetRotorSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AFortHoagieVehicle::GetRotorSpeed()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HoagieRuntime.FortHoagieVehicle.GetRotorSpeed");

	AFortHoagieVehicle_GetRotorSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoagieRuntime.FortHoagieVehicle.GetRotorCenterPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AFortHoagieVehicle::GetRotorCenterPosition()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HoagieRuntime.FortHoagieVehicle.GetRotorCenterPosition");

	AFortHoagieVehicle_GetRotorCenterPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoagieRuntime.FortHoagieVehicle.GetRotorAngleDegrees
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AFortHoagieVehicle::GetRotorAngleDegrees()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HoagieRuntime.FortHoagieVehicle.GetRotorAngleDegrees");

	AFortHoagieVehicle_GetRotorAngleDegrees_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoagieRuntime.FortHoagieVehicle.GetMaxBoostCooldown
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AFortHoagieVehicle::GetMaxBoostCooldown()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HoagieRuntime.FortHoagieVehicle.GetMaxBoostCooldown");

	AFortHoagieVehicle_GetMaxBoostCooldown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoagieRuntime.FortHoagieVehicle.GetMaxAltitude
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AFortHoagieVehicle::GetMaxAltitude()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HoagieRuntime.FortHoagieVehicle.GetMaxAltitude");

	AFortHoagieVehicle_GetMaxAltitude_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoagieRuntime.FortHoagieVehicle.GetLiftAlpha
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AFortHoagieVehicle::GetLiftAlpha()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HoagieRuntime.FortHoagieVehicle.GetLiftAlpha");

	AFortHoagieVehicle_GetLiftAlpha_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoagieRuntime.FortHoagieVehicle.GetIsEngineOn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AFortHoagieVehicle::GetIsEngineOn()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HoagieRuntime.FortHoagieVehicle.GetIsEngineOn");

	AFortHoagieVehicle_GetIsEngineOn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoagieRuntime.FortHoagieVehicle.GetIsCriticalHealth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AFortHoagieVehicle::GetIsCriticalHealth()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HoagieRuntime.FortHoagieVehicle.GetIsCriticalHealth");

	AFortHoagieVehicle_GetIsCriticalHealth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoagieRuntime.FortHoagieVehicle.GetForwardAlpha
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AFortHoagieVehicle::GetForwardAlpha()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HoagieRuntime.FortHoagieVehicle.GetForwardAlpha");

	AFortHoagieVehicle_GetForwardAlpha_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoagieRuntime.FortHoagieVehicle.GetDistanceToGround
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AFortHoagieVehicle::GetDistanceToGround()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HoagieRuntime.FortHoagieVehicle.GetDistanceToGround");

	AFortHoagieVehicle_GetDistanceToGround_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoagieRuntime.FortHoagieVehicle.GetBoostTimeLeft
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AFortHoagieVehicle::GetBoostTimeLeft()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HoagieRuntime.FortHoagieVehicle.GetBoostTimeLeft");

	AFortHoagieVehicle_GetBoostTimeLeft_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoagieRuntime.FortHoagieVehicle.GetBoostDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AFortHoagieVehicle::GetBoostDuration()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HoagieRuntime.FortHoagieVehicle.GetBoostDuration");

	AFortHoagieVehicle_GetBoostDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoagieRuntime.FortHoagieVehicle.GetBoostDirection
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AFortHoagieVehicle::GetBoostDirection()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HoagieRuntime.FortHoagieVehicle.GetBoostDirection");

	AFortHoagieVehicle_GetBoostDirection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoagieRuntime.FortHoagieVehicle.GetBoostCooldown
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AFortHoagieVehicle::GetBoostCooldown()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HoagieRuntime.FortHoagieVehicle.GetBoostCooldown");

	AFortHoagieVehicle_GetBoostCooldown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoagieRuntime.FortHoagieVehicle.GetAltitude
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AFortHoagieVehicle::GetAltitude()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HoagieRuntime.FortHoagieVehicle.GetAltitude");

	AFortHoagieVehicle_GetAltitude_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
