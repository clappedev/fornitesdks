#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0xB8 (0x428 - 0x370)
// WidgetBlueprintGeneratedClass ProxyQuickbarSlot_COmbo.ProxyQuickbarSlot_Combo_C
class UProxyQuickbarSlot_Combo_C : public UHUDLayoutToolProxy
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x370(0x8)(Transient, DuplicateTransient)
	class UImage*                                Blank;                                             // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       BuildingSwitcher;                                  // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Ceiling;                                           // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       CombatSwitcher;                                    // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Combo;                                             // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Floor;                                             // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Gun;                                               // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortNumericTextBlock*                 IndexBox;                                          // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Pickaxe;                                           // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ResizeBox;                                         // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Stairs;                                            // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       TypeSwitcher;                                      // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Wall;                                              // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EComboSlotType                    SlotType;                                          // 0x3E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F46[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Index;                                             // 0x3EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Combat_Color;                                      // 0x3F0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Build_Color;                                       // 0x400(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Combo_Color;                                       // 0x410(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Button_Size;                                       // 0x420(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Default_Button_Size;                               // 0x424(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProxyQuickbarSlot_Combo_C");
		return Clss;
	}

	void SetSlotSize(float Slot_Size, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
	float BP_GetPropertyValue(int32 PropertyIndex, bool K2Node_SwitchInteger_CmpSuccess, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_ByteToFloat_ReturnValue);
	void SetSlotIndex(int32 NewIndex, int32 Temp_int_Variable, bool Temp_bool_Variable, class FText CallFunc_Conv_IntToText_ReturnValue, class UWidget* K2Node_Select_Default, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UWidget* K2Node_Select1_Default);
	void SetSlotType(uint8 Value, enum class EComboSlotType Temp_byte_Variable, uint8 CallFunc_GetValidValue_ReturnValue, enum class EComboSlotType Temp_byte_Variable1, class UWidget* K2Node_Select_Default, const struct FLinearColor& K2Node_Select1_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	TArray<class FText> BP_GetMultiOptionLabels(int32 PropertyIndex, TArray<class FText>& K2Node_MakeArray_Array, bool K2Node_SwitchInteger_CmpSuccess);
	class FText BP_GetPropertyName(int32 PropertyIndex, int32 Temp_int_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable1, class FText Temp_text_Variable2, class FText K2Node_Select_Default);
	int32 BP_GetNumOfProperties();
	void BP_GetPropertyRange(int32 PropertyIndex, float* OutMin, float* OutMax, bool K2Node_SwitchInteger_CmpSuccess);
	enum class ELayoutPropertyType BP_GetPropertyType(int32 PropertyIndex, int32 Temp_int_Variable, enum class ELayoutPropertyType Temp_byte_Variable, enum class ELayoutPropertyType Temp_byte_Variable1, enum class ELayoutPropertyType Temp_byte_Variable2, enum class ELayoutPropertyType K2Node_Select_Default);
	void BP_SetPropertyValue(int32 PropertyIndex, float NewValue);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ProxyQuickbarSlot_Combo(int32 EntryPoint, int32 K2Node_Event_PropertyIndex, float K2Node_Event_NewValue, bool K2Node_Event_IsDesignTime, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Round_ReturnValue1, uint8 CallFunc_Conv_IntToByte_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
