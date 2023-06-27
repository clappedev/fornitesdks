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

// BlueprintGeneratedClass GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C
// 0x0290 (0x0D38 - 0x0AA8)
class UGAB_InterrogatePlayer_Reveal_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AFortPlayerControllerAthena*                 PlayerController;                                         // 0x0AB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AFortPlayerPawn*                             InterrogatedPlayer;                                       // 0x0AC0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Anim_Reveal;                                              // 0x0AC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Anim_End;                                                 // 0x0AD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RevealHolster;                                            // 0x0AD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                GC_Reveal;                                                // 0x0AE0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              MarkDurationPlayer;                                       // 0x0AE8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              MarkDurationNPC;                                          // 0x0B08(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              MarkRadius;                                               // 0x0B28(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AActor*>                              SquadmatesToMark;                                         // 0x0B48(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	struct FTimerHandle                                Timer_Reveal;                                             // 0x0B58(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                T_NPC_Mang;                                               // 0x0B60(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              RevealDuration;                                           // 0x0B68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EndAbilityDelay;                                          // 0x0B6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SweepDelay;                                               // 0x0B70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Cancelled;                                                // 0x0B74(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Ending;                                                   // 0x0B75(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0B76(0x0002) MISSED OFFSET
	struct FString                                     IndicatorGroup;                                           // 0x0B78(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UFortCameraMode*                             CameraMode;                                               // 0x0B88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              ActorsToMark;                                             // 0x0B90(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	struct FGameplayTagContainer                       T_ReticleHUD;                                             // 0x0BA0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       NPCTagsToMark;                                            // 0x0BC0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       ChestTagsToMark;                                          // 0x0BE0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       GameplayItemTagsToMark;                                   // 0x0C00(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       ParticleSystemParamName;                                  // 0x0C20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             IndicatedPS;                                              // 0x0C28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  IndicatedSound;                                           // 0x0C30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PSOffset;                                                 // 0x0C38(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       PSVectorParamName;                                        // 0x0C44(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PSDBNOOffset;                                             // 0x0C4C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       EnemyStencilName;                                         // 0x0C58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       TreasureChestStencilName;                                 // 0x0C60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StepTime;                                                 // 0x0C68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               testbool;                                                 // 0x0C6C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0C6D(0x0003) MISSED OFFSET
	struct FScalableFloat                              EnemyStencilID;                                           // 0x0C70(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              StencilStepTime;                                          // 0x0C90(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              bUseDefaultStencil;                                       // 0x0CB0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              IndicatorStepTime;                                        // 0x0CD0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagQuery                           NPCGameplayTagQuery;                                      // 0x0CF0(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C");
		
		return ptr;
	}


	void ToggleReticleVisibility(bool Hide);
	void Reveal();
	void EndAbilityCleanup();
	void InitAbility();
	void Completed_23F3C2DB411862D627ACFCA8233F7B33(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_23F3C2DB411862D627ACFCA8233F7B33(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_23F3C2DB411862D627ACFCA8233F7B33(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_3C2C8C224B62B00BDEEAF5AF38A401C1(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_3C2C8C224B62B00BDEEAF5AF38A401C1(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_3C2C8C224B62B00BDEEAF5AF38A401C1(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void OnFinish_68B3C6D14B44CCD3170ABDA038C1203E();
	void K2_OnEndAbility(bool bWasCancelled);
	void OnDied_Event_2(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum);
	void EndInterrogation();
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GAB_InterrogatePlayer_Reveal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
