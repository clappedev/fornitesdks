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

// Function BP_Pawn_DangerGrape.BP_Pawn_DangerGrape_C.ReceiveBeginPlay
struct ABP_Pawn_DangerGrape_C_ReceiveBeginPlay_Params
{
};

// Function BP_Pawn_DangerGrape.BP_Pawn_DangerGrape_C.OnDeathPlayEffects
struct ABP_Pawn_DangerGrape_C_OnDeathPlayEffects_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AFortPawn*                                   InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Pawn_DangerGrape.BP_Pawn_DangerGrape_C.PlayResOut_2
struct ABP_Pawn_DangerGrape_C_PlayResOut_2_Params
{
};

// Function BP_Pawn_DangerGrape.BP_Pawn_DangerGrape_C.ExecuteUbergraph_BP_Pawn_DangerGrape
struct ABP_Pawn_DangerGrape_C_ExecuteUbergraph_BP_Pawn_DangerGrape_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
