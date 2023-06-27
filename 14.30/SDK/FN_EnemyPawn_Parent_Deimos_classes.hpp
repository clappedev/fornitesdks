#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C
// 0x0314 (0x2574 - 0x2260)
class AEnemyPawn_Parent_Deimos_C : public AFortAIPawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                           WeaponCapsuleCollision;                                   // 0x2268(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Elemental_Layer_Audio_Loop;                               // 0x2270(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Enemy_Spawn_Out_TL_ColorFadeOutTrack_37A083E44F5772C5FFF36680D2AD7D94;// 0x2278(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Enemy_Spawn_Out_TL_FadeInTrack_37A083E44F5772C5FFF36680D2AD7D94;// 0x227C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Enemy_Spawn_Out_TL__Direction_37A083E44F5772C5FFF36680D2AD7D94;// 0x2280(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x2281(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Enemy_Spawn_Out_TL;                                       // 0x2288(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              EnemySpawnInTL_ColorFadeOutTrack_515E6B424789F427A1B9ACAD857FFF5D;// 0x2290(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EnemySpawnInTL_FadeInTrack_515E6B424789F427A1B9ACAD857FFF5D;// 0x2294(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    EnemySpawnInTL__Direction_515E6B424789F427A1B9ACAD857FFF5D;// 0x2298(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x2299(0x0007) MISSED OFFSET
	class UTimelineComponent*                          EnemySpawnInTL;                                           // 0x22A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x22A8(0x0008) MISSED OFFSET
	struct FTransform                                  SpawnParticlesTransform;                                  // 0x22B0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             SpawnParticles;                                           // 0x22E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    CharacterElementalParticles;                              // 0x22E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               AllowHeadshot;                                            // 0x22F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x22F1(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       TC_RangedWeapon;                                          // 0x22F8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystemComponent*                    HeadshotParticleSystemComp;                               // 0x2318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAnimMontage*                                Additive_Hit_React_Montage;                               // 0x2320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Death_Normal_Sound;                                       // 0x2328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Elemental_Audio_Layer_Sound;                              // 0x2330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Headshot_FX_Socket;                                       // 0x2338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TMap<class USkeletalMeshComponent*, class UFXSkeletonMeshComponent_C*> AwakenFXSkeletalMeshes;                                   // 0x2340(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class UStaticMeshComponent*, class UFXStaticMeshComponent_C*> AwakenFXStaticMeshes;                                     // 0x2390(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              AwokenMaxDistance;                                        // 0x23E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AwakenDuration;                                           // 0x23E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                DestroyAwakenFXTimer;                                     // 0x23E8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class USkeletalMeshComponent*, class UFXSkeletonMeshComponent_C*> BuildingHitFXSkeletalMeshes;                              // 0x23F0(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class UStaticMeshComponent*, class UFXStaticMeshComponent_C*> BuildingHitFXStaticMeshes;                                // 0x2440(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              BuildingHitDuration;                                      // 0x2490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x2494(0x0004) MISSED OFFSET
	struct FTimerHandle                                DestroyBuildingHitFXTimer;                                // 0x2498(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UFXSkeletonMeshComponent_C*                  TempFXSkeletalMesh;                                       // 0x24A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class USkeletalMeshComponent*>              RegisteredSkeletalMeshesForEffects;                       // 0x24A8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UStaticMeshComponent*>                RegisteredStaticMeshesForEffects;                         // 0x24B8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               HasGlowColorsAssigned;                                    // 0x24C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SpawnInTimelineCompletedSuccessfully;                     // 0x24C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x6];                                       // 0x24CA(0x0006) MISSED OFFSET
	struct FTimerHandle                                CharacterSpawnInSafetyCheckHandle;                        // 0x24D0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            Previous_MID;                                             // 0x24D8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystem*                             CharacterAmbientParticlesTemplate;                        // 0x24E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    CharacterAmbientParticles;                                // 0x24F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      DuplicateCharacterMesh;                                   // 0x24F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DuplicateCharacterMID;                                    // 0x2500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UObject*>                             Auxillary_Objects;                                        // 0x2508(0x0010) (Edit, BlueprintVisible)
	TArray<class UObject*>                             Duplicate_Auxillary_Objects;                              // 0x2518(0x0010) (Edit, BlueprintVisible)
	class UParticleSystemComponent*                    MinibossPSComponent;                                      // 0x2528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              CharacterParticlesMaxDrawDistance;                        // 0x2530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x2534(0x0004) MISSED OFFSET
	TArray<class UPhysicalMaterial*>                   Original_Phys_Material;                                   // 0x2538(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            Previous_MID_AuxObjs;                                     // 0x2548(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                Restoring_Array_Index;                                    // 0x2558(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseHeadShotFX;                                            // 0x255C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x255D(0x0003) MISSED OFFSET
	class USoundBase*                                  Death_Dematerialize_Sound;                                // 0x2560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  HeadShot_Sound;                                           // 0x2568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AdditiveHitReactRetriggerDelay;                           // 0x2570(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C");
		
		return ptr;
	}


	void Orphaned(bool* IsOrphaned, class AFortPawn** AttachedPawn);
	void DeregisterEffectSkeletalMesh(class USkeletalMeshComponent* Mesh);
	void DeregisterEffectStaticMesh(class UStaticMeshComponent* Mesh);
	void ApplyAwakenEffectToStaticMesh(class UStaticMeshComponent* Mesh);
	void ApplyAwakenEffectToSkeletalMesh(class USkeletalMeshComponent* Mesh);
	void RegisterEffectStaticMesh(class UStaticMeshComponent* Mesh);
	void RegisterEffectSkeletalMesh(class USkeletalMeshComponent* Mesh);
	void ApplyBuildingHitEffectToStaticMesh(class UStaticMeshComponent* Mesh);
	void ApplyBuildingHitEffectToSkeletalMesh(class USkeletalMeshComponent* Mesh);
	void CharacterSpawnInSafetyCheck();
	void SpawnParticleSystemOnCharacterMesh(class UParticleSystem* ParticleSystemTemplate, class UParticleSystemComponent* ParticleSystemComponentReferenceVar, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, bool AutoActivate, bool AutoDestroy, bool AbsoluteLocation, bool AbsoluteRotation, bool AbsoluteScale, TArray<struct FParticleSysParam>* InstanceParameters, class UParticleSystemComponent** PSComponentReference);
	void PlayAdditiveHitReacts(const struct FVector& Hit_Direction, class UAnimMontage* Anim_Montage);
	void SetScalarParameterOnAllCharacterMIDs(const struct FName& Parameter_Name, float Scalar_Value, bool AlsoModifyOriginalMIDs);
	void SetVectorParameterOnAllCharacterMIDs(const struct FName& Parameter_Name, const struct FVector& Vector_Value, bool Propagate_to_Auxiliary_Meshes);
	void UserConstructionScript();
	void Enemy_Spawn_Out_TL__FinishedFunc();
	void Enemy_Spawn_Out_TL__UpdateFunc();
	void EnemySpawnInTL__FinishedFunc();
	void EnemySpawnInTL__UpdateFunc();
	void EnemySpawnInTL__Spawn__EventFunc();
	void OnBeginDance();
	void OnEndDance();
	void ReceiveBeginPlay();
	void OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void ManualDespawnEnemy(const struct FVector& RiftLocationWS);
	void ManualEnemySpawnIn(const struct FVector& RiftLocationWS);
	void SpawnInSafetyCheck();
	void PostSpawnIn();
	void DespawnEnemy(const struct FVector& RiftLocationWS);
	void DebugEnemySpawnIn();
	void OnFinishedEncounterSpawn();
	void OnStartedEncounterSpawn();
	void OnDamagePlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void AdditiveHitReactDelay();
	void DestroyBuildingHitEffect();
	void OnBuildingHitPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, const struct FGameplayEffectContextHandle& EffectContext, bool bPlayerPlaced);
	void ExecuteUbergraph_EnemyPawn_Parent_Deimos(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
