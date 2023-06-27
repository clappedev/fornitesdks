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

// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemSwimJumpSurfaceEnd
struct UBadgerBangsLayerAnimBP_C_ItemSwimJumpSurfaceEnd_Params
{
	struct FPoseLink                                   ItemSwimJumpSurfaceEnd;                                   // (Parm, OutParm)
};

// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemSwimJumpSurfaceLoop
struct UBadgerBangsLayerAnimBP_C_ItemSwimJumpSurfaceLoop_Params
{
	struct FPoseLink                                   ItemSwimJumpSurfaceLoop;                                  // (Parm, OutParm)
};

// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemSwimJumpFallLoop
struct UBadgerBangsLayerAnimBP_C_ItemSwimJumpFallLoop_Params
{
	struct FPoseLink                                   ItemSwimJumpFallLoop;                                     // (Parm, OutParm)
};

// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemSwimJumpStartLoop
struct UBadgerBangsLayerAnimBP_C_ItemSwimJumpStartLoop_Params
{
	struct FPoseLink                                   ItemSwimJumpStartLoop;                                    // (Parm, OutParm)
};

// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemUpperBody
struct UBadgerBangsLayerAnimBP_C_ItemUpperBody_Params
{
	struct FPoseLink                                   InPoseUpperBody;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FFortAnimInput_AdjustedAim                  InputParam;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemUpperBody;                                            // (Parm, OutParm)
};

// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemFullBodySprint
struct UBadgerBangsLayerAnimBP_C_ItemFullBodySprint_Params
{
	struct FPoseLink                                   InPoseSprint;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemFullBodySprint;                                       // (Parm, OutParm)
};

// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemIdleAdditive
struct UBadgerBangsLayerAnimBP_C_ItemIdleAdditive_Params
{
	struct FPoseLink                                   InPoseIdleAdditive;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemIdleAdditive;                                         // (Parm, OutParm)
};

// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemCrouchTurningAdditive
struct UBadgerBangsLayerAnimBP_C_ItemCrouchTurningAdditive_Params
{
	struct FPoseLink                                   ItemCrouchTurningAdditive;                                // (Parm, OutParm)
};

// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemSlopeSliding
struct UBadgerBangsLayerAnimBP_C_ItemSlopeSliding_Params
{
	struct FPoseLink                                   ItemSlopeSliding;                                         // (Parm, OutParm)
};

// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemJumpUpAdditive
struct UBadgerBangsLayerAnimBP_C_ItemJumpUpAdditive_Params
{
	struct FPoseLink                                   ItemJumpUpAdditive;                                       // (Parm, OutParm)
};

// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemJumpLoopAdditive
struct UBadgerBangsLayerAnimBP_C_ItemJumpLoopAdditive_Params
{
	struct FPoseLink                                   ItemJumpLoopAdditive;                                     // (Parm, OutParm)
};

// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemFallAdditive
struct UBadgerBangsLayerAnimBP_C_ItemFallAdditive_Params
{
	struct FPoseLink                                   ItemFallAdditive;                                         // (Parm, OutParm)
};

// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemFallLandAdditive
struct UBadgerBangsLayerAnimBP_C_ItemFallLandAdditive_Params
{
	struct FPoseLink                                   ItemFallLandAdditive;                                     // (Parm, OutParm)
};

// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemJetPackStartAdditive
struct UBadgerBangsLayerAnimBP_C_ItemJetPackStartAdditive_Params
{
	struct FPoseLink                                   ItemJetPackStartAdditive;                                 // (Parm, OutParm)
};

// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemJetPackJumpAdditive
struct UBadgerBangsLayerAnimBP_C_ItemJetPackJumpAdditive_Params
{
	struct FPoseLink                                   ItemJetPackJumpAdditive;                                  // (Parm, OutParm)
};

// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemZipLineStartAdditive
struct UBadgerBangsLayerAnimBP_C_ItemZipLineStartAdditive_Params
{
	struct FPoseLink                                   ItemZipLineStartAdditive;                                 // (Parm, OutParm)
};

// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemFlyModeStartAdditive
struct UBadgerBangsLayerAnimBP_C_ItemFlyModeStartAdditive_Params
{
	struct FPoseLink                                   ItemFlyModeStartAdditive;                                 // (Parm, OutParm)
};

// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemFlyModeLoopAdditive
struct UBadgerBangsLayerAnimBP_C_ItemFlyModeLoopAdditive_Params
{
	struct FPoseLink                                   ItemFlyModeLoopAdditive;                                  // (Parm, OutParm)
};

// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemJogStartAdditive
struct UBadgerBangsLayerAnimBP_C_ItemJogStartAdditive_Params
{
	struct FPoseLink                                   InPoseJogStartAdditive;                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemJogStartAdditive;                                     // (Parm, OutParm)
};

// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemJogStopAdditive
struct UBadgerBangsLayerAnimBP_C_ItemJogStopAdditive_Params
{
	struct FPoseLink                                   InPoseJogStopAdditive;                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemJogStopAdditive;                                      // (Parm, OutParm)
};

// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemJogPrePivotAdditive
struct UBadgerBangsLayerAnimBP_C_ItemJogPrePivotAdditive_Params
{
	struct FPoseLink                                   InPosePrePivotAdditive;                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemJogPrePivotAdditive;                                  // (Parm, OutParm)
};

// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemJogPostPivotAdditive
struct UBadgerBangsLayerAnimBP_C_ItemJogPostPivotAdditive_Params
{
	struct FPoseLink                                   InPosePostPivotAdditive;                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemJogPostPivotAdditive;                                 // (Parm, OutParm)
};

// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemLowerBodyMovement
struct UBadgerBangsLayerAnimBP_C_ItemLowerBodyMovement_Params
{
	struct FPoseLink                                   InPoseLowerBodyMovement;                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemLowerBodyMovement;                                    // (Parm, OutParm)
};

// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemLowerBodyLeanAdditive
struct UBadgerBangsLayerAnimBP_C_ItemLowerBodyLeanAdditive_Params
{
	struct FPoseLink                                   InPoseLowerBodyLeanAdditive;                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemLowerBodyLeanAdditive;                                // (Parm, OutParm)
};

// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemLowerBodyJogStart
struct UBadgerBangsLayerAnimBP_C_ItemLowerBodyJogStart_Params
{
	struct FPoseLink                                   InPoseLowerBodyJogStart;                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemLowerBodyJogStart;                                    // (Parm, OutParm)
};

// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemLowerBodyJogStop
struct UBadgerBangsLayerAnimBP_C_ItemLowerBodyJogStop_Params
{
	struct FPoseLink                                   InPoseLowerBodyJogStop;                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemLowerBodyJogStop;                                     // (Parm, OutParm)
};

// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemLowerBodyJogPrePivot
struct UBadgerBangsLayerAnimBP_C_ItemLowerBodyJogPrePivot_Params
{
	struct FPoseLink                                   InPoseLowerBodyJogPrePivot;                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemLowerBodyJogPrePivot;                                 // (Parm, OutParm)
};

// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemLowerBodyJogPostPivot
struct UBadgerBangsLayerAnimBP_C_ItemLowerBodyJogPostPivot_Params
{
	struct FPoseLink                                   InPoseLowerBodyJogPostPivot;                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemLowerBodyJogPostPivot;                                // (Parm, OutParm)
};

// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemRelaxedEntry
struct UBadgerBangsLayerAnimBP_C_ItemRelaxedEntry_Params
{
	struct FPoseLink                                   InPoseRelaxedEntry;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemRelaxedEntry;                                         // (Parm, OutParm)
};

// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemSwimJumpStart
struct UBadgerBangsLayerAnimBP_C_ItemSwimJumpStart_Params
{
	struct FPoseLink                                   ItemSwimJumpStart;                                        // (Parm, OutParm)
};

// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.AnimGraph
struct UBadgerBangsLayerAnimBP_C_AnimGraph_Params
{
	struct FPoseLink                                   AnimGraph;                                                // (Parm, OutParm)
};

// Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ExecuteUbergraph_BadgerBangsLayerAnimBP
struct UBadgerBangsLayerAnimBP_C_ExecuteUbergraph_BadgerBangsLayerAnimBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
