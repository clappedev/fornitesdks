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

// Enum MediaAssets.EMediaPlayerTrack
enum class EMediaPlayerTrack : uint8_t
{

};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MediaAssets.MediaPlayerOverlay
// 0x0028
struct FMediaPlayerOverlay
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
