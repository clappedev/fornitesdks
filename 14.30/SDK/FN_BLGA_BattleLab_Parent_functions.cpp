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

// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.OnRep_HeldState
// (BlueprintCallable, BlueprintEvent)

void ABLGA_BattleLab_Parent_C::OnRep_HeldState()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.OnRep_HeldState");

	ABLGA_BattleLab_Parent_C_OnRep_HeldState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.SetBeenThrownPlaced
// (Public, BlueprintCallable, BlueprintEvent)

void ABLGA_BattleLab_Parent_C::SetBeenThrownPlaced()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.SetBeenThrownPlaced");

	ABLGA_BattleLab_Parent_C_SetBeenThrownPlaced_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.GetCanFirstInteract
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn*               InteractingPawn                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABLGA_BattleLab_Parent_C::GetCanFirstInteract(class AFortPawn* InteractingPawn, bool* Return)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.GetCanFirstInteract");

	ABLGA_BattleLab_Parent_C_GetCanFirstInteract_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.OnRep_AttachTransform
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ABLGA_BattleLab_Parent_C::OnRep_AttachTransform()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.OnRep_AttachTransform");

	ABLGA_BattleLab_Parent_C_OnRep_AttachTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.SetAttachDefaultTransform
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABLGA_BattleLab_Parent_C::SetAttachDefaultTransform()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.SetAttachDefaultTransform");

	ABLGA_BattleLab_Parent_C_SetAttachDefaultTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.GetAttachComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USceneComponent*         Component                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABLGA_BattleLab_Parent_C::GetAttachComponent(class USceneComponent** Component)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.GetAttachComponent");

	ABLGA_BattleLab_Parent_C_GetAttachComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Component != nullptr)
		*Component = params.Component;
}


// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.FindAttachAngle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 HitLoc                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABLGA_BattleLab_Parent_C::FindAttachAngle(const struct FVector& HitLoc)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.FindAttachAngle");

	ABLGA_BattleLab_Parent_C_FindAttachAngle_Params params;
	params.HitLoc = HitLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.BlueprintGetInteractionTime
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OutInteractionTime             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABLGA_BattleLab_Parent_C::BlueprintGetInteractionTime(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted, float* OutInteractionTime)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.BlueprintGetInteractionTime");

	ABLGA_BattleLab_Parent_C_BlueprintGetInteractionTime_Params params;
	params.InteractingPawn = InteractingPawn;
	params.InteractionBeingAttempted = InteractionBeingAttempted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutInteractionTime != nullptr)
		*OutInteractionTime = params.OutInteractionTime;

	return params.ReturnValue;
}


// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.BlueprintGetInteractionString
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ABLGA_BattleLab_Parent_C::BlueprintGetInteractionString(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.BlueprintGetInteractionString");

	ABLGA_BattleLab_Parent_C_BlueprintGetInteractionString_Params params;
	params.InteractingPawn = InteractingPawn;
	params.InteractionBeingAttempted = InteractionBeingAttempted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.ShouldDie
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             EventInstigator                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABLGA_BattleLab_Parent_C::ShouldDie(float Damage, class AController* EventInstigator, class AActor* DamageCauser)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.ShouldDie");

	ABLGA_BattleLab_Parent_C_ShouldDie_Params params;
	params.Damage = Damage;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.OnRep_RepHideActor
// (BlueprintCallable, BlueprintEvent)

void ABLGA_BattleLab_Parent_C::OnRep_RepHideActor()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.OnRep_RepHideActor");

	ABLGA_BattleLab_Parent_C_OnRep_RepHideActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.OnRep_RepStartMoving
// (BlueprintCallable, BlueprintEvent)

void ABLGA_BattleLab_Parent_C::OnRep_RepStartMoving()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.OnRep_RepStartMoving");

	ABLGA_BattleLab_Parent_C_OnRep_RepStartMoving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.BlueprintCanInteract
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETInteractionType> InteractionType                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABLGA_BattleLab_Parent_C::BlueprintCanInteract(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted, TEnumAsByte<ETInteractionType> InteractionType)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.BlueprintCanInteract");

	ABLGA_BattleLab_Parent_C_BlueprintCanInteract_Params params;
	params.InteractingPawn = InteractingPawn;
	params.InteractionBeingAttempted = InteractionBeingAttempted;
	params.InteractionType = InteractionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_2_OnHeldObjectThrown__DelegateSignature
// (BlueprintEvent)

void ABLGA_BattleLab_Parent_C::BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_2_OnHeldObjectThrown__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_2_OnHeldObjectThrown__DelegateSignature");

	ABLGA_BattleLab_Parent_C_BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_2_OnHeldObjectThrown__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_3_WaterInteractionOnEnterWater__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AFortWaterBodyActor*     WaterBody                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortWaterInteractionComponent* WaterInteractionComponent      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bIsFirstBody                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABLGA_BattleLab_Parent_C::BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_3_WaterInteractionOnEnterWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_3_WaterInteractionOnEnterWater__DelegateSignature");

	ABLGA_BattleLab_Parent_C_BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_3_WaterInteractionOnEnterWater__DelegateSignature_Params params;
	params.WaterBody = WaterBody;
	params.WaterInteractionComponent = WaterInteractionComponent;
	params.bIsFirstBody = bIsFirstBody;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.OnDeathServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                 Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ABLGA_BattleLab_Parent_C::OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.OnDeathServer");

	ABLGA_BattleLab_Parent_C_OnDeathServer_Params params;
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


// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.HideActor
// (BlueprintCallable, BlueprintEvent)

void ABLGA_BattleLab_Parent_C::HideActor()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.HideActor");

	ABLGA_BattleLab_Parent_C_HideActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.PlayGenericDeath
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABLGA_BattleLab_Parent_C::PlayGenericDeath()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.PlayGenericDeath");

	ABLGA_BattleLab_Parent_C_PlayGenericDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.ReceiveHit
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     MyComp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  Other                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bSelfMoved                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABLGA_BattleLab_Parent_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.ReceiveHit");

	ABLGA_BattleLab_Parent_C_ReceiveHit_Params params;
	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ImpactVelocity                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABLGA_BattleLab_Parent_C::BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature");

	ABLGA_BattleLab_Parent_C_BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature_Params params;
	params.ImpactResult = ImpactResult;
	params.ImpactVelocity = ImpactVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature
// (BlueprintEvent)

void ABLGA_BattleLab_Parent_C::BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature");

	ABLGA_BattleLab_Parent_C_BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.BlueprintOnInteract
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABLGA_BattleLab_Parent_C::BlueprintOnInteract(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.BlueprintOnInteract");

	ABLGA_BattleLab_Parent_C_BlueprintOnInteract_Params params;
	params.InteractingPawn = InteractingPawn;
	params.InteractionBeingAttempted = InteractionBeingAttempted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileStopDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABLGA_BattleLab_Parent_C::BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileStopDelegate__DelegateSignature");

	ABLGA_BattleLab_Parent_C_BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileStopDelegate__DelegateSignature_Params params;
	params.ImpactResult = ImpactResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.AttachSetup
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 HitNormal                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABLGA_BattleLab_Parent_C::AttachSetup(const struct FVector& Location, const struct FVector& HitNormal, bool NewParam)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.AttachSetup");

	ABLGA_BattleLab_Parent_C_AttachSetup_Params params;
	params.Location = Location;
	params.HitNormal = HitNormal;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_6_OnHeldObjectPickedUp__DelegateSignature
// (BlueprintEvent)

void ABLGA_BattleLab_Parent_C::BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_6_OnHeldObjectPickedUp__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_6_OnHeldObjectPickedUp__DelegateSignature");

	ABLGA_BattleLab_Parent_C_BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_6_OnHeldObjectPickedUp__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABLGA_BattleLab_Parent_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.ReceiveBeginPlay");

	ABLGA_BattleLab_Parent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.ResetRelativeTransformOnAttach
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABLGA_BattleLab_Parent_C::ResetRelativeTransformOnAttach()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.ResetRelativeTransformOnAttach");

	ABLGA_BattleLab_Parent_C_ResetRelativeTransformOnAttach_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.OnFirstInteract
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               Interacting_Pawn               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABLGA_BattleLab_Parent_C::OnFirstInteract(class AFortPawn* Interacting_Pawn)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.OnFirstInteract");

	ABLGA_BattleLab_Parent_C_OnFirstInteract_Params params;
	params.Interacting_Pawn = Interacting_Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_5_OnHeldObjectPlaced__DelegateSignature
// (BlueprintEvent)

void ABLGA_BattleLab_Parent_C::BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_5_OnHeldObjectPlaced__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_5_OnHeldObjectPlaced__DelegateSignature");

	ABLGA_BattleLab_Parent_C_BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_5_OnHeldObjectPlaced__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.OnSecondInteract
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               InteractingPawn                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABLGA_BattleLab_Parent_C::OnSecondInteract(class AFortPawn* InteractingPawn)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.OnSecondInteract");

	ABLGA_BattleLab_Parent_C_OnSecondInteract_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABLGA_BattleLab_Parent_C::ReceiveDestroyed()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.ReceiveDestroyed");

	ABLGA_BattleLab_Parent_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_7_OnProjectileVelocityReplicated__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector                 ReplicatedVelocity             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABLGA_BattleLab_Parent_C::BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_7_OnProjectileVelocityReplicated__DelegateSignature(const struct FVector& ReplicatedVelocity)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_7_OnProjectileVelocityReplicated__DelegateSignature");

	ABLGA_BattleLab_Parent_C_BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_7_OnProjectileVelocityReplicated__DelegateSignature_Params params;
	params.ReplicatedVelocity = ReplicatedVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.OnBaseDeviceStartedMoving
// (BlueprintCallable, BlueprintEvent)

void ABLGA_BattleLab_Parent_C::OnBaseDeviceStartedMoving()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.OnBaseDeviceStartedMoving");

	ABLGA_BattleLab_Parent_C_OnBaseDeviceStartedMoving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_8_OnHeldObjectDropped__DelegateSignature
// (BlueprintEvent)

void ABLGA_BattleLab_Parent_C::BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_8_OnHeldObjectDropped__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_8_OnHeldObjectDropped__DelegateSignature");

	ABLGA_BattleLab_Parent_C_BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_8_OnHeldObjectDropped__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.OnHeldObjectStateChangedClient
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EBL_HeldState>     HeldState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABLGA_BattleLab_Parent_C::OnHeldObjectStateChangedClient(TEnumAsByte<EBL_HeldState> HeldState)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.OnHeldObjectStateChangedClient");

	ABLGA_BattleLab_Parent_C_OnHeldObjectStateChangedClient_Params params;
	params.HeldState = HeldState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.ExecuteUbergraph_BLGA_BattleLab_Parent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABLGA_BattleLab_Parent_C::ExecuteUbergraph_BLGA_BattleLab_Parent(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.ExecuteUbergraph_BLGA_BattleLab_Parent");

	ABLGA_BattleLab_Parent_C_ExecuteUbergraph_BLGA_BattleLab_Parent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.OnStartedMoving__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABLGA_BattleLab_Parent_C::OnStartedMoving__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.OnStartedMoving__DelegateSignature");

	ABLGA_BattleLab_Parent_C_OnStartedMoving__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
