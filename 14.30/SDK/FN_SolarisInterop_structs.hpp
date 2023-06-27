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

// Enum SolarisInterop.EVerseVoid
enum class EVerseVoid : uint8_t
{
	Value                          = 0,
	EVerseVoid_MAX                 = 1
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SolarisInterop.VerseIntRange
// 0x0008
struct FVerseIntRange
{
	int                                                Left;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Right;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
