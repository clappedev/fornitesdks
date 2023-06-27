#pragma once

// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C
// 0x00D9 (0x0B89 - 0x0AB0)
class UGAB_GenericApplyKnockback_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AB0(0x0008) (Transient, DuplicateTransient)
	class UClass*                                      GE_TransferKnockback;                                     // 0x0AB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_KnockbackActive;                                       // 0x0AC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              KnockbackPropagationThreshold;                            // 0x0AC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0ACC(0x0004) MISSED OFFSET
	class UAnimMontage*                                KnockbackUpMontage;                                       // 0x0AD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       KnockbackUpMontageSection;                                // 0x0AD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                KnockbackDownMontage;                                     // 0x0AE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       KnockbackDownMontageSection;                              // 0x0AE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                KnockbackLandMontage;                                     // 0x0AF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       KnockbackLandMontageSection;                              // 0x0AF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                KnockbackLandToIdleMontage;                               // 0x0B00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       KnockbackLandToIdleMontageSection;                        // 0x0B08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                KnockbackLandToStunMontage;                               // 0x0B10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       KnockbackLandToStunMontageSection;                        // 0x0B18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugDraw;                                                // 0x0B20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugNumbers;                                             // 0x0B21(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugForceKnockbackValues;                                // 0x0B22(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bOrientToImpulse;                                         // 0x0B23(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 ActiveKnockback;                                          // 0x0B24(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     OrientDirection;                                          // 0x0B2C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     HitDirection;                                             // 0x0B38(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ImpulseDirectionVelocityOrRotation;                       // 0x0B44(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DebugLastLocation;                                        // 0x0B50(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0B5C(0x0004) MISSED OFFSET
	struct FGameplayTag                                TC_NPCStatusLockedInPlace;                                // 0x0B60(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              LockedInPlaceKnockbackAngle;                              // 0x0B68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LockedInPlaceKnockbackMagnitude;                          // 0x0B6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_RestoreControlResistance;                              // 0x0B70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_ImpactImmunity;                                        // 0x0B78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 ActiveImpactImmunity;                                     // 0x0B80(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bHasImpactImmunity;                                       // 0x0B88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C");
		return ptr;
	}


	void OnCancelled_07DF210D46EDFA929CDBFFB162E8E4CF();
	void OnInterrupted_07DF210D46EDFA929CDBFFB162E8E4CF();
	void OnBlendOut_07DF210D46EDFA929CDBFFB162E8E4CF();
	void OnCompleted_07DF210D46EDFA929CDBFFB162E8E4CF();
	void OnCancelled_D744890E4C485F1C80B3E7864AE506FF();
	void OnInterrupted_D744890E4C485F1C80B3E7864AE506FF();
	void OnBlendOut_D744890E4C485F1C80B3E7864AE506FF();
	void OnCompleted_D744890E4C485F1C80B3E7864AE506FF();
	void OnCancelled_1F181048470CEB2EB6CC648039C5913C();
	void OnInterrupted_1F181048470CEB2EB6CC648039C5913C();
	void OnBlendOut_1F181048470CEB2EB6CC648039C5913C();
	void OnCompleted_1F181048470CEB2EB6CC648039C5913C();
	void OnCancelled_BA9188C34C234A4C47306FA73AAF0583();
	void OnInterrupted_BA9188C34C234A4C47306FA73AAF0583();
	void OnBlendOut_BA9188C34C234A4C47306FA73AAF0583();
	void OnCompleted_BA9188C34C234A4C47306FA73AAF0583();
	void OnCancelled_8FC7071F40FA26EA05D9688FB3E623A0();
	void OnInterrupted_8FC7071F40FA26EA05D9688FB3E623A0();
	void OnBlendOut_8FC7071F40FA26EA05D9688FB3E623A0();
	void OnCompleted_8FC7071F40FA26EA05D9688FB3E623A0();
	void K2_OnEndAbility(bool* bWasCancelled);
	void OnReachedJumpApex();
	void SetupMontageSectionsAndOrientDirection();
	void OnPawnLanded(const struct FHitResult& Hit);
	void OnHitPawn(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void DebugLine();
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData);
	void ExecuteUbergraph_GAB_GenericApplyKnockback(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
