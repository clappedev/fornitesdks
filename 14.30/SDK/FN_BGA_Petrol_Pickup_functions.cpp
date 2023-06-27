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

// Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.BlueprintOnLocalInteract
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*         InteractingPawn                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABGA_Petrol_Pickup_C::BlueprintOnLocalInteract(class AFortPlayerPawn* InteractingPawn)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.BlueprintOnLocalInteract");

	ABGA_Petrol_Pickup_C_BlueprintOnLocalInteract_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.CalcVehicleImpulse
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Vehicle                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Magnitude                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Vector                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABGA_Petrol_Pickup_C::CalcVehicleImpulse(class AActor* Vehicle, float Magnitude, struct FVector* Vector)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.CalcVehicleImpulse");

	ABGA_Petrol_Pickup_C_CalcVehicleImpulse_Params params;
	params.Vehicle = Vehicle;
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Vector != nullptr)
		*Vector = params.Vector;
}


// Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.ShouldDie
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             EventInstigator                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABGA_Petrol_Pickup_C::ShouldDie(float Damage, class AController* EventInstigator, class AActor* DamageCauser)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.ShouldDie");

	ABGA_Petrol_Pickup_C_ShouldDie_Params params;
	params.Damage = Damage;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.OnRep_LastHit
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ABGA_Petrol_Pickup_C::OnRep_LastHit()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.OnRep_LastHit");

	ABGA_Petrol_Pickup_C_OnRep_LastHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.OnRep_ShouldExplode
// (BlueprintCallable, BlueprintEvent)

void ABGA_Petrol_Pickup_C::OnRep_ShouldExplode()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.OnRep_ShouldExplode");

	ABGA_Petrol_Pickup_C_OnRep_ShouldExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.BlueprintCanInteract
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETInteractionType> InteractionType                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABGA_Petrol_Pickup_C::BlueprintCanInteract(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted, TEnumAsByte<ETInteractionType> InteractionType)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.BlueprintCanInteract");

	ABGA_Petrol_Pickup_C_BlueprintCanInteract_Params params;
	params.InteractingPawn = InteractingPawn;
	params.InteractionBeingAttempted = InteractionBeingAttempted;
	params.InteractionType = InteractionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.BlueprintGetInteractionString
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ABGA_Petrol_Pickup_C::BlueprintGetInteractionString(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.BlueprintGetInteractionString");

	ABGA_Petrol_Pickup_C_BlueprintGetInteractionString_Params params;
	params.InteractingPawn = InteractingPawn;
	params.InteractionBeingAttempted = InteractionBeingAttempted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.BlueprintGetInteractionTime
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OutInteractionTime             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABGA_Petrol_Pickup_C::BlueprintGetInteractionTime(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted, float* OutInteractionTime)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.BlueprintGetInteractionTime");

	ABGA_Petrol_Pickup_C_BlueprintGetInteractionTime_Params params;
	params.InteractingPawn = InteractingPawn;
	params.InteractionBeingAttempted = InteractionBeingAttempted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutInteractionTime != nullptr)
		*OutInteractionTime = params.OutInteractionTime;

	return params.ReturnValue;
}


// Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.BlueprintOnInteract
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_Petrol_Pickup_C::BlueprintOnInteract(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.BlueprintOnInteract");

	ABGA_Petrol_Pickup_C_BlueprintOnInteract_Params params;
	params.InteractingPawn = InteractingPawn;
	params.InteractionBeingAttempted = InteractionBeingAttempted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABGA_Petrol_Pickup_C::ReceiveDestroyed()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.ReceiveDestroyed");

	ABGA_Petrol_Pickup_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.OnDamageServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                 Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ABGA_Petrol_Pickup_C::OnDamageServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.OnDamageServer");

	ABGA_Petrol_Pickup_C_OnDamageServer_Params params;
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


// Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.SpawnCurieFireballs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               Explodeinstigator              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_Petrol_Pickup_C::SpawnCurieFireballs(class AFortPawn* Explodeinstigator)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.SpawnCurieFireballs");

	ABGA_Petrol_Pickup_C_SpawnCurieFireballs_Params params;
	params.Explodeinstigator = Explodeinstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.OnDeathServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                 Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ABGA_Petrol_Pickup_C::OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.OnDeathServer");

	ABGA_Petrol_Pickup_C_OnDeathServer_Params params;
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


// Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.SetFuseAndDrop
// (BlueprintCallable, BlueprintEvent)

void ABGA_Petrol_Pickup_C::SetFuseAndDrop()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.SetFuseAndDrop");

	ABGA_Petrol_Pickup_C_SetFuseAndDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.SpawnFireBallsExplodeAndDie
// (BlueprintCallable, BlueprintEvent)

void ABGA_Petrol_Pickup_C::SpawnFireBallsExplodeAndDie()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.SpawnFireBallsExplodeAndDie");

	ABGA_Petrol_Pickup_C_SpawnFireBallsExplodeAndDie_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.ExplodeAndDie
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABGA_Petrol_Pickup_C::ExplodeAndDie()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.ExplodeAndDie");

	ABGA_Petrol_Pickup_C_ExplodeAndDie_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.SetHeldItemInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UFortInventoryOwnerInterface> InventoryInterface             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGuid                   Guid                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFortWeapon*             WeaponAttachedTo               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_Petrol_Pickup_C::SetHeldItemInfo(const TScriptInterface<class UFortInventoryOwnerInterface>& InventoryInterface, const struct FGuid& Guid, class AFortWeapon* WeaponAttachedTo)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.SetHeldItemInfo");

	ABGA_Petrol_Pickup_C_SetHeldItemInfo_Params params;
	params.InventoryInterface = InventoryInterface;
	params.Guid = Guid;
	params.WeaponAttachedTo = WeaponAttachedTo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.DropHeldItem
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABGA_Petrol_Pickup_C::DropHeldItem()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.DropHeldItem");

	ABGA_Petrol_Pickup_C_DropHeldItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.HideAndDestroy
// (BlueprintCallable, BlueprintEvent)

void ABGA_Petrol_Pickup_C::HideAndDestroy()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.HideAndDestroy");

	ABGA_Petrol_Pickup_C_HideAndDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.(ServerOnly)HideAndDestroy
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABGA_Petrol_Pickup_C::_ServerOnly_HideAndDestroy()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.(ServerOnly)HideAndDestroy");

	ABGA_Petrol_Pickup_C__ServerOnly_HideAndDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.Refuel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            FuelToAdd                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_Petrol_Pickup_C::Refuel(int FuelToAdd)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.Refuel");

	ABGA_Petrol_Pickup_C_Refuel_Params params;
	params.FuelToAdd = FuelToAdd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABGA_Petrol_Pickup_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.ReceiveBeginPlay");

	ABGA_Petrol_Pickup_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ImpactVelocity                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABGA_Petrol_Pickup_C::BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature");

	ABGA_Petrol_Pickup_C_BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_Params params;
	params.ImpactResult = ImpactResult;
	params.ImpactVelocity = ImpactVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.OnCurieElementInteract_BP
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FCurieContainerHandle   CurieContainerHandle           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ElementTag                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FCurieInteractParamsHandle InteractParamsHandle           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABGA_Petrol_Pickup_C::OnCurieElementInteract_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& ElementTag, const struct FCurieInteractParamsHandle& InteractParamsHandle)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.OnCurieElementInteract_BP");

	ABGA_Petrol_Pickup_C_OnCurieElementInteract_BP_Params params;
	params.CurieContainerHandle = CurieContainerHandle;
	params.ElementTag = ElementTag;
	params.InteractParamsHandle = InteractParamsHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.OnCurieElementInteractBegun_BP
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FCurieContainerHandle   CurieContainerHandle           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ElementTag                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FCurieInteractParamsHandle InteractParamsHandle           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABGA_Petrol_Pickup_C::OnCurieElementInteractBegun_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& ElementTag, const struct FCurieInteractParamsHandle& InteractParamsHandle)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.OnCurieElementInteractBegun_BP");

	ABGA_Petrol_Pickup_C_OnCurieElementInteractBegun_BP_Params params;
	params.CurieContainerHandle = CurieContainerHandle;
	params.ElementTag = ElementTag;
	params.InteractParamsHandle = InteractParamsHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.ExecuteUbergraph_BGA_Petrol_Pickup
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_Petrol_Pickup_C::ExecuteUbergraph_BGA_Petrol_Pickup(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.ExecuteUbergraph_BGA_Petrol_Pickup");

	ABGA_Petrol_Pickup_C_ExecuteUbergraph_BGA_Petrol_Pickup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
