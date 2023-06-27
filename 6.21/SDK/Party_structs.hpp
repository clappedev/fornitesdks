#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
enum class EApprovalAction : uint8
{
	Approve                        = 0,
	Enqueue                        = 1,
	EnqueueAndStartBeacon          = 2,
	Deny                           = 3,
	EApprovalAction_MAX            = 4,
};
enum class EPartyJoinDenialReason : uint8
{
	NoReason                       = 0,
	Busy                           = 1,
	OssUnavailable                 = 2,
	PartyFull                      = 3,
	GameFull                       = 4,
	NotPartyLeader                 = 5,
	PartyPrivate                   = 6,
	JoinerCrossplayRestricted      = 7,
	MemberCrossplayRestricted      = 8,
	GameModeRestricted             = 9,
	Banned                         = 10,
	NotLoggedIn                    = 11,
	CheckingForRejoin              = 12,
	TargetUserMissingPresence      = 13,
	TargetUserUnjoinable           = 14,
	AlreadyLeaderInPlatformSession = 15,
	TargetUserPlayingDifferentGame = 16,
	TargetUserMissingPlatformSession = 17,
	PlatformSessionMissingJoinInfo = 18,
	FailedToStartFindConsoleSession = 19,
	MissingPartyClassForTypeId     = 20,
	TargetUserBlocked              = 21,
	CustomReason0                  = 22,
	CustomReason1                  = 23,
	CustomReason2                  = 24,
	CustomReason3                  = 25,
	CustomReason4                  = 26,
	CustomReason5                  = 27,
	CustomReason6                  = 28,
	CustomReason7                  = 29,
	CustomReason8                  = 30,
	CustomReason9                  = 31,
	CustomReason10                 = 32,
	CustomReason11                 = 33,
	CustomReason12                 = 34,
	CustomReason13                 = 35,
	CustomReason14                 = 36,
	CustomReason15                 = 37,
	CustomReason16                 = 38,
	CustomReason17                 = 39,
	CustomReason18                 = 40,
	CustomReason19                 = 41,
	CustomReason20                 = 42,
	CustomReason21                 = 43,
	CustomReason22                 = 44,
	CustomReason23                 = 45,
	CustomReason24                 = 46,
	CustomReason25                 = 47,
	CustomReason26                 = 48,
	CustomReason27                 = 49,
	CustomReason28                 = 50,
	CustomReason29                 = 51,
	CustomReason30                 = 52,
	CustomReason31                 = 53,
	CustomReason32                 = 54,
	CustomReason33                 = 55,
	CustomReason34                 = 56,
	CustomReason35                 = 57,
	CustomReason36                 = 58,
	CustomReason37                 = 59,
	CustomReason38                 = 60,
	CustomReason39                 = 61,
	MAX                            = 62,
};
enum class EPartyInviteRestriction : uint8
{
	AnyMember                      = 0,
	LeaderOnly                     = 1,
	NoInvites                      = 2,
	EPartyInviteRestriction_MAX    = 3,
};
enum class EPartyType : uint8
{
	Public                         = 0,
	FriendsOnly                    = 1,
	Private                        = 2,
	EPartyType_MAX                 = 3,
};
enum class ESocialChannelType : uint8
{
	General                        = 0,
	Private                        = 1,
	Party                          = 2,
	Team                           = 3,
	System                         = 4,
	Founder                        = 5,
	ESocialChannelType_MAX         = 6,
};
enum class ECrossplayPreference : uint8
{
	NoSelection                    = 0,
	OptedIn                        = 1,
	OptedOut                       = 2,
	OptedOutRestricted             = 3,
	ECrossplayPreference_MAX       = 4,
};
enum class ESocialRelationship : uint8
{
	FriendInviteReceived           = 0,
	FriendInviteSent               = 1,
	PartyInvite                    = 2,
	Friend                         = 3,
	BlockedPlayer                  = 4,
	SuggestedFriend                = 5,
	RecentPlayer                   = 6,
	ESocialRelationship_MAX        = 7,
};
enum class ESocialSubsystem : uint8
{
	Primary                        = 0,
	Platform                       = 1,
	MAX                            = 2,
};
// 0x18 (0x18 - 0x0)
// ScriptStruct Party.OnlinePartyRepDataBase
struct FOnlinePartyRepDataBase
{
public:
	uint8                                        Pad_2383[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Party.UserPlatform
struct FUserPlatform
{
public:
	class FString                                PlatformStr;                                       // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x118 (0x130 - 0x18)
// ScriptStruct Party.PartyMemberRepData
struct FPartyMemberRepData : public FOnlinePartyRepDataBase
{
public:
	uint8                                        Pad_2384[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUserPlatform                         Platform;                                          // 0x20(0x10)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_2385[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      PlatformUniqueId;                                  // 0x60(0x28)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2386[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PlatformSessionId;                                 // 0xB8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2387[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ECrossplayPreference              CrossplayPreference;                               // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2388[0x37];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x3 (0x3 - 0x0)
// ScriptStruct Party.PartyPrivacySettings
struct FPartyPrivacySettings
{
public:
	enum class EPartyType                        PartyType;                                         // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPartyInviteRestriction           PartyInviteRestriction;                            // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyLeaderFriendsCanJoin;                         // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Party.PartyPlatformSessionInfo
struct FPartyPlatformSessionInfo
{
public:
	class FName                                  OssName;                                           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SessionId;                                         // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      OwnerPrimaryId;                                    // 0x18(0x28)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Party.SocialChatChannelConfig
struct FSocialChatChannelConfig
{
public:
	class USocialUser*                           SocialUser;                                        // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2389[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USocialChatChannel*>            ListenChannels;                                    // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_238A[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x80 - 0x18)
// ScriptStruct Party.PartyRepData
struct FPartyRepData : public FOnlinePartyRepDataBase
{
public:
	uint8                                        Pad_238B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPartyPrivacySettings                 PrivacySettings;                                   // 0x20(0x3)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_238C[0x35];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPartyPlatformSessionInfo>     PlatformSessions;                                  // 0x58(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_238D[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
