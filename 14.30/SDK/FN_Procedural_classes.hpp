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

// Class Procedural.HISMBuilderSettings
// 0x01A8 (0x01D0 - 0x0028)
class UHISMBuilderSettings : public UObject
{
public:
	TEnumAsByte<EComponentMobility>                    Mobility;                                                 // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	struct FInt32Interval                              CullDistance;                                             // 0x002C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCastShadow : 1;                                          // 0x0034(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAffectDynamicIndirectLighting : 1;                       // 0x0034(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAffectDistanceFieldLighting : 1;                         // 0x0034(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCastDynamicShadow : 1;                                   // 0x0034(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCastStaticShadow : 1;                                    // 0x0034(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCastShadowAsTwoSided : 1;                                // 0x0034(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bReceivesDecals : 1;                                      // 0x0034(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverrideLightMapRes : 1;                                 // 0x0034(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	int                                                OverriddenLightMapRes;                                    // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ELightmapType                                      LightmapType;                                             // 0x003C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	unsigned char                                      bUseAsOccluder : 1;                                       // 0x0040(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	struct FBodyInstance                               BodyInstance;                                             // 0x0048(0x0158) (Edit, BlueprintVisible)
	TEnumAsByte<EHasCustomNavigableGeometry>           CustomNavigableGeometry;                                  // 0x01A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLightingChannels                           LightingChannels;                                         // 0x01A1(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData04[0x2];                                       // 0x01A2(0x0002) MISSED OFFSET
	unsigned char                                      bRenderCustomDepth : 1;                                   // 0x01A4(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData05[0x3];                                       // 0x01A5(0x0003) MISSED OFFSET
	int                                                CustomDepthStencilValue;                                  // 0x01A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TranslucencySortPriority;                                 // 0x01AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableDensityScaling : 1;                                // 0x01B0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData06[0x7];                                       // 0x01B1(0x0007) MISSED OFFSET
	TArray<class URuntimeVirtualTexture*>              RuntimeVirtualTextures;                                   // 0x01B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                VirtualTextureCullMips;                                   // 0x01C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ERuntimeVirtualTextureMainPassType                 VirtualTextureRenderPassType;                             // 0x01CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x01CD(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Procedural.HISMBuilderSettings");
		
		return ptr;
	}


	void SetOverriddenLightMapRes(int Value);
	int GetOverriddenLightMapRes();
};


// Class Procedural.ProceduralParameterModifier
// 0x0010 (0x0038 - 0x0028)
class UProceduralParameterModifier : public UObject
{
public:
	bool                                               bEnabled;                                                 // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              Contribution;                                             // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EProceduralParameterModifierBlendMode              BlendMode;                                                // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Procedural.ProceduralParameterModifier");
		
		return ptr;
	}


	float GetContribution();
};


// Class Procedural.ProceduralContentVariationsWeightsModifier
// 0x0000 (0x0038 - 0x0038)
class UProceduralContentVariationsWeightsModifier : public UProceduralParameterModifier
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Procedural.ProceduralContentVariationsWeightsModifier");
		
		return ptr;
	}

};


// Class Procedural.ProceduralContentVariationsWeightsMapModifier
// 0x0010 (0x0048 - 0x0038)
class UProceduralContentVariationsWeightsMapModifier : public UProceduralContentVariationsWeightsModifier
{
public:
	TArray<struct FProceduralContentVariationMap>      VariationsMaps;                                           // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Procedural.ProceduralContentVariationsWeightsMapModifier");
		
		return ptr;
	}

};


// Class Procedural.ProceduralGenerator
// 0x0010 (0x0038 - 0x0028)
class UProceduralGenerator : public UObject
{
public:
	struct FProceduralDebugSettings                    DebugSettings;                                            // 0x0028(0x000C) (Edit, BlueprintVisible, Transient)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Procedural.ProceduralGenerator");
		
		return ptr;
	}

};


// Class Procedural.ProceduralCustomGenerator
// 0x0010 (0x0048 - 0x0038)
class UProceduralCustomGenerator : public UProceduralGenerator
{
public:
	class UProceduralGeneratorContext*                 GeneratorContextClass;                                    // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UProceduralGeneratorContext*                 GeneratorContext;                                         // 0x0040(0x0008) (Edit, ZeroConstructor, NoClear, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Procedural.ProceduralCustomGenerator");
		
		return ptr;
	}

};


// Class Procedural.ProceduralDataMap
// 0x0008 (0x0030 - 0x0028)
class UProceduralDataMap : public UObject
{
public:
	bool                                               bUseRemapCurve;                                           // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Procedural.ProceduralDataMap");
		
		return ptr;
	}

};


// Class Procedural.ProceduralFloatDataMap
// 0x0088 (0x00B8 - 0x0030)
class UProceduralFloatDataMap : public UProceduralDataMap
{
public:
	struct FProceduralRemapFloatCurve                  RemapCurve;                                               // 0x0030(0x0088) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Procedural.ProceduralFloatDataMap");
		
		return ptr;
	}

};


// Class Procedural.ProceduralVectorDataMap
// 0x0208 (0x0238 - 0x0030)
class UProceduralVectorDataMap : public UProceduralDataMap
{
public:
	struct FProceduralRemapVectorCurve                 RemapCurve;                                               // 0x0030(0x0208) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Procedural.ProceduralVectorDataMap");
		
		return ptr;
	}

};


// Class Procedural.ProceduralDensityModifier
// 0x0000 (0x0038 - 0x0038)
class UProceduralDensityModifier : public UProceduralParameterModifier
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Procedural.ProceduralDensityModifier");
		
		return ptr;
	}

};


// Class Procedural.ProceduralDensityMapModifier
// 0x0008 (0x0040 - 0x0038)
class UProceduralDensityMapModifier : public UProceduralDensityModifier
{
public:
	class UProceduralFloatDataMap*                     Map;                                                      // 0x0038(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Procedural.ProceduralDensityMapModifier");
		
		return ptr;
	}

};


// Class Procedural.ProceduralGenerationBlockingVolume
// 0x0010 (0x0268 - 0x0258)
class AProceduralGenerationBlockingVolume : public AVolume
{
public:
	TArray<class AProceduralGenerationVolume*>         BlockedVolumes;                                           // 0x0258(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Procedural.ProceduralGenerationBlockingVolume");
		
		return ptr;
	}

};


// Class Procedural.ProceduralGenerationComponent
// 0x0030 (0x00E0 - 0x00B0)
class UProceduralGenerationComponent : public UActorComponent
{
public:
	class UProceduralGenerator*                        Generator;                                                // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShowDebugVisualization;                                  // 0x00B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B9(0x0003) MISSED OFFSET
	struct FGuid                                       ProceduralGenerationGuid;                                 // 0x00BC(0x0010) (ZeroConstructor, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
	class AVolume*                                     GenerationVolume;                                         // 0x00D0(0x0008) (ZeroConstructor, DuplicateTransient, IsPlainOldData)
	class UProceduralGenerationContext*                GenerationContext;                                        // 0x00D8(0x0008) (ZeroConstructor, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Procedural.ProceduralGenerationComponent");
		
		return ptr;
	}

};


// Class Procedural.ProceduralGenerationContext
// 0x00C8 (0x00F0 - 0x0028)
class UProceduralGenerationContext : public UObject
{
public:
	class UProceduralGeneratorContext*                 GeneratorContext;                                         // 0x0028(0x0008) (ZeroConstructor, DuplicateTransient, IsPlainOldData)
	TArray<class UProceduralGeneratorContext*>         GeneratedContexts;                                        // 0x0030(0x0010) (ZeroConstructor, Transient)
	TArray<class UProceduralGeneratorContext*>         RegisteredContexts;                                       // 0x0040(0x0010) (ZeroConstructor, DuplicateTransient)
	TMap<struct FGuid, class UProceduralGeneratorContext*> GeneratorContexts;                                        // 0x0050(0x0050) (DuplicateTransient, Deprecated)
	unsigned char                                      UnknownData00[0x50];                                      // 0x00A0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Procedural.ProceduralGenerationContext");
		
		return ptr;
	}


	class AVolume* GetGenerationVolume();
	class UProceduralGenerationComponent* GetGenerationComponent();
};


// Class Procedural.ProceduralGenerationVolume
// 0x0008 (0x0260 - 0x0258)
class AProceduralGenerationVolume : public AVolume
{
public:
	class UProceduralGenerationComponent*              ProceduralComponent;                                      // 0x0258(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Procedural.ProceduralGenerationVolume");
		
		return ptr;
	}


	void Generate();
	void ClearGeneratedContent();
};


// Class Procedural.ProceduralGeneratorContext
// 0x0030 (0x0058 - 0x0028)
class UProceduralGeneratorContext : public UObject
{
public:
	class UProceduralGenerator*                        Generator;                                                // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UProceduralGenerationContext*                GenerationContext;                                        // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UProceduralGeneratorContext*                 OwnerContext;                                             // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UObject*>                             GeneratedObjects;                                         // 0x0040(0x0010) (BlueprintVisible, ZeroConstructor)
	class UProceduralPointCloud*                       ExportedPointCloud;                                       // 0x0050(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Procedural.ProceduralGeneratorContext");
		
		return ptr;
	}


	bool OnGenerate();
	void OnDrawVisualization();
	void OnClearGeneratedContent();
	void GetOrCreateGeneratorContext(class UProceduralGenerator* Generator, class UProceduralGeneratorContext** Context);
	TArray<class UProceduralGeneratorContext*> GetGeneratedContexts();
	bool Generate();
	void ClearGeneratedContent();
};


// Class Procedural.ProceduralGeneratorStack
// 0x0010 (0x0048 - 0x0038)
class UProceduralGeneratorStack : public UProceduralGenerator
{
public:
	TArray<struct FProceduralGenerationStackElement>   Generators;                                               // 0x0038(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Procedural.ProceduralGeneratorStack");
		
		return ptr;
	}

};


// Class Procedural.ProceduralGeneratorStackContext
// 0x0000 (0x0058 - 0x0058)
class UProceduralGeneratorStackContext : public UProceduralGeneratorContext
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Procedural.ProceduralGeneratorStackContext");
		
		return ptr;
	}

};


// Class Procedural.ProceduralLandscapeLayerMap
// 0x0010 (0x00C8 - 0x00B8)
class UProceduralLandscapeLayerMap : public UProceduralFloatDataMap
{
public:
	struct FName                                       LandscapeLayerName;                                       // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       LandscapeEditLayerName;                                   // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Procedural.ProceduralLandscapeLayerMap");
		
		return ptr;
	}

};


// Class Procedural.ProceduralPointCloud
// 0x0010 (0x0038 - 0x0028)
class UProceduralPointCloud : public UObject
{
public:
	TArray<struct FProceduralPointCloudPoint>          Points;                                                   // 0x0028(0x0010) (BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Procedural.ProceduralPointCloud");
		
		return ptr;
	}


	TArray<struct FProceduralPointCloudPoint> GetPointsByTag(const struct FName& InTag);
	void Empty();
};


// Class Procedural.ProceduralRotationModifier
// 0x0000 (0x0038 - 0x0038)
class UProceduralRotationModifier : public UProceduralParameterModifier
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Procedural.ProceduralRotationModifier");
		
		return ptr;
	}

};


// Class Procedural.ProceduralRotationMapModifier
// 0x0028 (0x0060 - 0x0038)
class UProceduralRotationMapModifier : public UProceduralRotationModifier
{
public:
	class UProceduralVectorDataMap*                    Map;                                                      // 0x0038(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	EProceduralRotationFormat                          RotationFormat;                                           // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	struct FFloatInterval                              Roll;                                                     // 0x0044(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              Pitch;                                                    // 0x004C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              Yaw;                                                      // 0x0054(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Procedural.ProceduralRotationMapModifier");
		
		return ptr;
	}


	void SetYawMin(float InValue);
	void SetYawMax(float InValue);
	void SetRollMin(float InValue);
	void SetRollMax(float InValue);
	void SetPitchMin(float InValue);
	void SetPitchMax(float InValue);
	float GetYawMin();
	float GetYawMax();
	float GetRollMin();
	float GetRollMax();
	float GetPitchMin();
	float GetPitchMax();
};


// Class Procedural.ProceduralRotationNoiseModifier
// 0x0028 (0x0060 - 0x0038)
class UProceduralRotationNoiseModifier : public UProceduralRotationModifier
{
public:
	unsigned char                                      bRandomRoll : 1;                                          // 0x0038(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	struct FFloatInterval                              RandomRoll;                                               // 0x003C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bRandomPitch : 1;                                         // 0x0044(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	struct FFloatInterval                              RandomPitch;                                              // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bRandomYaw : 1;                                           // 0x0050(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	struct FFloatInterval                              RandomYaw;                                                // 0x0054(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x005C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Procedural.ProceduralRotationNoiseModifier");
		
		return ptr;
	}


	void SetRandomYawMin(float InValue);
	void SetRandomYawMax(float InValue);
	void SetRandomRollMin(float InValue);
	void SetRandomRollMax(float InValue);
	void SetRandomPitchMin(float InValue);
	void SetRandomPitchMax(float InValue);
	float GetRandomYawMin();
	float GetRandomYawMax();
	float GetRandomRollMin();
	float GetRandomRollMax();
	float GetRandomPitchMin();
	float GetRandomPitchMax();
};


// Class Procedural.ProceduralScaleModifier
// 0x0000 (0x0038 - 0x0038)
class UProceduralScaleModifier : public UProceduralParameterModifier
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Procedural.ProceduralScaleModifier");
		
		return ptr;
	}

};


// Class Procedural.ProceduralScaleMapModifier
// 0x0018 (0x0050 - 0x0038)
class UProceduralScaleMapModifier : public UProceduralScaleModifier
{
public:
	bool                                               bRemapScale;                                              // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	struct FFloatInterval                              RemapScale;                                               // 0x003C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	class UProceduralFloatDataMap*                     Map;                                                      // 0x0048(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Procedural.ProceduralScaleMapModifier");
		
		return ptr;
	}


	void SetRemapScaleMin(float InValue);
	void SetRemapScaleMax(float InValue);
	float GetRemapScaleMin();
	float GetRemapScaleMax();
};


// Class Procedural.ProceduralScaleNoiseModifier
// 0x0008 (0x0040 - 0x0038)
class UProceduralScaleNoiseModifier : public UProceduralScaleModifier
{
public:
	struct FFloatInterval                              Scale;                                                    // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Procedural.ProceduralScaleNoiseModifier");
		
		return ptr;
	}


	void SetScaleMin(float InValue);
	void SetScaleMax(float InValue);
	float GetScaleMin();
	float GetScaleMax();
};


// Class Procedural.ProceduralScatterContentVariation
// 0x0070 (0x0098 - 0x0028)
class UProceduralScatterContentVariation : public UObject
{
public:
	float                                              Weight;                                                   // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EProceduralScatterContentPivotMode                 PivotMode;                                                // 0x002C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	struct FVector                                     AdditionalPivotOffset;                                    // 0x0030(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FootprintBoundingBoxRatio;                                // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               SetActorTags;                                             // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x48];                                      // 0x0050(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Procedural.ProceduralScatterContentVariation");
		
		return ptr;
	}

};


// Class Procedural.ProceduralScatterActorContentVariation
// 0x0008 (0x00A0 - 0x0098)
class UProceduralScatterActorContentVariation : public UProceduralScatterContentVariation
{
public:
	class AActor*                                      ActorClass;                                               // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Procedural.ProceduralScatterActorContentVariation");
		
		return ptr;
	}

};


// Class Procedural.ProceduralScatterContentSettings
// 0x0040 (0x0068 - 0x0028)
class UProceduralScatterContentSettings : public UObject
{
public:
	TArray<struct FName>                               SetActorTags;                                             // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UProceduralScatterContentVariation*>  Variations;                                               // 0x0038(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0048(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Procedural.ProceduralScatterContentSettings");
		
		return ptr;
	}

};


// Class Procedural.ProceduralScatterActorContentSettings
// 0x0008 (0x0070 - 0x0068)
class UProceduralScatterActorContentSettings : public UProceduralScatterContentSettings
{
public:
	bool                                               bHideFromWorldOutliner;                                   // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Procedural.ProceduralScatterActorContentSettings");
		
		return ptr;
	}

};


// Class Procedural.ProceduralScatterGenerator
// 0x0088 (0x00C0 - 0x0038)
class UProceduralScatterGenerator : public UProceduralGenerator
{
public:
	EProceduralScatterMethod                           ScatterMethod;                                            // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	struct FProceduralScatterTileSettings              TileSettings;                                             // 0x003C(0x0014) (Edit, BlueprintVisible)
	int                                                RandomSeed;                                               // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DuplicateTransient, IsPlainOldData)
	int                                                NumUniqueSourcePointPatterns;                             // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   GridSize;                                                 // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   GridJitter;                                               // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GridRotation;                                             // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   GridOffset;                                               // 0x006C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	TArray<struct FProceduralScatterSettingsElement>   ScatterSettingsElements;                                  // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               BlockingActorTags;                                        // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bAllScatterPointsBlocking;                                // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLocalDistribution;                                       // 0x0099(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x009A(0x0006) MISSED OFFSET
	TArray<struct FName>                               BlockingScatterPointTags;                                 // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FProceduralScatterDebugSettings             ScatterDebugSettings;                                     // 0x00B0(0x000C) (Edit, BlueprintVisible, Transient)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Procedural.ProceduralScatterGenerator");
		
		return ptr;
	}

};


// Class Procedural.ProceduralScatterGeneratorContext
// 0x0238 (0x0290 - 0x0058)
class UProceduralScatterGeneratorContext : public UProceduralGeneratorContext
{
public:
	struct FScatteredPointCloud                        ScatteredPointCloud;                                      // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, Transient)
	TArray<class UProceduralScatterGeneratorTile*>     UniqueTiles;                                              // 0x0068(0x0010) (ZeroConstructor, Transient)
	TArray<struct FSourcePointGenerator>               SourcePointGenerators;                                    // 0x0078(0x0010) (ZeroConstructor, Transient)
	TArray<struct FProceduralScatterProjectionPoint>   ProjectionPointCloud;                                     // 0x0088(0x0010) (ZeroConstructor, Transient)
	class UProceduralPointCloud*                       SourcePointCloud;                                         // 0x0098(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UProceduralPointCloud*                       BlockerPointCloud;                                        // 0x00A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ProjectionVectorMaterial;                                 // 0x00A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E0];                                     // 0x00B0(0x01E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Procedural.ProceduralScatterGeneratorContext");
		
		return ptr;
	}

};


// Class Procedural.ProceduralScatterGeneratorTile
// 0x0128 (0x0150 - 0x0028)
class UProceduralScatterGeneratorTile : public UObject
{
public:
	class UProceduralScatterGenerator*                 Generator;                                                // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FProceduralScatter2DPoint>           GeneratedPoints;                                          // 0x0030(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x110];                                     // 0x0040(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Procedural.ProceduralScatterGeneratorTile");
		
		return ptr;
	}

};


// Class Procedural.ProceduralScatterSettings
// 0x01A8 (0x01D0 - 0x0028)
class UProceduralScatterSettings : public UObject
{
public:
	class UProceduralScatterContentSettings*           Content;                                                  // 0x0028(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      bContentVariationsModifiersEnabled : 1;                   // 0x0030(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FProceduralContentVariationsModifiers       ContentVariationsModifiers;                               // 0x0038(0x0010) (Edit, BlueprintVisible)
	TArray<struct FName>                               SetPointTags;                                             // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              CollisionRadius;                                          // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAutomaticCollisionRadius : 1;                            // 0x005C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bUseSphericalBoundsForAutomaticCollisionRadius : 1;       // 0x005C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
	float                                              AutomaticCollisionRadiusScaleFactor;                      // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DistributionSeed;                                         // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DuplicateTransient, IsPlainOldData)
	unsigned char                                      bDensityModifiersEnabled : 1;                             // 0x0068(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	struct FProceduralDensityModifiers                 DensityModifiers;                                         // 0x0070(0x0010) (Edit, BlueprintVisible)
	float                                              Density;                                                  // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	TArray<struct FName>                               SourcePointTagIncludes;                                   // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               SourcePointTagExcludes;                                   // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               SourceActorTagIncludes;                                   // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               SourceActorTagExcludes;                                   // 0x00B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               SourceComponentTagIncludes;                               // 0x00C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               SourceComponentTagExcludes;                               // 0x00D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FFloatInterval                              SourcePointDistance;                                      // 0x00E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseSourcePointExactNumber : 1;                           // 0x00F0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00F1(0x0003) MISSED OFFSET
	int                                                SourcePointExactNumber;                                   // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bScaleModifiersEnabled : 1;                               // 0x00F8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData05[0x7];                                       // 0x00F9(0x0007) MISSED OFFSET
	struct FProceduralScaleModifiers                   ScaleModifiers;                                           // 0x0100(0x0020) (Edit, BlueprintVisible)
	unsigned char                                      bRotationModifiersEnabled : 1;                            // 0x0120(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0121(0x0007) MISSED OFFSET
	struct FProceduralRotationModifiers                RotationModifiers;                                        // 0x0128(0x0010) (Edit, BlueprintVisible)
	unsigned char                                      bAlignToNormal : 1;                                       // 0x0138(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0139(0x0003) MISSED OFFSET
	float                                              AlignMaxAngle;                                            // 0x013C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FProceduralScatterTargetSurface             TargetSurface;                                            // 0x0140(0x0048) (Edit, BlueprintVisible)
	unsigned char                                      bDetectOverhangingLedge : 1;                              // 0x0188(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0189(0x0003) MISSED OFFSET
	int                                                OverhangingLedgeDetectionRayCount;                        // 0x018C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OverhangingLedgeDetectionLength;                          // 0x0190(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OverhangingLedgeDetectionVerticalThreshold;               // 0x0194(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OverhangingLedgeDetectionRadiusScale;                     // 0x0198(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FilterMinimumScale;                                       // 0x019C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OverlapPriority;                                          // 0x01A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCollisionWithWorld : 1;                                  // 0x01A4(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData09[0x3];                                       // 0x01A5(0x0003) MISSED OFFSET
	struct FVector                                     CollisionScale;                                           // 0x01A8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FColor                                      DebugColor;                                               // 0x01B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x18];                                      // 0x01B8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Procedural.ProceduralScatterSettings");
		
		return ptr;
	}


	void SetSourcePointDistanceMin(float InValue);
	void SetSourcePointDistanceMax(float InValue);
	float GetSourcePointDistanceMin();
	float GetSourcePointDistanceMax();
};


// Class Procedural.ProceduralScatterStaticMeshContentVariation
// 0x0080 (0x0118 - 0x0098)
class UProceduralScatterStaticMeshContentVariation : public UProceduralScatterContentVariation
{
public:
	EProceduralScatterStaticMeshMode                   StaticMeshMode;                                           // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
	class UStaticMesh*                                 Mesh;                                                     // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ActorClass;                                               // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInterface*>                  OverrideMaterials;                                        // 0x00B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UHISMBuilderSettings*                        OverrideInstancingSettings;                               // 0x00C0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x00C8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Procedural.ProceduralScatterStaticMeshContentVariation");
		
		return ptr;
	}

};


// Class Procedural.ProceduralScatterStaticMeshContentSettings
// 0x0018 (0x0080 - 0x0068)
class UProceduralScatterStaticMeshContentSettings : public UProceduralScatterContentSettings
{
public:
	class UFoliageInstancedStaticMeshComponent*        ComponentClass;                                           // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       ComponentTag;                                             // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UHISMBuilderSettings*                        VariationsInstancingSettings;                             // 0x0078(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Procedural.ProceduralScatterStaticMeshContentSettings");
		
		return ptr;
	}

};


// Class Procedural.ProceduralSurfaceHeightMap
// 0x0010 (0x00C8 - 0x00B8)
class UProceduralSurfaceHeightMap : public UProceduralFloatDataMap
{
public:
	bool                                               bNormalizedHeight;                                        // 0x00B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B9(0x0003) MISSED OFFSET
	struct FFloatInterval                              HeightRange;                                              // 0x00BC(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Procedural.ProceduralSurfaceHeightMap");
		
		return ptr;
	}


	void SetHeightRangeMin(float InValue);
	void SetHeightRangeMax(float InValue);
	float GetValue(float InHeight);
	float GetHeightRangeMin();
	float GetHeightRangeMax();
};


// Class Procedural.ProceduralSurfaceSlopeAngleMap
// 0x0010 (0x00C8 - 0x00B8)
class UProceduralSurfaceSlopeAngleMap : public UProceduralFloatDataMap
{
public:
	bool                                               bNormalizedSlopeAngle;                                    // 0x00B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B9(0x0003) MISSED OFFSET
	struct FFloatInterval                              SlopeAngleRange;                                          // 0x00BC(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Procedural.ProceduralSurfaceSlopeAngleMap");
		
		return ptr;
	}


	void SetSlopeAngleRangeMin(float InValue);
	void SetSlopeAngleRangeMax(float InValue);
	float GetValue(float InSlopeAngle);
	float GetSlopeAngleRangeMin();
	float GetSlopeAngleRangeMax();
};


// Class Procedural.ProceduralTextureFloatMap
// 0x0040 (0x00F8 - 0x00B8)
class UProceduralTextureFloatMap : public UProceduralFloatDataMap
{
public:
	EProceduralTextureColorChannel                     Channel;                                                  // 0x00B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B9(0x0007) MISSED OFFSET
	struct FProceduralTextureSource                    Source;                                                   // 0x00C0(0x0038) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Procedural.ProceduralTextureFloatMap");
		
		return ptr;
	}

};


// Class Procedural.ProceduralTextureVectorMap
// 0x0038 (0x0270 - 0x0238)
class UProceduralTextureVectorMap : public UProceduralVectorDataMap
{
public:
	struct FProceduralTextureSource                    Source;                                                   // 0x0238(0x0038) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Procedural.ProceduralTextureVectorMap");
		
		return ptr;
	}

};


// Class Procedural.ProceduralVertexColorMap
// 0x0008 (0x00C0 - 0x00B8)
class UProceduralVertexColorMap : public UProceduralFloatDataMap
{
public:
	EProceduralTextureColorChannel                     Channel;                                                  // 0x00B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Procedural.ProceduralVertexColorMap");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
