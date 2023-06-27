#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x30 (0x3C8 - 0x398)
// BlueprintGeneratedClass GC_NPC_Elemental_Lightning.GC_NPC_Elemental_Lightning_C
class AGC_NPC_Elemental_Lightning_C : public AGameplayCueNotify_Actor
{
public:
	class UParticleSystemComponent*              Lightning_Elemental_FX;                            // 0x398(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x3A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    Elemental_Material;                                // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                     Elemental_Physical_Material;                       // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Delay_Time_for_Restore_Previous_Material;          // 0x3B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_400F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortFeedbackBank*                     Elemental_Feedback;                                // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GC_NPC_Elemental_Lightning_C");
		return Clss;
	}

	bool WhileActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class AEnemyPawn_Parent_C* K2Node_DynamicCast_AsEnemy_Pawn_Parent, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam1, class AActor* CallFunc_GetOwner_ReturnValue, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam2, int32 CallFunc_Array_AddUnique_ReturnValue, TArray<struct FParticleSysParam>& K2Node_MakeArray_Array, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue);
	void Death_FX_Setup(bool Remove, class AEnemyPawn_Parent_C* Pawn);
	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class AEnemyPawn_Parent_C* K2Node_DynamicCast_AsEnemy_Pawn_Parent, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, class UParticleSystemComponent* Temp_object_Variable, bool CallFunc_Array_RemoveItem_ReturnValue1);
	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
