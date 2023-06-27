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

// BlueprintGeneratedClass GAB_Emote_Generic.GAB_Emote_Generic_C
// 0x005C (0x0B04 - 0x0AA8)
class UGAB_Emote_Generic_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              PostTriggerCancelDelay;                                   // 0x0AB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HideReticle;                                              // 0x0ABC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0ABD(0x0003) MISSED OFFSET
	struct FGameplayTagContainer                       ReticleHUDElementTags;                                    // 0x0AC0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       MontageOverrideSection;                                   // 0x0AE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAbilityStopped;                                          // 0x0AE8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0AE9(0x0003) MISSED OFFSET
	struct FName                                       EmoteHolsterId;                                           // 0x0AEC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHolstered;                                               // 0x0AF4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0AF5(0x0003) MISSED OFFSET
	struct FName                                       HUDElementVisibilityReasonName;                           // 0x0AF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                WaitForLoadedCount;                                       // 0x0B00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GAB_Emote_Generic.GAB_Emote_Generic_C");
		
		return ptr;
	}


	bool ShouldPlayFailedMontage(const struct FGameplayTagContainer& FailedReason);
	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags);
	void IsMontagePlaying(class UAnimMontage* Montage, bool* Result);
	void ForceStopMontage();
	void SetReticleVisibility(bool ShouldHide);
	void GetMontageToPlay(class UFortMontageItemDefinitionBase* EmoteAsset, TEnumAsByte<EFortCustomBodyType> BodyType, TEnumAsByte<EFortCustomGender> Gender);
	void GetBodyTypeAndGender(TEnumAsByte<EFortCustomBodyType>* BodyType, TEnumAsByte<EFortCustomGender>* Gender);
	void K2_OnEndAbility(bool bWasCancelled);
	void Completed_DE7019AA4E006879EDD264899869FEE2(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_DE7019AA4E006879EDD264899869FEE2(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_DE7019AA4E006879EDD264899869FEE2(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void OnLoaded_D5C2B0D14DEB9277D15965B97800FD1D(class UObject* Loaded);
	void OnLoaded_DA96775D40CD998BF2FF0085FE5AB126(class UObject* Loaded);
	void K2_ActivateAbility();
	void OnMontageStartedPlaying();
	void PlayInitialEmoteMontage();
	void NonMontageAsyncAssetsReady();
	void ExecuteUbergraph_GAB_Emote_Generic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
