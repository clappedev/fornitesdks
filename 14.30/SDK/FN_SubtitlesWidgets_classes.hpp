#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SubtitlesWidgets.FortMediaSubtitlesPlayer
// 0x0020 (0x0048 - 0x0028)
class UFortMediaSubtitlesPlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UOverlays*                                   SourceSubtitles;                                          // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class SubtitlesWidgets.FortMediaSubtitlesPlayer");
		
		return ptr;
	}


	void Stop();
	void SetSubtitles(class UOverlays* Subtitles);
	void Play();
	void BindToMediaPlayer(class UMediaPlayer* InMediaPlayer);
};


// Class SubtitlesWidgets.SubtitleDisplay
// 0x0330 (0x0438 - 0x0108)
class USubtitleDisplay : public UWidget
{
public:
	struct FSubtitleFormat                             Format;                                                   // 0x0108(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x010C(0x0004) MISSED OFFSET
	class USubtitleDisplayOptions*                     Options;                                                  // 0x0110(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WrapTextAt;                                               // 0x0118(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPreviewMode;                                             // 0x011C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x011D(0x0003) MISSED OFFSET
	struct FText                                       PreviewText;                                              // 0x0120(0x0018) (Edit)
	struct FTextBlockStyle                             GeneratedStyle;                                           // 0x0138(0x0268) (Transient)
	struct FSlateBrush                                 GeneratedBackgroundBorder;                                // 0x03A0(0x0088) (Transient)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0428(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class SubtitlesWidgets.SubtitleDisplay");
		
		return ptr;
	}


	bool HasSubtitles();
};


// Class SubtitlesWidgets.SubtitleDisplayOptions
// 0x0130 (0x0160 - 0x0030)
class USubtitleDisplayOptions : public UDataAsset
{
public:
	struct FSlateFontInfo                              Font;                                                     // 0x0030(0x0050) (Edit, DisableEditOnInstance)
	int                                                DisplayTextSizes[0x5];                                    // 0x0080(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                DisplayTextColors[0x2];                                   // 0x0094(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DisplayBorderSize[0x3];                                   // 0x00B4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DisplayBackgroundOpacity[0x5];                            // 0x00C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
	struct FSlateBrush                                 BackgroundBrush;                                          // 0x00D8(0x0088) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class SubtitlesWidgets.SubtitleDisplayOptions");
		
		return ptr;
	}

};


// Class SubtitlesWidgets.SubtitleDisplaySubsystem
// 0x0020 (0x0050 - 0x0030)
class USubtitleDisplaySubsystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET
	struct FSubtitleFormat                             SubtitleFormat;                                           // 0x0048(0x0004)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class SubtitlesWidgets.SubtitleDisplaySubsystem");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
