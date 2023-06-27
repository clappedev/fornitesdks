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

// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.Orphaned
struct AEnemyPawn_Parent_Deimos_C_Orphaned_Params
{
	bool                                               IsOrphaned;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AFortPawn*                                   AttachedPawn;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.DeregisterEffectSkeletalMesh
struct AEnemyPawn_Parent_Deimos_C_DeregisterEffectSkeletalMesh_Params
{
	class USkeletalMeshComponent*                      Mesh;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.DeregisterEffectStaticMesh
struct AEnemyPawn_Parent_Deimos_C_DeregisterEffectStaticMesh_Params
{
	class UStaticMeshComponent*                        Mesh;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.ApplyAwakenEffectToStaticMesh
struct AEnemyPawn_Parent_Deimos_C_ApplyAwakenEffectToStaticMesh_Params
{
	class UStaticMeshComponent*                        Mesh;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.ApplyAwakenEffectToSkeletalMesh
struct AEnemyPawn_Parent_Deimos_C_ApplyAwakenEffectToSkeletalMesh_Params
{
	class USkeletalMeshComponent*                      Mesh;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.RegisterEffectStaticMesh
struct AEnemyPawn_Parent_Deimos_C_RegisterEffectStaticMesh_Params
{
	class UStaticMeshComponent*                        Mesh;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.RegisterEffectSkeletalMesh
struct AEnemyPawn_Parent_Deimos_C_RegisterEffectSkeletalMesh_Params
{
	class USkeletalMeshComponent*                      Mesh;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.ApplyBuildingHitEffectToStaticMesh
struct AEnemyPawn_Parent_Deimos_C_ApplyBuildingHitEffectToStaticMesh_Params
{
	class UStaticMeshComponent*                        Mesh;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.ApplyBuildingHitEffectToSkeletalMesh
struct AEnemyPawn_Parent_Deimos_C_ApplyBuildingHitEffectToSkeletalMesh_Params
{
	class USkeletalMeshComponent*                      Mesh;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.CharacterSpawnInSafetyCheck
struct AEnemyPawn_Parent_Deimos_C_CharacterSpawnInSafetyCheck_Params
{
};

// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.SpawnParticleSystemOnCharacterMesh
struct AEnemyPawn_Parent_Deimos_C_SpawnParticleSystemOnCharacterMesh_Params
{
	class UParticleSystem*                             ParticleSystemTemplate;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystemComponentReferenceVar;                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       AttachPointName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FParticleSysParam>                   InstanceParameters;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               AutoActivate;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AutoDestroy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AbsoluteLocation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AbsoluteRotation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AbsoluteScale;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    PSComponentReference;                                     // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.PlayAdditiveHitReacts
struct AEnemyPawn_Parent_Deimos_C_PlayAdditiveHitReacts_Params
{
	struct FVector                                     Hit_Direction;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Anim_Montage;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.SetScalarParameterOnAllCharacterMIDs
struct AEnemyPawn_Parent_Deimos_C_SetScalarParameterOnAllCharacterMIDs_Params
{
	struct FName                                       Parameter_Name;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scalar_Value;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AlsoModifyOriginalMIDs;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.SetVectorParameterOnAllCharacterMIDs
struct AEnemyPawn_Parent_Deimos_C_SetVectorParameterOnAllCharacterMIDs_Params
{
	struct FName                                       Parameter_Name;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Vector_Value;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Propagate_to_Auxiliary_Meshes;                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.UserConstructionScript
struct AEnemyPawn_Parent_Deimos_C_UserConstructionScript_Params
{
};

// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.Enemy Spawn Out TL__FinishedFunc
struct AEnemyPawn_Parent_Deimos_C_Enemy_Spawn_Out_TL__FinishedFunc_Params
{
};

// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.Enemy Spawn Out TL__UpdateFunc
struct AEnemyPawn_Parent_Deimos_C_Enemy_Spawn_Out_TL__UpdateFunc_Params
{
};

// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.EnemySpawnInTL__FinishedFunc
struct AEnemyPawn_Parent_Deimos_C_EnemySpawnInTL__FinishedFunc_Params
{
};

// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.EnemySpawnInTL__UpdateFunc
struct AEnemyPawn_Parent_Deimos_C_EnemySpawnInTL__UpdateFunc_Params
{
};

// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.EnemySpawnInTL__Spawn__EventFunc
struct AEnemyPawn_Parent_Deimos_C_EnemySpawnInTL__Spawn__EventFunc_Params
{
};

// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.OnBeginDance
struct AEnemyPawn_Parent_Deimos_C_OnBeginDance_Params
{
};

// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.OnEndDance
struct AEnemyPawn_Parent_Deimos_C_OnEndDance_Params
{
};

// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.ReceiveBeginPlay
struct AEnemyPawn_Parent_Deimos_C_ReceiveBeginPlay_Params
{
};

// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.OnDeathPlayEffects
struct AEnemyPawn_Parent_Deimos_C_OnDeathPlayEffects_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AFortPawn*                                   InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.ManualDespawnEnemy
struct AEnemyPawn_Parent_Deimos_C_ManualDespawnEnemy_Params
{
	struct FVector                                     RiftLocationWS;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.ManualEnemySpawnIn
struct AEnemyPawn_Parent_Deimos_C_ManualEnemySpawnIn_Params
{
	struct FVector                                     RiftLocationWS;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.SpawnInSafetyCheck
struct AEnemyPawn_Parent_Deimos_C_SpawnInSafetyCheck_Params
{
};

// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.PostSpawnIn
struct AEnemyPawn_Parent_Deimos_C_PostSpawnIn_Params
{
};

// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.DespawnEnemy
struct AEnemyPawn_Parent_Deimos_C_DespawnEnemy_Params
{
	struct FVector                                     RiftLocationWS;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.DebugEnemySpawnIn
struct AEnemyPawn_Parent_Deimos_C_DebugEnemySpawnIn_Params
{
};

// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.OnFinishedEncounterSpawn
struct AEnemyPawn_Parent_Deimos_C_OnFinishedEncounterSpawn_Params
{
};

// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.OnStartedEncounterSpawn
struct AEnemyPawn_Parent_Deimos_C_OnStartedEncounterSpawn_Params
{
};

// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.OnDamagePlayEffects
struct AEnemyPawn_Parent_Deimos_C_OnDamagePlayEffects_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AFortPawn*                                   InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.AdditiveHitReactDelay
struct AEnemyPawn_Parent_Deimos_C_AdditiveHitReactDelay_Params
{
};

// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.DestroyBuildingHitEffect
struct AEnemyPawn_Parent_Deimos_C_DestroyBuildingHitEffect_Params
{
};

// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.OnBuildingHitPlayEffects
struct AEnemyPawn_Parent_Deimos_C_OnBuildingHitPlayEffects_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bPlayerPlaced;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.ExecuteUbergraph_EnemyPawn_Parent_Deimos
struct AEnemyPawn_Parent_Deimos_C_ExecuteUbergraph_EnemyPawn_Parent_Deimos_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
