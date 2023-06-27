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

// Function B_Prj_Athena_PlaysetGrenade.B_Prj_Athena_PlaysetGrenade_C.SetPlaysetData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPlaysetItemDefinition* NewPlayset                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Athena_PlaysetGrenade_C::SetPlaysetData(class UFortPlaysetItemDefinition* NewPlayset)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_PlaysetGrenade.B_Prj_Athena_PlaysetGrenade_C.SetPlaysetData");

	AB_Prj_Athena_PlaysetGrenade_C_SetPlaysetData_Params params;
	params.NewPlayset = NewPlayset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_PlaysetGrenade.B_Prj_Athena_PlaysetGrenade_C.CalculateCardinalDirection
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_PlaysetGrenade_C::CalculateCardinalDirection()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_PlaysetGrenade.B_Prj_Athena_PlaysetGrenade_C.CalculateCardinalDirection");

	AB_Prj_Athena_PlaysetGrenade_C_CalculateCardinalDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_PlaysetGrenade.B_Prj_Athena_PlaysetGrenade_C.SetBaseDestination
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_Prj_Athena_PlaysetGrenade_C::SetBaseDestination(const struct FHitResult& Hit)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_PlaysetGrenade.B_Prj_Athena_PlaysetGrenade_C.SetBaseDestination");

	AB_Prj_Athena_PlaysetGrenade_C_SetBaseDestination_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_PlaysetGrenade.B_Prj_Athena_PlaysetGrenade_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_PlaysetGrenade_C::UserConstructionScript()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_PlaysetGrenade.B_Prj_Athena_PlaysetGrenade_C.UserConstructionScript");

	AB_Prj_Athena_PlaysetGrenade_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_PlaysetGrenade.B_Prj_Athena_PlaysetGrenade_C.OnLoaded_3645F4484F4ECED813C69D92F55C7A1F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Athena_PlaysetGrenade_C::OnLoaded_3645F4484F4ECED813C69D92F55C7A1F(class UObject* Loaded)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_PlaysetGrenade.B_Prj_Athena_PlaysetGrenade_C.OnLoaded_3645F4484F4ECED813C69D92F55C7A1F");

	AB_Prj_Athena_PlaysetGrenade_C_OnLoaded_3645F4484F4ECED813C69D92F55C7A1F_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_PlaysetGrenade.B_Prj_Athena_PlaysetGrenade_C.OnStop
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_Prj_Athena_PlaysetGrenade_C::OnStop(const struct FHitResult& Hit)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_PlaysetGrenade.B_Prj_Athena_PlaysetGrenade_C.OnStop");

	AB_Prj_Athena_PlaysetGrenade_C_OnStop_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_PlaysetGrenade.B_Prj_Athena_PlaysetGrenade_C.OnExploded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          HitActors                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FHitResult>      HitResults                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AB_Prj_Athena_PlaysetGrenade_C::OnExploded(TArray<class AActor*> HitActors, TArray<struct FHitResult> HitResults)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_PlaysetGrenade.B_Prj_Athena_PlaysetGrenade_C.OnExploded");

	AB_Prj_Athena_PlaysetGrenade_C_OnExploded_Params params;
	params.HitActors = HitActors;
	params.HitResults = HitResults;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_PlaysetGrenade.B_Prj_Athena_PlaysetGrenade_C.ReceiveHit
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

void AB_Prj_Athena_PlaysetGrenade_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_PlaysetGrenade.B_Prj_Athena_PlaysetGrenade_C.ReceiveHit");

	AB_Prj_Athena_PlaysetGrenade_C_ReceiveHit_Params params;
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


// Function B_Prj_Athena_PlaysetGrenade.B_Prj_Athena_PlaysetGrenade_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Prj_Athena_PlaysetGrenade_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_PlaysetGrenade.B_Prj_Athena_PlaysetGrenade_C.ReceiveBeginPlay");

	AB_Prj_Athena_PlaysetGrenade_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_PlaysetGrenade.B_Prj_Athena_PlaysetGrenade_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Athena_PlaysetGrenade_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_PlaysetGrenade.B_Prj_Athena_PlaysetGrenade_C.ReceiveEndPlay");

	AB_Prj_Athena_PlaysetGrenade_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_PlaysetGrenade.B_Prj_Athena_PlaysetGrenade_C.SpawnPlayspaceServer
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPlaysetItemDefinition* Playset                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Athena_PlaysetGrenade_C::SpawnPlayspaceServer(class UFortPlaysetItemDefinition* Playset, const struct FVector& Location, const struct FRotator& Rotation)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_PlaysetGrenade.B_Prj_Athena_PlaysetGrenade_C.SpawnPlayspaceServer");

	AB_Prj_Athena_PlaysetGrenade_C_SpawnPlayspaceServer_Params params;
	params.Playset = Playset;
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_PlaysetGrenade.B_Prj_Athena_PlaysetGrenade_C.Play Spawn Prefab Sound
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Athena_PlaysetGrenade_C::Play_Spawn_Prefab_Sound(const struct FVector& Location)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_PlaysetGrenade.B_Prj_Athena_PlaysetGrenade_C.Play Spawn Prefab Sound");

	AB_Prj_Athena_PlaysetGrenade_C_Play_Spawn_Prefab_Sound_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_PlaysetGrenade.B_Prj_Athena_PlaysetGrenade_C.ExecuteUbergraph_B_Prj_Athena_PlaysetGrenade
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Athena_PlaysetGrenade_C::ExecuteUbergraph_B_Prj_Athena_PlaysetGrenade(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_PlaysetGrenade.B_Prj_Athena_PlaysetGrenade_C.ExecuteUbergraph_B_Prj_Athena_PlaysetGrenade");

	AB_Prj_Athena_PlaysetGrenade_C_ExecuteUbergraph_B_Prj_Athena_PlaysetGrenade_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
