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

// Class LocalNotifications.LocalNotificationsSettings
// 0x0018 (0x0050 - 0x0038)
class ULocalNotificationsSettings : public UDeveloperSettings
{
public:
	struct FSoftObjectPath                             StringTableLocalNotifications;                            // 0x0038(0x0018) (Edit, ZeroConstructor, Config, GlobalConfig)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LocalNotifications.LocalNotificationsSettings");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
