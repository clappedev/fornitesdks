#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0xE1 (0x9D1 - 0x8F0)
// BlueprintGeneratedClass GA_SpookyMist_PassiveSetup.GA_SpookyMist_PassiveSetup_C
class UGA_SpookyMist_PassiveSetup_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8F0(0x8)(Transient, DuplicateTransient)
	class APlayerPawn_Athena_C*                  PlayerPawn;                                        // 0x8F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           LoopingGC;                                         // 0x900(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GC_TrailFX;                                        // 0x908(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GC_Looping;                                        // 0x910(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           MoveSpeedBuff;                                     // 0x918(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        AbilityDuration;                                   // 0x920(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        DamageShouldEndAbility;                            // 0x940(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                GE_MoveSpeed;                                      // 0x960(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          ExitRecovery;                                      // 0x968(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 AllowInteractTags;                                 // 0x970(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 NoInteractTags;                                    // 0x990(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        ShouldAllowInteract;                               // 0x9B0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         ForcedExit;                                        // 0x9D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_SpookyMist_PassiveSetup_C");
		return Clss;
	}

	void UnBlockAbilityTags(float CallFunc_GetValueAtLevel_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortAbilitySystemComponent* K2Node_DynamicCast_AsFort_Ability_System_Component, bool K2Node_DynamicCast_bSuccess);
	void SetBlockAbilityTags(float CallFunc_GetValueAtLevel_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortAbilitySystemComponent* K2Node_DynamicCast_AsFort_Ability_System_Component, bool K2Node_DynamicCast_bSuccess);
	void EventReceived_3CB208084D361EC6BA9A619CA44CFB21(const struct FGameplayEventData& Payload);
	void K2_ActivateAbility();
	void WhenDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void On_DBNO();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_SpookyMist_PassiveSetup(int32 EntryPoint, const struct FGameplayEventData& Temp_struct_Variable, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, class AFortPlayerControllerGameplay* K2Node_DynamicCast_AsFort_Player_Controller_Gameplay, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue1, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, const struct FGameplayEventData& K2Node_CustomEvent_Payload, class AActor* K2Node_CustomEvent_DamagedActor, float K2Node_CustomEvent_Damage, class AController* K2Node_CustomEvent_InstigatedBy, class AActor* K2Node_CustomEvent_DamageCauser, const struct FVector& K2Node_CustomEvent_HitLocation, class UPrimitiveComponent* K2Node_CustomEvent_FHitComponent, class FName K2Node_CustomEvent_BoneName, const struct FVector& K2Node_CustomEvent_Momentum, float CallFunc_GetValueAtLevel_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue1, bool K2Node_Event_bWasCancelled);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
