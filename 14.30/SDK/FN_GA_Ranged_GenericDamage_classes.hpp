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

// BlueprintGeneratedClass GA_Ranged_GenericDamage.GA_Ranged_GenericDamage_C
// 0x0009 (0x0AE9 - 0x0AE0)
class UGA_Ranged_GenericDamage_C : public UFortGameplayAbility_RangedWeapon
{
public:
	struct FGameplayTag                                GT_EventWeaponFire;                                       // 0x0AE0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               ManualFireEvent;                                          // 0x0AE8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Ranged_GenericDamage.GA_Ranged_GenericDamage_C");
		
		return ptr;
	}


	void GetEventData(const struct FGameplayTag& EventTag, struct FGameplayEventData* GameplayEventData);
	void K2_CommitExecute();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
