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

// BlueprintGeneratedClass B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C
// 0x0219 (0x0AB1 - 0x0898)
class AB_Prj_Athena_SuperTowerGrenade_C : public AFortSuperTowerGrenadeProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0898(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x08A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Mesh;                                                     // 0x08A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URotatingMovementComponent*                  RotatingMovement;                                         // 0x08B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     BaseDestination;                                          // 0x08B8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x08C4(0x0004) MISSED OFFSET
	class UParticleSystem*                             P_BuildBuilding;                                          // 0x08C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Cue_CloseSound;                                           // 0x08D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Cue_DistantSound;                                         // 0x08D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     GridExplosionOffset;                                      // 0x08E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GridSizeXY;                                               // 0x08EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GridSizeZ;                                                // 0x08F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GridYOffset;                                              // 0x08F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GridZOffset;                                              // 0x08F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECardinalDirection>                    CardinalDirection;                                        // 0x08FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x08FD(0x0003) MISSED OFFSET
	TMap<TEnumAsByte<ECardinalDirection>, float>       OrientationYawOffsets;                                    // 0x0900(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<TEnumAsByte<ECardinalDirection>, struct FVector> OrientationLocationOffsets;                               // 0x0950(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsDebug;                                                  // 0x09A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x09A1(0x0003) MISSED OFFSET
	float                                              TireBuildDelay;                                           // 0x09A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FVector>                             ClearedCells_Normal;                                      // 0x09A8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     LastBounceLocation;                                       // 0x09B8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinBounceDistance;                                        // 0x09C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastBounceTime;                                           // 0x09C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinTimeBetweenBounces;                                    // 0x09CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  BounceSound;                                              // 0x09D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FVector>                             ClearedCells_Underground;                                 // 0x09D8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AActor*>                              BGAClasses_Tires;                                         // 0x09E8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FVector>                             BGALocations_Tires;                                       // 0x09F8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FRotator>                            BGARotations_Tires;                                       // 0x0A08(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<TEnumAsByte<ECardinalDirection>, struct FVector> OrientationDoortraceOffsets;                              // 0x0A18(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     DoorTraceOffsetHigh;                                      // 0x0A68(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DoorTraceOffsetLow;                                       // 0x0A74(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               b_HitTerrain;                                             // 0x0A80(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0A81(0x0007) MISSED OFFSET
	class USoundBase*                                  InAirLoopSound;                                           // 0x0A88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             InAirLoopComponent;                                       // 0x0A90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              BounceTimeout;                                            // 0x0A98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0A9C(0x0004) MISSED OFFSET
	class AActor*                                      BuilderClass;                                             // 0x0AA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      BuilderClassBasement;                                     // 0x0AA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               b_SpawnTires;                                             // 0x0AB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C");
		
		return ptr;
	}


	void ClearOnly(bool DestroyFloorsQuickly, TArray<struct FVector>* ClearedGridCells);
	void CallDynamicBuilder(class AActor* Class, const struct FVector& Location);
	void CalculateCardinalDirection();
	void HandleProps(TArray<class AActor*>* Array);
	void SpawnTires(const struct FVector& ReferenceLocation);
	void ClearAndBuild(TArray<class AActor*> BGAClassArray, bool DestroyFloorsQuickly, TArray<struct FVector>* ClearedGridCells, TArray<struct FVector>* BGALocationArray, TArray<struct FRotator>* BGARotationArray);
	void CreateBaseSection(const struct FVector& ReferenceLocation, TArray<class AActor*> BGAClassArray, TArray<struct FVector>* BGALocationArray, TArray<struct FRotator>* BGARotationArray);
	void SetBaseDestination(const struct FHitResult& Hit);
	void UserConstructionScript();
	void OnStop(const struct FHitResult& Hit);
	void OnExploded(TArray<class AActor*> HitActors, TArray<struct FHitResult> HitResults);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ReceiveBeginPlay();
	void Handle_Bounce(const struct FVector& Hit_Location);
	void Delete_another_actor();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_B_Prj_Athena_SuperTowerGrenade(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
