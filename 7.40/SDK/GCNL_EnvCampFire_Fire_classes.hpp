#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x58 (0x8D8 - 0x880)
// BlueprintGeneratedClass GCNL_EnvCampFire_Fire.GCNL_EnvCampFire_Fire_C
class AGCNL_EnvCampFire_Fire_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x880(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Darken_Logs_Lerp_Control_8B15C9BD454B1B355EEA4D88228A7E96; // 0x888(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Darken_Logs__Direction_8B15C9BD454B1B355EEA4D88228A7E96; // 0x88C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_51F5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Darken_Logs;                                       // 0x890(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        Row_TickInterval;                                  // 0x898(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        Row_MaxHeals;                                      // 0x8B8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCNL_EnvCampFire_Fire_C");
		return Clss;
	}

	void UserConstructionScript();
	void Darken_Logs__FinishedFunc();
	void Darken_Logs__UpdateFunc();
	void OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents);
	void OnRemoval(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void ExecuteUbergraph_GCNL_EnvCampFire_Fire(int32 EntryPoint, float CallFunc_GetValueAtLevel_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class AActor* K2Node_Event_MyTarget1, const struct FGameplayCueParameters& K2Node_Event_Parameters1, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents1, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents1, int32 Temp_int_Array_Index_Variable1, class UParticleSystemComponent* CallFunc_Array_Get_Item, class UParticleSystemComponent* CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue, class AB_BGA_Athena_EnvCampFire_C* K2Node_DynamicCast_AsB_BGA_Athena_Env_Camp_Fire, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class UCameraShake* K2Node_Event_BurstCameraShakeInstance, class ADecalActor* K2Node_Event_BurstDecalInstance, class UParticleSystemComponent* CallFunc_Array_Get_Item2, int32 CallFunc_Array_Length_ReturnValue1, class AB_BGA_Athena_EnvCampFire_C* K2Node_DynamicCast_AsB_BGA_Athena_Env_Camp_Fire1, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_Less_IntInt_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, int32 Temp_int_Loop_Counter_Variable1, bool CallFunc_Less_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue1, float CallFunc_Lerp_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
