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

// Function NitrogenRuntime.FortAthenaMutator_Nitrogen.OnRep_SortedTeamDataByScore
// (Final, Native, Private)

void AFortAthenaMutator_Nitrogen::OnRep_SortedTeamDataByScore()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenRuntime.FortAthenaMutator_Nitrogen.OnRep_SortedTeamDataByScore");

	AFortAthenaMutator_Nitrogen_OnRep_SortedTeamDataByScore_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenRuntime.FortAthenaMutator_Nitrogen.OnRep_NitrogenGamePhase
// (Final, Native, Private)

void AFortAthenaMutator_Nitrogen::OnRep_NitrogenGamePhase()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenRuntime.FortAthenaMutator_Nitrogen.OnRep_NitrogenGamePhase");

	AFortAthenaMutator_Nitrogen_OnRep_NitrogenGamePhase_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenRuntime.FortAthenaMutator_Nitrogen.OnRep_CurrentFares
// (Final, Native, Private)

void AFortAthenaMutator_Nitrogen::OnRep_CurrentFares()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenRuntime.FortAthenaMutator_Nitrogen.OnRep_CurrentFares");

	AFortAthenaMutator_Nitrogen_OnRep_CurrentFares_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenRuntime.FortAthenaMutator_Nitrogen.OnNitrogenVehiclePlayerExit
// (Final, Native, Private)
// Parameters:
// class AFortPlayerControllerAthena* PlayerController               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AFortAthenaVehicle*      Vehicle                        (Parm, ZeroConstructor, IsPlainOldData)

void AFortAthenaMutator_Nitrogen::OnNitrogenVehiclePlayerExit(class AFortPlayerControllerAthena* PlayerController, class AFortAthenaVehicle* Vehicle)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenRuntime.FortAthenaMutator_Nitrogen.OnNitrogenVehiclePlayerExit");

	AFortAthenaMutator_Nitrogen_OnNitrogenVehiclePlayerExit_Params params;
	params.PlayerController = PlayerController;
	params.Vehicle = Vehicle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenRuntime.FortAthenaMutator_Nitrogen.OnNitrogenVehicleDriverChanged
// (Final, Native, Private)
// Parameters:
// class AFortPlayerControllerAthena* NewController                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AFortAthenaVehicle*      Vehicle                        (Parm, ZeroConstructor, IsPlainOldData)

void AFortAthenaMutator_Nitrogen::OnNitrogenVehicleDriverChanged(class AFortPlayerControllerAthena* NewController, class AFortAthenaVehicle* Vehicle)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenRuntime.FortAthenaMutator_Nitrogen.OnNitrogenVehicleDriverChanged");

	AFortAthenaMutator_Nitrogen_OnNitrogenVehicleDriverChanged_Params params;
	params.NewController = NewController;
	params.Vehicle = Vehicle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenRuntime.FortAthenaMutator_Nitrogen.OnNitrogenVehicleDestroyed
// (Final, Native, Private)
// Parameters:
// class AActor*                  VehicleDestroyed               (Parm, ZeroConstructor, IsPlainOldData)

void AFortAthenaMutator_Nitrogen::OnNitrogenVehicleDestroyed(class AActor* VehicleDestroyed)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenRuntime.FortAthenaMutator_Nitrogen.OnNitrogenVehicleDestroyed");

	AFortAthenaMutator_Nitrogen_OnNitrogenVehicleDestroyed_Params params;
	params.VehicleDestroyed = VehicleDestroyed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenRuntime.FortAthenaMutator_Nitrogen.HandlePlayerTeleportComplete
// (Final, Native, Private)
// Parameters:
// class AFortPlayerStateAthena*  PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)

void AFortAthenaMutator_Nitrogen::HandlePlayerTeleportComplete(class AFortPlayerStateAthena* PlayerState)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenRuntime.FortAthenaMutator_Nitrogen.HandlePlayerTeleportComplete");

	AFortAthenaMutator_Nitrogen_HandlePlayerTeleportComplete_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenRuntime.FortAthenaMutator_Nitrogen.HandleGroupTeleportComplete
// (Final, Native, Private)

void AFortAthenaMutator_Nitrogen::HandleGroupTeleportComplete()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenRuntime.FortAthenaMutator_Nitrogen.HandleGroupTeleportComplete");

	AFortAthenaMutator_Nitrogen_HandleGroupTeleportComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenRuntime.FortAthenaMutator_Nitrogen.HandleGameStartCountdownEnd
// (Final, Native, Private)

void AFortAthenaMutator_Nitrogen::HandleGameStartCountdownEnd()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenRuntime.FortAthenaMutator_Nitrogen.HandleGameStartCountdownEnd");

	AFortAthenaMutator_Nitrogen_HandleGameStartCountdownEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenRuntime.FortCheatManager_Nitrogen.TeleportToSquadStartAtIndex
// (Final, Native, Public, HasOutParms)
// Parameters:
// int                            Index                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FFortSquadStartSearchParamData SearchParam                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 TeleportReasonString           (Parm, OutParm, ZeroConstructor)

void UFortCheatManager_Nitrogen::TeleportToSquadStartAtIndex(int Index, const struct FFortSquadStartSearchParamData& SearchParam, struct FString* TeleportReasonString)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenRuntime.FortCheatManager_Nitrogen.TeleportToSquadStartAtIndex");

	UFortCheatManager_Nitrogen_TeleportToSquadStartAtIndex_Params params;
	params.Index = Index;
	params.SearchParam = SearchParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TeleportReasonString != nullptr)
		*TeleportReasonString = params.TeleportReasonString;
}


// Function NitrogenRuntime.FortCheatManager_Nitrogen.TeleportToNitrogenSpawnActor
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// int                            Index                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UFortCheatManager_Nitrogen::TeleportToNitrogenSpawnActor(int Index)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenRuntime.FortCheatManager_Nitrogen.TeleportToNitrogenSpawnActor");

	UFortCheatManager_Nitrogen_TeleportToNitrogenSpawnActor_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenRuntime.FortCheatManager_Nitrogen.TeleportToNitrogenRespawnActor
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// int                            Index                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UFortCheatManager_Nitrogen::TeleportToNitrogenRespawnActor(int Index)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenRuntime.FortCheatManager_Nitrogen.TeleportToNitrogenRespawnActor");

	UFortCheatManager_Nitrogen_TeleportToNitrogenRespawnActor_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenRuntime.FortCheatManager_Nitrogen.SpawnNitrogenFare
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// float                          PickUpDistance                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          DropOffDistance                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UFortCheatManager_Nitrogen::SpawnNitrogenFare(float PickUpDistance, float DropOffDistance)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenRuntime.FortCheatManager_Nitrogen.SpawnNitrogenFare");

	UFortCheatManager_Nitrogen_SpawnNitrogenFare_Params params;
	params.PickUpDistance = PickUpDistance;
	params.DropOffDistance = DropOffDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenRuntime.FortCheatManager_Nitrogen.SetNitrogenScore
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// int                            Score                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ScoreReason                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UFortCheatManager_Nitrogen::SetNitrogenScore(int Score, unsigned char ScoreReason)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenRuntime.FortCheatManager_Nitrogen.SetNitrogenScore");

	UFortCheatManager_Nitrogen_SetNitrogenScore_Params params;
	params.Score = Score;
	params.ScoreReason = ScoreReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenRuntime.FortCheatManager_Nitrogen.SetNitrogenNavDestinationToCurrentLocation
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)

void UFortCheatManager_Nitrogen::SetNitrogenNavDestinationToCurrentLocation()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenRuntime.FortCheatManager_Nitrogen.SetNitrogenNavDestinationToCurrentLocation");

	UFortCheatManager_Nitrogen_SetNitrogenNavDestinationToCurrentLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenRuntime.FortCheatManager_Nitrogen.CompleteNitrogenFare
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)

void UFortCheatManager_Nitrogen::CompleteNitrogenFare()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenRuntime.FortCheatManager_Nitrogen.CompleteNitrogenFare");

	UFortCheatManager_Nitrogen_CompleteNitrogenFare_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenRuntime.NitrogenFare.PickUpPointOverlapped
// (Final, Native, Public)
// Parameters:
// class AAthenaTraversePoint*    TraversePoint                  (Parm, ZeroConstructor, IsPlainOldData)
// class AFortPlayerStateAthena*  PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)

void ANitrogenFare::PickUpPointOverlapped(class AAthenaTraversePoint* TraversePoint, class AFortPlayerStateAthena* PlayerState)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenRuntime.NitrogenFare.PickUpPointOverlapped");

	ANitrogenFare_PickUpPointOverlapped_Params params;
	params.TraversePoint = TraversePoint;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenRuntime.NitrogenFare.PickUpPointExited
// (Final, Native, Protected)
// Parameters:
// class AAthenaTraversePoint*    TraversePoint                  (Parm, ZeroConstructor, IsPlainOldData)
// class AFortPlayerStateAthena*  PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)

void ANitrogenFare::PickUpPointExited(class AAthenaTraversePoint* TraversePoint, class AFortPlayerStateAthena* PlayerState)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenRuntime.NitrogenFare.PickUpPointExited");

	ANitrogenFare_PickUpPointExited_Params params;
	params.TraversePoint = TraversePoint;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenRuntime.NitrogenFare.OnVehicleEndPlay
// (Final, Native, Private)
// Parameters:
// class AActor*                  DestroyedVehicle               (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ANitrogenFare::OnVehicleEndPlay(class AActor* DestroyedVehicle, TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenRuntime.NitrogenFare.OnVehicleEndPlay");

	ANitrogenFare_OnVehicleEndPlay_Params params;
	params.DestroyedVehicle = DestroyedVehicle;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenRuntime.NitrogenFare.OnVehicleDriverChanged
// (Final, Native, Private)
// Parameters:
// class AFortPlayerControllerAthena* NewDriver                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AFortAthenaVehicle*      Vehicle                        (Parm, ZeroConstructor, IsPlainOldData)

void ANitrogenFare::OnVehicleDriverChanged(class AFortPlayerControllerAthena* NewDriver, class AFortAthenaVehicle* Vehicle)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenRuntime.NitrogenFare.OnVehicleDriverChanged");

	ANitrogenFare_OnVehicleDriverChanged_Params params;
	params.NewDriver = NewDriver;
	params.Vehicle = Vehicle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenRuntime.NitrogenFare.OnVehicleDestroyed
// (Final, Native, Private)
// Parameters:
// class AFortDagwoodVehicle*     DestroyedVehicle               (Parm, ZeroConstructor, IsPlainOldData)

void ANitrogenFare::OnVehicleDestroyed(class AFortDagwoodVehicle* DestroyedVehicle)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenRuntime.NitrogenFare.OnVehicleDestroyed");

	ANitrogenFare_OnVehicleDestroyed_Params params;
	params.DestroyedVehicle = DestroyedVehicle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenRuntime.NitrogenFare.OnRep_PassengerPickedUp
// (Final, Native, Private)

void ANitrogenFare::OnRep_PassengerPickedUp()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenRuntime.NitrogenFare.OnRep_PassengerPickedUp");

	ANitrogenFare_OnRep_PassengerPickedUp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenRuntime.NitrogenFare.GetRewardValue
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ANitrogenFare::GetRewardValue()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenRuntime.NitrogenFare.GetRewardValue");

	ANitrogenFare_GetRewardValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NitrogenRuntime.NitrogenFare.DropOffPointOverlapped
// (Final, Native, Public)
// Parameters:
// class AAthenaTraversePoint*    TraversePoint                  (Parm, ZeroConstructor, IsPlainOldData)
// class AFortPlayerStateAthena*  PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)

void ANitrogenFare::DropOffPointOverlapped(class AAthenaTraversePoint* TraversePoint, class AFortPlayerStateAthena* PlayerState)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenRuntime.NitrogenFare.DropOffPointOverlapped");

	ANitrogenFare_DropOffPointOverlapped_Params params;
	params.TraversePoint = TraversePoint;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenRuntime.NitrogenFare.DropOffPointExited
// (Final, Native, Protected)
// Parameters:
// class AAthenaTraversePoint*    TraversePoint                  (Parm, ZeroConstructor, IsPlainOldData)
// class AFortPlayerStateAthena*  PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)

void ANitrogenFare::DropOffPointExited(class AAthenaTraversePoint* TraversePoint, class AFortPlayerStateAthena* PlayerState)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenRuntime.NitrogenFare.DropOffPointExited");

	ANitrogenFare_DropOffPointExited_Params params;
	params.TraversePoint = TraversePoint;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenRuntime.NitrogenFareValueIndicator.OnRep_IndicatorValue
// (Final, Native, Private)

void ANitrogenFareValueIndicator::OnRep_IndicatorValue()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenRuntime.NitrogenFareValueIndicator.OnRep_IndicatorValue");

	ANitrogenFareValueIndicator_OnRep_IndicatorValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenRuntime.NitrogenFareValueIndicator.OnFareIndicatorValueChanged
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// unsigned char                  NewIndicatorValue              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ANitrogenFareValueIndicator::OnFareIndicatorValueChanged(unsigned char NewIndicatorValue)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenRuntime.NitrogenFareValueIndicator.OnFareIndicatorValueChanged");

	ANitrogenFareValueIndicator_OnFareIndicatorValueChanged_Params params;
	params.NewIndicatorValue = NewIndicatorValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenRuntime.NitrogenNavArrow.UpdatePulseSpeedForDistance
// (Native, Event, Protected, BlueprintEvent)

void ANitrogenNavArrow::UpdatePulseSpeedForDistance()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenRuntime.NitrogenNavArrow.UpdatePulseSpeedForDistance");

	ANitrogenNavArrow_UpdatePulseSpeedForDistance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenRuntime.NitrogenNavArrow.UpdatePrimaryColorForDistance
// (Native, Event, Protected, BlueprintEvent)

void ANitrogenNavArrow::UpdatePrimaryColorForDistance()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenRuntime.NitrogenNavArrow.UpdatePrimaryColorForDistance");

	ANitrogenNavArrow_UpdatePrimaryColorForDistance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenRuntime.NitrogenNavArrow.ThrowArrowToDestination
// (Native, Event, Protected, BlueprintEvent)

void ANitrogenNavArrow::ThrowArrowToDestination()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenRuntime.NitrogenNavArrow.ThrowArrowToDestination");

	ANitrogenNavArrow_ThrowArrowToDestination_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenRuntime.NitrogenNavArrow.RecallArrowToOwner
// (Native, Event, Protected, BlueprintEvent)

void ANitrogenNavArrow::RecallArrowToOwner()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenRuntime.NitrogenNavArrow.RecallArrowToOwner");

	ANitrogenNavArrow_RecallArrowToOwner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenRuntime.NitrogenPassengerPawnComponent.OnRep_PassengerState
// (Final, Native, Private)

void UNitrogenPassengerPawnComponent::OnRep_PassengerState()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenRuntime.NitrogenPassengerPawnComponent.OnRep_PassengerState");

	UNitrogenPassengerPawnComponent_OnRep_PassengerState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenRuntime.NitrogenPassengerPawnComponent.OnRep_FareValueIndicator
// (Final, Native, Private)

void UNitrogenPassengerPawnComponent::OnRep_FareValueIndicator()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenRuntime.NitrogenPassengerPawnComponent.OnRep_FareValueIndicator");

	UNitrogenPassengerPawnComponent_OnRep_FareValueIndicator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenRuntime.NitrogenPassengerPawnComponent.ClientPlayDeathEffects
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNitrogenPassengerPawnComponent::ClientPlayDeathEffects()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenRuntime.NitrogenPassengerPawnComponent.ClientPlayDeathEffects");

	UNitrogenPassengerPawnComponent_ClientPlayDeathEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenRuntime.NitrogenPassengerPawnComponent.ClientHandleFinishedCharacterCustomization
// (Final, Native, Private)
// Parameters:
// class AFortPlayerPawn*         PlayerPawn                     (Parm, ZeroConstructor, IsPlainOldData)

void UNitrogenPassengerPawnComponent::ClientHandleFinishedCharacterCustomization(class AFortPlayerPawn* PlayerPawn)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenRuntime.NitrogenPassengerPawnComponent.ClientHandleFinishedCharacterCustomization");

	UNitrogenPassengerPawnComponent_ClientHandleFinishedCharacterCustomization_Params params;
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenRuntime.NitrogenPickup.OnRep_TeamHidden
// (Final, Native, Private)

void ANitrogenPickup::OnRep_TeamHidden()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenRuntime.NitrogenPickup.OnRep_TeamHidden");

	ANitrogenPickup_OnRep_TeamHidden_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenRuntime.NitrogenPickup.OnNitrogenPickupOverlapped
// (Final, Native, Private, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ANitrogenPickup::OnNitrogenPickupOverlapped(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenRuntime.NitrogenPickup.OnNitrogenPickupOverlapped");

	ANitrogenPickup_OnNitrogenPickupOverlapped_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenRuntime.NitrogenFareDataRepActor.OnRep_FareRepData
// (Final, Native, Public)

void ANitrogenFareDataRepActor::OnRep_FareRepData()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenRuntime.NitrogenFareDataRepActor.OnRep_FareRepData");

	ANitrogenFareDataRepActor_OnRep_FareRepData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenRuntime.NitrogenPlayerComponent.OnRep_FareInteractionData
// (Final, Native, Private)

void UNitrogenPlayerComponent::OnRep_FareInteractionData()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenRuntime.NitrogenPlayerComponent.OnRep_FareInteractionData");

	UNitrogenPlayerComponent_OnRep_FareInteractionData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenRuntime.NitrogenPlayerComponent.OnRep_FareDataRepActor
// (Final, Native, Private)

void UNitrogenPlayerComponent::OnRep_FareDataRepActor()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenRuntime.NitrogenPlayerComponent.OnRep_FareDataRepActor");

	UNitrogenPlayerComponent_OnRep_FareDataRepActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenRuntime.NitrogenPlayerComponent.OnRep_CachedMutator
// (Final, Native, Private)

void UNitrogenPlayerComponent::OnRep_CachedMutator()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenRuntime.NitrogenPlayerComponent.OnRep_CachedMutator");

	UNitrogenPlayerComponent_OnRep_CachedMutator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenRuntime.NitrogenPlayerComponent.OnNitrogenGamePhaseChanged
// (Final, Native, Protected)
// Parameters:
// ENitrogenGamePhase             NewGamePhase                   (Parm, ZeroConstructor, IsPlainOldData)

void UNitrogenPlayerComponent::OnNitrogenGamePhaseChanged(ENitrogenGamePhase NewGamePhase)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenRuntime.NitrogenPlayerComponent.OnNitrogenGamePhaseChanged");

	UNitrogenPlayerComponent_OnNitrogenGamePhaseChanged_Params params;
	params.NewGamePhase = NewGamePhase;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenRuntime.NitrogenPlayerComponent.OnGameStarted
// (Event, Protected, BlueprintEvent)

void UNitrogenPlayerComponent::OnGameStarted()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenRuntime.NitrogenPlayerComponent.OnGameStarted");

	UNitrogenPlayerComponent_OnGameStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenRuntime.NitrogenPlayerComponent.OnExitVehicle
// (Final, Native, Private)

void UNitrogenPlayerComponent::OnExitVehicle()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenRuntime.NitrogenPlayerComponent.OnExitVehicle");

	UNitrogenPlayerComponent_OnExitVehicle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenRuntime.NitrogenPlayerComponent.OnEnterVehiclePassenger
// (Final, Native, Private)

void UNitrogenPlayerComponent::OnEnterVehiclePassenger()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenRuntime.NitrogenPlayerComponent.OnEnterVehiclePassenger");

	UNitrogenPlayerComponent_OnEnterVehiclePassenger_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenRuntime.NitrogenPlayerComponent.OnEnterVehicleDriver
// (Final, Native, Private)

void UNitrogenPlayerComponent::OnEnterVehicleDriver()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenRuntime.NitrogenPlayerComponent.OnEnterVehicleDriver");

	UNitrogenPlayerComponent_OnEnterVehicleDriver_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenRuntime.NitrogenPlayerComponent.HandleVehicleDestroyedBuildingActor
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class AFortAthenaVehicle*      Vehicle                        (Parm, ZeroConstructor, IsPlainOldData)
// class ABuildingActor*          BuildingActor                  (Parm, ZeroConstructor, IsPlainOldData)

void UNitrogenPlayerComponent::HandleVehicleDestroyedBuildingActor(class AFortAthenaVehicle* Vehicle, class ABuildingActor* BuildingActor)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenRuntime.NitrogenPlayerComponent.HandleVehicleDestroyedBuildingActor");

	UNitrogenPlayerComponent_HandleVehicleDestroyedBuildingActor_Params params;
	params.Vehicle = Vehicle;
	params.BuildingActor = BuildingActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenRuntime.NitrogenPlayerComponent.GetDistanceFromDropOff
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNitrogenPlayerComponent::GetDistanceFromDropOff()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenRuntime.NitrogenPlayerComponent.GetDistanceFromDropOff");

	UNitrogenPlayerComponent_GetDistanceFromDropOff_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NitrogenRuntime.NitrogenPlayerComponent.GetDistanceFromClosestPassenger
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNitrogenPlayerComponent::GetDistanceFromClosestPassenger()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenRuntime.NitrogenPlayerComponent.GetDistanceFromClosestPassenger");

	UNitrogenPlayerComponent_GetDistanceFromClosestPassenger_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NitrogenRuntime.NitrogenPlayerComponent.ClientHandleLoadingScreenStateChanged
// (Final, Native, Private)
// Parameters:
// class AFortPlayerControllerAthena* PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnableLoadScreen              (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   HUDReasonText                  (Parm)

void UNitrogenPlayerComponent::ClientHandleLoadingScreenStateChanged(class AFortPlayerControllerAthena* PlayerController, bool bEnableLoadScreen, const struct FText& HUDReasonText)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenRuntime.NitrogenPlayerComponent.ClientHandleLoadingScreenStateChanged");

	UNitrogenPlayerComponent_ClientHandleLoadingScreenStateChanged_Params params;
	params.PlayerController = PlayerController;
	params.bEnableLoadScreen = bEnableLoadScreen;
	params.HUDReasonText = HUDReasonText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenRuntime.NitrogenTraversePoint.OnEndOverlap
// (Final, Native, Private)
// Parameters:
// class AActor*                  OverlappedActor                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ANitrogenTraversePoint::OnEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenRuntime.NitrogenTraversePoint.OnEndOverlap");

	ANitrogenTraversePoint_OnEndOverlap_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenRuntime.NitrogenTraversePoint.OnClientVisibiltyUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bNewHidden                     (Parm, ZeroConstructor, IsPlainOldData)

void ANitrogenTraversePoint::OnClientVisibiltyUpdated(bool bNewHidden)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenRuntime.NitrogenTraversePoint.OnClientVisibiltyUpdated");

	ANitrogenTraversePoint_OnClientVisibiltyUpdated_Params params;
	params.bNewHidden = bNewHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenRuntime.NitrogenTraversePoint.OnClientInteracted
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bOwnedByClient                 (Parm, ZeroConstructor, IsPlainOldData)

void ANitrogenTraversePoint::OnClientInteracted(bool bOwnedByClient)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenRuntime.NitrogenTraversePoint.OnClientInteracted");

	ANitrogenTraversePoint_OnClientInteracted_Params params;
	params.bOwnedByClient = bOwnedByClient;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenRuntime.NitrogenVehicleComponent.TimelineBoostFXUpdate_JetSparksCounts
// (Final, Native, Private)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UNitrogenVehicleComponent::TimelineBoostFXUpdate_JetSparksCounts(float Value)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenRuntime.NitrogenVehicleComponent.TimelineBoostFXUpdate_JetSparksCounts");

	UNitrogenVehicleComponent_TimelineBoostFXUpdate_JetSparksCounts_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenRuntime.NitrogenVehicleComponent.TimelineBoostFXUpdate_JetFlamesHeight
// (Final, Native, Private)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UNitrogenVehicleComponent::TimelineBoostFXUpdate_JetFlamesHeight(float Value)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenRuntime.NitrogenVehicleComponent.TimelineBoostFXUpdate_JetFlamesHeight");

	UNitrogenVehicleComponent_TimelineBoostFXUpdate_JetFlamesHeight_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenRuntime.NitrogenVehicleComponent.SetBoostFXActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bActive                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UNitrogenVehicleComponent::SetBoostFXActive(bool bActive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenRuntime.NitrogenVehicleComponent.SetBoostFXActive");

	UNitrogenVehicleComponent_SetBoostFXActive_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenRuntime.NitrogenVehicleComponent.IsVehicleUnderCleanupWaterDepth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNitrogenVehicleComponent::IsVehicleUnderCleanupWaterDepth()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenRuntime.NitrogenVehicleComponent.IsVehicleUnderCleanupWaterDepth");

	UNitrogenVehicleComponent_IsVehicleUnderCleanupWaterDepth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NitrogenRuntime.NitrogenVehicleComponent.HandleVehicleOnHit
// (Final, Native, Private, HasOutParms, HasDefaults)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UNitrogenVehicleComponent::HandleVehicleOnHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenRuntime.NitrogenVehicleComponent.HandleVehicleOnHit");

	UNitrogenVehicleComponent_HandleVehicleOnHit_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
