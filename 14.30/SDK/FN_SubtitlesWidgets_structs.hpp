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

// Enum SubtitlesWidgets.ESubtitleDisplayBackgroundOpacity
enum class ESubtitleDisplayBackgroundOpacity : uint8_t
{
	Clear                          = 0,
	Low                            = 1,
	Medium                         = 2,
	High                           = 3,
	Solid                          = 4,
	ESubtitleDisplayBackgroundOpacity_MAX = 5
};


// Enum SubtitlesWidgets.ESubtitleDisplayTextBorder
enum class ESubtitleDisplayTextBorder : uint8_t
{
	None                           = 0,
	Outline                        = 1,
	DropShadow                     = 2,
	ESubtitleDisplayTextBorder_MAX = 3
};


// Enum SubtitlesWidgets.ESubtitleDisplayTextColor
enum class ESubtitleDisplayTextColor : uint8_t
{
	White                          = 0,
	Yellow                         = 1,
	ESubtitleDisplayTextColor_MAX  = 2
};


// Enum SubtitlesWidgets.ESubtitleDisplayTextSize
enum class ESubtitleDisplayTextSize : uint8_t
{
	ExtraSmall                     = 0,
	Small                          = 1,
	Medium                         = 2,
	Large                          = 3,
	ExtraLarge                     = 4,
	ESubtitleDisplayTextSize_MAX   = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SubtitlesWidgets.SubtitleFormat
// 0x0004
struct FSubtitleFormat
{
	ESubtitleDisplayTextSize                           SubtitleTextSize;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ESubtitleDisplayTextColor                          SubtitleTextColor;                                        // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ESubtitleDisplayTextBorder                         SubtitleTextBorder;                                       // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ESubtitleDisplayBackgroundOpacity                  SubtitleBackgroundOpacity;                                // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
