#pragma once

// Fortnite (9.1) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DeimosRift.BP_DeimosRift_C
// 0x03D0 (0x0C40 - 0x0870)
class ABP_DeimosRift_C : public ABuildingRift
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0870(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_Rift_IdleFog;                                           // 0x0878(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_CubeRunes;                                             // 0x0880(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Deimos_Spawner_Loop_Sound;                                // 0x0888(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        FogMesh;                                                  // 0x0890(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               NoBuildZone;                                              // 0x0898(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_Deimos_Rift_Dying;                                      // 0x08A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        CosmeticBaseMesh;                                         // 0x08A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_Deimos_RiftSpawn_DamageState;                           // 0x08B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        CubeMesh;                                                 // 0x08B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        PointLight;                                               // 0x08C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MaskedMID;                                                // 0x08C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    OpaqueMID;                                                // 0x08D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    CubeMat;                                                  // 0x08D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    CubeMatLOD1;                                              // 0x08E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          BaseMaterial;                                             // 0x08E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      GE_Destroyed;                                             // 0x08F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      CueParamsCreate;                                          // 0x08F8(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayCueParameters                      CueParamsChargeUp;                                        // 0x09B0(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayCueParameters                      CueParamsSpawnFiend;                                      // 0x0A68(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayCueParameters                      CueParamsRiftSpawn;                                       // 0x0B20(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                DamageState;                                              // 0x0BD8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0BDC(0x0004) MISSED OFFSET
	class UMaterialInterface*                          BaseLODMaterial;                                          // 0x0BE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          BaseMeshMat;                                              // 0x0BE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_StageOneExplode;                                    // 0x0BF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_StageTwoExplode;                                    // 0x0BF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_DeimosSpawnerLoop;                                  // 0x0C00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_StageThreeBuildup;                                  // 0x0C08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_DamagePerSpawn;                                        // 0x0C10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      GE_DamageReduction;                                       // 0x0C18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DoSpawnEffects;                                           // 0x0C20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0C21(0x0003) MISSED OFFSET
	float                                              SpawnAnimDuration;                                        // 0x0C24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                FiendSpawnFXGC;                                           // 0x0C28(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                ChargeUpFXGC;                                             // 0x0C30(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                SpawnFXGC;                                                // 0x0C38(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DeimosRift.BP_DeimosRift_C");
		return ptr;
	}


	void FlashCubeMaterial();
	void OnRep_DamageState();
	void UserConstructionScript();
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext);
	void OnDeathServer(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext);
	void BP_Cosmetic_RampUp();
	void BP_Cosmetic_Intro();
	void BP_Cosmetic_Idle();
	void OnStartedEncounterSpawn(class AFortAIPawn* SpawnedAI);
	void ReceiveBeginPlay();
	void OnDamaged_Bind(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, struct FVector HitLocation, class UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum);
	void BP_Cosmetic_ShouldDie();
	void OnBuildingRiftSpawnedAI_Bind();
	void TestDynamicRiftSpawn();
	void SpawnEffects();
	void ExecuteUbergraph_BP_DeimosRift(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
