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

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.DisableIfBelowFlood
// (Public, BlueprintCallable, BlueprintEvent)

void AB_BGA_Athena_EnvCampFire_C::DisableIfBelowFlood()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.DisableIfBelowFlood");

	AB_BGA_Athena_EnvCampFire_C_DisableIfBelowFlood_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.ShouldPlayNativeCurieFX
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// EFortCurieNativeFXType         FXType                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FFortNativeCurieFXResponse OutResponse                    (Parm, OutParm)

void AB_BGA_Athena_EnvCampFire_C::ShouldPlayNativeCurieFX(EFortCurieNativeFXType FXType, struct FFortNativeCurieFXResponse* OutResponse)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.ShouldPlayNativeCurieFX");

	AB_BGA_Athena_EnvCampFire_C_ShouldPlayNativeCurieFX_Params params;
	params.FXType = FXType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutResponse != nullptr)
		*OutResponse = params.OutResponse;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.HasInfiniteResources
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APawn*                   Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasInfiniteResources           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AB_BGA_Athena_EnvCampFire_C::HasInfiniteResources(class APawn* Pawn, bool* HasInfiniteResources)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.HasInfiniteResources");

	AB_BGA_Athena_EnvCampFire_C_HasInfiniteResources_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasInfiniteResources != nullptr)
		*HasInfiniteResources = params.HasInfiniteResources;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.OnRep_Stoked
// (BlueprintCallable, BlueprintEvent)

void AB_BGA_Athena_EnvCampFire_C::OnRep_Stoked()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.OnRep_Stoked");

	AB_BGA_Athena_EnvCampFire_C_OnRep_Stoked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.BlueprintGetFailedInteractionString
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText AB_BGA_Athena_EnvCampFire_C::BlueprintGetFailedInteractionString(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.BlueprintGetFailedInteractionString");

	AB_BGA_Athena_EnvCampFire_C_BlueprintGetFailedInteractionString_Params params;
	params.InteractingPawn = InteractingPawn;
	params.InteractionBeingAttempted = InteractionBeingAttempted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.GetCostReActivate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AB_BGA_Athena_EnvCampFire_C::GetCostReActivate()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.GetCostReActivate");

	AB_BGA_Athena_EnvCampFire_C_GetCostReActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.OnRep_LitRepBool
// (BlueprintCallable, BlueprintEvent)

void AB_BGA_Athena_EnvCampFire_C::OnRep_LitRepBool()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.OnRep_LitRepBool");

	AB_BGA_Athena_EnvCampFire_C_OnRep_LitRepBool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.OnRep_Destroyed
// (BlueprintCallable, BlueprintEvent)

void AB_BGA_Athena_EnvCampFire_C::OnRep_Destroyed()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.OnRep_Destroyed");

	AB_BGA_Athena_EnvCampFire_C_OnRep_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.CheckIfUserIsSpecialS7
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               PawnWhoLitFire                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           UserIsSpecial                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AB_BGA_Athena_EnvCampFire_C::CheckIfUserIsSpecialS7(class AFortPawn* PawnWhoLitFire, bool* UserIsSpecial)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.CheckIfUserIsSpecialS7");

	AB_BGA_Athena_EnvCampFire_C_CheckIfUserIsSpecialS7_Params params;
	params.PawnWhoLitFire = PawnWhoLitFire;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UserIsSpecial != nullptr)
		*UserIsSpecial = params.UserIsSpecial;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.RowToBool
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FScalableFloat          Input                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AB_BGA_Athena_EnvCampFire_C::RowToBool(const struct FScalableFloat& Input)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.RowToBool");

	AB_BGA_Athena_EnvCampFire_C_RowToBool_Params params;
	params.Input = Input;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.SetSheetValues
// (Public, BlueprintCallable, BlueprintEvent)

void AB_BGA_Athena_EnvCampFire_C::SetSheetValues()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.SetSheetValues");

	AB_BGA_Athena_EnvCampFire_C_SetSheetValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.BlueprintGetInteractionString
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText AB_BGA_Athena_EnvCampFire_C::BlueprintGetInteractionString(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.BlueprintGetInteractionString");

	AB_BGA_Athena_EnvCampFire_C_BlueprintGetInteractionString_Params params;
	params.InteractingPawn = InteractingPawn;
	params.InteractionBeingAttempted = InteractionBeingAttempted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.BlueprintCanInteract
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETInteractionType> InteractionType                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AB_BGA_Athena_EnvCampFire_C::BlueprintCanInteract(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted, TEnumAsByte<ETInteractionType> InteractionType)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.BlueprintCanInteract");

	AB_BGA_Athena_EnvCampFire_C_BlueprintCanInteract_Params params;
	params.InteractingPawn = InteractingPawn;
	params.InteractionBeingAttempted = InteractionBeingAttempted;
	params.InteractionType = InteractionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.OnReady_9F4554BE40FCB41157835B9AD897EE69
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortGameStateAthena*    GameState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortPlaylist*           Playlist                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   PlaylistContextTags            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AB_BGA_Athena_EnvCampFire_C::OnReady_9F4554BE40FCB41157835B9AD897EE69(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.OnReady_9F4554BE40FCB41157835B9AD897EE69");

	AB_BGA_Athena_EnvCampFire_C_OnReady_9F4554BE40FCB41157835B9AD897EE69_Params params;
	params.GameState = GameState;
	params.Playlist = Playlist;
	params.PlaylistContextTags = PlaylistContextTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.OnCurieActive_A24E3C804D14344FC0E5E0B5CDB4FF55
// (BlueprintCallable, BlueprintEvent)

void AB_BGA_Athena_EnvCampFire_C::OnCurieActive_A24E3C804D14344FC0E5E0B5CDB4FF55()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.OnCurieActive_A24E3C804D14344FC0E5E0B5CDB4FF55");

	AB_BGA_Athena_EnvCampFire_C_OnCurieActive_A24E3C804D14344FC0E5E0B5CDB4FF55_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.BlueprintOnInteract
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_BGA_Athena_EnvCampFire_C::BlueprintOnInteract(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.BlueprintOnInteract");

	AB_BGA_Athena_EnvCampFire_C_BlueprintOnInteract_Params params;
	params.InteractingPawn = InteractingPawn;
	params.InteractionBeingAttempted = InteractionBeingAttempted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.Light
// (BlueprintCallable, BlueprintEvent)

void AB_BGA_Athena_EnvCampFire_C::Light()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.Light");

	AB_BGA_Athena_EnvCampFire_C_Light_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.GoOut
// (BlueprintCallable, BlueprintEvent)

void AB_BGA_Athena_EnvCampFire_C::GoOut()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.GoOut");

	AB_BGA_Athena_EnvCampFire_C_GoOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_BGA_Athena_EnvCampFire_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.ReceiveBeginPlay");

	AB_BGA_Athena_EnvCampFire_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.Start
// (BlueprintCallable, BlueprintEvent)

void AB_BGA_Athena_EnvCampFire_C::Start()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.Start");

	AB_BGA_Athena_EnvCampFire_C_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.BuildingActorDestroyedCleanUp
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

void AB_BGA_Athena_EnvCampFire_C::BuildingActorDestroyedCleanUp(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.BuildingActorDestroyedCleanUp");

	AB_BGA_Athena_EnvCampFire_C_BuildingActorDestroyedCleanUp_Params params;
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


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.BindToFloor
// (BlueprintCallable, BlueprintEvent)

void AB_BGA_Athena_EnvCampFire_C::BindToFloor()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.BindToFloor");

	AB_BGA_Athena_EnvCampFire_C_BindToFloor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.HandleBoundDestroyed
// (BlueprintCallable, BlueprintEvent)

void AB_BGA_Athena_EnvCampFire_C::HandleBoundDestroyed()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.HandleBoundDestroyed");

	AB_BGA_Athena_EnvCampFire_C_HandleBoundDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.CheckDestroyDisabled
// (BlueprintCallable, BlueprintEvent)

void AB_BGA_Athena_EnvCampFire_C::CheckDestroyDisabled()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.CheckDestroyDisabled");

	AB_BGA_Athena_EnvCampFire_C_CheckDestroyDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.SpecialS7LightsFireAfterOut
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AB_BGA_Athena_EnvCampFire_C::SpecialS7LightsFireAfterOut()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.SpecialS7LightsFireAfterOut");

	AB_BGA_Athena_EnvCampFire_C_SpecialS7LightsFireAfterOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.KillDouseSmokeWisp
// (BlueprintCallable, BlueprintEvent)

void AB_BGA_Athena_EnvCampFire_C::KillDouseSmokeWisp()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.KillDouseSmokeWisp");

	AB_BGA_Athena_EnvCampFire_C_KillDouseSmokeWisp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.Server_QuestObjectiveUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*   Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortQuestItemDefinition* QuestDef                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   BackendName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            CompletionCount                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ObjectiveCompleted             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           QuestCompleted                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_BGA_Athena_EnvCampFire_C::Server_QuestObjectiveUpdated(class AFortPlayerController* Controller, class UFortQuestItemDefinition* QuestDef, const struct FName& BackendName, int CompletionCount, bool ObjectiveCompleted, bool QuestCompleted)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.Server_QuestObjectiveUpdated");

	AB_BGA_Athena_EnvCampFire_C_Server_QuestObjectiveUpdated_Params params;
	params.Controller = Controller;
	params.QuestDef = QuestDef;
	params.BackendName = BackendName;
	params.CompletionCount = CompletionCount;
	params.ObjectiveCompleted = ObjectiveCompleted;
	params.QuestCompleted = QuestCompleted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.HandleCharacterVariantTransition
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               TransitioningPawn              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_BGA_Athena_EnvCampFire_C::HandleCharacterVariantTransition(class AFortPawn* TransitioningPawn)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.HandleCharacterVariantTransition");

	AB_BGA_Athena_EnvCampFire_C_HandleCharacterVariantTransition_Params params;
	params.TransitioningPawn = TransitioningPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.PayLightCost
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               InteractingPawn                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_BGA_Athena_EnvCampFire_C::PayLightCost(class AFortPawn* InteractingPawn)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.PayLightCost");

	AB_BGA_Athena_EnvCampFire_C_PayLightCost_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.PayStokeCost
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               InteractingPawn                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_BGA_Athena_EnvCampFire_C::PayStokeCost(class AFortPawn* InteractingPawn)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.PayStokeCost");

	AB_BGA_Athena_EnvCampFire_C_PayStokeCost_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.CheckReplaceCampfire
// (BlueprintCallable, BlueprintEvent)

void AB_BGA_Athena_EnvCampFire_C::CheckReplaceCampfire()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.CheckReplaceCampfire");

	AB_BGA_Athena_EnvCampFire_C_CheckReplaceCampfire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_BGA_Athena_EnvCampFire_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AB_BGA_Athena_EnvCampFire_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_BGA_Athena_EnvCampFire_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	AB_BGA_Athena_EnvCampFire_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.EndFireInteract
// (BlueprintCallable, BlueprintEvent)

void AB_BGA_Athena_EnvCampFire_C::EndFireInteract()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.EndFireInteract");

	AB_BGA_Athena_EnvCampFire_C_EndFireInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.OnCurieElementAttached_BP
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FCurieContainerHandle   CurieContainerHandle           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ElementTag                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AB_BGA_Athena_EnvCampFire_C::OnCurieElementAttached_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& ElementTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.OnCurieElementAttached_BP");

	AB_BGA_Athena_EnvCampFire_C_OnCurieElementAttached_BP_Params params;
	params.CurieContainerHandle = CurieContainerHandle;
	params.ElementTag = ElementTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.OnCurieElementDetached_BP
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FCurieContainerHandle   CurieContainerHandle           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ElementTag                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AB_BGA_Athena_EnvCampFire_C::OnCurieElementDetached_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& ElementTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.OnCurieElementDetached_BP");

	AB_BGA_Athena_EnvCampFire_C_OnCurieElementDetached_BP_Params params;
	params.CurieContainerHandle = CurieContainerHandle;
	params.ElementTag = ElementTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AB_BGA_Athena_EnvCampFire_C::ReceiveDestroyed()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.ReceiveDestroyed");

	AB_BGA_Athena_EnvCampFire_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.CheckInitialOverlappingActors
// (BlueprintCallable, BlueprintEvent)

void AB_BGA_Athena_EnvCampFire_C::CheckInitialOverlappingActors()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.CheckInitialOverlappingActors");

	AB_BGA_Athena_EnvCampFire_C_CheckInitialOverlappingActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.ExecuteUbergraph_B_BGA_Athena_EnvCampFire
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_BGA_Athena_EnvCampFire_C::ExecuteUbergraph_B_BGA_Athena_EnvCampFire(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.ExecuteUbergraph_B_BGA_Athena_EnvCampFire");

	AB_BGA_Athena_EnvCampFire_C_ExecuteUbergraph_B_BGA_Athena_EnvCampFire_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
