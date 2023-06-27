#pragma once

// Fortnite (8.51) SDK
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

// Function GCNL_Creative_BarrelExplosion_Player.GCNL_Creative_BarrelExplosion_Player_C.PPTL__FinishedFunc
struct AGCNL_Creative_BarrelExplosion_Player_C_PPTL__FinishedFunc_Params
{
};

// Function GCNL_Creative_BarrelExplosion_Player.GCNL_Creative_BarrelExplosion_Player_C.PPTL__UpdateFunc
struct AGCNL_Creative_BarrelExplosion_Player_C_PPTL__UpdateFunc_Params
{
};

// Function GCNL_Creative_BarrelExplosion_Player.GCNL_Creative_BarrelExplosion_Player_C.OnApplication
struct AGCNL_Creative_BarrelExplosion_Player_C_OnApplication_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UParticleSystemComponent*>            ParticleComponents;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                     AudioComponents;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UCameraShake*                                BurstCameraShakeInstance;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ADecalActor*                                 BurstDecalInstance;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCNL_Creative_BarrelExplosion_Player.GCNL_Creative_BarrelExplosion_Player_C.ExecuteUbergraph_GCNL_Creative_BarrelExplosion_Player
struct AGCNL_Creative_BarrelExplosion_Player_C_ExecuteUbergraph_GCNL_Creative_BarrelExplosion_Player_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
