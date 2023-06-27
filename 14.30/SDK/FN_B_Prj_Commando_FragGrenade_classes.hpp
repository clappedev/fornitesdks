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

// BlueprintGeneratedClass B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C
// 0x02F8 (0x0B70 - 0x0878)
class AB_Prj_Commando_FragGrenade_C : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0878(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class URotatingMovementComponent*                  RotatingMovement;                                         // 0x0880(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Fuse_Particle;                                            // 0x0888(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0890(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             GrenadeFuse_AudioComponent;                               // 0x0898(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Effect_Distance;                                          // 0x08A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             P_Explosion;                                              // 0x08A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Cue_DistantSound;                                         // 0x08B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Cue_CloseSound;                                           // 0x08B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExplosionRadius;                                          // 0x08C0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                NumberOfBouncesTillExplode;                               // 0x08C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentNumberOfBounces;                                   // 0x08C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x08CC(0x0004) MISSED OFFSET
	class USoundBase*                                  Cue_GrenadeFuseSound;                                     // 0x08D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BouncePawnAgainstPawnGravityScale;                        // 0x08D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x08DC(0x0004) MISSED OFFSET
	class UForceFeedbackEffect*                        ExplosionForceFeedbackNear;                               // 0x08E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UForceFeedbackEffect*                        ExplosionForceFeedbackFar;                                // 0x08E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxClusterGrenades;                                       // 0x08F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                EC_ClusterExplosion;                                      // 0x08F4(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bHasCluster;                                              // 0x08FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x08FD(0x0003) MISSED OFFSET
	class AFortProjectileBase*                         Prj_Cluster;                                              // 0x0900(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFortGameplayEffectContainerSpec            ClusterContainerSpec;                                     // 0x0908(0x00B8) (Edit, BlueprintVisible)
	bool                                               bHasKeepOut;                                              // 0x09C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x09C1(0x0007) MISSED OFFSET
	struct FFortGameplayEffectContainerSpec            KeepOutContainerSpec;                                     // 0x09C8(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortAreaOfEffectCloud*                      AOE_KeepOut;                                              // 0x0A80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasClusterTactical;                                      // 0x0A88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0A89(0x0007) MISSED OFFSET
	struct FFortGameplayEffectContainerSpec            Cluster_Tactical_Container_Spec;                          // 0x0A90(0x00B8) (Edit, BlueprintVisible)
	struct FGameplayTagContainer                       TC_ActorTagsThatShouldExplodeOnOverlap;                   // 0x0B48(0x0020) (Edit, BlueprintVisible)
	struct FGameplayTag                                T_Event_GrenadeExploded;                                  // 0x0B68(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C");
		
		return ptr;
	}


	void SpawnKeepOut();
	void SpawnClusters();
	float CalcGrenadeSpeed(float Angle);
	void OnRep_StoredHit();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnStop(const struct FHitResult& Hit);
	void Stop_Rotation();
	void OnExploded(TArray<class AActor*> HitActors, TArray<struct FHitResult> HitResults);
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void OnBounce(const struct FHitResult& Hit);
	void On_Destroy_Grenade(class AActor* DestroyedActor);
	void Bind_Destroy_Grenade();
	void Force_On_Exploded_Effects();
	void Unbind_Destroy_Grenade();
	void TriggerDoExplsoion();
	void ReceiveDestroyed();
	void CheckKeepOutAndCluster();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void SendExplodedEvent();
	void ExecuteUbergraph_B_Prj_Commando_FragGrenade(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
