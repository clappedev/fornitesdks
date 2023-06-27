#pragma once

// Fortnite (8.51) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OnlineSubsystemUtils.AchievementBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UAchievementBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.AchievementBlueprintLibrary");
		return ptr;
	}


	void STATIC_GetCachedAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, struct FName AchievementID, bool* bFoundID, float* Progress);
	void STATIC_GetCachedAchievementDescription(class UObject* WorldContextObject, class APlayerController* PlayerController, struct FName AchievementID, bool* bFoundID, struct FText* Title, struct FText* LockedDescription, struct FText* UnlockedDescription, bool* bHidden);
};


// Class OnlineSubsystemUtils.AchievementQueryCallbackProxy
// 0x0038 (0x0060 - 0x0028)
class UAchievementQueryCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty OnlineSubsystemUtils.AchievementQueryCallbackProxy.OnSuccess
	unsigned char                                      UnknownData01[0x10];                                      // 0x0038(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty OnlineSubsystemUtils.AchievementQueryCallbackProxy.OnFailure
	unsigned char                                      UnknownData02[0x18];                                      // 0x0048(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.AchievementQueryCallbackProxy");
		return ptr;
	}


	class UAchievementQueryCallbackProxy* STATIC_CacheAchievements(class UObject* WorldContextObject, class APlayerController* PlayerController);
	class UAchievementQueryCallbackProxy* STATIC_CacheAchievementDescriptions(class UObject* WorldContextObject, class APlayerController* PlayerController);
};


// Class OnlineSubsystemUtils.AchievementWriteCallbackProxy
// 0x0050 (0x0078 - 0x0028)
class UAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty OnlineSubsystemUtils.AchievementWriteCallbackProxy.OnSuccess
	unsigned char                                      UnknownData01[0x10];                                      // 0x0038(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty OnlineSubsystemUtils.AchievementWriteCallbackProxy.OnFailure
	unsigned char                                      UnknownData02[0x30];                                      // 0x0048(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.AchievementWriteCallbackProxy");
		return ptr;
	}


	class UAchievementWriteCallbackProxy* STATIC_WriteAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, struct FName AchievementName, float Progress, int UserTag);
};


// Class OnlineSubsystemUtils.ConnectionCallbackProxy
// 0x0048 (0x0070 - 0x0028)
class UConnectionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty OnlineSubsystemUtils.ConnectionCallbackProxy.OnSuccess
	unsigned char                                      UnknownData01[0x10];                                      // 0x0038(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty OnlineSubsystemUtils.ConnectionCallbackProxy.OnFailure
	unsigned char                                      UnknownData02[0x28];                                      // 0x0048(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.ConnectionCallbackProxy");
		return ptr;
	}


	class UConnectionCallbackProxy* STATIC_ConnectToService(class UObject* WorldContextObject, class APlayerController* PlayerController);
};


// Class OnlineSubsystemUtils.CreateSessionCallbackProxy
// 0x0068 (0x0090 - 0x0028)
class UCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty OnlineSubsystemUtils.CreateSessionCallbackProxy.OnSuccess
	unsigned char                                      UnknownData01[0x10];                                      // 0x0038(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty OnlineSubsystemUtils.CreateSessionCallbackProxy.OnFailure
	unsigned char                                      UnknownData02[0x48];                                      // 0x0048(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.CreateSessionCallbackProxy");
		return ptr;
	}


	class UCreateSessionCallbackProxy* STATIC_CreateSession(class UObject* WorldContextObject, class APlayerController* PlayerController, int PublicConnections, bool bUseLAN);
};


// Class OnlineSubsystemUtils.DestroySessionCallbackProxy
// 0x0048 (0x0070 - 0x0028)
class UDestroySessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty OnlineSubsystemUtils.DestroySessionCallbackProxy.OnSuccess
	unsigned char                                      UnknownData01[0x10];                                      // 0x0038(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty OnlineSubsystemUtils.DestroySessionCallbackProxy.OnFailure
	unsigned char                                      UnknownData02[0x28];                                      // 0x0048(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.DestroySessionCallbackProxy");
		return ptr;
	}


	class UDestroySessionCallbackProxy* STATIC_DestroySession(class UObject* WorldContextObject, class APlayerController* PlayerController);
};


// Class OnlineSubsystemUtils.EndMatchCallbackProxy
// 0x0050 (0x0078 - 0x0028)
class UEndMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty OnlineSubsystemUtils.EndMatchCallbackProxy.OnSuccess
	unsigned char                                      UnknownData01[0x10];                                      // 0x0038(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty OnlineSubsystemUtils.EndMatchCallbackProxy.OnFailure
	unsigned char                                      UnknownData02[0x30];                                      // 0x0048(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.EndMatchCallbackProxy");
		return ptr;
	}


	class UEndMatchCallbackProxy* STATIC_EndMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, TScriptInterface<class UTurnBasedMatchInterface> MatchActor, struct FString MatchID, TEnumAsByte<EMPMatchOutcome> LocalPlayerOutcome, TEnumAsByte<EMPMatchOutcome> OtherPlayersOutcome);
};


// Class OnlineSubsystemUtils.EndTurnCallbackProxy
// 0x0048 (0x0070 - 0x0028)
class UEndTurnCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty OnlineSubsystemUtils.EndTurnCallbackProxy.OnSuccess
	unsigned char                                      UnknownData01[0x10];                                      // 0x0038(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty OnlineSubsystemUtils.EndTurnCallbackProxy.OnFailure
	unsigned char                                      UnknownData02[0x28];                                      // 0x0048(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.EndTurnCallbackProxy");
		return ptr;
	}


	class UEndTurnCallbackProxy* STATIC_EndTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, struct FString MatchID, TScriptInterface<class UTurnBasedMatchInterface> TurnBasedMatchInterface);
};


// Class OnlineSubsystemUtils.FindSessionsCallbackProxy
// 0x0060 (0x0088 - 0x0028)
class UFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty OnlineSubsystemUtils.FindSessionsCallbackProxy.OnSuccess
	unsigned char                                      UnknownData01[0x10];                                      // 0x0038(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty OnlineSubsystemUtils.FindSessionsCallbackProxy.OnFailure
	unsigned char                                      UnknownData02[0x40];                                      // 0x0048(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.FindSessionsCallbackProxy");
		return ptr;
	}


	struct FString STATIC_GetServerName(struct FBlueprintSessionResult Result);
	int STATIC_GetPingInMs(struct FBlueprintSessionResult Result);
	int STATIC_GetMaxPlayers(struct FBlueprintSessionResult Result);
	int STATIC_GetCurrentPlayers(struct FBlueprintSessionResult Result);
	class UFindSessionsCallbackProxy* STATIC_FindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController, int MaxResults, bool bUseLAN);
};


// Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
// 0x0058 (0x0080 - 0x0028)
class UFindTurnBasedMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.OnSuccess
	unsigned char                                      UnknownData01[0x10];                                      // 0x0038(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.OnFailure
	unsigned char                                      UnknownData02[0x38];                                      // 0x0048(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy");
		return ptr;
	}


	class UFindTurnBasedMatchCallbackProxy* STATIC_FindTurnBasedMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, TScriptInterface<class UTurnBasedMatchInterface> MatchActor, int MinPlayers, int MaxPlayers, int PlayerGroup, bool ShowExistingMatches);
};


// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy
// 0x0058 (0x0080 - 0x0028)
class UInAppPurchaseCallbackProxy : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty OnlineSubsystemUtils.InAppPurchaseCallbackProxy.OnSuccess
	unsigned char                                      UnknownData01[0x10];                                      // 0x0038(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty OnlineSubsystemUtils.InAppPurchaseCallbackProxy.OnFailure
	unsigned char                                      UnknownData02[0x38];                                      // 0x0048(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy");
		return ptr;
	}


	class UInAppPurchaseCallbackProxy* STATIC_CreateProxyObjectForInAppPurchase(class APlayerController* PlayerController, struct FInAppPurchaseProductRequest ProductRequest);
};


// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy
// 0x0068 (0x0090 - 0x0028)
class UInAppPurchaseQueryCallbackProxy : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.OnSuccess
	unsigned char                                      UnknownData01[0x10];                                      // 0x0038(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.OnFailure
	unsigned char                                      UnknownData02[0x48];                                      // 0x0048(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy");
		return ptr;
	}


	class UInAppPurchaseQueryCallbackProxy* STATIC_CreateProxyObjectForInAppPurchaseQuery(class APlayerController* PlayerController, TArray<struct FString> ProductIdentifiers);
};


// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy
// 0x0068 (0x0090 - 0x0028)
class UInAppPurchaseRestoreCallbackProxy : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.OnSuccess
	unsigned char                                      UnknownData01[0x10];                                      // 0x0038(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.OnFailure
	unsigned char                                      UnknownData02[0x48];                                      // 0x0048(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy");
		return ptr;
	}


	class UInAppPurchaseRestoreCallbackProxy* STATIC_CreateProxyObjectForInAppPurchaseRestore(TArray<struct FInAppPurchaseProductRequest> ConsumableProductFlags, class APlayerController* PlayerController);
};


// Class OnlineSubsystemUtils.IpConnection
// 0x0070 (0x19E0 - 0x1970)
class UIpConnection : public UNetConnection
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x1970(0x0060) MISSED OFFSET
	float                                              SocketErrorDisconnectDelay;                               // 0x19D0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x19D4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.IpConnection");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.IpNetDriver
// 0x0048 (0x0778 - 0x0730)
class UIpNetDriver : public UNetDriver
{
public:
	unsigned char                                      LogPortUnreach : 1;                                       // 0x0730(0x0001) (Config)
	unsigned char                                      AllowPlayerPortUnreach : 1;                               // 0x0730(0x0001) (Config)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0731(0x0003) MISSED OFFSET
	uint32_t                                           MaxPortCountToTry;                                        // 0x0734(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1C];                                      // 0x0738(0x001C) MISSED OFFSET
	uint32_t                                           ServerDesiredSocketReceiveBufferBytes;                    // 0x0754(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           ServerDesiredSocketSendBufferBytes;                       // 0x0758(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           ClientDesiredSocketReceiveBufferBytes;                    // 0x075C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           ClientDesiredSocketSendBufferBytes;                       // 0x0760(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x14];                                      // 0x0764(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.IpNetDriver");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.JoinSessionCallbackProxy
// 0x0100 (0x0128 - 0x0028)
class UJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty OnlineSubsystemUtils.JoinSessionCallbackProxy.OnSuccess
	unsigned char                                      UnknownData01[0x10];                                      // 0x0038(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty OnlineSubsystemUtils.JoinSessionCallbackProxy.OnFailure
	unsigned char                                      UnknownData02[0xE0];                                      // 0x0048(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.JoinSessionCallbackProxy");
		return ptr;
	}


	class UJoinSessionCallbackProxy* STATIC_JoinSession(class UObject* WorldContextObject, class APlayerController* PlayerController, struct FBlueprintSessionResult SearchResult);
};


// Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class ULeaderboardBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary");
		return ptr;
	}


	bool STATIC_WriteLeaderboardInteger(class APlayerController* PlayerController, struct FName StatName, int StatValue);
};


// Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
// 0x0040 (0x0068 - 0x0028)
class ULeaderboardFlushCallbackProxy : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.OnSuccess
	unsigned char                                      UnknownData01[0x10];                                      // 0x0038(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.OnFailure
	unsigned char                                      UnknownData02[0x20];                                      // 0x0048(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy");
		return ptr;
	}


	class ULeaderboardFlushCallbackProxy* STATIC_CreateProxyObjectForFlush(class APlayerController* PlayerController, struct FName SessionName);
};


// Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
// 0x0070 (0x0098 - 0x0028)
class ULeaderboardQueryCallbackProxy : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.OnSuccess
	unsigned char                                      UnknownData01[0x10];                                      // 0x0038(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.OnFailure
	unsigned char                                      UnknownData02[0x50];                                      // 0x0048(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy");
		return ptr;
	}


	class ULeaderboardQueryCallbackProxy* STATIC_CreateProxyObjectForIntQuery(class APlayerController* PlayerController, struct FName StatName);
};


// Class OnlineSubsystemUtils.LogoutCallbackProxy
// 0x0038 (0x0068 - 0x0030)
class ULogoutCallbackProxy : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty OnlineSubsystemUtils.LogoutCallbackProxy.OnSuccess
	unsigned char                                      UnknownData01[0x10];                                      // 0x0040(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty OnlineSubsystemUtils.LogoutCallbackProxy.OnFailure
	unsigned char                                      UnknownData02[0x18];                                      // 0x0050(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.LogoutCallbackProxy");
		return ptr;
	}


	class ULogoutCallbackProxy* STATIC_Logout(class UObject* WorldContextObject, class APlayerController* PlayerController);
};


// Class OnlineSubsystemUtils.OnlineBeacon
// 0x0030 (0x0270 - 0x0240)
class AOnlineBeacon : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0240(0x0008) MISSED OFFSET
	float                                              BeaconConnectionInitialTimeout;                           // 0x0248(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              BeaconConnectionTimeout;                                  // 0x024C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	class UNetDriver*                                  NetDriver;                                                // 0x0250(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0258(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineBeacon");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.OnlineBeaconClient
// 0x0050 (0x02C0 - 0x0270)
class AOnlineBeaconClient : public AOnlineBeacon
{
public:
	class AOnlineBeaconHostObject*                     BeaconOwner;                                              // 0x0270(0x0008) (ZeroConstructor, IsPlainOldData)
	class UNetConnection*                              BeaconConnection;                                         // 0x0278(0x0008) (ZeroConstructor, IsPlainOldData)
	EBeaconConnectionState                             ConnectionState;                                          // 0x0280(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3F];                                      // 0x0281(0x003F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineBeaconClient");
		return ptr;
	}


	void ClientOnConnected();
};


// Class OnlineSubsystemUtils.OnlineBeaconHost
// 0x00B8 (0x0328 - 0x0270)
class AOnlineBeaconHost : public AOnlineBeacon
{
public:
	int                                                ListenPort;                                               // 0x0270(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0274(0x0004) MISSED OFFSET
	TArray<class AOnlineBeaconClient*>                 ClientActors;                                             // 0x0278(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0xA0];                                      // 0x0288(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineBeaconHost");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.OnlineBeaconHostObject
// 0x0028 (0x0268 - 0x0240)
class AOnlineBeaconHostObject : public AActor
{
public:
	struct FString                                     BeaconTypeName;                                           // 0x0240(0x0010) (ZeroConstructor, Transient)
	class UClass*                                      ClientBeaconActorClass;                                   // 0x0250(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class AOnlineBeaconClient*>                 ClientActors;                                             // 0x0258(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineBeaconHostObject");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
// 0x0100 (0x0128 - 0x0028)
class UOnlineEngineInterfaceImpl : public UOnlineEngineInterface
{
public:
	struct FName                                       VoiceSubsystemNameOverride;                               // 0x0028(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0030(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.OnlinePIESettings
// 0x0018 (0x0050 - 0x0038)
class UOnlinePIESettings : public UDeveloperSettings
{
public:
	bool                                               bOnlinePIEEnabled;                                        // 0x0038(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	TArray<struct FPIELoginSettingsInternal>           Logins;                                                   // 0x0040(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlinePIESettings");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.OnlineSessionClient
// 0x0168 (0x0190 - 0x0028)
class UOnlineSessionClient : public UOnlineSession
{
public:
	unsigned char                                      UnknownData00[0x160];                                     // 0x0028(0x0160) MISSED OFFSET
	bool                                               bIsFromInvite;                                            // 0x0188(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bHandlingDisconnect;                                      // 0x0189(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x018A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineSessionClient");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.PartyBeaconClient
// 0x00B0 (0x0370 - 0x02C0)
class APartyBeaconClient : public AOnlineBeaconClient
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x02C0(0x0030) MISSED OFFSET
	struct FString                                     DestSessionId;                                            // 0x02F0(0x0010) (ZeroConstructor)
	struct FPartyReservation                           PendingReservation;                                       // 0x0300(0x0040)
	EClientRequestType                                 RequestType;                                              // 0x0340(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bPendingReservationSent;                                  // 0x0341(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bCancelReservation;                                       // 0x0342(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2D];                                      // 0x0343(0x002D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.PartyBeaconClient");
		return ptr;
	}


	void ServerUpdateReservationRequest(struct FString SessionId, struct FPartyReservation ReservationUpdate);
	void ServerReservationRequest(struct FString SessionId, struct FPartyReservation Reservation);
	void ServerCancelReservationRequest(struct FUniqueNetIdRepl PartyLeader);
	void ClientSendReservationUpdates(int NumRemainingReservations);
	void ClientSendReservationFull();
	void ClientReservationResponse(TEnumAsByte<EPartyReservationResult> ReservationResponse);
	void ClientCancelReservationResponse(TEnumAsByte<EPartyReservationResult> ReservationResponse);
};


// Class OnlineSubsystemUtils.PartyBeaconHost
// 0x0078 (0x02E0 - 0x0268)
class APartyBeaconHost : public AOnlineBeaconHostObject
{
public:
	class UPartyBeaconState*                           State;                                                    // 0x0268(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0270(0x0060) MISSED OFFSET
	bool                                               bLogoutOnSessionTimeout;                                  // 0x02D0(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02D1(0x0003) MISSED OFFSET
	float                                              SessionTimeoutSecs;                                       // 0x02D4(0x0004) (ZeroConstructor, Transient, Config, IsPlainOldData)
	float                                              TravelSessionTimeoutSecs;                                 // 0x02D8(0x0004) (ZeroConstructor, Transient, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02DC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.PartyBeaconHost");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.PartyBeaconState
// 0x0050 (0x0078 - 0x0028)
class UPartyBeaconState : public UObject
{
public:
	struct FName                                       SessionName;                                              // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                NumConsumedReservations;                                  // 0x0030(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                MaxReservations;                                          // 0x0034(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                NumTeams;                                                 // 0x0038(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                NumPlayersPerTeam;                                        // 0x003C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       TeamAssignmentMethod;                                     // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                ReservedHostTeamNum;                                      // 0x0048(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                ForceTeamNum;                                             // 0x004C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bRestrictCrossConsole;                                    // 0x0050(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	TArray<struct FPartyReservation>                   Reservations;                                             // 0x0058(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0068(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.PartyBeaconState");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.QuitMatchCallbackProxy
// 0x0048 (0x0070 - 0x0028)
class UQuitMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty OnlineSubsystemUtils.QuitMatchCallbackProxy.OnSuccess
	unsigned char                                      UnknownData01[0x10];                                      // 0x0038(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty OnlineSubsystemUtils.QuitMatchCallbackProxy.OnFailure
	unsigned char                                      UnknownData02[0x28];                                      // 0x0048(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.QuitMatchCallbackProxy");
		return ptr;
	}


	class UQuitMatchCallbackProxy* STATIC_QuitMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, struct FString MatchID, TEnumAsByte<EMPMatchOutcome> Outcome, int TurnTimeoutInSeconds);
};


// Class OnlineSubsystemUtils.ShowLoginUICallbackProxy
// 0x0030 (0x0060 - 0x0030)
class UShowLoginUICallbackProxy : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty OnlineSubsystemUtils.ShowLoginUICallbackProxy.OnSuccess
	unsigned char                                      UnknownData01[0x10];                                      // 0x0040(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty OnlineSubsystemUtils.ShowLoginUICallbackProxy.OnFailure
	unsigned char                                      UnknownData02[0x10];                                      // 0x0050(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.ShowLoginUICallbackProxy");
		return ptr;
	}


	class UShowLoginUICallbackProxy* STATIC_ShowExternalLoginUI(class UObject* WorldContextObject, class APlayerController* InPlayerController);
};


// Class OnlineSubsystemUtils.SpectatorBeaconClient
// 0x00E8 (0x03A8 - 0x02C0)
class ASpectatorBeaconClient : public AOnlineBeaconClient
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x02C0(0x0030) MISSED OFFSET
	struct FString                                     DestSessionId;                                            // 0x02F0(0x0010) (ZeroConstructor)
	struct FSpectatorReservation                       PendingReservation;                                       // 0x0300(0x0078)
	ESpectatorClientRequestType                        RequestType;                                              // 0x0378(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bPendingReservationSent;                                  // 0x0379(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bCancelReservation;                                       // 0x037A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2D];                                      // 0x037B(0x002D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.SpectatorBeaconClient");
		return ptr;
	}


	void ServerReservationRequest(struct FString SessionId, struct FSpectatorReservation Reservation);
	void ServerCancelReservationRequest(struct FUniqueNetIdRepl Spectator);
	void ClientSendReservationUpdates(int NumRemainingReservations);
	void ClientSendReservationFull();
	void ClientReservationResponse(TEnumAsByte<ESpectatorReservationResult> ReservationResponse);
	void ClientCancelReservationResponse(TEnumAsByte<ESpectatorReservationResult> ReservationResponse);
};


// Class OnlineSubsystemUtils.SpectatorBeaconHost
// 0x0078 (0x02E0 - 0x0268)
class ASpectatorBeaconHost : public AOnlineBeaconHostObject
{
public:
	class USpectatorBeaconState*                       State;                                                    // 0x0268(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0270(0x0060) MISSED OFFSET
	bool                                               bLogoutOnSessionTimeout;                                  // 0x02D0(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02D1(0x0003) MISSED OFFSET
	float                                              SessionTimeoutSecs;                                       // 0x02D4(0x0004) (ZeroConstructor, Transient, Config, IsPlainOldData)
	float                                              TravelSessionTimeoutSecs;                                 // 0x02D8(0x0004) (ZeroConstructor, Transient, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02DC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.SpectatorBeaconHost");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.SpectatorBeaconState
// 0x0038 (0x0060 - 0x0028)
class USpectatorBeaconState : public UObject
{
public:
	struct FName                                       SessionName;                                              // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                NumConsumedReservations;                                  // 0x0030(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                MaxReservations;                                          // 0x0034(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bRestrictCrossConsole;                                    // 0x0038(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	TArray<struct FSpectatorReservation>               Reservations;                                             // 0x0040(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0050(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.SpectatorBeaconState");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.TestBeaconClient
// 0x0000 (0x02C0 - 0x02C0)
class ATestBeaconClient : public AOnlineBeaconClient
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.TestBeaconClient");
		return ptr;
	}


	void ServerPong();
	void ClientPing();
};


// Class OnlineSubsystemUtils.TestBeaconHost
// 0x0000 (0x0268 - 0x0268)
class ATestBeaconHost : public AOnlineBeaconHostObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.TestBeaconHost");
		return ptr;
	}

};


// Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UTurnBasedBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary");
		return ptr;
	}


	void STATIC_RegisterTurnBasedMatchInterfaceObject(class UObject* WorldContextObject, class APlayerController* PlayerController, class UObject* Object);
	void STATIC_GetPlayerDisplayName(class UObject* WorldContextObject, class APlayerController* PlayerController, struct FString MatchID, int PlayerIndex, struct FString* PlayerDisplayName);
	void STATIC_GetMyPlayerIndex(class UObject* WorldContextObject, class APlayerController* PlayerController, struct FString MatchID, int* PlayerIndex);
	void STATIC_GetIsMyTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, struct FString MatchID, bool* bIsMyTurn);
};


// Class OnlineSubsystemUtils.VoipListenerSynthComponent
// 0x0010 (0x0650 - 0x0640)
class UVoipListenerSynthComponent : public USynthComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0640(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.VoipListenerSynthComponent");
		return ptr;
	}


	bool IsIdling();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
