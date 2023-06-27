#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x58 (0x8F0 - 0x898)
// BlueprintGeneratedClass GC_Perk_Assassination_Active.GC_Perk_Assassination_Active_C
class AGC_Perk_Assassination_Active_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x898(0x8)(Transient, DuplicateTransient)
	class UClass*                                GE_Assassination_T01;                              // 0x8A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_Assassination_T02;                              // 0x8A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Stacks_T01;                                        // 0x8B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Stacks_T02;                                        // 0x8B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasT02;                                            // 0x8B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_49FF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 TC_Assassination_T02;                              // 0x8C0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        Large_FXActive_Lvl;                                // 0x8E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A00[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              LoopingParticle;                                   // 0x8E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GC_Perk_Assassination_Active_C");
		return Clss;
	}

	void HandleFX(class AActor* Target, class UParticleSystemComponent* ParticleSystem, bool CallFunc_IsValid_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue1, float CallFunc_SelectFloat_ReturnValue, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue1, float CallFunc_Conv_IntToFloat_ReturnValue2, float CallFunc_Lerp_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_FClamp_ReturnValue1, int32 CallFunc_GetGameplayEffectCount_ReturnValue, int32 CallFunc_GetGameplayEffectCount_ReturnValue1);
	void UserConstructionScript();
	void OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents);
	void OnApplication(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void ExecuteUbergraph_GC_Perk_Assassination_Active(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class AActor* K2Node_Event_MyTarget1, const struct FGameplayCueParameters& K2Node_Event_Parameters1, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents1, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents1, class UParticleSystemComponent* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue1, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class UCameraShake* K2Node_Event_BurstCameraShakeInstance, class ADecalActor* K2Node_Event_BurstDecalInstance, bool CallFunc_IsValid_ReturnValue2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
