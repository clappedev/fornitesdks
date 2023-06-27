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

// Class MediaAssets.MediaOverlays
// 0x0088 (0x00B0 - 0x0028)
class UMediaOverlays : public UObject
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0028(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaOverlays");
		return ptr;
	}


	void GetTexts();
	void GetSubtitles();
	void GetCaptions();
};


// Class MediaAssets.MediaPlayer
// 0x0138 (0x0160 - 0x0028)
class UMediaPlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x138];                                     // 0x0028(0x0138) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaPlayer");
		return ptr;
	}

};


// Class MediaAssets.MediaPlaylist
// 0x0010 (0x0038 - 0x0028)
class UMediaPlaylist : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaPlaylist");
		return ptr;
	}

};


// Class MediaAssets.MediaSoundWave
// 0x00E0 (0x0350 - 0x0270)
class UMediaSoundWave : public USoundWave
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0270(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaSoundWave");
		return ptr;
	}

};


// Class MediaAssets.MediaSource
// 0x0008 (0x0030 - 0x0028)
class UMediaSource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaSource");
		return ptr;
	}

};


// Class MediaAssets.BaseMediaSource
// 0x0008 (0x0038 - 0x0030)
class UBaseMediaSource : public UMediaSource
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.BaseMediaSource");
		return ptr;
	}

};


// Class MediaAssets.FileMediaSource
// 0x0018 (0x0050 - 0x0038)
class UFileMediaSource : public UBaseMediaSource
{
public:
	struct FString                                     FilePath;                                                 // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               PrecacheFile;                                             // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.FileMediaSource");
		return ptr;
	}


	void SetFilePath();
};


// Class MediaAssets.StreamMediaSource
// 0x0010 (0x0048 - 0x0038)
class UStreamMediaSource : public UBaseMediaSource
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.StreamMediaSource");
		return ptr;
	}

};


// Class MediaAssets.PlatformMediaSource
// 0x0008 (0x0038 - 0x0030)
class UPlatformMediaSource : public UMediaSource
{
public:
	class UMediaSource*                                MediaSource;                                              // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.PlatformMediaSource");
		return ptr;
	}

};


// Class MediaAssets.MediaTexture
// 0x00E8 (0x01B0 - 0x00C8)
class UMediaTexture : public UTexture
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x00C8(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaTexture");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
