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

// BlueprintGeneratedClass GA_Ranged_Mustache_Attribute.GA_Ranged_Mustache_Attribute_C
// 0x0050 (0x0B30 - 0x0AE0)
class UGA_Ranged_Mustache_Attribute_C : public UFortGameplayAbility_RangedWeapon
{
public:
	struct FGameplayTag                                GT_EventWeaponFire;                                       // 0x0AE0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               ManualFireEvent;                                          // 0x0AE8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0AE9(0x0007) MISSED OFFSET
	struct FGameplayAttribute                          Attribute;                                                // 0x0AF0(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                MuzzleFlash;                                              // 0x0B28(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Ranged_Mustache_Attribute.GA_Ranged_Mustache_Attribute_C");
		
		return ptr;
	}


	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags);
	void GetEventData(const struct FGameplayTag& EventTag, struct FGameplayEventData* GameplayEventData);
	void K2_CommitExecute();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
