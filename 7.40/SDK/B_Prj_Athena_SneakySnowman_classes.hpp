#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0xA8 (0x840 - 0x798)
// BlueprintGeneratedClass B_Prj_Athena_SneakySnowman.B_Prj_Athena_SneakySnowman_C
class AB_Prj_Athena_SneakySnowman_C : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x798(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                SK_Sneaky_Snowman_Throw;                           // 0x7A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              FX_Trail;                                          // 0x7A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortCollisionAudioComponent*          FortCollisionAudio;                                // 0x7B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URotatingMovementComponent*            RotatingMovement;                                  // 0x7B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Audio_InAir;                                       // 0x7C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Cue_HitPlayer;                                     // 0x7C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWorldItemDefinition*              SnowmanItemDef;                                    // 0x7D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HitPlayer;                                         // 0x7D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43EB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                GE_ApplyEnemySnowman;                              // 0x7E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       SnowmanSpawnFX;                                    // 0x7E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        ShouldSnowmanEnemies;                              // 0x7F0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                            SoundOnExplo;                                      // 0x810(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               HitLocation;                                       // 0x818(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43EC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                HitActor;                                          // 0x828(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortItem*>                     SnowmanItemInstances;                              // 0x830(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Prj_Athena_SneakySnowman_C");
		return Clss;
	}

	void UpdateQuest(class AFortPlayerController* FortPC, bool CallFunc_HasAuthority_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_SendComplexCustomStatEvent_QuestActive, bool CallFunc_SendComplexCustomStatEvent_QuestCompleted);
	bool ShouldApplySnowman_(class UObject* PlayerPawn, bool Temp_bool_Variable, UInterfaceProperty_ K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Should_Bounce_(const struct FVector& Hit_Normal, const struct FVector& CallFunc_GetUpVector_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
	void UserConstructionScript(bool CallFunc_IsDedicatedServer_ReturnValue);
	void ReceiveBeginPlay();
	void OnStop(struct FHitResult& Hit);
	void OnExploded(TArray<class AActor*>& HitActors, TArray<struct FHitResult>& HitResults);
	void OnTouched(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, struct FHitResult& HitResult, bool bIsOverlap);
	void Explode();
	void ExecuteUbergraph_B_Prj_Athena_SneakySnowman(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, int32 Temp_int_Loop_Counter_Variable, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasAuthority_ReturnValue1, class APawn* CallFunc_GetInstigator_ReturnValue, TArray<class AActor*>& K2Node_Event_HitActors, TArray<struct FHitResult>& K2Node_Event_HitResults, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FHitResult& K2Node_Event_Hit, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess1, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn1, bool K2Node_DynamicCast_bSuccess2, int32 CallFunc_K2_RemoveItemFromPlayer_ReturnValue, bool CallFunc_ShouldApplySnowman__ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, UInterfaceProperty_ CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AAthena_Prop_SneakySnowman_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, class AActor* K2Node_Event_OtherActor, class UPrimitiveComponent* K2Node_Event_OtherComp, const struct FHitResult& K2Node_Event_HitResult, bool K2Node_Event_bIsOverlap, bool CallFunc_BreakHitResult_bBlockingHit1, bool CallFunc_BreakHitResult_bInitialOverlap1, float CallFunc_BreakHitResult_Time1, float CallFunc_BreakHitResult_Distance1, const struct FVector& CallFunc_BreakHitResult_Location1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint1, const struct FVector& CallFunc_BreakHitResult_Normal1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat1, class AActor* CallFunc_BreakHitResult_HitActor1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent1, class FName CallFunc_BreakHitResult_HitBoneName1, int32 CallFunc_BreakHitResult_HitItem1, int32 CallFunc_BreakHitResult_FaceIndex1, const struct FVector& CallFunc_BreakHitResult_TraceStart1, const struct FVector& CallFunc_BreakHitResult_TraceEnd1, bool CallFunc_HasAuthority_ReturnValue2, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable1, float CallFunc_GetValueAtLevel_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue1, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn2, bool K2Node_DynamicCast_bSuccess3, const struct FActiveGameplayEffectHandle& CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue, class AFortAthenaVehicle* K2Node_DynamicCast_AsFort_Athena_Vehicle, bool K2Node_DynamicCast_bSuccess4, bool CallFunc_ShouldApplySnowman__ReturnValue1, TArray<class AFortPlayerPawn*>& CallFunc_GetAllPassengers_ReturnValue, class AFortPlayerPawn* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_ShouldApplySnowman__ReturnValue2, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable1, int32 CallFunc_Add_IntInt_ReturnValue1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue3, class UFortItem* CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue2, int32 CallFunc_K2_RemoveFortItemFromPlayer_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue1, int32 CallFunc_GetNumInStack_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
