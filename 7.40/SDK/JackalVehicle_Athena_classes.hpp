#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x150 (0xEA0 - 0xD50)
// BlueprintGeneratedClass JackalVehicle_Athena.JackalVehicle_Athena_C
class AJackalVehicle_Athena_C : public AFortAthenaJackalVehicle
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xD50(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortVehicleAudioVoice*                AudioWind;                                         // 0xD58(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       AudioLand;                                         // 0xD60(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortVehicleAudioVoice*                AudioBoost;                                        // 0xD68(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortVehicleAudioVoice*                AudioMovement;                                     // 0xD70(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       AudioJump;                                         // 0xD78(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_Hoverboard_Lightbeams;                          // 0xD80(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              LoopingFX;                                         // 0xD88(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              BoostFX;                                           // 0xD90(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   BackLight;                                         // 0xD98(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   FrontLight;                                        // 0xDA0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortCollisionAudioComponent*          FortCollisionAudioImpacts;                         // 0xDA8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         OverlapVolume;                                     // 0xDB0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       DriverPawn;                                        // 0xDB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     DrivingPlayerController;                           // 0xDC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       LocalPlayerPawn;                                   // 0xDC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        Delta;                                             // 0xDD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bJumpCharging;                                     // 0xDD4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_397D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            MountSound;                                        // 0xDD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              InWaterFX;                                         // 0xDE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       InWaterLoop;                                       // 0xDE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CheckWaterTimer;                                   // 0xDF0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        RumbleIntensity;                                   // 0xDF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Debug_NoCameraShake;                               // 0xDFC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_397E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCameraShake*                          DriverCameraShake;                                 // 0xE00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EngineSoundMaxDistance;                            // 0xE08(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Jumped;                                            // 0xE0C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_397F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              BoostMeterMID;                                     // 0xE10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BoostTImelineAlpha;                                // 0xE18(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               FXBoostEnd_0;                                      // 0xE1C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            DismountSound;                                     // 0xE28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               FXFrontSpringOffset;                               // 0xE30(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               FXRearSpringOffset;                                // 0xE3C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FXSurfaceType;                                     // 0xE48(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SavedDamageValueForMID;                            // 0xE4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxSpeedToDestroy;                                 // 0xE50(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxHealthToDestroy;                                // 0xE54(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SavedHeadlightValueForMID;                         // 0xE58(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BoostTimeValueForMID;                              // 0xE5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                VehicleHitActor;                                   // 0xE60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DestructionAngle;                                  // 0xE68(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LandingFXImpactThreshold;                          // 0xE6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       LandingFX;                                         // 0xE70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            OnDeathSound;                                      // 0xE78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BumpForceAngle;                                    // 0xE80(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3980[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                JumpCameraShake;                                   // 0xE88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MovementVisualUpdate;                              // 0xE90(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3981[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          MovementVisualTimer;                               // 0xE98(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("JackalVehicle_Athena_C");
		return Clss;
	}

	void GetMaxAudibleDistance(float* Max_Distance, bool CallFunc_IsValid_ReturnValue);
	void ShouldBump(const struct FVector& Hit_Normal, bool* Bump, bool CallFunc_ContainsPlayers_ReturnValue, const struct FVector& CallFunc_GetActorUpVector_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, float CallFunc_Abs_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	bool ShouldDestroyProp_(const struct FVector& HitNormal, const struct FVector& CallFunc_GetPreviousLinearVelocity_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, float CallFunc_GetPreviousForwardSpeedKmh_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1);
	void DestroyBuildingPiece(class ABuildingActor* BuildingActor, float DestroyThreshold, float CallFunc_GetMaxHealth_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue1, const struct FGameplayEffectContextHandle& CallFunc_MakeEffectContext_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue);
	void UpdateSurfaceType(enum class EPhysicalSurface Surface, int32* Output, int32 Temp_int_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue, int32 Temp_int_Variable1, bool Temp_bool_Variable, int32 Temp_int_Variable2, bool Temp_bool_Variable1, int32 K2Node_Select_Default, int32 K2Node_Select1_Default);
	void SendBoostTimeToMaterials(float ParameterValue);
	void SendHeadlightValueToMaterials(float ParameterValue);
	void SendDamageValueToMaterials(float ParameterValue);
	void HapticsOnHit(float HitMagnitude, float CameraPushVelocityDelta, float HitDelta, float CameraShakeMagnitude, const struct FVector& CallFunc_GetPreviousLinearVelocity_ReturnValue, const struct FVector& CallFunc_GetPreviousLinearVelocity_ReturnValue1, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, float CallFunc_Abs_ReturnValue, const struct FVector& CallFunc_GetComponentVelocity_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_VSize_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue1, bool CallFunc_Greater_FloatFloat_ReturnValue1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_Greater_FloatFloat_ReturnValue2);
	void IsBoostCharging(bool* Is_Charging, const struct FFortRechargingActionTimer& CallFunc_GetCurrentBoostTimer_ReturnValue);
	void CurrentBoostCharge(float* Charge_Value, const struct FFortRechargingActionTimer& CallFunc_GetCurrentBoostTimer_ReturnValue);
	void DeactivateComponents();
	TArray<class FText> GetVehicleSeatActionLabels(class AFortPlayerPawn* PlayerPawn, enum class ECommonInputType OverrideInputType, const TArray<class FText>& ReturnLabels_Local, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_IsUsingTouch_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue1, class FText CallFunc_MakeLiteralText_ReturnValue2, class FText CallFunc_MakeLiteralText_ReturnValue3, int32 CallFunc_Array_Add_ReturnValue2, int32 CallFunc_Array_Add_ReturnValue3);
	TArray<class FText> GetVehicleSeatLabels(class AFortPlayerPawn* PlayerPawn, enum class ECommonInputType OverrideInputType, const TArray<class FText>& ReturnLabels_Local, class FText CallFunc_MakeLiteralText_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	TArray<class FName> GetVehicleSeatActionNames(class AFortPlayerPawn* PlayerPawn, enum class ECommonInputType OverrideInputType, const TArray<class FName>& ReturnActionNames_Local, class AFortPlayerPawn* PlayerPawn_Local, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, bool CallFunc_IsUsingTouch_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class FName CallFunc_GetVehicleJumpActionName_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, class FName CallFunc_GetJackalBoostActionName_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue3, class FName CallFunc_GetGamepadJackalExitActionName_ReturnValue, class FName CallFunc_GetJackalUseOrExitActionName_ReturnValue, int32 CallFunc_Array_Add_ReturnValue2, int32 CallFunc_Array_Add_ReturnValue3);
	void GetIconPlacement(class AActor* SelfActor, struct FVector* OutLocation, struct FVector* OutExtents, const struct FVector& CallFunc_GetCenterOfMass_ReturnValue);
	void UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void OnPawnEnterVehicle(class AFortPlayerPawn* PlayerPawn, int32 SeatIdx);
	void OnPawnExitVehicle(class AFortPlayerPawn* PlayerPawn, class FName ExitSocketName);
	void SetupCosmetics();
	void ReceiveBeginPlay();
	void OnBoostBegin();
	void OnBoostEnd();
	void OnJumpChargeBegin();
	void OnJumpChargeEnd(float Charge);
	void OnJumped(float Charge);
	void OnCollisionHitEffects(struct FVector& HitLocation, struct FVector& HitNormalImpulse, struct FVector& HitFrictionImpulse, struct FVector& HitNormal, class AActor* HitActor, enum class EPhysicalSurface HitSurfaceType);
	void OnEnteredWaterVolume(struct FVector& WaterSurfacePoint);
	void OnExitedWaterVolume(struct FVector& WaterSurfacePoint);
	void CheckWaterEvent();
	void StopDriverCameraShake();
	void StartDriverCameraShake();
	void OnIsSprintingChanged();
	void K2_ApplyCosmeticWrap(class UAthenaItemWrapDefinition* LoadedWrap);
	void ChangeOutMaterials();
	void OnStopTick();
	void BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void OnHoldExitStarted(class AFortPawn* ExitingPawn, float ExitDuration);
	void OnHoldExitStopped(class AFortPawn* ExitingPawn);
	void VisualIndicator();
	void HideQuickBarForSecondaryAbility(bool Hide);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_JackalVehicle_Athena(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsDedicatedServer_ReturnValue1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue2, float K2Node_Event_Charge1, float K2Node_Event_Charge, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormalImpulse, const struct FVector& K2Node_Event_HitFrictionImpulse, const struct FVector& K2Node_Event_HitNormal, class AActor* K2Node_Event_HitActor, enum class EPhysicalSurface K2Node_Event_HitSurfaceType, int32 CallFunc_UpdateSurfaceType_Output, bool CallFunc_OnCollision_OutResult, float CallFunc_OnCollision_OutMagnitude, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue1, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FVector& K2Node_Event_WaterSurfacePoint1, const struct FVector& K2Node_Event_WaterSurfacePoint, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsDedicatedServer_ReturnValue3, int32 CallFunc_GetRenderingDetailMode_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue4, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue1, class AFortPlayerPawn* K2Node_Event_PlayerPawn, class FName K2Node_Event_ExitSocketName, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class AFortPlayerPawn* K2Node_Event_PlayerPawn1, int32 K2Node_Event_SeatIdx, const struct FActiveGameplayEffectHandle& CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, class UCameraShake* CallFunc_PlayCameraShake_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue5, bool CallFunc_IsValid_ReturnValue4, bool CallFunc_IsSprinting_ReturnValue, bool CallFunc_IsValid_ReturnValue5, class UParticleSystem* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue6, const struct FVector& CallFunc_GetActorUpVector_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue2, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue2, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue3, class UMaterialInstanceDynamic* CallFunc_ApplyMaterialAndUseWrapIfPossible_ReturnValue, class UAthenaItemWrapDefinition* K2Node_Event_LoadedWrap, class UParticleSystem* Temp_object_Variable1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, const struct FVector& K2Node_ComponentBoundEvent_NormalImpulse, const struct FHitResult& K2Node_ComponentBoundEvent_Hit, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_ShouldBump_Bump, bool CallFunc_ShouldDestroyProp__ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue6, class ABuildingProp* K2Node_DynamicCast_AsBuilding_Prop, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_ActorHasTag_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue3, bool CallFunc_Greater_FloatFloat_ReturnValue4, bool CallFunc_BooleanAND_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class AFortPawn* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_GetVehicleVelocity_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue7, class AFortPawn* K2Node_Event_ExitingPawn1, float K2Node_Event_ExitDuration, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue1, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, class AFortPawn* K2Node_Event_ExitingPawn, bool CallFunc_IsDedicatedServer_ReturnValue8, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_IsValid_ReturnValue7, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, float CallFunc_BreakVector_X1, float CallFunc_BreakVector_Y1, float CallFunc_BreakVector_Z1, float CallFunc_Subtract_FloatFloat_ReturnValue1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue2, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue3, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue8, class UParticleSystem* K2Node_Select_Default, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue1, class UCameraShake* CallFunc_PlayCameraShake_ReturnValue1, bool CallFunc_IsDedicatedServer_ReturnValue9, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, float CallFunc_GetMaxAudibleDistance_Max_Distance, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess4, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, bool K2Node_CustomEvent_Hide, bool CallFunc_IsValid_ReturnValue9, bool CallFunc_IsValid_ReturnValue10, class AController* CallFunc_GetController_ReturnValue1, enum class EEndPlayReason K2Node_Event_EndPlayReason, class AFortPlayerControllerGameplay* K2Node_DynamicCast_AsFort_Player_Controller_Gameplay, bool K2Node_DynamicCast_bSuccess5);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif