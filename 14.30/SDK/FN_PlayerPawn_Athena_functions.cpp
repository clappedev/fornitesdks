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

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Get Creative Effect Data
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFCreativeEffectColorIndex Effect_Color                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::Get_Creative_Effect_Data(struct FFCreativeEffectColorIndex* Effect_Color)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.Get Creative Effect Data");

	APlayerPawn_Athena_C_Get_Creative_Effect_Data_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Effect_Color != nullptr)
		*Effect_Color = params.Effect_Color;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.handleCvarsUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 CVarName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void APlayerPawn_Athena_C::handleCvarsUpdated(const struct FString& CVarName)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.handleCvarsUpdated");

	APlayerPawn_Athena_C_handleCvarsUpdated_Params params;
	params.CVarName = CVarName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnRep_PlayerAimRotation
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::OnRep_PlayerAimRotation()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnRep_PlayerAimRotation");

	APlayerPawn_Athena_C_OnRep_PlayerAimRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GetAimPoint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                ControlRotation                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::GetAimPoint(struct FRotator* ControlRotation)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.GetAimPoint");

	APlayerPawn_Athena_C_GetAimPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ControlRotation != nullptr)
		*ControlRotation = params.ControlRotation;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.validateRimLight
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::validateRimLight()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.validateRimLight");

	APlayerPawn_Athena_C_validateRimLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.PawnIsDecoy
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APlayerPawn_Athena_C::PawnIsDecoy()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.PawnIsDecoy");

	APlayerPawn_Athena_C_PawnIsDecoy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.PawnIsNPC
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APlayerPawn_Athena_C::PawnIsNPC()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.PawnIsNPC");

	APlayerPawn_Athena_C_PawnIsNPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.RemoveSkeletalMeshComponentsFromWeaponObject
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortWeapon*             WeaponObject                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::RemoveSkeletalMeshComponentsFromWeaponObject(class AFortWeapon* WeaponObject)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.RemoveSkeletalMeshComponentsFromWeaponObject");

	APlayerPawn_Athena_C_RemoveSkeletalMeshComponentsFromWeaponObject_Params params;
	params.WeaponObject = WeaponObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.AddSkeletalMeshComponentsFromWeaponObject
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortWeapon*             WeaponObject                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::AddSkeletalMeshComponentsFromWeaponObject(class AFortWeapon* WeaponObject)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.AddSkeletalMeshComponentsFromWeaponObject");

	APlayerPawn_Athena_C_AddSkeletalMeshComponentsFromWeaponObject_Params params;
	params.WeaponObject = WeaponObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GalileoMaterialSetup
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::GalileoMaterialSetup()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.GalileoMaterialSetup");

	APlayerPawn_Athena_C_GalileoMaterialSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Get Highest Priority Highlight
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 Source                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FPawnHighlight          Top_Priority                   (Parm, OutParm, IsPlainOldData)

void APlayerPawn_Athena_C::Get_Highest_Priority_Highlight(class UObject** Source, struct FPawnHighlight* Top_Priority)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.Get Highest Priority Highlight");

	APlayerPawn_Athena_C_Get_Highest_Priority_Highlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Source != nullptr)
		*Source = params.Source;
	if (Top_Priority != nullptr)
		*Top_Priority = params.Top_Priority;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Highlight Pawn from Source
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPawnHighlight          Highlight                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           Only_Update_If_Current         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::Highlight_Pawn_from_Source(class UObject* Source, const struct FPawnHighlight& Highlight, bool Only_Update_If_Current)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.Highlight Pawn from Source");

	APlayerPawn_Athena_C_Highlight_Pawn_from_Source_Params params;
	params.Source = Source;
	params.Highlight = Highlight;
	params.Only_Update_If_Current = Only_Update_If_Current;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Remove Pawn Highlight from Source
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::Remove_Pawn_Highlight_from_Source(class UObject* Source)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.Remove Pawn Highlight from Source");

	APlayerPawn_Athena_C_Remove_Pawn_Highlight_from_Source_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ApplyPawnHighlight
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPawnHighlight          HitGlow                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void APlayerPawn_Athena_C::ApplyPawnHighlight(class UObject* Source, const struct FPawnHighlight& HitGlow)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.ApplyPawnHighlight");

	APlayerPawn_Athena_C_ApplyPawnHighlight_Params params;
	params.Source = Source;
	params.HitGlow = HitGlow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnRep_PlayRespawnFXOnSpawn
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::OnRep_PlayRespawnFXOnSpawn()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnRep_PlayRespawnFXOnSpawn");

	APlayerPawn_Athena_C_OnRep_PlayRespawnFXOnSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.LockonSearchCompleteTimedOut
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::LockonSearchCompleteTimedOut()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.LockonSearchCompleteTimedOut");

	APlayerPawn_Athena_C_LockonSearchCompleteTimedOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnLockOnSearchCompleted
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bConsumeEvent                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::OnLockOnSearchCompleted(bool* bConsumeEvent)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnLockOnSearchCompleted");

	APlayerPawn_Athena_C_OnLockOnSearchCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bConsumeEvent != nullptr)
		*bConsumeEvent = params.bConsumeEvent;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetPartyInProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsPartyInProgress             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::SetPartyInProgress(bool bIsPartyInProgress)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetPartyInProgress");

	APlayerPawn_Athena_C_SetPartyInProgress_Params params;
	params.bIsPartyInProgress = bIsPartyInProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.CleanUpTeleportationFXLight
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::CleanUpTeleportationFXLight()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.CleanUpTeleportationFXLight");

	APlayerPawn_Athena_C_CleanUpTeleportationFXLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.RestoreCharacterMats
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bFullyCompleted                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::RestoreCharacterMats(bool* bFullyCompleted)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.RestoreCharacterMats");

	APlayerPawn_Athena_C_RestoreCharacterMats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bFullyCompleted != nullptr)
		*bFullyCompleted = params.bFullyCompleted;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetPetHidden
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewHidden                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::SetPetHidden(bool NewHidden)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetPetHidden");

	APlayerPawn_Athena_C_SetPetHidden_Params params;
	params.NewHidden = NewHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetupDissolveFx
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::SetupDissolveFx()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetupDissolveFx");

	APlayerPawn_Athena_C_SetupDissolveFx_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.CleanupDissolveFX
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::CleanupDissolveFX()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.CleanupDissolveFX");

	APlayerPawn_Athena_C_CleanupDissolveFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.UpdateDissolveFx
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Scalar_Transition              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Scalar_ZHeight                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Scalar_LightIntensity          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::UpdateDissolveFx(float Scalar_Transition, float Scalar_ZHeight, float Scalar_LightIntensity)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.UpdateDissolveFx");

	APlayerPawn_Athena_C_UpdateDissolveFx_Params params;
	params.Scalar_Transition = Scalar_Transition;
	params.Scalar_ZHeight = Scalar_ZHeight;
	params.Scalar_LightIntensity = Scalar_LightIntensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SpawnTeleportationLight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::SpawnTeleportationLight()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.SpawnTeleportationLight");

	APlayerPawn_Athena_C_SpawnTeleportationLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.FindBounds
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::FindBounds()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.FindBounds");

	APlayerPawn_Athena_C_FindBounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.QueueTeleportOut
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::QueueTeleportOut()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.QueueTeleportOut");

	APlayerPawn_Athena_C_QueueTeleportOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.QueueTeleportIn
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::QueueTeleportIn()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.QueueTeleportIn");

	APlayerPawn_Athena_C_QueueTeleportIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnStartLongInteract
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ReceivingActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Out_bConsumeEvent              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Out_bSkipSetInteractDuration   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Out_bSkipStartAnimation        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// EItemInteractionType           Out_ItemInteractionType        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::OnStartLongInteract(class AActor* ReceivingActor, bool* Out_bConsumeEvent, bool* Out_bSkipSetInteractDuration, bool* Out_bSkipStartAnimation, EItemInteractionType* Out_ItemInteractionType)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnStartLongInteract");

	APlayerPawn_Athena_C_OnStartLongInteract_Params params;
	params.ReceivingActor = ReceivingActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out_bConsumeEvent != nullptr)
		*Out_bConsumeEvent = params.Out_bConsumeEvent;
	if (Out_bSkipSetInteractDuration != nullptr)
		*Out_bSkipSetInteractDuration = params.Out_bSkipSetInteractDuration;
	if (Out_bSkipStartAnimation != nullptr)
		*Out_bSkipStartAnimation = params.Out_bSkipStartAnimation;
	if (Out_ItemInteractionType != nullptr)
		*Out_ItemInteractionType = params.Out_ItemInteractionType;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.InWarmup
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bInWarmup                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::InWarmup(bool* bInWarmup)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.InWarmup");

	APlayerPawn_Athena_C_InWarmup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bInWarmup != nullptr)
		*bInWarmup = params.bInWarmup;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.StopLoopingAudio
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::StopLoopingAudio()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.StopLoopingAudio");

	APlayerPawn_Athena_C_StopLoopingAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.EnableWaterAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_Entering_Water              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::EnableWaterAudio(bool Is_Entering_Water)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.EnableWaterAudio");

	APlayerPawn_Athena_C_EnableWaterAudio_Params params;
	params.Is_Entering_Water = Is_Entering_Water;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GetLocationInCircle_XY
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 LocationLocalSpace             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::GetLocationInCircle_XY(struct FVector* LocationLocalSpace)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.GetLocationInCircle_XY");

	APlayerPawn_Athena_C_GetLocationInCircle_XY_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocationLocalSpace != nullptr)
		*LocationLocalSpace = params.LocationLocalSpace;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.InitAthenaFoleyAudio
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::InitAthenaFoleyAudio()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.InitAthenaFoleyAudio");

	APlayerPawn_Athena_C_InitAthenaFoleyAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::UserConstructionScript()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.UserConstructionScript");

	APlayerPawn_Athena_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void APlayerPawn_Athena_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.Timeline_0__FinishedFunc");

	APlayerPawn_Athena_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void APlayerPawn_Athena_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.Timeline_0__UpdateFunc");

	APlayerPawn_Athena_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             NewController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::ReceivePossessed(class AController* NewController)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReceivePossessed");

	APlayerPawn_Athena_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APlayerPawn_Athena_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReceiveBeginPlay");

	APlayerPawn_Athena_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void APlayerPawn_Athena_C::ReceiveDestroyed()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReceiveDestroyed");

	APlayerPawn_Athena_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SafeZoneStatusChanged
// (Event, Public, BlueprintEvent)

void APlayerPawn_Athena_C::SafeZoneStatusChanged()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.SafeZoneStatusChanged");

	APlayerPawn_Athena_C_SafeZoneStatusChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Athena.Equipping
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawn_Athena_C::GameplayCue_Athena_Equipping(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Athena.Equipping");

	APlayerPawn_Athena_C_GameplayCue_Athena_Equipping_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                 Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AFortPawn*               InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawn_Athena_C::OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnDeathPlayEffects");

	APlayerPawn_Athena_C_OnDeathPlayEffects_Params params;
	params.Damage = Damage;
	params.DamageTags = DamageTags;
	params.Momentum = Momentum;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawn_Athena_C::GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2");

	APlayerPawn_Athena_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Athena.Player.BeingRevivedFromDBNO
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawn_Athena_C::GameplayCue_Athena_Player_BeingRevivedFromDBNO(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Athena.Player.BeingRevivedFromDBNO");

	APlayerPawn_Athena_C_GameplayCue_Athena_Player_BeingRevivedFromDBNO_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.RemoveStormFX
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::RemoveStormFX()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.RemoveStormFX");

	APlayerPawn_Athena_C_RemoveStormFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawn_Athena_C::GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1");

	APlayerPawn_Athena_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Abilities.Activation.DBNOResurrect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawn_Athena_C::GameplayCue_Abilities_Activation_DBNOResurrect(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Abilities.Activation.DBNOResurrect");

	APlayerPawn_Athena_C_GameplayCue_Abilities_Activation_DBNOResurrect_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnEnteredWaterVolume
// (Event, Public, BlueprintEvent)

void APlayerPawn_Athena_C::OnEnteredWaterVolume()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnEnteredWaterVolume");

	APlayerPawn_Athena_C_OnEnteredWaterVolume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnExitedWaterVolume
// (Event, Public, BlueprintEvent)

void APlayerPawn_Athena_C::OnExitedWaterVolume()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnExitedWaterVolume");

	APlayerPawn_Athena_C_OnExitedWaterVolume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.NotifyTeammateSkydivedFromBus
// (Event, Public, BlueprintEvent)

void APlayerPawn_Athena_C::NotifyTeammateSkydivedFromBus()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.NotifyTeammateSkydivedFromBus");

	APlayerPawn_Athena_C_NotifyTeammateSkydivedFromBus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReceiveEndPlay");

	APlayerPawn_Athena_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnLeftReplayRelevancy
// (Event, Public, BlueprintEvent)

void APlayerPawn_Athena_C::OnLeftReplayRelevancy()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnLeftReplayRelevancy");

	APlayerPawn_Athena_C_OnLeftReplayRelevancy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnEnteredReplayRelevancy
// (Event, Public, BlueprintEvent)

void APlayerPawn_Athena_C::OnEnteredReplayRelevancy()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnEnteredReplayRelevancy");

	APlayerPawn_Athena_C_OnEnteredReplayRelevancy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnCharacterCustomizationCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*         Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::OnCharacterCustomizationCompleted(class AFortPlayerPawn* Pawn)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnCharacterCustomizationCompleted");

	APlayerPawn_Athena_C_OnCharacterCustomizationCompleted_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnResInDuringWarmup
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::OnResInDuringWarmup()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnResInDuringWarmup");

	APlayerPawn_Athena_C_OnResInDuringWarmup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.AddStormFX
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::AddStormFX()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.AddStormFX");

	APlayerPawn_Athena_C_AddStormFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetSafeZonePhaseAndGameplayCueTag
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InSafeZonePhase                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSpawnGameplayCue              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::SetSafeZonePhaseAndGameplayCueTag(int InSafeZonePhase, bool bSpawnGameplayCue)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetSafeZonePhaseAndGameplayCueTag");

	APlayerPawn_Athena_C_SetSafeZonePhaseAndGameplayCueTag_Params params;
	params.InSafeZonePhase = InSafeZonePhase;
	params.bSpawnGameplayCue = bSpawnGameplayCue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetSafeZoneTagWhenChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewWhichSafeZoneTag            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            GameplayTag                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bSpawnGameplayCue              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::SetSafeZoneTagWhenChanged(int NewWhichSafeZoneTag, const struct FGameplayTag& GameplayTag, bool bSpawnGameplayCue)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetSafeZoneTagWhenChanged");

	APlayerPawn_Athena_C_SetSafeZoneTagWhenChanged_Params params;
	params.NewWhichSafeZoneTag = NewWhichSafeZoneTag;
	params.GameplayTag = GameplayTag;
	params.bSpawnGameplayCue = bSpawnGameplayCue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnOutsideSafeZonePhaseChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            SafeZonePhase                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::OnOutsideSafeZonePhaseChanged(int SafeZonePhase)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnOutsideSafeZonePhaseChanged");

	APlayerPawn_Athena_C_OnOutsideSafeZonePhaseChanged_Params params;
	params.SafeZonePhase = SafeZonePhase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.RemoveSafeZoneGameplayCue
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::RemoveSafeZoneGameplayCue()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.RemoveSafeZoneGameplayCue");

	APlayerPawn_Athena_C_RemoveSafeZoneGameplayCue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnReceivedStormSurgeDamage
// (Event, Public, BlueprintEvent)

void APlayerPawn_Athena_C::OnReceivedStormSurgeDamage()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnReceivedStormSurgeDamage");

	APlayerPawn_Athena_C_OnReceivedStormSurgeDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.MeleeSwingLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           First_Left                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::MeleeSwingLeft(bool First_Left)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.MeleeSwingLeft");

	APlayerPawn_Athena_C_MeleeSwingLeft_Params params;
	params.First_Left = First_Left;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.MeleeSwingRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           First_Right                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::MeleeSwingRight(bool First_Right)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.MeleeSwingRight");

	APlayerPawn_Athena_C_MeleeSwingRight_Params params;
	params.First_Right = First_Right;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Abilities.Activation.DBNOEnter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawn_Athena_C::GameplayCue_Abilities_Activation_DBNOEnter(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Abilities.Activation.DBNOEnter");

	APlayerPawn_Athena_C_GameplayCue_Abilities_Activation_DBNOEnter_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ActivateInvincibleVisuals
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::ActivateInvincibleVisuals(float Duration)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.ActivateInvincibleVisuals");

	APlayerPawn_Athena_C_ActivateInvincibleVisuals_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Athena.Reloading
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawn_Athena_C::GameplayCue_Athena_Reloading(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Athena.Reloading");

	APlayerPawn_Athena_C_GameplayCue_Athena_Reloading_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.TeleportInNSeconds
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          SecondsTillTeleport            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 DestLocation                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                DestRotation                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::TeleportInNSeconds(float SecondsTillTeleport, const struct FVector& DestLocation, const struct FRotator& DestRotation)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.TeleportInNSeconds");

	APlayerPawn_Athena_C_TeleportInNSeconds_Params params;
	params.SecondsTillTeleport = SecondsTillTeleport;
	params.DestLocation = DestLocation;
	params.DestRotation = DestRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ClientRunSnowGC
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Instant                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::ClientRunSnowGC(bool Instant)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.ClientRunSnowGC");

	APlayerPawn_Athena_C_ClientRunSnowGC_Params params;
	params.Instant = Instant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.WhiteoutAndTeleport
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 DestLocation                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                DestRotation                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Instant                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Gravity                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::WhiteoutAndTeleport(const struct FVector& DestLocation, const struct FRotator& DestRotation, bool Instant, float Gravity)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.WhiteoutAndTeleport");

	APlayerPawn_Athena_C_WhiteoutAndTeleport_Params params;
	params.DestLocation = DestLocation;
	params.DestRotation = DestRotation;
	params.Instant = Instant;
	params.Gravity = Gravity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Athena.Boost
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawn_Athena_C::GameplayCue_Athena_Boost(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Athena.Boost");

	APlayerPawn_Athena_C_GameplayCue_Athena_Boost_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnCreativeStopGhost
// (Event, Public, BlueprintEvent)

void APlayerPawn_Athena_C::OnCreativeStopGhost()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnCreativeStopGhost");

	APlayerPawn_Athena_C_OnCreativeStopGhost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnCreativeStartGhost
// (Event, Public, BlueprintEvent)

void APlayerPawn_Athena_C::OnCreativeStartGhost()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnCreativeStartGhost");

	APlayerPawn_Athena_C_OnCreativeStartGhost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.MeleeSwingLeft_End
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::MeleeSwingLeft_End()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.MeleeSwingLeft_End");

	APlayerPawn_Athena_C_MeleeSwingLeft_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.MeleeSwingRight_End
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::MeleeSwingRight_End()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.MeleeSwingRight_End");

	APlayerPawn_Athena_C_MeleeSwingRight_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.AddSafeZoneGameplayCue
// (Net, NetClient, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::AddSafeZoneGameplayCue()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.AddSafeZoneGameplayCue");

	APlayerPawn_Athena_C_AddSafeZoneGameplayCue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.RemoveSafeZoneGameplayCueServerToClient
// (Net, NetClient, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::RemoveSafeZoneGameplayCueServerToClient()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.RemoveSafeZoneGameplayCueServerToClient");

	APlayerPawn_Athena_C_RemoveSafeZoneGameplayCueServerToClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnSuccessfulBuildingEdit
// (Event, Public, BlueprintEvent)

void APlayerPawn_Athena_C::OnSuccessfulBuildingEdit()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnSuccessfulBuildingEdit");

	APlayerPawn_Athena_C_OnSuccessfulBuildingEdit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Play Respawn FX
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::Play_Respawn_FX()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.Play Respawn FX");

	APlayerPawn_Athena_C_Play_Respawn_FX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnSpawnImmunityTimeReset
// (Event, Public, BlueprintEvent)

void APlayerPawn_Athena_C::OnSpawnImmunityTimeReset()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnSpawnImmunityTimeReset");

	APlayerPawn_Athena_C_OnSpawnImmunityTimeReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnEnteredWaterBody
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortWaterBodyActor*     WaterBody                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsFirstBody                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::OnEnteredWaterBody(class AFortWaterBodyActor* WaterBody, bool bIsFirstBody)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnEnteredWaterBody");

	APlayerPawn_Athena_C_OnEnteredWaterBody_Params params;
	params.WaterBody = WaterBody;
	params.bIsFirstBody = bIsFirstBody;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnExitedWaterBody
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortWaterBodyActor*     WaterBody                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsLastBody                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::OnExitedWaterBody(class AFortWaterBodyActor* WaterBody, bool bIsLastBody)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnExitedWaterBody");

	APlayerPawn_Athena_C_OnExitedWaterBody_Params params;
	params.WaterBody = WaterBody;
	params.bIsLastBody = bIsLastBody;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.K2_OnMovementModeChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMovementMode>     PrevMovementMode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>     NewMovementMode                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  PrevCustomMode                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  NewCustomMode                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::K2_OnMovementModeChanged(TEnumAsByte<EMovementMode> PrevMovementMode, TEnumAsByte<EMovementMode> NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.K2_OnMovementModeChanged");

	APlayerPawn_Athena_C_K2_OnMovementModeChanged_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.NewMovementMode = NewMovementMode;
	params.PrevCustomMode = PrevCustomMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnBeginWaterSprintBoost
// (Event, Public, BlueprintEvent)

void APlayerPawn_Athena_C::OnBeginWaterSprintBoost()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnBeginWaterSprintBoost");

	APlayerPawn_Athena_C_OnBeginWaterSprintBoost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.isHiddingInProp
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsHidden                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::isHiddingInProp(bool IsHidden)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.isHiddingInProp");

	APlayerPawn_Athena_C_isHiddingInProp_Params params;
	params.IsHidden = IsHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ServerSetCreativeEffectColorIndex
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFCreativeEffectColorIndex Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::ServerSetCreativeEffectColorIndex(const struct FFCreativeEffectColorIndex& Index)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.ServerSetCreativeEffectColorIndex");

	APlayerPawn_Athena_C_ServerSetCreativeEffectColorIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnLandscapeCheckFailedAndTeleported
// (Event, Public, BlueprintEvent)

void APlayerPawn_Athena_C::OnLandscapeCheckFailedAndTeleported()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnLandscapeCheckFailedAndTeleported");

	APlayerPawn_Athena_C_OnLandscapeCheckFailedAndTeleported_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ScalePlayerUp
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::ScalePlayerUp()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.ScalePlayerUp");

	APlayerPawn_Athena_C_ScalePlayerUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ScalePlayerDown
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::ScalePlayerDown()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.ScalePlayerDown");

	APlayerPawn_Athena_C_ScalePlayerDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnTetheredExitPressed
// (Event, Public, BlueprintEvent)

void APlayerPawn_Athena_C::OnTetheredExitPressed()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnTetheredExitPressed");

	APlayerPawn_Athena_C_OnTetheredExitPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnTetheredExitReleased
// (Event, Public, BlueprintEvent)

void APlayerPawn_Athena_C::OnTetheredExitReleased()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnTetheredExitReleased");

	APlayerPawn_Athena_C_OnTetheredExitReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnTetherStarted
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                   LastTetherPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::OnTetherStarted(class APawn* LastTetherPawn)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnTetherStarted");

	APlayerPawn_Athena_C_OnTetherStarted_Params params;
	params.LastTetherPawn = LastTetherPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnTetherEnded
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                   LastTetherPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::OnTetherEnded(class APawn* LastTetherPawn)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnTetherEnded");

	APlayerPawn_Athena_C_OnTetherEnded_Params params;
	params.LastTetherPawn = LastTetherPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.StartAImRotationTick
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::StartAImRotationTick()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.StartAImRotationTick");

	APlayerPawn_Athena_C_StartAImRotationTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.EndRotationTick
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::EndRotationTick()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.EndRotationTick");

	APlayerPawn_Athena_C_EndRotationTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReplicateAimRotation
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                PlayerAimRotation              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::ReplicateAimRotation(const struct FRotator& PlayerAimRotation)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReplicateAimRotation");

	APlayerPawn_Athena_C_ReplicateAimRotation_Params params;
	params.PlayerAimRotation = PlayerAimRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.AimTick
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::AimTick()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.AimTick");

	APlayerPawn_Athena_C_AimTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ExecuteUbergraph_PlayerPawn_Athena
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::ExecuteUbergraph_PlayerPawn_Athena(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.ExecuteUbergraph_PlayerPawn_Athena");

	APlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.CCPM_isHiddenInProp__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsHidden                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_C::CCPM_isHiddenInProp__DelegateSignature(bool IsHidden)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.CCPM_isHiddenInProp__DelegateSignature");

	APlayerPawn_Athena_C_CCPM_isHiddenInProp__DelegateSignature_Params params;
	params.IsHidden = IsHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingLeft2__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::SwingLeft2__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingLeft2__DelegateSignature");

	APlayerPawn_Athena_C_SwingLeft2__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingRight2__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::SwingRight2__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingRight2__DelegateSignature");

	APlayerPawn_Athena_C_SwingRight2__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingLeftEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::SwingLeftEnd__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingLeftEnd__DelegateSignature");

	APlayerPawn_Athena_C_SwingLeftEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingRightEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::SwingRightEnd__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingRightEnd__DelegateSignature");

	APlayerPawn_Athena_C_SwingRightEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.onFadeToWhiteTeleported__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::onFadeToWhiteTeleported__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.onFadeToWhiteTeleported__DelegateSignature");

	APlayerPawn_Athena_C_onFadeToWhiteTeleported__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingLeft__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::SwingLeft__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingLeft__DelegateSignature");

	APlayerPawn_Athena_C_SwingLeft__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingRight__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::SwingRight__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingRight__DelegateSignature");

	APlayerPawn_Athena_C_SwingRight__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ResOut__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::ResOut__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.ResOut__DelegateSignature");

	APlayerPawn_Athena_C_ResOut__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ResIn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Athena_C::ResIn__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena.PlayerPawn_Athena_C.ResIn__DelegateSignature");

	APlayerPawn_Athena_C_ResIn__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
