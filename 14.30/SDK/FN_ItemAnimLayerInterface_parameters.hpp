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

// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemPreIK
struct UItemAnimLayerInterface_C_ItemPreIK_Params
{
	struct FPoseLink                                   InPose_PreIK;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemPreIK;                                                // (Parm, OutParm)
};

// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemFullBodyOverride
struct UItemAnimLayerInterface_C_ItemFullBodyOverride_Params
{
	struct FPoseLink                                   InPoseFullBody;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemFullBodyOverride;                                     // (Parm, OutParm)
};

// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemAimOffset
struct UItemAnimLayerInterface_C_ItemAimOffset_Params
{
	struct FPoseLink                                   InPose_AimOffset;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              AimOffsetAlpha;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPoseLink                                   InPose_UpperLowerPreMeleeAO;                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemAimOffset;                                            // (Parm, OutParm)
};

// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemSkeletalControl
struct UItemAnimLayerInterface_C_ItemSkeletalControl_Params
{
	struct FPoseLink                                   InPose;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemSkeletalControl;                                      // (Parm, OutParm)
};

// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemSwimJumpSurfaceEnd
struct UItemAnimLayerInterface_C_ItemSwimJumpSurfaceEnd_Params
{
	struct FPoseLink                                   ItemSwimJumpSurfaceEnd;                                   // (Parm, OutParm)
};

// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemSwimJumpSurfaceLoop
struct UItemAnimLayerInterface_C_ItemSwimJumpSurfaceLoop_Params
{
	struct FPoseLink                                   ItemSwimJumpSurfaceLoop;                                  // (Parm, OutParm)
};

// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemSwimJumpFallLoop
struct UItemAnimLayerInterface_C_ItemSwimJumpFallLoop_Params
{
	struct FPoseLink                                   ItemSwimJumpFallLoop;                                     // (Parm, OutParm)
};

// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemSwimJumpStartLoop
struct UItemAnimLayerInterface_C_ItemSwimJumpStartLoop_Params
{
	struct FPoseLink                                   ItemSwimJumpStartLoop;                                    // (Parm, OutParm)
};

// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemSwimJumpStart
struct UItemAnimLayerInterface_C_ItemSwimJumpStart_Params
{
	struct FPoseLink                                   ItemSwimJumpStart;                                        // (Parm, OutParm)
};

// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemRelaxedEntry
struct UItemAnimLayerInterface_C_ItemRelaxedEntry_Params
{
	struct FPoseLink                                   InPoseRelaxedEntry;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemRelaxedEntry;                                         // (Parm, OutParm)
};

// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemLowerBodyJogPostPivot
struct UItemAnimLayerInterface_C_ItemLowerBodyJogPostPivot_Params
{
	struct FPoseLink                                   InPoseLowerBodyJogPostPivot;                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemLowerBodyJogPostPivot;                                // (Parm, OutParm)
};

// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemLowerBodyJogPrePivot
struct UItemAnimLayerInterface_C_ItemLowerBodyJogPrePivot_Params
{
	struct FPoseLink                                   InPoseLowerBodyJogPrePivot;                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemLowerBodyJogPrePivot;                                 // (Parm, OutParm)
};

// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemLowerBodyJogStop
struct UItemAnimLayerInterface_C_ItemLowerBodyJogStop_Params
{
	struct FPoseLink                                   InPoseLowerBodyJogStop;                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemLowerBodyJogStop;                                     // (Parm, OutParm)
};

// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemLowerBodyJogStart
struct UItemAnimLayerInterface_C_ItemLowerBodyJogStart_Params
{
	struct FPoseLink                                   InPoseLowerBodyJogStart;                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemLowerBodyJogStart;                                    // (Parm, OutParm)
};

// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemLowerBodyLeanAdditive
struct UItemAnimLayerInterface_C_ItemLowerBodyLeanAdditive_Params
{
	struct FPoseLink                                   InPoseLowerBodyLeanAdditive;                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemLowerBodyLeanAdditive;                                // (Parm, OutParm)
};

// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemLowerBodyMovement
struct UItemAnimLayerInterface_C_ItemLowerBodyMovement_Params
{
	struct FPoseLink                                   InPoseLowerBodyMovement;                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemLowerBodyMovement;                                    // (Parm, OutParm)
};

// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemJogPostPivotAdditive
struct UItemAnimLayerInterface_C_ItemJogPostPivotAdditive_Params
{
	struct FPoseLink                                   InPosePostPivotAdditive;                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemJogPostPivotAdditive;                                 // (Parm, OutParm)
};

// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemJogPrePivotAdditive
struct UItemAnimLayerInterface_C_ItemJogPrePivotAdditive_Params
{
	struct FPoseLink                                   InPosePrePivotAdditive;                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemJogPrePivotAdditive;                                  // (Parm, OutParm)
};

// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemJogStopAdditive
struct UItemAnimLayerInterface_C_ItemJogStopAdditive_Params
{
	struct FPoseLink                                   InPoseJogStopAdditive;                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemJogStopAdditive;                                      // (Parm, OutParm)
};

// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemJogStartAdditive
struct UItemAnimLayerInterface_C_ItemJogStartAdditive_Params
{
	struct FPoseLink                                   InPoseJogStartAdditive;                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemJogStartAdditive;                                     // (Parm, OutParm)
};

// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemFlyModeLoopAdditive
struct UItemAnimLayerInterface_C_ItemFlyModeLoopAdditive_Params
{
	struct FPoseLink                                   ItemFlyModeLoopAdditive;                                  // (Parm, OutParm)
};

// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemFlyModeStartAdditive
struct UItemAnimLayerInterface_C_ItemFlyModeStartAdditive_Params
{
	struct FPoseLink                                   ItemFlyModeStartAdditive;                                 // (Parm, OutParm)
};

// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemZipLineStartAdditive
struct UItemAnimLayerInterface_C_ItemZipLineStartAdditive_Params
{
	struct FPoseLink                                   ItemZipLineStartAdditive;                                 // (Parm, OutParm)
};

// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemJetPackJumpAdditive
struct UItemAnimLayerInterface_C_ItemJetPackJumpAdditive_Params
{
	struct FPoseLink                                   ItemJetPackJumpAdditive;                                  // (Parm, OutParm)
};

// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemJetPackStartAdditive
struct UItemAnimLayerInterface_C_ItemJetPackStartAdditive_Params
{
	struct FPoseLink                                   ItemJetPackStartAdditive;                                 // (Parm, OutParm)
};

// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemFallLandAdditive
struct UItemAnimLayerInterface_C_ItemFallLandAdditive_Params
{
	struct FPoseLink                                   ItemFallLandAdditive;                                     // (Parm, OutParm)
};

// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemFallAdditive
struct UItemAnimLayerInterface_C_ItemFallAdditive_Params
{
	struct FPoseLink                                   ItemFallAdditive;                                         // (Parm, OutParm)
};

// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemJumpLoopAdditive
struct UItemAnimLayerInterface_C_ItemJumpLoopAdditive_Params
{
	struct FPoseLink                                   ItemJumpLoopAdditive;                                     // (Parm, OutParm)
};

// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemJumpUpAdditive
struct UItemAnimLayerInterface_C_ItemJumpUpAdditive_Params
{
	struct FPoseLink                                   ItemJumpUpAdditive;                                       // (Parm, OutParm)
};

// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemSlopeSliding
struct UItemAnimLayerInterface_C_ItemSlopeSliding_Params
{
	struct FPoseLink                                   ItemSlopeSliding;                                         // (Parm, OutParm)
};

// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemCrouchTurningAdditive
struct UItemAnimLayerInterface_C_ItemCrouchTurningAdditive_Params
{
	struct FPoseLink                                   ItemCrouchTurningAdditive;                                // (Parm, OutParm)
};

// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemIdleAdditive
struct UItemAnimLayerInterface_C_ItemIdleAdditive_Params
{
	struct FPoseLink                                   InPoseIdleAdditive;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemIdleAdditive;                                         // (Parm, OutParm)
};

// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemFullBodySprint
struct UItemAnimLayerInterface_C_ItemFullBodySprint_Params
{
	struct FPoseLink                                   InPoseSprint;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemFullBodySprint;                                       // (Parm, OutParm)
};

// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemUpperBody
struct UItemAnimLayerInterface_C_ItemUpperBody_Params
{
	struct FPoseLink                                   InPoseUpperBody;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FFortAnimInput_AdjustedAim                  InputParam;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemUpperBody;                                            // (Parm, OutParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
