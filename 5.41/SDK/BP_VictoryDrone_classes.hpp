#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x59 (0x3E1 - 0x388)
// BlueprintGeneratedClass BP_VictoryDrone.BP_VictoryDrone_C
class ABP_VictoryDrone_C : public APawn
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x388(0x8)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x390(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              SpawnEffect;                                       // 0x398(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x3A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  SpawnOutAnimEndedDispatcher;                       // 0x3A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        AnimPlayRate;                                      // 0x3B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E23[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              StaticMeshMID;                                     // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TeleportIn;                                        // 0x3C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         IsAthena;                                          // 0x3C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_3E24[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPawn*                             TargetPlayer;                                      // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UParticleSystemComponent*              CharacterAttached;                                 // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InLobby;                                           // 0x3E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_VictoryDrone_C");
		return Clss;
	}

	void NotifyTeleportFinishedTriggered(bool CallFunc_HasAuthority_ReturnValue);
	void PlaySpawnAnim(class UAnimMontage* Montage, float NewLocalVar_0, bool Temp_bool_Variable, class UAnimationAsset* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable1, bool CallFunc_IsValid_ReturnValue1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue2, class UAnimationAsset* Temp_object_Variable1, class UAnimationAsset* Temp_object_Variable2, bool Temp_bool_Variable2, class UAnimationAsset* Temp_object_Variable3, bool Temp_bool_Variable3, const class FString& CallFunc_Conv_BoolToString_ReturnValue, class UAnimationAsset* K2Node_Select_Default, class UAnimationAsset* Temp_object_Variable4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAnimationAsset* K2Node_Select1_Default, class UAnimationAsset* K2Node_Select2_Default, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UAnimationAsset* K2Node_Select3_Default);
	void InitDrone(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_K2_AttachTo_ReturnValue);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnSpawnOutAnimEnded(class UAnimMontage* Montage, bool bInterrupted);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_VictoryDrone(int32 EntryPoint, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class UAnimMontage* K2Node_CustomEvent_Montage, bool K2Node_CustomEvent_bInterrupted, bool CallFunc_K2_SetActorRotation_ReturnValue, float K2Node_Event_DeltaSeconds, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, float CallFunc_K2_GetScalarParameterValue_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue);
	void SpawnOutAnimEndedDispatcher__DelegateSignature(class ABP_VictoryDrone_C* Drone);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
