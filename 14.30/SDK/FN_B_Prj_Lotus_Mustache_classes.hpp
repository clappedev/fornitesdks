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

// BlueprintGeneratedClass B_Prj_Lotus_Mustache.B_Prj_Lotus_Mustache_C
// 0x01DC (0x0A54 - 0x0878)
class AB_Prj_Lotus_Mustache_C : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0878(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             FlightSound;                                              // 0x0880(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        FX_BandageTrail_SplineMesh;                               // 0x0888(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URotatingMovementComponent*                  RotatingMovement;                                         // 0x0890(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        TracerMesh;                                               // 0x0898(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    FX_BandageTrail_Ribbon;                                   // 0x08A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Projectile_Max_Lifetime;                                  // 0x08A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasExploded_;                                            // 0x08AC(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x08AD(0x0003) MISSED OFFSET
	struct FVector                                     Impact_Location;                                          // 0x08B0(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // 0x08BC(0x008C) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)
	float                                              FX_Linger_Time;                                           // 0x0948(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x094C(0x0004) MISSED OFFSET
	struct FTimerHandle                                Lifespan_Timer;                                           // 0x0950(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              InterpSpeed;                                              // 0x0958(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Max_Projectile_Size;                                      // 0x095C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Proj_MID;                                                 // 0x0968(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Tracer_Lifetime;                                          // 0x0970(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SpawnPositionOffset;                                      // 0x0974(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NoTarget;                                                 // 0x0980(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0981(0x0007) MISSED OFFSET
	struct FScalableFloat                              ShouldSpawnBandages;                                      // 0x0988(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                                  SpawnBandageSound;                                        // 0x09A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  BounceOffWallSound;                                       // 0x09B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             WaterImpactFX;                                            // 0x09B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPhysicalMaterial*                           WaterHitMat;                                              // 0x09C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FHitResult                                  WaterHit;                                                 // 0x09C8(0x008C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_Prj_Lotus_Mustache.B_Prj_Lotus_Mustache_C");
		
		return ptr;
	}


	void OnRep_Impact_Location();
	void ReceiveBeginPlay();
	void OnStop(const struct FHitResult& Hit);
	void Play_Explosion_Sound();
	void Reset_Explosion_Sound();
	void Timeout();
	void Explosion_VFX();
	void OnHomingPassedTarget();
	void OnReachedLockTargetDistanceThreshold();
	void OnBounce(const struct FHitResult& Hit);
	void OnExploded(TArray<class AActor*> HitActors, TArray<struct FHitResult> HitResults);
	void SpawnedBandageFx();
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody);
	void SpawnBandage();
	void OnTouched(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FHitResult& HitResult, bool bIsOverlap);
	void ExecuteUbergraph_B_Prj_Lotus_Mustache(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
