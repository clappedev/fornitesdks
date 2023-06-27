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

// BlueprintGeneratedClass GA_HeldObject_Place_Component.GA_HeldObject_Place_Component_C
// 0x0011 (0x0AB9 - 0x0AA8)
class UGA_HeldObject_Place_Component_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAnimMontage*                                Montage;                                                  // 0x0AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayMontage;                                             // 0x0AB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_HeldObject_Place_Component.GA_HeldObject_Place_Component_C");
		
		return ptr;
	}


	void Completed_FB73B2F540131A6D5CEF3FB7287803D4(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_FB73B2F540131A6D5CEF3FB7287803D4(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_FB73B2F540131A6D5CEF3FB7287803D4(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_HeldObject_Place_Component(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
