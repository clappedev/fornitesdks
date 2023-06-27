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

// Function BP_ProjectileTrajectory_ExplosiveBow.BP_ProjectileTrajectory_ExplosiveBow_C.SetShouldUpdateFromOwner
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldUpdate                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Interval                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProjectileTrajectory_ExplosiveBow_C::SetShouldUpdateFromOwner(bool ShouldUpdate, class UObject* Owner, float Interval)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_ProjectileTrajectory_ExplosiveBow.BP_ProjectileTrajectory_ExplosiveBow_C.SetShouldUpdateFromOwner");

	ABP_ProjectileTrajectory_ExplosiveBow_C_SetShouldUpdateFromOwner_Params params;
	params.ShouldUpdate = ShouldUpdate;
	params.Owner = Owner;
	params.Interval = Interval;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileTrajectory_ExplosiveBow.BP_ProjectileTrajectory_ExplosiveBow_C.UpdateFromTrajectoryOwner
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ProjectileTrajectory_ExplosiveBow_C::UpdateFromTrajectoryOwner()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_ProjectileTrajectory_ExplosiveBow.BP_ProjectileTrajectory_ExplosiveBow_C.UpdateFromTrajectoryOwner");

	ABP_ProjectileTrajectory_ExplosiveBow_C_UpdateFromTrajectoryOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileTrajectory_ExplosiveBow.BP_ProjectileTrajectory_ExplosiveBow_C.SetTrajectorySplineInternal
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         SplinePoints                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FVector>         SplineTangents                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_ProjectileTrajectory_ExplosiveBow_C::SetTrajectorySplineInternal(TArray<struct FVector>* SplinePoints, TArray<struct FVector>* SplineTangents)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_ProjectileTrajectory_ExplosiveBow.BP_ProjectileTrajectory_ExplosiveBow_C.SetTrajectorySplineInternal");

	ABP_ProjectileTrajectory_ExplosiveBow_C_SetTrajectorySplineInternal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SplinePoints != nullptr)
		*SplinePoints = params.SplinePoints;
	if (SplineTangents != nullptr)
		*SplineTangents = params.SplineTangents;
}


// Function BP_ProjectileTrajectory_ExplosiveBow.BP_ProjectileTrajectory_ExplosiveBow_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ProjectileTrajectory_ExplosiveBow_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_ProjectileTrajectory_ExplosiveBow.BP_ProjectileTrajectory_ExplosiveBow_C.ReceiveBeginPlay");

	ABP_ProjectileTrajectory_ExplosiveBow_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileTrajectory_ExplosiveBow.BP_ProjectileTrajectory_ExplosiveBow_C.Pulse
// (BlueprintCallable, BlueprintEvent)

void ABP_ProjectileTrajectory_ExplosiveBow_C::Pulse()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_ProjectileTrajectory_ExplosiveBow.BP_ProjectileTrajectory_ExplosiveBow_C.Pulse");

	ABP_ProjectileTrajectory_ExplosiveBow_C_Pulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileTrajectory_ExplosiveBow.BP_ProjectileTrajectory_ExplosiveBow_C.SetTrajectorySpline
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         SplinePoints                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FVector>         SplineTangents                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_ProjectileTrajectory_ExplosiveBow_C::SetTrajectorySpline(TArray<struct FVector> SplinePoints, TArray<struct FVector> SplineTangents)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_ProjectileTrajectory_ExplosiveBow.BP_ProjectileTrajectory_ExplosiveBow_C.SetTrajectorySpline");

	ABP_ProjectileTrajectory_ExplosiveBow_C_SetTrajectorySpline_Params params;
	params.SplinePoints = SplinePoints;
	params.SplineTangents = SplineTangents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileTrajectory_ExplosiveBow.BP_ProjectileTrajectory_ExplosiveBow_C.ExecuteUbergraph_BP_ProjectileTrajectory_ExplosiveBow
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProjectileTrajectory_ExplosiveBow_C::ExecuteUbergraph_BP_ProjectileTrajectory_ExplosiveBow(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_ProjectileTrajectory_ExplosiveBow.BP_ProjectileTrajectory_ExplosiveBow_C.ExecuteUbergraph_BP_ProjectileTrajectory_ExplosiveBow");

	ABP_ProjectileTrajectory_ExplosiveBow_C_ExecuteUbergraph_BP_ProjectileTrajectory_ExplosiveBow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
