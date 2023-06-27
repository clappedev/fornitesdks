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

// Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.ClearOnly
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         ClearedGridCells               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           DestroyFloorsQuickly           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Athena_SuperTowerGrenade_C::ClearOnly(bool DestroyFloorsQuickly, TArray<struct FVector>* ClearedGridCells)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.ClearOnly");

	AB_Prj_Athena_SuperTowerGrenade_C_ClearOnly_Params params;
	params.DestroyFloorsQuickly = DestroyFloorsQuickly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClearedGridCells != nullptr)
		*ClearedGridCells = params.ClearedGridCells;
}


// Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.CallDynamicBuilder
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Athena_SuperTowerGrenade_C::CallDynamicBuilder(class AActor* Class, const struct FVector& Location)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.CallDynamicBuilder");

	AB_Prj_Athena_SuperTowerGrenade_C_CallDynamicBuilder_Params params;
	params.Class = Class;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.CalculateCardinalDirection
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_SuperTowerGrenade_C::CalculateCardinalDirection()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.CalculateCardinalDirection");

	AB_Prj_Athena_SuperTowerGrenade_C_CalculateCardinalDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.HandleProps
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AB_Prj_Athena_SuperTowerGrenade_C::HandleProps(TArray<class AActor*>* Array)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.HandleProps");

	AB_Prj_Athena_SuperTowerGrenade_C_HandleProps_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.SpawnTires
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ReferenceLocation              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Athena_SuperTowerGrenade_C::SpawnTires(const struct FVector& ReferenceLocation)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.SpawnTires");

	AB_Prj_Athena_SuperTowerGrenade_C_SpawnTires_Params params;
	params.ReferenceLocation = ReferenceLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.ClearAndBuild
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         ClearedGridCells               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class AActor*>          BGAClassArray                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FVector>         BGALocationArray               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FRotator>        BGARotationArray               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           DestroyFloorsQuickly           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Athena_SuperTowerGrenade_C::ClearAndBuild(TArray<class AActor*> BGAClassArray, bool DestroyFloorsQuickly, TArray<struct FVector>* ClearedGridCells, TArray<struct FVector>* BGALocationArray, TArray<struct FRotator>* BGARotationArray)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.ClearAndBuild");

	AB_Prj_Athena_SuperTowerGrenade_C_ClearAndBuild_Params params;
	params.BGAClassArray = BGAClassArray;
	params.DestroyFloorsQuickly = DestroyFloorsQuickly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClearedGridCells != nullptr)
		*ClearedGridCells = params.ClearedGridCells;
	if (BGALocationArray != nullptr)
		*BGALocationArray = params.BGALocationArray;
	if (BGARotationArray != nullptr)
		*BGARotationArray = params.BGARotationArray;
}


// Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.CreateBaseSection
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ReferenceLocation              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          BGAClassArray                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FVector>         BGALocationArray               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FRotator>        BGARotationArray               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AB_Prj_Athena_SuperTowerGrenade_C::CreateBaseSection(const struct FVector& ReferenceLocation, TArray<class AActor*> BGAClassArray, TArray<struct FVector>* BGALocationArray, TArray<struct FRotator>* BGARotationArray)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.CreateBaseSection");

	AB_Prj_Athena_SuperTowerGrenade_C_CreateBaseSection_Params params;
	params.ReferenceLocation = ReferenceLocation;
	params.BGAClassArray = BGAClassArray;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BGALocationArray != nullptr)
		*BGALocationArray = params.BGALocationArray;
	if (BGARotationArray != nullptr)
		*BGARotationArray = params.BGARotationArray;
}


// Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.SetBaseDestination
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_Prj_Athena_SuperTowerGrenade_C::SetBaseDestination(const struct FHitResult& Hit)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.SetBaseDestination");

	AB_Prj_Athena_SuperTowerGrenade_C_SetBaseDestination_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_SuperTowerGrenade_C::UserConstructionScript()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.UserConstructionScript");

	AB_Prj_Athena_SuperTowerGrenade_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.OnStop
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_Prj_Athena_SuperTowerGrenade_C::OnStop(const struct FHitResult& Hit)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.OnStop");

	AB_Prj_Athena_SuperTowerGrenade_C_OnStop_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.OnExploded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          HitActors                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FHitResult>      HitResults                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AB_Prj_Athena_SuperTowerGrenade_C::OnExploded(TArray<class AActor*> HitActors, TArray<struct FHitResult> HitResults)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.OnExploded");

	AB_Prj_Athena_SuperTowerGrenade_C_OnExploded_Params params;
	params.HitActors = HitActors;
	params.HitResults = HitResults;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.ReceiveHit
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

void AB_Prj_Athena_SuperTowerGrenade_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.ReceiveHit");

	AB_Prj_Athena_SuperTowerGrenade_C_ReceiveHit_Params params;
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


// Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Prj_Athena_SuperTowerGrenade_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.ReceiveBeginPlay");

	AB_Prj_Athena_SuperTowerGrenade_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.Handle Bounce
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Hit_Location                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Athena_SuperTowerGrenade_C::Handle_Bounce(const struct FVector& Hit_Location)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.Handle Bounce");

	AB_Prj_Athena_SuperTowerGrenade_C_Handle_Bounce_Params params;
	params.Hit_Location = Hit_Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.Delete another actor
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_SuperTowerGrenade_C::Delete_another_actor()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.Delete another actor");

	AB_Prj_Athena_SuperTowerGrenade_C_Delete_another_actor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Athena_SuperTowerGrenade_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.ReceiveEndPlay");

	AB_Prj_Athena_SuperTowerGrenade_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.ExecuteUbergraph_B_Prj_Athena_SuperTowerGrenade
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Athena_SuperTowerGrenade_C::ExecuteUbergraph_B_Prj_Athena_SuperTowerGrenade(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.ExecuteUbergraph_B_Prj_Athena_SuperTowerGrenade");

	AB_Prj_Athena_SuperTowerGrenade_C_ExecuteUbergraph_B_Prj_Athena_SuperTowerGrenade_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
