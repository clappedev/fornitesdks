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

// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.Get Goal Visibility Level
struct AGCN_Loop_SpookyMist_C_Get_Goal_Visibility_Level_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.Is Player Controller Friendly
struct AGCN_Loop_SpookyMist_C_Is_Player_Controller_Friendly_Params
{
	class AController*                                 PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Is_Friendly_Player;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.ShouldRenderAsLocalPlayer
struct AGCN_Loop_SpookyMist_C_ShouldRenderAsLocalPlayer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.TickMovement Opacity
struct AGCN_Loop_SpookyMist_C_TickMovement_Opacity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.ShouldSpeedRibbonsBeVisible
struct AGCN_Loop_SpookyMist_C_ShouldSpeedRibbonsBeVisible_Params
{
	bool                                               Should_Show_Speed_Ribbons;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.Get Skeletal Meshes
struct AGCN_Loop_SpookyMist_C_Get_Skeletal_Meshes_Params
{
};

// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.Timeline Interaction Fade In Out__FinishedFunc
struct AGCN_Loop_SpookyMist_C_Timeline_Interaction_Fade_In_Out__FinishedFunc_Params
{
};

// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.Timeline Interaction Fade In Out__UpdateFunc
struct AGCN_Loop_SpookyMist_C_Timeline_Interaction_Fade_In_Out__UpdateFunc_Params
{
};

// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.OnLoopingStart
struct AGCN_Loop_SpookyMist_C_OnLoopingStart_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UParticleSystemComponent*>            ParticleComponents;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UAudioComponent*>                     AudioComponents;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.OnRemoval
struct AGCN_Loop_SpookyMist_C_OnRemoval_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UParticleSystemComponent*>            ParticleComponents;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UAudioComponent*>                     AudioComponents;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UCameraShake*                                BurstCameraShakeInstance;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ADecalActor*                                 BurstDecalInstance;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.ReceiveTick
struct AGCN_Loop_SpookyMist_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.BeginExpireTell
struct AGCN_Loop_SpookyMist_C_BeginExpireTell_Params
{
};

// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.ClearExpireTell
struct AGCN_Loop_SpookyMist_C_ClearExpireTell_Params
{
};

// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.ExpireWarningTick
struct AGCN_Loop_SpookyMist_C_ExpireWarningTick_Params
{
};

// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.Audio Tick
struct AGCN_Loop_SpookyMist_C_Audio_Tick_Params
{
	float                                              Velocity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.StartedInteract
struct AGCN_Loop_SpookyMist_C_StartedInteract_Params
{
};

// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.EndedInteract
struct AGCN_Loop_SpookyMist_C_EndedInteract_Params
{
};

// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.UpdateTeamVisbility
struct AGCN_Loop_SpookyMist_C_UpdateTeamVisbility_Params
{
};

// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.Initialize Player Skeletal Meshes
struct AGCN_Loop_SpookyMist_C_Initialize_Player_Skeletal_Meshes_Params
{
};

// Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.ExecuteUbergraph_GCN_Loop_SpookyMist
struct AGCN_Loop_SpookyMist_C_ExecuteUbergraph_GCN_Loop_SpookyMist_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
