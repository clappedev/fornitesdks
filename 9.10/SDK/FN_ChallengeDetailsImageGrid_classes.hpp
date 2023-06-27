#pragma once

// Fortnite (9.1) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ChallengeDetailsImageGrid.ChallengeDetailsImageGrid_C
// 0x0019 (0x0301 - 0x02E8)
class UChallengeDetailsImageGrid_C : public UAthenaChallengeDetailImageGrid
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             RolloutLoop;                                              // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              RolloutStartTime;                                         // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RolloutDuration;                                          // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsRevealRollout;                                          // 0x0300(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ChallengeDetailsImageGrid.ChallengeDetailsImageGrid_C");
		return ptr;
	}


	void OnLockedToOwnedTransitions(int Count, float TimeOffset, float AdditionalTime);
	void Rollout_Tick();
	void Start_Rollout_Tick(float Time);
	void Stop_Rollout_Tick();
	void OnFocusLost(struct FFocusEvent InFocusEvent);
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent);
	void OnOwnedToCompleteTransitions(int Count, float TimeOffset, float AdditionalTime);
	void Rollout_Sound_Failsafe();
	void ExecuteUbergraph_ChallengeDetailsImageGrid(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
