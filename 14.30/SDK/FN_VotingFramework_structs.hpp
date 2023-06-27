#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum VotingFramework.EVoteSessionState
enum class EVoteSessionState : uint8_t
{
	None                           = 0,
	Setup                          = 1,
	Voting                         = 2,
	Complete                       = 3,
	Shutdown                       = 4,
	EVoteSessionState_MAX          = 5
};


// Enum VotingFramework.EVoteSessionNetworkType
enum class EVoteSessionNetworkType : uint8_t
{
	NotDetermined                  = 0,
	DedicatedServer                = 1,
	MeshNetwork                    = 2,
	EVoteSessionNetworkType_MAX    = 3
};


// Enum VotingFramework.EVoteState
enum class EVoteState : uint8_t
{
	None                           = 0,
	Setup                          = 1,
	Active                         = 2,
	Completed                      = 3,
	EVoteState_MAX                 = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct VotingFramework.VoteSelectionSettings
// 0x0020
struct FVoteSelectionSettings
{
	struct FGameplayTag                                VoteSelectionId;                                          // 0x0000(0x0008) (Edit, DisableEditOnInstance)
	struct FText                                       VoteSelectionText;                                        // 0x0008(0x0018) (Edit, DisableEditOnInstance)
};

// ScriptStruct VotingFramework.VoteSettings
// 0x0038
struct FVoteSettings
{
	struct FGameplayTag                                VoteId;                                                   // 0x0000(0x0008) (Edit, DisableEditOnInstance)
	bool                                               bLocksSelection;                                          // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FText                                       VoteText;                                                 // 0x0010(0x0018) (Edit, DisableEditOnInstance)
	TArray<struct FVoteSelectionSettings>              VoteSelections;                                           // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct VotingFramework.VoteSessionSettings
// 0x0038
struct FVoteSessionSettings
{
	struct FGameplayTag                                VoteSessionId;                                            // 0x0000(0x0008) (Edit, DisableEditOnInstance)
	struct FText                                       VoteSessionText;                                          // 0x0008(0x0018) (Edit, DisableEditOnInstance)
	TArray<struct FVoteSettings>                       VoteSettingsList;                                         // 0x0020(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	EVoteSessionNetworkType                            NetworkType;                                              // 0x0030(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct VotingFramework.VoteSessionRuntime
// 0x0024 (0x0030 - 0x000C)
struct FVoteSessionRuntime : public FFastArraySerializerItem
{
	struct FName                                       VoteSessionId;                                            // 0x000C(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	EVoteSessionNetworkType                            NetworkType;                                              // 0x0014(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	EVoteSessionState                                  VoteSessionState;                                         // 0x0015(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
	struct FName                                       CurrentVoteId;                                            // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWorld*                                      WorldRef;                                                 // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	EVoteSessionState                                  Shadow_VoteSessionState;                                  // 0x0028(0x0001) (ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct VotingFramework.VoteSessionRuntimeArray
// 0x0018 (0x0120 - 0x0108)
struct FVoteSessionRuntimeArray : public FFastArraySerializer
{
	class UWorld*                                      WorldRef;                                                 // 0x0108(0x0008) (ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FVoteSessionRuntime>                 VotingSessions;                                           // 0x0110(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct VotingFramework.VoteRuntime
// 0x0044 (0x0050 - 0x000C)
struct FVoteRuntime : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UWorld*                                      WorldRef;                                                 // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FName                                       VoteSessionId;                                            // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       VoteId;                                                   // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FName>                               VoteSelectionIds;                                         // 0x0028(0x0010) (ZeroConstructor, Transient)
	EVoteState                                         VoteState;                                                // 0x0038(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	struct FName                                       VoteSelectionWinningResult;                               // 0x003C(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       Shadow_VoteSelectionWinningResult;                        // 0x0044(0x0008) (ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	EVoteState                                         Shadow_VoteState;                                         // 0x004C(0x0001) (ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData02[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
};

// ScriptStruct VotingFramework.VoteRuntimeArray
// 0x0018 (0x0120 - 0x0108)
struct FVoteRuntimeArray : public FFastArraySerializer
{
	class UWorld*                                      WorldRef;                                                 // 0x0108(0x0008) (ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FVoteRuntime>                        VotingResults;                                            // 0x0110(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct VotingFramework.VoteSelectionResults
// 0x0034 (0x0040 - 0x000C)
struct FVoteSelectionResults : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UWorld*                                      WorldRef;                                                 // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FName                                       VoteSessionId;                                            // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       VoteId;                                                   // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       VoteSelectionId;                                          // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                ServerVoteTotal;                                          // 0x0030(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                AllServersVoteTotal;                                      // 0x0034(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                Shadow_ServerVoteTotal;                                   // 0x0038(0x0004) (ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                Shadow_AllServersVoteTotal;                               // 0x003C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct VotingFramework.VoteSelectionResultsArray
// 0x0018 (0x0120 - 0x0108)
struct FVoteSelectionResultsArray : public FFastArraySerializer
{
	class UWorld*                                      WorldRef;                                                 // 0x0108(0x0008) (ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FVoteSelectionResults>               VoteSelectionResults;                                     // 0x0110(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct VotingFramework.CastedVote
// 0x0018
struct FCastedVote
{
	struct FName                                       VoteSessionId;                                            // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       VoteId;                                                   // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       VoteSelectionId;                                          // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct VotingFramework.VoteSelection
// 0x0018
struct FVoteSelection
{
	struct FGameplayTag                                VoteSessionId;                                            // 0x0000(0x0008) (Edit)
	struct FGameplayTag                                VoteId;                                                   // 0x0008(0x0008) (Edit)
	struct FGameplayTag                                VoteSelectionId;                                          // 0x0010(0x0008) (Edit)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
