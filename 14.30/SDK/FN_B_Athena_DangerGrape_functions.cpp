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

// Function B_Athena_DangerGrape.B_Athena_DangerGrape_C.RemoveDecoy
// (BlueprintCallable, BlueprintEvent)

void AB_Athena_DangerGrape_C::RemoveDecoy()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Athena_DangerGrape.B_Athena_DangerGrape_C.RemoveDecoy");

	AB_Athena_DangerGrape_C_RemoveDecoy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_DangerGrape.B_Athena_DangerGrape_C.UpdateLeashLocation
// (BlueprintCallable, BlueprintEvent)

void AB_Athena_DangerGrape_C::UpdateLeashLocation()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Athena_DangerGrape.B_Athena_DangerGrape_C.UpdateLeashLocation");

	AB_Athena_DangerGrape_C_UpdateLeashLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_DangerGrape.B_Athena_DangerGrape_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Athena_DangerGrape_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Athena_DangerGrape.B_Athena_DangerGrape_C.ReceiveBeginPlay");

	AB_Athena_DangerGrape_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_DangerGrape.B_Athena_DangerGrape_C.PawnDied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DeadActor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFortPawn*               InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Athena_DangerGrape_C::PawnDied(class AActor* DeadActor, float Damage, class AFortPawn* InstigatedBy, const struct FVector& HitLocation, class AActor* DamageCauser)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Athena_DangerGrape.B_Athena_DangerGrape_C.PawnDied");

	AB_Athena_DangerGrape_C_PawnDied_Params params;
	params.DeadActor = DeadActor;
	params.Damage = Damage;
	params.InstigatedBy = InstigatedBy;
	params.HitLocation = HitLocation;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Athena_DangerGrape.B_Athena_DangerGrape_C.PawnDamaged
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

void AB_Athena_DangerGrape_C::PawnDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Athena_DangerGrape.B_Athena_DangerGrape_C.PawnDamaged");

	AB_Athena_DangerGrape_C_PawnDamaged_Params params;
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


// Function B_Athena_DangerGrape.B_Athena_DangerGrape_C.ExecuteUbergraph_B_Athena_DangerGrape
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Athena_DangerGrape_C::ExecuteUbergraph_B_Athena_DangerGrape(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Athena_DangerGrape.B_Athena_DangerGrape_C.ExecuteUbergraph_B_Athena_DangerGrape");

	AB_Athena_DangerGrape_C_ExecuteUbergraph_B_Athena_DangerGrape_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
