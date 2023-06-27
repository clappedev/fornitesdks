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

// Enum MaterialShaderQualitySettings.EMobileCSMQuality
enum class EMobileCSMQuality : uint8_t
{

};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MaterialShaderQualitySettings.MaterialQualityOverrides
// 0x0006
struct FMaterialQualityOverrides
{
	unsigned char                                      UnknownData00[0x6];                                       // 0x0000(0x0006) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
