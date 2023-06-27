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

// Function CustomLocomotionLayerInterface.CustomLocomotionLayerInterface_C.CustomLocomotionFullBodyAdditive
struct UCustomLocomotionLayerInterface_C_CustomLocomotionFullBodyAdditive_Params
{
	struct FPoseLink                                   InPoseFullBodyAdditive;                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   CustomLocomotionFullBodyAdditive;                         // (Parm, OutParm)
};

// Function CustomLocomotionLayerInterface.CustomLocomotionLayerInterface_C.CustomLocomotionPreIKLayer
struct UCustomLocomotionLayerInterface_C_CustomLocomotionPreIKLayer_Params
{
	struct FPoseLink                                   InPosePreIK;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   CustomLocomotionPreIKLayer;                               // (Parm, OutParm)
};

// Function CustomLocomotionLayerInterface.CustomLocomotionLayerInterface_C.CustomLocomotionFullBodyLayer
struct UCustomLocomotionLayerInterface_C_CustomLocomotionFullBodyLayer_Params
{
	struct FPoseLink                                   PassThroughCustomFullBody;                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   CustomLocomotionFullBodyLayer;                            // (Parm, OutParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
