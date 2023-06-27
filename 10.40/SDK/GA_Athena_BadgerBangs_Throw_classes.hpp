#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x60 (0xCF8 - 0xC98)
// BlueprintGeneratedClass GA_Athena_BadgerBangs_Throw.GA_Athena_BadgerBangs_Throw_C
class UGA_Athena_BadgerBangs_Throw_C : public UGA_Athena_Grenade_WithTrajectory_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC98(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              FX_OnHand;                                         // 0xCA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          ChargeUpCue;                                       // 0xCA8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        RectSize;                                          // 0xCB0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        Range;                                             // 0xCD0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                AimedPlayer;                                       // 0xCF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Athena_BadgerBangs_Throw_C");
		return Clss;
	}

	void GetPlayer(class AActor* PlayerOrVehicle, class AActor** Player, const struct FGameplayTagContainer& PropTag, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, class ABuildingGameplayActorPlayerPropAttachment* CallFunc_GetPossessedProp_ReturnValue, UInterfaceProperty_ K2Node_DynamicCast_AsFort_Vehicle_Interface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, TArray<class AFortPlayerPawn*>& CallFunc_GetAllPassengers_ReturnValue, class AFortPlayerPawn* CallFunc_Array_Get_Item);
	void GetProjectileTrajectoryPoints(TArray<struct FVector>* OutSplinePoints, TArray<struct FVector>* OutSplineTangents, struct FHitResult* OutHitResult, TArray<struct FVector>& CallFunc_GetProjectileTrajectoryPoints_OutSplinePoints, TArray<struct FVector>& CallFunc_GetProjectileTrajectoryPoints_OutSplineTangents, const struct FHitResult& CallFunc_GetProjectileTrajectoryPoints_OutHitResult);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void UpdateTrajectory();
	void UpdateTrajectorySpline();
	void TossGrenade();
	void AthenaProjectileSpawned(class AFortProjectileBase* ProjectileReference);
	void ExecuteUbergraph_GA_Athena_BadgerBangs_Throw(int32 EntryPoint, float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue_1, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1, float CallFunc_GetValueAtLevel_ReturnValue_2, float CallFunc_GetValueAtLevel_ReturnValue_3, class AFortPawn* CallFunc_GetAimedAtEnemy_ReturnValue, class AActor* CallFunc_GetPlayer_Player, bool CallFunc_IsValid_ReturnValue, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_bWasCancelled, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class ABP_ProjectileTrajectory_BadgerBangs_C* K2Node_DynamicCast_AsBP_Projectile_Trajectory_Badger_Bangs, bool K2Node_DynamicCast_bSuccess_1, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue_2, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue_2, class AFortPawn* CallFunc_GetAimedAtEnemy_ReturnValue_1, class AActor* CallFunc_GetPlayer_Player_1, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_4, class AFortProjectileBase* K2Node_Event_ProjectileReference, class AB_Prj_Athena_BadgerBangs_C* K2Node_DynamicCast_AsB_Prj_Athena_Badger_Bangs, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_GetValueAtLevel_ReturnValue_5, class AFortPawn* CallFunc_GetAimedAtEnemy_ReturnValue_2, class AActor* CallFunc_GetPlayer_Player_2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
