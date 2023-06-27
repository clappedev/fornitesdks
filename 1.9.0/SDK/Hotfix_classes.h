#pragma once

// Name: Fortnite, Version: 1.9.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class Hotfix.UpdateManager
// 0x0248 (0x0270 - 0x0028)
class UUpdateManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x248];                                     // 0x0028(0x0248) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hotfix.UpdateManager");
		return ptr;
	}

};


// Class Hotfix.OnlineHotfixManager
// 0x03A8 (0x03D0 - 0x0028)
class UOnlineHotfixManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x3A8];                                     // 0x0028(0x03A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hotfix.OnlineHotfixManager");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
