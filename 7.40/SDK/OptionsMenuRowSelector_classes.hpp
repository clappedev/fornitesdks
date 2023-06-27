#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x94 (0x2FC - 0x268)
// WidgetBlueprintGeneratedClass OptionsMenuRowSelector.OptionsMenuRowSelector_C
class UOptionsMenuRowSelector_C : public UFortOptionsMenuSetting
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x268(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UIconTextButton_C*                     ButtonTouchTooltip;                                // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor*                           MenuAnchorSettingDescription;                      // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      RowSelectorText;                                   // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        SelectorButtonsBox;                                // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxLabel;                                      // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  Selector_Button_Selected;                          // 0x298(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class FText>                          Hover_Texts;                                       // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UCommonButtonGroup*                    Selector_Buttons;                                  // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Common_Button_Group_Type;                          // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                      Tab_Tooltip_Text;                                  // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                ButtonStyle;                                       // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          Tooltip_Timer;                                     // 0x2D8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FText                                  Hover_Text;                                        // 0x2E0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        PreviousValue;                                     // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptionsMenuRowSelector_C");
		return Clss;
	}

	class UObject* GetListItemObject();
	void Hide_Tooltip();
	void Set_Selection_Required(bool Selection_Required);
	class UWidget* On_Get_Menu_Content(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UTooltip_Basic_S_C* CallFunc_Create_ReturnValue);
	void Show_Tooltip();
	void DisableOption(int32 OptionIndex, class FText CallFunc_MakeLiteralText_ReturnValue, class UCommonButton* CallFunc_GetButtonAtIndex_ReturnValue);
	void Button_Hovered(class UCommonButton* Button_Hovered);
	void Deselect_All_Rows();
	void Update_Row_Selector(int32 Tab_Number);
	void Initialize_Row_Selector(class FText Row_Text, TArray<class FText>& Buttons, TArray<class FText>& Hover_Texts, bool Require_Selection, class UCommonTextBlock* Tab_Tooltip);
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void Construct();
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void Destruct();
	void PreConstruct(bool IsDesignTime);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void UpdateSetting(class UCommonTextBlock* TooltipTextBlock);
	void CenterOnWidget();
	void OnSelectedButtonChanged_Event_0(class UCommonButton* AssociatedButton, int32 ButtonIndex);
	void BndEvt__ButtonTouchTooltip_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_OptionsMenuRowSelector(int32 EntryPoint, class UIconTextButton_C* CallFunc_Create_ReturnValue, int32 CallFunc_GetSelectedButtonIndex_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortSettingsContext* CallFunc_GetContext_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue1, class UFortSettingsContext* CallFunc_GetContext_ReturnValue1, class UFortSettingsContext* CallFunc_GetContext_ReturnValue2, bool Temp_bool_Variable1, int32 Temp_int_Variable2, int32 K2Node_Select_Default, int32 Temp_int_Loop_Counter_Variable, class UCommonButton* CallFunc_GetButtonAtIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, enum class ESlateVisibility Temp_byte_Variable, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected, const struct FPointerEvent& K2Node_Event_MouseEvent1, class UCommonButtonGroup* CallFunc_SpawnObject_ReturnValue, bool K2Node_Event_IsDesignTime, int32 Temp_int_Variable3, int32 CallFunc_Add_IntInt_ReturnValue1, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, enum class ESlateVisibility Temp_byte_Variable1, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue, class UObject* K2Node_Event_ListItemObject, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent, class UFortSettingInfo* K2Node_DynamicCast_AsFort_Setting_Info, bool K2Node_DynamicCast_bSuccess, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, class UCommonTextBlock* K2Node_Event_TooltipTextBlock, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool Temp_bool_Variable2, bool CallFunc_IsMobileGame_ReturnValue1, enum class ESlateVisibility K2Node_Select1_Default, class FText Temp_text_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, enum class ESlateVisibility Temp_byte_Variable2, class UPanelSlot* CallFunc_AddChild_ReturnValue, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize1, class UHorizontalBoxSlot* K2Node_DynamicCast_AsHorizontal_Box_Slot, bool K2Node_DynamicCast_bSuccess1, enum class ESlateVisibility Temp_byte_Variable3, bool CallFunc_IsMobileGame_ReturnValue2, int32 K2Node_Select2_Default, class UCommonButton* K2Node_CustomEvent_AssociatedButton, int32 K2Node_CustomEvent_ButtonIndex, bool Temp_bool_Variable3, enum class ESlateVisibility K2Node_Select3_Default, class UIconTextButton_C* CallFunc_Create_ReturnValue1, TArray<class FText>& CallFunc_GetSettingDisplayNames_ReturnValue, class FText CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue1, class UHorizontalBoxSlot* K2Node_DynamicCast_AsHorizontal_Box_Slot1, bool K2Node_DynamicCast_bSuccess2, int32 CallFunc_GetRotatorSettingValue_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_TextIsEmpty_ReturnValue1);
	void Selector_Button_Selected__DelegateSignature(int32 Tab_Id);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
