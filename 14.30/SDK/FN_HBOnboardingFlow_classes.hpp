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

// BlueprintGeneratedClass HBOnboardingFlow.HBOnboardingFlow_C
// 0x0038 (0x0258 - 0x0220)
class AHBOnboardingFlow_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortQuestItemDefinition*                    PlayPeriodicEventMovieQuest;                              // 0x0230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayedPeriodicEventMovie;                                // 0x0238(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasRecheckedNeedToPlayPeriodicEventMovie;                // 0x0239(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x023A(0x0006) MISSED OFFSET
	struct FDataTableRowHandle                         PlayPeriodicEventCineObjective;                           // 0x0240(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortClientAnnouncement*                     PeriodicEventMovieAnnouncementClass;                      // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass HBOnboardingFlow.HBOnboardingFlow_C");
		
		return ptr;
	}


	void GetCampaignQuestManager(class UFortQuestManager** QuestManager);
	void RecheckNeedToPlayEventMovie(bool* WaitingToCheckAgain);
	bool NeedsToPlayEventMovie();
	void OnCanceled_856A325D44ECC73B857CE5B301E90D33();
	void OnAllClientsReady_856A325D44ECC73B857CE5B301E90D33();
	void OnFailure_50CD26324B96B121A5B49DA66113AE5D();
	void OnIgnored_50CD26324B96B121A5B49DA66113AE5D();
	void OnSuccess_50CD26324B96B121A5B49DA66113AE5D();
	void HandlePlayEventCine();
	void HandleClientEvent_PlayEventMovie(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void StartFlow();
	void ExecuteUbergraph_HBOnboardingFlow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
