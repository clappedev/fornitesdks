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

// Function GooseRuntime.AthenaGoosePickup.SetStaticMesh
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// class UStaticMesh*             NewStaticMesh                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UMaterialInterface*> MaterialsToSwap                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            InDisplayIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AAthenaGoosePickup::SetStaticMesh(class UStaticMesh* NewStaticMesh, TArray<class UMaterialInterface*> MaterialsToSwap, int InDisplayIndex)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GooseRuntime.AthenaGoosePickup.SetStaticMesh");

	AAthenaGoosePickup_SetStaticMesh_Params params;
	params.NewStaticMesh = NewStaticMesh;
	params.MaterialsToSwap = MaterialsToSwap;
	params.InDisplayIndex = InDisplayIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GooseRuntime.AthenaGoosePickup.OnStartDespawnWarning_Client
// (Native, Event, Protected, BlueprintEvent)

void AAthenaGoosePickup::OnStartDespawnWarning_Client()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GooseRuntime.AthenaGoosePickup.OnStartDespawnWarning_Client");

	AAthenaGoosePickup_OnStartDespawnWarning_Client_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GooseRuntime.AthenaGoosePickup.OnRep_PickupState
// (Final, Native, Protected)

void AAthenaGoosePickup::OnRep_PickupState()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GooseRuntime.AthenaGoosePickup.OnRep_PickupState");

	AAthenaGoosePickup_OnRep_PickupState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GooseRuntime.AthenaGoosePickup.OnRep_DisplayIndex
// (Final, Native, Protected)

void AAthenaGoosePickup::OnRep_DisplayIndex()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GooseRuntime.AthenaGoosePickup.OnRep_DisplayIndex");

	AAthenaGoosePickup_OnRep_DisplayIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GooseRuntime.AthenaGoosePickup.OnRep_bIsDespawning
// (Final, Native, Protected)

void AAthenaGoosePickup::OnRep_bIsDespawning()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GooseRuntime.AthenaGoosePickup.OnRep_bIsDespawning");

	AAthenaGoosePickup_OnRep_bIsDespawning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GooseRuntime.AthenaGoosePickup.OnImpactedByPlane_Server
// (Native, Event, Protected, BlueprintEvent)

void AAthenaGoosePickup::OnImpactedByPlane_Server()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GooseRuntime.AthenaGoosePickup.OnImpactedByPlane_Server");

	AAthenaGoosePickup_OnImpactedByPlane_Server_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GooseRuntime.AthenaGoosePickup.OnImpactedByPlane_Client
// (Native, Event, Protected, BlueprintEvent)

void AAthenaGoosePickup::OnImpactedByPlane_Client()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GooseRuntime.AthenaGoosePickup.OnImpactedByPlane_Client");

	AAthenaGoosePickup_OnImpactedByPlane_Client_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GooseRuntime.AthenaGoosePickup.OnFalling_Server
// (Native, Event, Protected, BlueprintEvent)

void AAthenaGoosePickup::OnFalling_Server()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GooseRuntime.AthenaGoosePickup.OnFalling_Server");

	AAthenaGoosePickup_OnFalling_Server_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GooseRuntime.AthenaGoosePickup.OnFalling_Client
// (Native, Event, Protected, BlueprintEvent)

void AAthenaGoosePickup::OnFalling_Client()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GooseRuntime.AthenaGoosePickup.OnFalling_Client");

	AAthenaGoosePickup_OnFalling_Client_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GooseRuntime.AthenaGoosePickup.OnDeployed_Server
// (Native, Event, Protected, BlueprintEvent)

void AAthenaGoosePickup::OnDeployed_Server()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GooseRuntime.AthenaGoosePickup.OnDeployed_Server");

	AAthenaGoosePickup_OnDeployed_Server_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GooseRuntime.AthenaGoosePickup.OnDeployed_Client
// (Native, Event, Protected, BlueprintEvent)

void AAthenaGoosePickup::OnDeployed_Client()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GooseRuntime.AthenaGoosePickup.OnDeployed_Client");

	AAthenaGoosePickup_OnDeployed_Client_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GooseRuntime.AthenaGoosePickup.OnCollide
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class AActor*                  CollidingActor                 (Parm, ZeroConstructor, IsPlainOldData)

void AAthenaGoosePickup::OnCollide(class AActor* CollidingActor)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GooseRuntime.AthenaGoosePickup.OnCollide");

	AAthenaGoosePickup_OnCollide_Params params;
	params.CollidingActor = CollidingActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GooseRuntime.AthenaGoosePickup.DeployTimerUp_Server
// (Native, Event, Protected, BlueprintEvent)

void AAthenaGoosePickup::DeployTimerUp_Server()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GooseRuntime.AthenaGoosePickup.DeployTimerUp_Server");

	AAthenaGoosePickup_DeployTimerUp_Server_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GooseRuntime.AthenaGoosePickup.DeployTimerUp_Client
// (Native, Event, Protected, BlueprintEvent)

void AAthenaGoosePickup::DeployTimerUp_Client()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GooseRuntime.AthenaGoosePickup.DeployTimerUp_Client");

	AAthenaGoosePickup_DeployTimerUp_Client_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GooseRuntime.FortAthenaMutator_Goose.OnVehicleStolen
// (Final, Native, Protected)
// Parameters:
// unsigned char                  OldID                          (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  NewID                          (Parm, ZeroConstructor, IsPlainOldData)

void AFortAthenaMutator_Goose::OnVehicleStolen(unsigned char OldID, unsigned char NewID)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GooseRuntime.FortAthenaMutator_Goose.OnVehicleStolen");

	AFortAthenaMutator_Goose_OnVehicleStolen_Params params;
	params.OldID = OldID;
	params.NewID = NewID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GooseRuntime.FortAthenaMutator_Goose.OnVehicleDied
// (Final, Native, Protected, HasOutParms)
// Parameters:
// class AFortAthenaVehicle*      DestroyedVehicle               (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   InTags                         (ConstParm, Parm, OutParm, ReferenceParm)
// class AController*             EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AFortAthenaMutator_Goose::OnVehicleDied(class AFortAthenaVehicle* DestroyedVehicle, const struct FGameplayTagContainer& InTags, class AController* EventInstigator, class AActor* DamageCauser)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GooseRuntime.FortAthenaMutator_Goose.OnVehicleDied");

	AFortAthenaMutator_Goose_OnVehicleDied_Params params;
	params.DestroyedVehicle = DestroyedVehicle;
	params.InTags = InTags;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GooseRuntime.FortAthenaMutator_Goose.OnPlaylistLoaded
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FName                   PlaylistName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   PlaylistContainerTags          (ConstParm, Parm, OutParm, ReferenceParm)

void AFortAthenaMutator_Goose::OnPlaylistLoaded(const struct FName& PlaylistName, const struct FGameplayTagContainer& PlaylistContainerTags)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GooseRuntime.FortAthenaMutator_Goose.OnPlaylistLoaded");

	AFortAthenaMutator_Goose_OnPlaylistLoaded_Params params;
	params.PlaylistName = PlaylistName;
	params.PlaylistContainerTags = PlaylistContainerTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GooseRuntime.FortAthenaMutator_Goose.OnPawnDied
// (Final, Native, Protected)
// Parameters:
// class AFortPlayerPawnAthena*   PlayerPawn                     (Parm, ZeroConstructor, IsPlainOldData)

void AFortAthenaMutator_Goose::OnPawnDied(class AFortPlayerPawnAthena* PlayerPawn)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GooseRuntime.FortAthenaMutator_Goose.OnPawnDied");

	AFortAthenaMutator_Goose_OnPawnDied_Params params;
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GooseRuntime.FortAthenaMutator_Goose.OnGamePhaseChanged
// (Final, Native, Protected)
// Parameters:
// EAthenaGamePhase               NewPhase                       (Parm, ZeroConstructor, IsPlainOldData)

void AFortAthenaMutator_Goose::OnGamePhaseChanged(EAthenaGamePhase NewPhase)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GooseRuntime.FortAthenaMutator_Goose.OnGamePhaseChanged");

	AFortAthenaMutator_Goose_OnGamePhaseChanged_Params params;
	params.NewPhase = NewPhase;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GooseRuntime.FortCheatManager_Goose.GooseUpgradePlaneGuns
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// int                            Index                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UFortCheatManager_Goose::GooseUpgradePlaneGuns(int Index)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GooseRuntime.FortCheatManager_Goose.GooseUpgradePlaneGuns");

	UFortCheatManager_Goose_GooseUpgradePlaneGuns_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GooseRuntime.FortCheatManager_Goose.GooseToggleDrops
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// bool                           bToggleValue                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UFortCheatManager_Goose::GooseToggleDrops(bool bToggleValue)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GooseRuntime.FortCheatManager_Goose.GooseToggleDrops");

	UFortCheatManager_Goose_GooseToggleDrops_Params params;
	params.bToggleValue = bToggleValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GooseRuntime.FortCheatManager_Goose.GooseStealPlane
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)

void UFortCheatManager_Goose::GooseStealPlane()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GooseRuntime.FortCheatManager_Goose.GooseStealPlane");

	UFortCheatManager_Goose_GooseStealPlane_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GooseRuntime.FortCheatManager_Goose.GooseSetPlaneLives
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// int                            NewLives                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UFortCheatManager_Goose::GooseSetPlaneLives(int NewLives)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GooseRuntime.FortCheatManager_Goose.GooseSetPlaneLives");

	UFortCheatManager_Goose_GooseSetPlaneLives_Params params;
	params.NewLives = NewLives;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GooseRuntime.FortCheatManager_Goose.GooseSetPlaneHealthPercent
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// float                          Percent                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UFortCheatManager_Goose::GooseSetPlaneHealthPercent(float Percent)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GooseRuntime.FortCheatManager_Goose.GooseSetPlaneHealthPercent");

	UFortCheatManager_Goose_GooseSetPlaneHealthPercent_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GooseRuntime.FortCheatManager_Goose.GooseKillPlaneSquad
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)

void UFortCheatManager_Goose::GooseKillPlaneSquad()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GooseRuntime.FortCheatManager_Goose.GooseKillPlaneSquad");

	UFortCheatManager_Goose_GooseKillPlaneSquad_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GooseRuntime.FortCheatManager_Goose.GooseGivePlaneHealthGE
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// int                            Index                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UFortCheatManager_Goose::GooseGivePlaneHealthGE(int Index)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GooseRuntime.FortCheatManager_Goose.GooseGivePlaneHealthGE");

	UFortCheatManager_Goose_GooseGivePlaneHealthGE_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GooseRuntime.FortCheatManager_Goose.GooseGivePlaneEffect
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// int                            Index                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UFortCheatManager_Goose::GooseGivePlaneEffect(int Index)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GooseRuntime.FortCheatManager_Goose.GooseGivePlaneEffect");

	UFortCheatManager_Goose_GooseGivePlaneEffect_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GooseRuntime.FortCheatManager_Goose.GooseGivePlaneBoostGE
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// int                            Index                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UFortCheatManager_Goose::GooseGivePlaneBoostGE(int Index)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GooseRuntime.FortCheatManager_Goose.GooseGivePlaneBoostGE");

	UFortCheatManager_Goose_GooseGivePlaneBoostGE_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
