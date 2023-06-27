#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x98 (0x3E8 - 0x350)
// WidgetBlueprintGeneratedClass ProxyQuickbarSlot_COmbo.ProxyQuickbarSlot_Combo_C
class UProxyQuickbarSlot_Combo_C : public UHUDLayoutToolProxy
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(Transient, DuplicateTransient)
	class UImage*                                Image_0;                                           // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortNumericTextBlock*                 IndexBox;                                          // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EComboSlotType                    SlotType;                                          // 0x368(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_419A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Index;                                             // 0x36C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           Combat_Color;                                      // 0x370(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           Build_Color;                                       // 0x398(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           Combo_Color;                                       // 0x3C0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProxyQuickbarSlot_Combo_C");
		return Clss;
	}

	float BP_GetPropertyValue(int32 PropertyIndex, bool K2Node_SwitchInteger_CmpSuccess, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_ByteToFloat_ReturnValue);
	void SetSlotIndex(int32 NewIndex, class FText CallFunc_Conv_IntToText_ReturnValue);
	void SetSlotType(uint8 Value, uint8 CallFunc_GetValidValue_ReturnValue, enum class EComboSlotType Temp_byte_Variable, const struct FSlateColor& K2Node_Select_Default);
	TArray<class FText> BP_GetMultiOptionLabels(int32 PropertyIndex, TArray<class FText>& K2Node_MakeArray_Array, bool K2Node_SwitchInteger_CmpSuccess);
	class FText BP_GetPropertyName(int32 PropertyIndex, int32 Temp_int_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable1, class FText K2Node_Select_Default);
	int32 BP_GetNumOfProperties();
	void BP_GetPropertyRange(int32 PropertyIndex, float* OutMin, float* OutMax, bool K2Node_SwitchInteger_CmpSuccess);
	enum class ELayoutPropertyType BP_GetPropertyType(int32 PropertyIndex, int32 Temp_int_Variable, enum class ELayoutPropertyType Temp_byte_Variable, enum class ELayoutPropertyType Temp_byte_Variable1, enum class ELayoutPropertyType K2Node_Select_Default);
	void BP_SetPropertyValue(int32 PropertyIndex, float NewValue);
	void ExecuteUbergraph_ProxyQuickbarSlot_Combo(int32 EntryPoint, int32 K2Node_Event_PropertyIndex, float K2Node_Event_NewValue, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Round_ReturnValue1, uint8 CallFunc_Conv_IntToByte_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
