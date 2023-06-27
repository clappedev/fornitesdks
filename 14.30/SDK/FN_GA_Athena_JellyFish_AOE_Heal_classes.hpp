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

// BlueprintGeneratedClass GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C
// 0x0110 (0x0BB8 - 0x0AA8)
class UGA_Athena_JellyFish_AOE_Heal_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               HealsHealth;                                              // 0x0AB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasHealthCap;                                             // 0x0AB9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0ABA(0x0002) MISSED OFFSET
	float                                              HealthHealAmount;                                         // 0x0ABC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TriggerDuration;                                          // 0x0AC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldHolster;                                            // 0x0AC4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0AC5(0x0003) MISSED OFFSET
	struct FName                                       ItemIDToHolster;                                          // 0x0AC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                GC_PotionConsumed;                                        // 0x0AD0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UGameplayEffect*                             GE_EffectToApply;                                         // 0x0AD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HealsShields;                                             // 0x0AE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasShieldCap;                                             // 0x0AE1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0AE2(0x0002) MISSED OFFSET
	float                                              ShieldHealAmount;                                         // 0x0AE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              Row_ShieldCap;                                            // 0x0AE8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              Row_ShieldAmount;                                         // 0x0B08(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              Row_HealthCap;                                            // 0x0B28(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              Row_HealthAmount;                                         // 0x0B48(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       Tags_FailedResponse;                                      // 0x0B68(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IgnoreCalcsForEffectApplication;                          // 0x0B88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AlwaysActivate;                                           // 0x0B89(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0B8A(0x0002) MISSED OFFSET
	struct FGameplayTag                                EquippingCue;                                             // 0x0B8C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              OverHealing;                                              // 0x0B94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HealthIsEffective;                                        // 0x0B98(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0B99(0x0007) MISSED OFFSET
	class UForceFeedbackEffect*                        ForceFeedback;                                            // 0x0BA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                ExplodeCue;                                               // 0x0BA8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPlayerPawn*                             TargetPawn;                                               // 0x0BB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C");
		
		return ptr;
	}


	void OnMontageTriggered();
	void MakeCustomMontageInfo();
	void SetupGE(struct FGameplayEffectSpecHandle* Effect_Out);
	void HealthCalc();
	void ShieldCalc();
	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags);
	void Completed_39BB44CE4B5ACBFAF09C9C960F1A3644(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_39BB44CE4B5ACBFAF09C9C960F1A3644(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_39BB44CE4B5ACBFAF09C9C960F1A3644(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_D9F6D24A49ABE8D7AAC30785C1A8DF0C(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_D9F6D24A49ABE8D7AAC30785C1A8DF0C(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_CommitExecute();
	void ExecuteUbergraph_GA_Athena_JellyFish_AOE_Heal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
