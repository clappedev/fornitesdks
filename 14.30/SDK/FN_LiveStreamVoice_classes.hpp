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

// Class LiveStreamVoice.LiveStreamVoiceChannel
// 0x0010 (0x0080 - 0x0070)
class ULiveStreamVoiceChannel : public UChannel
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0070(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LiveStreamVoice.LiveStreamVoiceChannel");
		
		return ptr;
	}

};


// Class LiveStreamVoice.LiveStreamVoiceSubsystem
// 0x0030 (0x0060 - 0x0030)
class ULiveStreamVoiceSubsystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	struct FVoiceSettings                              PlaybackSettings;                                         // 0x0038(0x0018)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0050(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LiveStreamVoice.LiveStreamVoiceSubsystem");
		
		return ptr;
	}


	void SetVoiceSettings(const struct FVoiceSettings& InSettings);
	void EnableLocalVoiceProcessing(unsigned char LocalUserNum, bool bEnable);
	void ClearVoiceSettings();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
