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

// Function GCN_RezOut.GCN_RezOut_C.Spawn Drone VFX
struct AGCN_RezOut_C_Spawn_Drone_VFX_Params
{
};

// Function GCN_RezOut.GCN_RezOut_C.Set Timeline Playrates
struct AGCN_RezOut_C_Set_Timeline_Playrates_Params
{
};

// Function GCN_RezOut.GCN_RezOut_C.Dissolve Material Setup
struct AGCN_RezOut_C_Dissolve_Material_Setup_Params
{
};

// Function GCN_RezOut.GCN_RezOut_C.Spawn Dissolve VFX
struct AGCN_RezOut_C_Spawn_Dissolve_VFX_Params
{
};

// Function GCN_RezOut.GCN_RezOut_C.Clean-Up Teleportation Light
struct AGCN_RezOut_C_Clean_Up_Teleportation_Light_Params
{
};

// Function GCN_RezOut.GCN_RezOut_C.Spawn Teleportation Light
struct AGCN_RezOut_C_Spawn_Teleportation_Light_Params
{
};

// Function GCN_RezOut.GCN_RezOut_C.Spawn Teleportation Drone
struct AGCN_RezOut_C_Spawn_Teleportation_Drone_Params
{
};

// Function GCN_RezOut.GCN_RezOut_C.Stop Looping Audio
struct AGCN_RezOut_C_Stop_Looping_Audio_Params
{
};

// Function GCN_RezOut.GCN_RezOut_C.Play Elmination AnimMontage
struct AGCN_RezOut_C_Play_Elmination_AnimMontage_Params
{
};

// Function GCN_RezOut.GCN_RezOut_C.TFX_GlowCharacterMesh__FinishedFunc
struct AGCN_RezOut_C_TFX_GlowCharacterMesh__FinishedFunc_Params
{
};

// Function GCN_RezOut.GCN_RezOut_C.TFX_GlowCharacterMesh__UpdateFunc
struct AGCN_RezOut_C_TFX_GlowCharacterMesh__UpdateFunc_Params
{
};

// Function GCN_RezOut.GCN_RezOut_C.TFX_ResOutCharacterMesh__FinishedFunc
struct AGCN_RezOut_C_TFX_ResOutCharacterMesh__FinishedFunc_Params
{
};

// Function GCN_RezOut.GCN_RezOut_C.TFX_ResOutCharacterMesh__UpdateFunc
struct AGCN_RezOut_C_TFX_ResOutCharacterMesh__UpdateFunc_Params
{
};

// Function GCN_RezOut.GCN_RezOut_C.OnBurstGeneric
struct AGCN_RezOut_C_OnBurstGeneric_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UFXSystemComponent*>                  ParticleComponents;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UAudioComponent*>                     AudioComponents;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UCameraShake*                                BurstCameraShakeInstance;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ADecalActor*                                 BurstDecalInstance;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCN_RezOut.GCN_RezOut_C.Pre-Sequence Change
struct AGCN_RezOut_C_Pre_Sequence_Change_Params
{
};

// Function GCN_RezOut.GCN_RezOut_C.Set Additional Niagara Parameters on Spawned FX
struct AGCN_RezOut_C_Set_Additional_Niagara_Parameters_on_Spawned_FX_Params
{
	class UNiagaraComponent*                           Spawned_Death_FX;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GCN_RezOut.GCN_RezOut_C.Set Additional Niagara Parameters on Drone FX
struct AGCN_RezOut_C_Set_Additional_Niagara_Parameters_on_Drone_FX_Params
{
	class UNiagaraComponent*                           Drone_FX;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GCN_RezOut.GCN_RezOut_C.ExecuteUbergraph_GCN_RezOut
struct AGCN_RezOut_C_ExecuteUbergraph_GCN_RezOut_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
