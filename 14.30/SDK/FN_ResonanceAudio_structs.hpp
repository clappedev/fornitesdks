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

// Enum ResonanceAudio.EResonanceRenderMode
enum class EResonanceRenderMode : uint8_t
{
	StereoPanning                  = 0,
	BinauralLowQuality             = 1,
	BinauralMediumQuality          = 2,
	BinauralHighQuality            = 3,
	RoomEffectsOnly                = 4,
	EResonanceRenderMode_MAX       = 5
};


// Enum ResonanceAudio.ERaMaterialName
enum class ERaMaterialName : uint8_t
{
	TRANSPARENT_                    = 0,
	ACOUSTIC_CEILING_TILES         = 1,
	BRICK_BARE                     = 2,
	BRICK_PAINTED                  = 3,
	CONCRETE_BLOCK_COARSE          = 4,
	CONCRETE_BLOCK_PAINTED         = 5,
	CURTAIN_HEAVY                  = 6,
	FIBER_GLASS_INSULATION         = 7,
	GLASS_THIN                     = 8,
	GLASS_THICK                    = 9,
	GRASS                          = 10,
	LINOLEUM_ON_CONCRETE           = 11,
	MARBLE                         = 12,
	METAL                          = 13,
	PARQUET_ONCONCRETE             = 14,
	PLASTER_ROUGH                  = 15,
	PLASTER_SMOOTH                 = 16,
	PLYWOOD_PANEL                  = 17,
	POLISHED_CONCRETE_OR_TILE      = 18,
	SHEETROCK                      = 19,
	WATER_OR_ICE_SURFACE           = 20,
	WOOD_CEILING                   = 21,
	WOOD_PANEL                     = 22,
	UNIFORM                        = 23,
	ERaMaterialName_MAX_            = 24
};


// Enum ResonanceAudio.ERaDistanceRolloffModel
enum class ERaDistanceRolloffModel : uint8_t
{
	LOGARITHMIC                    = 0,
	LINEAR                         = 1,
	NONE                           = 2,
	ERaDistanceRolloffModel_MAX    = 3
};


// Enum ResonanceAudio.ERaSpatializationMethod
enum class ERaSpatializationMethod : uint8_t
{
	STEREO_PANNING                 = 0,
	HRTF                           = 1,
	ERaSpatializationMethod_MAX    = 2
};


// Enum ResonanceAudio.ERaQualityMode
enum class ERaQualityMode : uint8_t
{
	STEREO_PANNING                 = 0,
	BINAURAL_LOW                   = 1,
	BINAURAL_MEDIUM                = 2,
	BINAURAL_HIGH                  = 3,
	ERaQualityMode_MAX             = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ResonanceAudio.ResonanceAudioReverbPluginSettings
// 0x0050
struct FResonanceAudioReverbPluginSettings
{
	bool                                               bEnableRoomEffects;                                       // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGetTransformFromAudioVolume;                             // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	struct FVector                                     RoomPosition;                                             // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FQuat                                       RoomRotation;                                             // 0x0010(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     RoomDimensions;                                           // 0x0020(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ERaMaterialName                                    LeftWallMaterial;                                         // 0x002C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ERaMaterialName                                    RightWallMaterial;                                        // 0x002D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ERaMaterialName                                    FloorMaterial;                                            // 0x002E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ERaMaterialName                                    CeilingMaterial;                                          // 0x002F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ERaMaterialName                                    FrontWallMaterial;                                        // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ERaMaterialName                                    BackWallMaterial;                                         // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
	float                                              ReflectionScalar;                                         // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReverbGain;                                               // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReverbTimeModifier;                                       // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReverbBrightness;                                         // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0044(0x000C) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
