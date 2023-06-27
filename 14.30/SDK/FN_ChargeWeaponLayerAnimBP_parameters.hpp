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

// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemUpperBody
struct UChargeWeaponLayerAnimBP_C_ItemUpperBody_Params
{
	struct FPoseLink                                   InPoseUpperBody;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FFortAnimInput_AdjustedAim                  InputParam;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemUpperBody;                                            // (Parm, OutParm)
};

// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemFullBodySprint
struct UChargeWeaponLayerAnimBP_C_ItemFullBodySprint_Params
{
	struct FPoseLink                                   InPoseSprint;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemFullBodySprint;                                       // (Parm, OutParm)
};

// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemIdleAdditive
struct UChargeWeaponLayerAnimBP_C_ItemIdleAdditive_Params
{
	struct FPoseLink                                   InPoseIdleAdditive;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemIdleAdditive;                                         // (Parm, OutParm)
};

// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemCrouchTurningAdditive
struct UChargeWeaponLayerAnimBP_C_ItemCrouchTurningAdditive_Params
{
	struct FPoseLink                                   ItemCrouchTurningAdditive;                                // (Parm, OutParm)
};

// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemSlopeSliding
struct UChargeWeaponLayerAnimBP_C_ItemSlopeSliding_Params
{
	struct FPoseLink                                   ItemSlopeSliding;                                         // (Parm, OutParm)
};

// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemJumpUpAdditive
struct UChargeWeaponLayerAnimBP_C_ItemJumpUpAdditive_Params
{
	struct FPoseLink                                   ItemJumpUpAdditive;                                       // (Parm, OutParm)
};

// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemJumpLoopAdditive
struct UChargeWeaponLayerAnimBP_C_ItemJumpLoopAdditive_Params
{
	struct FPoseLink                                   ItemJumpLoopAdditive;                                     // (Parm, OutParm)
};

// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemFallAdditive
struct UChargeWeaponLayerAnimBP_C_ItemFallAdditive_Params
{
	struct FPoseLink                                   ItemFallAdditive;                                         // (Parm, OutParm)
};

// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemFallLandAdditive
struct UChargeWeaponLayerAnimBP_C_ItemFallLandAdditive_Params
{
	struct FPoseLink                                   ItemFallLandAdditive;                                     // (Parm, OutParm)
};

// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemJetPackStartAdditive
struct UChargeWeaponLayerAnimBP_C_ItemJetPackStartAdditive_Params
{
	struct FPoseLink                                   ItemJetPackStartAdditive;                                 // (Parm, OutParm)
};

// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemJetPackJumpAdditive
struct UChargeWeaponLayerAnimBP_C_ItemJetPackJumpAdditive_Params
{
	struct FPoseLink                                   ItemJetPackJumpAdditive;                                  // (Parm, OutParm)
};

// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemZipLineStartAdditive
struct UChargeWeaponLayerAnimBP_C_ItemZipLineStartAdditive_Params
{
	struct FPoseLink                                   ItemZipLineStartAdditive;                                 // (Parm, OutParm)
};

// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemFlyModeStartAdditive
struct UChargeWeaponLayerAnimBP_C_ItemFlyModeStartAdditive_Params
{
	struct FPoseLink                                   ItemFlyModeStartAdditive;                                 // (Parm, OutParm)
};

// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemFlyModeLoopAdditive
struct UChargeWeaponLayerAnimBP_C_ItemFlyModeLoopAdditive_Params
{
	struct FPoseLink                                   ItemFlyModeLoopAdditive;                                  // (Parm, OutParm)
};

// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemJogStartAdditive
struct UChargeWeaponLayerAnimBP_C_ItemJogStartAdditive_Params
{
	struct FPoseLink                                   InPoseJogStartAdditive;                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemJogStartAdditive;                                     // (Parm, OutParm)
};

// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemJogStopAdditive
struct UChargeWeaponLayerAnimBP_C_ItemJogStopAdditive_Params
{
	struct FPoseLink                                   InPoseJogStopAdditive;                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemJogStopAdditive;                                      // (Parm, OutParm)
};

// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemJogPrePivotAdditive
struct UChargeWeaponLayerAnimBP_C_ItemJogPrePivotAdditive_Params
{
	struct FPoseLink                                   InPosePrePivotAdditive;                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemJogPrePivotAdditive;                                  // (Parm, OutParm)
};

// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemJogPostPivotAdditive
struct UChargeWeaponLayerAnimBP_C_ItemJogPostPivotAdditive_Params
{
	struct FPoseLink                                   InPosePostPivotAdditive;                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemJogPostPivotAdditive;                                 // (Parm, OutParm)
};

// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemLowerBodyMovement
struct UChargeWeaponLayerAnimBP_C_ItemLowerBodyMovement_Params
{
	struct FPoseLink                                   InPoseLowerBodyMovement;                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemLowerBodyMovement;                                    // (Parm, OutParm)
};

// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemLowerBodyLeanAdditive
struct UChargeWeaponLayerAnimBP_C_ItemLowerBodyLeanAdditive_Params
{
	struct FPoseLink                                   InPoseLowerBodyLeanAdditive;                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemLowerBodyLeanAdditive;                                // (Parm, OutParm)
};

// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemLowerBodyJogStart
struct UChargeWeaponLayerAnimBP_C_ItemLowerBodyJogStart_Params
{
	struct FPoseLink                                   InPoseLowerBodyJogStart;                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemLowerBodyJogStart;                                    // (Parm, OutParm)
};

// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemLowerBodyJogStop
struct UChargeWeaponLayerAnimBP_C_ItemLowerBodyJogStop_Params
{
	struct FPoseLink                                   InPoseLowerBodyJogStop;                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemLowerBodyJogStop;                                     // (Parm, OutParm)
};

// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemLowerBodyJogPrePivot
struct UChargeWeaponLayerAnimBP_C_ItemLowerBodyJogPrePivot_Params
{
	struct FPoseLink                                   InPoseLowerBodyJogPrePivot;                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemLowerBodyJogPrePivot;                                 // (Parm, OutParm)
};

// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemLowerBodyJogPostPivot
struct UChargeWeaponLayerAnimBP_C_ItemLowerBodyJogPostPivot_Params
{
	struct FPoseLink                                   InPoseLowerBodyJogPostPivot;                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemLowerBodyJogPostPivot;                                // (Parm, OutParm)
};

// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemRelaxedEntry
struct UChargeWeaponLayerAnimBP_C_ItemRelaxedEntry_Params
{
	struct FPoseLink                                   InPoseRelaxedEntry;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemRelaxedEntry;                                         // (Parm, OutParm)
};

// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemSwimJumpStart
struct UChargeWeaponLayerAnimBP_C_ItemSwimJumpStart_Params
{
	struct FPoseLink                                   ItemSwimJumpStart;                                        // (Parm, OutParm)
};

// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemSwimJumpStartLoop
struct UChargeWeaponLayerAnimBP_C_ItemSwimJumpStartLoop_Params
{
	struct FPoseLink                                   ItemSwimJumpStartLoop;                                    // (Parm, OutParm)
};

// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemSwimJumpFallLoop
struct UChargeWeaponLayerAnimBP_C_ItemSwimJumpFallLoop_Params
{
	struct FPoseLink                                   ItemSwimJumpFallLoop;                                     // (Parm, OutParm)
};

// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemSwimJumpSurfaceLoop
struct UChargeWeaponLayerAnimBP_C_ItemSwimJumpSurfaceLoop_Params
{
	struct FPoseLink                                   ItemSwimJumpSurfaceLoop;                                  // (Parm, OutParm)
};

// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemSwimJumpSurfaceEnd
struct UChargeWeaponLayerAnimBP_C_ItemSwimJumpSurfaceEnd_Params
{
	struct FPoseLink                                   ItemSwimJumpSurfaceEnd;                                   // (Parm, OutParm)
};

// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemSkeletalControl
struct UChargeWeaponLayerAnimBP_C_ItemSkeletalControl_Params
{
	struct FPoseLink                                   InPose;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemSkeletalControl;                                      // (Parm, OutParm)
};

// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemAimOffset
struct UChargeWeaponLayerAnimBP_C_ItemAimOffset_Params
{
	struct FPoseLink                                   InPose_AimOffset;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              AimOffsetAlpha;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPoseLink                                   InPose_UpperLowerPreMeleeAO;                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemAimOffset;                                            // (Parm, OutParm)
};

// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemFullBodyOverride
struct UChargeWeaponLayerAnimBP_C_ItemFullBodyOverride_Params
{
	struct FPoseLink                                   InPoseFullBody;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemFullBodyOverride;                                     // (Parm, OutParm)
};

// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ItemPreIK
struct UChargeWeaponLayerAnimBP_C_ItemPreIK_Params
{
	struct FPoseLink                                   InPose_PreIK;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemPreIK;                                                // (Parm, OutParm)
};

// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.AnimGraph
struct UChargeWeaponLayerAnimBP_C_AnimGraph_Params
{
	struct FPoseLink                                   AnimGraph;                                                // (Parm, OutParm)
};

// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.BlueprintUpdateAnimation
struct UChargeWeaponLayerAnimBP_C_BlueprintUpdateAnimation_Params
{
	float                                              DeltaTimeX;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChargeWeaponLayerAnimBP.ChargeWeaponLayerAnimBP_C.ExecuteUbergraph_ChargeWeaponLayerAnimBP
struct UChargeWeaponLayerAnimBP_C_ExecuteUbergraph_ChargeWeaponLayerAnimBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
