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

// Class VotingFramework.VoteBroadcasterComponent
// 0x03C0 (0x05C0 - 0x0200)
class UVoteBroadcasterComponent : public UMeshNetworkComponent
{
public:
	TArray<struct FVoteSessionSettings>                VoteSessionSettingsList;                                  // 0x0200(0x0010) (Edit, ZeroConstructor)
	struct FVoteSessionRuntimeArray                    VoteSessionRuntimeList;                                   // 0x0210(0x0120) (Net, Transient)
	struct FVoteRuntimeArray                           VoteRuntimeList;                                          // 0x0330(0x0120) (Net, Transient)
	struct FVoteSelectionResultsArray                  VoteResultsList;                                          // 0x0450(0x0120) (Net, Transient)
	TMap<struct FUniqueNetIdRepl, struct FCastedVote>  PlayerCastedVotesMap;                                     // 0x0570(0x0050) (Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class VotingFramework.VoteBroadcasterComponent");
		
		return ptr;
	}


	void VoteStart(const struct FName& VoteSessionId, const struct FName& VoteId);
	void VoteSetup(const struct FName& VoteSessionId, const struct FName& VoteId);
	void VoteSessionShutdown(const struct FName& VoteSessionId);
	void VoteSessionSetup(const struct FName& VoteSessionId, const struct FName& StartingVoteId, EVoteSessionNetworkType NetworkType);
	void VoteSessionComplete(const struct FName& VoteSessionId);
	void VoteEnd(const struct FName& VoteSessionId, const struct FName& VoteId, const struct FName& WinningVoteSelectionId);
	void ServerSubmitVotesAggregated(const struct FName& VoteSessionId, const struct FName& VoteId, const struct FName& VoteSelectionId, int VoteDelta);
	void OnVoteCasted(const struct FUniqueNetIdRepl& UserNetId, const struct FGameplayTag& VoteSessionId, const struct FGameplayTag& VoteId, const struct FGameplayTag& VoteSelectionId);
};


// Class VotingFramework.VoteDispatchSubsystem
// 0x00A0 (0x00D0 - 0x0030)
class UVoteDispatchSubsystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0030(0x0090) MISSED OFFSET
	TArray<struct FVoteSelectionResults>               VotingResults;                                            // 0x00C0(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class VotingFramework.VoteDispatchSubsystem");
		
		return ptr;
	}

};


// Class VotingFramework.VoteInitiationActor
// 0x0010 (0x0230 - 0x0220)
class AVoteInitiationActor : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0220(0x0008) MISSED OFFSET
	class UVoteBroadcasterComponent*                   VoteBroadcasterComponent;                                 // 0x0228(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class VotingFramework.VoteInitiationActor");
		
		return ptr;
	}

};


// Class VotingFramework.VoteListenerComponent
// 0x00E0 (0x0190 - 0x00B0)
class UVoteListenerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty VotingFramework.VoteListenerComponent.OnVoteSessionSetupEvent
	unsigned char                                      UnknownData01[0x10];                                      // 0x00C0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty VotingFramework.VoteListenerComponent.OnVoteSessionVotingEvent
	unsigned char                                      UnknownData02[0x10];                                      // 0x00D0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty VotingFramework.VoteListenerComponent.OnVoteSetupEvent
	unsigned char                                      UnknownData03[0x10];                                      // 0x00E0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty VotingFramework.VoteListenerComponent.OnVoteStartEvent
	unsigned char                                      UnknownData04[0x10];                                      // 0x00F0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty VotingFramework.VoteListenerComponent.OnVoteChangeEvent
	unsigned char                                      UnknownData05[0x10];                                      // 0x0100(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty VotingFramework.VoteListenerComponent.OnVoteEndEvent
	unsigned char                                      UnknownData06[0x10];                                      // 0x0110(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty VotingFramework.VoteListenerComponent.OnVoteSessionCompleteEvent
	unsigned char                                      UnknownData07[0x10];                                      // 0x0120(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty VotingFramework.VoteListenerComponent.OnVoteSessionShutdownEvent
	struct FGameplayTagContainer                       RequestedVoteSessionIds;                                  // 0x0130(0x0020) (Edit)
	struct FGameplayTagContainer                       RequestedVoteIds;                                         // 0x0150(0x0020) (Edit)
	struct FGameplayTagContainer                       RequestedVoteSelectionIds;                                // 0x0170(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class VotingFramework.VoteListenerComponent");
		
		return ptr;
	}


	void OnVoteStart(const struct FGameplayTag& VoteSessionId, const struct FGameplayTag& VoteId, EVoteState VoteState);
	void OnVoteSetup(const struct FGameplayTag& VoteSessionId, const struct FGameplayTag& VoteId, EVoteState VoteState);
	void OnVoteSessionVoting(const struct FGameplayTag& VoteSessionId, const struct FGameplayTag& StartingVoteId, EVoteSessionState SessionState);
	void OnVoteSessionShutdown(const struct FGameplayTag& VoteSessionId);
	void OnVoteSessionSetup(const struct FGameplayTag& VoteSessionId, const struct FGameplayTag& StartingVoteId, EVoteSessionNetworkType NetworkType, EVoteSessionState SessionState);
	void OnVoteSessionComplete(const struct FGameplayTag& VoteSessionId);
	void OnVoteEnd(const struct FGameplayTag& VoteSessionId, const struct FGameplayTag& VoteId, const struct FGameplayTag& WinningVoteSelectionId, EVoteState VoteState);
	void OnVoteChange(const struct FGameplayTag& VoteSessionId, const struct FGameplayTag& VoteId, const struct FGameplayTag& VoteSelectionId, int ServerVoteTotal, int AllServersVoteTotal);
};


// Class VotingFramework.VoteResponderComponent
// 0x0078 (0x0208 - 0x0190)
class UVoteResponderComponent : public UVoteListenerComponent
{
public:
	TArray<struct FVoteSelection>                      SupportedVoteSelections;                                  // 0x0190(0x0010) (Edit, Net, ZeroConstructor)
	bool                                               bShouldLockVotingAfterCasted;                             // 0x01A0(0x0001) (Edit, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01A1(0x0007) MISSED OFFSET
	TMap<struct FUniqueNetIdRepl, struct FCastedVote>  PlayerCastedVotesMap;                                     // 0x01A8(0x0050) (Transient)
	struct FName                                       ActiveVoteSessionId;                                      // 0x01F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       ActiveVoteId;                                             // 0x0200(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class VotingFramework.VoteResponderComponent");
		
		return ptr;
	}


	void ServerCastVoteSelection(const struct FUniqueNetIdRepl& InUserId, const struct FCastedVote& CastedVote);
	void CastManualVoteSelectionAtIndex(class APlayerState* InPlayerState, int SelectionIndex);
	void CastManualVoteSelection(class APlayerState* InPlayerState, const struct FGameplayTag& VoteSelection);
	void CastDefaultVoteSelection(class APlayerState* InPlayerState);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
