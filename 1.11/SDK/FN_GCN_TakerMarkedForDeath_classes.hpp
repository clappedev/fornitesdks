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

// BlueprintGeneratedClass GCN_TakerMarkedForDeath.GCN_TakerMarkedForDeath_C
// 0x0049 (0x04D9 - 0x0490)
class AGCN_TakerMarkedForDeath_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0490(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    OverHeadEffect;                                           // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFortMiniMapComponent*                       MiniMapCrosshair;                                         // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFortMiniMapComponent*                       MiniMapIconBackground;                                    // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FFortFeedbackHandle                         TakerFeedbackEvent;                                       // 0x04B0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              TakerFeedbackRepeatDelay;                                 // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TakerFeedbackInitialDelay;                                // 0x04CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                TC_GameplayStatusStun;                                    // 0x04D0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               PlayerIsStunned;                                          // 0x04D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCN_TakerMarkedForDeath.GCN_TakerMarkedForDeath_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void SoulSuckCheck();
	void ExecuteUbergraph_GCN_TakerMarkedForDeath(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
