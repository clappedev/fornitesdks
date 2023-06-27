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

// BlueprintGeneratedClass GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C
// 0x01D0 (0x0C78 - 0x0AA8)
class UGA_HeldObject_Throw_Component_C : public UFortGameplayAbility
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
	struct FFortGameplayEffectContainerSpec            ExplosionEffectContainerSpec;                             // 0x0AF0(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              ProjectileSpeed;                                          // 0x0BA8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              ProjectileGravityScale;                                   // 0x0BC8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              TrajectoryUpdateInterval;                                 // 0x0BE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                EC_DefaultExplosion;                                      // 0x0BEC(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0BF4(0x0004) MISSED OFFSET
	class UAnimMontage*                                CookMonage;                                               // 0x0BF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ThrowMontage;                                             // 0x0C00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                GC_OnThrow;                                               // 0x0C08(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ABP_ProjectileTrajectory_C*                  TrajectoryIndicator;                                      // 0x0C10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AFortProjectileTrajectory*                   TrajectoryIndicatorClass;                                 // 0x0C18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortProjectileBase*                         DummyProjectile;                                          // 0x0C20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              DummyMaxSpeed;                                            // 0x0C28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DummyGravity;                                             // 0x0C2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DummyExtent;                                              // 0x0C30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DummyTimeStep;                                            // 0x0C34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UGameplayEffect*                             GE_InWindup;                                              // 0x0C38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 Handle_GE_InWindup;                                       // 0x0C40(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               SpawnedOnEquip;                                           // 0x0C48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0C49(0x0007) MISSED OFFSET
	class AActor*                                      HeldObject;                                               // 0x0C50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_ProjectileTrajectory_C*                  ProjectileTrajectorySocketed;                             // 0x0C58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      TrajectoryIndicatorSocketedClass;                         // 0x0C60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortHeldObjectComponent*                    HeldObjectComponent;                                      // 0x0C68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UFortCameraMode*                             CookOverrideCamera;                                       // 0x0C70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C");
		
		return ptr;
	}


	bool ShouldOnlyShowTrajectoryOnUse();
	class AFortProjectileTrajectory* SpawnTrajectoryIndicator(bool bSpawnOnEquip);
	class AFortProjectileTrajectory* GetProjectileTrajectoryActor();
	void GetProjectileTrajectoryPoints(TArray<struct FVector>* OutSplinePoints, TArray<struct FVector>* OutSplineTangents, struct FHitResult* OutHitResult);
	void SetupSplineActors();
	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags);
	void Setup_Late_Trajectory_Data();
	void HitValidSocket(const struct FHitResult& HitResult, bool* CanSocket);
	void SetupDummyProjectileSocketed();
	void CleanupTrajectory();
	void PostThrowCleanup();
	void UpdateTrajectorySpline();
	void SetupDummyProjectile();
	void OnHeldObjectSetup();
	void OnHeldObjectThrown(class AFortProjectileBase* SpawnedProjectile);
	void SpawnThrownProjectile(class AFortProjectileBase* ProjectileClass, const struct FVector& ProjectileSpawnLocation, const struct FRotator& ProjectileSpawnDirection, const struct FFortGameplayEffectContainerSpec& ExplosionEffectContainerSpec, float ProjectileInitialSpeed, float ProjectileGravityScale, class AFortProjectileBase** SpawnedProjectile);
	void GetOwningPlayer(class AFortPlayerPawn** Player_Pawn);
	void GetSpawnLocationAndRotation(struct FVector* Location, struct FRotator* Rotation);
	void PrethrowSetup();
	void Completed_A44500A44ED1BD047C0A7FB13050E377(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_A44500A44ED1BD047C0A7FB13050E377(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_A44500A44ED1BD047C0A7FB13050E377(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void OnFinish_CE16214748EB548E38F0A4A5EBFDD545();
	void Throw();
	void AttemptSpawnThrownProjectile();
	void K2_OnEndAbility(bool bWasCancelled);
	void InitTrajectoryVariables();
	void CleanupTrajectoryIndicatorOnUnequip();
	void UpdateTrajectory();
	void K2_ActivateAbility();
	void OnAbilityInputReleased();
	void ExecuteUbergraph_GA_HeldObject_Throw_Component(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
