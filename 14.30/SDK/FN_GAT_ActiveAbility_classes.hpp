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

// BlueprintGeneratedClass GAT_ActiveAbility.GAT_ActiveAbility_C
// 0x0029 (0x0AD1 - 0x0AA8)
class UGAT_ActiveAbility_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                                TC_AbilitiesGenericActiveAbilityActivate;                 // 0x0AB0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       N_SavedCollisionChannel;                                  // 0x0AB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UGameplayEffect*                             GE_KnockBackImmunity;                                     // 0x0AC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 GEH_KnockBackImmunity;                                    // 0x0AC8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bPlayerHolsterState;                                      // 0x0AD0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GAT_ActiveAbility.GAT_ActiveAbility_C");
		
		return ptr;
	}


	void EndAbilityWithReason(const struct FString& Reason);
	void SendHeroAbilityActivationEvent();
	void SetHolsterWeaponWithName(class AFortPawn* Target_Fort_Pawn, bool ShouldHolster, bool PlayEquipAnim, bool ShowDebugPrintName, bool* IsWeaponHolstered, bool* OperationSuccessful);
	bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload);
	void ActiveAbilitySetup(class UAbilitySystemComponent* AbilitySystemIn, class UAbilitySystemComponent** AbilitySystemOut);
	void SetKnockbackImmunity(bool ImmunityOn);
	void SetPawnCollision(class AFortPawn* FortPawn, bool CollisionOn);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GAT_ActiveAbility(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
