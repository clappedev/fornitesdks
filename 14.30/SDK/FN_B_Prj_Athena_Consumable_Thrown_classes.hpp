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

// BlueprintGeneratedClass B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C
// 0x008C (0x0904 - 0x0878)
class AB_Prj_Athena_Consumable_Thrown_C : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0878(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0880(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0888(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    FX_Trail;                                                 // 0x0890(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortWorldItemDefinition*                    ItemDefinition;                                           // 0x0898(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Projectile_Max_Lifetime;                                  // 0x08A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasExploded_;                                            // 0x08A4(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x08A5(0x0003) MISSED OFFSET
	struct FVector                                     Impact_Location;                                          // 0x08A8(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FX_Linger_Time;                                           // 0x08B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                Lifespan_Timer;                                           // 0x08B8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     SpawnPositionOffset;                                      // 0x08C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x08CC(0x0004) MISSED OFFSET
	class USoundBase*                                  BounceOffWallSound;                                       // 0x08D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortPickup*                                 Pickup;                                                   // 0x08D8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             SpawnFX;                                                  // 0x08E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             SpawnFX_Water;                                            // 0x08E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SpawnSound;                                               // 0x08F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Splash_Sound_;                                            // 0x08F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WaterSpawnDelay;                                          // 0x0900(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C");
		
		return ptr;
	}


	void OnRep_Pickup();
	void OnRep_Impact_Location();
	void ReceiveBeginPlay();
	void OnStop(const struct FHitResult& Hit);
	void Timeout();
	void OnHomingPassedTarget();
	void OnReachedLockTargetDistanceThreshold();
	void OnBounce(const struct FHitResult& Hit);
	void OnExploded(TArray<class AActor*> HitActors, TArray<struct FHitResult> HitResults);
	void SpawnedItemFx();
	void Mark(class AActor* NewParam);
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody);
	void SpawnItem();
	void WaterImpactItemFX();
	void ExecuteUbergraph_B_Prj_Athena_Consumable_Thrown(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
