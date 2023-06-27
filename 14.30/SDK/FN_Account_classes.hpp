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

// Class Account.ExternalAccountProvider
// 0x0010 (0x0038 - 0x0028)
class UExternalAccountProvider : public UObject
{
public:
	TArray<struct FExternalAccountServiceConfig>       Services;                                                 // 0x0028(0x0010) (ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Account.ExternalAccountProvider");
		
		return ptr;
	}

};


// Class Account.OnlineAccountCommon
// 0x0728 (0x0750 - 0x0028)
class UOnlineAccountCommon : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	struct FString                                     AvailabilityServiceGameName;                              // 0x0038(0x0010) (ZeroConstructor, Config)
	bool                                               bRequireLightswitchAtStartup;                             // 0x0048(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	struct FString                                     EulaKey;                                                  // 0x0050(0x0010) (ZeroConstructor, Config)
	TMap<struct FString, struct FString>               EulaKeyMapping;                                           // 0x0060(0x0050) (Config)
	bool                                               bEnableWaitingRoom;                                       // 0x00B0(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
	TArray<struct FWebEnvUrl>                          WebCreateEpicAccountUrl;                                  // 0x00B8(0x0010) (ZeroConstructor, Config)
	bool                                               bAllowLocalLogout;                                        // 0x00C8(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAllowLocalLogoutKairos;                                  // 0x00C9(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x36];                                      // 0x00CA(0x0036) MISSED OFFSET
	struct FString                                     RedeemAccessUrl;                                          // 0x0100(0x0010) (ZeroConstructor, Config)
	struct FString                                     RequestFreeAccessUrl;                                     // 0x0110(0x0010) (ZeroConstructor, Config)
	struct FString                                     RealGameAccessUrl;                                        // 0x0120(0x0010) (ZeroConstructor, Config)
	float                                              SkipRedeemOfflinePurchasesChance;                         // 0x0130(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUseFreeAccessInsteadOfGameAccess;                        // 0x0134(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bShouldGrantFreeAccess;                                   // 0x0135(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x0136(0x0001) MISSED OFFSET
	bool                                               bAllowHomeSharingAccess;                                  // 0x0137(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bRequireUGCPrivilege;                                     // 0x0138(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData05[0x29F];                                     // 0x0139(0x029F) MISSED OFFSET
	float                                              AccessGrantDelaySeconds;                                  // 0x03D8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x03DC(0x0004) MISSED OFFSET
	class UWaitingRoomState*                           WaitingRoomState;                                         // 0x03E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x330];                                     // 0x03E8(0x0330) MISSED OFFSET
	bool                                               bAutoCreateHeadlessAccount;                               // 0x0718(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData08[0x37];                                      // 0x0719(0x0037) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Account.OnlineAccountCommon");
		
		return ptr;
	}

};


// Class Account.WaitingRoomState
// 0x0060 (0x0088 - 0x0028)
class UWaitingRoomState : public UObject
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x0028(0x0034) MISSED OFFSET
	int                                                GracePeriodMins;                                          // 0x005C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0060(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Account.WaitingRoomState");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
