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

// BlueprintGeneratedClass B_Prj_Athena_TowerGrenade.B_Prj_Athena_TowerGrenade_C
// 0x0348 (0x0BC0 - 0x0878)
class AB_Prj_Athena_TowerGrenade_C : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0878(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x0880(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0888(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URotatingMovementComponent*                  RotatingMovement;                                         // 0x0890(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     BaseDestination;                                          // 0x0898(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x08A4(0x0004) MISSED OFFSET
	TArray<class AActor*>                              BGAClasses_1;                                             // 0x08A8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FVector>                             BGALocations_1;                                           // 0x08B8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FRotator>                            BGARotations_1;                                           // 0x08C8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystem*                             P_BuildBuilding;                                          // 0x08D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Cue_CloseSound;                                           // 0x08E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Cue_DistantSound;                                         // 0x08E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     GridExplosionOffset;                                      // 0x08F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GridSizeXY;                                               // 0x08FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GridSizeZ;                                                // 0x0900(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GridYOffset;                                              // 0x0904(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GridZOffset;                                              // 0x0908(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECardinalDirection>                    CardinalDirection;                                        // 0x090C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x090D(0x0003) MISSED OFFSET
	TMap<TEnumAsByte<ECardinalDirection>, float>       OrientationYawOffsets;                                    // 0x0910(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<TEnumAsByte<ECardinalDirection>, struct FVector> OrientationLocationOffsets;                               // 0x0960(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FVector>                             ClearedCells_1;                                           // 0x09B0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     LastBounceLocation;                                       // 0x09C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinBounceDistance;                                        // 0x09CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastBounceTime;                                           // 0x09D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinTimeBetweenBounces;                                    // 0x09D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  BounceSound;                                              // 0x09D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BuildDelay;                                               // 0x09E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x09E4(0x0004) MISSED OFFSET
	TArray<class AActor*>                              BGAClasses_2;                                             // 0x09E8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AActor*>                              BGAClasses_3;                                             // 0x09F8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AActor*>                              BGAClasses_4;                                             // 0x0A08(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FVector>                             ClearedCells_2;                                           // 0x0A18(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FVector>                             ClearedCells_3;                                           // 0x0A28(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FVector>                             ClearedCells_4;                                           // 0x0A38(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FRotator>                            BGARotations_2;                                           // 0x0A48(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FRotator>                            BGARotations_3;                                           // 0x0A58(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FRotator>                            BGARotations_4;                                           // 0x0A68(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FVector>                             BGALocations_2;                                           // 0x0A78(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FVector>                             BGALocations_3;                                           // 0x0A88(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FVector>                             BGALocations_4;                                           // 0x0A98(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FVector>                             BGALocations_Underground;                                 // 0x0AA8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AActor*>                              BGAClasses_Underground;                                   // 0x0AB8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FRotator>                            BGARotations_Underground;                                 // 0x0AC8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FVector>                             ClearedCells_Underground;                                 // 0x0AD8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AActor*>                              BGAClasses_Tires;                                         // 0x0AE8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FVector>                             BGALocations_Tires;                                       // 0x0AF8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FRotator>                            BGARotations_Tires;                                       // 0x0B08(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<TEnumAsByte<ECardinalDirection>, struct FVector> OrientationDoortraceOffsets;                              // 0x0B18(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     DoorTraceOffsetHigh;                                      // 0x0B68(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DoorTraceOffsetLow;                                       // 0x0B74(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               b_HitTerrain;                                             // 0x0B80(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0B81(0x0007) MISSED OFFSET
	class USoundBase*                                  InAirLoopSound;                                           // 0x0B88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             InAirLoopComponent;                                       // 0x0B90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              BounceTimeout;                                            // 0x0B98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDebug;                                                  // 0x0B9C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0B9D(0x0003) MISSED OFFSET
	TArray<class AActor*>                              ActorsToDestroy;                                          // 0x0BA0(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                              ActorsToIgnore;                                           // 0x0BB0(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_Prj_Athena_TowerGrenade.B_Prj_Athena_TowerGrenade_C");
		
		return ptr;
	}


	void CalculateCardinalDirection();
	void HandleProps(TArray<class AActor*>* Array);
	void SpawnTires(const struct FVector& ReferenceLocation);
	void ClearAndBuild(TArray<class AActor*> BGAClassArray, bool DestroyFloorsQuickly, TArray<struct FVector>* ClearedGridCells, TArray<struct FVector>* BGALocationArray, TArray<struct FRotator>* BGARotationArray);
	void DestroyActorsInGridCell(const struct FVector& CellLocation, bool DestroyFloorsQuickly);
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
	void ExecuteUbergraph_B_Prj_Athena_TowerGrenade(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
