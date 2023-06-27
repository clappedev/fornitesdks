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

// BlueprintGeneratedClass GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C
// 0x03A4 (0x0E4C - 0x0AA8)
class UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               AbilityKeyPressed;                                        // 0x0AB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InThrowWindup;                                            // 0x0AB9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0ABA(0x0002) MISSED OFFSET
	float                                              AdditionalThrowAngle;                                     // 0x0ABC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxTossPitch;                                             // 0x0AC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     GrenadeTargetingOriginOffset;                             // 0x0AC4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     GrenadeTargetingOriginOffset_Crouched;                    // 0x0AD0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0ADC(0x0004) MISSED OFFSET
	class AFortProjectileBase*                         SpawnedProjectile;                                        // 0x0AE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AFortProjectileBase*                         Proj_ThrownProjectile;                                    // 0x0AE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              ProjectileSpeed;                                          // 0x0AF0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              ProjectileGravityScale;                                   // 0x0B10(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              TrajectoryUpdateInterval;                                 // 0x0B30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0B34(0x0004) MISSED OFFSET
	class UAnimMontage*                                CookMonage;                                               // 0x0B38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ThrowMontage;                                             // 0x0B40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                GC_OnThrow;                                               // 0x0B48(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ABP_ProjectileTrajectory_C*                  TrajectoryIndicator;                                      // 0x0B50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AFortProjectileTrajectory*                   TrajectoryIndicatorClass;                                 // 0x0B58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortProjectileBase*                         DummyProjectile;                                          // 0x0B60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              DummyMaxSpeed;                                            // 0x0B68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DummyGravity;                                             // 0x0B6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DummyExtent;                                              // 0x0B70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DummyTimeStep;                                            // 0x0B74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       TrajectoryCollisionProfileName;                           // 0x0B78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UGameplayEffect*                             GE_InWindup;                                              // 0x0B80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     GrenadeTargetingOriginOffsetWater;                        // 0x0B88(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 Handle_GE_InWindup;                                       // 0x0B94(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EC_DefaultExplosion;                                      // 0x0B9C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                ExplosionEffectLevel;                                     // 0x0BA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFortGameplayEffectContainerSpec            ExplosionEffectContainerSpec;                             // 0x0BA8(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               SpawnedOnEquip;                                           // 0x0C60(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0C61(0x0003) MISSED OFFSET
	struct FGameplayTag                                EC_DefaultHit;                                            // 0x0C64(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                HitEffectLevel;                                           // 0x0C6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFortGameplayEffectContainerSpec            HitEffectContainerSpec;                                   // 0x0C70(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0D28(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.OnProjectileSpawn
	bool                                               HasAdditionalExplosion;                                   // 0x0D38(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0D39(0x0003) MISSED OFFSET
	struct FGameplayTag                                EC_AdditionalExplosion;                                   // 0x0D3C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                AdditionalExplodeLevel;                                   // 0x0D44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFortGameplayEffectContainerSpec            AdditionalContainerSpec;                                  // 0x0D48(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       QuestCreditTargetTag;                                     // 0x0E00(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	bool                                               IsThrowing;                                               // 0x0E20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ThrowInstantly;                                           // 0x0E21(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x6];                                       // 0x0E22(0x0006) MISSED OFFSET
	struct FScalableFloat                              ThrowConsumablesEnabled;                                  // 0x0E28(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                DummyMaxSteps;                                            // 0x0E48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C");
		
		return ptr;
	}


	bool ShouldOnlyShowTrajectoryOnUse();
	class AFortProjectileTrajectory* SpawnTrajectoryIndicator(bool bSpawnOnEquip);
	class AFortProjectileTrajectory* GetProjectileTrajectoryActor();
	void GetProjectileTrajectoryPoints(TArray<struct FVector>* OutSplinePoints, TArray<struct FVector>* OutSplineTangents, struct FHitResult* OutHitResult);
	void GetProjectileInitialGravityScaleToUse(float* GravityScaleToUse);
	void GetProjectileInitialSpeedToUse(float* ProjectileSpeedToUse);
	void CleanupTrajectory();
	void PostThrowCleanup();
	void UpdateTrajectorySpline();
	void SetupDummyProjectile();
	void OnProjectileSetup();
	void OnProjectileSpawned(class AFortProjectileBase* SpawnedProjectile);
	void SpawnThrownProjectile(class AFortProjectileBase* ProjectileClass, const struct FVector& ProjectileSpawnLocation, const struct FRotator& ProjectileSpawnDirection, const struct FFortGameplayEffectContainerSpec& HitEffectContainerSpec, const struct FFortGameplayEffectContainerSpec& ExplosionEffectContainerSpec, float ProjectileInitialSpeed, float ProjectileGravityScale, class AFortProjectileBase** SpawnedProjectile);
	void GetOwningPlayer(class AFortPlayerPawn** Player_Pawn);
	void GetSpawnLocationAndRotation(struct FVector* Location, struct FRotator* Rotation);
	void PrethrowSetup();
	void Completed_7CDE11F247AD13935CDDCCA29666AC3E(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_7CDE11F247AD13935CDDCCA29666AC3E(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_7CDE11F247AD13935CDDCCA29666AC3E(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void OnFinish_79D5F1274D4E02F76A06EEAFF19FADF3();
	void OnCancelled_2A7663C74EF65992AD4E1F86CA08C8B1();
	void OnInterrupted_2A7663C74EF65992AD4E1F86CA08C8B1();
	void OnBlendOut_2A7663C74EF65992AD4E1F86CA08C8B1();
	void OnCompleted_2A7663C74EF65992AD4E1F86CA08C8B1();
	void EventReceived_11F8FEDB4634DE47482E1B962FB8A5E6(const struct FGameplayEventData& Payload);
	void OnSync_65BB2FE343979EBE180BC6A76D8BF92F();
	void ThrowProjectile();
	void AttemptSpawnThrownProjectile();
	void K2_OnEndAbility(bool bWasCancelled);
	void InitTrajectoryVariables();
	void OnAbilityInputReleased();
	void K2_ActivateAbility();
	void CleanupTrajectoryIndicatorOnUnequip();
	void UpdateTrajectory();
	void ThrowMontageStarted();
	void ExecuteUbergraph_GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent(int EntryPoint);
	void OnProjectileSpawn__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
