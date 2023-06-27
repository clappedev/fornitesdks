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

// Function BGA_Athena_FlopperSpawn_World.BGA_Athena_FlopperSpawn_World_C.GetLootTier
struct ABGA_Athena_FlopperSpawn_World_C_GetLootTier_Params
{
	bool                                               IsExplosion;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsProFishingRod;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Output_Get;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_Athena_FlopperSpawn_World.BGA_Athena_FlopperSpawn_World_C.ExplosionQuestProgress
struct ABGA_Athena_FlopperSpawn_World_C_ExplosionQuestProgress_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_Athena_FlopperSpawn_World.BGA_Athena_FlopperSpawn_World_C.OnRep_FortWaterBody
struct ABGA_Athena_FlopperSpawn_World_C_OnRep_FortWaterBody_Params
{
};

// Function BGA_Athena_FlopperSpawn_World.BGA_Athena_FlopperSpawn_World_C.RandomTimeInterval
struct ABGA_Athena_FlopperSpawn_World_C_RandomTimeInterval_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BGA_Athena_FlopperSpawn_World.BGA_Athena_FlopperSpawn_World_C.ReceiveBeginPlay
struct ABGA_Athena_FlopperSpawn_World_C_ReceiveBeginPlay_Params
{
};

// Function BGA_Athena_FlopperSpawn_World.BGA_Athena_FlopperSpawn_World_C.OnDeathPlayEffects
struct ABGA_Athena_FlopperSpawn_World_C_OnDeathPlayEffects_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AFortPawn*                                   InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BGA_Athena_FlopperSpawn_World.BGA_Athena_FlopperSpawn_World_C.SpawnJumpingFish
struct ABGA_Athena_FlopperSpawn_World_C_SpawnJumpingFish_Params
{
};

// Function BGA_Athena_FlopperSpawn_World.BGA_Athena_FlopperSpawn_World_C.OnDamageServer
struct ABGA_Athena_FlopperSpawn_World_C_OnDamageServer_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BGA_Athena_FlopperSpawn_World.BGA_Athena_FlopperSpawn_World_C.SpawnFromExplosion
struct ABGA_Athena_FlopperSpawn_World_C_SpawnFromExplosion_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_Athena_FlopperSpawn_World.BGA_Athena_FlopperSpawn_World_C.ExecuteUbergraph_BGA_Athena_FlopperSpawn_World
struct ABGA_Athena_FlopperSpawn_World_C_ExecuteUbergraph_BGA_Athena_FlopperSpawn_World_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
