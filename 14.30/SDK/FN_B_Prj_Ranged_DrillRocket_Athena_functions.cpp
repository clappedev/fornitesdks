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

// Function B_Prj_Ranged_DrillRocket_Athena.B_Prj_Ranged_DrillRocket_Athena_C.OnTouched
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FHitResult              HitResult                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bIsOverlap                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Ranged_DrillRocket_Athena_C::OnTouched(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FHitResult& HitResult, bool bIsOverlap)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Ranged_DrillRocket_Athena.B_Prj_Ranged_DrillRocket_Athena_C.OnTouched");

	AB_Prj_Ranged_DrillRocket_Athena_C_OnTouched_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.HitResult = HitResult;
	params.bIsOverlap = bIsOverlap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Ranged_DrillRocket_Athena.B_Prj_Ranged_DrillRocket_Athena_C.ReceiveHit
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

void AB_Prj_Ranged_DrillRocket_Athena_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Ranged_DrillRocket_Athena.B_Prj_Ranged_DrillRocket_Athena_C.ReceiveHit");

	AB_Prj_Ranged_DrillRocket_Athena_C_ReceiveHit_Params params;
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


// Function B_Prj_Ranged_DrillRocket_Athena.B_Prj_Ranged_DrillRocket_Athena_C.Re-Sim
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

void AB_Prj_Ranged_DrillRocket_Athena_C::Re_Sim(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Ranged_DrillRocket_Athena.B_Prj_Ranged_DrillRocket_Athena_C.Re-Sim");

	AB_Prj_Ranged_DrillRocket_Athena_C_Re_Sim_Params params;
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


// Function B_Prj_Ranged_DrillRocket_Athena.B_Prj_Ranged_DrillRocket_Athena_C.DamageTicks
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Ranged_DrillRocket_Athena_C::DamageTicks()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Ranged_DrillRocket_Athena.B_Prj_Ranged_DrillRocket_Athena_C.DamageTicks");

	AB_Prj_Ranged_DrillRocket_Athena_C_DamageTicks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Ranged_DrillRocket_Athena.B_Prj_Ranged_DrillRocket_Athena_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Ranged_DrillRocket_Athena_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Ranged_DrillRocket_Athena.B_Prj_Ranged_DrillRocket_Athena_C.ReceiveTick");

	AB_Prj_Ranged_DrillRocket_Athena_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Ranged_DrillRocket_Athena.B_Prj_Ranged_DrillRocket_Athena_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Prj_Ranged_DrillRocket_Athena_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Ranged_DrillRocket_Athena.B_Prj_Ranged_DrillRocket_Athena_C.ReceiveBeginPlay");

	AB_Prj_Ranged_DrillRocket_Athena_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Ranged_DrillRocket_Athena.B_Prj_Ranged_DrillRocket_Athena_C.Fired Rocket
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Ranged_DrillRocket_Athena_C::Fired_Rocket()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Ranged_DrillRocket_Athena.B_Prj_Ranged_DrillRocket_Athena_C.Fired Rocket");

	AB_Prj_Ranged_DrillRocket_Athena_C_Fired_Rocket_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Ranged_DrillRocket_Athena.B_Prj_Ranged_DrillRocket_Athena_C.DistanceCheck
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Ranged_DrillRocket_Athena_C::DistanceCheck()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Ranged_DrillRocket_Athena.B_Prj_Ranged_DrillRocket_Athena_C.DistanceCheck");

	AB_Prj_Ranged_DrillRocket_Athena_C_DistanceCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Ranged_DrillRocket_Athena.B_Prj_Ranged_DrillRocket_Athena_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AB_Prj_Ranged_DrillRocket_Athena_C::ReceiveDestroyed()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Ranged_DrillRocket_Athena.B_Prj_Ranged_DrillRocket_Athena_C.ReceiveDestroyed");

	AB_Prj_Ranged_DrillRocket_Athena_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Ranged_DrillRocket_Athena.B_Prj_Ranged_DrillRocket_Athena_C.Do Impulse
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Ranged_DrillRocket_Athena_C::Do_Impulse()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Ranged_DrillRocket_Athena.B_Prj_Ranged_DrillRocket_Athena_C.Do Impulse");

	AB_Prj_Ranged_DrillRocket_Athena_C_Do_Impulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Ranged_DrillRocket_Athena.B_Prj_Ranged_DrillRocket_Athena_C.Add Gravity
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Ranged_DrillRocket_Athena_C::Add_Gravity()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Ranged_DrillRocket_Athena.B_Prj_Ranged_DrillRocket_Athena_C.Add Gravity");

	AB_Prj_Ranged_DrillRocket_Athena_C_Add_Gravity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Ranged_DrillRocket_Athena.B_Prj_Ranged_DrillRocket_Athena_C.ExecuteUbergraph_B_Prj_Ranged_DrillRocket_Athena
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Ranged_DrillRocket_Athena_C::ExecuteUbergraph_B_Prj_Ranged_DrillRocket_Athena(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Ranged_DrillRocket_Athena.B_Prj_Ranged_DrillRocket_Athena_C.ExecuteUbergraph_B_Prj_Ranged_DrillRocket_Athena");

	AB_Prj_Ranged_DrillRocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_DrillRocket_Athena_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
