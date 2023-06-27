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

// Function FortVolumeActor_Base.FortVolumeActor_Base_C.UserConstructionScript
struct AFortVolumeActor_Base_C_UserConstructionScript_Params
{
};

// Function FortVolumeActor_Base.FortVolumeActor_Base_C.TransitionTL__FinishedFunc
struct AFortVolumeActor_Base_C_TransitionTL__FinishedFunc_Params
{
};

// Function FortVolumeActor_Base.FortVolumeActor_Base_C.TransitionTL__UpdateFunc
struct AFortVolumeActor_Base_C_TransitionTL__UpdateFunc_Params
{
};

// Function FortVolumeActor_Base.FortVolumeActor_Base_C.ReceiveBeginPlay
struct AFortVolumeActor_Base_C_ReceiveBeginPlay_Params
{
};

// Function FortVolumeActor_Base.FortVolumeActor_Base_C.OnDeathPlayEffects_2
struct AFortVolumeActor_Base_C_OnDeathPlayEffects_2_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AFortPawn*                                   InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function FortVolumeActor_Base.FortVolumeActor_Base_C.ExecuteUbergraph_FortVolumeActor_Base
struct AFortVolumeActor_Base_C_ExecuteUbergraph_FortVolumeActor_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
