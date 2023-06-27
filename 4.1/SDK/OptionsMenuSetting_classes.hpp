#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x108 (0x328 - 0x220)
// WidgetBlueprintGeneratedClass OptionsMenuSetting.OptionsMenuSetting_C
class UOptionsMenuSetting_C : public UFortOptionsMenuSetting
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(Transient, DuplicateTransient)
	class UButton*                               Button_0;                                          // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonLeft;                                        // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonRight;                                       // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ButtonTouchTooltip;                                // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 CommonWidgetSwitcher_0;                            // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor*                           MenuAnchorSettingDescription;                      // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAnalogSlider*                         MenuSlider;                                        // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxContainer;                                  // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxLabel;                                      // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SliderBackground;                                  // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      SliderText;                                        // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      SliderValue;                                       // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               SpacerBottom;                                      // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextHeader;                                        // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextRotator_C*                        TextRotator;                                       // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  SettingValueChanged;                               // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        Total_Width;                                       // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DCB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              Slider_Texture;                                    // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                      Tab_Tooltip_Text;                                  // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Hover_Text;                                        // 0x2D0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        MinIntegralDigits;                                 // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxIntegralDigits;                                 // 0x2EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MinFractionalDigits;                               // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxFractionalDigits;                               // 0x2F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxSensitivityValue;                               // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinSensitivityValue;                               // 0x2FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERoundingMode                     RoundingMode;                                      // 0x300(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DCC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  NameText;                                          // 0x308(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                          Tooltip_Timer;                                     // 0x320(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptionsMenuSetting_C");
		return Clss;
	}

	int32 DoesItemHaveChildren();
	int32 GetIndentLevel();
	bool IsItemExpanded();
	class UObject* GetData();
	void Hide_Tooltip();
	void Show_Tooltip();
	class UWidget* OnGetMenuContent(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UTooltip_Basic_S_C* CallFunc_Create_ReturnValue);
	void HandlePawnSet(bool bRCPawn, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AFortRemoteControlledPawnAthena* K2Node_DynamicCast_AsFort_Remote_Controlled_Pawn_Athena, bool K2Node_DynamicCast_bSuccess);
	void UpdateSize(const struct FVector2D& LargeSize, const struct FVector2D& SmallSize, bool Temp_bool_Variable, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable1, bool Temp_bool_Variable1, bool Temp_bool_Variable12, int32 Temp_int_Variable, int32 Temp_int_Variable1, bool Temp_bool_Variable123, bool CallFunc_IsBROnly_ReturnValue, bool CallFunc_IsBROnly_ReturnValue1, const struct FVector2D& K2Node_Select_Default, float Temp_float_Variable, bool CallFunc_IsBROnly_ReturnValue12, float Temp_float_Variable1, const struct FVector2D& K2Node_Select1_Default, bool CallFunc_IsBROnly_ReturnValue123, bool CallFunc_IsBROnly_ReturnValue1234, int32 K2Node_Select12_Default, bool Temp_bool_Variable1234, const struct FVector2D& K2Node_Select123_Default, float K2Node_Select1234_Default);
	void Update_Setting(class UCommonTextBlock* Tooltip_Text_Block, class FName CallFunc_MakeLiteralName_ReturnValue, float CallFunc_GetSettingValue_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue);
	void Center_on_Widget(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue1);
	void Private_OnExpanderArrowShiftClicked();
	void RegisterOnClicked(UDelegateProperty_& Callback);
	void SetExpanded(bool bExpanded);
	void SetIndexInList(int32 InIndexInList);
	void SetSelected(bool bSelected);
	void ToggleExpansion();
	void Reset();
	void Construct();
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void BndEvt__MenuSlider_K2Node_ComponentBoundEvent_86_OnMouseCaptureEndEvent__DelegateSignature();
	void BndEvt__MenuSlider_K2Node_ComponentBoundEvent_107_OnControllerCaptureEndEvent__DelegateSignature();
	void BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BndEvt__TextRotator_K2Node_ComponentBoundEvent_20_OnRotated__DelegateSignature(int32 Value);
	void SetData(class UObject* InData, class UCommonListView* OwningList);
	void OnReleaseToPool();
	void BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonRight_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnAcquireFromPool();
	void BndEvt__MenuAnchorSettingDescription_K2Node_ComponentBoundEvent_22_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
	void BndEvt__ButtonTouchTooltip_K2Node_ComponentBoundEvent_69_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_OptionsMenuSetting(int32 EntryPoint, bool CallFunc_IsMobileGame_ReturnValue, float Temp_float_Variable, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable1, bool Temp_bool_Variable1, int32 Temp_int_Variable12, int32 Temp_int_Variable123, bool Temp_bool_Variable12, int32 Temp_int_Variable1234, int32 Temp_int_Variable12345, bool Temp_bool_Variable123, float Temp_float_Variable1, float Temp_float_Variable12, bool Temp_bool_Variable1234, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable12345, enum class ESlateVisibility Temp_byte_Variable12, enum class ESlateVisibility Temp_byte_Variable123, bool Temp_bool_Variable123456, enum class ESlateVisibility Temp_byte_Variable1234, enum class ESlateVisibility Temp_byte_Variable12345, bool Temp_bool_Variable1234567, enum class ESlateVisibility Temp_byte_Variable123456, enum class ESlateVisibility Temp_byte_Variable1234567, UDelegateProperty_ K2Node_Event_Callback, enum class ESlateVisibility K2Node_Select_Default, bool K2Node_Event_bExpanded, int32 K2Node_Event_InIndexInList, bool K2Node_Event_bSelected, class FName CallFunc_MakeLiteralName_ReturnValue, const struct FPointerEvent& K2Node_Event_MouseEvent1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent, float K2Node_ComponentBoundEvent_Value12, float K2Node_ComponentBoundEvent_Value1, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& K2Node_MakeStruct_LinearColor1, float CallFunc_GetValue_ReturnValue, float CallFunc_GetValue_ReturnValue1, float CallFunc_GetValue_ReturnValue12, bool CallFunc_Less_FloatFloat_ReturnValue, float Temp_float_Variable123, int32 K2Node_ComponentBoundEvent_Value, float CallFunc_Conv_IntToFloat_ReturnValue, class UObject* K2Node_Event_InData, class UCommonListView* K2Node_Event_OwningList, class UFortSettingInfo* K2Node_DynamicCast_AsFort_Setting_Info, bool K2Node_DynamicCast_bSuccess, int32 K2Node_Select1_Default, int32 K2Node_Select12_Default, int32 K2Node_Select123_Default, float K2Node_Select1234_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue12, int32 CallFunc_Conv_ByteToInt_ReturnValue, TArray<class FText>& CallFunc_GetSettingDisplayNames_ReturnValue, bool Temp_bool_Variable12345678, bool Temp_bool_Variable123456789, float K2Node_Select12345_Default, float K2Node_Select123456_Default, float CallFunc_Multiply_FloatFloat_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button12, class UCommonButton* K2Node_ComponentBoundEvent_Button1, bool K2Node_ComponentBoundEvent_bIsOpen, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue1, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility K2Node_Select1234567_Default, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_TextIsEmpty_ReturnValue1, bool CallFunc_IsMobileGame_ReturnValue12, enum class ESlateVisibility K2Node_Select12345678_Default, bool CallFunc_IsMobileGame_ReturnValue123, enum class ESlateVisibility K2Node_Select123456789_Default);
	void SettingValueChanged__DelegateSignature(float Slider_Value);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
