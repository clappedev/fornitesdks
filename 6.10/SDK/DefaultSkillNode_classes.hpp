#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x151 (0xC91 - 0xB40)
// WidgetBlueprintGeneratedClass DefaultSkillNode.DefaultSkillNode_C
class UDefaultSkillNode_C : public UFortSkillTreeCanvasNode
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB40(0x8)(Transient, DuplicateTransient)
	class UImage*                                GlowOverlay;                                       // 0xB48(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               InternalSpacer;                                    // 0xB50(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SelectionPulseEffect;                              // 0xB58(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        SelectionGlowPercentage;                           // 0xB60(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HoverGlowPercentage;                               // 0xB64(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          HoverGlowTimerHandle;                              // 0xB68(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          SelectionGlowTimerHandle;                          // 0xB70(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FSkillTreePageColors                  PageColors;                                        // 0xB78(0xC0)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	enum class ESkillTreePages                   Pages;                                             // 0xC38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5B17[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSkillTreeGroupColors                 GroupColors;                                       // 0xC3C(0x54)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	enum class ESkillTreeGroups                  Groups;                                            // 0xC90(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DefaultSkillNode_C");
		return Clss;
	}

	void SetBackgroundColor(enum class ESkillTreePages Temp_byte_Variable, enum class ESkillTreePages Temp_byte_Variable1, enum class ESkillTreePages Temp_byte_Variable2, enum class ESkillTreeGroups Temp_byte_Variable3, class UMaterialInstanceDynamic* CallFunc_GetSingleMaterialStyleMID_ReturnValue, const struct FLinearColor& K2Node_Select_Default, const struct FLinearColor& K2Node_Select1_Default, const struct FLinearColor& K2Node_Select2_Default, const struct FLinearColor& K2Node_Select3_Default);
	void UpdateFromButtonState(bool CallFunc_GetSelected_ReturnValue, bool CallFunc_IsHovered_ReturnValue);
	void UpdateSelectionGlow(class UMaterialInstanceDynamic* CallFunc_GetSingleMaterialStyleMID_ReturnValue);
	void UpdateHoverGlow(class UMaterialInstanceDynamic* CallFunc_GetSingleMaterialStyleMID_ReturnValue);
	void StepSelectionGlowInterpolation(float TargetGlowPercentage, bool CallFunc_GetSelected_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_FMin_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool Temp_bool_Variable, float K2Node_Select_Default, bool CallFunc_NotEqual_FloatFloat_ReturnValue);
	void StepHoverGlowInterpolation(float TargetGlowPercentage, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_FMin_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool Temp_bool_Variable, float K2Node_Select_Default, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue);
	void UpdateFromNodeData(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility Temp_byte_Variable2, enum class EFortHomebaseNodeMagnitude Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, class UMaterialInstanceDynamic* CallFunc_GetSingleMaterialStyleMID_ReturnValue, enum class ESlateVisibility Temp_byte_Variable5, const struct FFortSkillTreeNodeDisplayData& CallFunc_TryGetNodeDisplayData_OutDisplayData, bool CallFunc_TryGetNodeDisplayData_ReturnValue, bool Temp_bool_Variable, const struct FHomebaseNode& CallFunc_TryGetStaticSkillTreeNodeData_OutNodeData, bool CallFunc_TryGetStaticSkillTreeNodeData_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_GetSkillTreeNodeSizeByMagnitude_Size, bool CallFunc_GetSkillTreeNodeShapeByDisplayType_IsSquare, bool CallFunc_GetSkillTreeNodeShapeByDisplayType_IsExitNode, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select1_Default);
	void UpdateFromNodeState(class UMaterialInstanceDynamic* CallFunc_GetSingleMaterialStyleMID_ReturnValue, const struct FHomebaseNodeState& CallFunc_TryGetSkillTreeNodeState_OutNodeState, bool CallFunc_TryGetSkillTreeNodeState_ReturnValue);
	void Construct();
	void HandleSkillTreeNodeStateChanged();
	void PreConstruct(bool IsDesignTime);
	void BP_OnUnhovered();
	void BP_OnHovered();
	void BP_OnSelected();
	void BP_OnDeselected();
	void ExecuteUbergraph_DefaultSkillNode(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue2, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue3, const struct FHomebaseNode& CallFunc_TryGetStaticSkillTreeNodeData_OutNodeData, bool CallFunc_TryGetStaticSkillTreeNodeData_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
