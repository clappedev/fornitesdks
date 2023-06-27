#pragma once

// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass B_Prj_Ranged_GrenadeLauncher_Snowball_Athena.B_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C
// 0x0198 (0x0978 - 0x07E0)
class AB_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07E0(0x0008) (Transient, DuplicateTransient)
	class UAudioComponent*                             Snowball_Loop;                                            // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class URotatingMovementComponent*                  RotatingMovement;                                         // 0x07F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Mesh;                                                     // 0x07F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             RibbonTrail_PS;                                           // 0x0800(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    RibbonTrail_PSC;                                          // 0x0808(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TrailLifetime;                                            // 0x0810(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      WaterPhysMat;                                             // 0x0814(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0815(0x0003) MISSED OFFSET
	class UParticleSystem*                             Bounce_WaterSplash_PS;                                    // 0x0818(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    WaterSplash_PSC;                                          // 0x0820(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    Bounce_Generic_PSC;                                       // 0x0828(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Bounce_Generic_PS;                                        // 0x0830(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             Explosion_PS;                                             // 0x0838(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    Explosion_PSC;                                            // 0x0840(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     StopLocation;                                             // 0x0848(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0854(0x0004) MISSED OFFSET
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectsToTraceAgainst;                                    // 0x0858(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FRotator                                    StopRotX;                                                 // 0x0868(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0874(0x0004) MISSED OFFSET
	class USoundBase*                                  Grenade_Explosion_Sound;                                  // 0x0878(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             Explosion_Flesh_Damage_PS;                                // 0x0880(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             Explosion_Water_PS;                                       // 0x0888(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    Explosion_Water_PSC;                                      // 0x0890(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      SpawnBounceFXHitActor;                                    // 0x0898(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FHitResult                                  OnBounceHitResult;                                        // 0x08A0(0x0080) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              FuseTimerSpawn;                                          // 0x0920(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FuseTimerAfterBounce;                                     // 0x0924(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    WaterLandDelayRipplePSC;                                  // 0x0928(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             WaterLandDelayPS;                                         // 0x0930(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    GrenadeInWaterLocation;                                   // 0x0938(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Grenade_Explosion_Water_Sound;                            // 0x0940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      StopSurfaceType;                                          // 0x0948(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0949(0x0003) MISSED OFFSET
	struct FRotator                                    StopRotZ;                                                 // 0x094C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UForceFeedbackEffect*                        ExplosionForceFeedbackNear;                               // 0x0958(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UForceFeedbackEffect*                        ExplosionForceFeedbackFar;                                // 0x0960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasStopped;                                               // 0x0968(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0969(0x0007) MISSED OFFSET
	class UParticleSystem*                             Explosion_InAir_PS;                                       // 0x0970(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Prj_Ranged_GrenadeLauncher_Snowball_Athena.B_Prj_Ranged_GrenadeLauncher_Snowball_Athena_C");
		return ptr;
	}


	void SpawnBounceFX(struct FHitResult* Hit, class AActor** HitActor, TEnumAsByte<EPhysicalSurface>* SurfaceType, struct FRotator* HitResultRotation);
	void UserConstructionScript();
	void FuseTimerMax();
	void OnExploded(TArray<class AActor*>* HitActors, TArray<struct FHitResult>* HitResults);
	void ReceiveBeginPlay();
	void OnStop(struct FHitResult* Hit);
	void OnBounce(struct FHitResult* Hit);
	void DelayBeforeExplode_();
	void ExecuteUbergraph_B_Prj_Ranged_GrenadeLauncher_Snowball_Athena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
