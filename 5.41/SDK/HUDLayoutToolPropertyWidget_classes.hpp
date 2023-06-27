#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x49 (0x289 - 0x240)
// WidgetBlueprintGeneratedClass HUDLayoutToolPropertyWidget.HUDLayoutToolPropertyWidget_C
class UHUDLayoutToolPropertyWidget_C : public UHUDLayoutToolPropertyWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x240(0x8)(Transient, DuplicateTransient)
	class UButton*                               Button_BoolToggle;                                 // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          CheckBoxBox;                                       // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Checked;                                     // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Unchecked;                                   // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                    RotatorSelector;                                   // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          SliderBox;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       Switcher;                                          // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       Switcher_CheckBox;                                 // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class ELayoutPropertyType               CurrentPropertyType;                               // 0x288(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HUDLayoutToolPropertyWidget_C");
		return Clss;
	}

	void SetPropertyType(enum class ELayoutPropertyType NewPropertyType);
	void SetBoolValue(bool bNewValue);
	void BndEvt__Button_BoolToggle_K2Node_ComponentBoundEvent_139_OnButtonPressedEvent__DelegateSignature();
	void RefreshProperties();
	void OnRotatorChanged(int32 Selected_Index);
	void ExecuteUbergraph_HUDLayoutToolPropertyWidget(int32 EntryPoint, int32 K2Node_CustomEvent_Selected_Index, enum class ELayoutPropertyType Temp_byte_Variable, bool Temp_bool_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ELayoutPropertyType K2Node_Event_NewPropertyType, bool K2Node_Event_bNewValue, bool CallFunc_GetCurrentValueAsBool_ReturnValue, class UWidget* K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue, class UWidget* K2Node_Select1_Default, int32 CallFunc_GetCurrentValueAsInt_ReturnValue, TArray<class FText>& CallFunc_GetRotatorLabels_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
