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

// BlueprintGeneratedClass GA_Vehicle_ExitHoldEvent.GA_Vehicle_ExitHoldEvent_C
// 0x001C (0x0AC4 - 0x0AA8)
class UGA_Vehicle_ExitHoldEvent_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              TriggerDuration;                                          // 0x0AB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                EquippingCue;                                             // 0x0ABC(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Vehicle_ExitHoldEvent.GA_Vehicle_ExitHoldEvent_C");
		
		return ptr;
	}


	void EventReceived_7AE1D485464AEC7EB429C3877D33AF69(const struct FGameplayEventData& Payload);
	void EventReceived_209BF560404B83EBEAA8DD8090C443AC(const struct FGameplayEventData& Payload);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_Vehicle_ExitHoldEvent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
