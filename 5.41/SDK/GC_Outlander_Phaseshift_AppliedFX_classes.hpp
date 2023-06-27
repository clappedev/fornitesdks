#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x68 (0x900 - 0x898)
// BlueprintGeneratedClass GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C
class AGC_Outlander_Phaseshift_AppliedFX_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x898(0x8)(Transient, DuplicateTransient)
	class UPostProcessComponent*                 Teleport_PostProcess;                              // 0x8A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Teleport_PP_TL_PP_6347A40E47BF409410B4188DE9502B23; // 0x8A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Teleport_PP_TL__Direction_6347A40E47BF409410B4188DE9502B23; // 0x8AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4C29[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Teleport_PP_TL;                                    // 0x8B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Phase_Shift_Activation_Timeline_Sweep_6835A456414AB2F2B480A5A3FF3B8FB9; // 0x8B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Phase_Shift_Activation_Timeline_Opacity_6835A456414AB2F2B480A5A3FF3B8FB9; // 0x8BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Phase_Shift_Activation_Timeline__Direction_6835A456414AB2F2B480A5A3FF3B8FB9; // 0x8C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4C2A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Phase_Shift_Activation_Timeline;                   // 0x8C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    Phase_Shift_Material;                              // 0x8D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          Dust_Emitters;                                     // 0x8D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ABP_SplineVolumeTrail_v1b_C*           TeleportSpline;                                    // 0x8E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USkeletalMeshComponent*>        DuplicateMeshes;                                   // 0x8F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GC_Outlander_Phaseshift_AppliedFX_C");
		return Clss;
	}

	void UserConstructionScript();
	void Phase_Shift_Activation_Timeline__FinishedFunc();
	void Phase_Shift_Activation_Timeline__UpdateFunc();
	void Teleport_PP_TL__FinishedFunc();
	void Teleport_PP_TL__UpdateFunc();
	void OnApplication(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnRemoval(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents);
	void Activate_PP();
	void Remove_PP();
	void Spawn_Spline_Actor(class APlayerPawn_Outlander_C* Player_Pawn);
	void Stop_Splines_if_Valid();
	void ExecuteUbergraph_GC_Outlander_Phaseshift_AppliedFX(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetVisualEffectQuality_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue1, int32 CallFunc_GetVisualEffectQuality_ReturnValue1, bool K2Node_SwitchInteger1_CmpSuccess, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue2, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_GetVisualEffectQuality_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_SwitchInteger2_CmpSuccess, int32 Temp_int_Array_Index_Variable1, class AActor* K2Node_Event_MyTarget2, const struct FGameplayCueParameters& K2Node_Event_Parameters2, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents2, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents2, class UCameraShake* K2Node_Event_BurstCameraShakeInstance1, class ADecalActor* K2Node_Event_BurstDecalInstance1, class AActor* K2Node_Event_MyTarget1, const struct FGameplayCueParameters& K2Node_Event_Parameters1, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents1, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents1, class UCameraShake* K2Node_Event_BurstCameraShakeInstance, class ADecalActor* K2Node_Event_BurstDecalInstance, class APlayerPawn_Outlander_C* K2Node_DynamicCast_AsPlayer_Pawn_Outlander, bool K2Node_DynamicCast_bSuccess, class APlayerPawn_Outlander_C* K2Node_DynamicCast_AsPlayer_Pawn_Outlander1, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue1, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class UParticleSystemComponent* CallFunc_Array_Get_Item, class APlayerPawn_Outlander_C* K2Node_DynamicCast_AsPlayer_Pawn_Outlander2, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_IsLocallyControlled_ReturnValue2, TArray<class USkeletalMeshComponent*>& K2Node_MakeArray_Array, bool CallFunc_IsMovingOnGround_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue2, float CallFunc_Divide_FloatFloat_ReturnValue3, class FName CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, class APlayerPawn_Outlander_C* K2Node_CustomEvent_Player_Pawn, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue3, const struct FTransform& CallFunc_GetTransform_ReturnValue, int32 CallFunc_GetVisualEffectQuality_ReturnValue3, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool K2Node_SwitchInteger3_CmpSuccess, class ABP_SplineVolumeTrail_v1b_C* CallFunc_FinishSpawningActor_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum1_CmpSuccess, bool CallFunc_IsValid_ReturnValue, class USkeletalMeshComponent* CallFunc_Array_Get_Item2, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue1, bool CallFunc_IsValid_ReturnValue1, class FName Temp_name_Variable);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
