#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x8C (0x5E4 - 0x558)
// BlueprintGeneratedClass GC_Generic_AdrenalineRush_DirectHeal_Latent.GC_Generic_AdrenalineRush_DirectHeal_Latent_C
class AGC_Generic_AdrenalineRush_DirectHeal_Latent_C : public AFortGameplayCueNotify_BurstLatent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x558(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        HealthSweep_SafetyOpacity_AEAC519D4817261537105281CD9192C7; // 0x560(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HealthSweep_Sweep_AEAC519D4817261537105281CD9192C7; // 0x564(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                HealthSweep__Direction_AEAC519D4817261537105281CD9192C7; // 0x568(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F5B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    HealthSweep;                                       // 0x570(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       My_Target;                                         // 0x578(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>      Duplicate_MIDs;                                    // 0x580(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USkeletalMeshComponent*                Duplicate_Head;                                    // 0x590(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Duplicate_Body;                                    // 0x598(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Duplicate_Hat;                                     // 0x5A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Duplicate_Backpack;                                // 0x5A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Duplicate_Charm;                                   // 0x5B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Duplicate_Face;                                    // 0x5B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Adrenaline_Rush_Color_Outer_Direct;                // 0x5C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Adrenaline_Rush_Color_Inner_Direct;                // 0x5D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Adrenaline_Rush_WPO_Offset;                        // 0x5E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GC_Generic_AdrenalineRush_DirectHeal_Latent_C");
		return Clss;
	}

	void Destroy_Meshes(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsValid_ReturnValue4, bool CallFunc_IsValid_ReturnValue5);
	void Duplicate_Meshes(class AFortPlayerPawn* Player_Pawn, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue1, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue2, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue2, bool CallFunc_IsValid_ReturnValue2, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue3, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue3, bool CallFunc_IsValid_ReturnValue3, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue4, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue4, bool CallFunc_IsValid_ReturnValue4, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue5, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue5, bool CallFunc_IsValid_ReturnValue5, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue6, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue7, class UMaterialInterface* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable1, const struct FTransform& Temp_struct_Variable, class UMaterialInterface* CallFunc_Array_Get_Item1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Array_Index_Variable2, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue8, class UMaterialInterface* CallFunc_Array_Get_Item2, int32 CallFunc_Array_Length_ReturnValue2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue1, int32 Temp_int_Array_Index_Variable3, int32 Temp_int_Loop_Counter_Variable1, class UMaterialInterface* CallFunc_Array_Get_Item3, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, int32 Temp_int_Loop_Counter_Variable2, bool CallFunc_K2_AttachToComponent_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, const struct FTransform& Temp_struct_Variable1, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue9, int32 CallFunc_Array_Length_ReturnValue3, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue1, int32 Temp_int_Array_Index_Variable4, class UMaterialInterface* CallFunc_Array_Get_Item4, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue2, int32 CallFunc_Array_Add_ReturnValue2, int32 Temp_int_Array_Index_Variable5, class UMaterialInterface* CallFunc_Array_Get_Item5, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue3, int32 CallFunc_Array_Add_ReturnValue3, int32 Temp_int_Loop_Counter_Variable3, int32 Temp_int_Loop_Counter_Variable4, bool CallFunc_Less_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue3, bool CallFunc_Less_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue4, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue4, bool CallFunc_K2_AttachToComponent_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue4, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue10, int32 Temp_int_Loop_Counter_Variable5, int32 CallFunc_Array_Length_ReturnValue4, bool CallFunc_Less_IntInt_ReturnValue3, bool CallFunc_Less_IntInt_ReturnValue4, int32 CallFunc_Add_IntInt_ReturnValue5, const struct FTransform& Temp_struct_Variable2, const struct FTransform& Temp_struct_Variable3, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue2, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue3, const struct FTransform& Temp_struct_Variable4, bool CallFunc_K2_AttachToComponent_ReturnValue2, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue4, bool CallFunc_K2_AttachToComponent_ReturnValue3, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue5, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue11, int32 CallFunc_Array_Add_ReturnValue5, int32 CallFunc_Array_Length_ReturnValue5, bool CallFunc_Less_IntInt_ReturnValue5, const struct FTransform& Temp_struct_Variable5, bool CallFunc_K2_AttachToComponent_ReturnValue4, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue5, bool CallFunc_K2_AttachToComponent_ReturnValue5);
	void Set_Adrenaline_Rush_Visibility(bool Visible, class AFortPlayerPawn* Player_Pawn, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void UserConstructionScript();
	void HealthSweep__FinishedFunc();
	void HealthSweep__UpdateFunc();
	void K2_HandleGameplayCue(class AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters);
	void ExecuteUbergraph_GC_Generic_AdrenalineRush_DirectHeal_Latent(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AActor* K2Node_Event_MyTarget, enum class EGameplayCueEvent K2Node_Event_EventType, const struct FGameplayCueParameters& K2Node_Event_Parameters, bool K2Node_SwitchEnum_CmpSuccess, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
