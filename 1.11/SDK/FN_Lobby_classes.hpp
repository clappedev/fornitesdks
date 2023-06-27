#pragma once

// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Lobby.LobbyBeaconClient
// 0x01A0 (0x05C0 - 0x0420)
class ALobbyBeaconClient : public AOnlineBeaconClient
{
public:
	class ALobbyBeaconPlayerState*                     PlayerState;                                              // 0x0420(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0428(0x0001) MISSED OFFSET
	ELobbyBeaconJoinState                              LobbyJoinServerState;                                     // 0x0429(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x196];                                     // 0x042A(0x0196) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Lobby.LobbyBeaconClient");
		return ptr;
	}


	void ServerSetPartyOwner(const struct FUniqueNetIdRepl& InUniqueId, const struct FUniqueNetIdRepl& InPartyOwnerId);
	void ServerNotifyJoiningServer();
	void ServerLoginPlayer(const struct FString& InSessionId, const struct FUniqueNetIdRepl& InUniqueId, const struct FString& UrlString);
	void ServerKickPlayer(const struct FUniqueNetIdRepl& PlayerToKick, const struct FText& Reason);
	void ServerDisconnectFromLobby();
	void ServerCheat(const struct FString& Msg);
	void ClientWasKicked(const struct FText& KickReason);
	void ClientSetInviteFlags(const struct FJoinabilitySettings& Settings);
	void ClientPlayerLeft(const struct FUniqueNetIdRepl& InUniqueId);
	void ClientPlayerJoined(const struct FText& NewPlayerName, const struct FUniqueNetIdRepl& InUniqueId);
	void ClientLoginComplete(const struct FUniqueNetIdRepl& InUniqueId, bool bWasSuccessful);
	void ClientJoinGame();
	void ClientAckJoiningServer();
};


// Class Lobby.LobbyBeaconHost
// 0x0038 (0x03C8 - 0x0390)
class ALobbyBeaconHost : public AOnlineBeaconHostObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0390(0x0008) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x0390(0x0028) UNKNOWN PROPERTY: SoftClassProperty Lobby.LobbyBeaconHost.LobbyStateClass
	class ALobbyBeaconState*                           LobbyState;                                               // 0x03C0(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Lobby.LobbyBeaconHost");
		return ptr;
	}

};


// Class Lobby.LobbyBeaconPlayerState
// 0x0158 (0x04C0 - 0x0368)
class ALobbyBeaconPlayerState : public AInfo
{
public:
	struct FText                                       DisplayName;                                              // 0x0368(0x0018) (Net)
	struct FUniqueNetIdRepl                            UniqueId;                                                 // 0x0380(0x0028) (Net)
	struct FUniqueNetIdRepl                            PartyOwnerUniqueId;                                       // 0x03A8(0x0028) (Net)
	bool                                               bInLobby;                                                 // 0x03D0(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03D1(0x0007) MISSED OFFSET
	class AOnlineBeaconClient*                         ClientActor;                                              // 0x03D8(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xE0];                                      // 0x03E0(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Lobby.LobbyBeaconPlayerState");
		return ptr;
	}


	void OnRep_PartyOwner();
	void OnRep_InLobby();
};


// Class Lobby.LobbyBeaconState
// 0x02B8 (0x0620 - 0x0368)
class ALobbyBeaconState : public AInfo
{
public:
	int                                                MaxPlayers;                                               // 0x0368(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x036C(0x0004) MISSED OFFSET
	class UClass*                                      LobbyBeaconPlayerStateClass;                              // 0x0370(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0378(0x0008) MISSED OFFSET
	bool                                               bLobbyStarted;                                            // 0x0380(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0381(0x0003) MISSED OFFSET
	float                                              WaitForPlayersTimeRemaining;                              // 0x0384(0x0004) (Net, ZeroConstructor, Config, IsPlainOldData)
	struct FLobbyPlayerStateInfoArray                  Players;                                                  // 0x0388(0x00C8) (Net)
	unsigned char                                      UnknownData03[0x1D0];                                     // 0x0450(0x01D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Lobby.LobbyBeaconState");
		return ptr;
	}


	void OnRep_WaitForPlayersTimeRemaining();
	void OnRep_LobbyStarted();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
