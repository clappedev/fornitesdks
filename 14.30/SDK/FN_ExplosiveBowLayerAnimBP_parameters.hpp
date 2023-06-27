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

// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemUpperBody
struct UExplosiveBowLayerAnimBP_C_ItemUpperBody_Params
{
	struct FPoseLink                                   InPoseUpperBody;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FFortAnimInput_AdjustedAim                  InputParam;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemUpperBody;                                            // (Parm, OutParm)
};

// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemFullBodySprint
struct UExplosiveBowLayerAnimBP_C_ItemFullBodySprint_Params
{
	struct FPoseLink                                   InPoseSprint;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemFullBodySprint;                                       // (Parm, OutParm)
};

// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemIdleAdditive
struct UExplosiveBowLayerAnimBP_C_ItemIdleAdditive_Params
{
	struct FPoseLink                                   InPoseIdleAdditive;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemIdleAdditive;                                         // (Parm, OutParm)
};

// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemCrouchTurningAdditive
struct UExplosiveBowLayerAnimBP_C_ItemCrouchTurningAdditive_Params
{
	struct FPoseLink                                   ItemCrouchTurningAdditive;                                // (Parm, OutParm)
};

// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemSlopeSliding
struct UExplosiveBowLayerAnimBP_C_ItemSlopeSliding_Params
{
	struct FPoseLink                                   ItemSlopeSliding;                                         // (Parm, OutParm)
};

// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemJumpUpAdditive
struct UExplosiveBowLayerAnimBP_C_ItemJumpUpAdditive_Params
{
	struct FPoseLink                                   ItemJumpUpAdditive;                                       // (Parm, OutParm)
};

// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemJumpLoopAdditive
struct UExplosiveBowLayerAnimBP_C_ItemJumpLoopAdditive_Params
{
	struct FPoseLink                                   ItemJumpLoopAdditive;                                     // (Parm, OutParm)
};

// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemFallAdditive
struct UExplosiveBowLayerAnimBP_C_ItemFallAdditive_Params
{
	struct FPoseLink                                   ItemFallAdditive;                                         // (Parm, OutParm)
};

// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemFallLandAdditive
struct UExplosiveBowLayerAnimBP_C_ItemFallLandAdditive_Params
{
	struct FPoseLink                                   ItemFallLandAdditive;                                     // (Parm, OutParm)
};

// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemJetPackStartAdditive
struct UExplosiveBowLayerAnimBP_C_ItemJetPackStartAdditive_Params
{
	struct FPoseLink                                   ItemJetPackStartAdditive;                                 // (Parm, OutParm)
};

// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemJetPackJumpAdditive
struct UExplosiveBowLayerAnimBP_C_ItemJetPackJumpAdditive_Params
{
	struct FPoseLink                                   ItemJetPackJumpAdditive;                                  // (Parm, OutParm)
};

// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemZipLineStartAdditive
struct UExplosiveBowLayerAnimBP_C_ItemZipLineStartAdditive_Params
{
	struct FPoseLink                                   ItemZipLineStartAdditive;                                 // (Parm, OutParm)
};

// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemFlyModeStartAdditive
struct UExplosiveBowLayerAnimBP_C_ItemFlyModeStartAdditive_Params
{
	struct FPoseLink                                   ItemFlyModeStartAdditive;                                 // (Parm, OutParm)
};

// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemFlyModeLoopAdditive
struct UExplosiveBowLayerAnimBP_C_ItemFlyModeLoopAdditive_Params
{
	struct FPoseLink                                   ItemFlyModeLoopAdditive;                                  // (Parm, OutParm)
};

// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemJogStartAdditive
struct UExplosiveBowLayerAnimBP_C_ItemJogStartAdditive_Params
{
	struct FPoseLink                                   InPoseJogStartAdditive;                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemJogStartAdditive;                                     // (Parm, OutParm)
};

// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemJogStopAdditive
struct UExplosiveBowLayerAnimBP_C_ItemJogStopAdditive_Params
{
	struct FPoseLink                                   InPoseJogStopAdditive;                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemJogStopAdditive;                                      // (Parm, OutParm)
};

// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemJogPrePivotAdditive
struct UExplosiveBowLayerAnimBP_C_ItemJogPrePivotAdditive_Params
{
	struct FPoseLink                                   InPosePrePivotAdditive;                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemJogPrePivotAdditive;                                  // (Parm, OutParm)
};

// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemJogPostPivotAdditive
struct UExplosiveBowLayerAnimBP_C_ItemJogPostPivotAdditive_Params
{
	struct FPoseLink                                   InPosePostPivotAdditive;                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemJogPostPivotAdditive;                                 // (Parm, OutParm)
};

// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemLowerBodyMovement
struct UExplosiveBowLayerAnimBP_C_ItemLowerBodyMovement_Params
{
	struct FPoseLink                                   InPoseLowerBodyMovement;                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemLowerBodyMovement;                                    // (Parm, OutParm)
};

// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemLowerBodyLeanAdditive
struct UExplosiveBowLayerAnimBP_C_ItemLowerBodyLeanAdditive_Params
{
	struct FPoseLink                                   InPoseLowerBodyLeanAdditive;                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemLowerBodyLeanAdditive;                                // (Parm, OutParm)
};

// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemLowerBodyJogStart
struct UExplosiveBowLayerAnimBP_C_ItemLowerBodyJogStart_Params
{
	struct FPoseLink                                   InPoseLowerBodyJogStart;                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemLowerBodyJogStart;                                    // (Parm, OutParm)
};

// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemLowerBodyJogStop
struct UExplosiveBowLayerAnimBP_C_ItemLowerBodyJogStop_Params
{
	struct FPoseLink                                   InPoseLowerBodyJogStop;                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemLowerBodyJogStop;                                     // (Parm, OutParm)
};

// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemLowerBodyJogPrePivot
struct UExplosiveBowLayerAnimBP_C_ItemLowerBodyJogPrePivot_Params
{
	struct FPoseLink                                   InPoseLowerBodyJogPrePivot;                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemLowerBodyJogPrePivot;                                 // (Parm, OutParm)
};

// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemLowerBodyJogPostPivot
struct UExplosiveBowLayerAnimBP_C_ItemLowerBodyJogPostPivot_Params
{
	struct FPoseLink                                   InPoseLowerBodyJogPostPivot;                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemLowerBodyJogPostPivot;                                // (Parm, OutParm)
};

// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ItemRelaxedEntry
struct UExplosiveBowLayerAnimBP_C_ItemRelaxedEntry_Params
{
	struct FPoseLink                                   InPoseRelaxedEntry;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   ItemRelaxedEntry;                                         // (Parm, OutParm)
};

// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.AnimGraph
struct UExplosiveBowLayerAnimBP_C_AnimGraph_Params
{
	struct FPoseLink                                   AnimGraph;                                                // (Parm, OutParm)
};

// Function ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C.ExecuteUbergraph_ExplosiveBowLayerAnimBP
struct UExplosiveBowLayerAnimBP_C_ExecuteUbergraph_ExplosiveBowLayerAnimBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
