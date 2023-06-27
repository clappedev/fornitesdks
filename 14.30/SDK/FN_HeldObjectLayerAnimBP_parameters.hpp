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

// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemFullBodyOverride
struct UHeldObjectLayerAnimBP_C_ItemFullBodyOverride_Params
{
	struct FPoseLink                                   InPoseFullBody;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemFullBodyOverride;                                     // (Parm, OutParm)
};

// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemAimOffset
struct UHeldObjectLayerAnimBP_C_ItemAimOffset_Params
{
	struct FPoseLink                                   InPose_AimOffset;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              AimOffsetAlpha;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPoseLink                                   InPose_UpperLowerPreMeleeAO;                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemAimOffset;                                            // (Parm, OutParm)
};

// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemUpperBody
struct UHeldObjectLayerAnimBP_C_ItemUpperBody_Params
{
	struct FPoseLink                                   InPoseUpperBody;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FFortAnimInput_AdjustedAim                  InputParam;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemUpperBody;                                            // (Parm, OutParm)
};

// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemFullBodySprint
struct UHeldObjectLayerAnimBP_C_ItemFullBodySprint_Params
{
	struct FPoseLink                                   InPoseSprint;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemFullBodySprint;                                       // (Parm, OutParm)
};

// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemIdleAdditive
struct UHeldObjectLayerAnimBP_C_ItemIdleAdditive_Params
{
	struct FPoseLink                                   InPoseIdleAdditive;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemIdleAdditive;                                         // (Parm, OutParm)
};

// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemCrouchTurningAdditive
struct UHeldObjectLayerAnimBP_C_ItemCrouchTurningAdditive_Params
{
	struct FPoseLink                                   ItemCrouchTurningAdditive;                                // (Parm, OutParm)
};

// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemSlopeSliding
struct UHeldObjectLayerAnimBP_C_ItemSlopeSliding_Params
{
	struct FPoseLink                                   ItemSlopeSliding;                                         // (Parm, OutParm)
};

// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemJumpUpAdditive
struct UHeldObjectLayerAnimBP_C_ItemJumpUpAdditive_Params
{
	struct FPoseLink                                   ItemJumpUpAdditive;                                       // (Parm, OutParm)
};

// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemJumpLoopAdditive
struct UHeldObjectLayerAnimBP_C_ItemJumpLoopAdditive_Params
{
	struct FPoseLink                                   ItemJumpLoopAdditive;                                     // (Parm, OutParm)
};

// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemFallAdditive
struct UHeldObjectLayerAnimBP_C_ItemFallAdditive_Params
{
	struct FPoseLink                                   ItemFallAdditive;                                         // (Parm, OutParm)
};

// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemFallLandAdditive
struct UHeldObjectLayerAnimBP_C_ItemFallLandAdditive_Params
{
	struct FPoseLink                                   ItemFallLandAdditive;                                     // (Parm, OutParm)
};

// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemJetPackStartAdditive
struct UHeldObjectLayerAnimBP_C_ItemJetPackStartAdditive_Params
{
	struct FPoseLink                                   ItemJetPackStartAdditive;                                 // (Parm, OutParm)
};

// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemJetPackJumpAdditive
struct UHeldObjectLayerAnimBP_C_ItemJetPackJumpAdditive_Params
{
	struct FPoseLink                                   ItemJetPackJumpAdditive;                                  // (Parm, OutParm)
};

// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemZipLineStartAdditive
struct UHeldObjectLayerAnimBP_C_ItemZipLineStartAdditive_Params
{
	struct FPoseLink                                   ItemZipLineStartAdditive;                                 // (Parm, OutParm)
};

// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemFlyModeStartAdditive
struct UHeldObjectLayerAnimBP_C_ItemFlyModeStartAdditive_Params
{
	struct FPoseLink                                   ItemFlyModeStartAdditive;                                 // (Parm, OutParm)
};

// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemFlyModeLoopAdditive
struct UHeldObjectLayerAnimBP_C_ItemFlyModeLoopAdditive_Params
{
	struct FPoseLink                                   ItemFlyModeLoopAdditive;                                  // (Parm, OutParm)
};

// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemJogStartAdditive
struct UHeldObjectLayerAnimBP_C_ItemJogStartAdditive_Params
{
	struct FPoseLink                                   InPoseJogStartAdditive;                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemJogStartAdditive;                                     // (Parm, OutParm)
};

// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemJogStopAdditive
struct UHeldObjectLayerAnimBP_C_ItemJogStopAdditive_Params
{
	struct FPoseLink                                   InPoseJogStopAdditive;                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemJogStopAdditive;                                      // (Parm, OutParm)
};

// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemJogPrePivotAdditive
struct UHeldObjectLayerAnimBP_C_ItemJogPrePivotAdditive_Params
{
	struct FPoseLink                                   InPosePrePivotAdditive;                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemJogPrePivotAdditive;                                  // (Parm, OutParm)
};

// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemJogPostPivotAdditive
struct UHeldObjectLayerAnimBP_C_ItemJogPostPivotAdditive_Params
{
	struct FPoseLink                                   InPosePostPivotAdditive;                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemJogPostPivotAdditive;                                 // (Parm, OutParm)
};

// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemLowerBodyMovement
struct UHeldObjectLayerAnimBP_C_ItemLowerBodyMovement_Params
{
	struct FPoseLink                                   InPoseLowerBodyMovement;                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemLowerBodyMovement;                                    // (Parm, OutParm)
};

// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemLowerBodyLeanAdditive
struct UHeldObjectLayerAnimBP_C_ItemLowerBodyLeanAdditive_Params
{
	struct FPoseLink                                   InPoseLowerBodyLeanAdditive;                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemLowerBodyLeanAdditive;                                // (Parm, OutParm)
};

// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemLowerBodyJogStart
struct UHeldObjectLayerAnimBP_C_ItemLowerBodyJogStart_Params
{
	struct FPoseLink                                   InPoseLowerBodyJogStart;                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemLowerBodyJogStart;                                    // (Parm, OutParm)
};

// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemLowerBodyJogStop
struct UHeldObjectLayerAnimBP_C_ItemLowerBodyJogStop_Params
{
	struct FPoseLink                                   InPoseLowerBodyJogStop;                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemLowerBodyJogStop;                                     // (Parm, OutParm)
};

// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemLowerBodyJogPrePivot
struct UHeldObjectLayerAnimBP_C_ItemLowerBodyJogPrePivot_Params
{
	struct FPoseLink                                   InPoseLowerBodyJogPrePivot;                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemLowerBodyJogPrePivot;                                 // (Parm, OutParm)
};

// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemLowerBodyJogPostPivot
struct UHeldObjectLayerAnimBP_C_ItemLowerBodyJogPostPivot_Params
{
	struct FPoseLink                                   InPoseLowerBodyJogPostPivot;                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemLowerBodyJogPostPivot;                                // (Parm, OutParm)
};

// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemRelaxedEntry
struct UHeldObjectLayerAnimBP_C_ItemRelaxedEntry_Params
{
	struct FPoseLink                                   InPoseRelaxedEntry;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemRelaxedEntry;                                         // (Parm, OutParm)
};

// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemSwimJumpStart
struct UHeldObjectLayerAnimBP_C_ItemSwimJumpStart_Params
{
	struct FPoseLink                                   ItemSwimJumpStart;                                        // (Parm, OutParm)
};

// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemSwimJumpStartLoop
struct UHeldObjectLayerAnimBP_C_ItemSwimJumpStartLoop_Params
{
	struct FPoseLink                                   ItemSwimJumpStartLoop;                                    // (Parm, OutParm)
};

// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemSwimJumpFallLoop
struct UHeldObjectLayerAnimBP_C_ItemSwimJumpFallLoop_Params
{
	struct FPoseLink                                   ItemSwimJumpFallLoop;                                     // (Parm, OutParm)
};

// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemSwimJumpSurfaceLoop
struct UHeldObjectLayerAnimBP_C_ItemSwimJumpSurfaceLoop_Params
{
	struct FPoseLink                                   ItemSwimJumpSurfaceLoop;                                  // (Parm, OutParm)
};

// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemSwimJumpSurfaceEnd
struct UHeldObjectLayerAnimBP_C_ItemSwimJumpSurfaceEnd_Params
{
	struct FPoseLink                                   ItemSwimJumpSurfaceEnd;                                   // (Parm, OutParm)
};

// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ItemSkeletalControl
struct UHeldObjectLayerAnimBP_C_ItemSkeletalControl_Params
{
	struct FPoseLink                                   InPose;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemSkeletalControl;                                      // (Parm, OutParm)
};

// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.AnimGraph
struct UHeldObjectLayerAnimBP_C_AnimGraph_Params
{
	struct FPoseLink                                   AnimGraph;                                                // (Parm, OutParm)
};

// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.AnimNotify_HeldObjectPlace
struct UHeldObjectLayerAnimBP_C_AnimNotify_HeldObjectPlace_Params
{
};

// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.AnimNotify_HeldObjectPickUp
struct UHeldObjectLayerAnimBP_C_AnimNotify_HeldObjectPickUp_Params
{
};

// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.BlueprintInitializeAnimation
struct UHeldObjectLayerAnimBP_C_BlueprintInitializeAnimation_Params
{
};

// Function HeldObjectLayerAnimBP.HeldObjectLayerAnimBP_C.ExecuteUbergraph_HeldObjectLayerAnimBP
struct UHeldObjectLayerAnimBP_C_ExecuteUbergraph_HeldObjectLayerAnimBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
