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

// Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.SetShouldUpdateFromOwner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldUpdate                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProjectileTrajectory_C::SetShouldUpdateFromOwner(bool ShouldUpdate, class UObject* Owner)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.SetShouldUpdateFromOwner");

	ABP_ProjectileTrajectory_C_SetShouldUpdateFromOwner_Params params;
	params.ShouldUpdate = ShouldUpdate;
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.UpdateFromTrajectoryOwner
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ProjectileTrajectory_C::UpdateFromTrajectoryOwner()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.UpdateFromTrajectoryOwner");

	ABP_ProjectileTrajectory_C_UpdateFromTrajectoryOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ProjectileTrajectory_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.ReceiveBeginPlay");

	ABP_ProjectileTrajectory_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProjectileTrajectory_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.ReceiveTick");

	ABP_ProjectileTrajectory_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.SetTrajectorySpline
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         SplinePoints                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FVector>         SplineTangents                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_ProjectileTrajectory_C::SetTrajectorySpline(TArray<struct FVector> SplinePoints, TArray<struct FVector> SplineTangents)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.SetTrajectorySpline");

	ABP_ProjectileTrajectory_C_SetTrajectorySpline_Params params;
	params.SplinePoints = SplinePoints;
	params.SplineTangents = SplineTangents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.ExecuteUbergraph_BP_ProjectileTrajectory
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProjectileTrajectory_C::ExecuteUbergraph_BP_ProjectileTrajectory(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.ExecuteUbergraph_BP_ProjectileTrajectory");

	ABP_ProjectileTrajectory_C_ExecuteUbergraph_BP_ProjectileTrajectory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
