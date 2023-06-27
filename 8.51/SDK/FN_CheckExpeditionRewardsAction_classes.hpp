#pragma once

// Fortnite (8.51) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C
// 0x0080 (0x0320 - 0x02A0)
class ACheckExpeditionRewardsAction_C : public AFortScriptedAction
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x02A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FFrontEndRewards_Definition                 RewardsDefinition;                                        // 0x02B0(0x0060) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               ShowRewardsWidget;                                        // 0x0310(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0311(0x0007) MISSED OFFSET
	class UFrontEndRewards_Widget_C*                   Claimed_Reward_Widget;                                    // 0x0318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CheckExpeditionRewardsAction.CheckExpeditionRewardsAction_C");
		return ptr;
	}


	void Find_First_Valid_Player_Controller(class AFortPlayerController** FoundPC1);
	void Is_FrontEndRewards_Running(bool* bRunning);
	void HandleRewardsClaimError(class UFrontEndRewards_Widget_C* RewardsWidget);
	void Clear();
	void HandleRewardsClaimed(class UFrontEndRewards_Widget_C* RewardsWidget);
	void PopulateExpeditionRewards();
	void PopulateRewards();
	void OpenFrontEndRewards();
	void PopulateCompletedQuests();
	void GetCompletedQuests(TArray<class UFortQuestItem*>* Completed_Quests);
	void CompleteRewardsAction();
	void Execute(struct FFortScriptedActionParams Params);
	void Handle_Rewards_Running();
	void ExecuteUbergraph_CheckExpeditionRewardsAction(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
