#pragma once

// Name: Fortnite, Version: 1.8.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class SubtitlesWidgets.SubtitleDisplay
// 0x02B0 (0x03C8 - 0x0118)
class USubtitleDisplay : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x2B0];                                     // 0x0118(0x02B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SubtitlesWidgets.SubtitleDisplay");
		return ptr;
	}

};


// Class SubtitlesWidgets.FortMediaSubtitlesPlayer
// 0x0030 (0x0058 - 0x0028)
class UFortMediaSubtitlesPlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SubtitlesWidgets.FortMediaSubtitlesPlayer");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
