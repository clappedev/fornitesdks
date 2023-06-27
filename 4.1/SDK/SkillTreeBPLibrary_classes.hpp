#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass SkillTreeBPLibrary.SkillTreeBPLibrary_C
class USkillTreeBPLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SkillTreeBPLibrary_C");
		return Clss;
	}

	void GetSkillTreeNodeIconSizeByMagnitude(enum class EFortHomebaseNodeMagnitude Node_Magnitude, class UObject* __WorldContext, enum class EFortBrushSize* Icon_Size, enum class EFortHomebaseNodeMagnitude Temp_byte_Variable, enum class EFortBrushSize Temp_byte_Variable1, enum class EFortBrushSize Temp_byte_Variable12, enum class EFortBrushSize Temp_byte_Variable123, enum class EFortBrushSize Temp_byte_Variable1234, enum class EFortBrushSize K2Node_Select_Default);
	void GetSkillTreeNodeShapeByDisplayType(enum class EFortHomebaseNodeDisplayType Display_Type, class UObject* __WorldContext, bool* IsSquare, bool* IsExitNode, enum class EFortHomebaseNodeDisplayType Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable1, bool Temp_bool_Variable12, bool Temp_bool_Variable123, bool Temp_bool_Variable1234, bool Temp_bool_Variable12345, bool Temp_bool_Variable123456, enum class EFortHomebaseNodeDisplayType Temp_byte_Variable1, bool K2Node_Select_Default, bool Temp_bool_Variable1234567, bool Temp_bool_Variable12345678, bool Temp_bool_Variable123456789, bool Temp_bool_Variable12345678910, bool Temp_bool_Variable1234567891011, bool Temp_bool_Variable123456789101112, bool Temp_bool_Variable12345678910111213, bool K2Node_Select1_Default);
	void GetSkillTreeNodeSizeByMagnitude(enum class EFortHomebaseNodeMagnitude Node_Magnitude, enum class EFortHomebaseNodeDisplayType Display_Type, class UObject* World_Context, class UObject* __WorldContext, float* Size, bool Temp_bool_Variable, bool CallFunc_GetSkillTreeNodeShapeByDisplayType_IsSquare, bool CallFunc_GetSkillTreeNodeShapeByDisplayType_IsExitNode, float Temp_float_Variable, float Temp_float_Variable1, enum class EFortHomebaseNodeMagnitude Temp_byte_Variable, float K2Node_Select_Default, float Temp_float_Variable12, float Temp_float_Variable123, float Temp_float_Variable1234, float K2Node_Select1_Default);
	void UpdateSkillTreeNodeMaterial_DynamicData(class UObject* World_Context, class UMaterialInstanceDynamic* Material, const struct FHomebaseNodeState& NodeState, class UObject* __WorldContext, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue12);
	void GetSkillTreeNodeCostTint(struct FHomebaseNode& HomebaseNode, class UObject* __WorldContext, struct FLinearColor* NodeTintColour, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortHomebaseUIContext* CallFunc_GetContext_ReturnValue1, const struct FSlateColor& CallFunc_GetQuestNodeColour_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FFortItemQuantityPair& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class UFortItemDefinition* CallFunc_GetItemFromItemQuantityPair_ReturnValue, class UFortTokenType* K2Node_DynamicCast_AsFort_Token_Type, bool K2Node_DynamicCast_bSuccess);
	void UpdateSkillTreeNodeMaterial_StaticData(class UObject* World_Context, class UMaterialInstanceDynamic* Material, struct FHomebaseNode& NodeData, const struct FFortSkillTreeNodeDisplayData& DisplayData, class UCommonButton* Button, class UObject* __WorldContext, class UClass* Temp_class_Variable, enum class EFortBrushSize CallFunc_GetSkillTreeNodeIconSizeByMagnitude_Icon_Size, bool K2Node_SwitchEnum_CmpSuccess, const struct FSlateBrush& CallFunc_GetBrushBySizeFromMultiSizeBrush_ReturnValue, const struct FLinearColor& CallFunc_GetSkillTreeNodeCostTint_NodeTintColour, class UTexture2D* CallFunc_GetBrushResourceAsTexture2D_ReturnValue, class UClass* Temp_class_Variable1, class UClass* Temp_class_Variable12, class UClass* Temp_class_Variable123, enum class EFortHomebaseNodeMagnitude Temp_byte_Variable, class UClass* K2Node_Select_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
