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

// Function ValetRuntime.FortContextualTutorial_VehicleValetLowFuel.HandleVehicleStateChanged
// (Final, Native, Private)
// Parameters:
// class AFortPlayerPawn*         PlayerPawn                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  NewVehicle                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OldVehicle                     (Parm, ZeroConstructor, IsPlainOldData)

void UFortContextualTutorial_VehicleValetLowFuel::HandleVehicleStateChanged(class AFortPlayerPawn* PlayerPawn, class AActor* NewVehicle, class AActor* OldVehicle)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortContextualTutorial_VehicleValetLowFuel.HandleVehicleStateChanged");

	UFortContextualTutorial_VehicleValetLowFuel_HandleVehicleStateChanged_Params params;
	params.PlayerPawn = PlayerPawn;
	params.NewVehicle = NewVehicle;
	params.OldVehicle = OldVehicle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValetRuntime.FortContextualTutorial_VehicleValetLowFuel.HandleStartSkydivingForActivation
// (Final, Native, Private)

void UFortContextualTutorial_VehicleValetLowFuel::HandleStartSkydivingForActivation()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortContextualTutorial_VehicleValetLowFuel.HandleStartSkydivingForActivation");

	UFortContextualTutorial_VehicleValetLowFuel_HandleStartSkydivingForActivation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValetRuntime.FortDagwoodVehicle.UpdateVehicleFuelLeak
// (Final, Native, Public)

void AFortDagwoodVehicle::UpdateVehicleFuelLeak()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.UpdateVehicleFuelLeak");

	AFortDagwoodVehicle_UpdateVehicleFuelLeak_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValetRuntime.FortDagwoodVehicle.StartFade
// (Final, Native, Public, BlueprintCallable)

void AFortDagwoodVehicle::StartFade()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.StartFade");

	AFortDagwoodVehicle_StartFade_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValetRuntime.FortDagwoodVehicle.SetOnFire
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewFire                       (Parm, ZeroConstructor, IsPlainOldData)

void AFortDagwoodVehicle::SetOnFire(bool bNewFire)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.SetOnFire");

	AFortDagwoodVehicle_SetOnFire_Params params;
	params.bNewFire = bNewFire;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValetRuntime.FortDagwoodVehicle.SetNormalizedAudioRPM
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InRPM                          (Parm, ZeroConstructor, IsPlainOldData)

void AFortDagwoodVehicle::SetNormalizedAudioRPM(float InRPM)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.SetNormalizedAudioRPM");

	AFortDagwoodVehicle_SetNormalizedAudioRPM_Params params;
	params.InRPM = InRPM;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValetRuntime.FortDagwoodVehicle.SetFuel
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewFuel                        (Parm, ZeroConstructor, IsPlainOldData)

void AFortDagwoodVehicle::SetFuel(float NewFuel)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.SetFuel");

	AFortDagwoodVehicle_SetFuel_Params params;
	params.NewFuel = NewFuel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValetRuntime.FortDagwoodVehicle.OnTickAudioFade
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          FadeParam                      (Parm, ZeroConstructor, IsPlainOldData)

void AFortDagwoodVehicle::OnTickAudioFade(float FadeParam)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.OnTickAudioFade");

	AFortDagwoodVehicle_OnTickAudioFade_Params params;
	params.FadeParam = FadeParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValetRuntime.FortDagwoodVehicle.OnTickAudioController
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AFortDagwoodVehicle::OnTickAudioController(float DeltaTime)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.OnTickAudioController");

	AFortDagwoodVehicle_OnTickAudioController_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValetRuntime.FortDagwoodVehicle.OnStopHandbrake
// (Event, Public, BlueprintEvent)

void AFortDagwoodVehicle::OnStopHandbrake()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.OnStopHandbrake");

	AFortDagwoodVehicle_OnStopHandbrake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValetRuntime.FortDagwoodVehicle.OnStartHandbrake
// (Event, Public, BlueprintEvent)

void AFortDagwoodVehicle::OnStartHandbrake()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.OnStartHandbrake");

	AFortDagwoodVehicle_OnStartHandbrake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValetRuntime.FortDagwoodVehicle.OnStartCriticalHealth
// (Event, Public, BlueprintEvent)

void AFortDagwoodVehicle::OnStartCriticalHealth()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.OnStartCriticalHealth");

	AFortDagwoodVehicle_OnStartCriticalHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValetRuntime.FortDagwoodVehicle.OnSpawnLeakProjectile
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*     SpawnProjectile                (Parm, ZeroConstructor, IsPlainOldData)

void AFortDagwoodVehicle::OnSpawnLeakProjectile(class AFortProjectileBase* SpawnProjectile)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.OnSpawnLeakProjectile");

	AFortDagwoodVehicle_OnSpawnLeakProjectile_Params params;
	params.SpawnProjectile = SpawnProjectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValetRuntime.FortDagwoodVehicle.OnServerAltInteract
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn*               Pawn                           (Parm, ZeroConstructor, IsPlainOldData)

void AFortDagwoodVehicle::OnServerAltInteract(class AFortPawn* Pawn)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.OnServerAltInteract");

	AFortDagwoodVehicle_OnServerAltInteract_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValetRuntime.FortDagwoodVehicle.OnRimScrapeDamage
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            TireIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void AFortDagwoodVehicle::OnRimScrapeDamage(int TireIndex)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.OnRimScrapeDamage");

	AFortDagwoodVehicle_OnRimScrapeDamage_Params params;
	params.TireIndex = TireIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValetRuntime.FortDagwoodVehicle.OnRep_Tires
// (Final, Native, Private, HasOutParms)
// Parameters:
// TArray<ETireStates>            PrevTireStates                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AFortDagwoodVehicle::OnRep_Tires(TArray<ETireStates> PrevTireStates)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.OnRep_Tires");

	AFortDagwoodVehicle_OnRep_Tires_Params params;
	params.PrevTireStates = PrevTireStates;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValetRuntime.FortDagwoodVehicle.OnRep_RandSeed
// (Final, Native, Private)

void AFortDagwoodVehicle::OnRep_RandSeed()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.OnRep_RandSeed");

	AFortDagwoodVehicle_OnRep_RandSeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValetRuntime.FortDagwoodVehicle.OnRep_PoppedTireReaction
// (Final, Native, Private)

void AFortDagwoodVehicle::OnRep_PoppedTireReaction()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.OnRep_PoppedTireReaction");

	AFortDagwoodVehicle_OnRep_PoppedTireReaction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValetRuntime.FortDagwoodVehicle.OnRep_IsInoperable
// (Final, Native, Private)

void AFortDagwoodVehicle::OnRep_IsInoperable()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.OnRep_IsInoperable");

	AFortDagwoodVehicle_OnRep_IsInoperable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValetRuntime.FortDagwoodVehicle.OnRep_Exploded
// (Final, Native, Private)

void AFortDagwoodVehicle::OnRep_Exploded()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.OnRep_Exploded");

	AFortDagwoodVehicle_OnRep_Exploded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValetRuntime.FortDagwoodVehicle.OnPoppedTire
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            TireIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void AFortDagwoodVehicle::OnPoppedTire(int TireIndex)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.OnPoppedTire");

	AFortDagwoodVehicle_OnPoppedTire_Params params;
	params.TireIndex = TireIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValetRuntime.FortDagwoodVehicle.OnLowFuel
// (Event, Public, BlueprintEvent)

void AFortDagwoodVehicle::OnLowFuel()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.OnLowFuel");

	AFortDagwoodVehicle_OnLowFuel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValetRuntime.FortDagwoodVehicle.OnLeakingFuelStop
// (Event, Protected, BlueprintEvent)

void AFortDagwoodVehicle::OnLeakingFuelStop()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.OnLeakingFuelStop");

	AFortDagwoodVehicle_OnLeakingFuelStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValetRuntime.FortDagwoodVehicle.OnLeakingFuelStart
// (Event, Protected, BlueprintEvent)

void AFortDagwoodVehicle::OnLeakingFuelStart()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.OnLeakingFuelStart");

	AFortDagwoodVehicle_OnLeakingFuelStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValetRuntime.FortDagwoodVehicle.OnInoperableChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bInoperable                    (Parm, ZeroConstructor, IsPlainOldData)

void AFortDagwoodVehicle::OnInoperableChanged(bool bInoperable)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.OnInoperableChanged");

	AFortDagwoodVehicle_OnInoperableChanged_Params params;
	params.bInoperable = bInoperable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValetRuntime.FortDagwoodVehicle.OnGainedFuel
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          NewPercent                     (Parm, ZeroConstructor, IsPlainOldData)

void AFortDagwoodVehicle::OnGainedFuel(float NewPercent)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.OnGainedFuel");

	AFortDagwoodVehicle_OnGainedFuel_Params params;
	params.NewPercent = NewPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValetRuntime.FortDagwoodVehicle.OnFlipImpactDamage
// (Event, Public, BlueprintEvent)

void AFortDagwoodVehicle::OnFlipImpactDamage()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.OnFlipImpactDamage");

	AFortDagwoodVehicle_OnFlipImpactDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValetRuntime.FortDagwoodVehicle.OnFireStop
// (Event, Protected, BlueprintEvent)

void AFortDagwoodVehicle::OnFireStop()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.OnFireStop");

	AFortDagwoodVehicle_OnFireStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValetRuntime.FortDagwoodVehicle.OnFireStart
// (Event, Protected, BlueprintEvent)

void AFortDagwoodVehicle::OnFireStart()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.OnFireStart");

	AFortDagwoodVehicle_OnFireStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValetRuntime.FortDagwoodVehicle.OnExplode
// (Event, Public, BlueprintEvent)

void AFortDagwoodVehicle::OnExplode()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.OnExplode");

	AFortDagwoodVehicle_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValetRuntime.FortDagwoodVehicle.OnExitRoad
// (Event, Protected, BlueprintEvent)

void AFortDagwoodVehicle::OnExitRoad()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.OnExitRoad");

	AFortDagwoodVehicle_OnExitRoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValetRuntime.FortDagwoodVehicle.OnExitLandscape
// (Event, Protected, BlueprintEvent)

void AFortDagwoodVehicle::OnExitLandscape()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.OnExitLandscape");

	AFortDagwoodVehicle_OnExitLandscape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValetRuntime.FortDagwoodVehicle.OnEnterLandscape
// (Event, Protected, BlueprintEvent)

void AFortDagwoodVehicle::OnEnterLandscape()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.OnEnterLandscape");

	AFortDagwoodVehicle_OnEnterLandscape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValetRuntime.FortDagwoodVehicle.OnEnteredRoad
// (Event, Protected, BlueprintEvent)

void AFortDagwoodVehicle::OnEnteredRoad()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.OnEnteredRoad");

	AFortDagwoodVehicle_OnEnteredRoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValetRuntime.FortDagwoodVehicle.OnEmptyFuel
// (Event, Public, BlueprintEvent)

void AFortDagwoodVehicle::OnEmptyFuel()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.OnEmptyFuel");

	AFortDagwoodVehicle_OnEmptyFuel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValetRuntime.FortDagwoodVehicle.OnDestroyedPropFromCollision
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ABuildingActor*          BuildingHitActor               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AFortDagwoodVehicle::OnDestroyedPropFromCollision(class ABuildingActor* BuildingHitActor)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.OnDestroyedPropFromCollision");

	AFortDagwoodVehicle_OnDestroyedPropFromCollision_Params params;
	params.BuildingHitActor = BuildingHitActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValetRuntime.FortDagwoodVehicle.OnClientBeginAltInteract
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn*               Pawn                           (Parm, ZeroConstructor, IsPlainOldData)

void AFortDagwoodVehicle::OnClientBeginAltInteract(class AFortPawn* Pawn)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.OnClientBeginAltInteract");

	AFortDagwoodVehicle_OnClientBeginAltInteract_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValetRuntime.FortDagwoodVehicle.OnBoostReady
// (Event, Protected, BlueprintEvent)

void AFortDagwoodVehicle::OnBoostReady()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.OnBoostReady");

	AFortDagwoodVehicle_OnBoostReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValetRuntime.FortDagwoodVehicle.OnBoostFailed
// (Event, Protected, BlueprintEvent)

void AFortDagwoodVehicle::OnBoostFailed()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.OnBoostFailed");

	AFortDagwoodVehicle_OnBoostFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValetRuntime.FortDagwoodVehicle.NativeOnOutOfFuel
// (Final, Native, Public)

void AFortDagwoodVehicle::NativeOnOutOfFuel()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.NativeOnOutOfFuel");

	AFortDagwoodVehicle_NativeOnOutOfFuel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValetRuntime.FortDagwoodVehicle.NativeOnLowFuel
// (Final, Native, Public)

void AFortDagwoodVehicle::NativeOnLowFuel()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.NativeOnLowFuel");

	AFortDagwoodVehicle_NativeOnLowFuel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValetRuntime.FortDagwoodVehicle.NativeOnFuelChanged
// (Final, Native, Public)
// Parameters:
// float                          NewFuelPercent                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          OldFuelPercent                 (Parm, ZeroConstructor, IsPlainOldData)

void AFortDagwoodVehicle::NativeOnFuelChanged(float NewFuelPercent, float OldFuelPercent)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.NativeOnFuelChanged");

	AFortDagwoodVehicle_NativeOnFuelChanged_Params params;
	params.NewFuelPercent = NewFuelPercent;
	params.OldFuelPercent = OldFuelPercent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValetRuntime.FortDagwoodVehicle.NativeCalculateAccelRumbleIntensity
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          MaxIntensity                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AFortDagwoodVehicle::NativeCalculateAccelRumbleIntensity(float MaxIntensity)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.NativeCalculateAccelRumbleIntensity");

	AFortDagwoodVehicle_NativeCalculateAccelRumbleIntensity_Params params;
	params.MaxIntensity = MaxIntensity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ValetRuntime.FortDagwoodVehicle.MakeOperable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bAddGas                        (Parm, ZeroConstructor, IsPlainOldData)

void AFortDagwoodVehicle::MakeOperable(bool bAddGas)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.MakeOperable");

	AFortDagwoodVehicle_MakeOperable_Params params;
	params.bAddGas = bAddGas;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValetRuntime.FortDagwoodVehicle.MakeInoperable
// (Final, Native, Public, BlueprintCallable)

void AFortDagwoodVehicle::MakeInoperable()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.MakeInoperable");

	AFortDagwoodVehicle_MakeInoperable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValetRuntime.FortDagwoodVehicle.IsVehicleAcceleratingWithSpeedThreshold
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          SpeedThreshold                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AFortDagwoodVehicle::IsVehicleAcceleratingWithSpeedThreshold(float SpeedThreshold)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.IsVehicleAcceleratingWithSpeedThreshold");

	AFortDagwoodVehicle_IsVehicleAcceleratingWithSpeedThreshold_Params params;
	params.SpeedThreshold = SpeedThreshold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ValetRuntime.FortDagwoodVehicle.IsTireSkidding
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          MinSpeedForSkid                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          AngleForSkid                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          SpeedForPeelout                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          SpeedForBraking                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AFortDagwoodVehicle::IsTireSkidding(float MinSpeedForSkid, float AngleForSkid, float SpeedForPeelout, float SpeedForBraking)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.IsTireSkidding");

	AFortDagwoodVehicle_IsTireSkidding_Params params;
	params.MinSpeedForSkid = MinSpeedForSkid;
	params.AngleForSkid = AngleForSkid;
	params.SpeedForPeelout = SpeedForPeelout;
	params.SpeedForBraking = SpeedForBraking;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ValetRuntime.FortDagwoodVehicle.IsOnRoad
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AFortDagwoodVehicle::IsOnRoad()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.IsOnRoad");

	AFortDagwoodVehicle_IsOnRoad_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ValetRuntime.FortDagwoodVehicle.IsOnLandscape
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AFortDagwoodVehicle::IsOnLandscape()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.IsOnLandscape");

	AFortDagwoodVehicle_IsOnLandscape_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ValetRuntime.FortDagwoodVehicle.IsOnDirt
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AFortDagwoodVehicle::IsOnDirt()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.IsOnDirt");

	AFortDagwoodVehicle_IsOnDirt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ValetRuntime.FortDagwoodVehicle.IsOffroad
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AFortDagwoodVehicle::IsOffroad()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.IsOffroad");

	AFortDagwoodVehicle_IsOffroad_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ValetRuntime.FortDagwoodVehicle.IsNativeBPTickEnabled
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AFortDagwoodVehicle::IsNativeBPTickEnabled()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.IsNativeBPTickEnabled");

	AFortDagwoodVehicle_IsNativeBPTickEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ValetRuntime.FortDagwoodVehicle.IsInoperable
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AFortDagwoodVehicle::IsInoperable()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.IsInoperable");

	AFortDagwoodVehicle_IsInoperable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ValetRuntime.FortDagwoodVehicle.GetTireSurface
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ETireLocations                 TireIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// ETireSurfaces                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ETireSurfaces AFortDagwoodVehicle::GetTireSurface(ETireLocations TireIndex)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.GetTireSurface");

	AFortDagwoodVehicle_GetTireSurface_Params params;
	params.TireIndex = TireIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ValetRuntime.FortDagwoodVehicle.GetTireState
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TireIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AFortDagwoodVehicle::GetTireState(int TireIndex)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.GetTireState");

	AFortDagwoodVehicle_GetTireState_Params params;
	params.TireIndex = TireIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ValetRuntime.FortDagwoodVehicle.GetTireHealthPercent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ETireLocations                 TireIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AFortDagwoodVehicle::GetTireHealthPercent(ETireLocations TireIndex)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.GetTireHealthPercent");

	AFortDagwoodVehicle_GetTireHealthPercent_Params params;
	params.TireIndex = TireIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ValetRuntime.FortDagwoodVehicle.GetPlayerFacingName
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString AFortDagwoodVehicle::GetPlayerFacingName()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.GetPlayerFacingName");

	AFortDagwoodVehicle_GetPlayerFacingName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ValetRuntime.FortDagwoodVehicle.GetOnFire
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AFortDagwoodVehicle::GetOnFire()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.GetOnFire");

	AFortDagwoodVehicle_GetOnFire_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ValetRuntime.FortDagwoodVehicle.GetNormalizedAudioRPM
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AFortDagwoodVehicle::GetNormalizedAudioRPM()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.GetNormalizedAudioRPM");

	AFortDagwoodVehicle_GetNormalizedAudioRPM_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ValetRuntime.FortDagwoodVehicle.GetHUDTopSpeed
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AFortDagwoodVehicle::GetHUDTopSpeed()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.GetHUDTopSpeed");

	AFortDagwoodVehicle_GetHUDTopSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ValetRuntime.FortDagwoodVehicle.GetFuelCapacity
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AFortDagwoodVehicle::GetFuelCapacity()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.GetFuelCapacity");

	AFortDagwoodVehicle_GetFuelCapacity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ValetRuntime.FortDagwoodVehicle.GetFuel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AFortDagwoodVehicle::GetFuel()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.GetFuel");

	AFortDagwoodVehicle_GetFuel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ValetRuntime.FortDagwoodVehicle.GetBumpiness
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AFortDagwoodVehicle::GetBumpiness()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.GetBumpiness");

	AFortDagwoodVehicle_GetBumpiness_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ValetRuntime.FortDagwoodVehicle.ForwardOrReverseInputPressed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AFortDagwoodVehicle::ForwardOrReverseInputPressed()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.ForwardOrReverseInputPressed");

	AFortDagwoodVehicle_ForwardOrReverseInputPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ValetRuntime.FortDagwoodVehicle.CleanupLoopingPooledFX
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFortDagwoodVehicle::CleanupLoopingPooledFX()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.CleanupLoopingPooledFX");

	AFortDagwoodVehicle_CleanupLoopingPooledFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValetRuntime.FortDagwoodVehicle.BP_OnBoostStarted
// (Event, Protected, BlueprintEvent)

void AFortDagwoodVehicle::BP_OnBoostStarted()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.BP_OnBoostStarted");

	AFortDagwoodVehicle_BP_OnBoostStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValetRuntime.FortDagwoodVehicle.BP_OnBoostFinished
// (Event, Protected, BlueprintEvent)

void AFortDagwoodVehicle::BP_OnBoostFinished()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.BP_OnBoostFinished");

	AFortDagwoodVehicle_BP_OnBoostFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValetRuntime.FortDagwoodVehicle.AreAnyTiresPopped
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AFortDagwoodVehicle::AreAnyTiresPopped()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicle.AreAnyTiresPopped");

	AFortDagwoodVehicle_AreAnyTiresPopped_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ValetRuntime.FortDagwoodVehicleManager.UpdatePropReplacement
// (Final, Native, Public)

void UFortDagwoodVehicleManager::UpdatePropReplacement()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicleManager.UpdatePropReplacement");

	UFortDagwoodVehicleManager_UpdatePropReplacement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValetRuntime.FortDagwoodVehicleManager.SetVehicleFuel
// (Final, Exec, Native, Public)
// Parameters:
// float                          NewFuel                        (Parm, ZeroConstructor, IsPlainOldData)

void UFortDagwoodVehicleManager::SetVehicleFuel(float NewFuel)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicleManager.SetVehicleFuel");

	UFortDagwoodVehicleManager_SetVehicleFuel_Params params;
	params.NewFuel = NewFuel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValetRuntime.FortDagwoodVehicleManager.ServerSetVehicleFuel
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// float                          NewFuel                        (Parm, ZeroConstructor, IsPlainOldData)

void UFortDagwoodVehicleManager::ServerSetVehicleFuel(float NewFuel)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicleManager.ServerSetVehicleFuel");

	UFortDagwoodVehicleManager_ServerSetVehicleFuel_Params params;
	params.NewFuel = NewFuel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValetRuntime.FortDagwoodVehicleManager.OnVehicleSpawnsUpdated
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UFortVehicleItemDefinition* VehicleItemDef                 (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          SpawnedVehicles                (Parm, OutParm, ZeroConstructor)
// int                            NewVehicleCount                (Parm, ZeroConstructor, IsPlainOldData)

void UFortDagwoodVehicleManager::OnVehicleSpawnsUpdated(class UFortVehicleItemDefinition* VehicleItemDef, int NewVehicleCount, TArray<class AActor*>* SpawnedVehicles)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicleManager.OnVehicleSpawnsUpdated");

	UFortDagwoodVehicleManager_OnVehicleSpawnsUpdated_Params params;
	params.VehicleItemDef = VehicleItemDef;
	params.NewVehicleCount = NewVehicleCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnedVehicles != nullptr)
		*SpawnedVehicles = params.SpawnedVehicles;
}


// Function ValetRuntime.FortDagwoodVehicleManager.OnVehicleSpawned
// (Final, Native, Public)
// Parameters:
// class AFortAthenaVehicle*      Vehicle                        (Parm, ZeroConstructor, IsPlainOldData)

void UFortDagwoodVehicleManager::OnVehicleSpawned(class AFortAthenaVehicle* Vehicle)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicleManager.OnVehicleSpawned");

	UFortDagwoodVehicleManager_OnVehicleSpawned_Params params;
	params.Vehicle = Vehicle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValetRuntime.FortDagwoodVehicleManager.CustomHandleActorStreamedInEditor
// (Final, Native, Public)
// Parameters:
// class AActor*                  SourceActor                    (Parm, ZeroConstructor, IsPlainOldData)

void UFortDagwoodVehicleManager::CustomHandleActorStreamedInEditor(class AActor* SourceActor)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortDagwoodVehicleManager.CustomHandleActorStreamedInEditor");

	UFortDagwoodVehicleManager_CustomHandleActorStreamedInEditor_Params params;
	params.SourceActor = SourceActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValetRuntime.FortValetAudioController.Update_Native
// (Final, Native, Public, BlueprintCallable)

void AFortValetAudioController::Update_Native()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortValetAudioController.Update_Native");

	AFortValetAudioController_Update_Native_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValetRuntime.FortValetAudioController.OnSuspensionCollision_Native
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// bool                           OutResult                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutMagnitude                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AFortValetAudioController::OnSuspensionCollision_Native(bool* OutResult, float* OutMagnitude)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortValetAudioController.OnSuspensionCollision_Native");

	AFortValetAudioController_OnSuspensionCollision_Native_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutResult != nullptr)
		*OutResult = params.OutResult;
	if (OutMagnitude != nullptr)
		*OutMagnitude = params.OutMagnitude;
}


// Function ValetRuntime.FortValetAudioController.CacheValetVehicle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AFortDagwoodVehicle*     InVehicle                      (Parm, ZeroConstructor, IsPlainOldData)

void AFortValetAudioController::CacheValetVehicle(class AFortDagwoodVehicle* InVehicle)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetRuntime.FortValetAudioController.CacheValetVehicle");

	AFortValetAudioController_CacheValetVehicle_Params params;
	params.InVehicle = InVehicle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
