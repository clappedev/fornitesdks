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

// Function SwimmingAnimBP.SwimmingAnimBP_C.SwimmingDiveJumpingLayer
struct USwimmingAnimBP_C_SwimmingDiveJumpingLayer_Params
{
	struct FPoseLink                                   PassThroughSwimmingDiveJumping;                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsHidingInPropLayer2;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MainInstanceDiveJumpLayerAlpha;                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFortPlayerAnimBodyType                            AnimBodyTypePassThrough;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPoseLink                                   SwimmingDiveJumpingLayer;                                 // (Parm, OutParm)
};

// Function SwimmingAnimBP.SwimmingAnimBP_C.SwimmingFullBodyAdditiveLayer
struct USwimmingAnimBP_C_SwimmingFullBodyAdditiveLayer_Params
{
	struct FPoseLink                                   PassThroughFullBodyAdditive;                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   SwimmingFullBodyAdditiveLayer;                            // (Parm, OutParm)
};

// Function SwimmingAnimBP.SwimmingAnimBP_C.SwimmingAdditiveLayer
struct USwimmingAnimBP_C_SwimmingAdditiveLayer_Params
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

// Function SwimmingAnimBP.SwimmingAnimBP_C.SwimmingLowerBodyLayer
struct USwimmingAnimBP_C_SwimmingLowerBodyLayer_Params
{
	struct FPoseLink                                   UpperBody_Cache;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   PreUpperBodySlot_Cache;                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   PassThroughSwimmingLowerBody;                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   SwimmingLowerBodyLayer;                                   // (Parm, OutParm)
};

// Function SwimmingAnimBP.SwimmingAnimBP_C.SwimmingUpperBodyPoseNonTargetingLayer
struct USwimmingAnimBP_C_SwimmingUpperBodyPoseNonTargetingLayer_Params
{
	struct FPoseLink                                   PassThroughSwimmingUpperBodyPoseNonTargeting;             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   SwimmingUpperBodyPoseNonTargetingLayer;                   // (Parm, OutParm)
};

// Function SwimmingAnimBP.SwimmingAnimBP_C.SwimmingUpperBodyPoseTargetingLayer
struct USwimmingAnimBP_C_SwimmingUpperBodyPoseTargetingLayer_Params
{
	struct FPoseLink                                   PassThroughSwimmingUpperBodyPoseTargeting;                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   SwimmingUpperBodyPoseTargetingLayer;                      // (Parm, OutParm)
};

// Function SwimmingAnimBP.SwimmingAnimBP_C.SwimmingMovementAdditiveLayerPose
struct USwimmingAnimBP_C_SwimmingMovementAdditiveLayerPose_Params
{
	struct FPoseLink                                   PassThroughSwimmingMovementAdditive;                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   SwimmingMovementAdditiveLayerPose;                        // (Parm, OutParm)
};

// Function SwimmingAnimBP.SwimmingAnimBP_C.SwimmingSprintLayer
struct USwimmingAnimBP_C_SwimmingSprintLayer_Params
{
	struct FPoseLink                                   PassThroughSwimmingSprint;                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsHidingInPropLayer;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPoseLink                                   SwimmingSprintLayer;                                      // (Parm, OutParm)
};

// Function SwimmingAnimBP.SwimmingAnimBP_C.SwimmingLayer
struct USwimmingAnimBP_C_SwimmingLayer_Params
{
	struct FPoseLink                                   MainPlayerAnimBP;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   SwimmingLayer;                                            // (Parm, OutParm)
};

// Function SwimmingAnimBP.SwimmingAnimBP_C.AnimGraph
struct USwimmingAnimBP_C_AnimGraph_Params
{
	struct FPoseLink                                   AnimGraph;                                                // (Parm, OutParm)
};

// Function SwimmingAnimBP.SwimmingAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_TransitionResult_5830B69443C9B79B5F980CAE5DEC8E36
struct USwimmingAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_TransitionResult_5830B69443C9B79B5F980CAE5DEC8E36_Params
{
};

// Function SwimmingAnimBP.SwimmingAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_TransitionResult_E6B49F01423E469AF176989D25F6BA2A
struct USwimmingAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_TransitionResult_E6B49F01423E469AF176989D25F6BA2A_Params
{
};

// Function SwimmingAnimBP.SwimmingAnimBP_C.AnimNotify_SwimSprintStart_Entered_Layer
struct USwimmingAnimBP_C_AnimNotify_SwimSprintStart_Entered_Layer_Params
{
};

// Function SwimmingAnimBP.SwimmingAnimBP_C.AnimNotify_SwimSprintStart_Exited_Layer
struct USwimmingAnimBP_C_AnimNotify_SwimSprintStart_Exited_Layer_Params
{
};

// Function SwimmingAnimBP.SwimmingAnimBP_C.AnimNotify_SwimSprint_Entered_Layer
struct USwimmingAnimBP_C_AnimNotify_SwimSprint_Entered_Layer_Params
{
};

// Function SwimmingAnimBP.SwimmingAnimBP_C.AnimNotify_SwimSprintSlow_Entered_Layer
struct USwimmingAnimBP_C_AnimNotify_SwimSprintSlow_Entered_Layer_Params
{
};

// Function SwimmingAnimBP.SwimmingAnimBP_C.AnimNotify_SwimStartAdditive_Entered_Layer
struct USwimmingAnimBP_C_AnimNotify_SwimStartAdditive_Entered_Layer_Params
{
};

// Function SwimmingAnimBP.SwimmingAnimBP_C.AnimNotify_SwimMovementAccelAdditive_Exited_Layer
struct USwimmingAnimBP_C_AnimNotify_SwimMovementAccelAdditive_Exited_Layer_Params
{
};

// Function SwimmingAnimBP.SwimmingAnimBP_C.ExecuteUbergraph_SwimmingAnimBP
struct USwimmingAnimBP_C_ExecuteUbergraph_SwimmingAnimBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
