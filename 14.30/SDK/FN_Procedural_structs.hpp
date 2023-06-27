#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Procedural.EProceduralParameterModifierBlendMode
enum class EProceduralParameterModifierBlendMode : uint8_t
{
	Min                            = 0,
	Max                            = 1,
	Additive                       = 2,
	Subtractive                    = 3,
	Multiply                       = 4,
	Interpolate                    = 5
};


// Enum Procedural.EProceduralRotationFormat
enum class EProceduralRotationFormat : uint8_t
{
	VectorXAxis                    = 0,
	VectorXAxisNegative            = 1,
	VectorYAxis                    = 2,
	VectorYAxisNegative            = 3,
	VectorZAxis                    = 4,
	VectorZAxisNegative            = 5,
	Vector2DXAxis                  = 6,
	Vector2DXAxisNegative          = 7,
	Vector2DYAxis                  = 8,
	Vector2DYAxisNegative          = 9,
	Vector2DZAxis                  = 10,
	Vector2DZAxisNegative          = 11,
	RangedRotator                  = 12,
	EProceduralRotationFormat_MAX  = 13
};


// Enum Procedural.EProceduralScatterContentPivotMode
enum class EProceduralScatterContentPivotMode : uint8_t
{
	UsePivot                       = 0,
	UseBoundingBoxCenter           = 1,
	UseBoundingBoxBottomCenter     = 2,
	UseFootprintBoundingBoxBottomCenter = 3,
	EProceduralScatterContentPivotMode_MAX = 4
};


// Enum Procedural.EProceduralScatterMethod
enum class EProceduralScatterMethod : uint8_t
{
	Density                        = 0,
	SourcePoints                   = 1,
	Grid                           = 2,
	EProceduralScatterMethod_MAX   = 3
};


// Enum Procedural.EProceduralScatterTileRandomGenerator
enum class EProceduralScatterTileRandomGenerator : uint8_t
{
	PseudoRandom                   = 0,
	HaltonSequence                 = 1,
	EProceduralScatterTileRandomGenerator_MAX = 2
};


// Enum Procedural.EProceduralScatterStaticMeshMode
enum class EProceduralScatterStaticMeshMode : uint8_t
{
	FromStaticMesh                 = 0,
	FromActor                      = 1,
	EProceduralScatterStaticMeshMode_MAX = 2
};


// Enum Procedural.EProceduralTextureColorChannel
enum class EProceduralTextureColorChannel : uint8_t
{
	Red                            = 0,
	Green                          = 1,
	Blue                           = 2,
	Alpha                          = 3,
	EProceduralTextureColorChannel_MAX = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Procedural.ProceduralContentVariationMap
// 0x0018
struct FProceduralContentVariationMap
{
	int                                                VariationIndex;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UProceduralFloatDataMap*                     Map;                                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Weight;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Procedural.ProceduralDebugSettings
// 0x000C
struct FProceduralDebugSettings
{
	bool                                               bShowDebugPointCloud;                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FColor                                      DebugPointColor;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DebugCullingDistance;                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Procedural.ProceduralRemapFloatCurve
// 0x0088
struct FProceduralRemapFloatCurve
{
	struct FRuntimeFloatCurve                          RemapCurve;                                               // 0x0000(0x0088) (Edit, BlueprintVisible)
};

// ScriptStruct Procedural.ProceduralRemapVectorCurve
// 0x0208
struct FProceduralRemapVectorCurve
{
	struct FRuntimeCurveLinearColor                    RemapCurve;                                               // 0x0000(0x0208) (Edit)
};

// ScriptStruct Procedural.ProceduralGenerationStackElement
// 0x0010
struct FProceduralGenerationStackElement
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UProceduralGenerator*                        Generator;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Procedural.ProceduralPointCloudPoint
// 0x0070
struct FProceduralPointCloudPoint
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     SurfaceNormal;                                            // 0x0030(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	class UObject*                                     SurfaceObject;                                            // 0x0040(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Object;                                                   // 0x0048(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ObjectVariation;                                          // 0x0050(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	TArray<struct FName>                               Tags;                                                     // 0x0058(0x0010) (BlueprintVisible, ZeroConstructor)
	float                                              CollisionRadius;                                          // 0x0068(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SourcePointGeneratorIndex;                                // 0x006C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Procedural.ProceduralScatterTileSettings
// 0x0014
struct FProceduralScatterTileSettings
{
	int                                                NumUniqueTiles;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TileSize;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TileOverlapPercentage;                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinimumQuadTreeSize;                                      // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EProceduralScatterTileRandomGenerator              RandomGenerator;                                          // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct Procedural.ProceduralScatterSettingsElement
// 0x0018
struct FProceduralScatterSettingsElement
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UProceduralScatterSettings*                  ScatterSettings;                                          // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxPoints;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Procedural.ProceduralScatterDebugSettings
// 0x000C
struct FProceduralScatterDebugSettings
{
	bool                                               bShowDebugPlane;                                          // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShowDebugTrace;                                          // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShowDebugFootprint;                                      // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShowDebugHitNormal;                                      // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShowDebugPoints;                                         // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShowDebugPivots;                                         // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	float                                              DebugMaxCullingDistance;                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Procedural.ProceduralHitPoint
// 0x0024
struct FProceduralHitPoint
{
	bool                                               bIsTraceDone;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     position;                                                 // 0x0004(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // 0x0010(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UPrimitiveComponent>          Component;                                                // 0x001C(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Procedural.ProceduralScatterPoint
// 0x0060
struct FProceduralScatterPoint
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UProceduralScatterSettings*                  ScatterSettings;                                          // 0x0020(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                VariationIdx;                                             // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     GenerationLocation;                                       // 0x002C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FProceduralHitPoint                         HitPoint;                                                 // 0x0038(0x0024) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct Procedural.ScatteredPointCloud
// 0x0010
struct FScatteredPointCloud
{
	TArray<struct FProceduralScatterPoint>             Points;                                                   // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Procedural.SourcePointGenerator
// 0x0018
struct FSourcePointGenerator
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Procedural.ProceduralScatterProjectionPoint
// 0x0070
struct FProceduralScatterProjectionPoint
{
	struct FVector                                     GenerationLocation;                                       // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UProceduralScatterSettings*                  ScatterSettings;                                          // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                VariationIdx;                                             // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartTrace;                                               // 0x002C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     EndTrace;                                                 // 0x0038(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FProceduralHitPoint                         HitPoint;                                                 // 0x0044(0x0024)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
};

// ScriptStruct Procedural.ProceduralScatter2DPoint
// 0x0040
struct FProceduralScatter2DPoint
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UProceduralScatterSettings*                  ScatterSettings;                                          // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBox2D                                      MaxAABB;                                                  // 0x0018(0x0014) (ZeroConstructor)
	float                                              CollisionRadius;                                          // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bBlocker;                                                 // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	int                                                RandomNumber;                                             // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct Procedural.ProceduralContentVariationsModifiers
// 0x0010
struct FProceduralContentVariationsModifiers
{
	TArray<class UProceduralContentVariationsWeightsModifier*> Modifiers;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
};

// ScriptStruct Procedural.ProceduralDensityModifiers
// 0x0010
struct FProceduralDensityModifiers
{
	TArray<class UProceduralDensityModifier*>          Modifiers;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
};

// ScriptStruct Procedural.ProceduralScaleModifiers
// 0x0020
struct FProceduralScaleModifiers
{
	bool                                               bRandomScaleEnabled;                                      // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FFloatInterval                              RandomScale;                                              // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<class UProceduralScaleModifier*>            Modifiers;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
};

// ScriptStruct Procedural.ProceduralRotationModifiers
// 0x0010
struct FProceduralRotationModifiers
{
	TArray<class UProceduralRotationModifier*>         Modifiers;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
};

// ScriptStruct Procedural.ProceduralScatterTargetSurface
// 0x0048
struct FProceduralScatterTargetSurface
{
	bool                                               bAllowLandscape;                                          // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowBSP;                                                // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowStaticMesh;                                         // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowTranslucent;                                        // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FName>                               AllowedActorTags;                                         // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               DisallowedActorTags;                                      // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               AllowedComponentTags;                                     // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               DisallowedComponentTags;                                  // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Procedural.ProceduralTextureSource
// 0x0038
struct FProceduralTextureSource
{
	bool                                               bUseRenderTarget;                                         // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UTexture2D*                                  Texture;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      RenderTarget;                                             // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          RenderTargetMaterial;                                     // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStretchToFit;                                            // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              TexelSize;                                                // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              XOffset;                                                  // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              YOffset;                                                  // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Rotation;                                                 // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
