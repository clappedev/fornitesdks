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

// Function BP_ProjectileTrajectory_Athena_SnapToGridArrow.BP_ProjectileTrajectory_Athena_SnapToGridArrow_C.HandleGridSnapUpdates
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 NewLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProjectileTrajectory_Athena_SnapToGridArrow_C::HandleGridSnapUpdates(const struct FVector& NewLocation)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_ProjectileTrajectory_Athena_SnapToGridArrow.BP_ProjectileTrajectory_Athena_SnapToGridArrow_C.HandleGridSnapUpdates");

	ABP_ProjectileTrajectory_Athena_SnapToGridArrow_C_HandleGridSnapUpdates_Params params;
	params.NewLocation = NewLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileTrajectory_Athena_SnapToGridArrow.BP_ProjectileTrajectory_Athena_SnapToGridArrow_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ProjectileTrajectory_Athena_SnapToGridArrow_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_ProjectileTrajectory_Athena_SnapToGridArrow.BP_ProjectileTrajectory_Athena_SnapToGridArrow_C.ReceiveBeginPlay");

	ABP_ProjectileTrajectory_Athena_SnapToGridArrow_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileTrajectory_Athena_SnapToGridArrow.BP_ProjectileTrajectory_Athena_SnapToGridArrow_C.SetTrajectorySpline
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         SplinePoints                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FVector>         SplineTangents                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_ProjectileTrajectory_Athena_SnapToGridArrow_C::SetTrajectorySpline(TArray<struct FVector> SplinePoints, TArray<struct FVector> SplineTangents)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_ProjectileTrajectory_Athena_SnapToGridArrow.BP_ProjectileTrajectory_Athena_SnapToGridArrow_C.SetTrajectorySpline");

	ABP_ProjectileTrajectory_Athena_SnapToGridArrow_C_SetTrajectorySpline_Params params;
	params.SplinePoints = SplinePoints;
	params.SplineTangents = SplineTangents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileTrajectory_Athena_SnapToGridArrow.BP_ProjectileTrajectory_Athena_SnapToGridArrow_C.ExecuteUbergraph_BP_ProjectileTrajectory_Athena_SnapToGridArrow
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProjectileTrajectory_Athena_SnapToGridArrow_C::ExecuteUbergraph_BP_ProjectileTrajectory_Athena_SnapToGridArrow(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_ProjectileTrajectory_Athena_SnapToGridArrow.BP_ProjectileTrajectory_Athena_SnapToGridArrow_C.ExecuteUbergraph_BP_ProjectileTrajectory_Athena_SnapToGridArrow");

	ABP_ProjectileTrajectory_Athena_SnapToGridArrow_C_ExecuteUbergraph_BP_ProjectileTrajectory_Athena_SnapToGridArrow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
