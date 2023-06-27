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

// Enum Landmass.EBrushFalloffMode
enum class EBrushFalloffMode : uint8_t
{
	Angle                          = 0,
	Width                          = 1,
	EBrushFalloffMode_MAX          = 2
};


// Enum Landmass.EBrushBlendType
enum class EBrushBlendType : uint8_t
{
	AlphaBlend                     = 0,
	Min                            = 1,
	Max                            = 2,
	Additive                       = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Landmass.BrushEffectBlurring
// 0x0008
struct FBrushEffectBlurring
{
	bool                                               bBlurShape;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Radius;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Landmass.BrushEffectCurlNoise
// 0x0010
struct FBrushEffectCurlNoise
{
	float                                              Curl1Amount;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Curl2Amount;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Curl1Tiling;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Curl2Tiling;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Landmass.BrushEffectDisplacement
// 0x0028
struct FBrushEffectDisplacement
{
	float                                              DisplacementHeight;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DisplacementTiling;                                       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Texture;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Midpoint;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Channel;                                                  // 0x0014(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WeightmapInfluence;                                       // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Landmass.BrushEffectSmoothBlending
// 0x0008
struct FBrushEffectSmoothBlending
{
	float                                              InnerSmoothDistance;                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OuterSmoothDistance;                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Landmass.BrushEffectTerracing
// 0x0014
struct FBrushEffectTerracing
{
	float                                              TerraceAlpha;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TerraceSpacing;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TerraceSmoothness;                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaskLength;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaskStartOffset;                                          // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Landmass.LandmassBrushEffectsList
// 0x0060
struct FLandmassBrushEffectsList
{
	struct FBrushEffectBlurring                        Blurring;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible)
	struct FBrushEffectCurlNoise                       CurlNoise;                                                // 0x0008(0x0010) (Edit, BlueprintVisible)
	struct FBrushEffectDisplacement                    Displacement;                                             // 0x0018(0x0028) (Edit, BlueprintVisible)
	struct FBrushEffectSmoothBlending                  SmoothBlending;                                           // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBrushEffectTerracing                       Terracing;                                                // 0x0048(0x0014) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct Landmass.BrushEffectCurves
// 0x0020
struct FBrushEffectCurves
{
	bool                                               bUseCurveChannel;                                         // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UCurveFloat*                                 ElevationCurveAsset;                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChannelEdgeOffset;                                        // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChannelDepth;                                             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurveRampWidth;                                           // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Landmass.LandmassFalloffSettings
// 0x0014
struct FLandmassFalloffSettings
{
	EBrushFalloffMode                                  FalloffMode;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              FalloffAngle;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FalloffWidth;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EdgeOffset;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ZOffset;                                                  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Landmass.LandmassTerrainCarvingSettings
// 0x0080
struct FLandmassTerrainCarvingSettings
{
	EBrushBlendType                                    BlendMode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInvertShape;                                             // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	struct FLandmassFalloffSettings                    FalloffSettings;                                          // 0x0004(0x0014) (Edit, BlueprintVisible)
	struct FLandmassBrushEffectsList                   Effects;                                                  // 0x0018(0x0060) (Edit, BlueprintVisible)
	int                                                Priority;                                                 // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
