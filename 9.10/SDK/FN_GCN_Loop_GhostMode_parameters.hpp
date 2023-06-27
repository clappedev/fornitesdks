#pragma once

// Fortnite (9.1) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.GetCharacterPartTypeMaterials
struct AGCN_Loop_GhostMode_C_GetCharacterPartTypeMaterials_Params
{
	class AFortPlayerPawn*                             Fort_Player_Pawn;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFortCustomPartType>                   PartType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.FadeMaterialsTL__FinishedFunc
struct AGCN_Loop_GhostMode_C_FadeMaterialsTL__FinishedFunc_Params
{
};

// Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.FadeMaterialsTL__UpdateFunc
struct AGCN_Loop_GhostMode_C_FadeMaterialsTL__UpdateFunc_Params
{
};

// Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.OnLoopingStart
struct AGCN_Loop_GhostMode_C_OnLoopingStart_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UParticleSystemComponent*>            ParticleComponents;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                     AudioComponents;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.OnRemoval
struct AGCN_Loop_GhostMode_C_OnRemoval_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UParticleSystemComponent*>            ParticleComponents;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                     AudioComponents;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UCameraShake*                                BurstCameraShakeInstance;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ADecalActor*                                 BurstDecalInstance;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.FadeMaterialsIn
struct AGCN_Loop_GhostMode_C_FadeMaterialsIn_Params
{
};

// Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.FadeMaterialsOut
struct AGCN_Loop_GhostMode_C_FadeMaterialsOut_Params
{
};

// Function GCN_Loop_GhostMode.GCN_Loop_GhostMode_C.ExecuteUbergraph_GCN_Loop_GhostMode
struct AGCN_Loop_GhostMode_C_ExecuteUbergraph_GCN_Loop_GhostMode_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
