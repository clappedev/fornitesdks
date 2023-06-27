// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjectileHuskRanged.ProjectileHuskRanged_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProjectileHuskRanged_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileHuskRanged.ProjectileHuskRanged_C.UserConstructionScript");

	AProjectileHuskRanged_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjectileHuskRanged.ProjectileHuskRanged_C.ReceiveHit
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    MyComp                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Other                          (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSelfMoved                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (Parm, IsPlainOldData)
// struct FVector*                HitNormal                      (Parm, IsPlainOldData)
// struct FVector*                NormalImpulse                  (Parm, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectileHuskRanged_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileHuskRanged.ProjectileHuskRanged_C.ReceiveHit");

	AProjectileHuskRanged_C_ReceiveHit_Params params;
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


// Function ProjectileHuskRanged.ProjectileHuskRanged_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProjectileHuskRanged_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileHuskRanged.ProjectileHuskRanged_C.ReceiveBeginPlay");

	AProjectileHuskRanged_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjectileHuskRanged.ProjectileHuskRanged_C.ProjectileCheck
// (BlueprintCallable, BlueprintEvent)

void AProjectileHuskRanged_C::ProjectileCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileHuskRanged.ProjectileHuskRanged_C.ProjectileCheck");

	AProjectileHuskRanged_C_ProjectileCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjectileHuskRanged.ProjectileHuskRanged_C.StopHoming
// (BlueprintCallable, BlueprintEvent)

void AProjectileHuskRanged_C::StopHoming()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileHuskRanged.ProjectileHuskRanged_C.StopHoming");

	AProjectileHuskRanged_C_StopHoming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjectileHuskRanged.ProjectileHuskRanged_C.OnExploded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<class AActor*>*         HitActors                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FHitResult>*     HitResults                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AProjectileHuskRanged_C::OnExploded(TArray<class AActor*>* HitActors, TArray<struct FHitResult>* HitResults)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileHuskRanged.ProjectileHuskRanged_C.OnExploded");

	AProjectileHuskRanged_C_OnExploded_Params params;
	params.HitActors = HitActors;
	params.HitResults = HitResults;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjectileHuskRanged.ProjectileHuskRanged_C.OnStoppedOnServer
// (Event, Public, BlueprintEvent)

void AProjectileHuskRanged_C::OnStoppedOnServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileHuskRanged.ProjectileHuskRanged_C.OnStoppedOnServer");

	AProjectileHuskRanged_C_OnStoppedOnServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjectileHuskRanged.ProjectileHuskRanged_C.ExecuteUbergraph_ProjectileHuskRanged
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjectileHuskRanged_C::ExecuteUbergraph_ProjectileHuskRanged(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileHuskRanged.ProjectileHuskRanged_C.ExecuteUbergraph_ProjectileHuskRanged");

	AProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
