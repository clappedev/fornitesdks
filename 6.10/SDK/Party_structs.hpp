#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
enum class ECrossplayPreference : uint8
{
	NoSelection                    = 0,
	OptedIn                        = 1,
	OptedOut                       = 2,
	OptedOutRestricted             = 3,
	ECrossplayPreference_MAX       = 4,
};
enum class EJoinPartyDenialReason : uint8
{
	NoReason                       = 0,
	Busy                           = 1,
	PartyFull                      = 2,
	GameFull                       = 3,
	NotPartyLeader                 = 4,
	PartyPrivate                   = 5,
	NeedsTutorial                  = 6,
	GameModeRestricted             = 7,
	JoinerCrossplayRestricted      = 8,
	MemberCrossplayRestricted      = 9,
	Banned                         = 10,
	EJoinPartyDenialReason_MAX     = 11,
};
enum class EPartyType : uint8
{
	Public                         = 0,
	FriendsOnly                    = 1,
	Private                        = 2,
	EPartyType_MAX                 = 3,
};
// 0x10 (0x10 - 0x0)
// ScriptStruct Party.PartyState
struct FPartyState
{
public:
	uint8                                        Pad_1272[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EPartyType                        PartyType;                                         // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLeaderFriendsOnly;                                // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLeaderInvitesOnly;                                // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInvitesDisabled;                                  // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1273[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Party.PartyMemberRepState
struct FPartyMemberRepState
{
public:
	uint8                                        Pad_1274[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
