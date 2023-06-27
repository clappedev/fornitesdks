#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x64 (0x8FC - 0x898)
// BlueprintGeneratedClass GC_Athena_Storm_Bus.GC_Athena_Storm_Bus_C
class AGC_Athena_Storm_Bus_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x898(0x8)(Transient, DuplicateTransient)
	float                                        Lightining_Flash_LERP_1FC138BF41C8F8C6CC68BAA96F2470A1; // 0x8A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Lightining_Flash__Direction_1FC138BF41C8F8C6CC68BAA96F2470A1; // 0x8A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B02[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Lightining_Flash;                                  // 0x8A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LightningSpawnLocation;                            // 0x8B0(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B03[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Bus_Actor;                                         // 0x8C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        _ChanceOfLightningMesh;                            // 0x8C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LightningFlashDiameter;                            // 0x8CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LightningFlashHeight;                              // 0x8D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B04[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPointLightComponent*                  RandomLightningLight;                              // 0x8D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LightningIntensityMin;                             // 0x8E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LightningIntensityMax;                             // 0x8E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LightningIntensity;                                // 0x8E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LightningTimelinePlaySpeedMin;                     // 0x8EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LightningTimelinePlaySpeedMax;                     // 0x8F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LightningFlashRepeatDelayMin;                      // 0x8F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LightningFlashRepeatDelayMax;                      // 0x8F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GC_Athena_Storm_Bus_C");
		return Clss;
	}

	void Get_Location_in_Circle_XY(struct FVector* LocationLocalSpace, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_RandomFloat_ReturnValue, float CallFunc_GetPI_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, float CallFunc_Cos_ReturnValue, float CallFunc_Sin_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue2, const struct FVector& CallFunc_MakeVector_ReturnValue1, const struct FVector& CallFunc_VLerp_ReturnValue);
	void UserConstructionScript();
	void Lightining_Flash__FinishedFunc();
	void Lightining_Flash__UpdateFunc();
	void StartRandomLightningFlashes();
	void OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents);
	void Play_Lightning_Flash_Audio(const struct FVector& Location);
	void ExecuteUbergraph_GC_Athena_Storm_Bus(int32 EntryPoint, float Temp_float_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTransform& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, class UPointLightComponent* CallFunc_AddComponent_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, bool Temp_bool_Variable, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float K2Node_Select_Default, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FTransform& CallFunc_MakeTransform_ReturnValue, float CallFunc_RandomFloat_ReturnValue, class AActor* CallFunc_SpawnPooledFXActor_ReturnValue, class ALightningLsystem_C* K2Node_DynamicCast_AsLightning_Lsystem, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_FloatFloat_ReturnValue, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Get_Location_in_Circle_XY_LocationLocalSpace, const struct FVector& K2Node_CustomEvent_Location, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, float CallFunc_BreakVector_X1, float CallFunc_BreakVector_Y1, float CallFunc_BreakVector_Z1, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
