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

// Enum Slate.ETextFlowDirection
enum class ETextFlowDirection : uint8_t
{

};


// Enum Slate.ETextWrappingPolicy
enum class ETextWrappingPolicy : uint8_t
{

};


// Enum Slate.ETextJustify
enum class ETextJustify : uint8_t
{

};


// Enum Slate.ETableViewMode
enum class ETableViewMode : uint8_t
{

};


// Enum Slate.ESelectionMode
enum class ESelectionMode : uint8_t
{

};


// Enum Slate.EStretch
enum class EStretch : uint8_t
{

};


// Enum Slate.EStretchDirection
enum class EStretchDirection : uint8_t
{

};


// Enum Slate.EDescendantScrollDestination
enum class EDescendantScrollDestination : uint8_t
{

};


// Enum Slate.EProgressBarFillType
enum class EProgressBarFillType : uint8_t
{

};


// Enum Slate.EListItemAlignment
enum class EListItemAlignment : uint8_t
{

};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Slate.InputChord
// 0x0020
struct FInputChord
{
	struct FKey                                        Key;                                                      // 0x0000(0x0018) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct Slate.Anchors
// 0x0010
struct FAnchors
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
