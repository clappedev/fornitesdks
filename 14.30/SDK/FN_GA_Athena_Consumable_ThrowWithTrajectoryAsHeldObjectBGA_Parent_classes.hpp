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

// BlueprintGeneratedClass GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C
// 0x018C (0x0C34 - 0x0AA8)
class UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AFortProjectileBase*                         ProjectileReference;                                      // 0x0AB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              DistanceFromInstigatorCheck;                              // 0x0AC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProjectileSpeedMin;                                       // 0x0AC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProjectileSpeedMax;                                       // 0x0AC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TrajectoryProjectileGravityScaleCorrection;               // 0x0ACC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ProjectileTargetingOriginOffset;                          // 0x0AD0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DummyShouldBounce;                                        // 0x0ADC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0ADD(0x0003) MISSED OFFSET
	float                                              DummyBounciness;                                          // 0x0AE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DummyFriction;                                            // 0x0AE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DummyMaxSpeed;                                            // 0x0AE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DummyGravity;                                             // 0x0AEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DummyTimeStep;                                            // 0x0AF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DummyExtent;                                              // 0x0AF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ProjectileTargetingOriginOffset_Crouched;                 // 0x0AF8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InThrowWindup;                                            // 0x0B04(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0B05(0x0003) MISSED OFFSET
	struct FFortGameplayAbilityMontageInfo             ThrowWindupMontage;                                       // 0x0B08(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ABP_ProjectileTrajectory_Athena_C*           TrajectoryIndicator;                                      // 0x0B60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AFortProjectileTrajectory*                   TrajectoryIndicatorClass;                                 // 0x0B68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AbilityKeyPressed;                                        // 0x0B70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0B71(0x0003) MISSED OFFSET
	float                                              AdditionalThrowAngle;                                     // 0x0B74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxSpeedPitch;                                            // 0x0B78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinSpeedPitch;                                            // 0x0B7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxThrowPitch;                                            // 0x0B80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxTrajectoryBounces;                                     // 0x0B84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsThrowing;                                               // 0x0B88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0B89(0x0003) MISSED OFFSET
	float                                              PostThrowDelay;                                           // 0x0B8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Spawned_On_Equip;                                         // 0x0B90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     DummyCollisionChannel;                                    // 0x0B91(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x0B92(0x0006) MISSED OFFSET
	struct FScalableFloat                              ThrowConsumablesEnabled;                                  // 0x0B98(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       T_ItemThrown;                                             // 0x0BB8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                T_Quest;                                                  // 0x0BD8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ABGA_HeldObject_Parent_C*                    BGA_ToSpawn;                                              // 0x0BE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABGA_HeldObject_Parent_C*                    DummyProjectile;                                          // 0x0BE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABGA_HeldObject_Parent_C*                    SpawnedBGAHeldObject;                                     // 0x0BF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                ItemCountToRemoveWhenThrown;                              // 0x0BF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0BFC(0x0004) MISSED OFFSET
	class UGameplayEffect*                             GE_Windup;                                                // 0x0C00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       Tag_InWindup;                                             // 0x0C08(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AB_PetrolWeapon_C*                           PetrolWeapon;                                             // 0x0C28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                DummyMaxSteps;                                            // 0x0C30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C");
		
		return ptr;
	}


	bool ShouldOnlyShowTrajectoryOnUse();
	class AFortProjectileTrajectory* SpawnTrajectoryIndicator(bool bSpawnOnEquip);
	void GetProjectileTrajectoryPoints(TArray<struct FVector>* OutSplinePoints, TArray<struct FVector>* OutSplineTangents, struct FHitResult* OutHitResult);
	class AFortProjectileTrajectory* GetProjectileTrajectoryActor();
	void CanBeDropped(bool* Yes);
	void UpdateTrajectorySpline();
	void GetOwningPlayer(class AFortPlayerPawn** Player_Pawn);
	void CalcProjectileSpeedFromPitch(float AimPitch, float* GrenadeSpeed);
	void SetupDummyProjectile();
	void SpawnLocationAndRotation(struct FVector* OutLoc, struct FRotator* OutRot);
	void Completed_11EB7D0B4C52CC25C785B3A1EA90B008(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_11EB7D0B4C52CC25C785B3A1EA90B008(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_11EB7D0B4C52CC25C785B3A1EA90B008(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void OnCancelled_D12FE2DE4501EC495B89AAA1271D8CC2();
	void OnInterrupted_D12FE2DE4501EC495B89AAA1271D8CC2();
	void OnBlendOut_D12FE2DE4501EC495B89AAA1271D8CC2();
	void OnCompleted_D12FE2DE4501EC495B89AAA1271D8CC2();
	void OnFinish_4303A6684F8456517B7D258D8BA1CE9B();
	void EventReceived_37ED270D4E5065DF6944ECB72BFD05A2(const struct FGameplayEventData& Payload);
	void OnSync_9DBAE13E407ED891AB4EECA2ADF75C8D();
	void EventReceived_526561A640EC49D3EEBA449BC71450EF(const struct FGameplayEventData& Payload);
	void K2_ActivateAbility();
	void OnAbilityInputReleased();
	void K2_OnEndAbility(bool bWasCancelled);
	void CleanupTrajectoryDisplay();
	void ThrowConsumable();
	void InitTrajectoryVariables();
	void CleanupTrajectoryIndicatorOnUnequip();
	void Cleanup_Trajectory_Display_On_End();
	void UpdateTrajectory();
	void UpdateSpawnedBGA_ServerOnly_();
	void SpawnBGA_ServerOnly_();
	void RemoveItemFromQuickBar();
	void UpdateDummyProjectileBGA();
	void SendGameplayEventsAndQuestUpdate();
	void ExecuteUbergraph_GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
