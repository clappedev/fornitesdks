#pragma once

// Name: Fortnite, Version: 1.9.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum Landscape.ELandscapeGizmoType
enum class ELandscapeGizmoType : uint8_t
{

};


// Enum Landscape.EGrassScaling
enum class EGrassScaling : uint8_t
{

};


// Enum Landscape.ELandscapeLODFalloff
enum class ELandscapeLODFalloff : uint8_t
{

};


// Enum Landscape.ELandscapeLayerDisplayMode
enum class ELandscapeLayerDisplayMode : uint8_t
{

};


// Enum Landscape.ELandscapeLayerPaintingRestriction
enum class ELandscapeLayerPaintingRestriction : uint8_t
{

};


// Enum Landscape.ELandscapeImportAlphamapType
enum class ELandscapeImportAlphamapType : uint8_t
{

};


// Enum Landscape.ELandscapeSetupErrors
enum class ELandscapeSetupErrors : uint8_t
{

};


// Enum Landscape.LandscapeSplineMeshOrientation
enum class ELandscapeSplineMeshOrientation : uint8_t
{

};


// Enum Landscape.ELandscapeLayerBlendType
enum class ELandscapeLayerBlendType : uint8_t
{

};


// Enum Landscape.ELandscapeCustomizedCoordType
enum class ELandscapeCustomizedCoordType : uint8_t
{

};


// Enum Landscape.ETerrainCoordMappingType
enum class ETerrainCoordMappingType : uint8_t
{

};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Landscape.WeightmapLayerAllocationInfo
// 0x0010
struct FWeightmapLayerAllocationInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Landscape.GizmoSelectData
// 0x0050
struct FGizmoSelectData
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct Landscape.GrassVariety
// 0x0048
struct FGrassVariety
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct Landscape.LandscapeInfoLayerSettings
// 0x0010
struct FLandscapeInfoLayerSettings
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Landscape.LandscapeImportLayerInfo
// 0x0001
struct FLandscapeImportLayerInfo
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Landscape.LandscapeEditorLayerSettings
// 0x0001
struct FLandscapeEditorLayerSettings
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Landscape.LandscapeWeightmapUsage
// 0x0020
struct FLandscapeWeightmapUsage
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Landscape.LandscapeSplineMeshEntry
// 0x0038
struct FLandscapeSplineMeshEntry
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct Landscape.LandscapeLayerStruct
// 0x0008
struct FLandscapeLayerStruct
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Landscape.LandscapeSplineSegmentConnection
// 0x0018
struct FLandscapeSplineSegmentConnection
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Landscape.LandscapeSplineInterpPoint
// 0x0040
struct FLandscapeSplineInterpPoint
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct Landscape.LandscapeSplineConnection
// 0x0010
struct FLandscapeSplineConnection
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Landscape.ForeignWorldSplineData
// 0x0001
struct FForeignWorldSplineData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Landscape.ForeignSplineSegmentData
// 0x0001
struct FForeignSplineSegmentData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Landscape.ForeignControlPointData
// 0x0001
struct FForeignControlPointData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Landscape.GrassInput
// 0x0048
struct FGrassInput
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0008(0x0040) MISSED OFFSET
};

// ScriptStruct Landscape.LayerBlendInput
// 0x0098
struct FLayerBlendInput
{
	unsigned char                                      UnknownData00[0x98];                                      // 0x0000(0x0098) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
