#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x138 (0xF48 - 0xE10)
// BlueprintGeneratedClass MountedTurret.MountedTurret_C
class AMountedTurret_C : public AFortMountedTurret
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE10(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                     TurretCollision;                                   // 0xE18(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortVehicleAudioVoice*                ServoAudio;                                        // 0xE20(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              OverHeatScreen_R;                                  // 0xE28(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              OverHeatScreen_L;                                  // 0xE30(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       AudioOnOverheat;                                   // 0xE38(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       AudioOverheat;                                     // 0xE40(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              OverheatSmoke;                                     // 0xE48(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              MagazineGlowR;                                     // 0xE50(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              MagazineGlowL;                                     // 0xE58(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              BarrelGlowL;                                       // 0xE60(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              BarrelGlowR;                                       // 0xE68(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         OverlapVolume;                                     // 0xE70(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            OnDeathSound;                                      // 0xE78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_BlockWeaponFire;                                // 0xE80(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_GrantWeapon;                                    // 0xE88(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       DriverPawn;                                        // 0xE90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  DoorMesh;                                          // 0xE98(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              InWaterFX;                                         // 0xEA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       InWaterLoop;                                       // 0xEA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       HonkAudioComp;                                     // 0xEB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           GE_EnterTurret;                                    // 0xEB8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          PlayerEnterAnimation;                              // 0xEC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          TurretEnterAnimation;                              // 0xEC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          TurretFireAnimation;                               // 0xED0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          PlayerFireAnimation;                               // 0xED8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortWeapon*                           PlayerWeapon;                                      // 0xEE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AB_MountedTurretAthena_C*              TurretWeapon;                                      // 0xEE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          GetWeaponTimer;                                    // 0xEF0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          OverheatCostmeticTimer;                            // 0xEF8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          TurretFireLeftAnimation;                           // 0xF00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          TurretFireRightAnimation;                          // 0xF08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           OverheatAudioCurve;                                // 0xF10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              TurretRotation;                                    // 0xF18(0xC)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5202[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          TurretStartAnimation;                              // 0xF28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          TurretExitAnimation;                               // 0xF30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ZeroIfOverheating;                                 // 0xF38(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bCanInteract;                                      // 0xF3C(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5203[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FInteractionDelay;                                 // 0xF40(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FInteractionDelayOffset;                           // 0xF44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MountedTurret_C");
		return Clss;
	}

	void OnGetExitSocketTransform(class FName ExitSocket, int32 SocketIndex, const struct FTransform& InTransform, bool* bOutOverriderExitSocket, struct FTransform* OutOverrideTransform, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue);
	bool BP_CanInteract(class AFortPlayerController* FortPC, bool CallFunc_IsValid_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class AActor*>& Temp_object_Variable, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue);
	class FName GetVehicleSeatPrimaryAction(class AFortPlayerPawn* FortPlayerPawn, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class FName CallFunc_GetFireActionName_ReturnValue);
	float CurrentOverheatScalar(float CallFunc_GetOverheatingMaxValue_ReturnValue, float CallFunc_GetCurrentOverheatValue_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
	void GetIconPlacement(class AActor* SelfActor, struct FVector* OutLocation, struct FVector* OutExtents, const struct FVector& CallFunc_GetCenterOfMass_ReturnValue);
	TArray<class FText> GetVehicleSeatActionLabels(class AFortPlayerPawn* PlayerPawn, enum class ECommonInputType OverrideInputType, const TArray<class FText>& ReturnLabels_Local, class FText CallFunc_MakeLiteralText_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue1);
	TArray<class FText> GetVehicleSeatLabels(class AFortPlayerPawn* PlayerPawn, enum class ECommonInputType OverrideInputType, const TArray<class FText>& ReturnLabels_Local, class FText CallFunc_MakeLiteralText_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	TArray<class FName> GetVehicleSeatActionNames(class AFortPlayerPawn* PlayerPawn, enum class ECommonInputType OverrideInputType, class AFortPlayerPawn* PlayerPawn_Local, const TArray<class FName>& ReturnActionNames_Local, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class FName CallFunc_GetFireActionName_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, class FName CallFunc_GetVehicleExitActionName_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue1);
	void UserConstructionScript();
	void OnNotifyEnd_761292E24A89E794B70E9C9206892380(class FName NotifyName);
	void OnNotifyBegin_761292E24A89E794B70E9C9206892380(class FName NotifyName);
	void OnInterrupted_761292E24A89E794B70E9C9206892380(class FName NotifyName);
	void OnBlendOut_761292E24A89E794B70E9C9206892380(class FName NotifyName);
	void OnCompleted_761292E24A89E794B70E9C9206892380(class FName NotifyName);
	void OnNotifyEnd_43B2536B49D71F6DB759A49367555C0D(class FName NotifyName);
	void OnNotifyBegin_43B2536B49D71F6DB759A49367555C0D(class FName NotifyName);
	void OnInterrupted_43B2536B49D71F6DB759A49367555C0D(class FName NotifyName);
	void OnBlendOut_43B2536B49D71F6DB759A49367555C0D(class FName NotifyName);
	void OnCompleted_43B2536B49D71F6DB759A49367555C0D(class FName NotifyName);
	void OnNotifyEnd_BE998F90462B0AB8D888EB90F677D680(class FName NotifyName);
	void OnNotifyBegin_BE998F90462B0AB8D888EB90F677D680(class FName NotifyName);
	void OnInterrupted_BE998F90462B0AB8D888EB90F677D680(class FName NotifyName);
	void OnBlendOut_BE998F90462B0AB8D888EB90F677D680(class FName NotifyName);
	void OnCompleted_BE998F90462B0AB8D888EB90F677D680(class FName NotifyName);
	void OnNotifyEnd_C545F8F445E4AE78043EFD8678F12483(class FName NotifyName);
	void OnNotifyBegin_C545F8F445E4AE78043EFD8678F12483(class FName NotifyName);
	void OnInterrupted_C545F8F445E4AE78043EFD8678F12483(class FName NotifyName);
	void OnBlendOut_C545F8F445E4AE78043EFD8678F12483(class FName NotifyName);
	void OnCompleted_C545F8F445E4AE78043EFD8678F12483(class FName NotifyName);
	void OnNotifyEnd_1E67D99B41450F4F37BDBF8C6F8AAE0B(class FName NotifyName);
	void OnNotifyBegin_1E67D99B41450F4F37BDBF8C6F8AAE0B(class FName NotifyName);
	void OnInterrupted_1E67D99B41450F4F37BDBF8C6F8AAE0B(class FName NotifyName);
	void OnBlendOut_1E67D99B41450F4F37BDBF8C6F8AAE0B(class FName NotifyName);
	void OnCompleted_1E67D99B41450F4F37BDBF8C6F8AAE0B(class FName NotifyName);
	void OnNotifyEnd_DC5D83234D74654A536804AC35F92FE4(class FName NotifyName);
	void OnNotifyBegin_DC5D83234D74654A536804AC35F92FE4(class FName NotifyName);
	void OnInterrupted_DC5D83234D74654A536804AC35F92FE4(class FName NotifyName);
	void OnBlendOut_DC5D83234D74654A536804AC35F92FE4(class FName NotifyName);
	void OnCompleted_DC5D83234D74654A536804AC35F92FE4(class FName NotifyName);
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void OnPawnEnterVehicle(class AFortPlayerPawn* PlayerPawn, int32 SeatIdx);
	void OnPawnExitVehicle(class AFortPlayerPawn* PlayerPawn, class FName ExitSocketName);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void Get_Turret_Weapon();
	void Event_On_Weapon_Fired(enum class EDualWeaponHand Hand, bool bPersistantFire);
	void HideQuickBarForAbility(bool Hide);
	void UpdateOverheatCosmetics();
	void Clear_FX_And_AudioTimer();
	void Handle_Rotation_Audio();
	void Start_FX_And_Audio_Timer();
	void ExecuteUbergraph_MountedTurret(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName24, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName23, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class FName K2Node_CustomEvent_NotifyName22, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class FName K2Node_CustomEvent_NotifyName21, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class FName K2Node_CustomEvent_NotifyName20, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class FName Temp_name_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable1, float Temp_float_Variable, float Temp_float_Variable1, class FName K2Node_CustomEvent_NotifyName19, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, class FName K2Node_CustomEvent_NotifyName18, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, class FName K2Node_CustomEvent_NotifyName17, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, class FName K2Node_CustomEvent_NotifyName16, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, class FName K2Node_CustomEvent_NotifyName15, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, class FName Temp_name_Variable1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate10, class FName K2Node_CustomEvent_NotifyName14, class FName K2Node_CustomEvent_NotifyName13, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate11, class FName K2Node_CustomEvent_NotifyName12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, class FName K2Node_CustomEvent_NotifyName11, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate13, class FName K2Node_CustomEvent_NotifyName10, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate14, class FName Temp_name_Variable2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate15, class FName K2Node_CustomEvent_NotifyName9, class FName K2Node_CustomEvent_NotifyName8, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate16, class FName K2Node_CustomEvent_NotifyName7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate17, class FName K2Node_CustomEvent_NotifyName6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate18, class FName K2Node_CustomEvent_NotifyName5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate19, class FName Temp_name_Variable3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate20, class FName K2Node_CustomEvent_NotifyName4, class FName K2Node_CustomEvent_NotifyName3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate21, class FName K2Node_CustomEvent_NotifyName2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate22, class FName K2Node_CustomEvent_NotifyName1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate23, class FName K2Node_CustomEvent_NotifyName, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate24, class FName Temp_name_Variable4, bool Temp_bool_Has_Been_Initd_Variable, class FName K2Node_CustomEvent_NotifyName28, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue1, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class AFortPawn* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, bool Temp_bool_IsClosed_Variable, class AFortPlayerPawn* K2Node_Event_PlayerPawn1, int32 K2Node_Event_SeatIdx, bool Temp_bool_Has_Been_Initd_Variable1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsOperatingTurret_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, class AFortPlayerPawn* K2Node_Event_PlayerPawn, class FName K2Node_Event_ExitSocketName, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue1, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_IsDedicatedServer_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate25, class FName Temp_name_Variable5, const struct FActiveGameplayEffectHandle& CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue, enum class EDualWeaponHand K2Node_CustomEvent_Hand, bool K2Node_CustomEvent_bPersistantFire, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AB_MountedTurretAthena_C* K2Node_DynamicCast_AsB_Mounted_Turret_Athena, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool K2Node_CustomEvent_Hide, bool CallFunc_IsValid_ReturnValue, class FName K2Node_CustomEvent_NotifyName29, bool CallFunc_IsValid_ReturnValue1, class AController* CallFunc_GetController_ReturnValue, class AFortPlayerControllerGameplay* K2Node_DynamicCast_AsFort_Player_Controller_Gameplay, bool K2Node_DynamicCast_bSuccess1, class FName K2Node_CustomEvent_NotifyName25, bool Temp_bool_IsClosed_Variable1, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate26, bool CallFunc_IsDedicatedServer_ReturnValue1, const struct FGameplayEffectContextHandle& K2Node_MakeStruct_GameplayEffectContextHandle, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate27, class UAnimMontage* K2Node_Select_Default, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate28, bool CallFunc_IsMobilePlatform_ReturnValue, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue1, float K2Node_Select1_Default, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class FName K2Node_CustomEvent_NotifyName26, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FRotator& CallFunc_GetControlRotation_ReturnValue1, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, bool CallFunc_IsValid_ReturnValue4, float CallFunc_Abs_ReturnValue, float CallFunc_MapRangeUnclamped_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate29, float CallFunc_CurrentOverheatScalar_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue1, float CallFunc_CurrentOverheatScalar_ReturnValue1, float CallFunc_CurrentOverheatScalar_ReturnValue2, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue, float CallFunc_GetPlayLength_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate30, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue2, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue3, bool CallFunc_IsValid_ReturnValue5, bool CallFunc_IsValid_ReturnValue6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate31, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class UAnimBP_MountedTurret_C* K2Node_DynamicCast_AsAnim_BP_Mounted_Turret, bool K2Node_DynamicCast_bSuccess2, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_NormalizeAxis_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue4, class FName K2Node_CustomEvent_NotifyName27, bool CallFunc_IsValid_ReturnValue7, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue5, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue8, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue2, bool CallFunc_IsValid_ReturnValue9, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate32, bool CallFunc_IsPlaying_ReturnValue1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
