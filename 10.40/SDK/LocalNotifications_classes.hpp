#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x18 (0x50 - 0x38)
// Class LocalNotifications.LocalNotificationsSettings
class ULocalNotificationsSettings : public UDeveloperSettings
{
public:
	struct FSoftObjectPath                       StringTableLocalNotifications;                     // 0x38(0x18)(Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LocalNotificationsSettings");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
