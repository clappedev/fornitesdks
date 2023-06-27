#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x81 (0xC89 - 0xC08)
// WidgetBlueprintGeneratedClass AthenaMatchmakingSpinnerButton.AthenaMatchmakingSpinnerButton_C
class UAthenaMatchmakingSpinnerButton_C : public UFortMatchmakingKnobsSpinnerButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC08(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      In;                                                // 0xC10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Right;                                             // 0xC18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Left;                                              // 0xC20(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               Border_Fill;                                       // 0xC28(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USimpleCommonButton_C*                 LeftButton;                                        // 0xC30(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              LeftButtonSize;                                    // 0xC38(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        OptionSelectionArea;                               // 0xC40(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USimpleCommonButton_C*                 RightButton;                                       // 0xC48(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              RightButtonSize;                                   // 0xC50(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SaveSpinner;                                       // 0xC58(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FString>                        A;                                                 // 0xC60(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FString>                        A_0;                                               // 0xC70(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         DebugOnMobileOrPC;                                 // 0xC80(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsGamepad;                                         // 0xC81(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6048[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Mobile_Size_Override;                              // 0xC84(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  VisibilitySetting;                                 // 0xC88(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaMatchmakingSpinnerButton_C");
		return Clss;
	}

	class UWidget* DoCustomNavigation_0(enum class EUINavigation Navigation);
	void Set_Button_Sizes(bool CallFunc_IsMobileGame_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void InputModeChanged(bool Gamepad);
	void BndEvt__SimpleCommonButton_1_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__SimpleCommonButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void CustomEvent(bool bUsingGamepad);
	void InputUpdated(enum class ECommonInputType bNewInputType);
	void AfterleftisDone();
	void AfterRightIsDone();
	void AnimateIn(int32 Index);
	void OnLoadingStateChanged(bool bCurrentlyLoading);
	void SetSpinnerOptionsVisiblity(bool bVisible);
	void BP_OnDoubleClicked();
	void Construct();
	void BP_OnClicked();
	void ExecuteUbergraph_AthenaMatchmakingSpinnerButton(int32 EntryPoint, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, bool K2Node_CustomEvent_GamePad, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool K2Node_Event_bUsingGamepad, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue_1, class UClass* Temp_class_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, class UClass* Temp_class_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool Temp_bool_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, int32 K2Node_CustomEvent_Index, class UClass* K2Node_Select_Default, float CallFunc_Multiply_IntFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, bool K2Node_Event_bCurrentlyLoading, enum class ESlateVisibility K2Node_Select_Default_1, bool K2Node_Event_bVisible);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
