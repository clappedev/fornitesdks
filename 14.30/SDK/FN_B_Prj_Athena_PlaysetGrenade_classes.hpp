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

// BlueprintGeneratedClass B_Prj_Athena_PlaysetGrenade.B_Prj_Athena_PlaysetGrenade_C
// 0x01B0 (0x0A28 - 0x0878)
class AB_Prj_Athena_PlaysetGrenade_C : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0878(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             PopupGrenade_ThrowLoop_AudioComponent;                    // 0x0880(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x0888(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0890(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URotatingMovementComponent*                  RotatingMovement;                                         // 0x0898(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     BaseDestination;                                          // 0x08A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x08AC(0x0004) MISSED OFFSET
	class UParticleSystem*                             P_BuildBuilding;                                          // 0x08B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Cue_CloseSound;                                           // 0x08B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Cue_DistantSound;                                         // 0x08C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     GridExplosionOffset;                                      // 0x08C8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GridSizeXY;                                               // 0x08D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GridSizeZ;                                                // 0x08D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GridYOffset;                                              // 0x08DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GridZOffset;                                              // 0x08E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECardinalDirection>                    CardinalDirection;                                        // 0x08E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x08E5(0x0003) MISSED OFFSET
	TMap<TEnumAsByte<ECardinalDirection>, float>       OrientationYawOffsets;                                    // 0x08E8(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<TEnumAsByte<ECardinalDirection>, struct FVector> OrientationLocationOffsets;                               // 0x0938(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     LastBounceLocation;                                       // 0x0988(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinBounceDistance;                                        // 0x0994(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastBounceTime;                                           // 0x0998(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinTimeBetweenBounces;                                    // 0x099C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  BounceSound;                                              // 0x09A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BuildDelay;                                               // 0x09A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x09AC(0x0004) MISSED OFFSET
	TMap<TEnumAsByte<ECardinalDirection>, struct FVector> OrientationDoortraceOffsets;                              // 0x09B0(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                                  InAirLoopSound;                                           // 0x0A00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             InAirLoopComponent;                                       // 0x0A08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              BounceTimeout;                                            // 0x0A10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0A14(0x0004) MISSED OFFSET
	class UFortPlaysetItemDefinition*                  CachedPlayset;                                            // 0x0A18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortVolumeActor_Base_C*                     PlayspaceActorToSpawn;                                    // 0x0A20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_Prj_Athena_PlaysetGrenade.B_Prj_Athena_PlaysetGrenade_C");
		
		return ptr;
	}


	void SetPlaysetData(class UFortPlaysetItemDefinition* NewPlayset);
	void CalculateCardinalDirection();
	void SetBaseDestination(const struct FHitResult& Hit);
	void UserConstructionScript();
	void OnLoaded_3645F4484F4ECED813C69D92F55C7A1F(class UObject* Loaded);
	void OnStop(const struct FHitResult& Hit);
	void OnExploded(TArray<class AActor*> HitActors, TArray<struct FHitResult> HitResults);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void SpawnPlayspaceServer(class UFortPlaysetItemDefinition* Playset, const struct FVector& Location, const struct FRotator& Rotation);
	void Play_Spawn_Prefab_Sound(const struct FVector& Location);
	void ExecuteUbergraph_B_Prj_Athena_PlaysetGrenade(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
