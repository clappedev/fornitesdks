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

// Function PlayerAnimOverrideLayerInterface.PlayerAnimOverrideLayerInterface_C.CharacterSkeletalControlPostLegIK
struct UPlayerAnimOverrideLayerInterface_C_CharacterSkeletalControlPostLegIK_Params
{
	struct FPoseLink                                   InPosePostLegIK;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   CharacterSkeletalControlPostLegIK;                        // (Parm, OutParm)
};

// Function PlayerAnimOverrideLayerInterface.PlayerAnimOverrideLayerInterface_C.FullBodyOverride
struct UPlayerAnimOverrideLayerInterface_C_FullBodyOverride_Params
{
	struct FPoseLink                                   PassThroughFullBodyPose;                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   FullBodyOverride;                                         // (Parm, OutParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
