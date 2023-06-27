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

// Class LiveStreamAnimation.LiveStreamAnimationChannel
// 0x0010 (0x0080 - 0x0070)
class ULiveStreamAnimationChannel : public UChannel
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0070(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LiveStreamAnimation.LiveStreamAnimationChannel");
		
		return ptr;
	}

};


// Class LiveStreamAnimation.LiveStreamAnimationDataHandler
// 0x0010 (0x0038 - 0x0028)
class ULiveStreamAnimationDataHandler : public UObject
{
public:
	class ULiveStreamAnimationSubsystem*               OwningSubsystem;                                          // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LiveStreamAnimation.LiveStreamAnimationDataHandler");
		
		return ptr;
	}

};


// Class LiveStreamAnimation.LiveStreamAnimationSettings
// 0x0038 (0x0070 - 0x0038)
class ULiveStreamAnimationSettings : public UDeveloperSettings
{
public:
	TArray<struct FName>                               HandleNames;                                              // 0x0038(0x0010) (Edit, ZeroConstructor, Transient, Config)
	TArray<struct FSoftClassPath>                      ConfiguredDataHandlers;                                   // 0x0048(0x0010) (Edit, ZeroConstructor, Transient, Config)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0058(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LiveStreamAnimation.LiveStreamAnimationSettings");
		
		return ptr;
	}

};


// Class LiveStreamAnimation.LiveStreamAnimationSubsystem
// 0x0048 (0x0078 - 0x0030)
class ULiveStreamAnimationSubsystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET
	bool                                               bEnabled;                                                 // 0x0050(0x0001) (ZeroConstructor, Transient, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x17];                                      // 0x0051(0x0017) MISSED OFFSET
	TArray<class ULiveStreamAnimationDataHandler*>     ConfiguredDataHandlers;                                   // 0x0068(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LiveStreamAnimation.LiveStreamAnimationSubsystem");
		
		return ptr;
	}


	void SetRole(ELiveStreamAnimationRole NewRole);
	void SetAcceptClientPackets_Private(bool bInShouldAcceptClientPackets);
	ELiveStreamAnimationRole GetRole();
	class ULiveStreamAnimationDataHandler* GetDataHandler(class ULiveStreamAnimationDataHandler* Type);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
