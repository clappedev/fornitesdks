#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x290 (0xB80 - 0x8F0)
// BlueprintGeneratedClass GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C
class UGA_Athena_Thrower_WithTrajectory_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8F0(0x8)(Transient, DuplicateTransient)
	struct FGameplayTag                          EventActivation;                                   // 0x8F8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          EventComplete;                                     // 0x900(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Prj_Grenade;                                       // 0x908(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GrenadeSpeedMin;                                   // 0x910(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GrenadeSpeedMax;                                   // 0x914(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GravityScale;                                      // 0x918(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DC7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            GrenadeSound;                                      // 0x920(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          EC_DefaultExplosion;                               // 0x928(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FFortGameplayEffectContainerSpec      EC_ReturnedEffect;                                 // 0x930(0x80)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        ExplosionRadius;                                   // 0x9B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AdditionalThrowAngle;                              // 0x9B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortFeedbackHandle                   GrenadeDialogFeedback;                             // 0x9B8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         GrenadeAmmo;                                       // 0x9D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PlasmaGrenades;                                    // 0x9D1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Flashbang;                                         // 0x9D2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3DC8[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               GrenadeTargetingOriginOffset;                      // 0x9D4(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortProjectileBase*                   DummyProjectile;                                   // 0x9E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DummyShouldBounce;                                 // 0x9E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3DC9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DummyBounciness;                                   // 0x9EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DummyFriction;                                     // 0x9F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TrajectoryUpdateInterval;                          // 0x9F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DummyMaxSpeed;                                     // 0x9F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DummyGravity;                                      // 0x9FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DummyTimeStep;                                     // 0xA00(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DummyExtent;                                       // 0xA04(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               GrenadeTargetingOriginOffset_Crouched;             // 0xA08(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InThrowWindup;                                     // 0xA14(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3DCA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Thrower_Trajectory_C*              TrajectoryIndicator;                               // 0xA18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                TrajectoryIndicatorClass;                          // 0xA20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortGameplayAbilityMontageInfo       ThrowWindupMontage;                                // 0xA28(0x60)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         AbilityKeyPressed;                                 // 0xA88(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3DCB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxSpeedPitch;                                     // 0xA8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinSpeedPitch;                                     // 0xA90(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DCC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEventData                    Event_Data;                                        // 0xA98(0xA8)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0xB40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxTossPitch;                                      // 0xB48(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxTrajectoryBounces;                              // 0xB4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PostThrowCancelDelay;                              // 0xB50(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PostThrowEndDelay;                                 // 0xB54(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortProjectileBase*                   ProjectileReference;                               // 0xB58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 NewVar_0;                                          // 0xB60(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Athena_Thrower_WithTrajectory_C");
		return Clss;
	}

	void GetProjectileTrajectoryPoints(TArray<struct FVector>* OutSplinePoints, TArray<struct FVector>* OutSplineTangents, class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn, float CallFunc_SelectFloat_ReturnValue, const struct FVector& CallFunc_SpawnLocationAndRotation_OutLoc, const struct FRotator& CallFunc_SpawnLocationAndRotation_OutRot, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_CalcGrenadeSpeedFromPitch_GrenadeSpeed, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_FMax_ReturnValue, TArray<struct FVector>& CallFunc_CalculateProjectileTrajectorySpline_OutSplinePoints, TArray<struct FVector>& CallFunc_CalculateProjectileTrajectorySpline_OutSplineTangents);
	TSubclassOf<class AFortProjectileTrajectory> GetProjectileTrajectoryActor();
	void GetOwningPlayer(class AFortPlayerPawn** Player_Pawn, bool CallFunc_IsValid_ReturnValue, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess);
	void CalcGrenadeSpeedFromPitch(float AimPitch, float* GrenadeSpeed, float CallFunc_NormalizeAxis_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue);
	void UpdateTrajectorySpline(TArray<struct FVector>& CallFunc_GetProjectileTrajectoryPoints_OutSplinePoints, TArray<struct FVector>& CallFunc_GetProjectileTrajectoryPoints_OutSplineTangents);
	void SetupDummyProjectile(class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AFortProjectileTrajectory* CallFunc_FinishSpawningActor_ReturnValue, class ABP_Thrower_Trajectory_C* K2Node_DynamicCast_AsBP_Thrower_Trajectory, bool K2Node_DynamicCast_bSuccess);
	void SpawnLocationAndRotation(struct FVector* OutLoc, struct FRotator* OutRot, bool Temp_bool_Variable, class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn, class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn1, const struct FRotator& CallFunc_GetDefaultTargetingRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakRotator_Roll1, float CallFunc_BreakRotator_Pitch1, float CallFunc_BreakRotator_Yaw1, const struct FVector& K2Node_Select_Default, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, float CallFunc_FMin_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue);
	void SetupGrenade(float AimPitch, class UClass** Base_Grenade, float* Projectile_Speed, struct FFortGameplayEffectContainerSpec* Explosion_Gameplay_Spec, float* Projectile_Gravity_Scale, float CallFunc_CalcGrenadeSpeedFromPitch_GrenadeSpeed, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue);
	void Completed_3599970A4E9210FEBE2B88AC88FE29D2(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_3599970A4E9210FEBE2B88AC88FE29D2(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_3599970A4E9210FEBE2B88AC88FE29D2(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void OnFinish_37B0203E4AC7F2A18426DE80F86A009C();
	void Destroyed_F93DCAF245C97EABF008A49FAE8CFF0B(struct FProjectileEventData& ProjectileData);
	void Exploded_F93DCAF245C97EABF008A49FAE8CFF0B(struct FProjectileEventData& ProjectileData);
	void Stopped_F93DCAF245C97EABF008A49FAE8CFF0B(struct FProjectileEventData& ProjectileData);
	void Bounced_F93DCAF245C97EABF008A49FAE8CFF0B(struct FProjectileEventData& ProjectileData);
	void Touched_F93DCAF245C97EABF008A49FAE8CFF0B(struct FProjectileEventData& ProjectileData);
	void Created_F93DCAF245C97EABF008A49FAE8CFF0B(struct FProjectileEventData& ProjectileData);
	void OnFinish_4151964B41B373DEE708F8A881431167();
	void OnFinish_1A815B544646D9E0ECCCA69DE38E5BAA();
	void OnCancelled_C38B946747458248EFD32B823552103E();
	void OnInterrupted_C38B946747458248EFD32B823552103E();
	void OnBlendOut_C38B946747458248EFD32B823552103E();
	void OnCompleted_C38B946747458248EFD32B823552103E();
	void Server_SpawnProjectile(const struct FVector& Location, const struct FRotator& Direction);
	void OnAbilityInputReleased();
	void K2_OnEndAbility(bool bWasCancelled);
	void CleanupTrajectoryDisplay();
	void K2_ActivateAbility();
	void TossGrenade();
	void InitTrajectoryVariables();
	void AthenaProjectileSpawned(class AFortProjectileBase* ProjectileReference);
	void FireMontage();
	void ExecuteUbergraph_GA_Athena_Thrower_WithTrajectory(int32 EntryPoint, bool CallFunc_K2_CommitAbility_ReturnValue, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, const struct FProjectileEventData& Temp_struct_Variable2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, float CallFunc_GetScaledCapsuleSize_OutRadius, float CallFunc_GetScaledCapsuleSize_OutHalfHeight, float CallFunc_FMax_ReturnValue, float CallFunc_GetGravityZ_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate10, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate11, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& K2Node_CustomEvent_Location, const struct FRotator& K2Node_CustomEvent_Direction, const struct FVector& CallFunc_SpawnLocationAndRotation_OutLoc, const struct FRotator& CallFunc_SpawnLocationAndRotation_OutRot, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, class UClass* CallFunc_SetupGrenade_Base_Grenade, float CallFunc_SetupGrenade_Projectile_Speed, const struct FFortGameplayEffectContainerSpec& CallFunc_SetupGrenade_Explosion_Gameplay_Spec, float CallFunc_SetupGrenade_Projectile_Gravity_Scale, float CallFunc_BreakRotator_Roll1, float CallFunc_BreakRotator_Pitch1, float CallFunc_BreakRotator_Yaw1, float CallFunc_CalcGrenadeSpeedFromPitch_GrenadeSpeed, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_IsStandalone_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool K2Node_Event_bWasCancelled, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate13, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue1, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate14, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate15, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue1, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn, class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn1, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn2, class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn3, class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn4, class UFortAbilityTask_SpawnProjectileAndWait* CallFunc_SpawnProjectileAndWait_ReturnValue, class AFortProjectileBase* CallFunc_BeginSpawningActor_SpawnedActor, bool CallFunc_BeginSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue3, float CallFunc_Multiply_FloatFloat_ReturnValue, class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn5, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue2, bool CallFunc_IsValid_ReturnValue4, class AFortProjectileBase* CallFunc_FinishSpawningActor_ReturnValue, class AFortProjectileBase* K2Node_CustomEvent_ProjectileReference, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue1, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, bool CallFunc_IsValid_ReturnValue5);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
