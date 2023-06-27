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

// BlueprintGeneratedClass GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C
// 0x0110 (0x0BE8 - 0x0AD8)
class UGAB_InterrogatePlayer_Search_C : public UFortGameplayAbility_CarryPlayer
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0AE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AFortPlayerControllerAthena*                 PlayerController;                                         // 0x0AE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AFortPlayerPawn*                             InterrogatedPlayer;                                       // 0x0AF0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Anim_Search;                                              // 0x0AF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       InterrogateHolster;                                       // 0x0B00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LootTierGroupName;                                        // 0x0B08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortWorldItemDefinition*                    ItemDefinition;                                           // 0x0B10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumberToSpawn;                                            // 0x0B18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LootSpawnOffset;                                          // 0x0B1C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              MaxDropsInstance;                                         // 0x0B28(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                NumDropsInstance;                                         // 0x0B48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0B4C(0x0004) MISSED OFFSET
	struct FScalableFloat                              KeycardDropBias;                                          // 0x0B50(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UFortWorldItemDefinition*>            KeycardItemDefinitions;                                   // 0x0B70(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                T_Keycard_Yacht;                                          // 0x0B80(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                T_Keycard_OilRig;                                         // 0x0B88(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                T_Keycard_SharkIsland;                                    // 0x0B90(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                T_Keycard_HQ;                                             // 0x0B98(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                T_Keycard_MountainBase;                                   // 0x0BA0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                Timer_Interrogation;                                      // 0x0BA8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       T_ReticleHUD;                                             // 0x0BB0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                T_NPC;                                                    // 0x0BD0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UGameplayEffect*                             GE_Cooldown;                                              // 0x0BD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UGameplayEffect*                             GE_PickedUp;                                              // 0x0BE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C");
		
		return ptr;
	}


	void ApplyGameplayEffectToNPC(class UGameplayEffect* GameplayEffect);
	void DropKeycard();
	void GetKeycardToDrop(bool* HasKeycard, class UFortWorldItemDefinition** Output);
	void DropLoot();
	void ToggleReticleVisibility(bool Hide);
	void EndAbilityCleanup();
	void InitAbility();
	void Completed_6BBDC9B445D4280492A25E8E5EA7A53D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_6BBDC9B445D4280492A25E8E5EA7A53D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_6BBDC9B445D4280492A25E8E5EA7A53D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Added_9291D75D4A0949E1C5B7E49C1FD11F8B();
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void OnDied_Event_1(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum);
	void OnDied_Event_2(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum);
	void ExecuteUbergraph_GAB_InterrogatePlayer_Search(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
