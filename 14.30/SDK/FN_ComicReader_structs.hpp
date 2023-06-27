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

// Enum ComicReader.EFortComicClickableZone
enum class EFortComicClickableZone : uint8_t
{
	None                           = 0,
	Previous                       = 1,
	Next                           = 2,
	EFortComicClickableZone_MAX    = 3
};


// Enum ComicReader.EFortComicPanelUnit
enum class EFortComicPanelUnit : uint8_t
{
	Pixel                          = 0,
	Percent                        = 1,
	EFortComicPanelUnit_MAX        = 2
};


// Enum ComicReader.EFortComicPanelTransitionType
enum class EFortComicPanelTransitionType : uint8_t
{
	Pan                            = 0,
	CrossFade                      = 1,
	EFortComicPanelTransitionType_MAX = 2
};


// Enum ComicReader.EFortComicPanelMaskType
enum class EFortComicPanelMaskType : uint8_t
{
	Rectangle                      = 0,
	Quad                           = 1,
	EFortComicPanelMaskType_MAX    = 2
};


// Enum ComicReader.EFortComicViewMode
enum class EFortComicViewMode : uint8_t
{
	Page                           = 0,
	Panel                          = 1,
	EFortComicViewMode_MAX         = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ComicReader.FortComicPanelReference
// 0x0008
struct FFortComicPanelReference
{
	int                                                PageIndex;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PanelIndex;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ComicReader.FortComicPanelTransition
// 0x0008
struct FFortComicPanelTransition
{
	EFortComicPanelTransitionType                      Type;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Duration;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ComicReader.FortComicPanel
// 0x0048
struct FFortComicPanel
{
	struct FVector2D                                   position;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Size;                                                     // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFortComicPanelTransition                   ForwardTransition;                                        // 0x0010(0x0008) (Edit)
	EFortComicPanelMaskType                            Mask;                                                     // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	struct FVector2D                                   MaskPoints[0x4];                                          // 0x001C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x003C(0x000C) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
