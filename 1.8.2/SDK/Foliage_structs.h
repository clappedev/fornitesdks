#pragma once

// Name: Fortnite, Version: 1.8.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum Foliage.EFoliageScaling
enum class EFoliageScaling : uint8_t
{

};


// Enum Foliage.EVertexColorMaskChannel
enum class EVertexColorMaskChannel : uint8_t
{

};


// Enum Foliage.FoliageVertexColorMask
enum class EFoliageVertexColorMask : uint8_t
{

};


// Enum Foliage.ESimulationQuery
enum class ESimulationQuery : uint8_t
{

};


// Enum Foliage.ESimulationOverlap
enum class ESimulationOverlap : uint8_t
{

};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Foliage.FoliageVertexColorChannelMask
// 0x000C
struct FFoliageVertexColorChannelMask
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct Foliage.FoliageTypeObject
// 0x0020
struct FFoliageTypeObject
{
	class UObject*                                     FoliageTypeObject;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct Foliage.ProceduralFoliageInstance
// 0x0060
struct FProceduralFoliageInstance
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FQuat                                       Rotation;                                                 // 0x0010(0x0010) (IsPlainOldData)
	struct FVector                                     Normal;                                                   // 0x0020(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x34];                                      // 0x002C(0x0034) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
