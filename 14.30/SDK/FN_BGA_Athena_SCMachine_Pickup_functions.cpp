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

// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.OnRep_HideAndKill
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_SCMachine_Pickup_C::OnRep_HideAndKill()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.OnRep_HideAndKill");

	ABGA_Athena_SCMachine_Pickup_C_OnRep_HideAndKill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.ConsiderPositionCorrection
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABGA_Athena_SCMachine_Pickup_C::ConsiderPositionCorrection()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.ConsiderPositionCorrection");

	ABGA_Athena_SCMachine_Pickup_C_ConsiderPositionCorrection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.DetermineStopLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABGA_Athena_SCMachine_Pickup_C::DetermineStopLocation()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.DetermineStopLocation");

	ABGA_Athena_SCMachine_Pickup_C_DetermineStopLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.ShouldDie
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             EventInstigator                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABGA_Athena_SCMachine_Pickup_C::ShouldDie(float Damage, class AController* EventInstigator, class AActor* DamageCauser)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.ShouldDie");

	ABGA_Athena_SCMachine_Pickup_C_ShouldDie_Params params;
	params.Damage = Damage;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.BlueprintGetInteractionString
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ABGA_Athena_SCMachine_Pickup_C::BlueprintGetInteractionString(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.BlueprintGetInteractionString");

	ABGA_Athena_SCMachine_Pickup_C_BlueprintGetInteractionString_Params params;
	params.InteractingPawn = InteractingPawn;
	params.InteractionBeingAttempted = InteractionBeingAttempted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.BlueprintCanInteract
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETInteractionType> InteractionType                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABGA_Athena_SCMachine_Pickup_C::BlueprintCanInteract(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted, TEnumAsByte<ETInteractionType> InteractionType)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.BlueprintCanInteract");

	ABGA_Athena_SCMachine_Pickup_C_BlueprintCanInteract_Params params;
	params.InteractingPawn = InteractingPawn;
	params.InteractionBeingAttempted = InteractionBeingAttempted;
	params.InteractionType = InteractionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.OnRep_UnHide
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ABGA_Athena_SCMachine_Pickup_C::OnRep_UnHide()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.OnRep_UnHide");

	ABGA_Athena_SCMachine_Pickup_C_OnRep_UnHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABGA_Athena_SCMachine_Pickup_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.ReceiveBeginPlay");

	ABGA_Athena_SCMachine_Pickup_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.DestroyPickup
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_SCMachine_Pickup_C::DestroyPickup()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.DestroyPickup");

	ABGA_Athena_SCMachine_Pickup_C_DestroyPickup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.BlueprintOnInteract
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_Athena_SCMachine_Pickup_C::BlueprintOnInteract(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.BlueprintOnInteract");

	ABGA_Athena_SCMachine_Pickup_C_BlueprintOnInteract_Params params;
	params.InteractingPawn = InteractingPawn;
	params.InteractionBeingAttempted = InteractionBeingAttempted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.CollectPickup
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABGA_Athena_SCMachine_Pickup_C::CollectPickup()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.CollectPickup");

	ABGA_Athena_SCMachine_Pickup_C_CollectPickup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.OnDestroyPickup
// (Event, Protected, BlueprintEvent)

void ABGA_Athena_SCMachine_Pickup_C::OnDestroyPickup()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.OnDestroyPickup");

	ABGA_Athena_SCMachine_Pickup_C_OnDestroyPickup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.SpawnSound
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_SCMachine_Pickup_C::SpawnSound()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.SpawnSound");

	ABGA_Athena_SCMachine_Pickup_C_SpawnSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.OnDeathServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                 Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ABGA_Athena_SCMachine_Pickup_C::OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.OnDeathServer");

	ABGA_Athena_SCMachine_Pickup_C_OnDeathServer_Params params;
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


// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.HideAndKillPickup
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_SCMachine_Pickup_C::HideAndKillPickup()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.HideAndKillPickup");

	ABGA_Athena_SCMachine_Pickup_C_HideAndKillPickup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.ExecuteUbergraph_BGA_Athena_SCMachine_Pickup
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_Athena_SCMachine_Pickup_C::ExecuteUbergraph_BGA_Athena_SCMachine_Pickup(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.ExecuteUbergraph_BGA_Athena_SCMachine_Pickup");

	ABGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
