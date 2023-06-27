#pragma once

// Name: Fortnite, Version: 1.8.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum Lobby.ELobbyBeaconJoinState
enum class ELobbyBeaconJoinState : uint8_t
{

};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Lobby.LobbyPlayerStateInfoArray
// 0x0018 (0x00C8 - 0x00B0)
struct FLobbyPlayerStateInfoArray : public FFastArraySerializer
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x00B0(0x0018) MISSED OFFSET
};

// ScriptStruct Lobby.LobbyPlayerStateActorInfo
// 0x000C (0x0018 - 0x000C)
struct FLobbyPlayerStateActorInfo : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x000C(0x000C) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
