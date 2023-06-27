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

// Enum Water.EWaterBodyType
enum class EWaterBodyType : uint8_t
{
	River                          = 0,
	Lake                           = 1,
	Ocean                          = 2,
	Transition                     = 3,
	EWaterBodyType_MAX             = 4
};


// Enum Water.EWaterBrushBlendType
enum class EWaterBrushBlendType : uint8_t
{
	AlphaBlend                     = 0,
	Min                            = 1,
	Max                            = 2,
	Additive                       = 3
};


// Enum Water.EWaterBrushFalloffMode
enum class EWaterBrushFalloffMode : uint8_t
{
	Angle                          = 0,
	Width                          = 1,
	EWaterBrushFalloffMode_MAX     = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Water.SphericalPontoon
// 0x0140
struct FSphericalPontoon
{
	struct FName                                       CenterSocket;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RelativeLocation;                                         // 0x0008(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocalForce;                                               // 0x0018(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CenterLocation;                                           // 0x0024(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FQuat                                       SocketRotation;                                           // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     Offset;                                                   // 0x0040(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	float                                              WaterHeight;                                              // 0x0050(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WaterDepth;                                               // 0x0054(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ImmersionDepth;                                           // 0x0058(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WaterPlaneLocation;                                       // 0x005C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WaterPlaneNormal;                                         // 0x0068(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WaterSurfacePosition;                                     // 0x0074(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WaterVelocity;                                            // 0x0080(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                WaterBodyIndex;                                           // 0x008C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xA8];                                      // 0x0090(0x00A8) MISSED OFFSET
	class AWaterBody*                                  CurrentWaterBody;                                         // 0x0138(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Water.BuoyancyData
// 0x0050
struct FBuoyancyData
{
	TArray<struct FSphericalPontoon>                   Pontoons;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	float                                              BuoyancyCoefficient;                                      // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BuoyancyDamp;                                             // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BuoyancyDamp2;                                            // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BuoyancyRampMinVelocity;                                  // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BuoyancyRampMaxVelocity;                                  // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BuoyancyRampMax;                                          // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxBuoyantForce;                                          // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WaterShorePushFactor;                                     // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WaterVelocityStrength;                                    // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxWaterForce;                                            // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DragCoefficient;                                          // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DragCoefficient2;                                         // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AngularDragCoefficient;                                   // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDragSpeed;                                             // 0x0044(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bApplyDragForcesInWater;                                  // 0x0048(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct Water.WaterWaveParams
// 0x002C
struct FWaterWaveParams
{
	float                                              Wavelength;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Amplitude;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Steepness;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0018(0x0014) MISSED OFFSET
};

// ScriptStruct Water.UnderwaterPostProcessSettings
// 0x0570
struct FUnderwaterPostProcessSettings
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Priority;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlendRadius;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlendWeight;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FPostProcessSettings                        PostProcessSettings;                                      // 0x0010(0x0550) (Edit, BlueprintVisible)
	class UMaterialInterface*                          UnderwaterPostProcessMaterial;                            // 0x0560(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0568(0x0008) MISSED OFFSET
};

// ScriptStruct Water.WaterCurveSettings
// 0x0020
struct FWaterCurveSettings
{
	bool                                               bUseCurveChannel;                                         // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UCurveFloat*                                 ElevationCurveAsset;                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChannelEdgeOffset;                                        // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChannelDepth;                                             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurveRampWidth;                                           // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Water.WaterSplineCurveDefaults
// 0x0014
struct FWaterSplineCurveDefaults
{
	float                                              DefaultDepth;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultWidth;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultShorelineWidth;                                    // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultVelocity;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultAudioIntensity;                                    // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Water.WaterFalloffSettings
// 0x0014
struct FWaterFalloffSettings
{
	EWaterBrushFalloffMode                             FalloffMode;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              FalloffAngle;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FalloffWidth;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EdgeOffset;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ZOffset;                                                  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Water.WaterBrushEffectBlurring
// 0x0008
struct FWaterBrushEffectBlurring
{
	bool                                               bBlurShape;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Radius;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Water.WaterBrushEffectCurlNoise
// 0x0010
struct FWaterBrushEffectCurlNoise
{
	float                                              Curl1Amount;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Curl2Amount;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Curl1Tiling;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Curl2Tiling;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Water.WaterBrushEffectDisplacement
// 0x0028
struct FWaterBrushEffectDisplacement
{
	float                                              DisplacementHeight;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DisplacementTiling;                                       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Texture;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Midpoint;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Channel;                                                  // 0x0014(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WeightmapInfluence;                                       // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Water.WaterBrushEffectSmoothBlending
// 0x0008
struct FWaterBrushEffectSmoothBlending
{
	float                                              InnerSmoothDistance;                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OuterSmoothDistance;                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Water.WaterBrushEffectTerracing
// 0x0014
struct FWaterBrushEffectTerracing
{
	float                                              TerraceAlpha;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TerraceSpacing;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TerraceSmoothness;                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaskLength;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaskStartOffset;                                          // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Water.WaterBrushEffects
// 0x0060
struct FWaterBrushEffects
{
	struct FWaterBrushEffectBlurring                   Blurring;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible)
	struct FWaterBrushEffectCurlNoise                  CurlNoise;                                                // 0x0008(0x0010) (Edit, BlueprintVisible)
	struct FWaterBrushEffectDisplacement               Displacement;                                             // 0x0018(0x0028) (Edit, BlueprintVisible)
	struct FWaterBrushEffectSmoothBlending             SmoothBlending;                                           // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FWaterBrushEffectTerracing                  Terracing;                                                // 0x0048(0x0014) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct Water.WaterBodyHeightmapSettings
// 0x0080
struct FWaterBodyHeightmapSettings
{
	EWaterBrushBlendType                               BlendMode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInvertShape;                                             // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	struct FWaterFalloffSettings                       FalloffSettings;                                          // 0x0004(0x0014) (Edit, BlueprintVisible)
	struct FWaterBrushEffects                          Effects;                                                  // 0x0018(0x0060) (Edit, BlueprintVisible)
	int                                                Priority;                                                 // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
};

// ScriptStruct Water.WaterBodyWeightmapSettings
// 0x0020
struct FWaterBodyWeightmapSettings
{
	float                                              FalloffWidth;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EdgeOffset;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ModulationTexture;                                        // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TextureTiling;                                            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TextureInfluence;                                         // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Midpoint;                                                 // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FinalOpacity;                                             // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Water.WaterBrushEffectCurves
// 0x0020
struct FWaterBrushEffectCurves
{
	bool                                               bUseCurveChannel;                                         // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UCurveFloat*                                 ElevationCurveAsset;                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChannelEdgeOffset;                                        // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChannelDepth;                                             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurveRampWidth;                                           // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Water.WaterStreamingCell
// 0x0068
struct FWaterStreamingCell
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty Water.WaterStreamingCell.StreamingActors
	unsigned char                                      UnknownData01[0x28];                                      // 0x0010(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Water.WaterStreamingCell.WaterProxyActor
	struct FBox                                        CellBox;                                                  // 0x0038(0x001C) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FGuid                                       GenerationId;                                             // 0x0054(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
};

// ScriptStruct Water.WaterStreamingGrid
// 0x0040
struct FWaterStreamingGrid
{
	TArray<struct FWaterStreamingCell>                 Cells;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
	struct FVector                                     LandscapeLocation;                                        // 0x0010(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LandscapeScale;                                           // 0x001C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   NumCells;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   InvWorldCellDimensions;                                   // 0x0030(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FIntPoint                                   CellTextureSize;                                          // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
