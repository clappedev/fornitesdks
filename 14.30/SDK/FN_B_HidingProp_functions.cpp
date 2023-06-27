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

// Function B_HidingProp.B_HidingProp_C.Allow Cosmetics For Pawn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               Pawn                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           Allow                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AB_HidingProp_C::Allow_Cosmetics_For_Pawn(class AFortPawn* Pawn, bool* Allow)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HidingProp.B_HidingProp_C.Allow Cosmetics For Pawn");

	AB_HidingProp_C_Allow_Cosmetics_For_Pawn_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Allow != nullptr)
		*Allow = params.Allow;
}


// Function B_HidingProp.B_HidingProp_C.OnRep_ContainsPlayer
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_HidingProp_C::OnRep_ContainsPlayer()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HidingProp.B_HidingProp_C.OnRep_ContainsPlayer");

	AB_HidingProp_C_OnRep_ContainsPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HidingProp.B_HidingProp_C.OnRep_IsTeleporter
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_HidingProp_C::OnRep_IsTeleporter()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HidingProp.B_HidingProp_C.OnRep_IsTeleporter");

	AB_HidingProp_C_OnRep_IsTeleporter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HidingProp.B_HidingProp_C.CheckCanUsePassage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AB_HidingProp_C::CheckCanUsePassage(class UObject* Object)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HidingProp.B_HidingProp_C.CheckCanUsePassage");

	AB_HidingProp_C_CheckCanUsePassage_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function B_HidingProp.B_HidingProp_C.IsInInfiltrationLTM
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AB_HidingProp_C::IsInInfiltrationLTM()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HidingProp.B_HidingProp_C.IsInInfiltrationLTM");

	AB_HidingProp_C_IsInInfiltrationLTM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function B_HidingProp.B_HidingProp_C.OnRep_Teleporting
// (BlueprintCallable, BlueprintEvent)

void AB_HidingProp_C::OnRep_Teleporting()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HidingProp.B_HidingProp_C.OnRep_Teleporting");

	AB_HidingProp_C_OnRep_Teleporting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HidingProp.B_HidingProp_C.BlueprintGetFailedInteractionString
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText AB_HidingProp_C::BlueprintGetFailedInteractionString(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HidingProp.B_HidingProp_C.BlueprintGetFailedInteractionString");

	AB_HidingProp_C_BlueprintGetFailedInteractionString_Params params;
	params.InteractingPawn = InteractingPawn;
	params.InteractionBeingAttempted = InteractionBeingAttempted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function B_HidingProp.B_HidingProp_C.RemoveHiddenPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               FortPawn                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_HidingProp_C::RemoveHiddenPlayer(class AFortPawn* FortPawn)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HidingProp.B_HidingProp_C.RemoveHiddenPlayer");

	AB_HidingProp_C_RemoveHiddenPlayer_Params params;
	params.FortPawn = FortPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HidingProp.B_HidingProp_C.AddHiddenPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               FortPawn                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_HidingProp_C::AddHiddenPlayer(class AFortPawn* FortPawn)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HidingProp.B_HidingProp_C.AddHiddenPlayer");

	AB_HidingProp_C_AddHiddenPlayer_Params params;
	params.FortPawn = FortPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HidingProp.B_HidingProp_C.OnRep_HidingPlayers
// (BlueprintCallable, BlueprintEvent)

void AB_HidingProp_C::OnRep_HidingPlayers()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HidingProp.B_HidingProp_C.OnRep_HidingPlayers");

	AB_HidingProp_C_OnRep_HidingPlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HidingProp.B_HidingProp_C.BlueprintGetInteractionTime
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OutInteractionTime             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AB_HidingProp_C::BlueprintGetInteractionTime(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted, float* OutInteractionTime)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HidingProp.B_HidingProp_C.BlueprintGetInteractionTime");

	AB_HidingProp_C_BlueprintGetInteractionTime_Params params;
	params.InteractingPawn = InteractingPawn;
	params.InteractionBeingAttempted = InteractionBeingAttempted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutInteractionTime != nullptr)
		*OutInteractionTime = params.OutInteractionTime;

	return params.ReturnValue;
}


// Function B_HidingProp.B_HidingProp_C.BlueprintGetInteractionString
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText AB_HidingProp_C::BlueprintGetInteractionString(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HidingProp.B_HidingProp_C.BlueprintGetInteractionString");

	AB_HidingProp_C_BlueprintGetInteractionString_Params params;
	params.InteractingPawn = InteractingPawn;
	params.InteractionBeingAttempted = InteractionBeingAttempted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function B_HidingProp.B_HidingProp_C.BlueprintCanInteract
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETInteractionType> InteractionType                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AB_HidingProp_C::BlueprintCanInteract(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted, TEnumAsByte<ETInteractionType> InteractionType)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HidingProp.B_HidingProp_C.BlueprintCanInteract");

	AB_HidingProp_C_BlueprintCanInteract_Params params;
	params.InteractingPawn = InteractingPawn;
	params.InteractionBeingAttempted = InteractionBeingAttempted;
	params.InteractionType = InteractionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function B_HidingProp.B_HidingProp_C.OnReady_64CBF02E419FF250B433D5B2A6E5D744
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortGameStateAthena*    GameState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortPlaylist*           Playlist                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   PlaylistContextTags            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AB_HidingProp_C::OnReady_64CBF02E419FF250B433D5B2A6E5D744(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HidingProp.B_HidingProp_C.OnReady_64CBF02E419FF250B433D5B2A6E5D744");

	AB_HidingProp_C_OnReady_64CBF02E419FF250B433D5B2A6E5D744_Params params;
	params.GameState = GameState;
	params.Playlist = Playlist;
	params.PlaylistContextTags = PlaylistContextTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HidingProp.B_HidingProp_C.OnCurieActive_F2BFC8C54691C42FB5230BA7B7DEE141
// (BlueprintCallable, BlueprintEvent)

void AB_HidingProp_C::OnCurieActive_F2BFC8C54691C42FB5230BA7B7DEE141()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HidingProp.B_HidingProp_C.OnCurieActive_F2BFC8C54691C42FB5230BA7B7DEE141");

	AB_HidingProp_C_OnCurieActive_F2BFC8C54691C42FB5230BA7B7DEE141_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HidingProp.B_HidingProp_C.BlueprintOnInteract
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_HidingProp_C::BlueprintOnInteract(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HidingProp.B_HidingProp_C.BlueprintOnInteract");

	AB_HidingProp_C_BlueprintOnInteract_Params params;
	params.InteractingPawn = InteractingPawn;
	params.InteractionBeingAttempted = InteractionBeingAttempted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HidingProp.B_HidingProp_C.OnDeathServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                 Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void AB_HidingProp_C::OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HidingProp.B_HidingProp_C.OnDeathServer");

	AB_HidingProp_C_OnDeathServer_Params params;
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


// Function B_HidingProp.B_HidingProp_C.BndEvt__S_Athena_Launchpad_Collision_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_HidingProp_C::BndEvt__S_Athena_Launchpad_Collision_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HidingProp.B_HidingProp_C.BndEvt__S_Athena_Launchpad_Collision_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature");

	AB_HidingProp_C_BndEvt__S_Athena_Launchpad_Collision_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HidingProp.B_HidingProp_C.LandedOnHayStack
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*         PlayerPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Z_Velocity_Mag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_HidingProp_C::LandedOnHayStack(class AFortPlayerPawn* PlayerPawn, float Z_Velocity_Mag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HidingProp.B_HidingProp_C.LandedOnHayStack");

	AB_HidingProp_C_LandedOnHayStack_Params params;
	params.PlayerPawn = PlayerPawn;
	params.Z_Velocity_Mag = Z_Velocity_Mag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HidingProp.B_HidingProp_C.LaunchPlayersOffTop
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*         PlayerPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_HidingProp_C::LaunchPlayersOffTop(class AFortPlayerPawn* PlayerPawn)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HidingProp.B_HidingProp_C.LaunchPlayersOffTop");

	AB_HidingProp_C_LaunchPlayersOffTop_Params params;
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HidingProp.B_HidingProp_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_HidingProp_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HidingProp.B_HidingProp_C.ReceiveActorBeginOverlap");

	AB_HidingProp_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HidingProp.B_HidingProp_C.StopHidingLoop
// (BlueprintCallable, BlueprintEvent)

void AB_HidingProp_C::StopHidingLoop()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HidingProp.B_HidingProp_C.StopHidingLoop");

	AB_HidingProp_C_StopHidingLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HidingProp.B_HidingProp_C.HidingPlayerCountChanged
// (BlueprintCallable, BlueprintEvent)

void AB_HidingProp_C::HidingPlayerCountChanged()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HidingProp.B_HidingProp_C.HidingPlayerCountChanged");

	AB_HidingProp_C_HidingPlayerCountChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HidingProp.B_HidingProp_C.InteractEnter
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AB_HidingProp_C::InteractEnter()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HidingProp.B_HidingProp_C.InteractEnter");

	AB_HidingProp_C_InteractEnter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HidingProp.B_HidingProp_C.EndHidingAnalyticSession
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               FortPawn                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EEnvironmentalItemEndReason    EndReason                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_HidingProp_C::EndHidingAnalyticSession(class AFortPawn* FortPawn, EEnvironmentalItemEndReason EndReason)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HidingProp.B_HidingProp_C.EndHidingAnalyticSession");

	AB_HidingProp_C_EndHidingAnalyticSession_Params params;
	params.FortPawn = FortPawn;
	params.EndReason = EndReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HidingProp.B_HidingProp_C.WatchForPlayerDeath
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               FortPawn                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_HidingProp_C::WatchForPlayerDeath(class AFortPawn* FortPawn)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HidingProp.B_HidingProp_C.WatchForPlayerDeath");

	AB_HidingProp_C_WatchForPlayerDeath_Params params;
	params.FortPawn = FortPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HidingProp.B_HidingProp_C.Pawn Died
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     FHitComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   BoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_HidingProp_C::Pawn_Died(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HidingProp.B_HidingProp_C.Pawn Died");

	AB_HidingProp_C_Pawn_Died_Params params;
	params.DamagedActor = DamagedActor;
	params.Damage = Damage;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.HitLocation = HitLocation;
	params.FHitComponent = FHitComponent;
	params.BoneName = BoneName;
	params.Momentum = Momentum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HidingProp.B_HidingProp_C.StopHiding
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               Pawn                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_HidingProp_C::StopHiding(class AFortPawn* Pawn)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HidingProp.B_HidingProp_C.StopHiding");

	AB_HidingProp_C_StopHiding_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HidingProp.B_HidingProp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_HidingProp_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HidingProp.B_HidingProp_C.ReceiveBeginPlay");

	AB_HidingProp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HidingProp.B_HidingProp_C.Teleport
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_HidingProp_C::Teleport(class AActor* Pawn)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HidingProp.B_HidingProp_C.Teleport");

	AB_HidingProp_C_Teleport_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HidingProp.B_HidingProp_C.IgnorePawnCollision
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InIgnoreDuration               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_HidingProp_C::IgnorePawnCollision(class AFortPawn* Target, float InIgnoreDuration)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HidingProp.B_HidingProp_C.IgnorePawnCollision");

	AB_HidingProp_C_IgnorePawnCollision_Params params;
	params.Target = Target;
	params.InIgnoreDuration = InIgnoreDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HidingProp.B_HidingProp_C.ToggleCameraCollisionForClients
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AB_HidingProp_C::ToggleCameraCollisionForClients()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HidingProp.B_HidingProp_C.ToggleCameraCollisionForClients");

	AB_HidingProp_C_ToggleCameraCollisionForClients_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HidingProp.B_HidingProp_C.StartHiding
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               InteractingPawn                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_HidingProp_C::StartHiding(class AFortPawn* InteractingPawn)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HidingProp.B_HidingProp_C.StartHiding");

	AB_HidingProp_C_StartHiding_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HidingProp.B_HidingProp_C.TurnClientCameraCollisionOn
// (BlueprintCallable, BlueprintEvent)

void AB_HidingProp_C::TurnClientCameraCollisionOn()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HidingProp.B_HidingProp_C.TurnClientCameraCollisionOn");

	AB_HidingProp_C_TurnClientCameraCollisionOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HidingProp.B_HidingProp_C.AddGameplayCue
// (Net, NetReliable, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            GameplayCueTag                 (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayCueParameters  CueParameters                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AB_HidingProp_C::AddGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& CueParameters)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HidingProp.B_HidingProp_C.AddGameplayCue");

	AB_HidingProp_C_AddGameplayCue_Params params;
	params.GameplayCueTag = GameplayCueTag;
	params.CueParameters = CueParameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HidingProp.B_HidingProp_C.RemoveGameplayCue
// (Net, NetReliable, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            GameplayCueTag                 (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayCueParameters  CueParameters                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AB_HidingProp_C::RemoveGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& CueParameters)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HidingProp.B_HidingProp_C.RemoveGameplayCue");

	AB_HidingProp_C_RemoveGameplayCue_Params params;
	params.GameplayCueTag = GameplayCueTag;
	params.CueParameters = CueParameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HidingProp.B_HidingProp_C.ExecuteGameplayCue
// (Net, NetReliable, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            GameplayCueTag                 (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayCueParameters  CueParameters                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AB_HidingProp_C::ExecuteGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& CueParameters)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HidingProp.B_HidingProp_C.ExecuteGameplayCue");

	AB_HidingProp_C_ExecuteGameplayCue_Params params;
	params.GameplayCueTag = GameplayCueTag;
	params.CueParameters = CueParameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HidingProp.B_HidingProp_C.OnMatchStarted
// (Event, Public, BlueprintEvent)

void AB_HidingProp_C::OnMatchStarted()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HidingProp.B_HidingProp_C.OnMatchStarted");

	AB_HidingProp_C_OnMatchStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HidingProp.B_HidingProp_C.ExecuteUbergraph_B_HidingProp
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_HidingProp_C::ExecuteUbergraph_B_HidingProp(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HidingProp.B_HidingProp_C.ExecuteUbergraph_B_HidingProp");

	AB_HidingProp_C_ExecuteUbergraph_B_HidingProp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
