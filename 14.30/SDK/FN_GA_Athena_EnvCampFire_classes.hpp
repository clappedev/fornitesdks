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

// BlueprintGeneratedClass GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C
// 0x0148 (0x0BF0 - 0x0AA8)
class UGA_Athena_EnvCampFire_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              TimeBetweenHeals;                                         // 0x0AB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0AB4(0x0004) MISSED OFFSET
	struct FTimerHandle                                Timer_ApplyHeal;                                          // 0x0AB8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                MaxHeals;                                                 // 0x0AC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentHeals;                                             // 0x0AC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0AC8(0x0008) MISSED OFFSET
	struct FTransform                                  CustomTargeting;                                          // 0x0AD0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetingHeightOffset;                                    // 0x0B00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0B04(0x0004) MISSED OFFSET
	struct FScalableFloat                              Row_MaxHeals;                                             // 0x0B08(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              Row_TimeBetweenHeals;                                     // 0x0B28(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              StokeTimeBetweenHeals;                                    // 0x0B48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0B4C(0x0004) MISSED OFFSET
	struct FScalableFloat                              Row_StokeDuration;                                        // 0x0B50(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              Row_Stoke_TimeBetweenHeals;                               // 0x0B70(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              Row_Stoke_MaxHeals_Extension;                             // 0x0B90(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsStoked;                                                 // 0x0BB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0BB1(0x0007) MISSED OFFSET
	struct FScalableFloat                              Row_HealPerTick;                                          // 0x0BB8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                GC_StokedLoop;                                            // 0x0BD8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                GC_StokeBurst;                                            // 0x0BE0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AB_BGA_Athena_EnvCampFire_C*                 Campfire;                                                 // 0x0BE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C");
		
		return ptr;
	}


	void SetBalanceValues(bool Stoke);
	void SetCustomTargetingTrans();
	struct FTransform GetCustomAbilitySourceTransform();
	void Cancelled_EDAB937443020D47385625B06E892DF0(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_EDAB937443020D47385625B06E892DF0(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void EventReceived_63E2BB3E47E5E63C7A4A0A8C45DC23E4(const struct FGameplayEventData& Payload);
	void K2_OnEndAbility(bool bWasCancelled);
	void ApplyHeal();
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void FinishStoke();
	void SetIsStoked(bool IsStoked);
	void EndEvent();
	void ForceEndAbility();
	void ExecuteUbergraph_GA_Athena_EnvCampFire(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
