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

// Enum OnlineSubsystemUtils.EBeaconConnectionState
enum class EBeaconConnectionState : uint8_t
{

};


// Enum OnlineSubsystemUtils.EPartyReservationResult
enum class EPartyReservationResult : uint8_t
{

};


// Enum OnlineSubsystemUtils.EClientRequestType
enum class EClientRequestType : uint8_t
{

};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OnlineSubsystemUtils.BlueprintSessionResult
// 0x00B8
struct FBlueprintSessionResult
{
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0000(0x00B8) MISSED OFFSET
};

// ScriptStruct OnlineSubsystemUtils.PlayerReservation
// 0x0030
struct FPlayerReservation
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct OnlineSubsystemUtils.PIELoginSettingsInternal
// 0x0040
struct FPIELoginSettingsInternal
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0010(0x0030) MISSED OFFSET
};

// ScriptStruct OnlineSubsystemUtils.PartyReservation
// 0x0030
struct FPartyReservation
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
