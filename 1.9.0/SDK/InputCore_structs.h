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

// Enum InputCore.ETouchIndex
enum class ETouchIndex : uint8_t
{

};


// Enum InputCore.EConsoleForGamepadLabels
enum class EConsoleForGamepadLabels : uint8_t
{

};


// Enum InputCore.EControllerHand
enum class EControllerHand : uint8_t
{

};


// Enum InputCore.ETouchType
enum class ETouchType : uint8_t
{

};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct InputCore.Key
// 0x0018
struct FKey
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
