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

// BlueprintGeneratedClass GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C
// 0x016C (0x0C14 - 0x0AA8)
class UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UFortWeaponRangedItemDefinition*             ItemDefinition;                                           // 0x0AB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortProjectileBase*                         ProjectileToThrow;                                        // 0x0AC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AFortProjectileBase*                         ProjectileReference;                                      // 0x0AC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              DistanceFromInstigatorCheck;                              // 0x0AD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProjectileSpeedMin;                                       // 0x0AD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProjectileSpeedMax;                                       // 0x0AD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProjectileGravityScale;                                   // 0x0ADC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ProjectileTargetingOriginOffset;                          // 0x0AE0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0AEC(0x0004) MISSED OFFSET
	class AFortProjectileBase*                         DummyProjectile;                                          // 0x0AF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               DummyShouldBounce;                                        // 0x0AF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0AF9(0x0003) MISSED OFFSET
	float                                              DummyBounciness;                                          // 0x0AFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DummyFriction;                                            // 0x0B00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DummyMaxSpeed;                                            // 0x0B04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DummyGravity;                                             // 0x0B08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DummyTimeStep;                                            // 0x0B0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DummyExtent;                                              // 0x0B10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ProjectileTargetingOriginOffset_Crouched;                 // 0x0B14(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InThrowWindup;                                            // 0x0B20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0B21(0x0007) MISSED OFFSET
	struct FFortGameplayAbilityMontageInfo             ThrowWindupMontage;                                       // 0x0B28(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ABP_ProjectileTrajectory_Athena_C*           TrajectoryIndicator;                                      // 0x0B80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AFortProjectileTrajectory*                   TrajectoryIndicatorClass;                                 // 0x0B88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AbilityKeyPressed;                                        // 0x0B90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0B91(0x0003) MISSED OFFSET
	struct FVector                                     GrenadeTargetingOriginOffsetWater;                        // 0x0B94(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AdditionalThrowAngle;                                     // 0x0BA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxSpeedPitch;                                            // 0x0BA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinSpeedPitch;                                            // 0x0BA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxThrowPitch;                                            // 0x0BAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxTrajectoryBounces;                                     // 0x0BB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsThrowing;                                               // 0x0BB4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0BB5(0x0003) MISSED OFFSET
	float                                              PostThrowDelay;                                           // 0x0BB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Spawned_On_Equip;                                         // 0x0BBC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     DummyCollisionChannel;                                    // 0x0BBD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x0BBE(0x0002) MISSED OFFSET
	struct FScalableFloat                              ThrowConsumablesEnabled;                                  // 0x0BC0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       T_ItemThrown;                                             // 0x0BE0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                T_Quest;                                                  // 0x0C00(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AB_UtilityItem_Generic_Athena_C*             WeaponUtilityItemGeneric;                                 // 0x0C08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                DummyMaxSteps;                                            // 0x0C10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C");
		
		return ptr;
	}


	bool ShouldOnlyShowTrajectoryOnUse();
	class AFortProjectileTrajectory* SpawnTrajectoryIndicator(bool bSpawnOnEquip);
	void GetProjectileTrajectoryPoints(TArray<struct FVector>* OutSplinePoints, TArray<struct FVector>* OutSplineTangents, struct FHitResult* OutHitResult);
	class AFortProjectileTrajectory* GetProjectileTrajectoryActor();
	void CanBeDropped(bool* Yes);
	void GetProjectileDataFromWeaponID();
	void UpdateTrajectorySpline();
	void GetOwningPlayer(class AFortPlayerPawn** Player_Pawn);
	void CalcProjectileSpeedFromPitch(float AimPitch, float* GrenadeSpeed);
	void SetupDummyProjectile();
	void SpawnLocationAndRotation(struct FVector* OutLoc, struct FRotator* OutRot);
	void Destroyed_810B87EA424E705019D253BCBCE0A171(const struct FProjectileEventData& ProjectileData);
	void Exploded_810B87EA424E705019D253BCBCE0A171(const struct FProjectileEventData& ProjectileData);
	void Stopped_810B87EA424E705019D253BCBCE0A171(const struct FProjectileEventData& ProjectileData);
	void Bounced_810B87EA424E705019D253BCBCE0A171(const struct FProjectileEventData& ProjectileData);
	void Touched_810B87EA424E705019D253BCBCE0A171(const struct FProjectileEventData& ProjectileData);
	void Created_810B87EA424E705019D253BCBCE0A171(const struct FProjectileEventData& ProjectileData);
	void Completed_B7154AE349A61FA4A5545D97B125C031(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_B7154AE349A61FA4A5545D97B125C031(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_B7154AE349A61FA4A5545D97B125C031(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void OnFinish_3698CE084DFBBB65C54A74B61C442258();
	void OnFinish_37708BDA4A053044298FDD8A986CE91D();
	void OnCancelled_9B7908404C52FEE66F1ED5B2A4DFC261();
	void OnInterrupted_9B7908404C52FEE66F1ED5B2A4DFC261();
	void OnBlendOut_9B7908404C52FEE66F1ED5B2A4DFC261();
	void OnCompleted_9B7908404C52FEE66F1ED5B2A4DFC261();
	void OnFinish_CF0A57844174C8A87D0024B17D96B713();
	void EventReceived_13E531C84957E69360FC6EB6E9818D90(const struct FGameplayEventData& Payload);
	void OnSync_F83BC34A45D86702B453A1BFE1D7F7E1();
	void EventReceived_D907E28A43BC498803B5B0AD054E5FC1(const struct FGameplayEventData& Payload);
	void K2_ActivateAbility();
	void Server_SpawnProjectile(const struct FVector& Location, const struct FRotator& Direction);
	void OnAbilityInputReleased();
	void K2_OnEndAbility(bool bWasCancelled);
	void CleanupTrajectoryDisplay();
	void ThrowConsumable();
	void InitTrajectoryVariables();
	void CleanupTrajectoryIndicatorOnUnequip();
	void Cleanup_Trajectory_Display_On_End();
	void UpdateTrajectory();
	void ExecuteUbergraph_GA_Athena_Consumable_ThrowWithTrajectory_Parent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
