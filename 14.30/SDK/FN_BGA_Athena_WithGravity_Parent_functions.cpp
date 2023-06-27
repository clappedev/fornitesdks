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

// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 GravHitNormal                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_Athena_WithGravity_Parent_C::Init(const struct FVector& GravHitNormal)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.Init");

	ABGA_Athena_WithGravity_Parent_C_Init_Params params;
	params.GravHitNormal = GravHitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.OnAttach
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  AttachedActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_Athena_WithGravity_Parent_C::OnAttach(class AActor* AttachedActor)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.OnAttach");

	ABGA_Athena_WithGravity_Parent_C_OnAttach_Params params;
	params.AttachedActor = AttachedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.RestartSimulation
// (Public, BlueprintCallable, BlueprintEvent)

void ABGA_Athena_WithGravity_Parent_C::RestartSimulation()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.RestartSimulation");

	ABGA_Athena_WithGravity_Parent_C_RestartSimulation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.AttachToBindedActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     AttachComp                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABGA_Athena_WithGravity_Parent_C::AttachToBindedActor(class UPrimitiveComponent* AttachComp)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.AttachToBindedActor");

	ABGA_Athena_WithGravity_Parent_C_AttachToBindedActor_Params params;
	params.AttachComp = AttachComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.BounceBGA
// (Public, BlueprintCallable, BlueprintEvent)

void ABGA_Athena_WithGravity_Parent_C::BounceBGA()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.BounceBGA");

	ABGA_Athena_WithGravity_Parent_C_BounceBGA_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.CheckForSameClassToBounce
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HitSameClass                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABGA_Athena_WithGravity_Parent_C::CheckForSameClassToBounce(class AActor* Hit, bool* HitSameClass)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.CheckForSameClassToBounce");

	ABGA_Athena_WithGravity_Parent_C_CheckForSameClassToBounce_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitSameClass != nullptr)
		*HitSameClass = params.HitSameClass;
}


// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.OnRep_RepCollision
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_WithGravity_Parent_C::OnRep_RepCollision()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.OnRep_RepCollision");

	ABGA_Athena_WithGravity_Parent_C_OnRep_RepCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.ForceBounceBGA
// (Public, BlueprintCallable, BlueprintEvent)

void ABGA_Athena_WithGravity_Parent_C::ForceBounceBGA()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.ForceBounceBGA");

	ABGA_Athena_WithGravity_Parent_C_ForceBounceBGA_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.OnRep_bResumeSimulation
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_WithGravity_Parent_C::OnRep_bResumeSimulation()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.OnRep_bResumeSimulation");

	ABGA_Athena_WithGravity_Parent_C_OnRep_bResumeSimulation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.BaseDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_Athena_WithGravity_Parent_C::BaseDestroyed(class AActor* DestroyedActor)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.BaseDestroyed");

	ABGA_Athena_WithGravity_Parent_C_BaseDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.HandleBinding
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     HitComp                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABGA_Athena_WithGravity_Parent_C::HandleBinding(class AActor* Actor, class UPrimitiveComponent* HitComp)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.HandleBinding");

	ABGA_Athena_WithGravity_Parent_C_HandleBinding_Params params;
	params.Actor = Actor;
	params.HitComp = HitComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.ReceiveHit
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

void ABGA_Athena_WithGravity_Parent_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.ReceiveHit");

	ABGA_Athena_WithGravity_Parent_C_ReceiveHit_Params params;
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


// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.BaseDied
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

void ABGA_Athena_WithGravity_Parent_C::BaseDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.BaseDied");

	ABGA_Athena_WithGravity_Parent_C_BaseDied_Params params;
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


// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.StopSim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABGA_Athena_WithGravity_Parent_C::StopSim(const struct FHitResult& Hit)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.StopSim");

	ABGA_Athena_WithGravity_Parent_C_StopSim_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABGA_Athena_WithGravity_Parent_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.ReceiveBeginPlay");

	ABGA_Athena_WithGravity_Parent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.Impulse
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DelayBeforeImpulse             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DelayBeforeCollision           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ImpulseOrigin                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ImpulseAmount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SetCollisionAfterImpulse       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_Athena_WithGravity_Parent_C::Impulse(float DelayBeforeImpulse, float DelayBeforeCollision, const struct FVector& ImpulseOrigin, const struct FVector& ImpulseAmount, bool SetCollisionAfterImpulse)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.Impulse");

	ABGA_Athena_WithGravity_Parent_C_Impulse_Params params;
	params.DelayBeforeImpulse = DelayBeforeImpulse;
	params.DelayBeforeCollision = DelayBeforeCollision;
	params.ImpulseOrigin = ImpulseOrigin;
	params.ImpulseAmount = ImpulseAmount;
	params.SetCollisionAfterImpulse = SetCollisionAfterImpulse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.PlayHitFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABGA_Athena_WithGravity_Parent_C::PlayHitFX()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.PlayHitFX");

	ABGA_Athena_WithGravity_Parent_C_PlayHitFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.SpawnFXSounds
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_WithGravity_Parent_C::SpawnFXSounds()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.SpawnFXSounds");

	ABGA_Athena_WithGravity_Parent_C_SpawnFXSounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.AttachedWasDestroyed
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_WithGravity_Parent_C::AttachedWasDestroyed()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.AttachedWasDestroyed");

	ABGA_Athena_WithGravity_Parent_C_AttachedWasDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.SlidingDoorOpened
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_WithGravity_Parent_C::SlidingDoorOpened()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.SlidingDoorOpened");

	ABGA_Athena_WithGravity_Parent_C_SlidingDoorOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.ExecuteUbergraph_BGA_Athena_WithGravity_Parent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_Athena_WithGravity_Parent_C::ExecuteUbergraph_BGA_Athena_WithGravity_Parent(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.ExecuteUbergraph_BGA_Athena_WithGravity_Parent");

	ABGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
