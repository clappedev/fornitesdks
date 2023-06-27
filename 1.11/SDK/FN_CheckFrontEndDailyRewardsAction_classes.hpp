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

// BlueprintGeneratedClass CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C
// 0x0012 (0x03DA - 0x03C8)
class ACheckFrontEndDailyRewardsAction_C : public AFortScriptedAction
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C8(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLastStateWasLoginScreen;                                 // 0x03D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ESubGame                                           NewVar_1;                                                 // 0x03D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CheckFrontEndDailyRewardsAction.CheckFrontEndDailyRewardsAction_C");
		return ptr;
	}


	void IsFrontEndRewards_Running(bool* IsRunning);
	void Daily_Rewards_Open(bool* bRunning);
	void CompleteDailyRewardAction();
	void ShowDailyRewards();
	void UserConstructionScript();
	void Execute(struct FFortScriptedActionParams* Params);
	void HandleClientEvent_FinishedModalQueue(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void ExecuteUbergraph_CheckFrontEndDailyRewardsAction(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
