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

// Function GA_Athena_ChillBronco.GA_Athena_ChillBronco_C.SpawnThrownProjectile
struct UGA_Athena_ChillBronco_C_SpawnThrownProjectile_Params
{
	class AFortProjectileBase*                         ProjectileClass;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ProjectileSpawnLocation;                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    ProjectileSpawnDirection;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FFortGameplayEffectContainerSpec            HitEffectContainerSpec;                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FFortGameplayEffectContainerSpec            ExplosionEffectContainerSpec;                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              ProjectileInitialSpeed;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ProjectileGravityScale;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFortProjectileBase*                         SpawnedProjectile;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_ChillBronco.GA_Athena_ChillBronco_C.OnProjectileSpawned
struct UGA_Athena_ChillBronco_C_OnProjectileSpawned_Params
{
	class AFortProjectileBase*                         SpawnedProjectile;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_ChillBronco.GA_Athena_ChillBronco_C.ExecuteUbergraph_GA_Athena_ChillBronco
struct UGA_Athena_ChillBronco_C_ExecuteUbergraph_GA_Athena_ChillBronco_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
