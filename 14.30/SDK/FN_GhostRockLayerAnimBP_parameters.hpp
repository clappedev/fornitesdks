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

// Function GhostRockLayerAnimBP.GhostRockLayerAnimBP_C.ItemLowerBodyLeanAdditive
struct UGhostRockLayerAnimBP_C_ItemLowerBodyLeanAdditive_Params
{
	struct FPoseLink                                   InPoseLowerBodyLeanAdditive;                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemLowerBodyLeanAdditive;                                // (Parm, OutParm)
};

// Function GhostRockLayerAnimBP.GhostRockLayerAnimBP_C.ItemUpperBody
struct UGhostRockLayerAnimBP_C_ItemUpperBody_Params
{
	struct FPoseLink                                   InPoseUpperBody;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FFortAnimInput_AdjustedAim                  InputParam;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemUpperBody;                                            // (Parm, OutParm)
};

// Function GhostRockLayerAnimBP.GhostRockLayerAnimBP_C.ItemFullBodySprint
struct UGhostRockLayerAnimBP_C_ItemFullBodySprint_Params
{
	struct FPoseLink                                   InPoseSprint;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemFullBodySprint;                                       // (Parm, OutParm)
};

// Function GhostRockLayerAnimBP.GhostRockLayerAnimBP_C.ItemIdleAdditive
struct UGhostRockLayerAnimBP_C_ItemIdleAdditive_Params
{
	struct FPoseLink                                   InPoseIdleAdditive;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemIdleAdditive;                                         // (Parm, OutParm)
};

// Function GhostRockLayerAnimBP.GhostRockLayerAnimBP_C.ItemCrouchTurningAdditive
struct UGhostRockLayerAnimBP_C_ItemCrouchTurningAdditive_Params
{
	struct FPoseLink                                   ItemCrouchTurningAdditive;                                // (Parm, OutParm)
};

// Function GhostRockLayerAnimBP.GhostRockLayerAnimBP_C.ItemSlopeSliding
struct UGhostRockLayerAnimBP_C_ItemSlopeSliding_Params
{
	struct FPoseLink                                   ItemSlopeSliding;                                         // (Parm, OutParm)
};

// Function GhostRockLayerAnimBP.GhostRockLayerAnimBP_C.ItemJumpUpAdditive
struct UGhostRockLayerAnimBP_C_ItemJumpUpAdditive_Params
{
	struct FPoseLink                                   ItemJumpUpAdditive;                                       // (Parm, OutParm)
};

// Function GhostRockLayerAnimBP.GhostRockLayerAnimBP_C.ItemJumpLoopAdditive
struct UGhostRockLayerAnimBP_C_ItemJumpLoopAdditive_Params
{
	struct FPoseLink                                   ItemJumpLoopAdditive;                                     // (Parm, OutParm)
};

// Function GhostRockLayerAnimBP.GhostRockLayerAnimBP_C.ItemFallAdditive
struct UGhostRockLayerAnimBP_C_ItemFallAdditive_Params
{
	struct FPoseLink                                   ItemFallAdditive;                                         // (Parm, OutParm)
};

// Function GhostRockLayerAnimBP.GhostRockLayerAnimBP_C.ItemFallLandAdditive
struct UGhostRockLayerAnimBP_C_ItemFallLandAdditive_Params
{
	struct FPoseLink                                   ItemFallLandAdditive;                                     // (Parm, OutParm)
};

// Function GhostRockLayerAnimBP.GhostRockLayerAnimBP_C.ItemJetPackStartAdditive
struct UGhostRockLayerAnimBP_C_ItemJetPackStartAdditive_Params
{
	struct FPoseLink                                   ItemJetPackStartAdditive;                                 // (Parm, OutParm)
};

// Function GhostRockLayerAnimBP.GhostRockLayerAnimBP_C.ItemJetPackJumpAdditive
struct UGhostRockLayerAnimBP_C_ItemJetPackJumpAdditive_Params
{
	struct FPoseLink                                   ItemJetPackJumpAdditive;                                  // (Parm, OutParm)
};

// Function GhostRockLayerAnimBP.GhostRockLayerAnimBP_C.ItemZipLineStartAdditive
struct UGhostRockLayerAnimBP_C_ItemZipLineStartAdditive_Params
{
	struct FPoseLink                                   ItemZipLineStartAdditive;                                 // (Parm, OutParm)
};

// Function GhostRockLayerAnimBP.GhostRockLayerAnimBP_C.ItemFlyModeStartAdditive
struct UGhostRockLayerAnimBP_C_ItemFlyModeStartAdditive_Params
{
	struct FPoseLink                                   ItemFlyModeStartAdditive;                                 // (Parm, OutParm)
};

// Function GhostRockLayerAnimBP.GhostRockLayerAnimBP_C.ItemFlyModeLoopAdditive
struct UGhostRockLayerAnimBP_C_ItemFlyModeLoopAdditive_Params
{
	struct FPoseLink                                   ItemFlyModeLoopAdditive;                                  // (Parm, OutParm)
};

// Function GhostRockLayerAnimBP.GhostRockLayerAnimBP_C.ItemJogStartAdditive
struct UGhostRockLayerAnimBP_C_ItemJogStartAdditive_Params
{
	struct FPoseLink                                   InPoseJogStartAdditive;                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemJogStartAdditive;                                     // (Parm, OutParm)
};

// Function GhostRockLayerAnimBP.GhostRockLayerAnimBP_C.ItemJogStopAdditive
struct UGhostRockLayerAnimBP_C_ItemJogStopAdditive_Params
{
	struct FPoseLink                                   InPoseJogStopAdditive;                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemJogStopAdditive;                                      // (Parm, OutParm)
};

// Function GhostRockLayerAnimBP.GhostRockLayerAnimBP_C.ItemJogPrePivotAdditive
struct UGhostRockLayerAnimBP_C_ItemJogPrePivotAdditive_Params
{
	struct FPoseLink                                   InPosePrePivotAdditive;                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemJogPrePivotAdditive;                                  // (Parm, OutParm)
};

// Function GhostRockLayerAnimBP.GhostRockLayerAnimBP_C.ItemJogPostPivotAdditive
struct UGhostRockLayerAnimBP_C_ItemJogPostPivotAdditive_Params
{
	struct FPoseLink                                   InPosePostPivotAdditive;                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemJogPostPivotAdditive;                                 // (Parm, OutParm)
};

// Function GhostRockLayerAnimBP.GhostRockLayerAnimBP_C.ItemLowerBodyMovement
struct UGhostRockLayerAnimBP_C_ItemLowerBodyMovement_Params
{
	struct FPoseLink                                   InPoseLowerBodyMovement;                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemLowerBodyMovement;                                    // (Parm, OutParm)
};

// Function GhostRockLayerAnimBP.GhostRockLayerAnimBP_C.ItemLowerBodyJogStart
struct UGhostRockLayerAnimBP_C_ItemLowerBodyJogStart_Params
{
	struct FPoseLink                                   InPoseLowerBodyJogStart;                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemLowerBodyJogStart;                                    // (Parm, OutParm)
};

// Function GhostRockLayerAnimBP.GhostRockLayerAnimBP_C.ItemLowerBodyJogStop
struct UGhostRockLayerAnimBP_C_ItemLowerBodyJogStop_Params
{
	struct FPoseLink                                   InPoseLowerBodyJogStop;                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemLowerBodyJogStop;                                     // (Parm, OutParm)
};

// Function GhostRockLayerAnimBP.GhostRockLayerAnimBP_C.ItemLowerBodyJogPrePivot
struct UGhostRockLayerAnimBP_C_ItemLowerBodyJogPrePivot_Params
{
	struct FPoseLink                                   InPoseLowerBodyJogPrePivot;                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemLowerBodyJogPrePivot;                                 // (Parm, OutParm)
};

// Function GhostRockLayerAnimBP.GhostRockLayerAnimBP_C.ItemLowerBodyJogPostPivot
struct UGhostRockLayerAnimBP_C_ItemLowerBodyJogPostPivot_Params
{
	struct FPoseLink                                   InPoseLowerBodyJogPostPivot;                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemLowerBodyJogPostPivot;                                // (Parm, OutParm)
};

// Function GhostRockLayerAnimBP.GhostRockLayerAnimBP_C.ItemRelaxedEntry
struct UGhostRockLayerAnimBP_C_ItemRelaxedEntry_Params
{
	struct FPoseLink                                   InPoseRelaxedEntry;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemRelaxedEntry;                                         // (Parm, OutParm)
};

// Function GhostRockLayerAnimBP.GhostRockLayerAnimBP_C.AnimGraph
struct UGhostRockLayerAnimBP_C_AnimGraph_Params
{
	struct FPoseLink                                   AnimGraph;                                                // (Parm, OutParm)
};

// Function GhostRockLayerAnimBP.GhostRockLayerAnimBP_C.ExecuteUbergraph_GhostRockLayerAnimBP
struct UGhostRockLayerAnimBP_C_ExecuteUbergraph_GhostRockLayerAnimBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
