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

// Enum EpicCMSUIFramework.EDateType
enum class EDateType : uint8_t
{

};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EpicCMSUIFramework.TileDefinition
// 0x0088
struct FTileDefinition
{
	unsigned char                                      UnknownData00[0x88];                                      // 0x0000(0x0088) MISSED OFFSET
};

// ScriptStruct EpicCMSUIFramework.SlotDescription
// 0x0018
struct FSlotDescription
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct EpicCMSUIFramework.EpicCMSTileTypeMapping
// 0x0020 (0x0028 - 0x0008)
struct FEpicCMSTileTypeMapping : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct EpicCMSUIFramework.EpicCMSLayoutTypeMapping
// 0x0020 (0x0028 - 0x0008)
struct FEpicCMSLayoutTypeMapping : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
