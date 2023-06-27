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

// Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.SetJetpackAudioEnabled
struct AGCL_BoostJumpPack_Hovering_C_SetJetpackAudioEnabled_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.OnRemove
struct AGCL_BoostJumpPack_Hovering_C_OnRemove_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.OnActive
struct AGCL_BoostJumpPack_Hovering_C_OnActive_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.On Pawn Landed
struct AGCL_BoostJumpPack_Hovering_C_On_Pawn_Landed_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.ResetFX
struct AGCL_BoostJumpPack_Hovering_C_ResetFX_Params
{
};

// Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.K2_HandleGameplayCue
struct AGCL_BoostJumpPack_Hovering_C_K2_HandleGameplayCue_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.ReceiveDestroyed
struct AGCL_BoostJumpPack_Hovering_C_ReceiveDestroyed_Params
{
};

// Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.PlayLowFuelWarning
struct AGCL_BoostJumpPack_Hovering_C_PlayLowFuelWarning_Params
{
};

// Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.TryToPlayGroundEffects
struct AGCL_BoostJumpPack_Hovering_C_TryToPlayGroundEffects_Params
{
};

// Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.ExecuteUbergraph_GCL_BoostJumpPack_Hovering
struct AGCL_BoostJumpPack_Hovering_C_ExecuteUbergraph_GCL_BoostJumpPack_Hovering_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
