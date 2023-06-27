#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function VehicleAnimLayerInterface.VehicleAnimLayerInterface_C.VehicleSplitBodyOverride
struct UVehicleAnimLayerInterface_C_VehicleSplitBodyOverride_Params
{
	struct FPoseLink                                   InPoseSplitBody;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   InPoseUpperAndLowerBody;                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FFortAnimInput_TurnInPlace                  TurnInPlace;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   InPoseUpperAndLowerBodyRemoveRoot;                        // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   VehicleSplitBodyOverride;                                 // (Parm, OutParm)
};

// Function VehicleAnimLayerInterface.VehicleAnimLayerInterface_C.VehicleLowerBodyOverride
struct UVehicleAnimLayerInterface_C_VehicleLowerBodyOverride_Params
{
	struct FPoseLink                                   InPoseLowerBodyDefault;                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   InPoseUpperBody;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   VehicleLowerBodyOverride;                                 // (Parm, OutParm)
};

// Function VehicleAnimLayerInterface.VehicleAnimLayerInterface_C.VehicleFullBodyOverride
struct UVehicleAnimLayerInterface_C_VehicleFullBodyOverride_Params
{
	struct FPoseLink                                   InPoseFullBody;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   InPoseUpperAndLowerCachePose;                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   VehicleFullBodyOverride;                                  // (Parm, OutParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
