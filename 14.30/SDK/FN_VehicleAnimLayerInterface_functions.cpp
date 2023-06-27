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

// Function VehicleAnimLayerInterface.VehicleAnimLayerInterface_C.VehicleSplitBodyOverride
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               InPoseSplitBody                (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               InPoseUpperAndLowerBody        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FFortAnimInput_TurnInPlace TurnInPlace                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               InPoseUpperAndLowerBodyRemoveRoot (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               VehicleSplitBodyOverride       (Parm, OutParm)

void UVehicleAnimLayerInterface_C::VehicleSplitBodyOverride(const struct FPoseLink& InPoseSplitBody, const struct FPoseLink& InPoseUpperAndLowerBody, const struct FFortAnimInput_TurnInPlace& TurnInPlace, const struct FPoseLink& InPoseUpperAndLowerBodyRemoveRoot, struct FPoseLink* VehicleSplitBodyOverride)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VehicleAnimLayerInterface.VehicleAnimLayerInterface_C.VehicleSplitBodyOverride");

	UVehicleAnimLayerInterface_C_VehicleSplitBodyOverride_Params params;
	params.InPoseSplitBody = InPoseSplitBody;
	params.InPoseUpperAndLowerBody = InPoseUpperAndLowerBody;
	params.TurnInPlace = TurnInPlace;
	params.InPoseUpperAndLowerBodyRemoveRoot = InPoseUpperAndLowerBodyRemoveRoot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VehicleSplitBodyOverride != nullptr)
		*VehicleSplitBodyOverride = params.VehicleSplitBodyOverride;
}


// Function VehicleAnimLayerInterface.VehicleAnimLayerInterface_C.VehicleLowerBodyOverride
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               InPoseLowerBodyDefault         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               InPoseUpperBody                (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               VehicleLowerBodyOverride       (Parm, OutParm)

void UVehicleAnimLayerInterface_C::VehicleLowerBodyOverride(const struct FPoseLink& InPoseLowerBodyDefault, const struct FPoseLink& InPoseUpperBody, struct FPoseLink* VehicleLowerBodyOverride)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VehicleAnimLayerInterface.VehicleAnimLayerInterface_C.VehicleLowerBodyOverride");

	UVehicleAnimLayerInterface_C_VehicleLowerBodyOverride_Params params;
	params.InPoseLowerBodyDefault = InPoseLowerBodyDefault;
	params.InPoseUpperBody = InPoseUpperBody;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VehicleLowerBodyOverride != nullptr)
		*VehicleLowerBodyOverride = params.VehicleLowerBodyOverride;
}


// Function VehicleAnimLayerInterface.VehicleAnimLayerInterface_C.VehicleFullBodyOverride
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               InPoseFullBody                 (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               InPoseUpperAndLowerCachePose   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink               VehicleFullBodyOverride        (Parm, OutParm)

void UVehicleAnimLayerInterface_C::VehicleFullBodyOverride(const struct FPoseLink& InPoseFullBody, const struct FPoseLink& InPoseUpperAndLowerCachePose, struct FPoseLink* VehicleFullBodyOverride)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VehicleAnimLayerInterface.VehicleAnimLayerInterface_C.VehicleFullBodyOverride");

	UVehicleAnimLayerInterface_C_VehicleFullBodyOverride_Params params;
	params.InPoseFullBody = InPoseFullBody;
	params.InPoseUpperAndLowerCachePose = InPoseUpperAndLowerCachePose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VehicleFullBodyOverride != nullptr)
		*VehicleFullBodyOverride = params.VehicleFullBodyOverride;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
