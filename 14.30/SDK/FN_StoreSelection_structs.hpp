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

// Enum StoreSelection.EOptionalLabel
enum class EOptionalLabel : uint8_t
{
	Label_DS                       = 0,
	Label_NM                       = 1,
	Max                            = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct StoreSelection.ItemData
// 0x0048
struct FItemData
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty StoreSelection.ItemData.Icon
	struct FText                                       Name;                                                     // 0x0028(0x0018) (Edit)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
