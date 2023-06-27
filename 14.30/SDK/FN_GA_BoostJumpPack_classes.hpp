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

// BlueprintGeneratedClass GA_BoostJumpPack.GA_BoostJumpPack_C
// 0x0180 (0x0C48 - 0x0AC8)
class UGA_BoostJumpPack_C : public UFortGameplayAbility_JumpBoostPack
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AC8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Jump_Multiple;                                            // 0x0AD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Basic_Jump_Z_Adjust;                                      // 0x0AD4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FinalJumpHeight;                                          // 0x0AE0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0AEC(0x0004) MISSED OFFSET
	struct FGameplayEventData                          EventTriggerData;                                         // 0x0AF0(0x00B0) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bJumpButtonHeld;                                          // 0x0BA0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAtApex;                                                  // 0x0BA1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0BA2(0x0002) MISSED OFFSET
	struct FActiveGameplayEffectHandle                 JetpackEffectHandle;                                      // 0x0BA4(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0BAC(0x0004) MISSED OFFSET
	class AFortPlayerPawn*                             FortPlayerPawn;                                           // 0x0BB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              FuelFudge;                                                // 0x0BB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 RegenEffectHandle;                                        // 0x0BBC(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bRegenEffectActive;                                       // 0x0BC4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0BC5(0x0003) MISSED OFFSET
	struct FGameplayTagContainer                       ExecuteTags;                                              // 0x0BC8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                JumpButtonHeldCount;                                      // 0x0BE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0BEC(0x0004) MISSED OFFSET
	struct FGameplayTagContainer                       ReleaseTags;                                              // 0x0BF0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              TimeStartedHovering;                                      // 0x0C10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeStartedFalling;                                       // 0x0C14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EndHoverDelay;                                            // 0x0C18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EndFallingDelay;                                          // 0x0C1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasDied;                                                 // 0x0C20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0C21(0x0003) MISSED OFFSET
	struct FGameplayTag                                BoostCue;                                                 // 0x0C24(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                BoostJumpPackCue;                                         // 0x0C2C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0C34(0x0004) MISSED OFFSET
	class UGameplayEffect*                             JetpackInUseEffect;                                       // 0x0C38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAbilityTask_WaitGameplayTagAdded*           HidingInPropTagTask;                                      // 0x0C40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_BoostJumpPack.GA_BoostJumpPack_C");
		
		return ptr;
	}


	bool NotInHidingSpot();
	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags);
	void Handle_Jetpack_Equipped();
	bool Reasons_To_Reset_on_Transition(const struct FGameplayTag& Tag);
	class AFortPlayerPawn* Get_Player_Pawn(class UObject* Object);
	bool IsCurrentlyDead(const struct FGameplayTag& TagOne);
	void Reengage_Falling_Movement();
	void Reengage_Hovering_Movement();
	void SavePlayerPawn();
	void OnAbilityCanceled();
	void OnFuelIsEmpty();
	void OnFuelIsFull();
	void Reset_Toggle_Input_State();
	void ProcessTriggerData(const struct FGameplayTag& TagOne);
	void Stop_Regen_Effect();
	void Start_Regen_Effect();
	void Consider_Stopping_Regen_Effect();
	void Consider_Starting_Regen_Effect();
	bool IsBoostAllowed();
	void K2_OnEndAbility(bool bWasCancelled);
	bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload);
	void GetMaxFuel(float* MaxFuel);
	void GetFuel(float* Fuel);
	void Setup_PlayerPawn();
	bool IsUsingJetpackEffectActive();
	void HandleCurrentBoostStateChanged(EJumpBoostPackState PreviousState, EJumpBoostPackState CurrentState);
	void SetCurrentBoostState(EJumpBoostPackState NewState);
	void PotentiallyEndHovering(bool bForceEndHovering);
	void Setup_Notify_at_Apex(bool bNotifyApex);
	void HandleIdle(bool bForceEndHovering);
	void HandleFalling();
	void HandleHovering();
	void ResetTransitionVariables(bool bForceEndHovering);
	void TransitionFromFalling(TEnumAsByte<Enum_BoostJumpStates>* TargetBoostState);
	void TransitionFromHovering(TEnumAsByte<Enum_BoostJumpStates>* TargetBoostState);
	void TransitionFromBoost(TEnumAsByte<Enum_BoostJumpStates>* TargetBoostState);
	void TransitionFromIdle(TEnumAsByte<Enum_BoostJumpStates>* TargetBoostState);
	void ProcessAbilityStateMachine();
	void DetermineStateToTransitionTo(TEnumAsByte<Enum_BoostJumpStates>* BoostState);
	void SetupTransitionVariables(const struct FGameplayTag& Tag);
	void HandleBoostJump();
	void SetJumpHeight(class AFortPlayerPawn* Pawn, class AFortPlayerPawn** Pawn_Out, struct FVector* Jump_Height);
	void On_Reached_Jump_Apex();
	void OnPawnLanded(const struct FHitResult& Hit);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void OnCurrentStateChanged(EJumpBoostPackState InPreviousState, EJumpBoostPackState InCurrentState);
	void Delay_ProcessAbilityStateMachine();
	void OnSavedPawnChanged_(class AFortPlayerPawn* PreviousPawn, class AFortPlayerPawn* NewPawn);
	void OnEnterVehicle();
	void ExecuteUbergraph_GA_BoostJumpPack(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
