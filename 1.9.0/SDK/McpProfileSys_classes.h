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

// Class McpProfileSys.McpItemDefinitionBase
// 0x0000 (0x0028 - 0x0028)
class UMcpItemDefinitionBase : public UDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class McpProfileSys.McpItemDefinitionBase");
		return ptr;
	}

};


// Class McpProfileSys.McpProfile
// 0x0288 (0x02B0 - 0x0028)
class UMcpProfile : public UObject
{
public:
	EServerClientFlag                                  AllowSubscriptionToNotificationsService;                  // 0x0028(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x287];                                     // 0x0029(0x0287) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class McpProfileSys.McpProfile");
		return ptr;
	}

};


// Class McpProfileSys.McpItemAware
// 0x0000 (0x0028 - 0x0028)
class UMcpItemAware : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class McpProfileSys.McpItemAware");
		return ptr;
	}

};


// Class McpProfileSys.McpProfileGroup
// 0x0188 (0x01B0 - 0x0028)
class UMcpProfileGroup : public UObject
{
public:
	unsigned char                                      UnknownData00[0x188];                                     // 0x0028(0x0188) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class McpProfileSys.McpProfileGroup");
		return ptr;
	}

};


// Class McpProfileSys.McpProfileManager
// 0x0030 (0x0058 - 0x0028)
class UMcpProfileManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class McpProfileSys.McpProfileManager");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
