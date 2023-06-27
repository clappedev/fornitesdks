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

// BlueprintGeneratedClass GA_SlamDoorOpen_Instigator.GA_SlamDoorOpen_Instigator_C
// 0x0008 (0x0AB0 - 0x0AA8)
class UGA_SlamDoorOpen_Instigator_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_SlamDoorOpen_Instigator.GA_SlamDoorOpen_Instigator_C");
		
		return ptr;
	}


	void Completed_6B6649DA4284DCE7779BA98D6543CFFB(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_6B6649DA4284DCE7779BA98D6543CFFB(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_6B6649DA4284DCE7779BA98D6543CFFB(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_SlamDoorOpen_Instigator(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
