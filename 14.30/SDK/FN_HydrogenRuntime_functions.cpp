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

// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.UpdateCapturePointsCounted
// (Final, Native, Protected)

void AFortAthenaMutator_Hydrogen::UpdateCapturePointsCounted()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HydrogenRuntime.FortAthenaMutator_Hydrogen.UpdateCapturePointsCounted");

	AFortAthenaMutator_Hydrogen_UpdateCapturePointsCounted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.TickHydrogenStormShield
// (Final, Native, Protected)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AFortAthenaMutator_Hydrogen::TickHydrogenStormShield(float DeltaSeconds)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HydrogenRuntime.FortAthenaMutator_Hydrogen.TickHydrogenStormShield");

	AFortAthenaMutator_Hydrogen_TickHydrogenStormShield_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.SetupSafeZoneRoute
// (Final, Native, Protected, HasDefaults)
// Parameters:
// struct FVector                 StartVector                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 EndVector                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AFortAthenaMutator_Hydrogen::SetupSafeZoneRoute(const struct FVector& StartVector, const struct FVector& EndVector)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HydrogenRuntime.FortAthenaMutator_Hydrogen.SetupSafeZoneRoute");

	AFortAthenaMutator_Hydrogen_SetupSafeZoneRoute_Params params;
	params.StartVector = StartVector;
	params.EndVector = EndVector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.SetCapturePointFillAmount
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class AHydrogenObjectiveActor* InCapturePointActor            (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  InPlayerTeam                   (Parm, ZeroConstructor, IsPlainOldData)

void AFortAthenaMutator_Hydrogen::SetCapturePointFillAmount(class AHydrogenObjectiveActor* InCapturePointActor, unsigned char InPlayerTeam)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HydrogenRuntime.FortAthenaMutator_Hydrogen.SetCapturePointFillAmount");

	AFortAthenaMutator_Hydrogen_SetCapturePointFillAmount_Params params;
	params.InCapturePointActor = InCapturePointActor;
	params.InPlayerTeam = InPlayerTeam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.PositionHydrogenStormShield
// (Final, Native, Protected)

void AFortAthenaMutator_Hydrogen::PositionHydrogenStormShield()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HydrogenRuntime.FortAthenaMutator_Hydrogen.PositionHydrogenStormShield");

	AFortAthenaMutator_Hydrogen_PositionHydrogenStormShield_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.OwningTeamChange
// (Final, Native, Public)
// Parameters:
// class AHydrogenObjectiveActor* Objective                      (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  NewTeam                        (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  OldTeam                        (Parm, ZeroConstructor, IsPlainOldData)

void AFortAthenaMutator_Hydrogen::OwningTeamChange(class AHydrogenObjectiveActor* Objective, unsigned char NewTeam, unsigned char OldTeam)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HydrogenRuntime.FortAthenaMutator_Hydrogen.OwningTeamChange");

	AFortAthenaMutator_Hydrogen_OwningTeamChange_Params params;
	params.Objective = Objective;
	params.NewTeam = NewTeam;
	params.OldTeam = OldTeam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.OnRep_WinningTeam
// (Final, Native, Protected)

void AFortAthenaMutator_Hydrogen::OnRep_WinningTeam()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HydrogenRuntime.FortAthenaMutator_Hydrogen.OnRep_WinningTeam");

	AFortAthenaMutator_Hydrogen_OnRep_WinningTeam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.OnRep_HydrogenTeamPointsChanged
// (Final, Native, Protected)

void AFortAthenaMutator_Hydrogen::OnRep_HydrogenTeamPointsChanged()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HydrogenRuntime.FortAthenaMutator_Hydrogen.OnRep_HydrogenTeamPointsChanged");

	AFortAthenaMutator_Hydrogen_OnRep_HydrogenTeamPointsChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.OnGamePhaseStepChanged
// (Final, Native, Protected, HasOutParms)
// Parameters:
// TScriptInterface<class UFortSafeZoneInterface> SafeZoneInterfaceConst         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// EAthenaGamePhaseStep           GamePhaseStep                  (Parm, ZeroConstructor, IsPlainOldData)

void AFortAthenaMutator_Hydrogen::OnGamePhaseStepChanged(const TScriptInterface<class UFortSafeZoneInterface>& SafeZoneInterfaceConst, EAthenaGamePhaseStep GamePhaseStep)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HydrogenRuntime.FortAthenaMutator_Hydrogen.OnGamePhaseStepChanged");

	AFortAthenaMutator_Hydrogen_OnGamePhaseStepChanged_Params params;
	params.SafeZoneInterfaceConst = SafeZoneInterfaceConst;
	params.GamePhaseStep = GamePhaseStep;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.IsInStormShield
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 TestLocation                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AFortAthenaMutator_Hydrogen::IsInStormShield(const struct FVector& TestLocation)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HydrogenRuntime.FortAthenaMutator_Hydrogen.IsInStormShield");

	AFortAthenaMutator_Hydrogen_IsInStormShield_Params params;
	params.TestLocation = TestLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.GotoNextStormShieldNode
// (Final, Native, Protected)

void AFortAthenaMutator_Hydrogen::GotoNextStormShieldNode()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HydrogenRuntime.FortAthenaMutator_Hydrogen.GotoNextStormShieldNode");

	AFortAthenaMutator_Hydrogen_GotoNextStormShieldNode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.GiveObjectiveAccolade
// (Final, Native, Public)
// Parameters:
// class AFortPlayerControllerAthena* FortController                 (Parm, ZeroConstructor, IsPlainOldData)

void AFortAthenaMutator_Hydrogen::GiveObjectiveAccolade(class AFortPlayerControllerAthena* FortController)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HydrogenRuntime.FortAthenaMutator_Hydrogen.GiveObjectiveAccolade");

	AFortAthenaMutator_Hydrogen_GiveObjectiveAccolade_Params params;
	params.FortController = FortController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.GiveEOMBonusAccolade
// (Final, Native, Public)

void AFortAthenaMutator_Hydrogen::GiveEOMBonusAccolade()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HydrogenRuntime.FortAthenaMutator_Hydrogen.GiveEOMBonusAccolade");

	AFortAthenaMutator_Hydrogen_GiveEOMBonusAccolade_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.GetTimeToNextNode
// (Final, Native, Protected)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AFortAthenaMutator_Hydrogen::GetTimeToNextNode()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HydrogenRuntime.FortAthenaMutator_Hydrogen.GetTimeToNextNode");

	AFortAthenaMutator_Hydrogen_GetTimeToNextNode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.GetStormSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AFortAthenaMutator_Hydrogen::GetStormSpeed()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HydrogenRuntime.FortAthenaMutator_Hydrogen.GetStormSpeed");

	AFortAthenaMutator_Hydrogen_GetStormSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.GetSortedActivePointIndices
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<int>                    OutSortedIndices               (Parm, OutParm, ZeroConstructor)

void AFortAthenaMutator_Hydrogen::GetSortedActivePointIndices(TArray<int>* OutSortedIndices)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HydrogenRuntime.FortAthenaMutator_Hydrogen.GetSortedActivePointIndices");

	AFortAthenaMutator_Hydrogen_GetSortedActivePointIndices_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSortedIndices != nullptr)
		*OutSortedIndices = params.OutSortedIndices;
}


// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.GetOwnedCapturePointCount
// (Final, Native, Protected)
// Parameters:
// int                            InIndex                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AFortAthenaMutator_Hydrogen::GetOwnedCapturePointCount(int InIndex)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HydrogenRuntime.FortAthenaMutator_Hydrogen.GetOwnedCapturePointCount");

	AFortAthenaMutator_Hydrogen_GetOwnedCapturePointCount_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.GetNextActorOnPathLocation
// (Final, Native, Protected, HasDefaults)
// Parameters:
// int                            InPathIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AFortAthenaMutator_Hydrogen::GetNextActorOnPathLocation(int InPathIndex)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HydrogenRuntime.FortAthenaMutator_Hydrogen.GetNextActorOnPathLocation");

	AFortAthenaMutator_Hydrogen_GetNextActorOnPathLocation_Params params;
	params.InPathIndex = InPathIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.GetAllCapturePoints
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AHydrogenObjectiveActor*> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<class AHydrogenObjectiveActor*> AFortAthenaMutator_Hydrogen::GetAllCapturePoints()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HydrogenRuntime.FortAthenaMutator_Hydrogen.GetAllCapturePoints");

	AFortAthenaMutator_Hydrogen_GetAllCapturePoints_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.GetActorOnPathLocation
// (Final, Native, Protected, HasDefaults)
// Parameters:
// int                            InPathIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AFortAthenaMutator_Hydrogen::GetActorOnPathLocation(int InPathIndex)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HydrogenRuntime.FortAthenaMutator_Hydrogen.GetActorOnPathLocation");

	AFortAthenaMutator_Hydrogen_GetActorOnPathLocation_Params params;
	params.InPathIndex = InPathIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.EndGame
// (Final, Native, Protected)
// Parameters:
// unsigned char                  Winner                         (Parm, ZeroConstructor, IsPlainOldData)

void AFortAthenaMutator_Hydrogen::EndGame(unsigned char Winner)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HydrogenRuntime.FortAthenaMutator_Hydrogen.EndGame");

	AFortAthenaMutator_Hydrogen_EndGame_Params params;
	params.Winner = Winner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.CheckVictoryPoints
// (Final, Native, Protected)
// Parameters:
// float                          TimePassed                     (Parm, ZeroConstructor, IsPlainOldData)

void AFortAthenaMutator_Hydrogen::CheckVictoryPoints(float TimePassed)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HydrogenRuntime.FortAthenaMutator_Hydrogen.CheckVictoryPoints");

	AFortAthenaMutator_Hydrogen_CheckVictoryPoints_Params params;
	params.TimePassed = TimePassed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.bHasWinnerBeenDeclared
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AFortAthenaMutator_Hydrogen::bHasWinnerBeenDeclared()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HydrogenRuntime.FortAthenaMutator_Hydrogen.bHasWinnerBeenDeclared");

	AFortAthenaMutator_Hydrogen_bHasWinnerBeenDeclared_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.bHasStormStarted
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AFortAthenaMutator_Hydrogen::bHasStormStarted()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HydrogenRuntime.FortAthenaMutator_Hydrogen.bHasStormStarted");

	AFortAthenaMutator_Hydrogen_bHasStormStarted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.AddBonusVictoryPointsForLockedCapturePoints
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// unsigned char                  InTeam                         (Parm, ZeroConstructor, IsPlainOldData)

void AFortAthenaMutator_Hydrogen::AddBonusVictoryPointsForLockedCapturePoints(unsigned char InTeam)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HydrogenRuntime.FortAthenaMutator_Hydrogen.AddBonusVictoryPointsForLockedCapturePoints");

	AFortAthenaMutator_Hydrogen_AddBonusVictoryPointsForLockedCapturePoints_Params params;
	params.InTeam = InTeam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.ActivateTheStormShield
// (Final, Native, Protected)

void AFortAthenaMutator_Hydrogen::ActivateTheStormShield()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HydrogenRuntime.FortAthenaMutator_Hydrogen.ActivateTheStormShield");

	AFortAthenaMutator_Hydrogen_ActivateTheStormShield_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HydrogenRuntime.HydrogenObjectiveActor.WaitForMutator
// (Final, Native, Protected)

void AHydrogenObjectiveActor::WaitForMutator()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HydrogenRuntime.HydrogenObjectiveActor.WaitForMutator");

	AHydrogenObjectiveActor_WaitForMutator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HydrogenRuntime.HydrogenObjectiveActor.SetUpMaterialInstanceDynamic
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FSlateBrush             MapIconBrush                   (Parm, OutParm)
// class UMaterialInstanceDynamic* DrawBrushMID                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AHydrogenObjectiveActor::SetUpMaterialInstanceDynamic(struct FSlateBrush* MapIconBrush, class UMaterialInstanceDynamic** DrawBrushMID)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HydrogenRuntime.HydrogenObjectiveActor.SetUpMaterialInstanceDynamic");

	AHydrogenObjectiveActor_SetUpMaterialInstanceDynamic_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MapIconBrush != nullptr)
		*MapIconBrush = params.MapIconBrush;
	if (DrawBrushMID != nullptr)
		*DrawBrushMID = params.DrawBrushMID;
}


// Function HydrogenRuntime.HydrogenObjectiveActor.SetActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInIsActive                    (Parm, ZeroConstructor, IsPlainOldData)

void AHydrogenObjectiveActor::SetActive(bool bInIsActive)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HydrogenRuntime.HydrogenObjectiveActor.SetActive");

	AHydrogenObjectiveActor_SetActive_Params params;
	params.bInIsActive = bInIsActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HydrogenRuntime.HydrogenObjectiveActor.ProcessOverlap
// (Final, Native, Private)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void AHydrogenObjectiveActor::ProcessOverlap(class AActor* OtherActor)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HydrogenRuntime.HydrogenObjectiveActor.ProcessOverlap");

	AHydrogenObjectiveActor_ProcessOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HydrogenRuntime.HydrogenObjectiveActor.PlayContestedMapTimeline
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AHydrogenObjectiveActor::PlayContestedMapTimeline()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HydrogenRuntime.HydrogenObjectiveActor.PlayContestedMapTimeline");

	AHydrogenObjectiveActor_PlayContestedMapTimeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HydrogenRuntime.HydrogenObjectiveActor.OnTimelineFlashing
// (Final, Native, Protected)
// Parameters:
// float                          IconOpacity                    (Parm, ZeroConstructor, IsPlainOldData)

void AHydrogenObjectiveActor::OnTimelineFlashing(float IconOpacity)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HydrogenRuntime.HydrogenObjectiveActor.OnTimelineFlashing");

	AHydrogenObjectiveActor_OnTimelineFlashing_Params params;
	params.IconOpacity = IconOpacity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HydrogenRuntime.HydrogenObjectiveActor.OnRep_TeamsOnCapturePoint
// (Final, Native, Private)

void AHydrogenObjectiveActor::OnRep_TeamsOnCapturePoint()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HydrogenRuntime.HydrogenObjectiveActor.OnRep_TeamsOnCapturePoint");

	AHydrogenObjectiveActor_OnRep_TeamsOnCapturePoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HydrogenRuntime.HydrogenObjectiveActor.OnRep_OwningTeam
// (Final, Native, Private)

void AHydrogenObjectiveActor::OnRep_OwningTeam()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HydrogenRuntime.HydrogenObjectiveActor.OnRep_OwningTeam");

	AHydrogenObjectiveActor_OnRep_OwningTeam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HydrogenRuntime.HydrogenObjectiveActor.OnRep_HydrogenCaptureStateEnum
// (Final, Native, Private)

void AHydrogenObjectiveActor::OnRep_HydrogenCaptureStateEnum()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HydrogenRuntime.HydrogenObjectiveActor.OnRep_HydrogenCaptureStateEnum");

	AHydrogenObjectiveActor_OnRep_HydrogenCaptureStateEnum_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HydrogenRuntime.HydrogenObjectiveActor.OnRep_bIsActive
// (Final, Native, Protected)

void AHydrogenObjectiveActor::OnRep_bIsActive()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HydrogenRuntime.HydrogenObjectiveActor.OnRep_bIsActive");

	AHydrogenObjectiveActor_OnRep_bIsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HydrogenRuntime.HydrogenObjectiveActor.OnOverlapBegin
// (Final, Native, Private, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AHydrogenObjectiveActor::OnOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HydrogenRuntime.HydrogenObjectiveActor.OnOverlapBegin");

	AHydrogenObjectiveActor_OnOverlapBegin_Params params;
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


// Function HydrogenRuntime.HydrogenObjectiveActor.OnMutatorAvailable
// (Final, Native, Protected, BlueprintCallable)

void AHydrogenObjectiveActor::OnMutatorAvailable()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HydrogenRuntime.HydrogenObjectiveActor.OnMutatorAvailable");

	AHydrogenObjectiveActor_OnMutatorAvailable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HydrogenRuntime.HydrogenObjectiveActor.OnComponentBeginOverlap
// (Final, Native, Private)
// Parameters:
// class AActor*                  OverlappedActor                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void AHydrogenObjectiveActor::OnComponentBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HydrogenRuntime.HydrogenObjectiveActor.OnComponentBeginOverlap");

	AHydrogenObjectiveActor_OnComponentBeginOverlap_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HydrogenRuntime.HydrogenObjectiveActor.GetIsActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AHydrogenObjectiveActor::GetIsActive()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HydrogenRuntime.HydrogenObjectiveActor.GetIsActive");

	AHydrogenObjectiveActor_GetIsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HydrogenRuntime.HydrogenObjectiveActor.FlashIcon
// (Final, Native, Protected, BlueprintCallable)

void AHydrogenObjectiveActor::FlashIcon()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HydrogenRuntime.HydrogenObjectiveActor.FlashIcon");

	AHydrogenObjectiveActor_FlashIcon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HydrogenRuntime.HydrogenObjectiveActor.CheckForStorm
// (Final, Native, Protected)

void AHydrogenObjectiveActor::CheckForStorm()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HydrogenRuntime.HydrogenObjectiveActor.CheckForStorm");

	AHydrogenObjectiveActor_CheckForStorm_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
