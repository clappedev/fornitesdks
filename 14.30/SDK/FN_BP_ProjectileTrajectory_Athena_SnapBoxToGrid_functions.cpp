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

// Function BP_ProjectileTrajectory_Athena_SnapBoxToGrid.BP_ProjectileTrajectory_Athena_SnapBoxToGrid_C.GetPlaysetFromController
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ProjectileTrajectory_Athena_SnapBoxToGrid_C::GetPlaysetFromController(bool* bSuccess)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_ProjectileTrajectory_Athena_SnapBoxToGrid.BP_ProjectileTrajectory_Athena_SnapBoxToGrid_C.GetPlaysetFromController");

	ABP_ProjectileTrajectory_Athena_SnapBoxToGrid_C_GetPlaysetFromController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_ProjectileTrajectory_Athena_SnapBoxToGrid.BP_ProjectileTrajectory_Athena_SnapBoxToGrid_C.UpdateScaleForPlayset
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_ProjectileTrajectory_Athena_SnapBoxToGrid_C::UpdateScaleForPlayset()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_ProjectileTrajectory_Athena_SnapBoxToGrid.BP_ProjectileTrajectory_Athena_SnapBoxToGrid_C.UpdateScaleForPlayset");

	ABP_ProjectileTrajectory_Athena_SnapBoxToGrid_C_UpdateScaleForPlayset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileTrajectory_Athena_SnapBoxToGrid.BP_ProjectileTrajectory_Athena_SnapBoxToGrid_C.HandleGridSnapUpdates
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 NewLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProjectileTrajectory_Athena_SnapBoxToGrid_C::HandleGridSnapUpdates(const struct FVector& NewLocation)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_ProjectileTrajectory_Athena_SnapBoxToGrid.BP_ProjectileTrajectory_Athena_SnapBoxToGrid_C.HandleGridSnapUpdates");

	ABP_ProjectileTrajectory_Athena_SnapBoxToGrid_C_HandleGridSnapUpdates_Params params;
	params.NewLocation = NewLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileTrajectory_Athena_SnapBoxToGrid.BP_ProjectileTrajectory_Athena_SnapBoxToGrid_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ProjectileTrajectory_Athena_SnapBoxToGrid_C::UserConstructionScript()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_ProjectileTrajectory_Athena_SnapBoxToGrid.BP_ProjectileTrajectory_Athena_SnapBoxToGrid_C.UserConstructionScript");

	ABP_ProjectileTrajectory_Athena_SnapBoxToGrid_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileTrajectory_Athena_SnapBoxToGrid.BP_ProjectileTrajectory_Athena_SnapBoxToGrid_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ProjectileTrajectory_Athena_SnapBoxToGrid_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_ProjectileTrajectory_Athena_SnapBoxToGrid.BP_ProjectileTrajectory_Athena_SnapBoxToGrid_C.ReceiveBeginPlay");

	ABP_ProjectileTrajectory_Athena_SnapBoxToGrid_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileTrajectory_Athena_SnapBoxToGrid.BP_ProjectileTrajectory_Athena_SnapBoxToGrid_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProjectileTrajectory_Athena_SnapBoxToGrid_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_ProjectileTrajectory_Athena_SnapBoxToGrid.BP_ProjectileTrajectory_Athena_SnapBoxToGrid_C.ReceiveActorBeginOverlap");

	ABP_ProjectileTrajectory_Athena_SnapBoxToGrid_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileTrajectory_Athena_SnapBoxToGrid.BP_ProjectileTrajectory_Athena_SnapBoxToGrid_C.SetTrajectorySpline
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         SplinePoints                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FVector>         SplineTangents                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_ProjectileTrajectory_Athena_SnapBoxToGrid_C::SetTrajectorySpline(TArray<struct FVector> SplinePoints, TArray<struct FVector> SplineTangents)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_ProjectileTrajectory_Athena_SnapBoxToGrid.BP_ProjectileTrajectory_Athena_SnapBoxToGrid_C.SetTrajectorySpline");

	ABP_ProjectileTrajectory_Athena_SnapBoxToGrid_C_SetTrajectorySpline_Params params;
	params.SplinePoints = SplinePoints;
	params.SplineTangents = SplineTangents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileTrajectory_Athena_SnapBoxToGrid.BP_ProjectileTrajectory_Athena_SnapBoxToGrid_C.ExecuteUbergraph_BP_ProjectileTrajectory_Athena_SnapBoxToGrid
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProjectileTrajectory_Athena_SnapBoxToGrid_C::ExecuteUbergraph_BP_ProjectileTrajectory_Athena_SnapBoxToGrid(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_ProjectileTrajectory_Athena_SnapBoxToGrid.BP_ProjectileTrajectory_Athena_SnapBoxToGrid_C.ExecuteUbergraph_BP_ProjectileTrajectory_Athena_SnapBoxToGrid");

	ABP_ProjectileTrajectory_Athena_SnapBoxToGrid_C_ExecuteUbergraph_BP_ProjectileTrajectory_Athena_SnapBoxToGrid_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
