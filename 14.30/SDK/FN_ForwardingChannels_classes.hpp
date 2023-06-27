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

// Class ForwardingChannels.ForwardingChannelFactory
// 0x0000 (0x0028 - 0x0028)
class UForwardingChannelFactory : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ForwardingChannels.ForwardingChannelFactory");
		
		return ptr;
	}

};


// Class ForwardingChannels.ForwardingChannelsSubsystem
// 0x0068 (0x0098 - 0x0030)
class UForwardingChannelsSubsystem : public UGameInstanceSubsystem
{
public:
	TArray<TScriptInterface<class UForwardingChannelFactory>> ForwardingChannelFactories;                               // 0x0030(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0040(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ForwardingChannels.ForwardingChannelsSubsystem");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
