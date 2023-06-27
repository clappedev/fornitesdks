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

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.CustomLocomotionFullBodyAdditive
struct UFortnite_M_Avg_Player_AnimBlueprint_C_CustomLocomotionFullBodyAdditive_Params
{
	struct FPoseLink                                   InPoseFullBodyAdditive;                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   CustomLocomotionFullBodyAdditive;                         // (Parm, OutParm)
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.CustomLocomotionPreIKLayer
struct UFortnite_M_Avg_Player_AnimBlueprint_C_CustomLocomotionPreIKLayer_Params
{
	struct FPoseLink                                   InPosePreIK;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   CustomLocomotionPreIKLayer;                               // (Parm, OutParm)
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.CustomLocomotionFullBodyLayer
struct UFortnite_M_Avg_Player_AnimBlueprint_C_CustomLocomotionFullBodyLayer_Params
{
	struct FPoseLink                                   PassThroughCustomFullBody;                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   CustomLocomotionFullBodyLayer;                            // (Parm, OutParm)
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.CharacterSkeletalControlPostLegIK
struct UFortnite_M_Avg_Player_AnimBlueprint_C_CharacterSkeletalControlPostLegIK_Params
{
	struct FPoseLink                                   InPosePostLegIK;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   CharacterSkeletalControlPostLegIK;                        // (Parm, OutParm)
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.FullBodyOverride
struct UFortnite_M_Avg_Player_AnimBlueprint_C_FullBodyOverride_Params
{
	struct FPoseLink                                   PassThroughFullBodyPose;                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   FullBodyOverride;                                         // (Parm, OutParm)
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.SwimmingDiveJumpingLayer
struct UFortnite_M_Avg_Player_AnimBlueprint_C_SwimmingDiveJumpingLayer_Params
{
	struct FPoseLink                                   PassThroughSwimmingDiveJumping;                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsHidingInPropLayer2;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MainInstanceDiveJumpLayerAlpha;                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFortPlayerAnimBodyType                            AnimBodyTypePassThrough;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPoseLink                                   SwimmingDiveJumpingLayer;                                 // (Parm, OutParm)
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.SwimmingFullBodyAdditiveLayer
struct UFortnite_M_Avg_Player_AnimBlueprint_C_SwimmingFullBodyAdditiveLayer_Params
{
	struct FPoseLink                                   PassThroughFullBodyAdditive;                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   SwimmingFullBodyAdditiveLayer;                            // (Parm, OutParm)
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.SwimmingAdditiveLayer
struct UFortnite_M_Avg_Player_AnimBlueprint_C_SwimmingAdditiveLayer_Params
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

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.SwimmingLowerBodyLayer
struct UFortnite_M_Avg_Player_AnimBlueprint_C_SwimmingLowerBodyLayer_Params
{
	struct FPoseLink                                   UpperBody_Cache;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   PreUpperBodySlot_Cache;                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   PassThroughSwimmingLowerBody;                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   SwimmingLowerBodyLayer;                                   // (Parm, OutParm)
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.SwimmingUpperBodyPoseNonTargetingLayer
struct UFortnite_M_Avg_Player_AnimBlueprint_C_SwimmingUpperBodyPoseNonTargetingLayer_Params
{
	struct FPoseLink                                   PassThroughSwimmingUpperBodyPoseNonTargeting;             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   SwimmingUpperBodyPoseNonTargetingLayer;                   // (Parm, OutParm)
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.SwimmingUpperBodyPoseTargetingLayer
struct UFortnite_M_Avg_Player_AnimBlueprint_C_SwimmingUpperBodyPoseTargetingLayer_Params
{
	struct FPoseLink                                   PassThroughSwimmingUpperBodyPoseTargeting;                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   SwimmingUpperBodyPoseTargetingLayer;                      // (Parm, OutParm)
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.SwimmingMovementAdditiveLayerPose
struct UFortnite_M_Avg_Player_AnimBlueprint_C_SwimmingMovementAdditiveLayerPose_Params
{
	struct FPoseLink                                   PassThroughSwimmingMovementAdditive;                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   SwimmingMovementAdditiveLayerPose;                        // (Parm, OutParm)
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.SwimmingSprintLayer
struct UFortnite_M_Avg_Player_AnimBlueprint_C_SwimmingSprintLayer_Params
{
	struct FPoseLink                                   PassThroughSwimmingSprint;                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsHidingInPropLayer;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPoseLink                                   SwimmingSprintLayer;                                      // (Parm, OutParm)
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.SwimmingLayer
struct UFortnite_M_Avg_Player_AnimBlueprint_C_SwimmingLayer_Params
{
	struct FPoseLink                                   MainPlayerAnimBP;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   SwimmingLayer;                                            // (Parm, OutParm)
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.VehicleDBNOCarriedLeansOverride
struct UFortnite_M_Avg_Player_AnimBlueprint_C_VehicleDBNOCarriedLeansOverride_Params
{
	struct FPoseLink                                   InPoseDBNOCarried;                                        // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   VehicleDBNOCarriedLeansOverride;                          // (Parm, OutParm)
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.VehicleDBNOJoggingOverride
struct UFortnite_M_Avg_Player_AnimBlueprint_C_VehicleDBNOJoggingOverride_Params
{
	struct FPoseLink                                   VehicleDBNOJoggingOverride;                               // (Parm, OutParm)
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemPreIK
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemPreIK_Params
{
	struct FPoseLink                                   InPose_PreIK;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemPreIK;                                                // (Parm, OutParm)
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemFullBodyOverride
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemFullBodyOverride_Params
{
	struct FPoseLink                                   InPoseFullBody;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemFullBodyOverride;                                     // (Parm, OutParm)
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemAimOffset
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemAimOffset_Params
{
	struct FPoseLink                                   InPose_AimOffset;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              AimOffsetAlpha;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPoseLink                                   InPose_UpperLowerPreMeleeAO;                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemAimOffset;                                            // (Parm, OutParm)
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemSkeletalControl
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemSkeletalControl_Params
{
	struct FPoseLink                                   InPose;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemSkeletalControl;                                      // (Parm, OutParm)
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemSwimJumpSurfaceEnd
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpSurfaceEnd_Params
{
	struct FPoseLink                                   ItemSwimJumpSurfaceEnd;                                   // (Parm, OutParm)
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemSwimJumpSurfaceLoop
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpSurfaceLoop_Params
{
	struct FPoseLink                                   ItemSwimJumpSurfaceLoop;                                  // (Parm, OutParm)
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemSwimJumpFallLoop
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpFallLoop_Params
{
	struct FPoseLink                                   ItemSwimJumpFallLoop;                                     // (Parm, OutParm)
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemSwimJumpStartLoop
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpStartLoop_Params
{
	struct FPoseLink                                   ItemSwimJumpStartLoop;                                    // (Parm, OutParm)
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemSwimJumpStart
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpStart_Params
{
	struct FPoseLink                                   ItemSwimJumpStart;                                        // (Parm, OutParm)
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemLowerBodyLeanAdditive
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemLowerBodyLeanAdditive_Params
{
	struct FPoseLink                                   InPoseLowerBodyLeanAdditive;                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemLowerBodyLeanAdditive;                                // (Parm, OutParm)
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemUpperBody
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemUpperBody_Params
{
	struct FPoseLink                                   InPoseUpperBody;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FFortAnimInput_AdjustedAim                  InputParam;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemUpperBody;                                            // (Parm, OutParm)
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemFullBodySprint
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemFullBodySprint_Params
{
	struct FPoseLink                                   InPoseSprint;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemFullBodySprint;                                       // (Parm, OutParm)
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemIdleAdditive
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemIdleAdditive_Params
{
	struct FPoseLink                                   InPoseIdleAdditive;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemIdleAdditive;                                         // (Parm, OutParm)
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemCrouchTurningAdditive
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemCrouchTurningAdditive_Params
{
	struct FPoseLink                                   ItemCrouchTurningAdditive;                                // (Parm, OutParm)
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemSlopeSliding
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemSlopeSliding_Params
{
	struct FPoseLink                                   ItemSlopeSliding;                                         // (Parm, OutParm)
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemJumpUpAdditive
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemJumpUpAdditive_Params
{
	struct FPoseLink                                   ItemJumpUpAdditive;                                       // (Parm, OutParm)
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemJumpLoopAdditive
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemJumpLoopAdditive_Params
{
	struct FPoseLink                                   ItemJumpLoopAdditive;                                     // (Parm, OutParm)
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemFallAdditive
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemFallAdditive_Params
{
	struct FPoseLink                                   ItemFallAdditive;                                         // (Parm, OutParm)
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemFallLandAdditive
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemFallLandAdditive_Params
{
	struct FPoseLink                                   ItemFallLandAdditive;                                     // (Parm, OutParm)
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemJetPackStartAdditive
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemJetPackStartAdditive_Params
{
	struct FPoseLink                                   ItemJetPackStartAdditive;                                 // (Parm, OutParm)
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemJetPackJumpAdditive
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemJetPackJumpAdditive_Params
{
	struct FPoseLink                                   ItemJetPackJumpAdditive;                                  // (Parm, OutParm)
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemZipLineStartAdditive
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemZipLineStartAdditive_Params
{
	struct FPoseLink                                   ItemZipLineStartAdditive;                                 // (Parm, OutParm)
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemFlyModeStartAdditive
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemFlyModeStartAdditive_Params
{
	struct FPoseLink                                   ItemFlyModeStartAdditive;                                 // (Parm, OutParm)
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemFlyModeLoopAdditive
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemFlyModeLoopAdditive_Params
{
	struct FPoseLink                                   ItemFlyModeLoopAdditive;                                  // (Parm, OutParm)
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemJogStartAdditive
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemJogStartAdditive_Params
{
	struct FPoseLink                                   InPoseJogStartAdditive;                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemJogStartAdditive;                                     // (Parm, OutParm)
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemJogStopAdditive
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemJogStopAdditive_Params
{
	struct FPoseLink                                   InPoseJogStopAdditive;                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemJogStopAdditive;                                      // (Parm, OutParm)
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemJogPrePivotAdditive
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemJogPrePivotAdditive_Params
{
	struct FPoseLink                                   InPosePrePivotAdditive;                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemJogPrePivotAdditive;                                  // (Parm, OutParm)
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemJogPostPivotAdditive
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemJogPostPivotAdditive_Params
{
	struct FPoseLink                                   InPosePostPivotAdditive;                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemJogPostPivotAdditive;                                 // (Parm, OutParm)
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemLowerBodyMovement
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemLowerBodyMovement_Params
{
	struct FPoseLink                                   InPoseLowerBodyMovement;                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemLowerBodyMovement;                                    // (Parm, OutParm)
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemLowerBodyJogStart
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemLowerBodyJogStart_Params
{
	struct FPoseLink                                   InPoseLowerBodyJogStart;                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemLowerBodyJogStart;                                    // (Parm, OutParm)
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemLowerBodyJogStop
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemLowerBodyJogStop_Params
{
	struct FPoseLink                                   InPoseLowerBodyJogStop;                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemLowerBodyJogStop;                                     // (Parm, OutParm)
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemLowerBodyJogPrePivot
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemLowerBodyJogPrePivot_Params
{
	struct FPoseLink                                   InPoseLowerBodyJogPrePivot;                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemLowerBodyJogPrePivot;                                 // (Parm, OutParm)
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemLowerBodyJogPostPivot
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemLowerBodyJogPostPivot_Params
{
	struct FPoseLink                                   InPoseLowerBodyJogPostPivot;                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemLowerBodyJogPostPivot;                                // (Parm, OutParm)
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemRelaxedEntry
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemRelaxedEntry_Params
{
	struct FPoseLink                                   InPoseRelaxedEntry;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemRelaxedEntry;                                         // (Parm, OutParm)
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.VehicleSplitBodyOverride
struct UFortnite_M_Avg_Player_AnimBlueprint_C_VehicleSplitBodyOverride_Params
{
	struct FPoseLink                                   InPoseSplitBody;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   InPoseUpperAndLowerBody;                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FFortAnimInput_TurnInPlace                  TurnInPlace;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   InPoseUpperAndLowerBodyRemoveRoot;                        // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   VehicleSplitBodyOverride;                                 // (Parm, OutParm)
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.VehicleFullBodyOverride
struct UFortnite_M_Avg_Player_AnimBlueprint_C_VehicleFullBodyOverride_Params
{
	struct FPoseLink                                   InPoseFullBody;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   InPoseUpperAndLowerCachePose;                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   VehicleFullBodyOverride;                                  // (Parm, OutParm)
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.VehicleLowerBodyOverride
struct UFortnite_M_Avg_Player_AnimBlueprint_C_VehicleLowerBodyOverride_Params
{
	struct FPoseLink                                   InPoseLowerBodyDefault;                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   InPoseUpperBody;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   VehicleLowerBodyOverride;                                 // (Parm, OutParm)
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimGraph
struct UFortnite_M_Avg_Player_AnimBlueprint_C_AnimGraph_Params
{
	struct FPoseLink                                   AnimGraph;                                                // (Parm, OutParm)
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ValidateDBNONativize
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ValidateDBNONativize_Params
{
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_Melee_Swing_L
struct UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_Melee_Swing_L_Params
{
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_Melee_Swing_R
struct UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_Melee_Swing_R_Params
{
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.CharPartEvent
struct UFortnite_M_Avg_Player_AnimBlueprint_C_CharPartEvent_Params
{
	class UFortPlayerAnimInstance*                     CharPart;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_playFacialAnim
struct UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_playFacialAnim_Params
{
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_IndigoLaunch
struct UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_IndigoLaunch_Params
{
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_Melee_Swing_L_End
struct UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_Melee_Swing_L_End_Params
{
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_Melee_Swing_R_End
struct UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_Melee_Swing_R_End_Params
{
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_Melee_Swing_L_3
struct UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_Melee_Swing_L_3_Params
{
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_Melee_Swing_R_3
struct UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_Melee_Swing_R_3_Params
{
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_SwimJumpSurfaceEnd_Exit
struct UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_SwimJumpSurfaceEnd_Exit_Params
{
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_SwimJumpStart_Exited
struct UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_SwimJumpStart_Exited_Params
{
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_SwimSprintSlow_Entered
struct UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_SwimSprintSlow_Entered_Params
{
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_SwimSprint_Entered
struct UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_SwimSprint_Entered_Params
{
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_SwimSprintStart_Exited
struct UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_SwimSprintStart_Exited_Params
{
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_SwimSprintStart_Entered
struct UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_SwimSprintStart_Entered_Params
{
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_SwimStartAdditive_Entered
struct UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_SwimStartAdditive_Entered_Params
{
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_SwimMovementAccelAdditive_Exited
struct UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_SwimMovementAccelAdditive_Exited_Params
{
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_SwimJumpSurfaceLoop_Exited
struct UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_SwimJumpSurfaceLoop_Exited_Params
{
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_CreateToolFlyModeLoop_Entered
struct UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_CreateToolFlyModeLoop_Entered_Params
{
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_CreateToolFlyModeStart_Entered
struct UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_CreateToolFlyModeStart_Entered_Params
{
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_OpenGlider
struct UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_OpenGlider_Params
{
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_HeldObjectPlace
struct UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_HeldObjectPlace_Params
{
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_HeldObjectPickUp
struct UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_HeldObjectPickUp_Params
{
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.PlayFallFarAnims
struct UFortnite_M_Avg_Player_AnimBlueprint_C_PlayFallFarAnims_Params
{
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.StopFallFarAnims
struct UFortnite_M_Avg_Player_AnimBlueprint_C_StopFallFarAnims_Params
{
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.BlueprintUpdateAnimation
struct UFortnite_M_Avg_Player_AnimBlueprint_C_BlueprintUpdateAnimation_Params
{
	float                                              DeltaTimeX;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.Indigo_Boost__DelegateSignature
struct UFortnite_M_Avg_Player_AnimBlueprint_C_Indigo_Boost__DelegateSignature_Params
{
};

// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.MenuScreenDispatcher__DelegateSignature
struct UFortnite_M_Avg_Player_AnimBlueprint_C_MenuScreenDispatcher__DelegateSignature_Params
{
	class UFortPlayerAnimInstance*                     CharPart;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
