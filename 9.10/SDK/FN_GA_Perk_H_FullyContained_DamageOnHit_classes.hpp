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

// BlueprintGeneratedClass GA_Perk_H_FullyContained_DamageOnHit.GA_Perk_H_FullyContained_DamageOnHit_C
// 0x0010 (0x0A90 - 0x0A80)
class UGA_Perk_H_FullyContained_DamageOnHit_C : public UGAT_GenericTriggeredAbility_Perk_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A80(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                                Request_Reflection_Tag;                                   // 0x0A88(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Perk_H_FullyContained_DamageOnHit.GA_Perk_H_FullyContained_DamageOnHit_C");
		return ptr;
	}


	void K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData);
	void ExecuteUbergraph_GA_Perk_H_FullyContained_DamageOnHit(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
