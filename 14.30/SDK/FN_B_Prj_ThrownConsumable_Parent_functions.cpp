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

// Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.ResetSimulatedComponents
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_ThrownConsumable_Parent_C::ResetSimulatedComponents()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.ResetSimulatedComponents");

	AB_Prj_ThrownConsumable_Parent_C_ResetSimulatedComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.OnRep_bSimulationRunning
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_ThrownConsumable_Parent_C::OnRep_bSimulationRunning()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.OnRep_bSimulationRunning");

	AB_Prj_ThrownConsumable_Parent_C_OnRep_bSimulationRunning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.SetBounceVelocityPawn
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_ThrownConsumable_Parent_C::SetBounceVelocityPawn()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.SetBounceVelocityPawn");

	AB_Prj_ThrownConsumable_Parent_C_SetBounceVelocityPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.SetBounceVelocity
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_ThrownConsumable_Parent_C::SetBounceVelocity()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.SetBounceVelocity");

	AB_Prj_ThrownConsumable_Parent_C_SetBounceVelocity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.FuseEnded
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_ThrownConsumable_Parent_C::FuseEnded()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.FuseEnded");

	AB_Prj_ThrownConsumable_Parent_C_FuseEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_ThrownConsumable_Parent_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.ReceiveAnyDamage");

	AB_Prj_ThrownConsumable_Parent_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_Prj_ThrownConsumable_Parent_C::BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AB_Prj_ThrownConsumable_Parent_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_Prj_ThrownConsumable_Parent_C::BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature");

	AB_Prj_ThrownConsumable_Parent_C_BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature_Params params;
	params.ImpactResult = ImpactResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.Event_BuildingActorDied
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

void AB_Prj_ThrownConsumable_Parent_C::Event_BuildingActorDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.Event_BuildingActorDied");

	AB_Prj_ThrownConsumable_Parent_C_Event_BuildingActorDied_Params params;
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


// Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.Event_OnVehicleDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_ThrownConsumable_Parent_C::Event_OnVehicleDestroyed(class AActor* DestroyedActor)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.Event_OnVehicleDestroyed");

	AB_Prj_ThrownConsumable_Parent_C_Event_OnVehicleDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.RestartSimulating
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_ThrownConsumable_Parent_C::RestartSimulating()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.RestartSimulating");

	AB_Prj_ThrownConsumable_Parent_C_RestartSimulating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.OnBounce
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_Prj_ThrownConsumable_Parent_C::OnBounce(const struct FHitResult& Hit)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.OnBounce");

	AB_Prj_ThrownConsumable_Parent_C_OnBounce_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.OnExploded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          HitActors                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FHitResult>      HitResults                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AB_Prj_ThrownConsumable_Parent_C::OnExploded(TArray<class AActor*> HitActors, TArray<struct FHitResult> HitResults)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.OnExploded");

	AB_Prj_ThrownConsumable_Parent_C_OnExploded_Params params;
	params.HitActors = HitActors;
	params.HitResults = HitResults;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Prj_ThrownConsumable_Parent_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.ReceiveBeginPlay");

	AB_Prj_ThrownConsumable_Parent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.ExecuteUbergraph_B_Prj_ThrownConsumable_Parent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_ThrownConsumable_Parent_C::ExecuteUbergraph_B_Prj_ThrownConsumable_Parent(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.ExecuteUbergraph_B_Prj_ThrownConsumable_Parent");

	AB_Prj_ThrownConsumable_Parent_C_ExecuteUbergraph_B_Prj_ThrownConsumable_Parent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
