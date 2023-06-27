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

// Class MantisRuntime.FortAbilityTask_ApplyRootMotionMantisForce
// 0x0020 (0x00D8 - 0x00B8)
class UFortAbilityTask_ApplyRootMotionMantisForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B8(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty MantisRuntime.FortAbilityTask_ApplyRootMotionMantisForce.OnFinish
	float                                              Duration;                                                 // 0x00C8(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
	class UAnimMontage*                                TechniqueMontage;                                         // 0x00D0(0x0008) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MantisRuntime.FortAbilityTask_ApplyRootMotionMantisForce");
		
		return ptr;
	}


	class UFortAbilityTask_ApplyRootMotionMantisForce* STATIC_ApplyRootMotionMantisForce(class UGameplayAbility* OwningAbility, float Duration, class UAnimMontage* TechniqueMontage);
};


// Class MantisRuntime.FortAnimNotify_Mantis
// 0x0008 (0x0040 - 0x0038)
class UFortAnimNotify_Mantis : public UAnimNotify
{
public:
	EFortMantisNotifyEvent                             MantisNotifyEvent;                                        // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EFortMantisBranchRule                              MantisBranchRule;                                         // 0x0039(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EFortMantisBranchPath                              MantisBranchPath;                                         // 0x003A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x003B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MantisRuntime.FortAnimNotify_Mantis");
		
		return ptr;
	}

};


// Class MantisRuntime.FortAnimNotifyState_Mantis
// 0x0010 (0x0040 - 0x0030)
class UFortAnimNotifyState_Mantis : public UAnimNotifyState
{
public:
	EFortMantisNotifyWindow                            MantisNotifyWindow;                                       // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	struct FGameplayTag                                MantisNotifyTag;                                          // 0x0034(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MantisRuntime.FortAnimNotifyState_Mantis");
		
		return ptr;
	}

};


// Class MantisRuntime.FortGameplayAbility_Mantis
// 0x0020 (0x0AC8 - 0x0AA8)
class UFortGameplayAbility_Mantis : public UFortGameplayAbility
{
public:
	class UFortMantisPawnComponent*                    MantisPawnComponent;                                      // 0x0AA8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAbilityTask_PlayMontageAndWait*             MontageTask;                                              // 0x0AB0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UFortAbilityTask_ApplyRootMotionMantisForce* RootMotionTask;                                           // 0x0AB8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0AC0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MantisRuntime.FortGameplayAbility_Mantis");
		
		return ptr;
	}


	void OnMontageFinished();
	void OnMontageCancelled();
	void BP_OnMantisTechniqueHit(const struct FGameplayAbilityTargetDataHandle& TargetDataHandle, const struct FGameplayTag& ApplicationTag);
};


// Class MantisRuntime.FortItemLayerAnimInstance_UncleBrolly
// 0x0070 (0x0380 - 0x0310)
class UFortItemLayerAnimInstance_UncleBrolly : public UFortItemLayerAnimInstance
{
public:
	struct FCachedAnimStateArray                       UmbrellaGliderOpenStateDataArray;                         // 0x0310(0x0018) (Edit)
	struct FVector                                     WrapTranslation;                                          // 0x0328(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FRotator                                    WrapRotation;                                             // 0x0334(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FRotator                                    RootRotationOffset;                                       // 0x0340(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              LandingPredictedTimer;                                    // 0x034C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bShouldUpdateYawCorrection;                               // 0x0350(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bWasAcceleratingBeforeDodge;                              // 0x0351(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0352(0x0002) MISSED OFFSET
	float                                              UncleBrollyDeployCurveValue;                              // 0x0354(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              DashChargeTier;                                           // 0x0358(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              DashChargeAdditivePlayrate;                               // 0x035C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsUmbrellaFailing;                                       // 0x0360(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsMeleeGuarding;                                         // 0x0361(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsSprinting;                                             // 0x0362(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsInAir;                                                 // 0x0363(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsLandingPredicted;                                      // 0x0364(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsJumping;                                               // 0x0365(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsDodging;                                               // 0x0366(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsDodgingEast;                                           // 0x0367(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsDodgingSouth;                                          // 0x0368(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsDodgingWest;                                           // 0x0369(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsDashing;                                               // 0x036A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsDashCharging;                                          // 0x036B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsDashPredictingEnd;                                     // 0x036C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsChargeTier1;                                           // 0x036D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsChargeTier2;                                           // 0x036E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsChargeTier3;                                           // 0x036F(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bMeleeGuardingOrUmbrellaFailing;                          // 0x0370(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bTransition_Default_to_GuardLoop;                         // 0x0371(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bTransition_Default_to_GuardIntro;                        // 0x0372(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bTransition_GuardIntro_to_Default;                        // 0x0373(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bUpperBodyShouldPassThrough;                              // 0x0374(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bUmbrellaGliderIsOpen;                                    // 0x0375(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xA];                                       // 0x0376(0x000A) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MantisRuntime.FortItemLayerAnimInstance_UncleBrolly");
		
		return ptr;
	}

};


// Class MantisRuntime.FortMantisData
// 0x0050 (0x0080 - 0x0030)
class UFortMantisData : public UDataAsset
{
public:
	bool                                               bDetachCharacterRotationFromCamera;                       // 0x0030(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              ReattachCharacterRotationBlendTime;                       // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReattachCharacterRotationBlendExponent;                   // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WindupCharacterRotationRate;                              // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExecutionCharacterRotationRate;                           // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecoveryCharacterRotationRate;                            // 0x0044(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortGameplayAbility_Mantis*                 TechniqueAbility;                                         // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FFortGameplayEffectContainer>        TechniqueAdditionEffectContainers;                        // 0x0050(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FFortMantisTechniqueData>            Techniques;                                               // 0x0060(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FFortMantisTechniqueBranch>          Branches;                                                 // 0x0070(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MantisRuntime.FortMantisData");
		
		return ptr;
	}

};


// Class MantisRuntime.FortMantisPawnComponent
// 0x0160 (0x0210 - 0x00B0)
class UFortMantisPawnComponent : public UPawnComponent
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x00B0(0x0060) MISSED OFFSET
	TMap<class UAnimMontage*, struct FFortMantisMontageData> MontageDataMap;                                           // 0x0110(0x0050)
	class UFortMantisData*                             MantisData;                                               // 0x0160(0x0008) (ZeroConstructor, IsPlainOldData)
	class AFortWeapon*                                 Weapon;                                                   // 0x0168(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xA0];                                      // 0x0170(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MantisRuntime.FortMantisPawnComponent");
		
		return ptr;
	}


	void OnPostPhysicsRotation(class UCharacterMovementComponent* CharMoveComp, float DeltaSeconds);
	void OnCharacterMovementPreUpdate(class UCharacterMovementComponent* CharMoveComp, float DeltaSeconds);
};


// Class MantisRuntime.FortMantisWeaponComponent
// 0x0010 (0x00C0 - 0x00B0)
class UFortMantisWeaponComponent : public UFortWeaponComponent
{
public:
	class UFortMantisData*                             MantisData;                                               // 0x00B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortMantisPawnComponent*                    MantisPawnComponent;                                      // 0x00B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MantisRuntime.FortMantisWeaponComponent");
		
		return ptr;
	}

};


// Class MantisRuntime.UncleBrollyWeaponAnimInstance
// 0x0030 (0x02F0 - 0x02C0)
class UUncleBrollyWeaponAnimInstance : public UAnimInstance
{
public:
	struct FRotator                                    UmbrellaRotation;                                         // 0x02C0(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              UmbrellaSpinSpeed;                                        // 0x02CC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              BlockDeployEndPlayrate;                                   // 0x02D0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              BlockDeployEndStartPosition;                              // 0x02D4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsDodging;                                               // 0x02D8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsPlayingMeleeAnim;                                      // 0x02D9(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsUmbrellaFailing;                                       // 0x02DA(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsMeleeGuarding;                                         // 0x02DB(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsInAir;                                                 // 0x02DC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsDashing;                                               // 0x02DD(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsSprinting;                                             // 0x02DE(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsPredictingEnd;                                         // 0x02DF(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsDashCharging;                                          // 0x02E0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsDashPredictingEnd;                                     // 0x02E1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bInAirAndMeleeGuarding;                                   // 0x02E2(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bTransition_Default_to_DeployStart;                       // 0x02E3(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bTransition_DeployStart_to_Default;                       // 0x02E4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bTransition_Fail_to_FailToDeploy;                         // 0x02E5(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bTransition_FailLoop_to_DeployEnd;                        // 0x02E6(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x9];                                       // 0x02E7(0x0009) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class MantisRuntime.UncleBrollyWeaponAnimInstance");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
