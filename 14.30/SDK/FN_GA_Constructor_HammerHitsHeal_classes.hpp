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

// BlueprintGeneratedClass GA_Constructor_HammerHitsHeal.GA_Constructor_HammerHitsHeal_C
// 0x0028 (0x0C78 - 0x0C50)
class UGA_Constructor_HammerHitsHeal_C : public UGA_Ninja_Tactical_MeleeHitsHeal_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C50(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTagContainer                       TC_RequiredTags;                                          // 0x0C58(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Constructor_HammerHitsHeal.GA_Constructor_HammerHitsHeal_C");
		
		return ptr;
	}


	void SetupAbility(class UAbilitySystemComponent* AbilitySystem);
	bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_Constructor_HammerHitsHeal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
