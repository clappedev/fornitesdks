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

// Class Water.BuoyancyComponent
// 0x00F8 (0x01A8 - 0x00B0)
class UBuoyancyComponent : public UActorComponent
{
public:
	TArray<struct FSphericalPontoon>                   Pontoons;                                                 // 0x00B0(0x0010) (ZeroConstructor, Deprecated)
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty Water.BuoyancyComponent.OnEnteredWaterDelegate
	unsigned char                                      UnknownData01[0x10];                                      // 0x00D0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty Water.BuoyancyComponent.OnExitedWaterDelegate
	struct FBuoyancyData                               BuoyancyData;                                             // 0x00E0(0x0050) (Edit, DisableEditOnInstance)
	TArray<class AWaterBody*>                          CurrentWaterBodies;                                       // 0x0130(0x0010) (ZeroConstructor, Transient)
	class UPrimitiveComponent*                         SimulatingComponent;                                      // 0x0140(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x60];                                      // 0x0148(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Water.BuoyancyComponent");
		
		return ptr;
	}


	void OnPontoonExitedWater(const struct FSphericalPontoon& Pontoon);
	void OnPontoonEnteredWater(const struct FSphericalPontoon& Pontoon);
	bool IsInWaterBody();
	void GetLastWaterSurfaceInfo(struct FVector* OutWaterPlaneLocation, struct FVector* OutWaterPlaneNormal, struct FVector* OutWaterSurfacePosition, float* OutWaterDepth, int* OutWaterBodyIdx, struct FVector* OutWaterVelocity);
};


// Class Water.EnvQueryTest_InsideWaterBody
// 0x0008 (0x0200 - 0x01F8)
class UEnvQueryTest_InsideWaterBody : public UEnvQueryTest
{
public:
	bool                                               bIncludeWaves;                                            // 0x01F8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSimpleWaves;                                             // 0x01F9(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIgnoreExclusionVolumes;                                  // 0x01FA(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x01FB(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Water.EnvQueryTest_InsideWaterBody");
		
		return ptr;
	}

};


// Class Water.LakeCollisionComponent
// 0x0020 (0x0460 - 0x0440)
class ULakeCollisionComponent : public UPrimitiveComponent
{
public:
	class UBodySetup*                                  CachedBodySetup;                                          // 0x0440(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // 0x0448(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0454(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Water.LakeCollisionComponent");
		
		return ptr;
	}

};


// Class Water.NiagaraDataInterfaceWater
// 0x0008 (0x0040 - 0x0038)
class UNiagaraDataInterfaceWater : public UNiagaraDataInterface
{
public:
	class AWaterBody*                                  SourceBody;                                               // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Water.NiagaraDataInterfaceWater");
		
		return ptr;
	}

};


// Class Water.NiagaraWaterFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UNiagaraWaterFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Water.NiagaraWaterFunctionLibrary");
		
		return ptr;
	}


	void STATIC_SetWaterBody(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class AWaterBody* WaterBody);
};


// Class Water.OceanCollisionComponent
// 0x0030 (0x0470 - 0x0440)
class UOceanCollisionComponent : public UPrimitiveComponent
{
public:
	class UBodySetup*                                  CachedBodySetup;                                          // 0x0440(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0448(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Water.OceanCollisionComponent");
		
		return ptr;
	}

};


// Class Water.OceanBoxCollisionComponent
// 0x0000 (0x0470 - 0x0470)
class UOceanBoxCollisionComponent : public UBoxComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Water.OceanBoxCollisionComponent");
		
		return ptr;
	}

};


// Class Water.WaterBodyGenerator
// 0x0000 (0x0028 - 0x0028)
class UWaterBodyGenerator : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Water.WaterBodyGenerator");
		
		return ptr;
	}

};


// Class Water.RiverGenerator
// 0x0038 (0x0060 - 0x0028)
class URiverGenerator : public UWaterBodyGenerator
{
public:
	TArray<class USplineMeshComponent*>                SplineMeshComponents;                                     // 0x0028(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Water.RiverGenerator.RiverMesh

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Water.RiverGenerator");
		
		return ptr;
	}

};


// Class Water.LakeGenerator
// 0x0040 (0x0068 - 0x0028)
class ULakeGenerator : public UWaterBodyGenerator
{
public:
	class UStaticMeshComponent*                        LakeMeshComp;                                             // 0x0028(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               LakeCollisionComp;                                        // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, Deprecated, IsPlainOldData)
	class ULakeCollisionComponent*                     LakeCollision;                                            // 0x0038(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0040(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Water.LakeGenerator.LakeMesh

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Water.LakeGenerator");
		
		return ptr;
	}

};


// Class Water.OceanGenerator
// 0x0020 (0x0048 - 0x0028)
class UOceanGenerator : public UWaterBodyGenerator
{
public:
	TArray<class UOceanBoxCollisionComponent*>         CollisionBoxes;                                           // 0x0028(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UOceanCollisionComponent*>            CollisionHullSets;                                        // 0x0038(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Water.OceanGenerator");
		
		return ptr;
	}

};


// Class Water.CustomMeshGenerator
// 0x0008 (0x0030 - 0x0028)
class UCustomMeshGenerator : public UWaterBodyGenerator
{
public:
	class UStaticMeshComponent*                        MeshComp;                                                 // 0x0028(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Water.CustomMeshGenerator");
		
		return ptr;
	}

};


// Class Water.WaterBody
// 0x0BF0 (0x0E10 - 0x0220)
class AWaterBody : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0220(0x0008) MISSED OFFSET
	class UPhysicalMaterial*                           PhysicalMaterial;                                         // 0x0228(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FWaterWaveParams>                    WaveParams;                                               // 0x0230(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              WaveSpeedFactor;                                          // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TargetWaveMaskDepth;                                      // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                WaterBodyIndex;                                           // 0x0248(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                WaveParamTextureOffset;                                   // 0x024C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bFillCollisionUnderWaterBodiesForNavmesh;                 // 0x0250(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0251(0x000F) MISSED OFFSET
	struct FUnderwaterPostProcessSettings              UnderwaterPostProcessSettings;                            // 0x0260(0x0570) (Edit, BlueprintVisible)
	EWaterBodyType                                     WaterBodyType;                                            // 0x07D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x07D1(0x0007) MISSED OFFSET
	struct FWaterCurveSettings                         CurveSettings;                                            // 0x07D8(0x0020) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          WaterMaterial;                                            // 0x07F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          UnderwaterPostProcessMaterial;                            // 0x0800(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAffectsLandscape;                                        // 0x0808(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSnapToOceanHeight;                                       // 0x0809(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bGenerateCollisions;                                      // 0x080A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideWaterMesh;                                       // 0x080B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x080C(0x0004) MISSED OFFSET
	class UStaticMesh*                                 WaterMeshOverride;                                        // 0x0810(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          RiverToLakeTransitionMat;                                 // 0x0818(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          RiverToOceanTransitionMat;                                // 0x0820(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                OverlapMaterialPriority;                                  // 0x0828(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxWaveHeight;                                            // 0x082C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       CollisionProfileName;                                     // 0x0830(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OceanCollisionExtents;                                    // 0x0838(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0844(0x0004) MISSED OFFSET
	class UWaterSplineComponent*                       SplineComp;                                               // 0x0848(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UWaterBodyGenerator*                         Generator;                                                // 0x0850(0x0008) (ZeroConstructor, IsPlainOldData)
	class UWaterSplineMetadata*                        WaterSplineMetadata;                                      // 0x0858(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    WaterMaterialInstance;                                    // 0x0860(0x0008) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	class UMaterialInstanceDynamic*                    RiverToLakeTransitionMID;                                 // 0x0868(0x0008) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	class UMaterialInstanceDynamic*                    RiverToOceanTransitionMID;                                // 0x0870(0x0008) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	class UMaterialInstanceDynamic*                    UnderwaterPostProcessMID;                                 // 0x0878(0x0008) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	TArray<TLazyObjectPtr<class AWaterBodyIsland>>     Islands;                                                  // 0x0880(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	TArray<TLazyObjectPtr<class AWaterBodyExclusionVolume>> ExclusionVolumes;                                         // 0x0890(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	TWeakObjectPtr<class ALandscapeProxy>              Landscape;                                                // 0x08A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x8];                                       // 0x08A8(0x0008) MISSED OFFSET
	struct FPostProcessSettings                        CurrentPostProcessSettings;                               // 0x08B0(0x0550) (Transient)
	float                                              OceanHeightOffset;                                        // 0x0E00(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bCanAffectNavigation;                                     // 0x0E04(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0E05(0x0003) MISSED OFFSET
	class UNavAreaBase*                                WaterNavAreaClass;                                        // 0x0E08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Water.WaterBody");
		
		return ptr;
	}


	void OnWaterBodyFinishedUpdating();
	void OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged);
	class UWaterSplineComponent* GetWaterSpline();
	TArray<class UStaticMeshComponent*> GetWaterMeshComponents();
	class UMaterialInstanceDynamic* GetWaterMaterialInstance();
	class UMaterialInstanceDynamic* GetUnderwaterPostProcessMaterialInstance();
	class UMaterialInstanceDynamic* GetRiverToOceanTransitionMaterialInstance();
	class UMaterialInstanceDynamic* GetRiverToLakeTransitionMaterialInstance();
	TArray<class AWaterBodyIsland*> GetIslands();
	TArray<class AWaterBodyExclusionVolume*> GetExclusionVolumes();
};


// Class Water.WaterBodyExclusionVolume
// 0x0018 (0x0280 - 0x0268)
class AWaterBodyExclusionVolume : public APhysicsVolume
{
public:
	bool                                               bIgnoreAllOverlappingWaterBodies;                         // 0x0268(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0269(0x0007) MISSED OFFSET
	TArray<class AWaterBody*>                          WaterBodiesToIgnore;                                      // 0x0270(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Water.WaterBodyExclusionVolume");
		
		return ptr;
	}

};


// Class Water.WaterBodyIsland
// 0x0008 (0x0228 - 0x0220)
class AWaterBodyIsland : public AActor
{
public:
	class UWaterSplineComponent*                       SplineComp;                                               // 0x0220(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Water.WaterBodyIsland");
		
		return ptr;
	}


	class UWaterSplineComponent* GetWaterSpline();
};


// Class Water.WaterBodyProxy
// 0x0000 (0x0220 - 0x0220)
class AWaterBodyProxy : public AActor
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Water.WaterBodyProxy");
		
		return ptr;
	}

};


// Class Water.WaterMeshActor
// 0x0010 (0x0230 - 0x0220)
class AWaterMeshActor : public AActor
{
public:
	class UTexture2D*                                  WaterVelocityTexture;                                     // 0x0220(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class UWaterMeshComponent*                         WaterMesh;                                                // 0x0228(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Water.WaterMeshActor");
		
		return ptr;
	}

};


// Class Water.WaterMeshComponent
// 0x0100 (0x0570 - 0x0470)
class UWaterMeshComponent : public UMeshComponent
{
public:
	struct FIntPoint                                   ExtentInTiles;                                            // 0x0470(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          FarDistanceMaterial;                                      // 0x0478(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FarDistanceMeshExtent;                                    // 0x0480(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE4];                                      // 0x0484(0x00E4) MISSED OFFSET
	int                                                TessellationFactor;                                       // 0x0568(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LODScale;                                                 // 0x056C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Water.WaterMeshComponent");
		
		return ptr;
	}


	bool IsEnabled();
};


// Class Water.WaterRuntimeSettings
// 0x0008 (0x0040 - 0x0038)
class UWaterRuntimeSettings : public UDeveloperSettings
{
public:
	TEnumAsByte<ECollisionChannel>                     CollisionChannelForWaterTraces;                           // 0x0038(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Water.WaterRuntimeSettings");
		
		return ptr;
	}

};


// Class Water.WaterSplineComponent
// 0x0030 (0x0560 - 0x0530)
class UWaterSplineComponent : public USplineComponent
{
public:
	struct FWaterSplineCurveDefaults                   WaterSplineDefaults;                                      // 0x0530(0x0014) (Edit, DisableEditOnInstance)
	struct FWaterSplineCurveDefaults                   PreviousWaterSplineDefaults;                              // 0x0544(0x0014)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0558(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Water.WaterSplineComponent");
		
		return ptr;
	}

};


// Class Water.WaterSplineMetadata
// 0x0090 (0x00B8 - 0x0028)
class UWaterSplineMetadata : public USplineMetadata
{
public:
	struct FInterpCurveFloat                           Depth;                                                    // 0x0028(0x0018) (Edit, ZeroConstructor)
	struct FInterpCurveFloat                           WaterVelocityScalar;                                      // 0x0040(0x0018) (Edit, ZeroConstructor)
	struct FInterpCurveFloat                           ShorelineWidth;                                           // 0x0058(0x0018) (Edit, ZeroConstructor)
	struct FInterpCurveFloat                           RiverWidth;                                               // 0x0070(0x0018) (Edit, ZeroConstructor)
	struct FInterpCurveFloat                           AudioIntensity;                                           // 0x0088(0x0018) (Edit, ZeroConstructor)
	struct FInterpCurveVector                          WaterVelocity;                                            // 0x00A0(0x0018) (ZeroConstructor, Deprecated)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Water.WaterSplineMetadata");
		
		return ptr;
	}

};


// Class Water.WaterSubsystem
// 0x0080 (0x00B0 - 0x0030)
class UWaterSubsystem : public UWorldSubsystem
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x0030(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty Water.WaterSubsystem.OnCameraUnderwaterStateChanged
	unsigned char                                      UnknownData02[0x10];                                      // 0x0048(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty Water.WaterSubsystem.OnWaterScalabilityChanged
	class AWaterMeshActor*                             WaterMeshActor;                                           // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x28];                                      // 0x0060(0x0028) MISSED OFFSET
	class UMaterialParameterCollection*                MaterialParameterCollection;                              // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x20];                                      // 0x0090(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Water.WaterSubsystem");
		
		return ptr;
	}


	void SetOceanFloodHeight(float InFloodHeight);
	void PrintToWaterLog(const struct FString& Message, bool bWarning);
	bool IsWaterRenderingEnabled();
	bool IsUnderwaterPostProcessEnabled();
	bool IsShallowWaterSimulationEnabled();
	float GetSmoothedWorldTimeSeconds();
	int STATIC_GetShallowWaterSimulationRenderTargetSize();
	int STATIC_GetShallowWaterMaxImpulseForces();
	int STATIC_GetShallowWaterMaxDynamicForces();
	float GetOceanTotalHeight();
	float GetOceanFloodHeight();
	float GetOceanBaseHeight();
	float GetCameraUnderwaterDepth();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
