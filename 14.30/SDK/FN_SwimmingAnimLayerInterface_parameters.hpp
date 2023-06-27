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

// Function SwimmingAnimLayerInterface.SwimmingAnimLayerInterface_C.SwimmingDiveJumpingLayer
struct USwimmingAnimLayerInterface_C_SwimmingDiveJumpingLayer_Params
{
	struct FPoseLink                                   PassThroughSwimmingDiveJumping;                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsHidingInPropLayer2;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MainInstanceDiveJumpLayerAlpha;                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFortPlayerAnimBodyType                            AnimBodyTypePassThrough;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPoseLink                                   SwimmingDiveJumpingLayer;                                 // (Parm, OutParm)
};

// Function SwimmingAnimLayerInterface.SwimmingAnimLayerInterface_C.SwimmingFullBodyAdditiveLayer
struct USwimmingAnimLayerInterface_C_SwimmingFullBodyAdditiveLayer_Params
{
	struct FPoseLink                                   PassThroughFullBodyAdditive;                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   SwimmingFullBodyAdditiveLayer;                            // (Parm, OutParm)
};

// Function SwimmingAnimLayerInterface.SwimmingAnimLayerInterface_C.SwimmingAdditiveLayer
struct USwimmingAnimLayerInterface_C_SwimmingAdditiveLayer_Params
{
	struct FPoseLink                                   IdleAdditive_Cache;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   MovementAdditiveLayerPose_Cache;                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   FullBody;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              PlayMeleeAttackAOLayer;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DisableArmsHeadAdditiveCurveAlphaLayer;                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DisableIKRootAdditiveCurveAlphaLayer;                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LocomotionAdditiveAlphaLayer;                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MainInstanceAdditiveLayerAlpha;                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPoseLink                                   UpperAndLowerBody_Cache;                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   SprintingPose_PostMask_Cache;                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   SwimmingAdditiveLayer;                                    // (Parm, OutParm)
};

// Function SwimmingAnimLayerInterface.SwimmingAnimLayerInterface_C.SwimmingLowerBodyLayer
struct USwimmingAnimLayerInterface_C_SwimmingLowerBodyLayer_Params
{
	struct FPoseLink                                   UpperBody_Cache;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   PreUpperBodySlot_Cache;                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   PassThroughSwimmingLowerBody;                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   SwimmingLowerBodyLayer;                                   // (Parm, OutParm)
};

// Function SwimmingAnimLayerInterface.SwimmingAnimLayerInterface_C.SwimmingUpperBodyPoseNonTargetingLayer
struct USwimmingAnimLayerInterface_C_SwimmingUpperBodyPoseNonTargetingLayer_Params
{
	struct FPoseLink                                   PassThroughSwimmingUpperBodyPoseNonTargeting;             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   SwimmingUpperBodyPoseNonTargetingLayer;                   // (Parm, OutParm)
};

// Function SwimmingAnimLayerInterface.SwimmingAnimLayerInterface_C.SwimmingUpperBodyPoseTargetingLayer
struct USwimmingAnimLayerInterface_C_SwimmingUpperBodyPoseTargetingLayer_Params
{
	struct FPoseLink                                   PassThroughSwimmingUpperBodyPoseTargeting;                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   SwimmingUpperBodyPoseTargetingLayer;                      // (Parm, OutParm)
};

// Function SwimmingAnimLayerInterface.SwimmingAnimLayerInterface_C.SwimmingSprintLayer
struct USwimmingAnimLayerInterface_C_SwimmingSprintLayer_Params
{
	struct FPoseLink                                   PassThroughSwimmingSprint;                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsHidingInPropLayer;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPoseLink                                   SwimmingSprintLayer;                                      // (Parm, OutParm)
};

// Function SwimmingAnimLayerInterface.SwimmingAnimLayerInterface_C.SwimmingMovementAdditiveLayerPose
struct USwimmingAnimLayerInterface_C_SwimmingMovementAdditiveLayerPose_Params
{
	struct FPoseLink                                   PassThroughSwimmingMovementAdditive;                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   SwimmingMovementAdditiveLayerPose;                        // (Parm, OutParm)
};

// Function SwimmingAnimLayerInterface.SwimmingAnimLayerInterface_C.SwimmingLayer
struct USwimmingAnimLayerInterface_C_SwimmingLayer_Params
{
	struct FPoseLink                                   MainPlayerAnimBP;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   SwimmingLayer;                                            // (Parm, OutParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
