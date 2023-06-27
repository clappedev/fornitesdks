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

// Class ChaosNiagara.NiagaraDataInterfaceChaosDestruction
// 0x0200 (0x0238 - 0x0038)
class UNiagaraDataInterfaceChaosDestruction : public UNiagaraDataInterface
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) UNKNOWN PROPERTY: SetProperty ChaosNiagara.NiagaraDataInterfaceChaosDestruction.ChaosSolverActorSet
	EDataSourceTypeEnum                                DataSourceType;                                           // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	int                                                DataProcessFrequency;                                     // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxNumberOfDataEntriesToSpawn;                            // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               DoSpawn;                                                  // 0x0094(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0095(0x0003) MISSED OFFSET
	struct FVector2D                                   SpawnMultiplierMinMax;                                    // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpawnChance;                                              // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ImpulseToSpawnMinMax;                                     // 0x00A4(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SpeedToSpawnMinMax;                                       // 0x00AC(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   MassToSpawnMinMax;                                        // 0x00B4(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ExtentMinToSpawnMinMax;                                   // 0x00BC(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ExtentMaxToSpawnMinMax;                                   // 0x00C4(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   VolumeToSpawnMinMax;                                      // 0x00CC(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SolverTimeToSpawnMinMax;                                  // 0x00D4(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SurfaceTypeToSpawn;                                       // 0x00DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ELocationFilteringModeEnum                         LocationFilteringMode;                                    // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ELocationXToSpawnEnum                              LocationXToSpawn;                                         // 0x00E1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x00E2(0x0002) MISSED OFFSET
	struct FVector2D                                   LocationXToSpawnMinMax;                                   // 0x00E4(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ELocationYToSpawnEnum                              LocationYToSpawn;                                         // 0x00EC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00ED(0x0003) MISSED OFFSET
	struct FVector2D                                   LocationYToSpawnMinMax;                                   // 0x00F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ELocationZToSpawnEnum                              LocationZToSpawn;                                         // 0x00F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x00F9(0x0003) MISSED OFFSET
	struct FVector2D                                   LocationZToSpawnMinMax;                                   // 0x00FC(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EDataSortTypeEnum                                  DataSortingType;                                          // 0x0104(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bGetExternalCollisionData;                                // 0x0105(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               DoSpatialHash;                                            // 0x0106(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1];                                       // 0x0107(0x0001) MISSED OFFSET
	struct FVector                                     SpatialHashVolumeMin;                                     // 0x0108(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpatialHashVolumeMax;                                     // 0x0114(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpatialHashVolumeCellSize;                                // 0x0120(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxDataPerCell;                                           // 0x012C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyMaterialsFilter;                                    // 0x0130(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0131(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData08[0x50];                                      // 0x0131(0x0050) UNKNOWN PROPERTY: SetProperty ChaosNiagara.NiagaraDataInterfaceChaosDestruction.ChaosBreakingMaterialSet
	bool                                               bGetExternalBreakingData;                                 // 0x0188(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bGetExternalTrailingData;                                 // 0x0189(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x018A(0x0002) MISSED OFFSET
	struct FVector2D                                   RandomPositionMagnitudeMinMax;                            // 0x018C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InheritedVelocityMultiplier;                              // 0x0194(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ERandomVelocityGenerationTypeEnum                  RandomVelocityGenerationType;                             // 0x0198(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0199(0x0003) MISSED OFFSET
	struct FVector2D                                   RandomVelocityMagnitudeMinMax;                            // 0x019C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpreadAngleMax;                                           // 0x01A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VelocityOffsetMin;                                        // 0x01A8(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VelocityOffsetMax;                                        // 0x01B4(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   FinalVelocityMagnitudeMinMax;                             // 0x01C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxLatency;                                               // 0x01C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EDebugTypeEnum                                     DebugType;                                                // 0x01CC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x01CD(0x0003) MISSED OFFSET
	int                                                LastSpawnedPointID;                                       // 0x01D0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LastSpawnTime;                                            // 0x01D4(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x10];                                      // 0x01D8(0x0010) MISSED OFFSET
	float                                              SolverTime;                                               // 0x01E8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeStampOfLastProcessedData;                             // 0x01EC(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x48];                                      // 0x01F0(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ChaosNiagara.NiagaraDataInterfaceChaosDestruction");
		
		return ptr;
	}

};


// Class ChaosNiagara.NiagaraDataInterfaceFieldSystem
// 0x0058 (0x0090 - 0x0038)
class UNiagaraDataInterfaceFieldSystem : public UNiagaraDataInterface
{
public:
	class UBlueprint*                                  BlueprintSource;                                          // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SourceActor;                                              // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FIntVector                                  FieldDimensions;                                          // 0x0048(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MinBounds;                                                // 0x0054(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MaxBounds;                                                // 0x0060(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x24];                                      // 0x006C(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ChaosNiagara.NiagaraDataInterfaceFieldSystem");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
