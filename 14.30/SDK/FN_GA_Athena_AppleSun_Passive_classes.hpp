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

// BlueprintGeneratedClass GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C
// 0x0108 (0x0BB0 - 0x0AA8)
class UGA_Athena_AppleSun_Passive_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTagRequirements                    Falling_Tag;                                              // 0x0AB0(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UFortWorldItemDefinition*                    ItemDef;                                                  // 0x0AF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayAttribute                          Attribute;                                                // 0x0AF8(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               HasFallImmunity;                                          // 0x0B30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0B31(0x0007) MISSED OFFSET
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0B38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ThrowDownMontage;                                         // 0x0B40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanAirbagByJumping;                                       // 0x0B48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Throwing;                                                 // 0x0B49(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PreviousCanAirbag;                                        // 0x0B4A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCloseToGround;                                          // 0x0B4B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeSinceGrounded;                                        // 0x0B4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UpdateInterval;                                           // 0x0B50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxVelJumpPrompt;                                         // 0x0B54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinVelJumpPrompt;                                         // 0x0B58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinTimeSinceGroundedForJumpPrompt;                        // 0x0B5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InInventory;                                              // 0x0B60(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0B61(0x0007) MISSED OFFSET
	class UFortWorldItemDefinition*                    ItemDef_VR;                                               // 0x0B68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       Recharging_Tags;                                          // 0x0B70(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       VR_tag;                                                   // 0x0B90(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C");
		
		return ptr;
	}


	void HasEnoughStacks(bool* Return);
	void EventReceived_88451BF04FEA60EEE79926856BA05A42(const struct FGameplayEventData& Payload);
	void Completed_E2E08D9245B8C2437B278CACDF6A674C(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_E2E08D9245B8C2437B278CACDF6A674C(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_E2E08D9245B8C2437B278CACDF6A674C(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_6CF7877A4087E6390DA1828899D54EFB(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_6CF7877A4087E6390DA1828899D54EFB(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_6CF7877A4087E6390DA1828899D54EFB(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void SpawnProjectile();
	void UpdateCanCrashpad();
	void UpdateIsCloseToGround();
	void Throw_Server();
	void Remove_Item_From_Inventory_();
	void ExecuteUbergraph_GA_Athena_AppleSun_Passive(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
