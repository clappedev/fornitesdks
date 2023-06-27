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

// BlueprintGeneratedClass GA_Ninja_Tactical_MeleeHitsHeal.GA_Ninja_Tactical_MeleeHitsHeal_C
// 0x00CE (0x0C50 - 0x0B82)
class UGA_Ninja_Tactical_MeleeHitsHeal_C : public UGAT_GenericTriggeredAbility_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0B82(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B88(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                                EventActivation;                                          // 0x0B90(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventComplete;                                            // 0x0B98(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UGameplayEffect*                             GE_Ninja_Tactical_MeleeHitsHeal;                          // 0x0BA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_Melee;                                                 // 0x0BA8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                MeleeCount;                                               // 0x0BC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastHitSwingTime;                                         // 0x0BCC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseHealValue;                                            // 0x0BD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FinalHealValue;                                           // 0x0BD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DataRowName;                                              // 0x0BD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayAttribute                          Attribute_HealingSourceBaseMultiplier;                    // 0x0BE0(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayAttribute                          Attribute_HealingSource;                                  // 0x0C18(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Ninja_Tactical_MeleeHitsHeal.GA_Ninja_Tactical_MeleeHitsHeal_C");
		
		return ptr;
	}


	void SetupAbility(class UAbilitySystemComponent* AbilitySystem);
	bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_Ninja_Tactical_MeleeHitsHeal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
