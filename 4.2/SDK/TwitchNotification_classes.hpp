#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x0 (0xA8 - 0xA8)
// BlueprintGeneratedClass TwitchNotification.TwitchNotification_C
class UTwitchNotification_C : public UFortUIFriendNotification
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TwitchNotification_C");
		return Clss;
	}

	class UTexture2D* GetImageOverride();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
