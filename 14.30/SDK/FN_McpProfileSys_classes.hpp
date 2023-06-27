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

// Class McpProfileSys.McpItemDefinitionBase
// 0x0000 (0x0030 - 0x0030)
class UMcpItemDefinitionBase : public UPrimaryDataAsset
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class McpProfileSys.McpItemDefinitionBase");
		
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
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class McpProfileSys.McpItemAware");
		
		return ptr;
	}

};


// Class McpProfileSys.McpProfile
// 0x00E8 (0x0110 - 0x0028)
class UMcpProfile : public UObject
{
public:
	bool                                               AllowSubscriptionToNotificationsService;                  // 0x0028(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x57];                                      // 0x0029(0x0057) MISSED OFFSET
	struct FString                                     DebugName;                                                // 0x0080(0x0010) (ZeroConstructor)
	bool                                               bProfileLockOperationPending;                             // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bProfileUnlockOperationPending;                           // 0x0091(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bEnableMocks;                                             // 0x0092(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x15];                                      // 0x0093(0x0015) MISSED OFFSET
	class UMcpProfileGroup*                            ProfileGroup;                                             // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     ProfileId;                                                // 0x00B0(0x0010) (ZeroConstructor)
	int64_t                                            ProfileRevision;                                          // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                FullProfileQueryQueued;                                   // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bProfileWriteLocked;                                      // 0x00CC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
	struct FDateTime                                   ProfileWriteLockExpireTime;                               // 0x00D0(0x0008) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x38];                                      // 0x00D8(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class McpProfileSys.McpProfile");
		
		return ptr;
	}


	void UnlockProfileForWrite(const struct FString& Code, struct FDedicatedServerUrlContext* Context);
	void QueryPublicProfile(struct FBaseUrlContext* Context);
	void QueryProfile(struct FBaseUrlContext* Context);
	void LockProfileForWrite(const struct FString& Code, int Timeout, struct FDedicatedServerUrlContext* Context);
	void DeleteProfile(struct FClientUrlContext* Context);
	void DeleteAllProfiles(struct FClientUrlContext* Context);
};


// Class McpProfileSys.McpProfileGroup
// 0x0238 (0x0260 - 0x0028)
class UMcpProfileGroup : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB4];                                      // 0x0028(0x00B4) MISSED OFFSET
	int                                                DelayMcpResults;                                          // 0x00DC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                WeeklyIntervalStartDay;                                   // 0x00E0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
	TArray<struct FProfileEntry>                       ProfileList;                                              // 0x00E8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET
	struct FString                                     PlayerName;                                               // 0x0100(0x0010) (ZeroConstructor)
	bool                                               bIsServer;                                                // 0x0110(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0111(0x0007) MISSED OFFSET
	struct FString                                     ProfileNotificationsStompTopic;                           // 0x0118(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData04[0x40];                                      // 0x0128(0x0040) MISSED OFFSET
	struct FString                                     LastMcpVersion;                                           // 0x0168(0x0010) (ZeroConstructor)
	struct FString                                     LastContentVersion;                                       // 0x0178(0x0010) (ZeroConstructor)
	struct FString                                     LastMinBuild;                                             // 0x0188(0x0010) (ZeroConstructor)
	struct FTimespan                                   LocalTimeOffset;                                          // 0x0198(0x0008) (ZeroConstructor)
	unsigned char                                      UnknownData05[0x8];                                       // 0x01A0(0x0008) MISSED OFFSET
	struct FString                                     LockCode;                                                 // 0x01A8(0x0010) (ZeroConstructor)
	TArray<class UMcpProfile*>                         LockedProfiles;                                           // 0x01B8(0x0010) (ZeroConstructor)
	struct FString                                     LockedProfilesString;                                     // 0x01C8(0x0010) (ZeroConstructor)
	int                                                ProfileWriteLockTimeoutSecs;                              // 0x01D8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bSubscribedToNotifications;                               // 0x01DC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x01DD(0x0003) MISSED OFFSET
	struct FString                                     ApplyStashEndPoint;                                       // 0x01E0(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData07[0x8];                                       // 0x01F0(0x0008) MISSED OFFSET
	bool                                               bSendProfileCommandRevisions;                             // 0x01F8(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAsyncParseProfileUpdates;                                // 0x01F9(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData08[0x56];                                      // 0x01FA(0x0056) MISSED OFFSET
	int                                                MaxChangesToForwardInUpdate;                              // 0x0250(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData09[0xC];                                       // 0x0254(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class McpProfileSys.McpProfileGroup");
		
		return ptr;
	}

};


// Class McpProfileSys.McpProfileManager
// 0x0040 (0x0068 - 0x0028)
class UMcpProfileManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	TArray<struct FProfileGroupEntry>                  ServerProfileGroups;                                      // 0x0038(0x0010) (ZeroConstructor)
	TArray<struct FProfileGroupEntry>                  ClientProfileGroups;                                      // 0x0048(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0058(0x0008) MISSED OFFSET
	int                                                MaxItemsProcessedInInitialUpdatesPerTick;                 // 0x0060(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class McpProfileSys.McpProfileManager");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
