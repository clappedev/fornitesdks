#pragma once

// Name: Fortnite, Version: 1.8.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class Lobby.LobbyBeaconClient
// 0x01A0 (0x05E0 - 0x0440)
class ALobbyBeaconClient : public AOnlineBeaconClient
{
public:
	unsigned char                                      UnknownData00[0x1A0];                                     // 0x0440(0x01A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Lobby.LobbyBeaconClient");
		return ptr;
	}

};


// Class Lobby.LobbyBeaconHost
// 0x0030 (0x03E0 - 0x03B0)
class ALobbyBeaconHost : public AOnlineBeaconHostObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x03B0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Lobby.LobbyBeaconHost");
		return ptr;
	}

};


// Class Lobby.LobbyBeaconPlayerState
// 0x0138 (0x04C0 - 0x0388)
class ALobbyBeaconPlayerState : public AInfo
{
public:
	struct FText                                       DisplayName;                                              // 0x0388(0x0018) (Net)
	unsigned char                                      UnknownData00[0x120];                                     // 0x03A0(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Lobby.LobbyBeaconPlayerState");
		return ptr;
	}

};


// Class Lobby.LobbyBeaconState
// 0x02B8 (0x0640 - 0x0388)
class ALobbyBeaconState : public AInfo
{
public:
	int                                                MaxPlayers;                                               // 0x0388(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2B4];                                     // 0x038C(0x02B4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Lobby.LobbyBeaconState");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
