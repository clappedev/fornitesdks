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

// Function BP_Curie_ElectricNova.BP_Curie_ElectricNova_C.UserConstructionScript
struct ABP_Curie_ElectricNova_C_UserConstructionScript_Params
{
};

// Function BP_Curie_ElectricNova.BP_Curie_ElectricNova_C.ScaleTimeline__FinishedFunc
struct ABP_Curie_ElectricNova_C_ScaleTimeline__FinishedFunc_Params
{
};

// Function BP_Curie_ElectricNova.BP_Curie_ElectricNova_C.ScaleTimeline__UpdateFunc
struct ABP_Curie_ElectricNova_C_ScaleTimeline__UpdateFunc_Params
{
};

// Function BP_Curie_ElectricNova.BP_Curie_ElectricNova_C.ReceiveBeginPlay
struct ABP_Curie_ElectricNova_C_ReceiveBeginPlay_Params
{
};

// Function BP_Curie_ElectricNova.BP_Curie_ElectricNova_C.OnDeathPlayEffects
struct ABP_Curie_ElectricNova_C_OnDeathPlayEffects_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AFortPawn*                                   InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Curie_ElectricNova.BP_Curie_ElectricNova_C.ExecuteUbergraph_BP_Curie_ElectricNova
struct ABP_Curie_ElectricNova_C_ExecuteUbergraph_BP_Curie_ElectricNova_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
