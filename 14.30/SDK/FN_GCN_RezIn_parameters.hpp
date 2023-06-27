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

// Function GCN_RezIn.GCN_RezIn_C.Spawn Drone VFX
struct AGCN_RezIn_C_Spawn_Drone_VFX_Params
{
};

// Function GCN_RezIn.GCN_RezIn_C.Set Timelines' Playrates
struct AGCN_RezIn_C_Set_Timelines__Playrates_Params
{
};

// Function GCN_RezIn.GCN_RezIn_C.Spawn Teleport In VFX
struct AGCN_RezIn_C_Spawn_Teleport_In_VFX_Params
{
};

// Function GCN_RezIn.GCN_RezIn_C.Restore Character Materials
struct AGCN_RezIn_C_Restore_Character_Materials_Params
{
	bool                                               Fully_Completed;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GCN_RezIn.GCN_RezIn_C.Clean-Up Teleportation Light
struct AGCN_RezIn_C_Clean_Up_Teleportation_Light_Params
{
};

// Function GCN_RezIn.GCN_RezIn_C.Spawn Teleportation Light
struct AGCN_RezIn_C_Spawn_Teleportation_Light_Params
{
};

// Function GCN_RezIn.GCN_RezIn_C.Spawn Teleportation Drone
struct AGCN_RezIn_C_Spawn_Teleportation_Drone_Params
{
};

// Function GCN_RezIn.GCN_RezIn_C.Stop Looping Audio
struct AGCN_RezIn_C_Stop_Looping_Audio_Params
{
};

// Function GCN_RezIn.GCN_RezIn_C.TFX_GlowCharacterMesh__FinishedFunc
struct AGCN_RezIn_C_TFX_GlowCharacterMesh__FinishedFunc_Params
{
};

// Function GCN_RezIn.GCN_RezIn_C.TFX_GlowCharacterMesh__UpdateFunc
struct AGCN_RezIn_C_TFX_GlowCharacterMesh__UpdateFunc_Params
{
};

// Function GCN_RezIn.GCN_RezIn_C.TFX_ResOutCharacterMesh__FinishedFunc
struct AGCN_RezIn_C_TFX_ResOutCharacterMesh__FinishedFunc_Params
{
};

// Function GCN_RezIn.GCN_RezIn_C.TFX_ResOutCharacterMesh__UpdateFunc
struct AGCN_RezIn_C_TFX_ResOutCharacterMesh__UpdateFunc_Params
{
};

// Function GCN_RezIn.GCN_RezIn_C.OnBurstGeneric
struct AGCN_RezIn_C_OnBurstGeneric_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UFXSystemComponent*>                  ParticleComponents;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UAudioComponent*>                     AudioComponents;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UCameraShake*                                BurstCameraShakeInstance;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ADecalActor*                                 BurstDecalInstance;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCN_RezIn.GCN_RezIn_C.Pre-Sequence Change
struct AGCN_RezIn_C_Pre_Sequence_Change_Params
{
};

// Function GCN_RezIn.GCN_RezIn_C.Set Additional Niagara Parameters on Spawned FX
struct AGCN_RezIn_C_Set_Additional_Niagara_Parameters_on_Spawned_FX_Params
{
	class UNiagaraComponent*                           Spawned_Teleport_In_FX;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GCN_RezIn.GCN_RezIn_C.Set Additional Niagara Parameter on Drone FX
struct AGCN_RezIn_C_Set_Additional_Niagara_Parameter_on_Drone_FX_Params
{
	class UNiagaraComponent*                           Drone_FX;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GCN_RezIn.GCN_RezIn_C.ExecuteUbergraph_GCN_RezIn
struct AGCN_RezIn_C_ExecuteUbergraph_GCN_RezIn_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
