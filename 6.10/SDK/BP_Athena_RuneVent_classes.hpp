#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x130 (0x760 - 0x630)
// BlueprintGeneratedClass BP_Athena_RuneVent.BP_Athena_RuneVent_C
class ABP_Athena_RuneVent_C : public ABuildingActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x630(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              Effects_Active;                                    // 0x638(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       AmbientAudio;                                      // 0x640(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_Athena_RuneVent_Trigger;                         // 0x648(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     Capsule;                                           // 0x650(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                   Billboard;                                         // 0x658(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  PointLight;                                        // 0x660(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Vent;                                              // 0x668(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene;                                             // 0x670(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         VentIsActive;                                      // 0x678(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_3630[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        ImpulseStrengthPlayer;                             // 0x680(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        ImpulsePlayerZ;                                    // 0x6A0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        ForceMultiplier;                                   // 0x6C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3631[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        ImpulsePlayerZWalking;                             // 0x6C8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class APlayerPawn_Athena_C*                  PlayerTarget;                                      // 0x6E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RuneIndex;                                         // 0x6F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3632[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_IslandScripting_C*                 IslandScripting;                                   // 0x6F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        LaunchXY_Velocity;                                 // 0x700(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        LaunchZ_Velocity;                                  // 0x720(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                LaunchCharacter;                                   // 0x740(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class APlayerPawn_Athena_C*>          RootMotionPlayers;                                 // 0x748(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FTimerHandle                          RootMotionRetryTimer;                              // 0x758(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_Athena_RuneVent_C");
		return Clss;
	}

	void GetLaunchVector(class AActor* ActorToLaunch, struct FVector* LaunchVector, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue);
	void DoLaunchEffects(class AActor* GCTarget, const struct FGameplayCueParameters& CallFunc_BuildCueParametersFromSource_OutCueParameters);
	void OnRep_ForceActive();
	void SetActiveEffects();
	void OnRep_VentIsActive();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void OnWorldReady();
	void TimeReady(const struct FVector& Position);
	void ReplicateGC(class AActor* PlayerTarget);
	void RetryRootMotionPlayer();
	void TryLaunchPlayer();
	void TryLaunchVehicle();
	void ExecuteUbergraph_BP_Athena_RuneVent(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 Temp_int_Array_Index_Variable, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, const struct FVector& CallFunc_GetLaunchVector_LaunchVector, const struct FActiveGameplayEffectHandle& CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, TArray<class ABP_IslandScripting_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_IslandScripting_C* CallFunc_Array_Get_Item, bool CallFunc_HasAuthority_ReturnValue1, bool CallFunc_IsValid_ReturnValue, const struct FVector& K2Node_CustomEvent_Position, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class AActor* K2Node_CustomEvent_PlayerTarget, bool CallFunc_HasAuthority_ReturnValue2, const struct FActiveGameplayEffectHandle& CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue1, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, class AFortAthenaVehicle* K2Node_DynamicCast_AsFort_Athena_Vehicle, bool K2Node_DynamicCast_bSuccess1, const struct FVector& CallFunc_GetLaunchVector_LaunchVector1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_HasAnyRootMotion_ReturnValue, UInterfaceProperty_ CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, class AActor* CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena1, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
