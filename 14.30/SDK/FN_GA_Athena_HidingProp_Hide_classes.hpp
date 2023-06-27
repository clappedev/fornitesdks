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

// BlueprintGeneratedClass GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C
// 0x018C (0x0C34 - 0x0AA8)
class UGA_Athena_HidingProp_Hide_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AB_HidingProp_C*                             HidingProp;                                               // 0x0AB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Enter_Anim_Montage;                                       // 0x0AC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                RustleCue;                                                // 0x0AC8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                GC_Wobble;                                                // 0x0AD0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimMontage*                                Exit_Anim_Montage;                                        // 0x0AD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              ExitBlockShootDelay;                                      // 0x0AE0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRotator                                    ControlRotation;                                          // 0x0B00(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0B0C(0x0004) MISSED OFFSET
	class UCameraModifier*                             CameraModifier;                                           // 0x0B10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_Quest;                                                 // 0x0B18(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_PlayerOwned;                                           // 0x0B38(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              RustleMinDelay;                                           // 0x0B58(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              RustleMaxDelay;                                           // 0x0B78(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              RustlePerWobble;                                          // 0x0B98(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPlayerController*                       PlayerController;                                         // 0x0BB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0BC0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.NewEventDispatcher_1
	TArray<struct FGameplayTag>                        BlockExitTags;                                            // 0x0BD0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       HidingInPropTag;                                          // 0x0BE0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       GettingInPropTag;                                         // 0x0C00(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                CurieBurningTag;                                          // 0x0C20(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               AllowCosmetics;                                           // 0x0C28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0C29(0x0003) MISSED OFFSET
	struct FGameplayTag                                DisallowCosmeticsTag;                                     // 0x0C2C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C");
		
		return ptr;
	}


	void SetCosmeticsAllowed(bool Allowed);
	void Completed_75B60D4B43DAA553E4C21EA3D2E3AD03(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_75B60D4B43DAA553E4C21EA3D2E3AD03(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_75B60D4B43DAA553E4C21EA3D2E3AD03(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void OnTimedOutAndDestinationReached_859E251740F1C46B914344A9FC343B19();
	void OnTimedOut_859E251740F1C46B914344A9FC343B19();
	void OnTimedOutAndDestinationReached_8010F4C64221E8F497C6559558420C32();
	void OnTimedOut_8010F4C64221E8F497C6559558420C32();
	void Added_F049BFC743FE176042ECD98641AFE2B9();
	void Added_35C56E354FE08855A837E0BDFB150F20();
	void Added_CD24BC554E955808A88A5B809807A94E();
	void Added_E60D990647FDAB06895E738C7A2BAE7E();
	void Added_D329D9924DF9DF1B79D0738C6CB8EBA1();
	void Added_1D4A49874AC422976CAC2C9155DDA736();
	void Added_75ABACB94D60139EB5D79798D471DB17();
	void EventReceived_8C4C6D7442A0B18F41B269995833ED85(const struct FGameplayEventData& Payload);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void K2_OnEndAbility(bool bWasCancelled);
	void RustleLoop();
	void End();
	void ExecuteUbergraph_GA_Athena_HidingProp_Hide(int EntryPoint);
	void NewEventDispatcher_0__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
