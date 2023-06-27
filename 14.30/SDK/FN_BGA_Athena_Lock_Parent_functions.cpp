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

// Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.Lock Set Interact Collision
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           On                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_Athena_Lock_Parent_C::Lock_Set_Interact_Collision(bool On)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.Lock Set Interact Collision");

	ABGA_Athena_Lock_Parent_C_Lock_Set_Interact_Collision_Params params;
	params.On = On;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.ShouldDie
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             EventInstigator                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABGA_Athena_Lock_Parent_C::ShouldDie(float Damage, class AController* EventInstigator, class AActor* DamageCauser)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.ShouldDie");

	ABGA_Athena_Lock_Parent_C_ShouldDie_Params params;
	params.Damage = Damage;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.LockCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CheckPassed                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABGA_Athena_Lock_Parent_C::LockCheck(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted, bool* CheckPassed)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.LockCheck");

	ABGA_Athena_Lock_Parent_C_LockCheck_Params params;
	params.InteractingPawn = InteractingPawn;
	params.InteractionBeingAttempted = InteractionBeingAttempted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CheckPassed != nullptr)
		*CheckPassed = params.CheckPassed;
}


// Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.OnRep_EverInteractSetLock
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_Lock_Parent_C::OnRep_EverInteractSetLock()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.OnRep_EverInteractSetLock");

	ABGA_Athena_Lock_Parent_C_OnRep_EverInteractSetLock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.OnRep_LockState
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_Lock_Parent_C::OnRep_LockState()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.OnRep_LockState");

	ABGA_Athena_Lock_Parent_C_OnRep_LockState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.BlueprintCanInteract
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETInteractionType> InteractionType                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABGA_Athena_Lock_Parent_C::BlueprintCanInteract(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted, TEnumAsByte<ETInteractionType> InteractionType)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.BlueprintCanInteract");

	ABGA_Athena_Lock_Parent_C_BlueprintCanInteract_Params params;
	params.InteractingPawn = InteractingPawn;
	params.InteractionBeingAttempted = InteractionBeingAttempted;
	params.InteractionType = InteractionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.BlueprintGetInteractionTime
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OutInteractionTime             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABGA_Athena_Lock_Parent_C::BlueprintGetInteractionTime(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted, float* OutInteractionTime)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.BlueprintGetInteractionTime");

	ABGA_Athena_Lock_Parent_C_BlueprintGetInteractionTime_Params params;
	params.InteractingPawn = InteractingPawn;
	params.InteractionBeingAttempted = InteractionBeingAttempted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutInteractionTime != nullptr)
		*OutInteractionTime = params.OutInteractionTime;

	return params.ReturnValue;
}


// Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.BlueprintGetInteractionString
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ABGA_Athena_Lock_Parent_C::BlueprintGetInteractionString(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.BlueprintGetInteractionString");

	ABGA_Athena_Lock_Parent_C_BlueprintGetInteractionString_Params params;
	params.InteractingPawn = InteractingPawn;
	params.InteractionBeingAttempted = InteractionBeingAttempted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.OnReady_19560710434050E125B3ADA0163CD609
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortGameStateAthena*    GameState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortPlaylist*           Playlist                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   PlaylistContextTags            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABGA_Athena_Lock_Parent_C::OnReady_19560710434050E125B3ADA0163CD609(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.OnReady_19560710434050E125B3ADA0163CD609");

	ABGA_Athena_Lock_Parent_C_OnReady_19560710434050E125B3ADA0163CD609_Params params;
	params.GameState = GameState;
	params.Playlist = Playlist;
	params.PlaylistContextTags = PlaylistContextTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.OnSecondInteract
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               InteractingPawn                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_Athena_Lock_Parent_C::OnSecondInteract(class AFortPawn* InteractingPawn)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.OnSecondInteract");

	ABGA_Athena_Lock_Parent_C_OnSecondInteract_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.OnFirstInteract
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               InteractingPawn                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_Athena_Lock_Parent_C::OnFirstInteract(class AFortPawn* InteractingPawn)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.OnFirstInteract");

	ABGA_Athena_Lock_Parent_C_OnFirstInteract_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.OnLocked
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_Lock_Parent_C::OnLocked()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.OnLocked");

	ABGA_Athena_Lock_Parent_C_OnLocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.OnUnLocked
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_Lock_Parent_C::OnUnLocked()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.OnUnLocked");

	ABGA_Athena_Lock_Parent_C_OnUnLocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature
// (BlueprintEvent)

void ABGA_Athena_Lock_Parent_C::BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature");

	ABGA_Athena_Lock_Parent_C_BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.HideAndKill
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABGA_Athena_Lock_Parent_C::HideAndKill()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.HideAndKill");

	ABGA_Athena_Lock_Parent_C_HideAndKill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.ApplyFailCheckEffect
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_Lock_Parent_C::ApplyFailCheckEffect()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.ApplyFailCheckEffect");

	ABGA_Athena_Lock_Parent_C_ApplyFailCheckEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.SetLock
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_Athena_Lock>  LockState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_Athena_Lock_Parent_C::SetLock(TEnumAsByte<Enum_Athena_Lock> LockState)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.SetLock");

	ABGA_Athena_Lock_Parent_C_SetLock_Params params;
	params.LockState = LockState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.TimedRelock
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_Lock_Parent_C::TimedRelock()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.TimedRelock");

	ABGA_Athena_Lock_Parent_C_TimedRelock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.BlueprintOnInteract
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_Athena_Lock_Parent_C::BlueprintOnInteract(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.BlueprintOnInteract");

	ABGA_Athena_Lock_Parent_C_BlueprintOnInteract_Params params;
	params.InteractingPawn = InteractingPawn;
	params.InteractionBeingAttempted = InteractionBeingAttempted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABGA_Athena_Lock_Parent_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.ReceiveBeginPlay");

	ABGA_Athena_Lock_Parent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.OpenContainers
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_Lock_Parent_C::OpenContainers()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.OpenContainers");

	ABGA_Athena_Lock_Parent_C_OpenContainers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.LockCloseDoor
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_Lock_Parent_C::LockCloseDoor()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.LockCloseDoor");

	ABGA_Athena_Lock_Parent_C_LockCloseDoor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.UnlockOpenDoor
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_Lock_Parent_C::UnlockOpenDoor()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.UnlockOpenDoor");

	ABGA_Athena_Lock_Parent_C_UnlockOpenDoor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.NotEnabled
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_Lock_Parent_C::NotEnabled()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.NotEnabled");

	ABGA_Athena_Lock_Parent_C_NotEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.ParentActorDied
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

void ABGA_Athena_Lock_Parent_C::ParentActorDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.ParentActorDied");

	ABGA_Athena_Lock_Parent_C_ParentActorDied_Params params;
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


// Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.ExecuteUbergraph_BGA_Athena_Lock_Parent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_Athena_Lock_Parent_C::ExecuteUbergraph_BGA_Athena_Lock_Parent(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.ExecuteUbergraph_BGA_Athena_Lock_Parent");

	ABGA_Athena_Lock_Parent_C_ExecuteUbergraph_BGA_Athena_Lock_Parent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.OnLockedDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABGA_Athena_Lock_Parent_C::OnLockedDispatcher__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.OnLockedDispatcher__DelegateSignature");

	ABGA_Athena_Lock_Parent_C_OnLockedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.OnUnlockedDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABGA_Athena_Lock_Parent_C::OnUnlockedDispatcher__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.OnUnlockedDispatcher__DelegateSignature");

	ABGA_Athena_Lock_Parent_C_OnUnlockedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
